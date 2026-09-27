// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::__move_median_to_first

//======================================================================
// void std::__move_median_to_first<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *,std::allocator<Ogre::FilePkgBase *>>>,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *,std::allocator<Ogre::FilePkgBase *>>>,__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *,std::allocator<Ogre::FilePkgBase *>>>,__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *,std::allocator<Ogre::FilePkgBase *>>>,__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *,std::allocator<Ogre::FilePkgBase *>>>,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *))
// address: 0x0016EA62   size: 0x68 (104 bytes)
//======================================================================
int __fastcall std::__move_median_to_first<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *>>,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(
        int *a1,
        int *a2,
        int *a3,
        int *a4,
        int (__fastcall *a5)(int, int))
{
  int v9; // r0
  int v10; // r1
  int result; // r0
  int v12; // r3

  v9 = a5(*a2, *a3);
  v10 = *a4;
  if ( v9 == 0 )
  {
    result = a5(*a2, v10);
    if ( result == 0 )
    {
      result = a5(*a3, *a4);
      v12 = *a1;
      if ( result == 0 )
        goto LABEL_11;
LABEL_10:
      *a1 = *a4;
      *a4 = v12;
      return result;
    }
    v12 = *a1;
LABEL_8:
    *a1 = *a2;
    *a2 = v12;
    return result;
  }
  result = a5(*a3, v10);
  if ( result == 0 )
  {
    result = a5(*a2, *a4);
    v12 = *a1;
    if ( result != 0 )
      goto LABEL_10;
    goto LABEL_8;
  }
  v12 = *a1;
LABEL_11:
  *a1 = *a3;
  *a3 = v12;
  return result;
}


//======================================================================
// void std::__move_median_to_first<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>>,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>>,__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>>,__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>>,__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>>,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*))
// address: 0x0018CC5C   size: 0x68 (104 bytes)
//======================================================================
int __fastcall std::__move_median_to_first<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *>>,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(
        int *a1,
        int *a2,
        int *a3,
        int *a4,
        int (__fastcall *a5)(int, int))
{
  int v9; // r0
  int v10; // r1
  int result; // r0
  int v12; // r3

  v9 = a5(*a2, *a3);
  v10 = *a4;
  if ( v9 == 0 )
  {
    result = a5(*a2, v10);
    if ( result == 0 )
    {
      result = a5(*a3, *a4);
      v12 = *a1;
      if ( result == 0 )
        goto LABEL_11;
LABEL_10:
      *a1 = *a4;
      *a4 = v12;
      return result;
    }
    v12 = *a1;
LABEL_8:
    *a1 = *a2;
    *a2 = v12;
    return result;
  }
  result = a5(*a3, v10);
  if ( result == 0 )
  {
    result = a5(*a2, *a4);
    v12 = *a1;
    if ( result != 0 )
      goto LABEL_10;
    goto LABEL_8;
  }
  v12 = *a1;
LABEL_11:
  *a1 = *a3;
  *a3 = v12;
  return result;
}


//======================================================================
// void std::__move_median_to_first<__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *,std::allocator<Ogre::MaterialParam *>>>,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *)>(__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *,std::allocator<Ogre::MaterialParam *>>>,__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *,std::allocator<Ogre::MaterialParam *>>>,__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *,std::allocator<Ogre::MaterialParam *>>>,__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *,std::allocator<Ogre::MaterialParam *>>>,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *))
// address: 0x00196218   size: 0x68 (104 bytes)
//======================================================================
int __fastcall std::__move_median_to_first<__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *>>,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *)>(
        int *a1,
        int *a2,
        int *a3,
        int *a4,
        int (__fastcall *a5)(int, int))
{
  int v9; // r0
  int v10; // r1
  int result; // r0
  int v12; // r3

  v9 = a5(*a2, *a3);
  v10 = *a4;
  if ( v9 == 0 )
  {
    result = a5(*a2, v10);
    if ( result == 0 )
    {
      result = a5(*a3, *a4);
      v12 = *a1;
      if ( result == 0 )
        goto LABEL_11;
LABEL_10:
      *a1 = *a4;
      *a4 = v12;
      return result;
    }
    v12 = *a1;
LABEL_8:
    *a1 = *a2;
    *a2 = v12;
    return result;
  }
  result = a5(*a3, v10);
  if ( result == 0 )
  {
    result = a5(*a2, *a4);
    v12 = *a1;
    if ( result != 0 )
      goto LABEL_10;
    goto LABEL_8;
  }
  v12 = *a1;
LABEL_11:
  *a1 = *a3;
  *a3 = v12;
  return result;
}


//======================================================================
// void std::__move_median_to_first<__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *,std::allocator<Ogre::TileModel *>>>,bool (*)(Ogre::TileModel *,Ogre::TileModel *)>(__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *,std::allocator<Ogre::TileModel *>>>,__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *,std::allocator<Ogre::TileModel *>>>,__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *,std::allocator<Ogre::TileModel *>>>,__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *,std::allocator<Ogre::TileModel *>>>,bool (*)(Ogre::TileModel *,Ogre::TileModel *))
// address: 0x0019EDE2   size: 0x68 (104 bytes)
//======================================================================
int __fastcall std::__move_median_to_first<__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *>>,bool (*)(Ogre::TileModel *,Ogre::TileModel *)>(
        int *a1,
        int *a2,
        int *a3,
        int *a4,
        int (__fastcall *a5)(int, int))
{
  int v9; // r0
  int v10; // r1
  int result; // r0
  int v12; // r3

  v9 = a5(*a2, *a3);
  v10 = *a4;
  if ( v9 == 0 )
  {
    result = a5(*a2, v10);
    if ( result == 0 )
    {
      result = a5(*a3, *a4);
      v12 = *a1;
      if ( result == 0 )
        goto LABEL_11;
LABEL_10:
      *a1 = *a4;
      *a4 = v12;
      return result;
    }
    v12 = *a1;
LABEL_8:
    *a1 = *a2;
    *a2 = v12;
    return result;
  }
  result = a5(*a3, v10);
  if ( result == 0 )
  {
    result = a5(*a2, *a4);
    v12 = *a1;
    if ( result != 0 )
      goto LABEL_10;
    goto LABEL_8;
  }
  v12 = *a1;
LABEL_11:
  *a1 = *a3;
  *a3 = v12;
  return result;
}


//======================================================================
// void std::__move_median_to_first<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex))
// address: 0x002B0746   size: 0xAE (174 bytes)
//======================================================================
int __fastcall std::__move_median_to_first<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(
        _DWORD *a1,
        _DWORD **a2,
        _DWORD **a3,
        _DWORD **a4,
        int (__fastcall *a5)(_DWORD, _DWORD, _DWORD, _DWORD))
{
  int v6; // r0
  _DWORD *v7; // r3
  _DWORD *v8; // r1
  int *v13[4]; // [sp+10h] [bp-24h] BYREF
  int *v14[5]; // [sp+20h] [bp-14h] BYREF

  v6 = a5(**a2, (*a2)[1], **a3, (*a3)[1]);
  v7 = *a4;
  if ( v6 == 0 )
  {
    if ( a5(**a2, (*a2)[1], *v7, v7[1]) != 0 )
      goto LABEL_6;
    if ( a5(**a3, (*a3)[1], **a4, (*a4)[1]) != 0 )
    {
LABEL_8:
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v13, a1);
      v8 = a4;
      goto LABEL_10;
    }
LABEL_9:
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v13, a1);
    v8 = a3;
    goto LABEL_10;
  }
  if ( a5(**a3, (*a3)[1], *v7, v7[1]) != 0 )
    goto LABEL_9;
  if ( a5(**a2, (*a2)[1], **a4, (*a4)[1]) != 0 )
    goto LABEL_8;
LABEL_6:
  std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v13, a1);
  v8 = a2;
LABEL_10:
  std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v14, v8);
  return std::iter_swap<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>>(
           v13,
           v14);
}

