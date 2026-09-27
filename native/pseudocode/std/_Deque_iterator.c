// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std::_Deque_iterator

//======================================================================
// std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*> const&)
// address: 0x001B67D0   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt15_Deque_iteratorIN4Ogre8TVector2IiEERS2_PS2_EC1ERKS5_'
_DWORD *__fastcall std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(
        _DWORD *result,
        _DWORD *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  return result;
}


//======================================================================
// std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::difference_type std::operator-<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>(std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*> const&,std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*> const&)
// address: 0x001B68D8   size: 0x24 (36 bytes)
//======================================================================
int __fastcall std::operator-<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>(_DWORD *a1, _DWORD *a2)
{
  return ((((a1[3] - a2[3]) >> 2) - 1) << 6) + ((*a1 - a1[1]) >> 3) + ((a2[2] - *a2) >> 3);
}


//======================================================================
// std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>::_Deque_iterator(std::_Deque_iterator const&<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>)
// address: 0x001B68FC   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt15_Deque_iteratorIN4Ogre8TVector2IiEERKS2_PS3_EC1ERKS_IS2_RS2_PS2_E'
_DWORD *__fastcall std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>::_Deque_iterator(
        _DWORD *result,
        _DWORD *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  return result;
}


//======================================================================
// std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>::difference_type std::operator-<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>(std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*> const&,std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*> const&)
// address: 0x001B690E   size: 0x24 (36 bytes)
//======================================================================
int __fastcall std::operator-<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>(
        _DWORD *a1,
        _DWORD *a2)
{
  return ((((a1[3] - a2[3]) >> 2) - 1) << 6) + ((*a1 - a1[1]) >> 3) + ((a2[2] - *a2) >> 3);
}


//======================================================================
// std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>::operator+=(int)
// address: 0x001B6932   size: 0x44 (68 bytes)
//======================================================================
_DWORD *__fastcall std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>::operator+=(
        _DWORD *result,
        int a2)
{
  int v2; // r3
  unsigned int v3; // r2
  int *v4; // r1
  int v5; // r1

  v2 = a2 + ((*result - result[1]) >> 3);
  if ( (unsigned int)v2 <= 0x3F )
  {
    *result += 8 * a2;
  }
  else
  {
    v3 = v2 >> 6;
    if ( v2 <= 0 )
      v3 = ~((unsigned int)~v2 >> 6);
    v4 = (int *)(result[3] + 4 * v3);
    result[3] = v4;
    v5 = *v4;
    result[1] = v5;
    result[2] = v5 + 512;
    *result = v5 + 8 * (v2 - (v3 << 6));
  }
  return result;
}


//======================================================================
// std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator+=(int)
// address: 0x001B6976   size: 0x44 (68 bytes)
//======================================================================
_DWORD *__fastcall std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator+=(
        _DWORD *result,
        int a2)
{
  int v2; // r3
  unsigned int v3; // r2
  int *v4; // r1
  int v5; // r1

  v2 = a2 + ((*result - result[1]) >> 3);
  if ( (unsigned int)v2 <= 0x3F )
  {
    *result += 8 * a2;
  }
  else
  {
    v3 = v2 >> 6;
    if ( v2 <= 0 )
      v3 = ~((unsigned int)~v2 >> 6);
    v4 = (int *)(result[3] + 4 * v3);
    result[3] = v4;
    v5 = *v4;
    result[1] = v5;
    result[2] = v5 + 512;
    *result = v5 + 8 * (v2 - (v3 << 6));
  }
  return result;
}


//======================================================================
// std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*> std::copy<Ogre::TVector2<int>>(std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>,std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>,std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>)
// address: 0x001B69BA   size: 0x78 (120 bytes)
//======================================================================
_DWORD *__fastcall std::copy<Ogre::TVector2<int>>(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        _DWORD *a10)
{
  int v10; // r0
  _DWORD *v11; // r7
  int i; // r6
  _DWORD *v13; // r2
  _DWORD *v14; // r3
  int v15; // r5
  int v16; // r1
  int v17; // r0
  _DWORD v20[2]; // [sp+24h] [bp-8h] BYREF
  int savedregs; // [sp+2Ch] [bp+0h]

  v20[0] = a2;
  v20[1] = a3;
  v10 = std::operator-<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>(&a6, v20);
  v11 = a10;
  for ( i = v10; i > 0; i -= v15 )
  {
    v13 = (_DWORD *)*v11;
    v14 = (_DWORD *)v20[0];
    v15 = (v11[2] - *v11) >> 3;
    if ( v15 > (savedregs - v20[0]) >> 3 )
      v15 = (savedregs - v20[0]) >> 3;
    if ( v15 > i )
      v15 = i;
    v16 = (8 * v15) >> 3;
    while ( v16 > 0 )
    {
      --v16;
      *v13 = *v14;
      v17 = v14[1];
      v14 += 2;
      v13[1] = v17;
      v13 += 2;
    }
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>::operator+=(
      v20,
      v15);
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator+=(v11, v15);
  }
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(a1, v11);
  return a1;
}


//======================================================================
// std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator++(void)
// address: 0x001B6A32   size: 0x24 (36 bytes)
//======================================================================
int *__fastcall std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator++(
        int *result)
{
  int v1; // r1
  int v2; // r3
  int *v3; // r2
  int v4; // r3
  int v5; // r2

  v1 = result[2];
  v2 = *result + 8;
  *result = v2;
  if ( v2 == v1 )
  {
    v3 = (int *)(result[3] + 4);
    result[3] = (int)v3;
    v4 = *v3;
    v5 = *v3 + 512;
    result[1] = v4;
    result[2] = v5;
    *result = v4;
  }
  return result;
}


//======================================================================
// std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator-(int)const
// address: 0x001B6C26   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator-(
        _DWORD *a1,
        _DWORD *a2,
        int a3,
        int a4)
{
  _DWORD *v6; // r0
  _DWORD v8[4]; // [sp+0h] [bp-10h] BYREF

  v8[0] = a1;
  v8[1] = a2;
  v8[2] = a3;
  v8[3] = a4;
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v8, a2);
  v6 = std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator+=(v8, -a3);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(a1, v6);
  return a1;
}


//======================================================================
// std::_Deque_iterator<tagTextHistory,tagTextHistory&,tagTextHistory*>::_Deque_iterator(std::_Deque_iterator<tagTextHistory,tagTextHistory&,tagTextHistory*> const&)
// address: 0x001C99FE   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt15_Deque_iteratorI14tagTextHistoryRS0_PS0_EC1ERKS3_'
_DWORD *__fastcall std::_Deque_iterator<tagTextHistory,tagTextHistory&,tagTextHistory*>::_Deque_iterator(
        _DWORD *result,
        _DWORD *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  return result;
}


//======================================================================
// std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*> const&)
// address: 0x002B037C   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt15_Deque_iteratorI10ChunkIndexRS0_PS0_EC1ERKS3_'
_DWORD *__fastcall std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(
        _DWORD *result,
        _DWORD *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  return result;
}


//======================================================================
// std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::difference_type std::operator-<ChunkIndex,ChunkIndex&,ChunkIndex*>(std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*> const&,std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*> const&)
// address: 0x002B0600   size: 0x24 (36 bytes)
//======================================================================
int __fastcall std::operator-<ChunkIndex,ChunkIndex&,ChunkIndex*>(_DWORD *a1, _DWORD *a2)
{
  return ((((a1[3] - a2[3]) >> 2) - 1) << 6) + ((*a1 - a1[1]) >> 3) + ((a2[2] - *a2) >> 3);
}


//======================================================================
// std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+=(int)
// address: 0x002B0624   size: 0x44 (68 bytes)
//======================================================================
_DWORD *__fastcall std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+=(_DWORD *result, int a2)
{
  int v2; // r3
  unsigned int v3; // r2
  int *v4; // r1
  int v5; // r1

  v2 = a2 + ((*result - result[1]) >> 3);
  if ( (unsigned int)v2 <= 0x3F )
  {
    *result += 8 * a2;
  }
  else
  {
    v3 = v2 >> 6;
    if ( v2 <= 0 )
      v3 = ~((unsigned int)~v2 >> 6);
    v4 = (int *)(result[3] + 4 * v3);
    result[3] = v4;
    v5 = *v4;
    result[1] = v5;
    result[2] = v5 + 512;
    *result = v5 + 8 * (v2 - (v3 << 6));
  }
  return result;
}


//======================================================================
// std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+(int)const
// address: 0x002B0668   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+(
        _DWORD *a1,
        _DWORD *a2,
        int a3,
        int a4)
{
  _DWORD *v6; // r0
  _DWORD v8[4]; // [sp+0h] [bp-10h] BYREF

  v8[0] = a1;
  v8[1] = a2;
  v8[2] = a3;
  v8[3] = a4;
  std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v8, a2);
  v6 = std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+=(v8, a3);
  std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(a1, v6);
  return a1;
}


//======================================================================
// std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator++(void)
// address: 0x002B068A   size: 0x24 (36 bytes)
//======================================================================
int *__fastcall std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator++(int *result)
{
  int v1; // r1
  int v2; // r3
  int *v3; // r2
  int v4; // r3
  int v5; // r2

  v1 = result[2];
  v2 = *result + 8;
  *result = v2;
  if ( v2 == v1 )
  {
    v3 = (int *)(result[3] + 4);
    result[3] = (int)v3;
    v4 = *v3;
    v5 = *v3 + 512;
    result[1] = v4;
    result[2] = v5;
    *result = v4;
  }
  return result;
}


//======================================================================
// std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator--(void)
// address: 0x002B06AE   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator--(_DWORD *result)
{
  int *v1; // r3
  int v2; // r3

  if ( *result == result[1] )
  {
    v1 = (int *)(result[3] - 4);
    result[3] = v1;
    v2 = *v1;
    result[1] = v2;
    v2 += 512;
    result[2] = v2;
    *result = v2;
  }
  *result -= 8;
  return result;
}


//======================================================================
// std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*> std::__unguarded_partition_pivot<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex))
// address: 0x002B07F4   size: 0x106 (262 bytes)
//======================================================================
_DWORD *__fastcall std::__unguarded_partition_pivot<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        int (__fastcall *a4)(_DWORD, _DWORD, _DWORD, _DWORD))
{
  int v6; // r0
  int v7; // r3
  int v8; // r3
  _DWORD *v9; // r0
  int v10; // r3
  _DWORD *v11; // r5
  int v12; // r3
  _DWORD v16[4]; // [sp+18h] [bp-64h] BYREF
  _DWORD *v17[4]; // [sp+28h] [bp-54h] BYREF
  int v18[4]; // [sp+38h] [bp-44h] BYREF
  _DWORD v19[4]; // [sp+48h] [bp-34h] BYREF
  int *v20[4]; // [sp+58h] [bp-24h] BYREF
  int *v21[5]; // [sp+68h] [bp-14h] BYREF

  v6 = std::operator-<ChunkIndex,ChunkIndex&,ChunkIndex*>(a3, a2);
  std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+(v16, a2, v6 / 2, v7);
  std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v19, a2);
  std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+(v17, a2, 1, v8);
  std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v20, v16);
  std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v21, a3);
  v9 = std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+=(v21, -1);
  std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v18, v9);
  std::__move_median_to_first<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(
    v19,
    v17,
    v20,
    (_DWORD **)v18,
    a4);
  std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+(v18, a2, 1, v10);
  std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v19, a3);
  v11 = (_DWORD *)*a2;
  while ( 1 )
  {
    if ( a4(*(_DWORD *)v18[0], *(_DWORD *)(v18[0] + 4), *v11, v11[1]) == 0 )
    {
      do
        std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator--(v19);
      while ( a4(*v11, v11[1], *(_DWORD *)v19[0], *(_DWORD *)(v19[0] + 4)) != 0 );
      v12 = v18[3] == v19[3] ? -(v18[0] < v19[0]) : -(v18[3] < v19[3]);
      if ( v12 == 0 )
        break;
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v21, v18);
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v20, v19);
      std::iter_swap<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>>(
        v21,
        v20);
    }
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator++(v18);
  }
  std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(a1, v18);
  return a1;
}


//======================================================================
// std::_Deque_iterator<ChunkIndex,ChunkIndex const&,ChunkIndex const*>::operator-=(int)
// address: 0x002B08FA   size: 0x44 (68 bytes)
//======================================================================
_DWORD *__fastcall std::_Deque_iterator<ChunkIndex,ChunkIndex const&,ChunkIndex const*>::operator-=(
        _DWORD *result,
        int a2)
{
  int v2; // r3
  unsigned int v3; // r2
  int *v4; // r1
  int v5; // r1

  v2 = ((*result - result[1]) >> 3) - a2;
  if ( (unsigned int)v2 <= 0x3F )
  {
    *result -= 8 * a2;
  }
  else
  {
    v3 = v2 >> 6;
    if ( v2 <= 0 )
      v3 = ~((unsigned int)~v2 >> 6);
    v4 = (int *)(result[3] + 4 * v3);
    result[3] = v4;
    v5 = *v4;
    result[1] = v5;
    result[2] = v5 + 512;
    *result = v5 + 8 * (v2 - (v3 << 6));
  }
  return result;
}


//======================================================================
// std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*> const&)
// address: 0x002B1C30   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt15_Deque_iteratorIN11ClientWorld14ParticleEffectERS1_PS1_EC1ERKS4_'
_DWORD *__fastcall std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
        _DWORD *result,
        _DWORD *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  return result;
}


//======================================================================
// std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::operator++(void)
// address: 0x002B1D94   size: 0x24 (36 bytes)
//======================================================================
int *__fastcall std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::operator++(
        int *result)
{
  int v1; // r1
  int v2; // r3
  int *v3; // r2
  int v4; // r3
  int v5; // r2

  v1 = result[2];
  v2 = *result + 8;
  *result = v2;
  if ( v2 == v1 )
  {
    v3 = (int *)(result[3] + 4);
    result[3] = (int)v3;
    v4 = *v3;
    v5 = *v3 + 512;
    result[1] = v4;
    result[2] = v5;
    *result = v4;
  }
  return result;
}


//======================================================================
// std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::operator--(void)
// address: 0x002B205E   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::operator--(
        _DWORD *result)
{
  int *v1; // r3
  int v2; // r3

  if ( *result == result[1] )
  {
    v1 = (int *)(result[3] - 4);
    result[3] = v1;
    v2 = *v1;
    result[1] = v2;
    v2 += 512;
    result[2] = v2;
    *result = v2;
  }
  *result -= 8;
  return result;
}


//======================================================================
// std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::difference_type std::operator-<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>(std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*> const&,std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*> const&)
// address: 0x002B2084   size: 0x24 (36 bytes)
//======================================================================
int __fastcall std::operator-<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>(
        _DWORD *a1,
        _DWORD *a2)
{
  return ((((a1[3] - a2[3]) >> 2) - 1) << 6) + ((*a1 - a1[1]) >> 3) + ((a2[2] - *a2) >> 3);
}


//======================================================================
// std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::operator+=(int)
// address: 0x002B20A8   size: 0x44 (68 bytes)
//======================================================================
_DWORD *__fastcall std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::operator+=(
        _DWORD *result,
        int a2)
{
  int v2; // r3
  unsigned int v3; // r2
  int *v4; // r1
  int v5; // r1

  v2 = a2 + ((*result - result[1]) >> 3);
  if ( (unsigned int)v2 <= 0x3F )
  {
    *result += 8 * a2;
  }
  else
  {
    v3 = v2 >> 6;
    if ( v2 <= 0 )
      v3 = ~((unsigned int)~v2 >> 6);
    v4 = (int *)(result[3] + 4 * v3);
    result[3] = v4;
    v5 = *v4;
    result[1] = v5;
    result[2] = v5 + 512;
    *result = v5 + 8 * (v2 - (v3 << 6));
  }
  return result;
}


//======================================================================
// std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect const&,ClientWorld::ParticleEffect const*>::difference_type std::operator-<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect const&,ClientWorld::ParticleEffect const*>(std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect const&,ClientWorld::ParticleEffect const*> const&,std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect const&,ClientWorld::ParticleEffect const*> const&)
// address: 0x002B23E0   size: 0x24 (36 bytes)
//======================================================================
int __fastcall std::operator-<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect const&,ClientWorld::ParticleEffect const*>(
        _DWORD *a1,
        _DWORD *a2)
{
  return ((((a1[3] - a2[3]) >> 2) - 1) << 6) + ((*a1 - a1[1]) >> 3) + ((a2[2] - *a2) >> 3);
}


//======================================================================
// std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect const&,ClientWorld::ParticleEffect const*>::operator+=(int)
// address: 0x002B2404   size: 0x44 (68 bytes)
//======================================================================
_DWORD *__fastcall std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect const&,ClientWorld::ParticleEffect const*>::operator+=(
        _DWORD *result,
        int a2)
{
  int v2; // r3
  unsigned int v3; // r2
  int *v4; // r1
  int v5; // r1

  v2 = a2 + ((*result - result[1]) >> 3);
  if ( (unsigned int)v2 <= 0x3F )
  {
    *result += 8 * a2;
  }
  else
  {
    v3 = v2 >> 6;
    if ( v2 <= 0 )
      v3 = ~((unsigned int)~v2 >> 6);
    v4 = (int *)(result[3] + 4 * v3);
    result[3] = v4;
    v5 = *v4;
    result[1] = v5;
    result[2] = v5 + 512;
    *result = v5 + 8 * (v2 - (v3 << 6));
  }
  return result;
}


//======================================================================
// std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*> std::move_backward<ClientWorld::ParticleEffect>(std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>,std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>,std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>)
// address: 0x002B2448   size: 0xCA (202 bytes)
//======================================================================
_DWORD *__fastcall std::move_backward<ClientWorld::ParticleEffect>(_DWORD *a1, int *a2, int *a3, _DWORD *a4)
{
  int v4; // r5
  int v5; // r6
  int v6; // r4
  int i; // r4
  int v8; // r1
  int v9; // r0
  int v10; // r6
  int v11; // r3
  const void *v12; // r1
  int v14; // [sp+0h] [bp-18h]
  int v16; // [sp+8h] [bp-10h]
  int v17; // [sp+Ch] [bp-Ch]
  int v18; // [sp+10h] [bp-8h]
  int v19; // [sp+14h] [bp-4h]
  _DWORD v20[4]; // [sp+18h] [bp+0h] BYREF
  _DWORD v21[4]; // [sp+28h] [bp+10h] BYREF
  int v22; // [sp+38h] [bp+20h] BYREF
  int v23; // [sp+3Ch] [bp+24h]
  int v24; // [sp+40h] [bp+28h]
  int v25; // [sp+44h] [bp+2Ch]

  v4 = *a2;
  v5 = a2[1];
  v14 = a2[2];
  v16 = a2[3];
  v6 = a3[3];
  v17 = *a3;
  v18 = a3[1];
  v19 = a3[2];
  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    v20,
    a4);
  v21[2] = v14;
  v21[0] = v4;
  v22 = v17;
  v23 = v18;
  v25 = v6;
  v21[1] = v5;
  v21[3] = v16;
  v24 = v19;
  for ( i = std::operator-<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect const&,ClientWorld::ParticleEffect const*>(
              &v22,
              v21); i > 0; i -= v10 )
  {
    v8 = v22;
    v9 = v20[0];
    v10 = (v22 - v23) >> 3;
    v11 = (v20[0] - v20[1]) >> 3;
    if ( v10 == 0 )
    {
      v10 = 64;
      v8 = *(_DWORD *)(v25 - 4) + 512;
    }
    if ( v11 == 0 )
    {
      v9 = *(_DWORD *)(v20[3] - 4) + 512;
      v11 = 64;
    }
    if ( v10 > i )
      v10 = i;
    if ( v10 > v11 )
      v10 = v11;
    v12 = (const void *)(v8 - 8 * v10);
    if ( (8 * v10) >> 3 != 0 )
      j_memmove((void *)(v9 - 8 * ((8 * v10) >> 3)), v12, 8 * ((8 * v10) >> 3));
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect const&,ClientWorld::ParticleEffect const*>::operator+=(
      &v22,
      -v10);
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::operator+=(
      v20,
      -v10);
  }
  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    a1,
    v20);
  return a1;
}


//======================================================================
// std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*> std::move<ClientWorld::ParticleEffect>(std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>,std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>,std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>)
// address: 0x002B2512   size: 0x9E (158 bytes)
//======================================================================
_DWORD *__fastcall std::move<ClientWorld::ParticleEffect>(_DWORD *a1, int a2, int *a3, _DWORD *a4)
{
  const void *v4; // r6
  const void *v5; // r7
  int v6; // r4
  int i; // r6
  signed int v8; // r4
  int v10; // [sp+0h] [bp-4Ch]
  int v12; // [sp+8h] [bp-44h]
  int v13; // [sp+Ch] [bp-40h]
  int v14; // [sp+10h] [bp-3Ch]
  int v15; // [sp+14h] [bp-38h]
  void *v16[4]; // [sp+18h] [bp-34h] BYREF
  const void *v17[2]; // [sp+28h] [bp-24h] BYREF
  int v18; // [sp+30h] [bp-1Ch]
  int v19; // [sp+34h] [bp-18h]
  _DWORD v20[5]; // [sp+38h] [bp-14h] BYREF

  v4 = *(const void **)a2;
  v5 = *(const void **)(a2 + 4);
  v10 = *(_DWORD *)(a2 + 8);
  v12 = *(_DWORD *)(a2 + 12);
  v6 = a3[3];
  v13 = *a3;
  v14 = a3[1];
  v15 = a3[2];
  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    v16,
    a4);
  v18 = v10;
  v17[1] = v5;
  v20[0] = v13;
  v20[1] = v14;
  v17[0] = v4;
  v19 = v12;
  v20[2] = v15;
  v20[3] = v6;
  for ( i = std::operator-<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect const&,ClientWorld::ParticleEffect const*>(
              v20,
              v17); i > 0; i -= v8 )
  {
    v8 = ((char *)v16[2] - (char *)v16[0]) >> 3;
    if ( v8 > (signed int)(v18 - (unsigned int)v17[0]) >> 3 )
      v8 = (signed int)(v18 - (unsigned int)v17[0]) >> 3;
    if ( v8 > i )
      v8 = i;
    if ( (8 * v8) >> 3 != 0 )
      j_memmove(v16[0], v17[0], 8 * ((8 * v8) >> 3));
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect const&,ClientWorld::ParticleEffect const*>::operator+=(
      v17,
      v8);
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::operator+=(
      v16,
      v8);
  }
  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    a1,
    v16);
  return a1;
}


//======================================================================
// std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*> std::deque<ClientWorld::ParticleEffect,std::allocator<ClientWorld::ParticleEffect>>::_M_insert_aux<ClientWorld::ParticleEffect const&>(std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>,ClientWorld::ParticleEffect const&)
// address: 0x002B285E   size: 0x210 (528 bytes)
//======================================================================
// Alternative name is '_ZNSt5dequeIN11ClientWorld14ParticleEffectESaIS1_EE13_M_insert_auxIJRKS1_EEESt15_Deque_iteratorIS1_RS1_PS1_ESA_DpOT_'
_DWORD *__fastcall std::deque<ClientWorld::ParticleEffect>::_M_insert_aux<ClientWorld::ParticleEffect const&>(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        int *a4)
{
  _DWORD *v4; // r7
  int v6; // r3
  _DWORD *v7; // r5
  _DWORD *v8; // r3
  int v9; // r6
  int *v10; // r3
  int v11; // r3
  _DWORD *v12; // r0
  _DWORD *v13; // r3
  _DWORD *v14; // r5
  int v15; // r3
  _DWORD *v16; // r3
  int *v17; // r2
  int v18; // r2
  _DWORD *v19; // r0
  _DWORD *v20; // r3
  int v22; // [sp+8h] [bp-8Ch]
  unsigned int v24; // [sp+10h] [bp-84h]
  int v26; // [sp+18h] [bp-7Ch]
  int v27; // [sp+1Ch] [bp-78h]
  _DWORD v28[4]; // [sp+20h] [bp-74h] BYREF
  int v29[4]; // [sp+30h] [bp-64h] BYREF
  int v30[4]; // [sp+40h] [bp-54h] BYREF
  int v31[4]; // [sp+50h] [bp-44h] BYREF
  int v32[4]; // [sp+60h] [bp-34h] BYREF
  __int128 v33; // [sp+70h] [bp-24h] BYREF
  _DWORD v34[5]; // [sp+80h] [bp-14h] BYREF

  v4 = a2 + 2;
  v26 = *a4;
  v27 = a4[1];
  v24 = std::operator-<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>(
          a3,
          a2 + 2);
  if ( v24 >= (unsigned int)std::operator-<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>(
                              a2 + 6,
                              v4) >> 1 )
  {
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      v34,
      a2 + 6);
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::operator--(v34);
    v13 = (_DWORD *)a2[6];
    v14 = (_DWORD *)v34[0];
    if ( v13 == (_DWORD *)(a2[8] - 8) )
    {
      std::deque<ClientWorld::ParticleEffect>::_M_reserve_map_at_back(a2, 1u);
      v22 = a2[9];
      *(_DWORD *)(v22 + 4) = operator new(0x200u);
      v16 = (_DWORD *)a2[6];
      if ( v16 != nullptr )
      {
        *v16 = *v14;
        v16[1] = v14[1];
      }
      v17 = (int *)(a2[9] + 4);
      a2[9] = v17;
      v15 = *v17;
      v18 = *v17 + 512;
      a2[7] = v15;
      a2[8] = v18;
    }
    else
    {
      if ( v13 != nullptr )
      {
        *v13 = *(_DWORD *)v34[0];
        v13[1] = v14[1];
      }
      v15 = a2[6] + 8;
    }
    a2[6] = v15;
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      v30,
      a2 + 6);
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::operator--(v30);
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      v31,
      v30);
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::operator--(v31);
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      v34,
      v4);
    v19 = std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::operator+=(
            v34,
            v24);
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      &v33,
      v19);
    *(_OWORD *)a3 = v33;
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      v32,
      a3);
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      &v33,
      v31);
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      v34,
      v30);
    std::move_backward<ClientWorld::ParticleEffect>(v28, v32, (int *)&v33, v34);
  }
  else
  {
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      v34,
      v4);
    v6 = a2[2];
    v7 = (_DWORD *)v34[0];
    if ( v6 == a2[3] )
    {
      std::deque<ClientWorld::ParticleEffect>::_M_reserve_map_at_front(a2, 1u);
      v9 = a2[5];
      *(_DWORD *)(v9 - 4) = operator new(0x200u);
      v10 = (int *)(a2[5] - 4);
      a2[5] = v10;
      v11 = *v10;
      a2[4] = v11 + 512;
      a2[3] = v11;
      a2[2] = v11 + 504;
      if ( v11 != -504 )
      {
        *(_DWORD *)(v11 + 504) = *v7;
        *(_DWORD *)(v11 + 508) = v7[1];
      }
    }
    else
    {
      v8 = (_DWORD *)(v6 - 8);
      if ( v8 != nullptr )
      {
        *v8 = *(_DWORD *)v34[0];
        v8[1] = v7[1];
      }
      a2[2] -= 8;
    }
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      v29,
      v4);
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::operator++(v29);
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      v30,
      v29);
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::operator++(v30);
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      v34,
      v4);
    v12 = std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::operator+=(
            v34,
            v24);
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      &v33,
      v12);
    *(_OWORD *)a3 = v33;
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      v31,
      a3);
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::operator++(v31);
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      v32,
      v30);
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      &v33,
      v31);
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      v34,
      v29);
    std::move<ClientWorld::ParticleEffect>(v28, (int)v32, (int *)&v33, v34);
  }
  v20 = (_DWORD *)*a3;
  *v20 = v26;
  v20[1] = v27;
  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    a1,
    a3);
  return a1;
}


//======================================================================
// std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(std::_Deque_iterator<CullStep,CullStep&,CullStep*> const&)
// address: 0x002CEE64   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt15_Deque_iteratorI8CullStepRS0_PS0_EC1ERKS3_'
_DWORD *__fastcall std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(_DWORD *result, _DWORD *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  return result;
}


//======================================================================
// std::_Deque_iterator<CullStep,CullStep&,CullStep*>::operator+=(int)
// address: 0x002CF3C8   size: 0x44 (68 bytes)
//======================================================================
_DWORD *__fastcall std::_Deque_iterator<CullStep,CullStep&,CullStep*>::operator+=(_DWORD *result, int a2)
{
  int v2; // r3
  unsigned int v3; // r2
  int *v4; // r1
  int v5; // r1

  v2 = a2 + ((*result - result[1]) >> 4);
  if ( (unsigned int)v2 <= 0x1F )
  {
    *result += 16 * a2;
  }
  else
  {
    v3 = v2 >> 5;
    if ( v2 <= 0 )
      v3 = ~((unsigned int)~v2 >> 5);
    v4 = (int *)(result[3] + 4 * v3);
    result[3] = v4;
    v5 = *v4;
    result[1] = v5;
    result[2] = v5 + 512;
    *result = v5 + 16 * (v2 - 32 * v3);
  }
  return result;
}

