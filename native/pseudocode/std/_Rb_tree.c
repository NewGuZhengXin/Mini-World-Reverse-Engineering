// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std::_Rb_tree

//======================================================================
// std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::string>,std::_Select1st<std::pair<unsigned int const,std::string>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::string>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,std::string>> *)
// address: 0x001467A0   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::string>,std::_Select1st<std::pair<unsigned int const,std::string>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::string>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::string>,std::_Select1st<std::pair<unsigned int const,std::string>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::string>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    sub_3BDF80(a2 + 5);
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::string>,std::_Select1st<std::pair<unsigned int const,std::string>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::string>>>::_M_insert_equal(std::pair<unsigned int const,std::string> const&)
// address: 0x001467C8   size: 0x6C (108 bytes)
//======================================================================
int __fastcall std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::string>,std::_Select1st<std::pair<unsigned int const,std::string>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::string>>>::_M_insert_equal(
        _DWORD *a1,
        _DWORD *a2)
{
  _DWORD *v2; // r3
  _DWORD *v5; // r6
  _DWORD *v6; // r2
  _BOOL4 v7; // r3
  int v8; // r0
  int v9; // r4
  _BOOL4 v11; // [sp+0h] [bp-Ch]
  _DWORD *v12; // [sp+4h] [bp-8h]

  v2 = (_DWORD *)a1[2];
  v12 = a1 + 1;
  v5 = a1 + 1;
  while ( v2 != nullptr )
  {
    if ( *a2 >= v2[4] )
      v6 = (_DWORD *)v2[3];
    else
      v6 = (_DWORD *)v2[2];
    v5 = v2;
    v2 = v6;
  }
  v7 = v5 == v12 || *a2 < v5[4];
  v11 = v7;
  v8 = operator new(0x18u);
  v9 = v8;
  if ( v8 != -16 )
  {
    *(_DWORD *)(v8 + 16) = *a2;
    sub_3BEB1C(v8 + 20, a2 + 1);
  }
  sub_391E64(v11, v9, v5, v12);
  ++a1[5];
  return v9;
}


//======================================================================
// std::_Rb_tree<unsigned long long,std::pair<unsigned long long const,unsigned int>,std::_Select1st<std::pair<unsigned long long const,unsigned int>>,std::less<unsigned long long>,std::allocator<std::pair<unsigned long long const,unsigned int>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned long long const,unsigned int>> *)
// address: 0x00149F38   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<unsigned long long,std::pair<unsigned long long const,unsigned int>,std::_Select1st<std::pair<unsigned long long const,unsigned int>>,std::less<unsigned long long>,std::allocator<std::pair<unsigned long long const,unsigned int>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<unsigned long long,std::pair<unsigned long long const,unsigned int>,std::_Select1st<std::pair<unsigned long long const,unsigned int>>,std::less<unsigned long long>,std::allocator<std::pair<unsigned long long const,unsigned int>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<unsigned long long,std::pair<unsigned long long const,unsigned int>,std::_Select1st<std::pair<unsigned long long const,unsigned int>>,std::less<unsigned long long>,std::allocator<std::pair<unsigned long long const,unsigned int>>>::_M_get_insert_unique_pos(unsigned long long const&)
// address: 0x00149FE2   size: 0x6E (110 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<unsigned long long,std::pair<unsigned long long const,unsigned int>,std::_Select1st<std::pair<unsigned long long const,unsigned int>>,std::less<unsigned long long>,std::allocator<std::pair<unsigned long long const,unsigned int>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _QWORD *a3)
{
  int v4; // r2
  int v6; // r3
  int v7; // r0
  int v8; // r6
  int v9; // r6

  v4 = *(_DWORD *)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != 0 )
  {
    if ( *(_QWORD *)(v4 + 16) <= *a3 )
    {
      v8 = *(_DWORD *)(v4 + 12);
      v7 = 0;
    }
    else
    {
      v8 = *(_DWORD *)(v4 + 8);
      v7 = 1;
    }
    v6 = v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
LABEL_14:
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *a3 <= *(_QWORD *)(v6 + 16) )
  {
    *a1 = v6;
    v6 = 0;
    goto LABEL_14;
  }
  *a1 = 0;
  a1[1] = v9;
  return a1;
}


//======================================================================
// std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>,std::_Select1st<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>> *)
// address: 0x0014DDDA   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>,std::_Select1st<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>,std::_Select1st<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>,std::_Select1st<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>>::find(unsigned int const&)
// address: 0x0014DEC0   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>,std::_Select1st<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>>::find(
        int a1,
        _DWORD *a2)
{
  _DWORD *v2; // r2
  _DWORD *v3; // r3
  _DWORD *result; // r0
  _DWORD *v5; // r4

  v2 = (_DWORD *)(a1 + 4);
  v3 = *(_DWORD **)(a1 + 8);
  result = (_DWORD *)(a1 + 4);
  while ( v3 != nullptr )
  {
    if ( v3[4] < *a2 )
    {
      v5 = (_DWORD *)v3[3];
      v3 = result;
    }
    else
    {
      v5 = (_DWORD *)v3[2];
    }
    result = v3;
    v3 = v5;
  }
  if ( result == v2 || *a2 < result[4] )
    return v2;
  return result;
}


//======================================================================
// std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>,std::_Select1st<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>>::_M_get_insert_unique_pos(unsigned int const&)
// address: 0x0014DF78   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>,std::_Select1st<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,int>> *)
// address: 0x0014EBD4   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::_M_get_insert_unique_pos(unsigned int const&)
// address: 0x0014ECA2   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,int>,std::_Select1st<std::pair<Ogre::FixedString const,int>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,int>>>::find(Ogre::FixedString const&)
// address: 0x0015438C   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,int>,std::_Select1st<std::pair<Ogre::FixedString const,int>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,int>>>::find(
        int a1,
        _DWORD *a2)
{
  _DWORD *v2; // r2
  _DWORD *v3; // r3
  _DWORD *result; // r0
  _DWORD *v5; // r4

  v2 = (_DWORD *)(a1 + 4);
  v3 = *(_DWORD **)(a1 + 8);
  result = (_DWORD *)(a1 + 4);
  while ( v3 != nullptr )
  {
    if ( v3[4] < *a2 )
    {
      v5 = (_DWORD *)v3[3];
      v3 = result;
    }
    else
    {
      v5 = (_DWORD *)v3[2];
    }
    result = v3;
    v3 = v5;
  }
  if ( result == v2 || *a2 < result[4] )
    return v2;
  return result;
}


//======================================================================
// std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,int>,std::_Select1st<std::pair<Ogre::FixedString const,int>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,int>>>::_M_get_insert_unique_pos(Ogre::FixedString const&)
// address: 0x001543BE   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,int>,std::_Select1st<std::pair<Ogre::FixedString const,int>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,int>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,Ogre::DynLib *>,std::_Select1st<std::pair<std::string const,Ogre::DynLib *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::DynLib *>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Ogre::DynLib *>> *)
// address: 0x00155954   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,Ogre::DynLib *>,std::_Select1st<std::pair<std::string const,Ogre::DynLib *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::DynLib *>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,Ogre::DynLib *>,std::_Select1st<std::pair<std::string const,Ogre::DynLib *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::DynLib *>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    sub_3BDF80(a2 + 4);
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,Ogre::DynLib *>,std::_Select1st<std::pair<std::string const,Ogre::DynLib *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::DynLib *>>>::find(std::string const&)
// address: 0x00155A04   size: 0x42 (66 bytes)
//======================================================================
int __fastcall std::_Rb_tree<std::string,std::pair<std::string const,Ogre::DynLib *>,std::_Select1st<std::pair<std::string const,Ogre::DynLib *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::DynLib *>>>::find(
        int a1)
{
  int v1; // r4
  int v2; // r6
  int v3; // r5
  int v4; // r3

  v1 = *(_DWORD *)(a1 + 8);
  v2 = a1 + 4;
  v3 = a1 + 4;
  while ( v1 != 0 )
  {
    if ( std::operator<<char>() != 0 )
    {
      v4 = *(_DWORD *)(v1 + 12);
      v1 = v3;
    }
    else
    {
      v4 = *(_DWORD *)(v1 + 8);
    }
    v3 = v1;
    v1 = v4;
  }
  if ( v3 == v2 || std::operator<<char>() != 0 )
    return v2;
  return v3;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,Ogre::DynLib *>,std::_Select1st<std::pair<std::string const,Ogre::DynLib *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::DynLib *>>>::_M_get_insert_unique_pos(std::string const&)
// address: 0x00155A8A   size: 0x66 (102 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,Ogre::DynLib *>,std::_Select1st<std::pair<std::string const,Ogre::DynLib *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::DynLib *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2)
{
  int v2; // r6
  int v5; // r4
  unsigned int v6; // r0
  int v7; // r3
  int v9; // [sp+0h] [bp-Ch]

  v2 = *(_DWORD *)(a2 + 8);
  v5 = a2 + 4;
  v6 = 1;
  while ( v2 != 0 )
  {
    v6 = std::operator<<char>();
    if ( v6 != 0 )
      v7 = *(_DWORD *)(v2 + 8);
    else
      v7 = *(_DWORD *)(v2 + 12);
    v5 = v2;
    v2 = v7;
  }
  v9 = v5;
  if ( v6 != 0 )
  {
    if ( v5 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v5;
      return a1;
    }
    v5 = sub_391E44(v5);
  }
  if ( std::operator<<char>() != 0 )
  {
    *a1 = 0;
    a1[1] = v9;
  }
  else
  {
    *a1 = v5;
    a1[1] = 0;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,Ogre::DynLib *>,std::_Select1st<std::pair<std::string const,Ogre::DynLib *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::DynLib *>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::string const,Ogre::DynLib *>>,std::pair<std::string const,Ogre::DynLib *> const&)
// address: 0x00155AF0   size: 0x112 (274 bytes)
//======================================================================
int __fastcall std::_Rb_tree<std::string,std::pair<std::string const,Ogre::DynLib *>,std::_Select1st<std::pair<std::string const,Ogre::DynLib *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::DynLib *>>>::_M_insert_unique_(
        _DWORD *a1,
        _DWORD *a2,
        int a3)
{
  int v5; // r4
  int v6; // r5
  int v7; // r5
  int v9; // [sp+0h] [bp-14h]
  unsigned int v10; // [sp+0h] [bp-14h]
  _DWORD *v11; // [sp+4h] [bp-10h]
  int v12[3]; // [sp+8h] [bp-Ch] BYREF

  v5 = (int)a2;
  v11 = a1 + 1;
  if ( a1 + 1 != a2 )
  {
    if ( std::operator<<char>() != 0 )
    {
      if ( a1[3] != v5 )
      {
        v9 = sub_391E44(v5);
        if ( std::operator<<char>() != 0 )
        {
          v6 = v5;
          if ( *(_DWORD *)(v9 + 12) == 0 )
          {
            v5 = v9;
            v6 = 0;
          }
          goto LABEL_18;
        }
        goto LABEL_28;
      }
      v6 = v5;
    }
    else
    {
      if ( std::operator<<char>() == 0 )
        return v5;
      if ( a1[4] != v5 )
      {
        v6 = sub_391DDC(v5);
        if ( std::operator<<char>() != 0 )
        {
          if ( *(_DWORD *)(v5 + 12) != 0 )
            v5 = v6;
          else
            v6 = 0;
          goto LABEL_18;
        }
        goto LABEL_28;
      }
      v6 = 0;
    }
LABEL_18:
    if ( v5 != 0 )
    {
      v10 = 1;
      if ( v6 != 0 )
        goto LABEL_23;
      goto LABEL_20;
    }
    return v6;
  }
  if ( a1[5] == 0 || (v5 = a1[4], std::operator<<char>() == 0) )
  {
LABEL_28:
    std::_Rb_tree<std::string,std::pair<std::string const,Ogre::DynLib *>,std::_Select1st<std::pair<std::string const,Ogre::DynLib *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::DynLib *>>>::_M_get_insert_unique_pos(
      v12,
      (int)a1);
    v6 = v12[0];
    v5 = v12[1];
    goto LABEL_18;
  }
  if ( v5 == 0 )
    return v5;
LABEL_20:
  if ( (_DWORD *)v5 == v11 )
    v10 = 1;
  else
    v10 = std::operator<<char>();
LABEL_23:
  v7 = operator new(0x18u);
  if ( v7 != -16 )
  {
    sub_3BEB1C(v7 + 16, a3);
    *(_DWORD *)(v7 + 20) = *(_DWORD *)(a3 + 4);
  }
  sub_391E64(v10, v7, v5, v11);
  ++a1[5];
  return v7;
}


//======================================================================
// std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,int>,std::_Select1st<std::pair<Ogre::FixedString const,int>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,int>>>::_M_erase(std::_Rb_tree_node<std::pair<Ogre::FixedString const,int>> *)
// address: 0x00155DA2   size: 0x26 (38 bytes)
//======================================================================
void __fastcall std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,int>,std::_Select1st<std::pair<Ogre::FixedString const,int>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,int>>>::_M_erase(
        int a1,
        int a2)
{
  int v4; // r6
  void *v5; // r1

  while ( a2 != 0 )
  {
    std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,int>,std::_Select1st<std::pair<Ogre::FixedString const,int>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,int>>>::_M_erase(
      a1,
      *(_DWORD *)(a2 + 12));
    v4 = *(_DWORD *)(a2 + 8);
    Ogre::FixedString::release(*(Ogre::FixedString **)(a2 + 16), v5);
    operator delete((void *)a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<Ogre::CompiledShaderKey,std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>,std::_Select1st<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>,std::less<Ogre::CompiledShaderKey>,std::allocator<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>>::_M_erase(std::_Rb_tree_node<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>> *)
// address: 0x00159690   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::_Rb_tree<Ogre::CompiledShaderKey,std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>,std::_Select1st<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>,std::less<Ogre::CompiledShaderKey>,std::allocator<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>>::_M_erase(
        int a1,
        int a2)
{
  int v4; // r6
  void *v5; // r1

  while ( a2 != 0 )
  {
    std::_Rb_tree<Ogre::CompiledShaderKey,std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>,std::_Select1st<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>,std::less<Ogre::CompiledShaderKey>,std::allocator<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>>::_M_erase(
      a1,
      *(_DWORD *)(a2 + 12));
    v4 = *(_DWORD *)(a2 + 8);
    Ogre::FixedString::~FixedString((Ogre::FixedString **)(a2 + 32), v5);
    operator delete((void *)a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::CompiledShader *>,std::_Select1st<std::pair<unsigned int const,Ogre::CompiledShader *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::CompiledShader *>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,Ogre::CompiledShader *>> *)
// address: 0x001596B8   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::CompiledShader *>,std::_Select1st<std::pair<unsigned int const,Ogre::CompiledShader *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::CompiledShader *>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::CompiledShader *>,std::_Select1st<std::pair<unsigned int const,Ogre::CompiledShader *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::CompiledShader *>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<Ogre::CompiledShaderKey,std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>,std::_Select1st<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>,std::less<Ogre::CompiledShaderKey>,std::allocator<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>>::_M_get_insert_unique_pos(Ogre::CompiledShaderKey const&)
// address: 0x00159778   size: 0x66 (102 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<Ogre::CompiledShaderKey,std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>,std::_Select1st<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>,std::less<Ogre::CompiledShaderKey>,std::allocator<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        int a3)
{
  int v3; // r6
  int v6; // r4
  _BOOL4 v7; // r0
  int v8; // r3
  int v10; // [sp+0h] [bp-Ch]

  v3 = *(_DWORD *)(a2 + 8);
  v6 = a2 + 4;
  v7 = true;
  while ( v3 != 0 )
  {
    v7 = Ogre::operator<(a3, v3 + 16);
    if ( v7 )
      v8 = *(_DWORD *)(v3 + 8);
    else
      v8 = *(_DWORD *)(v3 + 12);
    v6 = v3;
    v3 = v8;
  }
  v10 = v6;
  if ( v7 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( Ogre::operator<(v6 + 16, a3) )
  {
    *a1 = 0;
    a1[1] = v10;
  }
  else
  {
    *a1 = v6;
    a1[1] = 0;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<Ogre::CompiledShaderKey,std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>,std::_Select1st<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>,std::less<Ogre::CompiledShaderKey>,std::allocator<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>,std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *> const&)
// address: 0x001597DE   size: 0x112 (274 bytes)
//======================================================================
int __fastcall std::_Rb_tree<Ogre::CompiledShaderKey,std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>,std::_Select1st<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>,std::less<Ogre::CompiledShaderKey>,std::allocator<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>>::_M_insert_unique_(
        _DWORD *a1,
        _DWORD *a2,
        int a3)
{
  int v5; // r4
  int v6; // r5
  int v7; // r5
  int v8; // r5
  int v10; // [sp+0h] [bp-14h]
  _BOOL4 v11; // [sp+0h] [bp-14h]
  _DWORD *v12; // [sp+4h] [bp-10h]
  int v13[3]; // [sp+8h] [bp-Ch] BYREF

  v5 = (int)a2;
  v12 = a1 + 1;
  if ( a1 + 1 != a2 )
  {
    v6 = (int)(a2 + 4);
    if ( Ogre::operator<(a3, (int)(a2 + 4)) )
    {
      if ( a1[3] != v5 )
      {
        v10 = sub_391E44(v5);
        if ( Ogre::operator<(v10 + 16, a3) )
        {
          v7 = v5;
          if ( *(_DWORD *)(v10 + 12) == 0 )
          {
            v5 = v10;
            v7 = 0;
          }
          goto LABEL_18;
        }
        goto LABEL_28;
      }
      v7 = v5;
    }
    else
    {
      if ( !Ogre::operator<(v6, a3) )
        return v5;
      if ( a1[4] != v5 )
      {
        v7 = sub_391DDC(v5);
        if ( Ogre::operator<(a3, v7 + 16) )
        {
          if ( *(_DWORD *)(v5 + 12) != 0 )
            v5 = v7;
          else
            v7 = 0;
          goto LABEL_18;
        }
        goto LABEL_28;
      }
      v7 = 0;
    }
LABEL_18:
    if ( v5 != 0 )
    {
      v11 = true;
      if ( v7 != 0 )
        goto LABEL_23;
      goto LABEL_20;
    }
    return v7;
  }
  if ( a1[5] == 0 || (v5 = a1[4], !Ogre::operator<(v5 + 16, a3)) )
  {
LABEL_28:
    std::_Rb_tree<Ogre::CompiledShaderKey,std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>,std::_Select1st<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>,std::less<Ogre::CompiledShaderKey>,std::allocator<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>>::_M_get_insert_unique_pos(
      v13,
      (int)a1,
      a3);
    v7 = v13[0];
    v5 = v13[1];
    goto LABEL_18;
  }
  if ( v5 == 0 )
    return v5;
LABEL_20:
  v11 = (_DWORD *)v5 == v12 || Ogre::operator<(a3, v5 + 16);
LABEL_23:
  v8 = operator new(0x30u);
  if ( v8 != -16 )
  {
    Ogre::CompiledShaderKey::CompiledShaderKey(v8 + 16, a3);
    *(_DWORD *)(v8 + 40) = *(_DWORD *)(a3 + 24);
  }
  sub_391E64(v11, v8, v5, v12);
  ++a1[5];
  return v8;
}


//======================================================================
// std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::CompiledShader *>,std::_Select1st<std::pair<unsigned int const,Ogre::CompiledShader *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::CompiledShader *>>>::_M_get_insert_unique_pos(unsigned int const&)
// address: 0x0015995E   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::CompiledShader *>,std::_Select1st<std::pair<unsigned int const,Ogre::CompiledShader *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::CompiledShader *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,Ogre::UITargetEffect>,std::_Select1st<std::pair<std::string const,Ogre::UITargetEffect>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::UITargetEffect>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Ogre::UITargetEffect>> *)
// address: 0x00162730   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,Ogre::UITargetEffect>,std::_Select1st<std::pair<std::string const,Ogre::UITargetEffect>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::UITargetEffect>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,Ogre::UITargetEffect>,std::_Select1st<std::pair<std::string const,Ogre::UITargetEffect>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::UITargetEffect>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    sub_3BDF80(a2 + 4);
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,Ogre::UITargetEffect>,std::_Select1st<std::pair<std::string const,Ogre::UITargetEffect>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::UITargetEffect>>>::find(std::string const&)
// address: 0x00162D40   size: 0x42 (66 bytes)
//======================================================================
int __fastcall std::_Rb_tree<std::string,std::pair<std::string const,Ogre::UITargetEffect>,std::_Select1st<std::pair<std::string const,Ogre::UITargetEffect>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::UITargetEffect>>>::find(
        int a1,
        int a2)
{
  int v2; // r4
  int v3; // r6
  int v5; // r5
  int v6; // r3

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a1 + 4;
  v5 = a1 + 4;
  while ( v2 != 0 )
  {
    if ( sub_3BDC70(v2 + 16, a2) < 0 )
    {
      v6 = *(_DWORD *)(v2 + 12);
      v2 = v5;
    }
    else
    {
      v6 = *(_DWORD *)(v2 + 8);
    }
    v5 = v2;
    v2 = v6;
  }
  if ( v5 == v3 || sub_3BDC70(a2, v5 + 16) < 0 )
    return v3;
  return v5;
}


//======================================================================
// std::_Rb_tree<Ogre::ShaderEnvKey,std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>,std::_Select1st<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>,std::less<Ogre::ShaderEnvKey>,std::allocator<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>>::_M_erase(std::_Rb_tree_node<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>> *)
// address: 0x001655BC   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<Ogre::ShaderEnvKey,std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>,std::_Select1st<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>,std::less<Ogre::ShaderEnvKey>,std::allocator<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<Ogre::ShaderEnvKey,std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>,std::_Select1st<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>,std::less<Ogre::ShaderEnvKey>,std::allocator<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<Ogre::ShaderEnvKey,std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>,std::_Select1st<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>,std::less<Ogre::ShaderEnvKey>,std::allocator<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>>::find(Ogre::ShaderEnvKey const&)
// address: 0x001658F4   size: 0x42 (66 bytes)
//======================================================================
int __fastcall std::_Rb_tree<Ogre::ShaderEnvKey,std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>,std::_Select1st<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>,std::less<Ogre::ShaderEnvKey>,std::allocator<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>>::find(
        int a1,
        _QWORD *a2)
{
  int v2; // r4
  int v3; // r6
  int v5; // r5
  int v6; // r3

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a1 + 4;
  v5 = a1 + 4;
  while ( v2 != 0 )
  {
    if ( Ogre::operator<((_QWORD *)(v2 + 16), a2) )
    {
      v6 = *(_DWORD *)(v2 + 12);
      v2 = v5;
    }
    else
    {
      v6 = *(_DWORD *)(v2 + 8);
    }
    v5 = v2;
    v2 = v6;
  }
  if ( v5 == v3 || Ogre::operator<(a2, (_QWORD *)(v5 + 16)) )
    return v3;
  return v5;
}


//======================================================================
// std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>>>::_M_erase(std::_Rb_tree_node<std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>> *)
// address: 0x0016598A   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>>>::_M_erase(
        int a1,
        int a2)
{
  int v4; // r6
  void *v5; // r1

  while ( a2 != 0 )
  {
    std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>>>::_M_erase(
      a1,
      *(_DWORD *)(a2 + 12));
    v4 = *(_DWORD *)(a2 + 8);
    Ogre::FixedString::~FixedString((Ogre::FixedString **)(a2 + 16), v5);
    operator delete((void *)a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::TechPassData *>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::TechPassData *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::TechPassData *>>>::_M_erase(std::_Rb_tree_node<std::pair<Ogre::FixedString const,Ogre::TechPassData *>> *)
// address: 0x001659B2   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::TechPassData *>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::TechPassData *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::TechPassData *>>>::_M_erase(
        int a1,
        int a2)
{
  int v4; // r6
  void *v5; // r1

  while ( a2 != 0 )
  {
    std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::TechPassData *>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::TechPassData *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::TechPassData *>>>::_M_erase(
      a1,
      *(_DWORD *)(a2 + 12));
    v4 = *(_DWORD *)(a2 + 8);
    Ogre::FixedString::~FixedString((Ogre::FixedString **)(a2 + 16), v5);
    operator delete((void *)a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<Ogre::ShaderEnvKey,std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>,std::_Select1st<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>,std::less<Ogre::ShaderEnvKey>,std::allocator<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>>::_M_get_insert_unique_pos(Ogre::ShaderEnvKey const&)
// address: 0x00165AB6   size: 0x66 (102 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<Ogre::ShaderEnvKey,std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>,std::_Select1st<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>,std::less<Ogre::ShaderEnvKey>,std::allocator<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _QWORD *a3)
{
  int v3; // r6
  int v6; // r4
  _BOOL4 v7; // r0
  int v8; // r3
  int v10; // [sp+0h] [bp-Ch]

  v3 = *(_DWORD *)(a2 + 8);
  v6 = a2 + 4;
  v7 = true;
  while ( v3 != 0 )
  {
    v7 = Ogre::operator<(a3, (_QWORD *)(v3 + 16));
    if ( v7 )
      v8 = *(_DWORD *)(v3 + 8);
    else
      v8 = *(_DWORD *)(v3 + 12);
    v6 = v3;
    v3 = v8;
  }
  v10 = v6;
  if ( v7 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( Ogre::operator<((_QWORD *)(v6 + 16), a3) )
  {
    *a1 = 0;
    a1[1] = v10;
  }
  else
  {
    *a1 = v6;
    a1[1] = 0;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<Ogre::ShaderEnvKey,std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>,std::_Select1st<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>,std::less<Ogre::ShaderEnvKey>,std::allocator<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>,std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *> const&)
// address: 0x00165B1C   size: 0x110 (272 bytes)
//======================================================================
int __fastcall std::_Rb_tree<Ogre::ShaderEnvKey,std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>,std::_Select1st<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>,std::less<Ogre::ShaderEnvKey>,std::allocator<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>>::_M_insert_unique_(
        _DWORD *a1,
        int a2,
        _QWORD *a3)
{
  int v5; // r4
  _QWORD *v6; // r5
  int v7; // r5
  int v8; // r5
  int v10; // [sp+0h] [bp-14h]
  _BOOL4 v11; // [sp+0h] [bp-14h]
  _DWORD *v12; // [sp+4h] [bp-10h]
  int v13[3]; // [sp+8h] [bp-Ch] BYREF

  v5 = a2;
  v12 = a1 + 1;
  if ( a1 + 1 != (_DWORD *)a2 )
  {
    v6 = (_QWORD *)(a2 + 16);
    if ( Ogre::operator<(a3, (_QWORD *)(a2 + 16)) )
    {
      if ( a1[3] != v5 )
      {
        v10 = sub_391E44(v5);
        if ( Ogre::operator<((_QWORD *)(v10 + 16), a3) )
        {
          v7 = v5;
          if ( *(_DWORD *)(v10 + 12) == 0 )
          {
            v5 = v10;
            v7 = 0;
          }
          goto LABEL_18;
        }
        goto LABEL_28;
      }
      v7 = v5;
    }
    else
    {
      if ( !Ogre::operator<(v6, a3) )
        return v5;
      if ( a1[4] != v5 )
      {
        v7 = sub_391DDC(v5);
        if ( Ogre::operator<(a3, (_QWORD *)(v7 + 16)) )
        {
          if ( *(_DWORD *)(v5 + 12) != 0 )
            v5 = v7;
          else
            v7 = 0;
          goto LABEL_18;
        }
        goto LABEL_28;
      }
      v7 = 0;
    }
LABEL_18:
    if ( v5 != 0 )
    {
      v11 = true;
      if ( v7 != 0 )
        goto LABEL_23;
      goto LABEL_20;
    }
    return v7;
  }
  if ( a1[5] == 0 || (v5 = a1[4], !Ogre::operator<((_QWORD *)(v5 + 16), a3)) )
  {
LABEL_28:
    std::_Rb_tree<Ogre::ShaderEnvKey,std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>,std::_Select1st<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>,std::less<Ogre::ShaderEnvKey>,std::allocator<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>>::_M_get_insert_unique_pos(
      v13,
      (int)a1,
      a3);
    v7 = v13[0];
    v5 = v13[1];
    goto LABEL_18;
  }
  if ( v5 == 0 )
    return v5;
LABEL_20:
  v11 = (_DWORD *)v5 == v12 || Ogre::operator<(a3, (_QWORD *)(v5 + 16));
LABEL_23:
  v8 = operator new(0x28u);
  if ( v8 != -16 )
    j_memcpy((void *)(v8 + 16), a3, 0x18u);
  sub_391E64(v11, v8, v5, v12);
  ++a1[5];
  return v8;
}


//======================================================================
// std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>>>::_M_get_insert_unique_pos(Ogre::FixedString const&)
// address: 0x00165D58   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::TechPassData *>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::TechPassData *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::TechPassData *>>>::_M_get_insert_unique_pos(Ogre::FixedString const&)
// address: 0x00165DB2   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::TechPassData *>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::TechPassData *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::TechPassData *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,Ogre::TouchObject *>,std::_Select1st<std::pair<int const,Ogre::TouchObject *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TouchObject *>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,Ogre::TouchObject *>> *)
// address: 0x00166BC4   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,Ogre::TouchObject *>,std::_Select1st<std::pair<int const,Ogre::TouchObject *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TouchObject *>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,Ogre::TouchObject *>,std::_Select1st<std::pair<int const,Ogre::TouchObject *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TouchObject *>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,Ogre::TouchObject *>,std::_Select1st<std::pair<int const,Ogre::TouchObject *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TouchObject *>>>::erase(int const&)
// address: 0x00166C90   size: 0xB4 (180 bytes)
//======================================================================
int __fastcall std::_Rb_tree<int,std::pair<int const,Ogre::TouchObject *>,std::_Select1st<std::pair<int const,Ogre::TouchObject *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TouchObject *>>>::erase(
        _DWORD *a1,
        int *a2)
{
  _DWORD *v3; // r5
  _DWORD *i; // r3
  int v5; // r2
  int v6; // r12
  _DWORD *v7; // r2
  _DWORD *v8; // r0
  _DWORD *v9; // r2
  _DWORD *v10; // r6
  _DWORD *v11; // r6
  _DWORD *v12; // r0
  void *v13; // r0
  int v15; // [sp+0h] [bp-Ch]
  int v16; // [sp+4h] [bp-8h]

  v3 = a1 + 1;
  for ( i = (_DWORD *)a1[2]; ; i = v7 )
  {
    if ( i == nullptr )
    {
      v11 = v3;
      goto LABEL_22;
    }
    v5 = i[4];
    v6 = *a2;
    if ( v5 < *a2 )
    {
      v7 = (_DWORD *)i[3];
      i = v3;
      goto LABEL_20;
    }
    if ( *a2 >= v5 )
      break;
    v7 = (_DWORD *)i[2];
LABEL_20:
    v3 = i;
  }
  v8 = (_DWORD *)i[2];
  v9 = (_DWORD *)i[3];
  while ( v8 != nullptr )
  {
    if ( v8[4] < v6 )
    {
      v10 = (_DWORD *)v8[3];
      v8 = i;
    }
    else
    {
      v10 = (_DWORD *)v8[2];
    }
    i = v8;
    v8 = v10;
  }
  v11 = v3;
  while ( v9 != nullptr )
  {
    if ( v6 >= v9[4] )
    {
      v12 = (_DWORD *)v9[3];
      v9 = v11;
    }
    else
    {
      v12 = (_DWORD *)v9[2];
    }
    v11 = v9;
    v9 = v12;
  }
  v3 = i;
LABEL_22:
  v15 = a1[5];
  if ( v3 == (_DWORD *)a1[3] && v11 == a1 + 1 )
  {
    std::_Rb_tree<int,std::pair<int const,Ogre::TouchObject *>,std::_Select1st<std::pair<int const,Ogre::TouchObject *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TouchObject *>>>::_M_erase(
      (int)a1,
      (_DWORD *)a1[2]);
    a1[3] = v11;
    a1[2] = 0;
    a1[4] = v11;
    a1[5] = 0;
  }
  else
  {
    while ( v3 != v11 )
    {
      v16 = sub_391E10(v3);
      v13 = (void *)sub_391F50(v3, a1 + 1);
      operator delete(v13);
      v3 = (_DWORD *)v16;
      --a1[5];
    }
  }
  return v15 - a1[5];
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,Ogre::TouchObject *>,std::_Select1st<std::pair<int const,Ogre::TouchObject *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TouchObject *>>>::_M_get_insert_unique_pos(int const&)
// address: 0x00166E62   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,Ogre::TouchObject *>,std::_Select1st<std::pair<int const,Ogre::TouchObject *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TouchObject *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,Ogre::FmodSoundResource *>,std::_Select1st<std::pair<std::string const,Ogre::FmodSoundResource *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::FmodSoundResource *>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Ogre::FmodSoundResource *>> *)
// address: 0x0016BA28   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,Ogre::FmodSoundResource *>,std::_Select1st<std::pair<std::string const,Ogre::FmodSoundResource *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::FmodSoundResource *>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,Ogre::FmodSoundResource *>,std::_Select1st<std::pair<std::string const,Ogre::FmodSoundResource *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::FmodSoundResource *>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    sub_3BDF80(a2 + 4);
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,Ogre::FmodSoundResource *>,std::_Select1st<std::pair<std::string const,Ogre::FmodSoundResource *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::FmodSoundResource *>>>::find(std::string const&)
// address: 0x0016BB1A   size: 0x42 (66 bytes)
//======================================================================
int __fastcall std::_Rb_tree<std::string,std::pair<std::string const,Ogre::FmodSoundResource *>,std::_Select1st<std::pair<std::string const,Ogre::FmodSoundResource *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::FmodSoundResource *>>>::find(
        int a1)
{
  int v1; // r4
  int v2; // r6
  int v3; // r5
  int v4; // r3

  v1 = *(_DWORD *)(a1 + 8);
  v2 = a1 + 4;
  v3 = a1 + 4;
  while ( v1 != 0 )
  {
    if ( std::operator<<char>() != 0 )
    {
      v4 = *(_DWORD *)(v1 + 12);
      v1 = v3;
    }
    else
    {
      v4 = *(_DWORD *)(v1 + 8);
    }
    v3 = v1;
    v1 = v4;
  }
  if ( v3 == v2 || std::operator<<char>() != 0 )
    return v2;
  return v3;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,Ogre::FmodSoundResource *>,std::_Select1st<std::pair<std::string const,Ogre::FmodSoundResource *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::FmodSoundResource *>>>::_M_get_insert_unique_pos(std::string const&)
// address: 0x0016BB5C   size: 0x66 (102 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,Ogre::FmodSoundResource *>,std::_Select1st<std::pair<std::string const,Ogre::FmodSoundResource *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::FmodSoundResource *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2)
{
  int v2; // r6
  int v5; // r4
  unsigned int v6; // r0
  int v7; // r3
  int v9; // [sp+0h] [bp-Ch]

  v2 = *(_DWORD *)(a2 + 8);
  v5 = a2 + 4;
  v6 = 1;
  while ( v2 != 0 )
  {
    v6 = std::operator<<char>();
    if ( v6 != 0 )
      v7 = *(_DWORD *)(v2 + 8);
    else
      v7 = *(_DWORD *)(v2 + 12);
    v5 = v2;
    v2 = v7;
  }
  v9 = v5;
  if ( v6 != 0 )
  {
    if ( v5 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v5;
      return a1;
    }
    v5 = sub_391E44(v5);
  }
  if ( std::operator<<char>() != 0 )
  {
    *a1 = 0;
    a1[1] = v9;
  }
  else
  {
    *a1 = v5;
    a1[1] = 0;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,Ogre::FmodSoundResource *>,std::_Select1st<std::pair<std::string const,Ogre::FmodSoundResource *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::FmodSoundResource *>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::string const,Ogre::FmodSoundResource *>>,std::pair<std::string const,Ogre::FmodSoundResource *> const&)
// address: 0x0016BBC2   size: 0x112 (274 bytes)
//======================================================================
int __fastcall std::_Rb_tree<std::string,std::pair<std::string const,Ogre::FmodSoundResource *>,std::_Select1st<std::pair<std::string const,Ogre::FmodSoundResource *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::FmodSoundResource *>>>::_M_insert_unique_(
        _DWORD *a1,
        _DWORD *a2,
        int a3)
{
  int v5; // r4
  int v6; // r5
  int v7; // r5
  int v9; // [sp+0h] [bp-14h]
  unsigned int v10; // [sp+0h] [bp-14h]
  _DWORD *v11; // [sp+4h] [bp-10h]
  int v12[3]; // [sp+8h] [bp-Ch] BYREF

  v5 = (int)a2;
  v11 = a1 + 1;
  if ( a1 + 1 != a2 )
  {
    if ( std::operator<<char>() != 0 )
    {
      if ( a1[3] != v5 )
      {
        v9 = sub_391E44(v5);
        if ( std::operator<<char>() != 0 )
        {
          v6 = v5;
          if ( *(_DWORD *)(v9 + 12) == 0 )
          {
            v5 = v9;
            v6 = 0;
          }
          goto LABEL_18;
        }
        goto LABEL_28;
      }
      v6 = v5;
    }
    else
    {
      if ( std::operator<<char>() == 0 )
        return v5;
      if ( a1[4] != v5 )
      {
        v6 = sub_391DDC(v5);
        if ( std::operator<<char>() != 0 )
        {
          if ( *(_DWORD *)(v5 + 12) != 0 )
            v5 = v6;
          else
            v6 = 0;
          goto LABEL_18;
        }
        goto LABEL_28;
      }
      v6 = 0;
    }
LABEL_18:
    if ( v5 != 0 )
    {
      v10 = 1;
      if ( v6 != 0 )
        goto LABEL_23;
      goto LABEL_20;
    }
    return v6;
  }
  if ( a1[5] == 0 || (v5 = a1[4], std::operator<<char>() == 0) )
  {
LABEL_28:
    std::_Rb_tree<std::string,std::pair<std::string const,Ogre::FmodSoundResource *>,std::_Select1st<std::pair<std::string const,Ogre::FmodSoundResource *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::FmodSoundResource *>>>::_M_get_insert_unique_pos(
      v12,
      (int)a1);
    v6 = v12[0];
    v5 = v12[1];
    goto LABEL_18;
  }
  if ( v5 == 0 )
    return v5;
LABEL_20:
  if ( (_DWORD *)v5 == v11 )
    v10 = 1;
  else
    v10 = std::operator<<char>();
LABEL_23:
  v7 = operator new(0x18u);
  if ( v7 != -16 )
  {
    sub_3BEB1C(v7 + 16, a3);
    *(_DWORD *)(v7 + 20) = *(_DWORD *)(a3 + 4);
  }
  sub_391E64(v10, v7, v5, v11);
  ++a1[5];
  return v7;
}


//======================================================================
// std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>,std::_Select1st<std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>> *)
// address: 0x00171EFC   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>,std::_Select1st<std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>,std::_Select1st<std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>,std::_Select1st<std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>>>::_M_get_insert_unique_pos(unsigned int const&)
// address: 0x00172248   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>,std::_Select1st<std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<Ogre::MovableObject *,std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>,std::_Select1st<std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>>,std::less<Ogre::MovableObject *>,std::allocator<std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>>>::_M_erase(std::_Rb_tree_node<std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>> *)
// address: 0x00182654   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<Ogre::MovableObject *,std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>,std::_Select1st<std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>>,std::less<Ogre::MovableObject *>,std::allocator<std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<Ogre::MovableObject *,std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>,std::_Select1st<std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>>,std::less<Ogre::MovableObject *>,std::allocator<std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<Ogre::MovableObject *,std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>,std::_Select1st<std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>>,std::less<Ogre::MovableObject *>,std::allocator<std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>>>::_M_get_insert_unique_pos(Ogre::MovableObject * const&)
// address: 0x0018268A   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<Ogre::MovableObject *,std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>,std::_Select1st<std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>>,std::less<Ogre::MovableObject *>,std::allocator<std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::Resource *>,std::_Select1st<std::pair<unsigned int const,Ogre::Resource *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::Resource *>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,Ogre::Resource *>> *)
// address: 0x00187B7C   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::Resource *>,std::_Select1st<std::pair<unsigned int const,Ogre::Resource *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::Resource *>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::Resource *>,std::_Select1st<std::pair<unsigned int const,Ogre::Resource *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::Resource *>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::Resource *>,std::_Select1st<std::pair<unsigned int const,Ogre::Resource *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::Resource *>>>::find(unsigned int const&)
// address: 0x00187BFA   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::Resource *>,std::_Select1st<std::pair<unsigned int const,Ogre::Resource *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::Resource *>>>::find(
        int a1,
        _DWORD *a2)
{
  _DWORD *v2; // r2
  _DWORD *v3; // r3
  _DWORD *result; // r0
  _DWORD *v5; // r4

  v2 = (_DWORD *)(a1 + 4);
  v3 = *(_DWORD **)(a1 + 8);
  result = (_DWORD *)(a1 + 4);
  while ( v3 != nullptr )
  {
    if ( v3[4] < *a2 )
    {
      v5 = (_DWORD *)v3[3];
      v3 = result;
    }
    else
    {
      v5 = (_DWORD *)v3[2];
    }
    result = v3;
    v3 = v5;
  }
  if ( result == v2 || *a2 < result[4] )
    return v2;
  return result;
}


//======================================================================
// std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::Resource *>,std::_Select1st<std::pair<unsigned int const,Ogre::Resource *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::Resource *>>>::_M_get_insert_unique_pos(unsigned int const&)
// address: 0x00187C2C   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::Resource *>,std::_Select1st<std::pair<unsigned int const,Ogre::Resource *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::Resource *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,unsigned int>> *)
// address: 0x00189F32   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<Ogre::TextureDataLoader *,std::pair<Ogre::TextureDataLoader * const,int>,std::_Select1st<std::pair<Ogre::TextureDataLoader * const,int>>,std::less<Ogre::TextureDataLoader *>,std::allocator<std::pair<Ogre::TextureDataLoader * const,int>>>::_M_erase(std::_Rb_tree_node<std::pair<Ogre::TextureDataLoader * const,int>> *)
// address: 0x00189F52   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<Ogre::TextureDataLoader *,std::pair<Ogre::TextureDataLoader * const,int>,std::_Select1st<std::pair<Ogre::TextureDataLoader * const,int>>,std::less<Ogre::TextureDataLoader *>,std::allocator<std::pair<Ogre::TextureDataLoader * const,int>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<Ogre::TextureDataLoader *,std::pair<Ogre::TextureDataLoader * const,int>,std::_Select1st<std::pair<Ogre::TextureDataLoader * const,int>>,std::less<Ogre::TextureDataLoader *>,std::allocator<std::pair<Ogre::TextureDataLoader * const,int>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,Ogre::TextureDataLoader *>,std::_Select1st<std::pair<int const,Ogre::TextureDataLoader *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TextureDataLoader *>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,Ogre::TextureDataLoader *>> *)
// address: 0x00189F72   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,Ogre::TextureDataLoader *>,std::_Select1st<std::pair<int const,Ogre::TextureDataLoader *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TextureDataLoader *>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,Ogre::TextureDataLoader *>,std::_Select1st<std::pair<int const,Ogre::TextureDataLoader *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TextureDataLoader *>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<Ogre::TextureDataLoader *,std::pair<Ogre::TextureDataLoader * const,int>,std::_Select1st<std::pair<Ogre::TextureDataLoader * const,int>>,std::less<Ogre::TextureDataLoader *>,std::allocator<std::pair<Ogre::TextureDataLoader * const,int>>>::find(Ogre::TextureDataLoader * const&)
// address: 0x0018A0F4   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall std::_Rb_tree<Ogre::TextureDataLoader *,std::pair<Ogre::TextureDataLoader * const,int>,std::_Select1st<std::pair<Ogre::TextureDataLoader * const,int>>,std::less<Ogre::TextureDataLoader *>,std::allocator<std::pair<Ogre::TextureDataLoader * const,int>>>::find(
        int a1,
        _DWORD *a2)
{
  _DWORD *v2; // r2
  _DWORD *v3; // r3
  _DWORD *result; // r0
  _DWORD *v5; // r4

  v2 = (_DWORD *)(a1 + 4);
  v3 = *(_DWORD **)(a1 + 8);
  result = (_DWORD *)(a1 + 4);
  while ( v3 != nullptr )
  {
    if ( v3[4] < *a2 )
    {
      v5 = (_DWORD *)v3[3];
      v3 = result;
    }
    else
    {
      v5 = (_DWORD *)v3[2];
    }
    result = v3;
    v3 = v5;
  }
  if ( result == v2 || *a2 < result[4] )
    return v2;
  return result;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::find(int const&)
// address: 0x0018A126   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::find(
        int a1,
        _DWORD *a2)
{
  _DWORD *v2; // r2
  _DWORD *v3; // r3
  _DWORD *result; // r0
  _DWORD *v5; // r4

  v2 = (_DWORD *)(a1 + 4);
  v3 = *(_DWORD **)(a1 + 8);
  result = (_DWORD *)(a1 + 4);
  while ( v3 != nullptr )
  {
    if ( v3[4] < *a2 )
    {
      v5 = (_DWORD *)v3[3];
      v3 = result;
    }
    else
    {
      v5 = (_DWORD *)v3[2];
    }
    result = v3;
    v3 = v5;
  }
  if ( result == v2 || *a2 < result[4] )
    return v2;
  return result;
}


//======================================================================
// std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::find(unsigned int const&)
// address: 0x0018A158   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::find(
        int a1,
        _DWORD *a2)
{
  _DWORD *v2; // r2
  _DWORD *v3; // r3
  _DWORD *result; // r0
  _DWORD *v5; // r4

  v2 = (_DWORD *)(a1 + 4);
  v3 = *(_DWORD **)(a1 + 8);
  result = (_DWORD *)(a1 + 4);
  while ( v3 != nullptr )
  {
    if ( v3[4] < *a2 )
    {
      v5 = (_DWORD *)v3[3];
      v3 = result;
    }
    else
    {
      v5 = (_DWORD *)v3[2];
    }
    result = v3;
    v3 = v5;
  }
  if ( result == v2 || *a2 < result[4] )
    return v2;
  return result;
}


//======================================================================
// std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::_Rb_tree_impl<std::less<unsigned int>,false>::_Rb_tree_impl(void)
// address: 0x0018A3BC   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIjSt4pairIKjiESt10_Select1stIS2_ESt4lessIjESaIS2_EE13_Rb_tree_implIS6_Lb0EEC1Ev'
_DWORD *__fastcall std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::_Rb_tree_impl<std::less<unsigned int>,false>::_Rb_tree_impl(
        _DWORD *a1)
{
  _DWORD *v1; // r5

  v1 = a1 + 1;
  j_memset(a1 + 1, 0, 0x10u);
  a1[3] = v1;
  a1[4] = v1;
  a1[5] = 0;
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::_Rb_tree_impl<std::less<int>,false>::_Rb_tree_impl(void)
// address: 0x0018A3D8   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIiSt4pairIKijESt10_Select1stIS2_ESt4lessIiESaIS2_EE13_Rb_tree_implIS6_Lb0EEC1Ev'
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::_Rb_tree_impl<std::less<int>,false>::_Rb_tree_impl(
        _DWORD *a1)
{
  _DWORD *v1; // r5

  v1 = a1 + 1;
  j_memset(a1 + 1, 0, 0x10u);
  a1[3] = v1;
  a1[4] = v1;
  a1[5] = 0;
  return a1;
}


//======================================================================
// std::_Rb_tree<Ogre::TextureDataLoader *,std::pair<Ogre::TextureDataLoader * const,int>,std::_Select1st<std::pair<Ogre::TextureDataLoader * const,int>>,std::less<Ogre::TextureDataLoader *>,std::allocator<std::pair<Ogre::TextureDataLoader * const,int>>>::_Rb_tree_impl<std::less<Ogre::TextureDataLoader *>,false>::_Rb_tree_impl(void)
// address: 0x0018A3F4   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIPN4Ogre17TextureDataLoaderESt4pairIKS2_iESt10_Select1stIS5_ESt4lessIS2_ESaIS5_EE13_Rb_tree_implIS9_Lb0EEC1Ev'
_DWORD *__fastcall std::_Rb_tree<Ogre::TextureDataLoader *,std::pair<Ogre::TextureDataLoader * const,int>,std::_Select1st<std::pair<Ogre::TextureDataLoader * const,int>>,std::less<Ogre::TextureDataLoader *>,std::allocator<std::pair<Ogre::TextureDataLoader * const,int>>>::_Rb_tree_impl<std::less<Ogre::TextureDataLoader *>,false>::_Rb_tree_impl(
        _DWORD *a1)
{
  _DWORD *v1; // r5

  v1 = a1 + 1;
  j_memset(a1 + 1, 0, 0x10u);
  a1[3] = v1;
  a1[4] = v1;
  a1[5] = 0;
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,Ogre::TextureDataLoader *>,std::_Select1st<std::pair<int const,Ogre::TextureDataLoader *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TextureDataLoader *>>>::_Rb_tree_impl<std::less<int>,false>::_Rb_tree_impl(void)
// address: 0x0018A410   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIiSt4pairIKiPN4Ogre17TextureDataLoaderEESt10_Select1stIS5_ESt4lessIiESaIS5_EE13_Rb_tree_implIS9_Lb0EEC1Ev'
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,Ogre::TextureDataLoader *>,std::_Select1st<std::pair<int const,Ogre::TextureDataLoader *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TextureDataLoader *>>>::_Rb_tree_impl<std::less<int>,false>::_Rb_tree_impl(
        _DWORD *a1)
{
  _DWORD *v1; // r5

  v1 = a1 + 1;
  j_memset(a1 + 1, 0, 0x10u);
  a1[3] = v1;
  a1[4] = v1;
  a1[5] = 0;
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::_M_get_insert_unique_pos(int const&)
// address: 0x0018A4F0   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<Ogre::TextureDataLoader *,std::pair<Ogre::TextureDataLoader * const,int>,std::_Select1st<std::pair<Ogre::TextureDataLoader * const,int>>,std::less<Ogre::TextureDataLoader *>,std::allocator<std::pair<Ogre::TextureDataLoader * const,int>>>::_M_get_insert_unique_pos(Ogre::TextureDataLoader * const&)
// address: 0x0018A7CA   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<Ogre::TextureDataLoader *,std::pair<Ogre::TextureDataLoader * const,int>,std::_Select1st<std::pair<Ogre::TextureDataLoader * const,int>>,std::less<Ogre::TextureDataLoader *>,std::allocator<std::pair<Ogre::TextureDataLoader * const,int>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,Ogre::TextureDataLoader *>,std::_Select1st<std::pair<int const,Ogre::TextureDataLoader *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TextureDataLoader *>>>::_M_get_insert_unique_pos(int const&)
// address: 0x0018A824   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,Ogre::TextureDataLoader *>,std::_Select1st<std::pair<int const,Ogre::TextureDataLoader *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TextureDataLoader *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *,std::allocator<Ogre::MotionEventHandler *>>>,std::_Select1st<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *,std::allocator<Ogre::MotionEventHandler *>>>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *,std::allocator<Ogre::MotionEventHandler *>>>>>::_M_erase(std::_Rb_tree_node<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *,std::allocator<Ogre::MotionEventHandler *>>>> *)
// address: 0x0018C55A   size: 0x2E (46 bytes)
//======================================================================
void __fastcall std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>,std::_Select1st<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>>::_M_erase(
        int a1,
        int a2)
{
  int v4; // r6
  void *v5; // r1

  while ( a2 != 0 )
  {
    std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>,std::_Select1st<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>>::_M_erase(
      a1,
      *(_DWORD *)(a2 + 12));
    v4 = *(_DWORD *)(a2 + 8);
    sub_18B51C(*(void **)(a2 + 20));
    Ogre::FixedString::~FixedString((Ogre::FixedString **)(a2 + 16), v5);
    operator delete((void *)a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *,std::allocator<Ogre::MotionEventHandler *>>>,std::_Select1st<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *,std::allocator<Ogre::MotionEventHandler *>>>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *,std::allocator<Ogre::MotionEventHandler *>>>>>::find(Ogre::FixedString const&)
// address: 0x0018C8D4   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>,std::_Select1st<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>>::find(
        int a1,
        _DWORD *a2)
{
  _DWORD *v2; // r2
  _DWORD *v3; // r3
  _DWORD *result; // r0
  _DWORD *v5; // r4

  v2 = (_DWORD *)(a1 + 4);
  v3 = *(_DWORD **)(a1 + 8);
  result = (_DWORD *)(a1 + 4);
  while ( v3 != nullptr )
  {
    if ( v3[4] < *a2 )
    {
      v5 = (_DWORD *)v3[3];
      v3 = result;
    }
    else
    {
      v5 = (_DWORD *)v3[2];
    }
    result = v3;
    v3 = v5;
  }
  if ( result == v2 || *a2 < result[4] )
    return v2;
  return result;
}


//======================================================================
// std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *,std::allocator<Ogre::MotionEventHandler *>>>,std::_Select1st<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *,std::allocator<Ogre::MotionEventHandler *>>>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *,std::allocator<Ogre::MotionEventHandler *>>>>>::_M_get_insert_unique_pos(Ogre::FixedString const&)
// address: 0x0018CD22   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>,std::_Select1st<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,Ogre::SequenceMap::SeqDesc>,std::_Select1st<std::pair<int const,Ogre::SequenceMap::SeqDesc>>,std::less<int>,std::allocator<std::pair<int const,Ogre::SequenceMap::SeqDesc>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,Ogre::SequenceMap::SeqDesc>> *)
// address: 0x00192432   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,Ogre::SequenceMap::SeqDesc>,std::_Select1st<std::pair<int const,Ogre::SequenceMap::SeqDesc>>,std::less<int>,std::allocator<std::pair<int const,Ogre::SequenceMap::SeqDesc>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,Ogre::SequenceMap::SeqDesc>,std::_Select1st<std::pair<int const,Ogre::SequenceMap::SeqDesc>>,std::less<int>,std::allocator<std::pair<int const,Ogre::SequenceMap::SeqDesc>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,Ogre::SequenceMap::SeqDesc>,std::_Select1st<std::pair<int const,Ogre::SequenceMap::SeqDesc>>,std::less<int>,std::allocator<std::pair<int const,Ogre::SequenceMap::SeqDesc>>>::_M_get_insert_unique_pos(int const&)
// address: 0x00192470   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,Ogre::SequenceMap::SeqDesc>,std::_Select1st<std::pair<int const,Ogre::SequenceMap::SeqDesc>>,std::less<int>,std::allocator<std::pair<int const,Ogre::SequenceMap::SeqDesc>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>>>::_M_erase(std::_Rb_tree_node<std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>> *)
// address: 0x00194240   size: 0x2E (46 bytes)
//======================================================================
void __fastcall std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6
  void *v5; // r1

  while ( a2 != nullptr )
  {
    std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    Ogre::PlantVecInfo_T::~PlantVecInfo_T((Ogre::PlantVecInfo_T *)(a2 + 5));
    Ogre::FixedString::release(a2[4], v5);
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>>>::_M_get_insert_unique_pos(Ogre::FixedString const&)
// address: 0x001942D6   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,Ogre::Codec *>,std::_Select1st<std::pair<std::string const,Ogre::Codec *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::Codec *>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Ogre::Codec *>> *)
// address: 0x00199D88   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,Ogre::Codec *>,std::_Select1st<std::pair<std::string const,Ogre::Codec *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::Codec *>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,Ogre::Codec *>,std::_Select1st<std::pair<std::string const,Ogre::Codec *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::Codec *>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    sub_3BDF80(a2 + 4);
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,Ogre::Codec *>,std::_Select1st<std::pair<std::string const,Ogre::Codec *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::Codec *>>>::equal_range(std::string const&)
// address: 0x0019A6B2   size: 0x90 (144 bytes)
//======================================================================
_DWORD *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,Ogre::Codec *>,std::_Select1st<std::pair<std::string const,Ogre::Codec *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::Codec *>>>::equal_range(
        _DWORD *a1,
        int a2)
{
  int v2; // r1
  int v3; // r4
  int v5; // r3
  int v6; // r6
  int v7; // r5
  int v8; // r3
  int v9; // r3
  int v10; // r3
  int v12; // [sp+0h] [bp-Ch]

  v2 = a2 + 4;
  v3 = *(_DWORD *)(v2 + 4);
  v12 = v2;
  while ( 1 )
  {
    if ( v3 == 0 )
    {
      v10 = v12;
      *a1 = v12;
      goto LABEL_21;
    }
    if ( std::operator<<char>() != 0 )
    {
      v5 = *(_DWORD *)(v3 + 12);
      v3 = v12;
      goto LABEL_19;
    }
    if ( std::operator<<char>() == 0 )
      break;
    v5 = *(_DWORD *)(v3 + 8);
LABEL_19:
    v12 = v3;
    v3 = v5;
  }
  v6 = *(_DWORD *)(v3 + 8);
  v7 = *(_DWORD *)(v3 + 12);
  while ( v6 != 0 )
  {
    if ( std::operator<<char>() != 0 )
    {
      v8 = *(_DWORD *)(v6 + 12);
      v6 = v3;
    }
    else
    {
      v8 = *(_DWORD *)(v6 + 8);
    }
    v3 = v6;
    v6 = v8;
  }
  while ( v7 != 0 )
  {
    if ( std::operator<<char>() != 0 )
    {
      v9 = *(_DWORD *)(v7 + 8);
    }
    else
    {
      v9 = *(_DWORD *)(v7 + 12);
      v7 = v12;
    }
    v12 = v7;
    v7 = v9;
  }
  *a1 = v3;
  v10 = v12;
LABEL_21:
  a1[1] = v10;
  return a1;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,Ogre::Codec *>,std::_Select1st<std::pair<std::string const,Ogre::Codec *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::Codec *>>>::_M_get_insert_unique_pos(std::string const&)
// address: 0x0019A742   size: 0x66 (102 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,Ogre::Codec *>,std::_Select1st<std::pair<std::string const,Ogre::Codec *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::Codec *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2)
{
  int v2; // r6
  int v5; // r4
  unsigned int v6; // r0
  int v7; // r3
  int v9; // [sp+0h] [bp-Ch]

  v2 = *(_DWORD *)(a2 + 8);
  v5 = a2 + 4;
  v6 = 1;
  while ( v2 != 0 )
  {
    v6 = std::operator<<char>();
    if ( v6 != 0 )
      v7 = *(_DWORD *)(v2 + 8);
    else
      v7 = *(_DWORD *)(v2 + 12);
    v5 = v2;
    v2 = v7;
  }
  v9 = v5;
  if ( v6 != 0 )
  {
    if ( v5 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v5;
      return a1;
    }
    v5 = sub_391E44(v5);
  }
  if ( std::operator<<char>() != 0 )
  {
    *a1 = 0;
    a1[1] = v9;
  }
  else
  {
    *a1 = v5;
    a1[1] = 0;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,Ogre::Codec *>,std::_Select1st<std::pair<std::string const,Ogre::Codec *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::Codec *>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::string const,Ogre::Codec *>>,std::pair<std::string const,Ogre::Codec *> const&)
// address: 0x0019A7A8   size: 0x112 (274 bytes)
//======================================================================
int __fastcall std::_Rb_tree<std::string,std::pair<std::string const,Ogre::Codec *>,std::_Select1st<std::pair<std::string const,Ogre::Codec *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::Codec *>>>::_M_insert_unique_(
        _DWORD *a1,
        _DWORD *a2,
        int a3)
{
  int v5; // r4
  int v6; // r5
  int v7; // r5
  int v9; // [sp+0h] [bp-14h]
  unsigned int v10; // [sp+0h] [bp-14h]
  _DWORD *v11; // [sp+4h] [bp-10h]
  int v12[3]; // [sp+8h] [bp-Ch] BYREF

  v5 = (int)a2;
  v11 = a1 + 1;
  if ( a1 + 1 != a2 )
  {
    if ( std::operator<<char>() != 0 )
    {
      if ( a1[3] != v5 )
      {
        v9 = sub_391E44(v5);
        if ( std::operator<<char>() != 0 )
        {
          v6 = v5;
          if ( *(_DWORD *)(v9 + 12) == 0 )
          {
            v5 = v9;
            v6 = 0;
          }
          goto LABEL_18;
        }
        goto LABEL_28;
      }
      v6 = v5;
    }
    else
    {
      if ( std::operator<<char>() == 0 )
        return v5;
      if ( a1[4] != v5 )
      {
        v6 = sub_391DDC(v5);
        if ( std::operator<<char>() != 0 )
        {
          if ( *(_DWORD *)(v5 + 12) != 0 )
            v5 = v6;
          else
            v6 = 0;
          goto LABEL_18;
        }
        goto LABEL_28;
      }
      v6 = 0;
    }
LABEL_18:
    if ( v5 != 0 )
    {
      v10 = 1;
      if ( v6 != 0 )
        goto LABEL_23;
      goto LABEL_20;
    }
    return v6;
  }
  if ( a1[5] == 0 || (v5 = a1[4], std::operator<<char>() == 0) )
  {
LABEL_28:
    std::_Rb_tree<std::string,std::pair<std::string const,Ogre::Codec *>,std::_Select1st<std::pair<std::string const,Ogre::Codec *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::Codec *>>>::_M_get_insert_unique_pos(
      v12,
      (int)a1);
    v6 = v12[0];
    v5 = v12[1];
    goto LABEL_18;
  }
  if ( v5 == 0 )
    return v5;
LABEL_20:
  if ( (_DWORD *)v5 == v11 )
    v10 = 1;
  else
    v10 = std::operator<<char>();
LABEL_23:
  v7 = operator new(0x18u);
  if ( v7 != -16 )
  {
    sub_3BEB1C(v7 + 16, a3);
    *(_DWORD *)(v7 + 20) = *(_DWORD *)(a3 + 4);
  }
  sub_391E64(v10, v7, v5, v11);
  ++a1[5];
  return v7;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,PictureData>,std::_Select1st<std::pair<int const,PictureData>>,std::less<int>,std::allocator<std::pair<int const,PictureData>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,PictureData>> *)
// address: 0x001A18C8   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,PictureData>,std::_Select1st<std::pair<int const,PictureData>>,std::less<int>,std::allocator<std::pair<int const,PictureData>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,PictureData>,std::_Select1st<std::pair<int const,PictureData>>,std::less<int>,std::allocator<std::pair<int const,PictureData>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,UIObject *>,std::_Select1st<std::pair<std::string const,UIObject *>>,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,UIObject *>> *)
// address: 0x001A18E8   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,UIObject *>,std::_Select1st<std::pair<std::string const,UIObject *>>,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,UIObject *>,std::_Select1st<std::pair<std::string const,UIObject *>>,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    sub_3BDF80(a2 + 4);
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<Frame *,std::pair<Frame * const,int>,std::_Select1st<std::pair<Frame * const,int>>,std::less<Frame *>,std::allocator<std::pair<Frame * const,int>>>::_M_erase(std::_Rb_tree_node<std::pair<Frame * const,int>> *)
// address: 0x001A1B48   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<Frame *,std::pair<Frame * const,int>,std::_Select1st<std::pair<Frame * const,int>>,std::less<Frame *>,std::allocator<std::pair<Frame * const,int>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<Frame *,std::pair<Frame * const,int>,std::_Select1st<std::pair<Frame * const,int>>,std::less<Frame *>,std::allocator<std::pair<Frame * const,int>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,tagPopWin>,std::_Select1st<std::pair<std::string const,tagPopWin>>,std::less<std::string>,std::allocator<std::pair<std::string const,tagPopWin>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,tagPopWin>> *)
// address: 0x001A1C1E   size: 0x30 (48 bytes)
//======================================================================
void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,tagPopWin>,std::_Select1st<std::pair<std::string const,tagPopWin>>,std::less<std::string>,std::allocator<std::pair<std::string const,tagPopWin>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,tagPopWin>,std::_Select1st<std::pair<std::string const,tagPopWin>>,std::less<std::string>,std::allocator<std::pair<std::string const,tagPopWin>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    sub_3BDF80(a2 + 11);
    sub_3BDF80(a2 + 4);
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,std::vector<Frame *,std::allocator<Frame *>>>,std::_Select1st<std::pair<int const,std::vector<Frame *,std::allocator<Frame *>>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<Frame *,std::allocator<Frame *>>>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,std::vector<Frame *,std::allocator<Frame *>>>> *)
// address: 0x001A1C4E   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,std::vector<Frame *>>,std::_Select1st<std::pair<int const,std::vector<Frame *>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<Frame *>>>>::_M_erase(
        int a1,
        int a2)
{
  int v4; // r6

  while ( a2 != 0 )
  {
    std::_Rb_tree<int,std::pair<int const,std::vector<Frame *>>,std::_Select1st<std::pair<int const,std::vector<Frame *>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<Frame *>>>>::_M_erase(
      a1,
      *(_DWORD *)(a2 + 12));
    v4 = *(_DWORD *)(a2 + 8);
    std::_Vector_base<Frame *>::~_Vector_base((void **)(a2 + 20));
    operator delete((void *)a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,std::vector<Frame *,std::allocator<Frame *>>>,std::_Select1st<std::pair<int const,std::vector<Frame *,std::allocator<Frame *>>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<Frame *,std::allocator<Frame *>>>>>::find(int const&)
// address: 0x001A21A4   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,std::vector<Frame *>>,std::_Select1st<std::pair<int const,std::vector<Frame *>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<Frame *>>>>::find(
        int a1,
        _DWORD *a2)
{
  _DWORD *v2; // r2
  _DWORD *v3; // r3
  _DWORD *result; // r0
  _DWORD *v5; // r4

  v2 = (_DWORD *)(a1 + 4);
  v3 = *(_DWORD **)(a1 + 8);
  result = (_DWORD *)(a1 + 4);
  while ( v3 != nullptr )
  {
    if ( v3[4] < *a2 )
    {
      v5 = (_DWORD *)v3[3];
      v3 = result;
    }
    else
    {
      v5 = (_DWORD *)v3[2];
    }
    result = v3;
    v3 = v5;
  }
  if ( result == v2 || *a2 < result[4] )
    return v2;
  return result;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,std::vector<Frame *,std::allocator<Frame *>>>,std::_Select1st<std::pair<int const,std::vector<Frame *,std::allocator<Frame *>>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<Frame *,std::allocator<Frame *>>>>>::erase(int const&)
// address: 0x001A21D6   size: 0xBE (190 bytes)
//======================================================================
int __fastcall std::_Rb_tree<int,std::pair<int const,std::vector<Frame *>>,std::_Select1st<std::pair<int const,std::vector<Frame *>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<Frame *>>>>::erase(
        int *a1,
        int *a2)
{
  int *v3; // r5
  int *i; // r3
  int v5; // r2
  int v6; // r12
  int *v7; // r2
  int *v8; // r0
  int *v9; // r2
  int *v10; // r6
  int *v11; // r6
  int *v12; // r0
  void **v13; // r5
  int v15; // [sp+0h] [bp-Ch]
  int v16; // [sp+4h] [bp-8h]

  v3 = a1 + 1;
  for ( i = (int *)a1[2]; ; i = v7 )
  {
    if ( i == nullptr )
    {
      v11 = v3;
      goto LABEL_22;
    }
    v5 = i[4];
    v6 = *a2;
    if ( v5 < *a2 )
    {
      v7 = (int *)i[3];
      i = v3;
      goto LABEL_20;
    }
    if ( *a2 >= v5 )
      break;
    v7 = (int *)i[2];
LABEL_20:
    v3 = i;
  }
  v8 = (int *)i[2];
  v9 = (int *)i[3];
  while ( v8 != nullptr )
  {
    if ( v8[4] < v6 )
    {
      v10 = (int *)v8[3];
      v8 = i;
    }
    else
    {
      v10 = (int *)v8[2];
    }
    i = v8;
    v8 = v10;
  }
  v11 = v3;
  while ( v9 != nullptr )
  {
    if ( v6 >= v9[4] )
    {
      v12 = (int *)v9[3];
      v9 = v11;
    }
    else
    {
      v12 = (int *)v9[2];
    }
    v11 = v9;
    v9 = v12;
  }
  v3 = i;
LABEL_22:
  v15 = a1[5];
  if ( v3 == (int *)a1[3] && v11 == a1 + 1 )
  {
    std::_Rb_tree<int,std::pair<int const,std::vector<Frame *>>,std::_Select1st<std::pair<int const,std::vector<Frame *>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<Frame *>>>>::_M_erase(
      (int)a1,
      a1[2]);
    a1[3] = (int)v11;
    a1[2] = 0;
    a1[4] = (int)v11;
    a1[5] = 0;
  }
  else
  {
    while ( v3 != v11 )
    {
      v16 = sub_391E10(v3);
      v13 = (void **)sub_391F50(v3, a1 + 1);
      std::_Vector_base<Frame *>::~_Vector_base(v13 + 5);
      operator delete(v13);
      v3 = (int *)v16;
      --a1[5];
    }
  }
  return v15 - a1[5];
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,stEventFrameArray>,std::_Select1st<std::pair<std::string const,stEventFrameArray>>,std::less<std::string>,std::allocator<std::pair<std::string const,stEventFrameArray>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,stEventFrameArray>> *)
// address: 0x001A236A   size: 0x30 (48 bytes)
//======================================================================
void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,stEventFrameArray>,std::_Select1st<std::pair<std::string const,stEventFrameArray>>,std::less<std::string>,std::allocator<std::pair<std::string const,stEventFrameArray>>>::_M_erase(
        int a1,
        int a2)
{
  int v4; // r6

  while ( a2 != 0 )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,stEventFrameArray>,std::_Select1st<std::pair<std::string const,stEventFrameArray>>,std::less<std::string>,std::allocator<std::pair<std::string const,stEventFrameArray>>>::_M_erase(
      a1,
      *(_DWORD *)(a2 + 12));
    v4 = *(_DWORD *)(a2 + 8);
    std::_Vector_base<Frame *>::~_Vector_base((void **)(a2 + 20));
    sub_3BDF80(a2 + 16);
    operator delete((void *)a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,UIObject *>,std::_Select1st<std::pair<std::string const,UIObject *>>,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::find(std::string const&)
// address: 0x001A243C   size: 0x42 (66 bytes)
//======================================================================
int __fastcall std::_Rb_tree<std::string,std::pair<std::string const,UIObject *>,std::_Select1st<std::pair<std::string const,UIObject *>>,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::find(
        int a1)
{
  int v1; // r4
  int v2; // r6
  int v3; // r5
  int v4; // r3

  v1 = *(_DWORD *)(a1 + 8);
  v2 = a1 + 4;
  v3 = a1 + 4;
  while ( v1 != 0 )
  {
    if ( std::operator<<char>() != 0 )
    {
      v4 = *(_DWORD *)(v1 + 12);
      v1 = v3;
    }
    else
    {
      v4 = *(_DWORD *)(v1 + 8);
    }
    v3 = v1;
    v1 = v4;
  }
  if ( v3 == v2 || std::operator<<char>() != 0 )
    return v2;
  return v3;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,tagPopWin>,std::_Select1st<std::pair<std::string const,tagPopWin>>,std::less<std::string>,std::allocator<std::pair<std::string const,tagPopWin>>>::find(std::string const&)
// address: 0x001A2A3A   size: 0x42 (66 bytes)
//======================================================================
int __fastcall std::_Rb_tree<std::string,std::pair<std::string const,tagPopWin>,std::_Select1st<std::pair<std::string const,tagPopWin>>,std::less<std::string>,std::allocator<std::pair<std::string const,tagPopWin>>>::find(
        int a1)
{
  int v1; // r4
  int v2; // r6
  int v3; // r5
  int v4; // r3

  v1 = *(_DWORD *)(a1 + 8);
  v2 = a1 + 4;
  v3 = a1 + 4;
  while ( v1 != 0 )
  {
    if ( std::operator<<char>() != 0 )
    {
      v4 = *(_DWORD *)(v1 + 12);
      v1 = v3;
    }
    else
    {
      v4 = *(_DWORD *)(v1 + 8);
    }
    v3 = v1;
    v1 = v4;
  }
  if ( v3 == v2 || std::operator<<char>() != 0 )
    return v2;
  return v3;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,PictureData>,std::_Select1st<std::pair<int const,PictureData>>,std::less<int>,std::allocator<std::pair<int const,PictureData>>>::_M_get_insert_unique_pos(int const&)
// address: 0x001A3008   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,PictureData>,std::_Select1st<std::pair<int const,PictureData>>,std::less<int>,std::allocator<std::pair<int const,PictureData>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_get_insert_unique_pos(int const&)
// address: 0x001A334C   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,tagPopWin>,std::_Select1st<std::pair<std::string const,tagPopWin>>,std::less<std::string>,std::allocator<std::pair<std::string const,tagPopWin>>>::_M_get_insert_unique_pos(std::string const&)
// address: 0x001A34F8   size: 0x66 (102 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,tagPopWin>,std::_Select1st<std::pair<std::string const,tagPopWin>>,std::less<std::string>,std::allocator<std::pair<std::string const,tagPopWin>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2)
{
  int v2; // r6
  int v5; // r4
  unsigned int v6; // r0
  int v7; // r3
  int v9; // [sp+0h] [bp-Ch]

  v2 = *(_DWORD *)(a2 + 8);
  v5 = a2 + 4;
  v6 = 1;
  while ( v2 != 0 )
  {
    v6 = std::operator<<char>();
    if ( v6 != 0 )
      v7 = *(_DWORD *)(v2 + 8);
    else
      v7 = *(_DWORD *)(v2 + 12);
    v5 = v2;
    v2 = v7;
  }
  v9 = v5;
  if ( v6 != 0 )
  {
    if ( v5 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v5;
      return a1;
    }
    v5 = sub_391E44(v5);
  }
  if ( std::operator<<char>() != 0 )
  {
    *a1 = 0;
    a1[1] = v9;
  }
  else
  {
    *a1 = v5;
    a1[1] = 0;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,tagPopWin>,std::_Select1st<std::pair<std::string const,tagPopWin>>,std::less<std::string>,std::allocator<std::pair<std::string const,tagPopWin>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::string const,tagPopWin>>,std::pair<std::string const,tagPopWin> const&)
// address: 0x001A355E   size: 0x118 (280 bytes)
//======================================================================
int __fastcall std::_Rb_tree<std::string,std::pair<std::string const,tagPopWin>,std::_Select1st<std::pair<std::string const,tagPopWin>>,std::less<std::string>,std::allocator<std::pair<std::string const,tagPopWin>>>::_M_insert_unique_(
        _DWORD *a1,
        _DWORD *a2,
        int a3)
{
  int v5; // r4
  int v6; // r5
  int v7; // r5
  int v9; // [sp+0h] [bp-14h]
  unsigned int v10; // [sp+0h] [bp-14h]
  _DWORD *v11; // [sp+4h] [bp-10h]
  int v12[3]; // [sp+8h] [bp-Ch] BYREF

  v5 = (int)a2;
  v11 = a1 + 1;
  if ( a1 + 1 != a2 )
  {
    if ( std::operator<<char>() != 0 )
    {
      if ( a1[3] != v5 )
      {
        v9 = sub_391E44(v5);
        if ( std::operator<<char>() != 0 )
        {
          v6 = v5;
          if ( *(_DWORD *)(v9 + 12) == 0 )
          {
            v5 = v9;
            v6 = 0;
          }
          goto LABEL_18;
        }
        goto LABEL_28;
      }
      v6 = v5;
    }
    else
    {
      if ( std::operator<<char>() == 0 )
        return v5;
      if ( a1[4] != v5 )
      {
        v6 = sub_391DDC(v5);
        if ( std::operator<<char>() != 0 )
        {
          if ( *(_DWORD *)(v5 + 12) != 0 )
            v5 = v6;
          else
            v6 = 0;
          goto LABEL_18;
        }
        goto LABEL_28;
      }
      v6 = 0;
    }
LABEL_18:
    if ( v5 != 0 )
    {
      v10 = 1;
      if ( v6 != 0 )
        goto LABEL_23;
      goto LABEL_20;
    }
    return v6;
  }
  if ( a1[5] == 0 || (v5 = a1[4], std::operator<<char>() == 0) )
  {
LABEL_28:
    std::_Rb_tree<std::string,std::pair<std::string const,tagPopWin>,std::_Select1st<std::pair<std::string const,tagPopWin>>,std::less<std::string>,std::allocator<std::pair<std::string const,tagPopWin>>>::_M_get_insert_unique_pos(
      v12,
      (int)a1);
    v6 = v12[0];
    v5 = v12[1];
    goto LABEL_18;
  }
  if ( v5 == 0 )
    return v5;
LABEL_20:
  if ( (_DWORD *)v5 == v11 )
    v10 = 1;
  else
    v10 = std::operator<<char>();
LABEL_23:
  v7 = operator new(0x30u);
  if ( v7 != -16 )
  {
    sub_3BEB1C(v7 + 16, a3);
    tagPopWin::tagPopWin(v7 + 20, a3 + 4);
  }
  sub_391E64(v10, v7, v5, v11);
  ++a1[5];
  return v7;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,std::vector<Frame *,std::allocator<Frame *>>>,std::_Select1st<std::pair<int const,std::vector<Frame *,std::allocator<Frame *>>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<Frame *,std::allocator<Frame *>>>>>::_M_get_insert_unique_pos(int const&)
// address: 0x001A3902   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,std::vector<Frame *>>,std::_Select1st<std::pair<int const,std::vector<Frame *>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<Frame *>>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,UIObject *>,std::_Select1st<std::pair<std::string const,UIObject *>>,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::_M_get_insert_unique_pos(std::string const&)
// address: 0x001A3F96   size: 0x66 (102 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,UIObject *>,std::_Select1st<std::pair<std::string const,UIObject *>>,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2)
{
  int v2; // r6
  int v5; // r4
  unsigned int v6; // r0
  int v7; // r3
  int v9; // [sp+0h] [bp-Ch]

  v2 = *(_DWORD *)(a2 + 8);
  v5 = a2 + 4;
  v6 = 1;
  while ( v2 != 0 )
  {
    v6 = std::operator<<char>();
    if ( v6 != 0 )
      v7 = *(_DWORD *)(v2 + 8);
    else
      v7 = *(_DWORD *)(v2 + 12);
    v5 = v2;
    v2 = v7;
  }
  v9 = v5;
  if ( v6 != 0 )
  {
    if ( v5 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v5;
      return a1;
    }
    v5 = sub_391E44(v5);
  }
  if ( std::operator<<char>() != 0 )
  {
    *a1 = 0;
    a1[1] = v9;
  }
  else
  {
    *a1 = v5;
    a1[1] = 0;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,UIObject *>,std::_Select1st<std::pair<std::string const,UIObject *>>,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::string const,UIObject *>>,std::pair<std::string const,UIObject *> const&)
// address: 0x001A3FFC   size: 0x112 (274 bytes)
//======================================================================
int __fastcall std::_Rb_tree<std::string,std::pair<std::string const,UIObject *>,std::_Select1st<std::pair<std::string const,UIObject *>>,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::_M_insert_unique_(
        _DWORD *a1,
        _DWORD *a2,
        int a3)
{
  int v5; // r4
  int v6; // r5
  int v7; // r5
  int v9; // [sp+0h] [bp-14h]
  unsigned int v10; // [sp+0h] [bp-14h]
  _DWORD *v11; // [sp+4h] [bp-10h]
  int v12[3]; // [sp+8h] [bp-Ch] BYREF

  v5 = (int)a2;
  v11 = a1 + 1;
  if ( a1 + 1 != a2 )
  {
    if ( std::operator<<char>() != 0 )
    {
      if ( a1[3] != v5 )
      {
        v9 = sub_391E44(v5);
        if ( std::operator<<char>() != 0 )
        {
          v6 = v5;
          if ( *(_DWORD *)(v9 + 12) == 0 )
          {
            v5 = v9;
            v6 = 0;
          }
          goto LABEL_18;
        }
        goto LABEL_28;
      }
      v6 = v5;
    }
    else
    {
      if ( std::operator<<char>() == 0 )
        return v5;
      if ( a1[4] != v5 )
      {
        v6 = sub_391DDC(v5);
        if ( std::operator<<char>() != 0 )
        {
          if ( *(_DWORD *)(v5 + 12) != 0 )
            v5 = v6;
          else
            v6 = 0;
          goto LABEL_18;
        }
        goto LABEL_28;
      }
      v6 = 0;
    }
LABEL_18:
    if ( v5 != 0 )
    {
      v10 = 1;
      if ( v6 != 0 )
        goto LABEL_23;
      goto LABEL_20;
    }
    return v6;
  }
  if ( a1[5] == 0 || (v5 = a1[4], std::operator<<char>() == 0) )
  {
LABEL_28:
    std::_Rb_tree<std::string,std::pair<std::string const,UIObject *>,std::_Select1st<std::pair<std::string const,UIObject *>>,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::_M_get_insert_unique_pos(
      v12,
      (int)a1);
    v6 = v12[0];
    v5 = v12[1];
    goto LABEL_18;
  }
  if ( v5 == 0 )
    return v5;
LABEL_20:
  if ( (_DWORD *)v5 == v11 )
    v10 = 1;
  else
    v10 = std::operator<<char>();
LABEL_23:
  v7 = operator new(0x18u);
  if ( v7 != -16 )
  {
    sub_3BEB1C(v7 + 16, a3);
    *(_DWORD *)(v7 + 20) = *(_DWORD *)(a3 + 4);
  }
  sub_391E64(v10, v7, v5, v11);
  ++a1[5];
  return v7;
}


//======================================================================
// std::_Rb_tree<Frame *,std::pair<Frame * const,int>,std::_Select1st<std::pair<Frame * const,int>>,std::less<Frame *>,std::allocator<std::pair<Frame * const,int>>>::_M_get_insert_unique_pos(Frame * const&)
// address: 0x001A4240   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<Frame *,std::pair<Frame * const,int>,std::_Select1st<std::pair<Frame * const,int>>,std::less<Frame *>,std::allocator<std::pair<Frame * const,int>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(std::_Rb_tree_node<int> *)
// address: 0x001A50B0   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(a1, a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_insert_unique(int const&)
// address: 0x001A516A   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_insert_unique(
        int a1,
        _DWORD *a2,
        _DWORD *a3)
{
  _DWORD *v4; // r3
  _DWORD *v7; // r4
  int v8; // r2
  _DWORD *v9; // r1
  int v10; // r0
  char v11; // r3
  int v13; // r0
  int v14; // [sp+4h] [bp-10h]
  _BOOL4 v15; // [sp+8h] [bp-Ch]
  _DWORD *v16; // [sp+Ch] [bp-8h]

  v4 = (_DWORD *)a2[2];
  v16 = a2 + 1;
  v7 = a2 + 1;
  v8 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v9 = (_DWORD *)v4[3];
      v8 = 0;
    }
    else
    {
      v9 = (_DWORD *)v4[2];
      v8 = 1;
    }
    v7 = v4;
    v4 = v9;
  }
  if ( v8 != 0 )
  {
    if ( v7 == (_DWORD *)a2[3] )
      goto LABEL_14;
    v10 = sub_391E44(v7);
  }
  else
  {
    v10 = (int)v7;
  }
  if ( *(_DWORD *)(v10 + 16) >= *a3 )
  {
    *(_DWORD *)a1 = v10;
    v11 = 0;
    goto LABEL_13;
  }
LABEL_14:
  v15 = v7 == v16 || *a3 < v7[4];
  v13 = operator new(0x14u);
  v14 = v13;
  if ( v13 != -16 )
    *(_DWORD *)(v13 + 16) = *a3;
  sub_391E64(v15, v13, v7, v16);
  ++a2[5];
  *(_DWORD *)a1 = v14;
  v11 = 1;
LABEL_13:
  *(_BYTE *)(a1 + 4) = v11;
  return a1;
}


//======================================================================
// std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::erase(int const&)
// address: 0x001A520E   size: 0xB4 (180 bytes)
//======================================================================
int __fastcall std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::erase(
        _DWORD *a1,
        int *a2)
{
  _DWORD *v3; // r5
  _DWORD *i; // r3
  int v5; // r2
  int v6; // r12
  _DWORD *v7; // r2
  _DWORD *v8; // r0
  _DWORD *v9; // r2
  _DWORD *v10; // r6
  _DWORD *v11; // r6
  _DWORD *v12; // r0
  void *v13; // r0
  int v15; // [sp+0h] [bp-Ch]
  int v16; // [sp+4h] [bp-8h]

  v3 = a1 + 1;
  for ( i = (_DWORD *)a1[2]; ; i = v7 )
  {
    if ( i == nullptr )
    {
      v11 = v3;
      goto LABEL_22;
    }
    v5 = i[4];
    v6 = *a2;
    if ( v5 < *a2 )
    {
      v7 = (_DWORD *)i[3];
      i = v3;
      goto LABEL_20;
    }
    if ( *a2 >= v5 )
      break;
    v7 = (_DWORD *)i[2];
LABEL_20:
    v3 = i;
  }
  v8 = (_DWORD *)i[2];
  v9 = (_DWORD *)i[3];
  while ( v8 != nullptr )
  {
    if ( v8[4] < v6 )
    {
      v10 = (_DWORD *)v8[3];
      v8 = i;
    }
    else
    {
      v10 = (_DWORD *)v8[2];
    }
    i = v8;
    v8 = v10;
  }
  v11 = v3;
  while ( v9 != nullptr )
  {
    if ( v6 >= v9[4] )
    {
      v12 = (_DWORD *)v9[3];
      v9 = v11;
    }
    else
    {
      v12 = (_DWORD *)v9[2];
    }
    v11 = v9;
    v9 = v12;
  }
  v3 = i;
LABEL_22:
  v15 = a1[5];
  if ( v3 == (_DWORD *)a1[3] && v11 == a1 + 1 )
  {
    std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase((int)a1, (_DWORD *)a1[2]);
    a1[3] = v11;
    a1[2] = 0;
    a1[4] = v11;
    a1[5] = 0;
  }
  else
  {
    while ( v3 != v11 )
    {
      v16 = sub_391E10(v3);
      v13 = (void *)sub_391F50(v3, a1 + 1);
      operator delete(v13);
      v3 = (_DWORD *)v16;
      --a1[5];
    }
  }
  return v15 - a1[5];
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,std::string>> *)
// address: 0x001A7D70   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    sub_3BDF80(a2 + 5);
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_copy(std::_Rb_tree_node<std::pair<int const,std::string>> const*,std::_Rb_tree_node<std::pair<int const,std::string>>*)
// address: 0x001A7DDA   size: 0x8C (140 bytes)
//======================================================================
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_copy(
        int a1,
        int *a2,
        int a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  int v7; // r3
  int v8; // r1
  _DWORD *v9; // r6
  _DWORD *v10; // r7
  _DWORD *v11; // r0
  _DWORD *v12; // r5
  int v13; // r1

  v5 = (_DWORD *)operator new(0x18u);
  v6 = v5;
  if ( v5 != (_DWORD *)-16 )
  {
    v5[4] = a2[4];
    sub_3BEB1C(v5 + 5, a2 + 5);
  }
  v7 = *a2;
  v6[1] = a3;
  *v6 = v7;
  v6[2] = 0;
  v6[3] = 0;
  v8 = a2[3];
  if ( v8 != 0 )
    v6[3] = std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_copy(
              a1,
              v8,
              v6);
  v9 = (_DWORD *)a2[2];
  v10 = v6;
  while ( v9 != nullptr )
  {
    v11 = (_DWORD *)operator new(0x18u);
    v12 = v11;
    if ( v11 != (_DWORD *)-16 )
    {
      v11[4] = v9[4];
      sub_3BEB1C(v11 + 5, v9 + 5);
    }
    *v12 = *v9;
    v12[2] = 0;
    v12[3] = 0;
    v10[2] = v12;
    v12[1] = v10;
    v13 = v9[3];
    if ( v13 != 0 )
      v12[3] = std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_copy(
                 a1,
                 v13,
                 v12);
    v9 = (_DWORD *)v9[2];
    v10 = v12;
  }
  return v6;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,stEventFrameArray>,std::_Select1st<std::pair<std::string const,stEventFrameArray>>,std::less<std::string>,std::allocator<std::pair<std::string const,stEventFrameArray>>>::_M_get_insert_unique_pos(std::string const&)
// address: 0x001BB95C   size: 0x66 (102 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,stEventFrameArray>,std::_Select1st<std::pair<std::string const,stEventFrameArray>>,std::less<std::string>,std::allocator<std::pair<std::string const,stEventFrameArray>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2)
{
  int v2; // r6
  int v5; // r4
  unsigned int v6; // r0
  int v7; // r3
  int v9; // [sp+0h] [bp-Ch]

  v2 = *(_DWORD *)(a2 + 8);
  v5 = a2 + 4;
  v6 = 1;
  while ( v2 != 0 )
  {
    v6 = std::operator<<char>();
    if ( v6 != 0 )
      v7 = *(_DWORD *)(v2 + 8);
    else
      v7 = *(_DWORD *)(v2 + 12);
    v5 = v2;
    v2 = v7;
  }
  v9 = v5;
  if ( v6 != 0 )
  {
    if ( v5 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v5;
      return a1;
    }
    v5 = sub_391E44(v5);
  }
  if ( std::operator<<char>() != 0 )
  {
    *a1 = 0;
    a1[1] = v9;
  }
  else
  {
    *a1 = v5;
    a1[1] = 0;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,stEventFrameArray>,std::_Select1st<std::pair<std::string const,stEventFrameArray>>,std::less<std::string>,std::allocator<std::pair<std::string const,stEventFrameArray>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::string const,stEventFrameArray>>,std::pair<std::string const,stEventFrameArray> const&)
// address: 0x001BBA54   size: 0x118 (280 bytes)
//======================================================================
int __fastcall std::_Rb_tree<std::string,std::pair<std::string const,stEventFrameArray>,std::_Select1st<std::pair<std::string const,stEventFrameArray>>,std::less<std::string>,std::allocator<std::pair<std::string const,stEventFrameArray>>>::_M_insert_unique_(
        _DWORD *a1,
        _DWORD *a2,
        int a3)
{
  int v5; // r4
  int v6; // r5
  int v7; // r5
  int v9; // [sp+0h] [bp-14h]
  unsigned int v10; // [sp+0h] [bp-14h]
  _DWORD *v11; // [sp+4h] [bp-10h]
  int v12[3]; // [sp+8h] [bp-Ch] BYREF

  v5 = (int)a2;
  v11 = a1 + 1;
  if ( a1 + 1 != a2 )
  {
    if ( std::operator<<char>() != 0 )
    {
      if ( a1[3] != v5 )
      {
        v9 = sub_391E44(v5);
        if ( std::operator<<char>() != 0 )
        {
          v6 = v5;
          if ( *(_DWORD *)(v9 + 12) == 0 )
          {
            v5 = v9;
            v6 = 0;
          }
          goto LABEL_18;
        }
        goto LABEL_28;
      }
      v6 = v5;
    }
    else
    {
      if ( std::operator<<char>() == 0 )
        return v5;
      if ( a1[4] != v5 )
      {
        v6 = sub_391DDC(v5);
        if ( std::operator<<char>() != 0 )
        {
          if ( *(_DWORD *)(v5 + 12) != 0 )
            v5 = v6;
          else
            v6 = 0;
          goto LABEL_18;
        }
        goto LABEL_28;
      }
      v6 = 0;
    }
LABEL_18:
    if ( v5 != 0 )
    {
      v10 = 1;
      if ( v6 != 0 )
        goto LABEL_23;
      goto LABEL_20;
    }
    return v6;
  }
  if ( a1[5] == 0 || (v5 = a1[4], std::operator<<char>() == 0) )
  {
LABEL_28:
    std::_Rb_tree<std::string,std::pair<std::string const,stEventFrameArray>,std::_Select1st<std::pair<std::string const,stEventFrameArray>>,std::less<std::string>,std::allocator<std::pair<std::string const,stEventFrameArray>>>::_M_get_insert_unique_pos(
      v12,
      (int)a1);
    v6 = v12[0];
    v5 = v12[1];
    goto LABEL_18;
  }
  if ( v5 == 0 )
    return v5;
LABEL_20:
  if ( (_DWORD *)v5 == v11 )
    v10 = 1;
  else
    v10 = std::operator<<char>();
LABEL_23:
  v7 = operator new(0x20u);
  if ( v7 != -16 )
  {
    sub_3BEB1C(v7 + 16, a3);
    std::vector<Frame *>::vector((_DWORD *)(v7 + 20), a3 + 4);
  }
  sub_391E64(v10, v7, v5, v11);
  ++a1[5];
  return v7;
}


//======================================================================
// std::_Rb_tree<Ogre::ShaderProgKey,std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>,std::_Select1st<std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>>,std::less<Ogre::ShaderProgKey>,std::allocator<std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>>>::_M_erase(std::_Rb_tree_node<std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>> *)
// address: 0x0025E830   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<Ogre::ShaderProgKey,std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>,std::_Select1st<std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>>,std::less<Ogre::ShaderProgKey>,std::allocator<std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<Ogre::ShaderProgKey,std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>,std::_Select1st<std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>>,std::less<Ogre::ShaderProgKey>,std::allocator<std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<Ogre::ShaderProgKey,std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>,std::_Select1st<std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>>,std::less<Ogre::ShaderProgKey>,std::allocator<std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>>>::_M_get_insert_unique_pos(Ogre::ShaderProgKey const&)
// address: 0x0025E8DE   size: 0x66 (102 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<Ogre::ShaderProgKey,std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>,std::_Select1st<std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>>,std::less<Ogre::ShaderProgKey>,std::allocator<std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        unsigned int *a3)
{
  _DWORD *v3; // r6
  int v6; // r4
  _BOOL4 v7; // r0
  _DWORD *v8; // r3
  int v10; // [sp+0h] [bp-Ch]

  v3 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = true;
  while ( v3 != nullptr )
  {
    v7 = Ogre::operator<(a3, v3 + 4);
    if ( v7 )
      v8 = (_DWORD *)v3[2];
    else
      v8 = (_DWORD *)v3[3];
    v6 = (int)v3;
    v3 = v8;
  }
  v10 = v6;
  if ( v7 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( Ogre::operator<((unsigned int *)(v6 + 16), a3) )
  {
    *a1 = 0;
    a1[1] = v10;
  }
  else
  {
    *a1 = v6;
    a1[1] = 0;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<Ogre::OGLVertexAttrib,std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>,std::_Select1st<std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>>,std::less<Ogre::OGLVertexAttrib>,std::allocator<std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>>>::_M_erase(std::_Rb_tree_node<std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>> *)
// address: 0x0025EF68   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::_Rb_tree<Ogre::OGLVertexAttrib,std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>,std::_Select1st<std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>>,std::less<Ogre::OGLVertexAttrib>,std::allocator<std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>>>::_M_erase(
        int a1,
        int a2)
{
  int v4; // r6
  void *v5; // r1

  while ( a2 != 0 )
  {
    std::_Rb_tree<Ogre::OGLVertexAttrib,std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>,std::_Select1st<std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>>,std::less<Ogre::OGLVertexAttrib>,std::allocator<std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>>>::_M_erase(
      a1,
      *(_DWORD *)(a2 + 12));
    v4 = *(_DWORD *)(a2 + 8);
    Ogre::FixedString::~FixedString((Ogre::FixedString **)(a2 + 20), v5);
    operator delete((void *)a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<Ogre::OGLVertexAttrib,std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>,std::_Select1st<std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>>,std::less<Ogre::OGLVertexAttrib>,std::allocator<std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>>>::_M_get_insert_unique_pos(Ogre::OGLVertexAttrib const&)
// address: 0x0025EFDA   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<Ogre::OGLVertexAttrib,std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>,std::_Select1st<std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>>,std::less<Ogre::OGLVertexAttrib>,std::allocator<std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<WCoord,WCoord,std::_Identity<WCoord>,std::less<WCoord>,std::allocator<WCoord>>::_M_erase(std::_Rb_tree_node<WCoord> *)
// address: 0x002668A2   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<WCoord,WCoord,std::_Identity<WCoord>,std::less<WCoord>,std::allocator<WCoord>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<WCoord,WCoord,std::_Identity<WCoord>,std::less<WCoord>,std::allocator<WCoord>>::_M_erase(a1, a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<WCoord,WCoord,std::_Identity<WCoord>,std::less<WCoord>,std::allocator<WCoord>>::_M_get_insert_unique_pos(WCoord const&)
// address: 0x0026691A   size: 0x66 (102 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<WCoord,WCoord,std::_Identity<WCoord>,std::less<WCoord>,std::allocator<WCoord>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v3; // r6
  int v6; // r4
  _BOOL4 v7; // r0
  _DWORD *v8; // r3
  int v10; // [sp+0h] [bp-Ch]

  v3 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = true;
  while ( v3 != nullptr )
  {
    v7 = operator<(a3, v3 + 4);
    if ( v7 )
      v8 = (_DWORD *)v3[2];
    else
      v8 = (_DWORD *)v3[3];
    v6 = (int)v3;
    v3 = v8;
  }
  v10 = v6;
  if ( v7 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( operator<((_DWORD *)(v6 + 16), a3) )
  {
    *a1 = 0;
    a1[1] = v10;
  }
  else
  {
    *a1 = v6;
    a1[1] = 0;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<DirectionType,DirectionType,std::_Identity<DirectionType>,std::less<DirectionType>,std::allocator<DirectionType>>::_M_erase(std::_Rb_tree_node<DirectionType> *)
// address: 0x0029BB8C   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<DirectionType,DirectionType,std::_Identity<DirectionType>,std::less<DirectionType>,std::allocator<DirectionType>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<DirectionType,DirectionType,std::_Identity<DirectionType>,std::less<DirectionType>,std::allocator<DirectionType>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,int>> *)
// address: 0x0029EBC0   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,OreDef>,std::_Select1st<std::pair<int const,OreDef>>,std::less<int>,std::allocator<std::pair<int const,OreDef>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,OreDef>> *)
// address: 0x002A9E18   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,OreDef>,std::_Select1st<std::pair<int const,OreDef>>,std::less<int>,std::allocator<std::pair<int const,OreDef>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,OreDef>,std::_Select1st<std::pair<int const,OreDef>>,std::less<int>,std::allocator<std::pair<int const,OreDef>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,TreeDef>,std::_Select1st<std::pair<int const,TreeDef>>,std::less<int>,std::allocator<std::pair<int const,TreeDef>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,TreeDef>> *)
// address: 0x002A9E38   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,TreeDef>,std::_Select1st<std::pair<int const,TreeDef>>,std::less<int>,std::allocator<std::pair<int const,TreeDef>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,TreeDef>,std::_Select1st<std::pair<int const,TreeDef>>,std::less<int>,std::allocator<std::pair<int const,TreeDef>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,ToolDef>,std::_Select1st<std::pair<int const,ToolDef>>,std::less<int>,std::allocator<std::pair<int const,ToolDef>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,ToolDef>> *)
// address: 0x002A9F3A   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,ToolDef>,std::_Select1st<std::pair<int const,ToolDef>>,std::less<int>,std::allocator<std::pair<int const,ToolDef>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,ToolDef>,std::_Select1st<std::pair<int const,ToolDef>>,std::less<int>,std::allocator<std::pair<int const,ToolDef>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,CraftingDef>,std::_Select1st<std::pair<int const,CraftingDef>>,std::less<int>,std::allocator<std::pair<int const,CraftingDef>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,CraftingDef>> *)
// address: 0x002A9F5A   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,CraftingDef>,std::_Select1st<std::pair<int const,CraftingDef>>,std::less<int>,std::allocator<std::pair<int const,CraftingDef>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,CraftingDef>,std::_Select1st<std::pair<int const,CraftingDef>>,std::less<int>,std::allocator<std::pair<int const,CraftingDef>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,MonsterDef>,std::_Select1st<std::pair<int const,MonsterDef>>,std::less<int>,std::allocator<std::pair<int const,MonsterDef>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,MonsterDef>> *)
// address: 0x002A9F7A   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,MonsterDef>,std::_Select1st<std::pair<int const,MonsterDef>>,std::less<int>,std::allocator<std::pair<int const,MonsterDef>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,MonsterDef>,std::_Select1st<std::pair<int const,MonsterDef>>,std::less<int>,std::allocator<std::pair<int const,MonsterDef>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,FoodDef>,std::_Select1st<std::pair<int const,FoodDef>>,std::less<int>,std::allocator<std::pair<int const,FoodDef>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,FoodDef>> *)
// address: 0x002A9F9A   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,FoodDef>,std::_Select1st<std::pair<int const,FoodDef>>,std::less<int>,std::allocator<std::pair<int const,FoodDef>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,FoodDef>,std::_Select1st<std::pair<int const,FoodDef>>,std::less<int>,std::allocator<std::pair<int const,FoodDef>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,BuffDef>,std::_Select1st<std::pair<int const,BuffDef>>,std::less<int>,std::allocator<std::pair<int const,BuffDef>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,BuffDef>> *)
// address: 0x002A9FBA   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,BuffDef>,std::_Select1st<std::pair<int const,BuffDef>>,std::less<int>,std::allocator<std::pair<int const,BuffDef>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,BuffDef>,std::_Select1st<std::pair<int const,BuffDef>>,std::less<int>,std::allocator<std::pair<int const,BuffDef>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,FurnaceDef>,std::_Select1st<std::pair<int const,FurnaceDef>>,std::less<int>,std::allocator<std::pair<int const,FurnaceDef>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,FurnaceDef>> *)
// address: 0x002A9FDA   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,FurnaceDef>,std::_Select1st<std::pair<int const,FurnaceDef>>,std::less<int>,std::allocator<std::pair<int const,FurnaceDef>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,FurnaceDef>,std::_Select1st<std::pair<int const,FurnaceDef>>,std::less<int>,std::allocator<std::pair<int const,FurnaceDef>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,AchievementDef>,std::_Select1st<std::pair<int const,AchievementDef>>,std::less<int>,std::allocator<std::pair<int const,AchievementDef>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,AchievementDef>> *)
// address: 0x002A9FFA   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,AchievementDef>,std::_Select1st<std::pair<int const,AchievementDef>>,std::less<int>,std::allocator<std::pair<int const,AchievementDef>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,AchievementDef>,std::_Select1st<std::pair<int const,AchievementDef>>,std::less<int>,std::allocator<std::pair<int const,AchievementDef>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,EnchantDef>,std::_Select1st<std::pair<int const,EnchantDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantDef>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,EnchantDef>> *)
// address: 0x002AA01A   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,EnchantDef>,std::_Select1st<std::pair<int const,EnchantDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantDef>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,EnchantDef>,std::_Select1st<std::pair<int const,EnchantDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantDef>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,EnchantMentDef>,std::_Select1st<std::pair<int const,EnchantMentDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantMentDef>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,EnchantMentDef>> *)
// address: 0x002AA03A   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,EnchantMentDef>,std::_Select1st<std::pair<int const,EnchantMentDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantMentDef>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,EnchantMentDef>,std::_Select1st<std::pair<int const,EnchantMentDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantMentDef>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,StringDef>,std::_Select1st<std::pair<int const,StringDef>>,std::less<int>,std::allocator<std::pair<int const,StringDef>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,StringDef>> *)
// address: 0x002AA05A   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,StringDef>,std::_Select1st<std::pair<int const,StringDef>>,std::less<int>,std::allocator<std::pair<int const,StringDef>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,StringDef>,std::_Select1st<std::pair<int const,StringDef>>,std::less<int>,std::allocator<std::pair<int const,StringDef>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,ChestDef>,std::_Select1st<std::pair<int const,ChestDef>>,std::less<int>,std::allocator<std::pair<int const,ChestDef>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,ChestDef>> *)
// address: 0x002AA07A   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,ChestDef>,std::_Select1st<std::pair<int const,ChestDef>>,std::less<int>,std::allocator<std::pair<int const,ChestDef>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,ChestDef>,std::_Select1st<std::pair<int const,ChestDef>>,std::less<int>,std::allocator<std::pair<int const,ChestDef>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,MonsterDef>,std::_Select1st<std::pair<int const,MonsterDef>>,std::less<int>,std::allocator<std::pair<int const,MonsterDef>>>::find(int const&)
// address: 0x002AA6BE   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,MonsterDef>,std::_Select1st<std::pair<int const,MonsterDef>>,std::less<int>,std::allocator<std::pair<int const,MonsterDef>>>::find(
        int a1,
        _DWORD *a2)
{
  _DWORD *v2; // r2
  _DWORD *v3; // r3
  _DWORD *result; // r0
  _DWORD *v5; // r4

  v2 = (_DWORD *)(a1 + 4);
  v3 = *(_DWORD **)(a1 + 8);
  result = (_DWORD *)(a1 + 4);
  while ( v3 != nullptr )
  {
    if ( v3[4] < *a2 )
    {
      v5 = (_DWORD *)v3[3];
      v3 = result;
    }
    else
    {
      v5 = (_DWORD *)v3[2];
    }
    result = v3;
    v3 = v5;
  }
  if ( result == v2 || *a2 < result[4] )
    return v2;
  return result;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,OreDef>,std::_Select1st<std::pair<int const,OreDef>>,std::less<int>,std::allocator<std::pair<int const,OreDef>>>::_M_get_insert_unique_pos(int const&)
// address: 0x002AA78E   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,OreDef>,std::_Select1st<std::pair<int const,OreDef>>,std::less<int>,std::allocator<std::pair<int const,OreDef>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,TreeDef>,std::_Select1st<std::pair<int const,TreeDef>>,std::less<int>,std::allocator<std::pair<int const,TreeDef>>>::_M_get_insert_unique_pos(int const&)
// address: 0x002AA954   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,TreeDef>,std::_Select1st<std::pair<int const,TreeDef>>,std::less<int>,std::allocator<std::pair<int const,TreeDef>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,ToolDef>,std::_Select1st<std::pair<int const,ToolDef>>,std::less<int>,std::allocator<std::pair<int const,ToolDef>>>::_M_get_insert_unique_pos(int const&)
// address: 0x002AAB18   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,ToolDef>,std::_Select1st<std::pair<int const,ToolDef>>,std::less<int>,std::allocator<std::pair<int const,ToolDef>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,CraftingDef>,std::_Select1st<std::pair<int const,CraftingDef>>,std::less<int>,std::allocator<std::pair<int const,CraftingDef>>>::_M_get_insert_unique_pos(int const&)
// address: 0x002AACD4   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,CraftingDef>,std::_Select1st<std::pair<int const,CraftingDef>>,std::less<int>,std::allocator<std::pair<int const,CraftingDef>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,MonsterDef>,std::_Select1st<std::pair<int const,MonsterDef>>,std::less<int>,std::allocator<std::pair<int const,MonsterDef>>>::_M_get_insert_unique_pos(int const&)
// address: 0x002AAE90   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,MonsterDef>,std::_Select1st<std::pair<int const,MonsterDef>>,std::less<int>,std::allocator<std::pair<int const,MonsterDef>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,FoodDef>,std::_Select1st<std::pair<int const,FoodDef>>,std::less<int>,std::allocator<std::pair<int const,FoodDef>>>::_M_get_insert_unique_pos(int const&)
// address: 0x002AB054   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,FoodDef>,std::_Select1st<std::pair<int const,FoodDef>>,std::less<int>,std::allocator<std::pair<int const,FoodDef>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,BuffDef>,std::_Select1st<std::pair<int const,BuffDef>>,std::less<int>,std::allocator<std::pair<int const,BuffDef>>>::_M_get_insert_unique_pos(int const&)
// address: 0x002AB210   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,BuffDef>,std::_Select1st<std::pair<int const,BuffDef>>,std::less<int>,std::allocator<std::pair<int const,BuffDef>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,FurnaceDef>,std::_Select1st<std::pair<int const,FurnaceDef>>,std::less<int>,std::allocator<std::pair<int const,FurnaceDef>>>::_M_get_insert_unique_pos(int const&)
// address: 0x002AB3D4   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,FurnaceDef>,std::_Select1st<std::pair<int const,FurnaceDef>>,std::less<int>,std::allocator<std::pair<int const,FurnaceDef>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,AchievementDef>,std::_Select1st<std::pair<int const,AchievementDef>>,std::less<int>,std::allocator<std::pair<int const,AchievementDef>>>::_M_get_insert_unique_pos(int const&)
// address: 0x002AB590   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,AchievementDef>,std::_Select1st<std::pair<int const,AchievementDef>>,std::less<int>,std::allocator<std::pair<int const,AchievementDef>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,EnchantDef>,std::_Select1st<std::pair<int const,EnchantDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantDef>>>::_M_get_insert_unique_pos(int const&)
// address: 0x002AB754   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,EnchantDef>,std::_Select1st<std::pair<int const,EnchantDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantDef>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,EnchantMentDef>,std::_Select1st<std::pair<int const,EnchantMentDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantMentDef>>>::_M_get_insert_unique_pos(int const&)
// address: 0x002AB918   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,EnchantMentDef>,std::_Select1st<std::pair<int const,EnchantMentDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantMentDef>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,StringDef>,std::_Select1st<std::pair<int const,StringDef>>,std::less<int>,std::allocator<std::pair<int const,StringDef>>>::_M_get_insert_unique_pos(int const&)
// address: 0x002ABAD4   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,StringDef>,std::_Select1st<std::pair<int const,StringDef>>,std::less<int>,std::allocator<std::pair<int const,StringDef>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,ChestDef>,std::_Select1st<std::pair<int const,ChestDef>>,std::less<int>,std::allocator<std::pair<int const,ChestDef>>>::_M_get_insert_unique_pos(int const&)
// address: 0x002ABC8C   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,ChestDef>,std::_Select1st<std::pair<int const,ChestDef>>,std::less<int>,std::allocator<std::pair<int const,ChestDef>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<long long,std::pair<long long const,ClientWorld::BlockCrackEffect>,std::_Select1st<std::pair<long long const,ClientWorld::BlockCrackEffect>>,std::less<long long>,std::allocator<std::pair<long long const,ClientWorld::BlockCrackEffect>>>::_M_erase(std::_Rb_tree_node<std::pair<long long const,ClientWorld::BlockCrackEffect>> *)
// address: 0x002B1C70   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<long long,std::pair<long long const,ClientWorld::BlockCrackEffect>,std::_Select1st<std::pair<long long const,ClientWorld::BlockCrackEffect>>,std::less<long long>,std::allocator<std::pair<long long const,ClientWorld::BlockCrackEffect>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<long long,std::pair<long long const,ClientWorld::BlockCrackEffect>,std::_Select1st<std::pair<long long const,ClientWorld::BlockCrackEffect>>,std::less<long long>,std::allocator<std::pair<long long const,ClientWorld::BlockCrackEffect>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<long long,std::pair<long long const,ClientWorld::BlockCrackEffect>,std::_Select1st<std::pair<long long const,ClientWorld::BlockCrackEffect>>,std::less<long long>,std::allocator<std::pair<long long const,ClientWorld::BlockCrackEffect>>>::_M_get_insert_unique_pos(long long const&)
// address: 0x002B20EC   size: 0x6E (110 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<long long,std::pair<long long const,ClientWorld::BlockCrackEffect>,std::_Select1st<std::pair<long long const,ClientWorld::BlockCrackEffect>>,std::less<long long>,std::allocator<std::pair<long long const,ClientWorld::BlockCrackEffect>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _QWORD *a3)
{
  int v4; // r2
  int v6; // r3
  int v7; // r0
  int v8; // r6
  int v9; // r6

  v4 = *(_DWORD *)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != 0 )
  {
    if ( *(_QWORD *)(v4 + 16) <= *a3 )
    {
      v8 = *(_DWORD *)(v4 + 12);
      v7 = 0;
    }
    else
    {
      v8 = *(_DWORD *)(v4 + 8);
      v7 = 1;
    }
    v6 = v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
LABEL_14:
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *a3 <= *(_QWORD *)(v6 + 16) )
  {
    *a1 = v6;
    v6 = 0;
    goto LABEL_14;
  }
  *a1 = 0;
  a1[1] = v9;
  return a1;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,std::string>> *)
// address: 0x002B60BC   size: 0x32 (50 bytes)
//======================================================================
void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    sub_3BDF80(a2 + 5);
    sub_3BDF80(a2 + 4);
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,int>> *)
// address: 0x002B619E   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    sub_3BDF80(a2 + 4);
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_M_erase(std::_Rb_tree_node<std::pair<tinyobj::vertex_index const,unsigned int>> *)
// address: 0x002B61C6   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::~_Rb_tree()
// address: 0x002B61E6   size: 0xE (14 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIN7tinyobj12vertex_indexESt4pairIKS1_jESt10_Select1stIS4_ESt4lessIS1_ESaIS4_EED1Ev'
int __fastcall std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::~_Rb_tree(
        int a1)
{
  std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_M_erase(
    a1,
    *(_DWORD **)(a1 + 8));
  return a1;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_get_insert_unique_pos(std::string const&)
// address: 0x002B63A4   size: 0x66 (102 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2)
{
  int v2; // r6
  int v5; // r4
  unsigned int v6; // r0
  int v7; // r3
  int v9; // [sp+0h] [bp-Ch]

  v2 = *(_DWORD *)(a2 + 8);
  v5 = a2 + 4;
  v6 = 1;
  while ( v2 != 0 )
  {
    v6 = std::operator<<char>();
    if ( v6 != 0 )
      v7 = *(_DWORD *)(v2 + 8);
    else
      v7 = *(_DWORD *)(v2 + 12);
    v5 = v2;
    v2 = v7;
  }
  v9 = v5;
  if ( v6 != 0 )
  {
    if ( v5 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v5;
      return a1;
    }
    v5 = sub_391E44(v5);
  }
  if ( std::operator<<char>() != 0 )
  {
    *a1 = 0;
    a1[1] = v9;
  }
  else
  {
    *a1 = v5;
    a1[1] = 0;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_M_get_insert_unique_pos(tinyobj::vertex_index const&)
// address: 0x002B6704   size: 0x66 (102 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        int *a3)
{
  _DWORD *v3; // r6
  int v6; // r4
  _BOOL4 v7; // r0
  _DWORD *v8; // r3
  int v10; // [sp+0h] [bp-Ch]

  v3 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = true;
  while ( v3 != nullptr )
  {
    v7 = sub_2B5D08(a3, v3 + 4);
    if ( v7 )
      v8 = (_DWORD *)v3[2];
    else
      v8 = (_DWORD *)v3[3];
    v6 = (int)v3;
    v3 = v8;
  }
  v10 = v6;
  if ( v7 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( sub_2B5D08((int *)(v6 + 16), a3) )
  {
    *a1 = 0;
    a1[1] = v10;
  }
  else
  {
    *a1 = v6;
    a1[1] = 0;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_M_clone_node(std::_Rb_tree_node<std::pair<tinyobj::vertex_index const,unsigned int>> const*)
// address: 0x002B6BEC   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_M_clone_node(
        int a1,
        _DWORD *a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r4
  int v5; // r1
  int v6; // r6

  v3 = (_DWORD *)operator new(0x20u);
  v4 = v3;
  if ( v3 != nullptr )
  {
    j_memset(v3, 0, 0x10u);
    v5 = a2[5];
    v6 = a2[6];
    v4[4] = a2[4];
    v4[5] = v5;
    v4[6] = v6;
    v4[7] = a2[7];
  }
  *v4 = *a2;
  v4[2] = 0;
  v4[3] = 0;
  return v4;
}


//======================================================================
// std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_M_copy(std::_Rb_tree_node<std::pair<tinyobj::vertex_index const,unsigned int>> const*,std::_Rb_tree_node<std::pair<tinyobj::vertex_index const,unsigned int>>*)
// address: 0x002B6C20   size: 0x6A (106 bytes)
//======================================================================
_DWORD *__fastcall std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_M_copy(
        int a1,
        _DWORD *a2,
        int a3)
{
  _DWORD *v6; // r0
  int v7; // r1
  _DWORD *v8; // r4
  _DWORD *v9; // r7
  _DWORD *v10; // r0
  _DWORD *v11; // r6
  int v12; // r1
  _DWORD *v14; // [sp+4h] [bp-8h]

  v6 = std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_M_clone_node(
         a1,
         a2);
  v6[1] = a3;
  v7 = a2[3];
  v8 = v6;
  if ( v7 != 0 )
    v6[3] = std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_M_copy(
              a1,
              v7,
              v6);
  v9 = (_DWORD *)a2[2];
  v14 = v8;
  while ( v9 != nullptr )
  {
    v10 = std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_M_clone_node(
            a1,
            v9);
    v11 = v10;
    v14[2] = v10;
    v10[1] = v14;
    v12 = v9[3];
    if ( v12 != 0 )
      v10[3] = std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_M_copy(
                 a1,
                 v12,
                 v10);
    v9 = (_DWORD *)v9[2];
    v14 = v11;
  }
  return v8;
}


//======================================================================
// std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_Rb_tree(std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>> const&)
// address: 0x002B6C8A   size: 0x4C (76 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIN7tinyobj12vertex_indexESt4pairIKS1_jESt10_Select1stIS4_ESt4lessIS1_ESaIS4_EEC1ERKSA_'
_DWORD *__fastcall std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_Rb_tree(
        _DWORD *a1,
        int a2)
{
  int v2; // r5
  _DWORD *v5; // r1
  _DWORD *v6; // r0
  _DWORD *i; // r3

  v2 = (int)(a1 + 1);
  j_memset(a1 + 1, 0, 0x10u);
  a1[5] = 0;
  a1[3] = v2;
  a1[4] = v2;
  v5 = *(_DWORD **)(a2 + 8);
  if ( v5 != nullptr )
  {
    v6 = std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_M_copy(
           (int)a1,
           v5,
           v2);
    a1[2] = v6;
    for ( i = v6; i[2] != 0; i = (_DWORD *)i[2] )
      ;
    a1[3] = i;
    while ( v6[3] != 0 )
      v6 = (_DWORD *)v6[3];
    a1[4] = v6;
    a1[5] = *(_DWORD *)(a2 + 20);
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_copy(std::_Rb_tree_node<std::pair<std::string const,std::string>> const*,std::_Rb_tree_node<std::pair<std::string const,std::string>>*)
// address: 0x002B719C   size: 0x82 (130 bytes)
//======================================================================
char *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_copy(
        int a1,
        int *a2,
        int a3)
{
  char *v6; // r0
  int v7; // r3
  char *v8; // r4
  int v9; // r1
  _DWORD *v10; // r6
  char *v11; // r5
  int v12; // r1
  char *v14; // [sp+4h] [bp-8h]

  v6 = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_create_node<std::pair<std::string const,std::string> const&>(
         a1,
         (int)(a2 + 4));
  v7 = *a2;
  *((_DWORD *)v6 + 1) = a3;
  v8 = v6;
  *(_DWORD *)v6 = v7;
  *((_DWORD *)v6 + 2) = 0;
  *((_DWORD *)v6 + 3) = 0;
  v9 = a2[3];
  if ( v9 != 0 )
    *((_DWORD *)v6 + 3) = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_copy(
                            a1,
                            v9,
                            v6);
  v10 = (_DWORD *)a2[2];
  v14 = v8;
  while ( v10 != nullptr )
  {
    v11 = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_create_node<std::pair<std::string const,std::string> const&>(
            a1,
            (int)(v10 + 4));
    *(_DWORD *)v11 = *v10;
    *((_DWORD *)v11 + 2) = 0;
    *((_DWORD *)v11 + 3) = 0;
    *((_DWORD *)v14 + 2) = v11;
    *((_DWORD *)v11 + 1) = v14;
    v12 = v10[3];
    if ( v12 != 0 )
      *((_DWORD *)v11 + 3) = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_copy(
                               a1,
                               v12,
                               v11);
    v10 = (_DWORD *)v10[2];
    v14 = v11;
  }
  return v8;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_Rb_tree(std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>&&)
// address: 0x002B7330   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeISsSt4pairIKSsSsESt10_Select1stIS2_ESt4lessISsESaIS2_EEC1EOS8_'
_DWORD *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_Rb_tree(
        _DWORD *a1,
        _DWORD *a2)
{
  _DWORD *v2; // r6
  int v5; // r2
  int v6; // r2

  v2 = a1 + 1;
  j_memset(a1 + 1, 0, 0x10u);
  a1[5] = 0;
  a1[3] = v2;
  a1[4] = v2;
  v5 = a2[2];
  if ( v5 != 0 )
  {
    a1[2] = v5;
    a1[3] = a2[3];
    a1[4] = a2[4];
    *(_DWORD *)(v5 + 4) = v2;
    a2[3] = a2 + 1;
    a2[4] = a2 + 1;
    v6 = a2[5];
    a2[2] = 0;
    a1[5] = v6;
    a2[5] = 0;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,StructureStart *>,std::_Select1st<std::pair<ChunkIndex const,StructureStart *>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,StructureStart *>>>::_M_get_insert_unique_pos(ChunkIndex const&)
// address: 0x002BD5D8   size: 0x66 (102 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,StructureStart *>,std::_Select1st<std::pair<ChunkIndex const,StructureStart *>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,StructureStart *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        int *a3)
{
  _DWORD *v3; // r6
  int v6; // r4
  _BOOL4 v7; // r0
  _DWORD *v8; // r3
  int v10; // [sp+0h] [bp-Ch]

  v3 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = true;
  while ( v3 != nullptr )
  {
    v7 = sub_2BD1F0(a3, v3 + 4);
    if ( v7 )
      v8 = (_DWORD *)v3[2];
    else
      v8 = (_DWORD *)v3[3];
    v6 = (int)v3;
    v3 = v8;
  }
  v10 = v6;
  if ( v7 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( sub_2BD1F0((int *)(v6 + 16), a3) )
  {
    *a1 = 0;
    a1[1] = v10;
  }
  else
  {
    *a1 = v6;
    a1[1] = 0;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,StructureStart *>,std::_Select1st<std::pair<ChunkIndex const,StructureStart *>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,StructureStart *>>>::_M_erase(std::_Rb_tree_node<std::pair<ChunkIndex const,StructureStart *>> *)
// address: 0x002BD858   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,StructureStart *>,std::_Select1st<std::pair<ChunkIndex const,StructureStart *>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,StructureStart *>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,StructureStart *>,std::_Select1st<std::pair<ChunkIndex const,StructureStart *>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,StructureStart *>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockTexElement *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockTexElement *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockTexElement *>>>::_M_erase(std::_Rb_tree_node<std::pair<Ogre::FixedString const,BlockTexElement *>> *)
// address: 0x002C2530   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockTexElement *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockTexElement *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockTexElement *>>>::_M_erase(
        int a1,
        int a2)
{
  int v4; // r6
  void *v5; // r1

  while ( a2 != 0 )
  {
    std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockTexElement *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockTexElement *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockTexElement *>>>::_M_erase(
      a1,
      *(_DWORD *)(a2 + 12));
    v4 = *(_DWORD *)(a2 + 8);
    Ogre::FixedString::~FixedString((Ogre::FixedString **)(a2 + 16), v5);
    operator delete((void *)a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockGeomTemplate *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>>::_M_erase(std::_Rb_tree_node<std::pair<Ogre::FixedString const,BlockGeomTemplate *>> *)
// address: 0x002C2558   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockGeomTemplate *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>>::_M_erase(
        int a1,
        int a2)
{
  int v4; // r6
  void *v5; // r1

  while ( a2 != 0 )
  {
    std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockGeomTemplate *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>>::_M_erase(
      a1,
      *(_DWORD *)(a2 + 12));
    v4 = *(_DWORD *)(a2 + 8);
    Ogre::FixedString::~FixedString((Ogre::FixedString **)(a2 + 16), v5);
    operator delete((void *)a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>,std::_Select1st<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>>::_M_erase(std::_Rb_tree_node<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>> *)
// address: 0x002C2592   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>,std::_Select1st<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>>::_M_erase(
        int a1,
        int a2)
{
  int v4; // r6
  void *v5; // r1

  while ( a2 != 0 )
  {
    std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>,std::_Select1st<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>>::_M_erase(
      a1,
      *(_DWORD *)(a2 + 12));
    v4 = *(_DWORD *)(a2 + 8);
    Ogre::FixedString::~FixedString((Ogre::FixedString **)(a2 + 16), v5);
    operator delete((void *)a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,void *>,std::_Select1st<std::pair<int const,void *>>,std::less<int>,std::allocator<std::pair<int const,void *>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,void *>> *)
// address: 0x002C25BA   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,void *>,std::_Select1st<std::pair<int const,void *>>,std::less<int>,std::allocator<std::pair<int const,void *>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,void *>,std::_Select1st<std::pair<int const,void *>>,std::less<int>,std::allocator<std::pair<int const,void *>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,BlockMaterial * (*)(void)>,std::_Select1st<std::pair<std::string const,BlockMaterial * (*)(void)>>,std::less<std::string>,std::allocator<std::pair<std::string const,BlockMaterial * (*)(void)>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,BlockMaterial * (*)(void)>> *)
// address: 0x002C272C   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,BlockMaterial * (*)(void)>,std::_Select1st<std::pair<std::string const,BlockMaterial * (*)(void)>>,std::less<std::string>,std::allocator<std::pair<std::string const,BlockMaterial * (*)(void)>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,BlockMaterial * (*)(void)>,std::_Select1st<std::pair<std::string const,BlockMaterial * (*)(void)>>,std::less<std::string>,std::allocator<std::pair<std::string const,BlockMaterial * (*)(void)>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    sub_3BDF80(a2 + 4);
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,BlockMaterial * (*)(void)>,std::_Select1st<std::pair<std::string const,BlockMaterial * (*)(void)>>,std::less<std::string>,std::allocator<std::pair<std::string const,BlockMaterial * (*)(void)>>>::_M_get_insert_unique_pos(std::string const&)
// address: 0x002C2B4C   size: 0x66 (102 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,BlockMaterial * (*)(void)>,std::_Select1st<std::pair<std::string const,BlockMaterial * (*)(void)>>,std::less<std::string>,std::allocator<std::pair<std::string const,BlockMaterial * (*)(void)>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2)
{
  int v2; // r6
  int v5; // r4
  unsigned int v6; // r0
  int v7; // r3
  int v9; // [sp+0h] [bp-Ch]

  v2 = *(_DWORD *)(a2 + 8);
  v5 = a2 + 4;
  v6 = 1;
  while ( v2 != 0 )
  {
    v6 = std::operator<<char>();
    if ( v6 != 0 )
      v7 = *(_DWORD *)(v2 + 8);
    else
      v7 = *(_DWORD *)(v2 + 12);
    v5 = v2;
    v2 = v7;
  }
  v9 = v5;
  if ( v6 != 0 )
  {
    if ( v5 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v5;
      return a1;
    }
    v5 = sub_391E44(v5);
  }
  if ( std::operator<<char>() != 0 )
  {
    *a1 = 0;
    a1[1] = v9;
  }
  else
  {
    *a1 = v5;
    a1[1] = 0;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockGeomTemplate *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>>::_M_get_insert_unique_pos(Ogre::FixedString const&)
// address: 0x002C356C   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockGeomTemplate *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockTexElement *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockTexElement *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockTexElement *>>>::_M_get_insert_unique_pos(Ogre::FixedString const&)
// address: 0x002C3808   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockTexElement *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockTexElement *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockTexElement *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>,std::_Select1st<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>>::_M_get_insert_unique_pos(Ogre::FixedString const&)
// address: 0x002C3B20   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>,std::_Select1st<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,bool>,std::_Select1st<std::pair<ChunkIndex const,bool>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,bool>>>::_M_erase(std::_Rb_tree_node<std::pair<ChunkIndex const,bool>> *)
// address: 0x002C76E0   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,bool>,std::_Select1st<std::pair<ChunkIndex const,bool>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,bool>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,bool>,std::_Select1st<std::pair<ChunkIndex const,bool>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,bool>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,bool>,std::_Select1st<std::pair<ChunkIndex const,bool>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,bool>>>::_M_get_insert_unique_pos(ChunkIndex const&)
// address: 0x002C7830   size: 0x66 (102 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,bool>,std::_Select1st<std::pair<ChunkIndex const,bool>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,bool>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        int *a3)
{
  _DWORD *v3; // r6
  int v6; // r4
  _BOOL4 v7; // r0
  _DWORD *v8; // r3
  int v10; // [sp+0h] [bp-Ch]

  v3 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = true;
  while ( v3 != nullptr )
  {
    v7 = sub_2C6EA0(a3, v3 + 4);
    if ( v7 )
      v8 = (_DWORD *)v3[2];
    else
      v8 = (_DWORD *)v3[3];
    v6 = (int)v3;
    v3 = v8;
  }
  v10 = v6;
  if ( v7 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( sub_2C6EA0((int *)(v6 + 16), a3) )
  {
    *a1 = 0;
    a1[1] = v10;
  }
  else
  {
    *a1 = v6;
    a1[1] = 0;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,int>,std::_Select1st<std::pair<ChunkIndex const,int>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,int>>>::_M_erase(std::_Rb_tree_node<std::pair<ChunkIndex const,int>> *)
// address: 0x002CA54C   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,int>,std::_Select1st<std::pair<ChunkIndex const,int>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,int>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,int>,std::_Select1st<std::pair<ChunkIndex const,int>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,int>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<Chunk *,Chunk *,std::_Identity<Chunk *>,std::less<Chunk *>,std::allocator<Chunk *>>::_M_erase(std::_Rb_tree_node<Chunk *> *)
// address: 0x002CEF64   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<Chunk *,Chunk *,std::_Identity<Chunk *>,std::less<Chunk *>,std::allocator<Chunk *>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<Chunk *,Chunk *,std::_Identity<Chunk *>,std::less<Chunk *>,std::allocator<Chunk *>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,ActorAction *>,std::_Select1st<std::pair<std::string const,ActorAction *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ActorAction *>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,ActorAction *>> *)
// address: 0x002D39E0   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,ActorAction *>,std::_Select1st<std::pair<std::string const,ActorAction *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ActorAction *>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,ActorAction *>,std::_Select1st<std::pair<std::string const,ActorAction *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ActorAction *>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    sub_3BDF80(a2 + 4);
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,ActorAction *>,std::_Select1st<std::pair<std::string const,ActorAction *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ActorAction *>>>::_M_get_insert_unique_pos(std::string const&)
// address: 0x002D3AC2   size: 0x66 (102 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,ActorAction *>,std::_Select1st<std::pair<std::string const,ActorAction *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ActorAction *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2)
{
  int v2; // r6
  int v5; // r4
  unsigned int v6; // r0
  int v7; // r3
  int v9; // [sp+0h] [bp-Ch]

  v2 = *(_DWORD *)(a2 + 8);
  v5 = a2 + 4;
  v6 = 1;
  while ( v2 != 0 )
  {
    v6 = std::operator<<char>();
    if ( v6 != 0 )
      v7 = *(_DWORD *)(v2 + 8);
    else
      v7 = *(_DWORD *)(v2 + 12);
    v5 = v2;
    v2 = v7;
  }
  v9 = v5;
  if ( v6 != 0 )
  {
    if ( v5 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v5;
      return a1;
    }
    v5 = sub_391E44(v5);
  }
  if ( std::operator<<char>() != 0 )
  {
    *a1 = 0;
    a1[1] = v9;
  }
  else
  {
    *a1 = v5;
    a1[1] = 0;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,ToolDef>,std::_Select1st<std::pair<int const,ToolDef>>,std::less<int>,std::allocator<std::pair<int const,ToolDef>>>::find(int const&)
// address: 0x002DE6FE   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,ToolDef>,std::_Select1st<std::pair<int const,ToolDef>>,std::less<int>,std::allocator<std::pair<int const,ToolDef>>>::find(
        int a1,
        _DWORD *a2)
{
  _DWORD *v2; // r2
  _DWORD *v3; // r3
  _DWORD *result; // r0
  _DWORD *v5; // r4

  v2 = (_DWORD *)(a1 + 4);
  v3 = *(_DWORD **)(a1 + 8);
  result = (_DWORD *)(a1 + 4);
  while ( v3 != nullptr )
  {
    if ( v3[4] < *a2 )
    {
      v5 = (_DWORD *)v3[3];
      v3 = result;
    }
    else
    {
      v5 = (_DWORD *)v3[2];
    }
    result = v3;
    v3 = v5;
  }
  if ( result == v2 || *a2 < result[4] )
    return v2;
  return result;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,ParticleTemplate *>,std::_Select1st<std::pair<std::string const,ParticleTemplate *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ParticleTemplate *>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,ParticleTemplate *>> *)
// address: 0x002E9302   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,ParticleTemplate *>,std::_Select1st<std::pair<std::string const,ParticleTemplate *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ParticleTemplate *>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,ParticleTemplate *>,std::_Select1st<std::pair<std::string const,ParticleTemplate *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ParticleTemplate *>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    sub_3BDF80(a2 + 4);
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,ParticleTemplate *>,std::_Select1st<std::pair<std::string const,ParticleTemplate *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ParticleTemplate *>>>::_M_get_insert_unique_pos(std::string const&)
// address: 0x002E9422   size: 0x66 (102 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,ParticleTemplate *>,std::_Select1st<std::pair<std::string const,ParticleTemplate *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ParticleTemplate *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2)
{
  int v2; // r6
  int v5; // r4
  unsigned int v6; // r0
  int v7; // r3
  int v9; // [sp+0h] [bp-Ch]

  v2 = *(_DWORD *)(a2 + 8);
  v5 = a2 + 4;
  v6 = 1;
  while ( v2 != 0 )
  {
    v6 = std::operator<<char>();
    if ( v6 != 0 )
      v7 = *(_DWORD *)(v2 + 8);
    else
      v7 = *(_DWORD *)(v2 + 12);
    v5 = v2;
    v2 = v7;
  }
  v9 = v5;
  if ( v6 != 0 )
  {
    if ( v5 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v5;
      return a1;
    }
    v5 = sub_391E44(v5);
  }
  if ( std::operator<<char>() != 0 )
  {
    *a1 = 0;
    a1[1] = v9;
  }
  else
  {
    *a1 = v5;
    a1[1] = 0;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<ScheduleBlock const*,ScheduleBlock const*,std::_Identity<ScheduleBlock const*>,ScheduleBlockCompare,std::allocator<ScheduleBlock const*>>::_M_erase(std::_Rb_tree_node<ScheduleBlock const*> *)
// address: 0x002ED9AA   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<ScheduleBlock const*,ScheduleBlock const*,std::_Identity<ScheduleBlock const*>,ScheduleBlockCompare,std::allocator<ScheduleBlock const*>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<ScheduleBlock const*,ScheduleBlock const*,std::_Identity<ScheduleBlock const*>,ScheduleBlockCompare,std::allocator<ScheduleBlock const*>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<ChunkIndex,ChunkIndex,std::_Identity<ChunkIndex>,std::less<ChunkIndex>,std::allocator<ChunkIndex>>::_M_erase(std::_Rb_tree_node<ChunkIndex> *)
// address: 0x002ED9CA   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<ChunkIndex,ChunkIndex,std::_Identity<ChunkIndex>,std::less<ChunkIndex>,std::allocator<ChunkIndex>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<ChunkIndex,ChunkIndex,std::_Identity<ChunkIndex>,std::less<ChunkIndex>,std::allocator<ChunkIndex>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,int>,std::_Select1st<std::pair<ChunkIndex const,int>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,int>>>::_M_get_insert_unique_pos(ChunkIndex const&)
// address: 0x002EF2EE   size: 0x66 (102 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,int>,std::_Select1st<std::pair<ChunkIndex const,int>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,int>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        int *a3)
{
  _DWORD *v3; // r6
  int v6; // r4
  _BOOL4 v7; // r0
  _DWORD *v8; // r3
  int v10; // [sp+0h] [bp-Ch]

  v3 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = true;
  while ( v3 != nullptr )
  {
    v7 = sub_2EECB0(a3, v3 + 4);
    if ( v7 )
      v8 = (_DWORD *)v3[2];
    else
      v8 = (_DWORD *)v3[3];
    v6 = (int)v3;
    v3 = v8;
  }
  v10 = v6;
  if ( v7 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( sub_2EECB0((int *)(v6 + 16), a3) )
  {
    *a1 = 0;
    a1[1] = v10;
  }
  else
  {
    *a1 = v6;
    a1[1] = 0;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,World *>,std::_Select1st<std::pair<int const,World *>>,std::less<int>,std::allocator<std::pair<int const,World *>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,World *>> *)
// address: 0x002F0B6A   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,World *>,std::_Select1st<std::pair<int const,World *>>,std::less<int>,std::allocator<std::pair<int const,World *>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,World *>,std::_Select1st<std::pair<int const,World *>>,std::less<int>,std::allocator<std::pair<int const,World *>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,World *>,std::_Select1st<std::pair<int const,World *>>,std::less<int>,std::allocator<std::pair<int const,World *>>>::_M_get_insert_unique_pos(int const&)
// address: 0x002F1416   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,World *>,std::_Select1st<std::pair<int const,World *>>,std::less<int>,std::allocator<std::pair<int const,World *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,ClientGame *>,std::_Select1st<std::pair<std::string const,ClientGame *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ClientGame *>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,ClientGame *>> *)
// address: 0x002F6062   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,ClientGame *>,std::_Select1st<std::pair<std::string const,ClientGame *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ClientGame *>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,ClientGame *>,std::_Select1st<std::pair<std::string const,ClientGame *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ClientGame *>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    sub_3BDF80(a2 + 4);
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,ClientManager::IconDesc>,std::_Select1st<std::pair<int const,ClientManager::IconDesc>>,std::less<int>,std::allocator<std::pair<int const,ClientManager::IconDesc>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,ClientManager::IconDesc>> *)
// address: 0x002F608A   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<int,std::pair<int const,ClientManager::IconDesc>,std::_Select1st<std::pair<int const,ClientManager::IconDesc>>,std::less<int>,std::allocator<std::pair<int const,ClientManager::IconDesc>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,ClientManager::IconDesc>,std::_Select1st<std::pair<int const,ClientManager::IconDesc>>,std::less<int>,std::allocator<std::pair<int const,ClientManager::IconDesc>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_get_insert_unique_pos(std::string const&)
// address: 0x002F61EC   size: 0x66 (102 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2)
{
  int v2; // r6
  int v5; // r4
  unsigned int v6; // r0
  int v7; // r3
  int v9; // [sp+0h] [bp-Ch]

  v2 = *(_DWORD *)(a2 + 8);
  v5 = a2 + 4;
  v6 = 1;
  while ( v2 != 0 )
  {
    v6 = std::operator<<char>();
    if ( v6 != 0 )
      v7 = *(_DWORD *)(v2 + 8);
    else
      v7 = *(_DWORD *)(v2 + 12);
    v5 = v2;
    v2 = v7;
  }
  v9 = v5;
  if ( v6 != 0 )
  {
    if ( v5 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v5;
      return a1;
    }
    v5 = sub_391E44(v5);
  }
  if ( std::operator<<char>() != 0 )
  {
    *a1 = 0;
    a1[1] = v9;
  }
  else
  {
    *a1 = v5;
    a1[1] = 0;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,ClientManager::IconDesc>,std::_Select1st<std::pair<int const,ClientManager::IconDesc>>,std::less<int>,std::allocator<std::pair<int const,ClientManager::IconDesc>>>::_M_get_insert_unique_pos(int const&)
// address: 0x002F6448   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<int,std::pair<int const,ClientManager::IconDesc>,std::_Select1st<std::pair<int const,ClientManager::IconDesc>>,std::less<int>,std::allocator<std::pair<int const,ClientManager::IconDesc>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r6

  v4 = *(_DWORD **)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = (int)v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(_DWORD *)(v6 + 16) >= *a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<std::string,std::pair<std::string const,ClientGame *>,std::_Select1st<std::pair<std::string const,ClientGame *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ClientGame *>>>::_M_get_insert_unique_pos(std::string const&)
// address: 0x002F66D4   size: 0x66 (102 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,ClientGame *>,std::_Select1st<std::pair<std::string const,ClientGame *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ClientGame *>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2)
{
  int v2; // r6
  int v5; // r4
  unsigned int v6; // r0
  int v7; // r3
  int v9; // [sp+0h] [bp-Ch]

  v2 = *(_DWORD *)(a2 + 8);
  v5 = a2 + 4;
  v6 = 1;
  while ( v2 != 0 )
  {
    v6 = std::operator<<char>();
    if ( v6 != 0 )
      v7 = *(_DWORD *)(v2 + 8);
    else
      v7 = *(_DWORD *)(v2 + 12);
    v5 = v2;
    v2 = v7;
  }
  v9 = v5;
  if ( v6 != 0 )
  {
    if ( v5 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v5;
      return a1;
    }
    v5 = sub_391E44(v5);
  }
  if ( std::operator<<char>() != 0 )
  {
    *a1 = 0;
    a1[1] = v9;
  }
  else
  {
    *a1 = v5;
    a1[1] = 0;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<int,std::pair<int const,ChestDef>,std::_Select1st<std::pair<int const,ChestDef>>,std::less<int>,std::allocator<std::pair<int const,ChestDef>>>::find(int const&)
// address: 0x002FA7A0   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,ChestDef>,std::_Select1st<std::pair<int const,ChestDef>>,std::less<int>,std::allocator<std::pair<int const,ChestDef>>>::find(
        int a1,
        _DWORD *a2)
{
  _DWORD *v2; // r2
  _DWORD *v3; // r3
  _DWORD *result; // r0
  _DWORD *v5; // r4

  v2 = (_DWORD *)(a1 + 4);
  v3 = *(_DWORD **)(a1 + 8);
  result = (_DWORD *)(a1 + 4);
  while ( v3 != nullptr )
  {
    if ( v3[4] < *a2 )
    {
      v5 = (_DWORD *)v3[3];
      v3 = result;
    }
    else
    {
      v5 = (_DWORD *)v3[2];
    }
    result = v3;
    v3 = v5;
  }
  if ( result == v2 || *a2 < result[4] )
    return v2;
  return result;
}


//======================================================================
// std::_Rb_tree<tagChunkFlagEntry,tagChunkFlagEntry,std::_Identity<tagChunkFlagEntry>,std::less<tagChunkFlagEntry>,std::allocator<tagChunkFlagEntry>>::_M_erase(std::_Rb_tree_node<tagChunkFlagEntry> *)
// address: 0x00308F26   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<tagChunkFlagEntry,tagChunkFlagEntry,std::_Identity<tagChunkFlagEntry>,std::less<tagChunkFlagEntry>,std::allocator<tagChunkFlagEntry>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<tagChunkFlagEntry,tagChunkFlagEntry,std::_Identity<tagChunkFlagEntry>,std::less<tagChunkFlagEntry>,std::allocator<tagChunkFlagEntry>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<unsigned short,std::pair<unsigned short const,std::pair<char const*,bool>>,std::_Select1st<std::pair<unsigned short const,std::pair<char const*,bool>>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::pair<char const*,bool>>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned short const,std::pair<char const*,bool>>> *)
// address: 0x0038E218   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<unsigned short,std::pair<unsigned short const,std::pair<char const*,bool>>,std::_Select1st<std::pair<unsigned short const,std::pair<char const*,bool>>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::pair<char const*,bool>>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<unsigned short,std::pair<unsigned short const,std::pair<char const*,bool>>,std::_Select1st<std::pair<unsigned short const,std::pair<char const*,bool>>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::pair<char const*,bool>>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<unsigned short,std::pair<unsigned short const,std::pair<wchar_t const*,bool>>,std::_Select1st<std::pair<unsigned short const,std::pair<wchar_t const*,bool>>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::pair<wchar_t const*,bool>>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned short const,std::pair<wchar_t const*,bool>>> *)
// address: 0x0038E238   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::_Rb_tree<unsigned short,std::pair<unsigned short const,std::pair<wchar_t const*,bool>>,std::_Select1st<std::pair<unsigned short const,std::pair<wchar_t const*,bool>>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::pair<wchar_t const*,bool>>>>::_M_erase(
        int a1,
        _DWORD *a2)
{
  _DWORD *v4; // r6

  while ( a2 != nullptr )
  {
    std::_Rb_tree<unsigned short,std::pair<unsigned short const,std::pair<wchar_t const*,bool>>,std::_Select1st<std::pair<unsigned short const,std::pair<wchar_t const*,bool>>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::pair<wchar_t const*,bool>>>>::_M_erase(
      a1,
      a2[3]);
    v4 = (_DWORD *)a2[2];
    operator delete(a2);
    a2 = v4;
  }
}


//======================================================================
// std::_Rb_tree<unsigned short,std::pair<unsigned short const,std::pair<char const*,bool>>,std::_Select1st<std::pair<unsigned short const,std::pair<char const*,bool>>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::pair<char const*,bool>>>>::_M_get_insert_unique_pos(unsigned short const&)
// address: 0x0038E654   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<unsigned short,std::pair<unsigned short const,std::pair<char const*,bool>>,std::_Select1st<std::pair<unsigned short const,std::pair<char const*,bool>>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::pair<char const*,bool>>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        unsigned __int16 *a3)
{
  int v4; // r2
  int v6; // r3
  int v7; // r0
  int v8; // r6
  int v9; // r6

  v4 = *(_DWORD *)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != 0 )
  {
    if ( *a3 >= (unsigned int)*(unsigned __int16 *)(v4 + 16) )
    {
      v8 = *(_DWORD *)(v4 + 12);
      v7 = 0;
    }
    else
    {
      v8 = *(_DWORD *)(v4 + 8);
      v7 = 1;
    }
    v6 = v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(unsigned __int16 *)(v6 + 16) >= (unsigned int)*a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}


//======================================================================
// std::_Rb_tree<unsigned short,std::pair<unsigned short const,std::pair<wchar_t const*,bool>>,std::_Select1st<std::pair<unsigned short const,std::pair<wchar_t const*,bool>>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::pair<wchar_t const*,bool>>>>::_M_get_insert_unique_pos(unsigned short const&)
// address: 0x0038E85E   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall std::_Rb_tree<unsigned short,std::pair<unsigned short const,std::pair<wchar_t const*,bool>>,std::_Select1st<std::pair<unsigned short const,std::pair<wchar_t const*,bool>>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::pair<wchar_t const*,bool>>>>::_M_get_insert_unique_pos(
        int *a1,
        int a2,
        unsigned __int16 *a3)
{
  int v4; // r2
  int v6; // r3
  int v7; // r0
  int v8; // r6
  int v9; // r6

  v4 = *(_DWORD *)(a2 + 8);
  v6 = a2 + 4;
  v7 = 1;
  while ( v4 != 0 )
  {
    if ( *a3 >= (unsigned int)*(unsigned __int16 *)(v4 + 16) )
    {
      v8 = *(_DWORD *)(v4 + 12);
      v7 = 0;
    }
    else
    {
      v8 = *(_DWORD *)(v4 + 8);
      v7 = 1;
    }
    v6 = v4;
    v4 = v8;
  }
  v9 = v6;
  if ( v7 != 0 )
  {
    if ( v6 == *(_DWORD *)(a2 + 12) )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v6 = sub_391E44(v6);
  }
  if ( *(unsigned __int16 *)(v6 + 16) >= (unsigned int)*a3 )
  {
    *a1 = v6;
    a1[1] = 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = v9;
  }
  return a1;
}

