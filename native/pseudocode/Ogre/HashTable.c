// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::HashTable

//======================================================================
// Ogre::HashTable<Ogre::FixedString,Ogre::ZipFileEntry,Ogre::FixedStringHashCoder>::insert(Ogre::FixedString const&)
// address: 0x0014E6A0   size: 0x90 (144 bytes)
//======================================================================
_DWORD *__fastcall Ogre::HashTable<Ogre::FixedString,Ogre::ZipFileEntry,Ogre::FixedStringHashCoder>::insert(
        _DWORD *a1,
        Ogre::FixedString **a2)
{
  Ogre::FixedString *v2; // r5
  int v4; // r1
  _DWORD **v5; // r7
  _DWORD *v6; // r4
  void *v7; // r1
  _DWORD *v8; // r5
  void *v9; // r1
  unsigned int v11; // [sp+4h] [bp-10h]
  Ogre::FixedString *v12[2]; // [sp+Ch] [bp-8h] BYREF

  v2 = *a2;
  v11 = -1640531535 * (_DWORD)*a2 - 1651615;
  v4 = v11 % a1[2];
  v5 = (_DWORD **)(a1[1] + 4 * v4);
  v6 = *v5;
  if ( *v5 != nullptr )
  {
    while ( (Ogre::FixedString *)*v6 != v2 )
    {
      if ( v6[5] == 0 )
      {
        v12[0] = v2;
        Ogre::FixedString::addRef(v2, (void *)v4);
        v8 = (_DWORD *)operator new(0x18u);
        *v8 = 0;
        Ogre::FixedString::operator=(v8, v12);
        v8[5] = 0;
        v6[5] = v8;
        Ogre::FixedString::release(v12[0], v9);
        v6 = (_DWORD *)v6[5];
        break;
      }
      v6 = (_DWORD *)v6[5];
    }
  }
  else
  {
    v12[0] = v2;
    Ogre::FixedString::addRef(v2, (void *)v4);
    v6 = (_DWORD *)operator new(0x18u);
    *v6 = 0;
    Ogre::FixedString::operator=(v6, v12);
    v6[5] = 0;
    *v5 = v6;
    Ogre::FixedString::release(v12[0], v7);
  }
  ++a1[3];
  v6[1] = v11;
  return v6;
}


//======================================================================
// Ogre::HashTable<Ogre::FixedString,Ogre::UIRenderer::UIResObject,Ogre::FixedStringHashCoder>::iterate(Ogre::HashTable<Ogre::FixedString,Ogre::UIRenderer::UIResObject,Ogre::FixedStringHashCoder>::Element *)
// address: 0x00162470   size: 0x30 (48 bytes)
//======================================================================
int __fastcall Ogre::HashTable<Ogre::FixedString,Ogre::UIRenderer::UIResObject,Ogre::FixedStringHashCoder>::iterate(
        int a1,
        int a2)
{
  int v3; // r5
  int result; // r0
  int i; // r2

  v3 = a2;
  if ( a2 != 0 )
  {
    a2 = *(_DWORD *)(a2 + 4) % *(_DWORD *)(a1 + 8);
    result = *(_DWORD *)(v3 + 32);
  }
  else
  {
    result = **(_DWORD **)(a1 + 4);
  }
  for ( i = 4 * a2; result == 0; result = *(_DWORD *)(*(_DWORD *)(a1 + 4) + i) )
  {
    ++a2;
    i += 4;
    if ( a2 == *(_DWORD *)(a1 + 8) )
      break;
  }
  return result;
}


//======================================================================
// Ogre::HashTable<Ogre::FixedString,Ogre::UIRenderer::UIResObject,Ogre::FixedStringHashCoder>::find(Ogre::FixedString const&)const
// address: 0x00162688   size: 0x2A (42 bytes)
//======================================================================
_DWORD *__fastcall Ogre::HashTable<Ogre::FixedString,Ogre::UIRenderer::UIResObject,Ogre::FixedStringHashCoder>::find(
        int a1,
        _DWORD *a2)
{
  _DWORD *result; // r0

  for ( result = *(_DWORD **)(4 * ((unsigned int)(-1640531535 * *a2 - 1651615) % *(_DWORD *)(a1 + 8))
                            + *(_DWORD *)(a1 + 4)); result != nullptr && *result != *a2; result = (_DWORD *)result[8] )
    ;
  return result;
}


//======================================================================
// Ogre::HashTable<Ogre::FixedString,Ogre::UIRenderer::UIResObject,Ogre::FixedStringHashCoder>::insert(Ogre::FixedString const&)
// address: 0x00162868   size: 0x98 (152 bytes)
//======================================================================
_DWORD *__fastcall Ogre::HashTable<Ogre::FixedString,Ogre::UIRenderer::UIResObject,Ogre::FixedStringHashCoder>::insert(
        _DWORD *a1,
        Ogre::FixedString **a2)
{
  Ogre::FixedString *v2; // r6
  int v4; // r1
  _DWORD **v5; // r7
  _DWORD *v6; // r4
  _DWORD *v7; // r0
  void *v8; // r1
  _DWORD *v9; // r6
  void *v10; // r1
  unsigned int v12; // [sp+4h] [bp-10h]
  Ogre::FixedString *v13[2]; // [sp+Ch] [bp-8h] BYREF

  v2 = *a2;
  v12 = -1640531535 * (_DWORD)*a2 - 1651615;
  v4 = v12 % a1[2];
  v5 = (_DWORD **)(a1[1] + 4 * v4);
  v6 = *v5;
  if ( *v5 != nullptr )
  {
    while ( (Ogre::FixedString *)*v6 != v2 )
    {
      if ( v6[8] == 0 )
      {
        v13[0] = v2;
        Ogre::FixedString::addRef(v2, (void *)v4);
        v9 = (_DWORD *)operator new(0x24u);
        *v9 = 0;
        Ogre::FixedString::operator=(v9, v13);
        v9[8] = 0;
        v6[8] = v9;
        Ogre::FixedString::~FixedString(v13, v10);
        v6 = (_DWORD *)v6[8];
        break;
      }
      v6 = (_DWORD *)v6[8];
    }
  }
  else
  {
    v13[0] = v2;
    Ogre::FixedString::addRef(v2, (void *)v4);
    v7 = (_DWORD *)operator new(0x24u);
    *v7 = 0;
    v6 = v7;
    Ogre::FixedString::operator=(v7, v13);
    v6[8] = 0;
    *v5 = v6;
    Ogre::FixedString::~FixedString(v13, v8);
  }
  ++a1[3];
  v6[1] = v12;
  return v6;
}


//======================================================================
// Ogre::HashTable<Ogre::FixedString,Ogre::UIRenderer::UIResObject,Ogre::FixedStringHashCoder>::insert(Ogre::FixedString const&,Ogre::UIRenderer::UIResObject const&)
// address: 0x00162908   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall Ogre::HashTable<Ogre::FixedString,Ogre::UIRenderer::UIResObject,Ogre::FixedStringHashCoder>::insert(
        _DWORD *a1,
        Ogre::FixedString **a2,
        _DWORD *a3)
{
  _DWORD *result; // r0
  _DWORD *v5; // r2
  int v6; // r5
  int v7; // r6
  int v8; // r1
  int v9; // r4
  int v10; // r5

  result = Ogre::HashTable<Ogre::FixedString,Ogre::UIRenderer::UIResObject,Ogre::FixedStringHashCoder>::insert(a1, a2);
  v6 = a3[1];
  v7 = a3[2];
  v5 = a3 + 3;
  result[2] = *a3;
  result[3] = v6;
  result[4] = v7;
  v8 = a3[3];
  v9 = a3[4];
  v10 = v5[2];
  result[5] = v8;
  result[6] = v9;
  result[7] = v10;
  return result;
}


//======================================================================
// Ogre::HashTable<Ogre::FixedString,Ogre::ResLoadRecord,Ogre::FixedStringHashCoder>::find(Ogre::FixedString const&)const
// address: 0x0017E218   size: 0x2A (42 bytes)
//======================================================================
_DWORD *__fastcall Ogre::HashTable<Ogre::FixedString,Ogre::ResLoadRecord,Ogre::FixedStringHashCoder>::find(
        int a1,
        _DWORD *a2)
{
  _DWORD *result; // r0

  for ( result = *(_DWORD **)(4 * ((unsigned int)(-1640531535 * *a2 - 1651615) % *(_DWORD *)(a1 + 8))
                            + *(_DWORD *)(a1 + 4)); result != nullptr && *result != *a2; result = (_DWORD *)result[7] )
    ;
  return result;
}


//======================================================================
// Ogre::HashTable<Ogre::FixedString,Ogre::ResLoadRecord,Ogre::FixedStringHashCoder>::insert(Ogre::FixedString const&)
// address: 0x0017E278   size: 0x9C (156 bytes)
//======================================================================
int *__fastcall Ogre::HashTable<Ogre::FixedString,Ogre::ResLoadRecord,Ogre::FixedStringHashCoder>::insert(
        _DWORD *a1,
        Ogre::FixedString **a2)
{
  Ogre::FixedString *v2; // r6
  int v4; // r1
  int **v5; // r7
  int *v6; // r4
  void *v7; // r1
  int *v8; // r6
  void *v9; // r1
  unsigned int v11; // [sp+4h] [bp-10h]
  Ogre::FixedString *v12[2]; // [sp+Ch] [bp-8h] BYREF

  v2 = *a2;
  v11 = -1640531535 * (_DWORD)*a2 - 1651615;
  v4 = v11 % a1[2];
  v5 = (int **)(a1[1] + 4 * v4);
  v6 = *v5;
  if ( *v5 != nullptr )
  {
    while ( (Ogre::FixedString *)*v6 != v2 )
    {
      if ( v6[7] == 0 )
      {
        v12[0] = v2;
        Ogre::FixedString::addRef((int)v2, (void *)v4);
        v8 = (int *)operator new(0x20u);
        *v8 = 0;
        v8[2] = 0;
        Ogre::FixedString::operator=(v8, (int *)v12);
        v8[7] = 0;
        v6[7] = (int)v8;
        Ogre::FixedString::~FixedString(v12, v9);
        v6 = (int *)v6[7];
        break;
      }
      v6 = (int *)v6[7];
    }
  }
  else
  {
    v12[0] = v2;
    Ogre::FixedString::addRef((int)v2, (void *)v4);
    v6 = (int *)operator new(0x20u);
    *v6 = 0;
    v6[2] = 0;
    Ogre::FixedString::operator=(v6, (int *)v12);
    v6[7] = 0;
    *v5 = v6;
    Ogre::FixedString::~FixedString(v12, v7);
  }
  ++a1[3];
  v6[1] = v11;
  return v6;
}


//======================================================================
// Ogre::HashTable<Ogre::FixedString,Ogre::ResLoadRecord,Ogre::FixedStringHashCoder>::Element ** * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::HashTable<Ogre::FixedString,Ogre::ResLoadRecord,Ogre::FixedStringHashCoder>::Element **>(Ogre::HashTable<Ogre::FixedString,Ogre::ResLoadRecord,Ogre::FixedStringHashCoder>::Element ** const*,Ogre::HashTable<Ogre::FixedString,Ogre::ResLoadRecord,Ogre::FixedStringHashCoder>::Element ** const*,Ogre::HashTable<Ogre::FixedString,Ogre::ResLoadRecord,Ogre::FixedStringHashCoder>::Element ** *)
// address: 0x0017E3B2   size: 0x1E (30 bytes)
//======================================================================
int __fastcall std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::HashTable<Ogre::FixedString,Ogre::ResLoadRecord,Ogre::FixedStringHashCoder>::Element **>(
        void *a1,
        int a2,
        void *a3)
{
  int v3; // r1
  size_t v5; // r4

  v3 = (a2 - (int)a1) >> 2;
  v5 = 4 * v3;
  if ( v3 != 0 )
    j_memmove(a3, a1, v5);
  return (int)a3 + v5;
}


//======================================================================
// Ogre::HashTable<WCoord,bool,WCoordHashCoder>::~HashTable()
// address: 0x002BCA70   size: 0x38 (56 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9HashTableI6WCoordb15WCoordHashCoderED1Ev'
_DWORD *__fastcall Ogre::HashTable<WCoord,bool,WCoordHashCoder>::~HashTable(_DWORD *a1)
{
  unsigned int i; // r5
  _DWORD *v3; // r0
  int v4; // r6
  _DWORD *j; // r0
  _DWORD *v6; // r7

  for ( i = 0; ; ++i )
  {
    v3 = (_DWORD *)a1[1];
    if ( i >= a1[2] )
      break;
    v4 = 4 * i;
    for ( j = (_DWORD *)v3[i]; j != nullptr; j = v6 )
    {
      v6 = (_DWORD *)j[5];
      operator delete(j);
    }
    *(_DWORD *)(a1[1] + v4) = 0;
  }
  a1[3] = 0;
  if ( v3 != nullptr )
    operator delete[](v3);
  return a1;
}


//======================================================================
// Ogre::HashTable<WCoord,bool,WCoordHashCoder>::iterate(Ogre::HashTable<WCoord,bool,WCoordHashCoder>::Element *)
// address: 0x002BCAA8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall Ogre::HashTable<WCoord,bool,WCoordHashCoder>::iterate(int a1, int a2)
{
  int v3; // r5
  int result; // r0
  int i; // r2

  v3 = a2;
  if ( a2 != 0 )
  {
    a2 = *(_DWORD *)(a2 + 12) % *(_DWORD *)(a1 + 8);
    result = *(_DWORD *)(v3 + 20);
  }
  else
  {
    result = **(_DWORD **)(a1 + 4);
  }
  for ( i = 4 * a2; result == 0; result = *(_DWORD *)(*(_DWORD *)(a1 + 4) + i) )
  {
    ++a2;
    i += 4;
    if ( a2 == *(_DWORD *)(a1 + 8) )
      break;
  }
  return result;
}


//======================================================================
// Ogre::HashTable<WCoord,bool,WCoordHashCoder>::insert(WCoord const&)
// address: 0x002BCAD8   size: 0x94 (148 bytes)
//======================================================================
_DWORD *__fastcall Ogre::HashTable<WCoord,bool,WCoordHashCoder>::insert(_DWORD *a1, int *a2)
{
  int v3; // r5
  _DWORD **v4; // r7
  _DWORD *v5; // r4
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  int v9; // [sp+4h] [bp-10h]
  int v10; // [sp+8h] [bp-Ch]
  unsigned int v11; // [sp+Ch] [bp-8h]

  v10 = a2[1];
  v3 = a2[2];
  v9 = *a2;
  v11 = v10 + 29791 + 31 * (31 * *a2 + v3);
  v4 = (_DWORD **)(a1[1] + 4 * (v11 % a1[2]));
  v5 = *v4;
  if ( *v4 != nullptr )
  {
    while ( *v5 != v9 || v5[1] != v10 || v5[2] != v3 )
    {
      if ( v5[5] == 0 )
      {
        v7 = (_DWORD *)operator new(0x18u);
        v7[2] = v3;
        *v7 = v9;
        v7[1] = v10;
        v7[5] = 0;
        v5[5] = v7;
        v5 = v7;
        break;
      }
      v5 = (_DWORD *)v5[5];
    }
  }
  else
  {
    v6 = (_DWORD *)operator new(0x18u);
    *v6 = v9;
    v6[1] = v10;
    v6[2] = v3;
    v6[5] = 0;
    v5 = v6;
    *v4 = v6;
  }
  ++a1[3];
  v5[3] = v11;
  return v5;
}


//======================================================================
// Ogre::HashTable<ChunkIndex,ChunkViewerList,ChunkIndexHashCoder>::~HashTable()
// address: 0x002C8938   size: 0x46 (70 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9HashTableI10ChunkIndex15ChunkViewerList19ChunkIndexHashCoderED1Ev'
_DWORD *__fastcall Ogre::HashTable<ChunkIndex,ChunkViewerList,ChunkIndexHashCoder>::~HashTable(_DWORD *a1)
{
  unsigned int i; // r6
  _DWORD *v3; // r0
  int v4; // r7
  _DWORD *j; // r4
  void *v6; // r0
  _DWORD *v8; // [sp+4h] [bp-8h]

  for ( i = 0; ; ++i )
  {
    v3 = (_DWORD *)a1[1];
    if ( i >= a1[2] )
      break;
    v4 = 4 * i;
    for ( j = (_DWORD *)v3[i]; j != nullptr; j = v8 )
    {
      v6 = (void *)j[4];
      v8 = (_DWORD *)j[7];
      if ( v6 != nullptr )
        operator delete(v6);
      operator delete(j);
    }
    *(_DWORD *)(a1[1] + v4) = 0;
  }
  a1[3] = 0;
  if ( v3 != nullptr )
    operator delete[](v3);
  return a1;
}


//======================================================================
// Ogre::HashTable<ChunkIndex,ChunkViewerList,ChunkIndexHashCoder>::find(ChunkIndex const&)const
// address: 0x002C8980   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall Ogre::HashTable<ChunkIndex,ChunkViewerList,ChunkIndexHashCoder>::find(int a1, _DWORD *a2)
{
  int v2; // r4
  _DWORD *result; // r0

  v2 = a2[1];
  for ( result = *(_DWORD **)(4 * ((unsigned int)(v2 + 961 + 31 * *a2) % *(_DWORD *)(a1 + 8)) + *(_DWORD *)(a1 + 4));
        result != nullptr && (*result != *a2 || result[1] != v2);
        result = (_DWORD *)result[7] )
  {
    ;
  }
  return result;
}


//======================================================================
// Ogre::HashTable<int,PathFinderNode,Ogre::UIntHashCoder>::clear(void)
// address: 0x002D6A12   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall Ogre::HashTable<int,PathFinderNode,Ogre::UIntHashCoder>::clear(_DWORD *result)
{
  _DWORD *v1; // r4
  unsigned int i; // r5
  int v3; // r6
  _DWORD *v4; // r7

  v1 = result;
  for ( i = 0; i < v1[2]; ++i )
  {
    v3 = 4 * i;
    for ( result = *(_DWORD **)(v1[1] + 4 * i); result != nullptr; result = v4 )
    {
      v4 = (_DWORD *)result[12];
      operator delete(result);
    }
    *(_DWORD *)(v1[1] + v3) = 0;
  }
  v1[3] = 0;
  return result;
}


//======================================================================
// Ogre::HashTable<int,PathFinderNode,Ogre::UIntHashCoder>::~HashTable()
// address: 0x002D6A40   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9HashTableIi14PathFinderNodeNS_13UIntHashCoderEED1Ev'
_DWORD *__fastcall Ogre::HashTable<int,PathFinderNode,Ogre::UIntHashCoder>::~HashTable(_DWORD *a1)
{
  void *v2; // r0

  Ogre::HashTable<int,PathFinderNode,Ogre::UIntHashCoder>::clear(a1);
  v2 = (void *)a1[1];
  if ( v2 != nullptr )
    operator delete[](v2);
  return a1;
}


//======================================================================
// Ogre::HashTable<ScheduleBlock const*,int,ScheduleBlockHashCoder>::~HashTable()
// address: 0x002ED8F0   size: 0x38 (56 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9HashTableIPK13ScheduleBlocki22ScheduleBlockHashCoderED1Ev'
_DWORD *__fastcall Ogre::HashTable<ScheduleBlock const*,int,ScheduleBlockHashCoder>::~HashTable(_DWORD *a1)
{
  unsigned int i; // r5
  _DWORD *v3; // r0
  int v4; // r6
  _DWORD *j; // r0
  _DWORD *v6; // r7

  for ( i = 0; ; ++i )
  {
    v3 = (_DWORD *)a1[1];
    if ( i >= a1[2] )
      break;
    v4 = 4 * i;
    for ( j = (_DWORD *)v3[i]; j != nullptr; j = v6 )
    {
      v6 = (_DWORD *)j[3];
      operator delete(j);
    }
    *(_DWORD *)(a1[1] + v4) = 0;
  }
  a1[3] = 0;
  if ( v3 != nullptr )
    operator delete[](v3);
  return a1;
}


//======================================================================
// Ogre::HashTable<ScheduleBlock const*,int,ScheduleBlockHashCoder>::find(ScheduleBlock const* const&)const
// address: 0x002ED928   size: 0x4C (76 bytes)
//======================================================================
int *__fastcall Ogre::HashTable<ScheduleBlock const*,int,ScheduleBlockHashCoder>::find(int a1, int *a2)
{
  int *i; // r4

  for ( i = *(int **)(4
                    * ((unsigned int)(-1640531535 * (*(_DWORD *)(*a2 + 8) - 1640531535 * *(_DWORD *)*a2)
                                    + *(_DWORD *)(*a2 + 4))
                     % *(_DWORD *)(a1 + 8))
                    + *(_DWORD *)(a1 + 4)); ; i = (int *)i[3] )
  {
    if ( i == nullptr )
      return nullptr;
    if ( ScheduleBlock::isEqual(*i, *a2) != 0 )
      break;
  }
  return i;
}


//======================================================================
// Ogre::HashTable<WCoord,WorldContainer *,WCoordHashCoder>::find(WCoord const&)const
// address: 0x002F9CB0   size: 0x3E (62 bytes)
//======================================================================
_DWORD *__fastcall Ogre::HashTable<WCoord,WorldContainer *,WCoordHashCoder>::find(int a1, _DWORD *a2)
{
  int v2; // r5
  int v3; // r6
  _DWORD *result; // r0

  v2 = a2[1];
  v3 = a2[2];
  for ( result = *(_DWORD **)(4 * ((unsigned int)(v2 + 29791 + 31 * (31 * *a2 + v3)) % *(_DWORD *)(a1 + 8))
                            + *(_DWORD *)(a1 + 4));
        result != nullptr && (*result != *a2 || result[1] != v2 || result[2] != v3);
        result = (_DWORD *)result[5] )
  {
    ;
  }
  return result;
}


//======================================================================
// Ogre::HashTable<WCoord,WorldContainer *,WCoordHashCoder>::erase(Ogre::HashTable<WCoord,WorldContainer *,WCoordHashCoder>::Element *)
// address: 0x002F9D58   size: 0x56 (86 bytes)
//======================================================================
int __fastcall Ogre::HashTable<WCoord,WorldContainer *,WCoordHashCoder>::erase(_DWORD *a1, _DWORD *a2)
{
  int v3; // r7
  _DWORD *v4; // r2
  _DWORD *v5; // r3
  int v6; // r5
  int i; // r3

  v3 = a2[3] % a1[2];
  v4 = (_DWORD *)(a1[1] + 4 * v3);
  v5 = (_DWORD *)*v4;
  v6 = a2[5];
  if ( (_DWORD *)*v4 == a2 )
  {
    *v4 = v6;
  }
  else
  {
    while ( (_DWORD *)v5[5] != a2 )
      v5 = (_DWORD *)v5[5];
    v5[5] = v6;
  }
  operator delete(a2);
  --a1[3];
  for ( i = 4 * v3; v6 == 0; v6 = *(_DWORD *)(a1[1] + i) )
  {
    ++v3;
    i += 4;
    if ( v3 == a1[2] )
      break;
  }
  return v6;
}


//======================================================================
// Ogre::HashTable<WCoord,WorldContainer *,WCoordHashCoder>::iterate(Ogre::HashTable<WCoord,WorldContainer *,WCoordHashCoder>::Element *)
// address: 0x002F9E34   size: 0x30 (48 bytes)
//======================================================================
int __fastcall Ogre::HashTable<WCoord,WorldContainer *,WCoordHashCoder>::iterate(int a1, int a2)
{
  int v3; // r5
  int result; // r0
  int i; // r2

  v3 = a2;
  if ( a2 != 0 )
  {
    a2 = *(_DWORD *)(a2 + 12) % *(_DWORD *)(a1 + 8);
    result = *(_DWORD *)(v3 + 20);
  }
  else
  {
    result = **(_DWORD **)(a1 + 4);
  }
  for ( i = 4 * a2; result == 0; result = *(_DWORD *)(*(_DWORD *)(a1 + 4) + i) )
  {
    ++a2;
    i += 4;
    if ( a2 == *(_DWORD *)(a1 + 8) )
      break;
  }
  return result;
}


//======================================================================
// Ogre::HashTable<WCoord,WorldContainer *,WCoordHashCoder>::insert(WCoord const&)
// address: 0x002FA4E4   size: 0x94 (148 bytes)
//======================================================================
_DWORD *__fastcall Ogre::HashTable<WCoord,WorldContainer *,WCoordHashCoder>::insert(_DWORD *a1, int *a2)
{
  int v3; // r5
  _DWORD **v4; // r7
  _DWORD *v5; // r4
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  int v9; // [sp+4h] [bp-10h]
  int v10; // [sp+8h] [bp-Ch]
  unsigned int v11; // [sp+Ch] [bp-8h]

  v10 = a2[1];
  v3 = a2[2];
  v9 = *a2;
  v11 = v10 + 29791 + 31 * (31 * *a2 + v3);
  v4 = (_DWORD **)(a1[1] + 4 * (v11 % a1[2]));
  v5 = *v4;
  if ( *v4 != nullptr )
  {
    while ( *v5 != v9 || v5[1] != v10 || v5[2] != v3 )
    {
      if ( v5[5] == 0 )
      {
        v7 = (_DWORD *)operator new(0x18u);
        v7[2] = v3;
        *v7 = v9;
        v7[1] = v10;
        v7[5] = 0;
        v5[5] = v7;
        v5 = v7;
        break;
      }
      v5 = (_DWORD *)v5[5];
    }
  }
  else
  {
    v6 = (_DWORD *)operator new(0x18u);
    *v6 = v9;
    v6[1] = v10;
    v6[2] = v3;
    v6[5] = 0;
    v5 = v6;
    *v4 = v6;
  }
  ++a1[3];
  v5[3] = v11;
  return v5;
}

