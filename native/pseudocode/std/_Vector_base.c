// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std::_Vector_base

//======================================================================
// std::_Vector_base<unsigned short,std::allocator<unsigned short>>::_M_create_storage(unsigned int)
// address: 0x001640E0   size: 0x24 (36 bytes)
//======================================================================
int __fastcall std::_Vector_base<unsigned short>::_M_create_storage(_DWORD *a1, int a2)
{
  int v3; // r5
  int result; // r0

  v3 = 2 * a2;
  if ( a2 != 0 )
  {
    if ( a2 < 0 )
      sub_3BCEB4(a1);
    result = operator new(2 * a2);
  }
  else
  {
    result = 0;
  }
  *a1 = result;
  a1[1] = result;
  a1[2] = result + v3;
  return result;
}


//======================================================================
// std::_Vector_base<char,std::allocator<char>>::~_Vector_base()
// address: 0x00166BE4   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt12_Vector_baseIcSaIcEED1Ev'
void **__fastcall std::_Vector_base<char>::~_Vector_base(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 != nullptr )
    operator delete(v2);
  return a1;
}


//======================================================================
// std::_Vector_base<float,std::allocator<float>>::~_Vector_base()
// address: 0x0016A84E   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt12_Vector_baseIfSaIfEED1Ev'
void **__fastcall std::_Vector_base<float>::~_Vector_base(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 != nullptr )
    operator delete(v2);
  return a1;
}


//======================================================================
// std::_Vector_base<unsigned int,std::allocator<unsigned int>>::~_Vector_base()
// address: 0x00189EA0   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt12_Vector_baseIjSaIjEED1Ev'
void **__fastcall std::_Vector_base<unsigned int>::~_Vector_base(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 != nullptr )
    operator delete(v2);
  return a1;
}


//======================================================================
// std::_Vector_base<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>::~_Vector_base()
// address: 0x0018C588   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt12_Vector_baseIPN4Ogre6Entity7BindObjESaIS3_EED1Ev'
void **__fastcall std::_Vector_base<Ogre::Entity::BindObj *>::~_Vector_base(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 != nullptr )
    operator delete(v2);
  return a1;
}


//======================================================================
// std::_Vector_base<Frame *,std::allocator<Frame *>>::~_Vector_base()
// address: 0x001A1B24   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt12_Vector_baseIP5FrameSaIS1_EED1Ev'
void **__fastcall std::_Vector_base<Frame *>::~_Vector_base(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 != nullptr )
    operator delete(v2);
  return a1;
}


//======================================================================
// std::_Vector_base<LayoutFrame *,std::allocator<LayoutFrame *>>::~_Vector_base()
// address: 0x001A1B36   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt12_Vector_baseIP11LayoutFrameSaIS1_EED1Ev'
void **__fastcall std::_Vector_base<LayoutFrame *>::~_Vector_base(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 != nullptr )
    operator delete(v2);
  return a1;
}


//======================================================================
// std::_Vector_base<Frame *,std::allocator<Frame *>>::_M_create_storage(unsigned int)
// address: 0x001B80D6   size: 0x1A (26 bytes)
//======================================================================
int __fastcall std::_Vector_base<Frame *>::_M_create_storage(int *a1, unsigned int a2)
{
  int result; // r0

  result = a2;
  if ( a2 != 0 )
    result = sub_1B7D80(a2);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 4 * a2;
  return result;
}


//======================================================================
// std::_Vector_base<int,std::allocator<int>>::~_Vector_base()
// address: 0x002652EA   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt12_Vector_baseIiSaIiEED1Ev'
void **__fastcall std::_Vector_base<int>::~_Vector_base(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 != nullptr )
    operator delete(v2);
  return a1;
}


//======================================================================
// std::_Vector_base<BuddyAchievement,std::allocator<BuddyAchievement>>::~_Vector_base()
// address: 0x00296620   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt12_Vector_baseI16BuddyAchievementSaIS0_EED1Ev'
void **__fastcall std::_Vector_base<BuddyAchievement>::~_Vector_base(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 != nullptr )
    operator delete(v2);
  return a1;
}


//======================================================================
// std::_Vector_base<ClientActor *,std::allocator<ClientActor *>>::~_Vector_base()
// address: 0x0029E8FA   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt12_Vector_baseIP11ClientActorSaIS1_EED1Ev'
void **__fastcall std::_Vector_base<ClientActor *>::~_Vector_base(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 != nullptr )
    operator delete(v2);
  return a1;
}


//======================================================================
// std::_Vector_base<char *,std::allocator<char *>>::~_Vector_base()
// address: 0x002A9D84   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt12_Vector_baseIPcSaIS0_EED1Ev'
void **__fastcall std::_Vector_base<char *>::~_Vector_base(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 != nullptr )
    operator delete(v2);
  return a1;
}


//======================================================================
// std::_Vector_base<tinyobj::vertex_index,std::allocator<tinyobj::vertex_index>>::~_Vector_base()
// address: 0x002B61F4   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt12_Vector_baseIN7tinyobj12vertex_indexESaIS1_EED1Ev'
void **__fastcall std::_Vector_base<tinyobj::vertex_index>::~_Vector_base(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 != nullptr )
    operator delete(v2);
  return a1;
}


//======================================================================
// std::_Vector_base<float,std::allocator<float>>::_Vector_base(std::_Vector_base<float,std::allocator<float>>&&)
// address: 0x002B7B14   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZNSt12_Vector_baseIfSaIfEEC1EOS1_'
_DWORD *__fastcall std::_Vector_base<float>::_Vector_base(_DWORD *result, _DWORD *a2)
{
  int v2; // r3
  int v3; // r3

  result[2] = 0;
  *result = 0;
  result[1] = 0;
  *result = *a2;
  *a2 = 0;
  v2 = result[1];
  result[1] = a2[1];
  a2[1] = v2;
  v3 = result[2];
  result[2] = a2[2];
  a2[2] = v3;
  return result;
}


//======================================================================
// std::_Vector_base<tagOWorld,std::allocator<tagOWorld>>::~_Vector_base()
// address: 0x002BA140   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt12_Vector_baseI9tagOWorldSaIS0_EED1Ev'
void **__fastcall std::_Vector_base<tagOWorld>::~_Vector_base(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 != nullptr )
    operator delete(v2);
  return a1;
}


//======================================================================
// std::_Vector_base<BaseItemMesh *,std::allocator<BaseItemMesh *>>::~_Vector_base()
// address: 0x002BFFA2   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt12_Vector_baseIP12BaseItemMeshSaIS1_EED1Ev'
void **__fastcall std::_Vector_base<BaseItemMesh *>::~_Vector_base(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 != nullptr )
    operator delete(v2);
  return a1;
}


//======================================================================
// std::_Vector_base<BlockMaterial *,std::allocator<BlockMaterial *>>::~_Vector_base()
// address: 0x002C2580   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt12_Vector_baseIP13BlockMaterialSaIS1_EED1Ev'
void **__fastcall std::_Vector_base<BlockMaterial *>::~_Vector_base(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 != nullptr )
    operator delete(v2);
  return a1;
}


//======================================================================
// std::_Vector_base<double,std::allocator<double>>::~_Vector_base()
// address: 0x002C5BC0   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt12_Vector_baseIdSaIdEED1Ev'
void **__fastcall std::_Vector_base<double>::~_Vector_base(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 != nullptr )
    operator delete(v2);
  return a1;
}


//======================================================================
// std::_Vector_base<WCoord,std::allocator<WCoord>>::~_Vector_base()
// address: 0x002CABD6   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt12_Vector_baseI6WCoordSaIS0_EED1Ev'
void **__fastcall std::_Vector_base<WCoord>::~_Vector_base(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 != nullptr )
    operator delete(v2);
  return a1;
}


//======================================================================
// std::_Vector_base<SubMeshInfo,std::allocator<SubMeshInfo>>::~_Vector_base()
// address: 0x002CF310   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt12_Vector_baseI11SubMeshInfoSaIS0_EED1Ev'
void **__fastcall std::_Vector_base<SubMeshInfo>::~_Vector_base(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 != nullptr )
    operator delete(v2);
  return a1;
}

