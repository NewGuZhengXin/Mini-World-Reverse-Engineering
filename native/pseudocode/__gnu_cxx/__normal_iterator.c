// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: __gnu_cxx::__normal_iterator

//======================================================================
// __gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>> std::lower_bound<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,Ogre::ShaderContext *,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,Ogre::ShaderContext * const&,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*))
// address: 0x0015CD84   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall std::lower_bound<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,Ogre::ShaderContext *,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int (__fastcall *a4)(_DWORD, _DWORD))
{
  _DWORD *v5; // r4
  int v6; // r5
  _DWORD *v7; // r6
  int i; // [sp+0h] [bp-Ch]

  v5 = a1;
  for ( i = (a2 - (int)a1) >> 2; i > 0; i = v6 )
  {
    v6 = i >> 1;
    v7 = &v5[i >> 1];
    if ( a4(*v7, *a3) != 0 )
    {
      v5 = v7 + 1;
      v6 = i - v6 - 1;
    }
  }
  return v5;
}


//======================================================================
// __gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>> std::upper_bound<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,Ogre::ShaderContext *,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,Ogre::ShaderContext * const&,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*))
// address: 0x0015CDBC   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall std::upper_bound<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,Ogre::ShaderContext *,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int (__fastcall *a4)(_DWORD, _DWORD))
{
  _DWORD *v5; // r4
  int v6; // r5
  _DWORD *v7; // r6
  int i; // [sp+0h] [bp-Ch]

  v5 = a1;
  for ( i = (a2 - (int)a1) >> 2; i > 0; i = v6 )
  {
    v6 = i >> 1;
    v7 = &v5[i >> 1];
    if ( a4(*a3, *v7) == 0 )
    {
      v5 = v7 + 1;
      v6 = i - v6 - 1;
    }
  }
  return v5;
}


//======================================================================
// __gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>> std::__move_merge<Ogre::ShaderContext **,Ogre::ShaderContext **,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(Ogre::ShaderContext **,Ogre::ShaderContext **,Ogre::ShaderContext **,Ogre::ShaderContext **,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*))
// address: 0x0015D43C   size: 0x44 (68 bytes)
//======================================================================
int __fastcall std::__move_merge<Ogre::ShaderContext **,Ogre::ShaderContext **,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
        int *a1,
        int *a2,
        int *a3,
        int *a4,
        _DWORD *a5,
        int (__fastcall *a6)(int, int))
{
  void *v10; // r0
  int v12; // r3

  while ( a1 != a2 && a3 != a4 )
  {
    if ( a6(*a3, *a1) != 0 )
      v12 = *a3++;
    else
      v12 = *a1++;
    *a5++ = v12;
  }
  v10 = (void *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContext *>(
                  a1,
                  (int)a2,
                  a5);
  return std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContext *>(a3, (int)a4, v10);
}


//======================================================================
// __gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>> std::__find_if<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,std::binder2nd<std::pointer_to_binary_function<Frame *,char const*,bool>>>(__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,std::binder2nd<std::pointer_to_binary_function<Frame *,char const*,bool>>,std::random_access_iterator_tag)
// address: 0x001A6C00   size: 0xAE (174 bytes)
//======================================================================
int *__fastcall std::__find_if<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,std::binder2nd<std::pointer_to_binary_function<Frame *,char const*,bool>>>(
        int *a1,
        int a2,
        int a3,
        int a4)
{
  int *i; // r4
  int *v6; // r5
  int v8; // r0
  int v9; // r3
  int v10; // [sp+4h] [bp-10h]
  _DWORD v11[3]; // [sp+8h] [bp-Ch] BYREF

  v11[1] = a4;
  v11[0] = a3;
  v10 = (a2 - (int)a1) >> 4;
  for ( i = a1; ; i += 4 )
  {
    v6 = i;
    if ( v10 <= 0 )
      break;
    if ( sub_1A6326((int)v11, *i) != 0 )
      return i;
    if ( sub_1A6326((int)v11, i[1]) != 0 )
      return i + 1;
    if ( sub_1A6326((int)v11, i[2]) != 0 )
      return i + 2;
    v8 = sub_1A6326((int)v11, i[3]);
    if ( v8 != 0 )
      return v6 + 3;
    --v10;
  }
  v9 = (a2 - (int)i) >> 2;
  if ( v9 != 2 )
  {
    if ( v9 != 3 )
    {
      if ( v9 != 1 )
        return (int *)a2;
      goto LABEL_19;
    }
    v6 = i + 1;
    if ( sub_1A6326((int)v11, *i) != 0 )
      return i;
  }
  if ( sub_1A6326((int)v11, *v6) != 0 )
    return v6;
  ++v6;
LABEL_19:
  if ( sub_1A6326((int)v11, *v6) != 0 )
    return v6;
  return (int *)a2;
}


//======================================================================
// __gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>> std::__find<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,LayoutFrame *>(__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,LayoutFrame * const&,std::random_access_iterator_tag)
// address: 0x001A6D2C   size: 0x72 (114 bytes)
//======================================================================
_DWORD *__fastcall std::__find<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,LayoutFrame *>(
        _DWORD *result,
        int a2,
        int *a3)
{
  int i; // r5
  _DWORD *v4; // r3
  int v5; // r4
  int v6; // r4

  for ( i = (a2 - (int)result) >> 4; ; --i )
  {
    v4 = result;
    if ( i <= 0 )
      break;
    v5 = *a3;
    if ( *result == *a3 )
      return result;
    if ( result[1] == v5 )
      return ++result;
    if ( result[2] == v5 )
    {
      result += 2;
      return result;
    }
    result += 4;
    if ( *(result - 1) == v5 )
      return v4 + 3;
  }
  v6 = (a2 - (int)result) >> 2;
  if ( v6 != 2 )
  {
    if ( v6 != 3 )
    {
      if ( v6 != 1 )
        return (_DWORD *)a2;
      goto LABEL_18;
    }
    v4 = result + 1;
    if ( *result == *a3 )
      return result;
  }
  if ( *v4 == *a3 )
    return v4;
  ++v4;
LABEL_18:
  if ( *v4 == *a3 )
    return v4;
  return (_DWORD *)a2;
}


//======================================================================
// __gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>> std::lower_bound<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,Frame *,bool (*)(LayoutFrame const*,LayoutFrame const*)>(__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,Frame * const&,bool (*)(LayoutFrame const*,LayoutFrame const*))
// address: 0x001B89D4   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall std::lower_bound<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,Frame *,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int (__fastcall *a4)(_DWORD, _DWORD))
{
  _DWORD *v5; // r4
  int v6; // r5
  _DWORD *v7; // r6
  int i; // [sp+0h] [bp-Ch]

  v5 = a1;
  for ( i = (a2 - (int)a1) >> 2; i > 0; i = v6 )
  {
    v6 = i >> 1;
    v7 = &v5[i >> 1];
    if ( a4(*v7, *a3) != 0 )
    {
      v5 = v7 + 1;
      v6 = i - v6 - 1;
    }
  }
  return v5;
}


//======================================================================
// __gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>> std::upper_bound<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,Frame *,bool (*)(LayoutFrame const*,LayoutFrame const*)>(__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,Frame * const&,bool (*)(LayoutFrame const*,LayoutFrame const*))
// address: 0x001B8A0C   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall std::upper_bound<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,Frame *,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int (__fastcall *a4)(_DWORD, _DWORD))
{
  _DWORD *v5; // r4
  int v6; // r5
  _DWORD *v7; // r6
  int i; // [sp+0h] [bp-Ch]

  v5 = a1;
  for ( i = (a2 - (int)a1) >> 2; i > 0; i = v6 )
  {
    v6 = i >> 1;
    v7 = &v5[i >> 1];
    if ( a4(*a3, *v7) == 0 )
    {
      v5 = v7 + 1;
      v6 = i - v6 - 1;
    }
  }
  return v5;
}


//======================================================================
// __gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>> std::lower_bound<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,LayoutFrame *,bool (*)(LayoutFrame const*,LayoutFrame const*)>(__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,LayoutFrame * const&,bool (*)(LayoutFrame const*,LayoutFrame const*))
// address: 0x001B8A44   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall std::lower_bound<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,LayoutFrame *,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int (__fastcall *a4)(_DWORD, _DWORD))
{
  _DWORD *v5; // r4
  int v6; // r5
  _DWORD *v7; // r6
  int i; // [sp+0h] [bp-Ch]

  v5 = a1;
  for ( i = (a2 - (int)a1) >> 2; i > 0; i = v6 )
  {
    v6 = i >> 1;
    v7 = &v5[i >> 1];
    if ( a4(*v7, *a3) != 0 )
    {
      v5 = v7 + 1;
      v6 = i - v6 - 1;
    }
  }
  return v5;
}


//======================================================================
// __gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>> std::upper_bound<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,LayoutFrame *,bool (*)(LayoutFrame const*,LayoutFrame const*)>(__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,LayoutFrame * const&,bool (*)(LayoutFrame const*,LayoutFrame const*))
// address: 0x001B8A7C   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall std::upper_bound<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,LayoutFrame *,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int (__fastcall *a4)(_DWORD, _DWORD))
{
  _DWORD *v5; // r4
  int v6; // r5
  _DWORD *v7; // r6
  int i; // [sp+0h] [bp-Ch]

  v5 = a1;
  for ( i = (a2 - (int)a1) >> 2; i > 0; i = v6 )
  {
    v6 = i >> 1;
    v7 = &v5[i >> 1];
    if ( a4(*a3, *v7) == 0 )
    {
      v5 = v7 + 1;
      v6 = i - v6 - 1;
    }
  }
  return v5;
}


//======================================================================
// __gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>> std::__move_merge<Frame **,Frame **,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(Frame **,Frame **,Frame **,Frame **,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,bool (*)(LayoutFrame const*,LayoutFrame const*))
// address: 0x001B8B72   size: 0x44 (68 bytes)
//======================================================================
int __fastcall std::__move_merge<Frame **,Frame **,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        int *a1,
        int *a2,
        int *a3,
        int *a4,
        _DWORD *a5,
        int (__fastcall *a6)(int, int))
{
  void *v10; // r0
  int v12; // r3

  while ( a1 != a2 && a3 != a4 )
  {
    if ( a6(*a3, *a1) != 0 )
      v12 = *a3++;
    else
      v12 = *a1++;
    *a5++ = v12;
  }
  v10 = (void *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(a1, (int)a2, a5);
  return std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(a3, (int)a4, v10);
}


//======================================================================
// __gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>> std::__move_merge<LayoutFrame **,LayoutFrame **,__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(LayoutFrame **,LayoutFrame **,LayoutFrame **,LayoutFrame **,__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,bool (*)(LayoutFrame const*,LayoutFrame const*))
// address: 0x001B946A   size: 0x44 (68 bytes)
//======================================================================
int __fastcall std::__move_merge<LayoutFrame **,LayoutFrame **,__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        int *a1,
        int *a2,
        int *a3,
        int *a4,
        _DWORD *a5,
        int (__fastcall *a6)(int, int))
{
  void *v10; // r0
  int v12; // r3

  while ( a1 != a2 && a3 != a4 )
  {
    if ( a6(*a3, *a1) != 0 )
      v12 = *a3++;
    else
      v12 = *a1++;
    *a5++ = v12;
  }
  v10 = (void *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<LayoutFrame *>(a1, (int)a2, a5);
  return std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<LayoutFrame *>(a3, (int)a4, v10);
}


//======================================================================
// __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>> std::__find<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,std::string>(__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,std::string const&,std::random_access_iterator_tag)
// address: 0x001BDBDC   size: 0xA0 (160 bytes)
//======================================================================
const void **__fastcall std::__find<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>,std::string>(
        const void **a1,
        int a2,
        const void **a3)
{
  const void **i; // r4
  const void **v6; // r5
  int v8; // r3
  int v10; // [sp+4h] [bp-8h]

  v10 = (a2 - (int)a1) >> 4;
  for ( i = a1; ; i += 4 )
  {
    v6 = i;
    if ( v10 <= 0 )
      break;
    if ( std::operator==<char>(i, a3) )
      return i;
    v6 = i + 1;
    if ( std::operator==<char>(i + 1, a3) )
      return v6;
    v6 = i + 2;
    if ( std::operator==<char>(i + 2, a3) )
      return v6;
    v6 = i + 3;
    if ( std::operator==<char>(i + 3, a3) )
      return v6;
    --v10;
  }
  v8 = (a2 - (int)i) >> 2;
  if ( v8 != 2 )
  {
    if ( v8 != 3 )
    {
      if ( v8 != 1 )
        return (const void **)a2;
      goto LABEL_16;
    }
    v6 = i + 1;
    if ( std::operator==<char>(i, a3) )
      return i;
  }
  if ( std::operator==<char>(v6, a3) )
    return v6;
  ++v6;
LABEL_16:
  if ( std::operator==<char>(v6, a3) )
    return v6;
  return (const void **)a2;
}


//======================================================================
// __gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>> std::__find<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,Frame *>(__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,Frame * const&,std::random_access_iterator_tag)
// address: 0x001C6752   size: 0x72 (114 bytes)
//======================================================================
_DWORD *__fastcall std::__find<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,Frame *>(
        _DWORD *result,
        int a2,
        int *a3)
{
  int i; // r5
  _DWORD *v4; // r3
  int v5; // r4
  int v6; // r4

  for ( i = (a2 - (int)result) >> 4; ; --i )
  {
    v4 = result;
    if ( i <= 0 )
      break;
    v5 = *a3;
    if ( *result == *a3 )
      return result;
    if ( result[1] == v5 )
      return ++result;
    if ( result[2] == v5 )
    {
      result += 2;
      return result;
    }
    result += 4;
    if ( *(result - 1) == v5 )
      return v4 + 3;
  }
  v6 = (a2 - (int)result) >> 2;
  if ( v6 != 2 )
  {
    if ( v6 != 3 )
    {
      if ( v6 != 1 )
        return (_DWORD *)a2;
      goto LABEL_18;
    }
    v4 = result + 1;
    if ( *result == *a3 )
      return result;
  }
  if ( *v4 == *a3 )
    return v4;
  ++v4;
LABEL_18:
  if ( *v4 == *a3 )
    return v4;
  return (_DWORD *)a2;
}


//======================================================================
// __gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex,std::allocator<ChunkIndex>>> std::__find<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex,std::allocator<ChunkIndex>>>,ChunkIndex>(__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex,std::allocator<ChunkIndex>>>,__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex,std::allocator<ChunkIndex>>>,ChunkIndex const&,std::random_access_iterator_tag)
// address: 0x002BB656   size: 0xA4 (164 bytes)
//======================================================================
_DWORD *__fastcall std::__find<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex>>,ChunkIndex>(
        _DWORD *result,
        int a2,
        int *a3)
{
  int i; // r6
  _DWORD *v4; // r3
  int v5; // r5
  int v6; // r4
  int v7; // r4

  for ( i = (a2 - (int)result) >> 5; ; --i )
  {
    v4 = result;
    if ( i <= 0 )
      break;
    v5 = *a3;
    v6 = a3[1];
    if ( *result == *a3 && result[1] == v6 )
      return result;
    if ( result[2] == v5 && result[3] == v6 )
    {
      result += 2;
      return result;
    }
    if ( result[4] == v5 && result[5] == v6 )
    {
      result += 4;
      return result;
    }
    if ( result[6] == v5 && result[7] == v6 )
    {
      result += 6;
      return result;
    }
    result += 8;
  }
  v7 = (a2 - (int)result) >> 3;
  if ( v7 == 2 )
    goto LABEL_13;
  if ( v7 != 3 )
  {
    if ( v7 != 1 )
      return (_DWORD *)a2;
    goto LABEL_16;
  }
  if ( *result != *a3 || result[1] != a3[1] )
  {
    v4 = result + 2;
LABEL_13:
    if ( *v4 == *a3 && v4[1] == a3[1] )
      return v4;
    v4 += 2;
LABEL_16:
    if ( *v4 != *a3 || v4[1] != a3[1] )
      return (_DWORD *)a2;
    return v4;
  }
  return result;
}


//======================================================================
// __gnu_cxx::__normal_iterator<ClientActor **,std::vector<ClientActor *,std::allocator<ClientActor *>>> std::__find<__gnu_cxx::__normal_iterator<ClientActor **,std::vector<ClientActor *,std::allocator<ClientActor *>>>,ClientActor *>(__gnu_cxx::__normal_iterator<ClientActor **,std::vector<ClientActor *,std::allocator<ClientActor *>>>,__gnu_cxx::__normal_iterator<ClientActor **,std::vector<ClientActor *,std::allocator<ClientActor *>>>,ClientActor * const&,std::random_access_iterator_tag)
// address: 0x002BDD00   size: 0x72 (114 bytes)
//======================================================================
_DWORD *__fastcall std::__find<__gnu_cxx::__normal_iterator<ClientActor **,std::vector<ClientActor *>>,ClientActor *>(
        _DWORD *result,
        int a2,
        int *a3)
{
  int i; // r5
  _DWORD *v4; // r3
  int v5; // r4
  int v6; // r4

  for ( i = (a2 - (int)result) >> 4; ; --i )
  {
    v4 = result;
    if ( i <= 0 )
      break;
    v5 = *a3;
    if ( *result == *a3 )
      return result;
    if ( result[1] == v5 )
      return ++result;
    if ( result[2] == v5 )
    {
      result += 2;
      return result;
    }
    result += 4;
    if ( *(result - 1) == v5 )
      return v4 + 3;
  }
  v6 = (a2 - (int)result) >> 2;
  if ( v6 != 2 )
  {
    if ( v6 != 3 )
    {
      if ( v6 != 1 )
        return (_DWORD *)a2;
      goto LABEL_18;
    }
    v4 = result + 1;
    if ( *result == *a3 )
      return result;
  }
  if ( *v4 == *a3 )
    return v4;
  ++v4;
LABEL_18:
  if ( *v4 == *a3 )
    return v4;
  return (_DWORD *)a2;
}


//======================================================================
// __gnu_cxx::__normal_iterator<ChunkViewer **,std::vector<ChunkViewer *,std::allocator<ChunkViewer *>>> std::__find<__gnu_cxx::__normal_iterator<ChunkViewer **,std::vector<ChunkViewer *,std::allocator<ChunkViewer *>>>,ChunkViewer *>(__gnu_cxx::__normal_iterator<ChunkViewer **,std::vector<ChunkViewer *,std::allocator<ChunkViewer *>>>,__gnu_cxx::__normal_iterator<ChunkViewer **,std::vector<ChunkViewer *,std::allocator<ChunkViewer *>>>,ChunkViewer * const&,std::random_access_iterator_tag)
// address: 0x002EF27C   size: 0x72 (114 bytes)
//======================================================================
_DWORD *__fastcall std::__find<__gnu_cxx::__normal_iterator<ChunkViewer **,std::vector<ChunkViewer *>>,ChunkViewer *>(
        _DWORD *result,
        int a2,
        int *a3)
{
  int i; // r5
  _DWORD *v4; // r3
  int v5; // r4
  int v6; // r4

  for ( i = (a2 - (int)result) >> 4; ; --i )
  {
    v4 = result;
    if ( i <= 0 )
      break;
    v5 = *a3;
    if ( *result == *a3 )
      return result;
    if ( result[1] == v5 )
      return ++result;
    if ( result[2] == v5 )
    {
      result += 2;
      return result;
    }
    result += 4;
    if ( *(result - 1) == v5 )
      return v4 + 3;
  }
  v6 = (a2 - (int)result) >> 2;
  if ( v6 != 2 )
  {
    if ( v6 != 3 )
    {
      if ( v6 != 1 )
        return (_DWORD *)a2;
      goto LABEL_18;
    }
    v4 = result + 1;
    if ( *result == *a3 )
      return result;
  }
  if ( *v4 == *a3 )
    return v4;
  ++v4;
LABEL_18:
  if ( *v4 == *a3 )
    return v4;
  return (_DWORD *)a2;
}


//======================================================================
// __gnu_cxx::__normal_iterator<AITaskEntry *,std::vector<AITaskEntry,std::allocator<AITaskEntry>>> std::__find<__gnu_cxx::__normal_iterator<AITaskEntry *,std::vector<AITaskEntry,std::allocator<AITaskEntry>>>,AITaskEntry>(__gnu_cxx::__normal_iterator<AITaskEntry *,std::vector<AITaskEntry,std::allocator<AITaskEntry>>>,__gnu_cxx::__normal_iterator<AITaskEntry *,std::vector<AITaskEntry,std::allocator<AITaskEntry>>>,AITaskEntry const&,std::random_access_iterator_tag)
// address: 0x00304084   size: 0xA4 (164 bytes)
//======================================================================
int *__fastcall std::__find<__gnu_cxx::__normal_iterator<AITaskEntry *,std::vector<AITaskEntry>>,AITaskEntry>(
        int *a1,
        int a2,
        int a3)
{
  int *i; // r4
  int *v6; // r5
  int v7; // r0
  int v8; // r3
  int v10; // [sp+4h] [bp-8h]

  v10 = (a2 - (int)a1) >> 5;
  for ( i = a1; ; i += 8 )
  {
    v6 = i;
    if ( v10 <= 0 )
      break;
    if ( AITaskEntry::operator==(i, a3) != 0 )
      return i;
    v6 = i + 2;
    if ( AITaskEntry::operator==(i + 2, a3) != 0 )
      return v6;
    v6 = i + 4;
    if ( AITaskEntry::operator==(i + 4, a3) != 0 )
      return v6;
    v6 = i + 6;
    v7 = AITaskEntry::operator==(i + 6, a3);
    if ( v7 != 0 )
      return v6;
    --v10;
  }
  v8 = (a2 - (int)i) >> 3;
  if ( v8 != 2 )
  {
    if ( v8 != 3 )
    {
      if ( v8 != 1 )
        return (int *)a2;
      goto LABEL_16;
    }
    v6 = i + 2;
    if ( AITaskEntry::operator==(i, a3) != 0 )
      return i;
  }
  if ( AITaskEntry::operator==(v6, a3) != 0 )
    return v6;
  v6 += 2;
LABEL_16:
  if ( AITaskEntry::operator==(v6, a3) != 0 )
    return v6;
  return (int *)a2;
}

