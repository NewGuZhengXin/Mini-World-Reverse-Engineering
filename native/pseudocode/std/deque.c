// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std::deque

//======================================================================
// std::deque<Ogre::InputEvent,std::allocator<Ogre::InputEvent>>::~deque()
// address: 0x00167304   size: 0x66 (102 bytes)
//======================================================================
// Alternative name is '_ZNSt5dequeIN4Ogre10InputEventESaIS1_EED1Ev'
int __fastcall std::deque<Ogre::InputEvent>::~deque(int a1)
{
  int v1; // r7
  unsigned int v2; // r6
  void ***v4; // r5
  void **v5; // r0
  void **v6; // r0
  void **v7; // r5
  unsigned int v8; // r6
  void *v9; // r0
  void **v11; // [sp+0h] [bp-14h]
  void **v12; // [sp+4h] [bp-10h]
  void **v13; // [sp+8h] [bp-Ch]
  void **v14; // [sp+Ch] [bp-8h]

  v1 = *(_DWORD *)(a1 + 20);
  v11 = *(void ***)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 36);
  v13 = *(void ***)(a1 + 16);
  v4 = (void ***)(v1 + 4);
  v12 = *(void ***)(a1 + 24);
  v14 = *(void ***)(a1 + 28);
  while ( (unsigned int)v4 < v2 )
  {
    v5 = *v4++;
    std::_Destroy_aux<false>::__destroy<Ogre::InputEvent *>(v5, v5 + 128);
  }
  v6 = v11;
  if ( v1 != v2 )
  {
    std::_Destroy_aux<false>::__destroy<Ogre::InputEvent *>(v11, v13);
    v6 = v14;
  }
  std::_Destroy_aux<false>::__destroy<Ogre::InputEvent *>(v6, v12);
  if ( *(_DWORD *)a1 != 0 )
  {
    v7 = *(void ***)(a1 + 20);
    v8 = *(_DWORD *)(a1 + 36) + 4;
    while ( (unsigned int)v7 < v8 )
    {
      v9 = *v7++;
      operator delete(v9);
    }
    operator delete(*(void **)a1);
  }
  return a1;
}


//======================================================================
// std::deque<Ogre::TVector2<int>,std::allocator<Ogre::TVector2<int>>>::~deque()
// address: 0x001B67E2   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZNSt5dequeIN4Ogre8TVector2IiEESaIS2_EED1Ev'
int __fastcall std::deque<Ogre::TVector2<int>>::~deque(int a1)
{
  void **v2; // r5
  unsigned int v3; // r6
  void *v4; // r0
  _DWORD v6[4]; // [sp+0h] [bp-20h] BYREF
  _DWORD v7[4]; // [sp+10h] [bp-10h] BYREF

  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(
    v6,
    (_DWORD *)(a1 + 8));
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(
    v7,
    (_DWORD *)(a1 + 24));
  if ( *(_DWORD *)a1 != 0 )
  {
    v2 = *(void ***)(a1 + 20);
    v3 = *(_DWORD *)(a1 + 36) + 4;
    while ( (unsigned int)v2 < v3 )
    {
      v4 = *v2++;
      operator delete(v4);
    }
    operator delete(*(void **)a1);
  }
  return a1;
}


//======================================================================
// std::deque<Ogre::TVector2<int>,std::allocator<Ogre::TVector2<int>>>::_M_erase_at_end(std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>)
// address: 0x001B6820   size: 0x3C (60 bytes)
//======================================================================
int __fastcall std::deque<Ogre::TVector2<int>>::_M_erase_at_end(int a1, int *a2)
{
  int *v3; // r5
  void **v5; // r6
  unsigned int v6; // r7
  void *v7; // r0
  int result; // r0
  int v9; // r1
  int v10; // r2
  _DWORD v11[4]; // [sp+0h] [bp-24h] BYREF
  _DWORD v12[5]; // [sp+10h] [bp-14h] BYREF

  v3 = (int *)(a1 + 24);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v12, a2);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v11, v3);
  v5 = (void **)(a2[3] + 4);
  v6 = *(_DWORD *)(a1 + 36) + 4;
  while ( (unsigned int)v5 < v6 )
  {
    v7 = *v5++;
    operator delete(v7);
  }
  result = *a2;
  v9 = a2[1];
  v10 = a2[2];
  *v3 = *a2;
  v3[1] = v9;
  v3[2] = v10;
  v3[3] = a2[3];
  return result;
}


//======================================================================
// std::deque<Ogre::TVector2<int>,std::allocator<Ogre::TVector2<int>>>::deque(std::deque<Ogre::TVector2<int>,std::allocator<Ogre::TVector2<int>>> const&)
// address: 0x001B6AC6   size: 0xCC (204 bytes)
//======================================================================
// Alternative name is '_ZNSt5dequeIN4Ogre8TVector2IiEESaIS2_EEC1ERKS4_'
_DWORD *__fastcall std::deque<Ogre::TVector2<int>>::deque(_DWORD *a1, int a2)
{
  _DWORD *v3; // r7
  int v4; // r6
  unsigned int v5; // r0
  int v6; // r0
  int v7; // r3
  _DWORD *v8; // r5
  _DWORD *i; // r6
  int v10; // r2
  int v11; // r3
  int v12; // r3
  _DWORD *v14; // [sp+14h] [bp-50h]
  _DWORD *v15; // [sp+18h] [bp-4Ch]
  unsigned int v16; // [sp+1Ch] [bp-48h]
  int v17[4]; // [sp+20h] [bp-44h] BYREF
  _DWORD v18[4]; // [sp+30h] [bp-34h] BYREF
  int v19[4]; // [sp+40h] [bp-24h] BYREF
  _DWORD *v20; // [sp+50h] [bp-14h] BYREF

  v3 = (_DWORD *)(a2 + 8);
  v14 = (_DWORD *)(a2 + 24);
  v16 = std::operator-<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>(
          (_DWORD *)(a2 + 24),
          (_DWORD *)(a2 + 8));
  v4 = (v16 >> 6) + 1;
  v5 = (v16 >> 6) + 3;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  if ( v5 < 8 )
    v5 = 8;
  a1[1] = v5;
  v6 = operator new(4 * v5);
  v7 = a1[1];
  *a1 = v6;
  v8 = (_DWORD *)(v6 + 4 * ((unsigned int)(v7 - v4) >> 1));
  v15 = &v8[v4];
  for ( i = v8; i < v15; ++i )
    *i = operator new(0x200u);
  a1[5] = v8;
  v10 = *v8;
  v11 = *v8 + 512;
  a1[3] = *v8;
  a1[9] = v15 - 1;
  a1[4] = v11;
  v12 = *(v15 - 1);
  a1[2] = v10;
  a1[7] = v12;
  a1[6] = v12 + 8 * (v16 & 0x3F);
  a1[8] = v12 + 512;
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>::_Deque_iterator(
    v19,
    v3);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>::_Deque_iterator(
    &v20,
    v14);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v18, a1 + 2);
  sub_1B6A56(v17, v19[0], v19[1], v19[2], v19[3], v20, v18);
  return a1;
}


//======================================================================
// std::deque<Ogre::TVector2<int>,std::allocator<Ogre::TVector2<int>>>::_M_reallocate_map(unsigned int,bool)
// address: 0x001B6C68   size: 0xD0 (208 bytes)
//======================================================================
int __fastcall std::deque<Ogre::TVector2<int>>::_M_reallocate_map(int a1, unsigned int a2, int a3)
{
  int *v4; // r3
  int v5; // r1
  unsigned int v7; // r0
  unsigned int v8; // r7
  int v9; // r2
  unsigned int v10; // r7
  int *v11; // r7
  int v12; // r1
  unsigned int v13; // r3
  unsigned int v14; // r6
  int v15; // r0
  int v16; // r3
  unsigned int v17; // r7
  int v18; // r3
  int *v20; // r7
  int v21; // r3
  int v23; // [sp+8h] [bp-Ch]
  int v24; // [sp+Ch] [bp-8h]

  v4 = *(int **)(a1 + 20);
  v5 = *(_DWORD *)(a1 + 36);
  v7 = *(_DWORD *)(a1 + 4);
  v23 = ((v5 - (int)v4) >> 2) + 1;
  v8 = v23 + a2;
  if ( v7 <= 2 * (v23 + a2) )
  {
    v13 = a2;
    if ( a2 < v7 )
      v13 = v7;
    v14 = v7 + 2 + v13;
    if ( v14 > 0x3FFFFFFF )
      sub_3BCEB4(v7);
    v15 = operator new(4 * v14);
    v16 = 0;
    v24 = v15;
    v17 = 4 * ((v14 - v8) >> 1);
    if ( a3 != 0 )
      v16 = 4 * a2;
    v11 = (int *)(v15 + v16 + v17);
    std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TVector2<int> *>(
      *(void **)(a1 + 20),
      *(_DWORD *)(a1 + 36) + 4,
      v11);
    operator delete(*(void **)a1);
    *(_DWORD *)(a1 + 4) = v14;
    *(_DWORD *)a1 = v24;
  }
  else
  {
    v9 = 0;
    v10 = 4 * ((v7 - v8) >> 1);
    if ( a3 != 0 )
      v9 = 4 * a2;
    v11 = (int *)(*(_DWORD *)a1 + v9 + v10);
    v12 = v5 + 4;
    if ( v11 >= v4 )
    {
      if ( (v12 - (int)v4) >> 2 != 0 )
        j_memmove(&v11[v23 - ((v12 - (int)v4) >> 2)], v4, 4 * ((v12 - (int)v4) >> 2));
    }
    else
    {
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TVector2<int> *>(v4, v12, v11);
    }
  }
  *(_DWORD *)(a1 + 20) = v11;
  v18 = *v11;
  *(_DWORD *)(a1 + 12) = *v11;
  *(_DWORD *)(a1 + 16) = v18 + 512;
  v20 = &v11[v23 - 1];
  *(_DWORD *)(a1 + 36) = v20;
  v21 = *v20;
  *(_DWORD *)(a1 + 28) = *v20;
  *(_DWORD *)(a1 + 32) = v21 + 512;
  return 0x3FFFFFFF;
}


//======================================================================
// std::deque<Ogre::TVector2<int>,std::allocator<Ogre::TVector2<int>>>::_M_new_elements_at_front(unsigned int)
// address: 0x001B6D3C   size: 0x56 (86 bytes)
//======================================================================
unsigned int __fastcall std::deque<Ogre::TVector2<int>>::_M_new_elements_at_front(_DWORD *a1, unsigned int a2)
{
  unsigned int result; // r0
  unsigned int v5; // r6
  unsigned int i; // r5
  unsigned int *v7; // r7

  result = 0x1FFFFFFF - std::operator-<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>(a1 + 6, a1 + 2);
  if ( result < a2 )
    sub_3BD058("deque::_M_new_elements_at_front");
  v5 = (a2 + 63) >> 6;
  if ( v5 > (a1[5] - *a1) >> 2 )
    result = std::deque<Ogre::TVector2<int>>::_M_reallocate_map((int)a1, v5, 1);
  for ( i = 1; i <= v5; ++i )
  {
    v7 = (unsigned int *)(a1[5] - 4 * i);
    result = operator new(0x200u);
    *v7 = result;
  }
  return result;
}


//======================================================================
// std::deque<Ogre::TVector2<int>,std::allocator<Ogre::TVector2<int>>>::_M_reserve_elements_at_front(unsigned int)
// address: 0x001B6D9C   size: 0x2C (44 bytes)
//======================================================================
_DWORD *__fastcall std::deque<Ogre::TVector2<int>>::_M_reserve_elements_at_front(
        _DWORD *a1,
        _DWORD *a2,
        unsigned int a3)
{
  int v4; // r3
  unsigned int v7; // r1

  v4 = a2[3];
  v7 = (a2[2] - v4) >> 3;
  if ( a3 > v7 )
    std::deque<Ogre::TVector2<int>>::_M_new_elements_at_front(a2, a3 - v7);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator-(a1, a2 + 2, a3, v4);
  return a1;
}


//======================================================================
// std::deque<Ogre::TVector2<int>,std::allocator<Ogre::TVector2<int>>>::_M_reserve_elements_at_back(unsigned int)
// address: 0x001B6DC8   size: 0x98 (152 bytes)
//======================================================================
_DWORD *__fastcall std::deque<Ogre::TVector2<int>>::_M_reserve_elements_at_back(
        _DWORD *a1,
        _DWORD *a2,
        unsigned int a3)
{
  unsigned int v5; // r5
  unsigned int v6; // r5
  unsigned int v7; // r7
  unsigned int i; // r5
  _DWORD *v9; // r0
  _DWORD *v11; // [sp+4h] [bp-20h]
  _DWORD *v12; // [sp+8h] [bp-1Ch]
  _DWORD v14[5]; // [sp+10h] [bp-14h] BYREF

  v5 = ((a2[8] - a2[6]) >> 3) - 1;
  v12 = a2 + 6;
  if ( a3 > v5 )
  {
    v6 = a3 - v5;
    if ( 0x1FFFFFFF - std::operator-<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>(a2 + 6, a2 + 2) < v6 )
      sub_3BD058("deque::_M_new_elements_at_back");
    v7 = (v6 + 63) >> 6;
    if ( v7 + 1 > a2[1] - ((a2[9] - *a2) >> 2) )
      std::deque<Ogre::TVector2<int>>::_M_reallocate_map((int)a2, (v6 + 63) >> 6, 0);
    for ( i = 1; i <= v7; ++i )
    {
      v11 = (_DWORD *)(a2[9] + 4 * i);
      *v11 = operator new(0x200u);
    }
  }
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v14, v12);
  v9 = std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator+=(v14, a3);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(a1, v9);
  return a1;
}


//======================================================================
// std::deque<Ogre::TVector2<int>,std::allocator<Ogre::TVector2<int>>>::operator=(std::deque<Ogre::TVector2<int>,std::allocator<Ogre::TVector2<int>>> const&)
// address: 0x001B73AC   size: 0x170 (368 bytes)
//======================================================================
int __fastcall std::deque<Ogre::TVector2<int>>::operator=(int a1, int a2)
{
  unsigned int v4; // r4
  _DWORD *v5; // r7
  _DWORD *v6; // r5
  int *v7; // r0
  int v8; // r2
  int v9; // r3
  unsigned int v10; // r7
  int v12; // [sp+24h] [bp-B8h]
  _DWORD *v13; // [sp+30h] [bp-ACh]
  unsigned int v14; // [sp+30h] [bp-ACh]
  int v15; // [sp+34h] [bp-A8h]
  _DWORD *v16; // [sp+38h] [bp-A4h]
  unsigned int v17; // [sp+38h] [bp-A4h]
  unsigned int v18; // [sp+3Ch] [bp-A0h]
  int v19; // [sp+40h] [bp-9Ch]
  int v20; // [sp+44h] [bp-98h]
  _DWORD v21[4]; // [sp+48h] [bp-94h] BYREF
  int v22; // [sp+58h] [bp-84h]
  int v23; // [sp+5Ch] [bp-80h]
  int v24; // [sp+60h] [bp-7Ch]
  int v25; // [sp+64h] [bp-78h]
  _DWORD v26[4]; // [sp+68h] [bp-74h] BYREF
  int v27[4]; // [sp+78h] [bp-64h] BYREF
  _DWORD v28[4]; // [sp+88h] [bp-54h] BYREF
  int v29[4]; // [sp+98h] [bp-44h] BYREF
  int v30; // [sp+A8h] [bp-34h] BYREF
  int v31; // [sp+ACh] [bp-30h]
  __int64 v32; // [sp+B0h] [bp-2Ch]
  __int128 v33; // [sp+B8h] [bp-24h] BYREF
  int v34[5]; // [sp+C8h] [bp-14h] BYREF

  v16 = (_DWORD *)(a1 + 24);
  v13 = (_DWORD *)(a1 + 8);
  v4 = std::operator-<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>(
         (_DWORD *)(a1 + 24),
         (_DWORD *)(a1 + 8));
  if ( a2 != a1 )
  {
    v5 = (_DWORD *)(a2 + 24);
    v6 = (_DWORD *)(a2 + 8);
    if ( v4 < std::operator-<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>(v5, v6) )
    {
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>::_Deque_iterator(
        &v33,
        v6);
      *(_OWORD *)v34 = v33;
      v7 = std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>::operator+=(
             v34,
             v4);
      v8 = v7[1];
      v9 = v7[2];
      v22 = *v7;
      v23 = v8;
      v24 = v9;
      v25 = v7[3];
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>::_Deque_iterator(
        v27,
        v6);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v34, v13);
      std::copy<Ogre::TVector2<int>>(v21, v27[0], v27[1], v27[2], v27[3], v22, v23, v24, v25, v34);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v26, v16);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>::_Deque_iterator(
        v28,
        v5);
      v20 = v22;
      v19 = v23;
      v12 = v24;
      v15 = v25;
      v18 = v28[0];
      v14 = v28[1];
      v10 = v28[3];
      v17 = v28[2];
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v29, v26);
      v30 = v20;
      v31 = v19;
      v32 = __PAIR64__(v15, v12);
      *(_QWORD *)&v33 = __PAIR64__(v14, v18);
      *((_QWORD *)&v33 + 1) = __PAIR64__(v10, v17);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v34, v29);
      std::deque<Ogre::TVector2<int>>::_M_range_insert_aux<std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>>(
        a1,
        v34,
        v30,
        v31,
        v32,
        v33,
        *((__int64 *)&v33 + 1));
    }
    else
    {
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>::_Deque_iterator(
        v29,
        v6);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>::_Deque_iterator(
        v34,
        v5);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(&v30, v13);
      std::copy<Ogre::TVector2<int>>(&v33, v29[0], v29[1], v29[2], v29[3], v34[0], v34[1], v34[2], v34[3], &v30);
      std::deque<Ogre::TVector2<int>>::_M_erase_at_end(a1, (int *)&v33);
    }
  }
  return a1;
}


//======================================================================
// std::deque<Ogre::TVector2<int>,std::allocator<Ogre::TVector2<int>>>::_M_reserve_map_at_back(unsigned int)
// address: 0x001B7B90   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall std::deque<Ogre::TVector2<int>>::_M_reserve_map_at_back(_DWORD *result, unsigned int a2)
{
  if ( a2 + 1 > result[1] - ((result[9] - *result) >> 2) )
    return (_DWORD *)std::deque<Ogre::TVector2<int>>::_M_reallocate_map((int)result, a2, 0);
  return result;
}


//======================================================================
// std::deque<tagTextHistory,std::allocator<tagTextHistory>>::size(void)const
// address: 0x001C996C   size: 0x24 (36 bytes)
//======================================================================
int __fastcall std::deque<tagTextHistory>::size(_DWORD *a1)
{
  return ((((a1[9] - a1[5]) >> 2) - 1) << 6) + ((a1[6] - a1[7]) >> 3) + ((a1[4] - a1[2]) >> 3);
}


//======================================================================
// std::deque<tagTextHistory,std::allocator<tagTextHistory>>::pop_front(void)
// address: 0x001C9990   size: 0x38 (56 bytes)
//======================================================================
void __fastcall std::deque<tagTextHistory>::pop_front(int a1)
{
  int v2; // r3
  int v3; // r0
  int v4; // r3
  int *v5; // r2
  int v6; // r2

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 == v2 - 8 )
  {
    sub_3BDF80(v3);
    operator delete(*(void **)(a1 + 12));
    v5 = (int *)(*(_DWORD *)(a1 + 20) + 4);
    *(_DWORD *)(a1 + 20) = v5;
    v4 = *v5;
    v6 = *v5 + 512;
    *(_DWORD *)(a1 + 12) = v4;
    *(_DWORD *)(a1 + 16) = v6;
  }
  else
  {
    sub_3BDF80(v3);
    v4 = *(_DWORD *)(a1 + 8) + 8;
  }
  *(_DWORD *)(a1 + 8) = v4;
}


//======================================================================
// std::deque<tagTextHistory,std::allocator<tagTextHistory>>::_M_destroy_data_aux(std::_Deque_iterator<tagTextHistory,tagTextHistory&,tagTextHistory*>,std::_Deque_iterator<tagTextHistory,tagTextHistory&,tagTextHistory*>)
// address: 0x001C9BBA   size: 0x36 (54 bytes)
//======================================================================
int __fastcall std::deque<tagTextHistory>::_M_destroy_data_aux(int a1, int *a2, int *a3)
{
  int *i; // r6
  unsigned int v6; // r3
  int v7; // r0
  int v8; // r0

  for ( i = (int *)(a2[3] + 4); ; ++i )
  {
    v6 = a3[3];
    if ( (unsigned int)i >= v6 )
      break;
    v7 = *i;
    std::_Destroy_aux<false>::__destroy<tagTextHistory *>(v7, v7 + 512);
  }
  v8 = *a2;
  if ( a2[3] != v6 )
  {
    std::_Destroy_aux<false>::__destroy<tagTextHistory *>(v8, a2[2]);
    v8 = a3[1];
  }
  return std::_Destroy_aux<false>::__destroy<tagTextHistory *>(v8, *a3);
}


//======================================================================
// std::deque<tagTextHistory,std::allocator<tagTextHistory>>::clear(void)
// address: 0x001C9BF0   size: 0x6E (110 bytes)
//======================================================================
int __fastcall std::deque<tagTextHistory>::clear(_DWORD *a1)
{
  void **v2; // r6
  unsigned int v3; // r5
  void *v4; // r0
  __int64 v5; // r0
  _OWORD *v7; // [sp+0h] [bp-5Ch]
  __int128 v8; // [sp+8h] [bp-54h] BYREF
  _DWORD v9[4]; // [sp+18h] [bp-44h] BYREF
  _DWORD v10[4]; // [sp+28h] [bp-34h] BYREF
  int v11[4]; // [sp+38h] [bp-24h] BYREF
  int v12[5]; // [sp+48h] [bp-14h] BYREF

  std::_Deque_iterator<tagTextHistory,tagTextHistory&,tagTextHistory*>::_Deque_iterator(&v8, a1 + 2);
  std::_Deque_iterator<tagTextHistory,tagTextHistory&,tagTextHistory*>::_Deque_iterator(v10, &v8);
  v7 = a1 + 6;
  std::_Deque_iterator<tagTextHistory,tagTextHistory&,tagTextHistory*>::_Deque_iterator(v9, a1 + 6);
  std::_Deque_iterator<tagTextHistory,tagTextHistory&,tagTextHistory*>::_Deque_iterator(v11, v10);
  std::_Deque_iterator<tagTextHistory,tagTextHistory&,tagTextHistory*>::_Deque_iterator(v12, v9);
  std::deque<tagTextHistory>::_M_destroy_data_aux((int)a1, v11, v12);
  v2 = (void **)(HIDWORD(v8) + 4);
  v3 = a1[9] + 4;
  while ( (unsigned int)v2 < v3 )
  {
    v4 = *v2++;
    operator delete(v4);
  }
  v5 = v8;
  *v7 = v8;
  return v5;
}


//======================================================================
// std::deque<tagTextHistory,std::allocator<tagTextHistory>>::push_back(tagTextHistory const&)
// address: 0x001C9D68   size: 0x10E (270 bytes)
//======================================================================
__int64 __fastcall std::deque<tagTextHistory>::push_back(__int64 a1)
{
  int v1; // r5
  __int64 v2; // kr00_8
  int v3; // r3
  unsigned int v4; // r3
  int *v5; // r7
  int v6; // r5
  int *v7; // r5
  int v8; // r1
  int v9; // r1
  int v10; // r2
  unsigned int v11; // r7
  int v12; // r0
  int v13; // r3
  int *v14; // r5
  int v15; // r3
  int v16; // r5
  int v17; // r5
  int *v18; // r2
  int v19; // r2
  __int64 v21; // [sp+0h] [bp-Ch]

  v21 = a1;
  v1 = *(_DWORD *)(a1 + 24);
  v2 = a1;
  if ( v1 == *(_DWORD *)(a1 + 32) - 8 )
  {
    HIDWORD(a1) = *(_DWORD *)(a1 + 36);
    v4 = *(_DWORD *)(a1 + 4);
    if ( v4 - ((HIDWORD(a1) - *(_DWORD *)a1) >> 2) <= 1 )
    {
      v5 = *(int **)(a1 + 20);
      LODWORD(v21) = ((HIDWORD(a1) - (int)v5) >> 2) + 1;
      v6 = ((HIDWORD(a1) - (int)v5) >> 2) + 2;
      if ( v4 <= 2 * v6 )
      {
        v10 = 1;
        if ( v4 != 0 )
          v10 = *(_DWORD *)(a1 + 4);
        v11 = v4 + 2 + v10;
        if ( v11 > 0x3FFFFFFF )
          sub_3BCEB4(2 * v6);
        v12 = operator new(4 * v11);
        v7 = (int *)(v12 + 4 * ((v11 - v6) >> 1));
        HIDWORD(v21) = v12;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<tagTextHistory *>(
          *(void **)(v2 + 20),
          *(_DWORD *)(v2 + 36) + 4,
          v7);
        operator delete(*(void **)v2);
        *(_DWORD *)(v2 + 4) = v11;
        *(_DWORD *)v2 = HIDWORD(v21);
      }
      else
      {
        v7 = (int *)(*(_DWORD *)a1 + 4 * ((v4 - v6) >> 1));
        v8 = HIDWORD(a1) + 4;
        if ( v7 >= v5 )
        {
          v9 = v8 - (_DWORD)v5;
          if ( v9 >> 2 != 0 )
            j_memmove(&v7[v21 - (v9 >> 2)], v5, 4 * (v9 >> 2));
        }
        else
        {
          std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<tagTextHistory *>(v5, v8, v7);
        }
      }
      *(_DWORD *)(v2 + 20) = v7;
      v13 = *v7;
      *(_DWORD *)(v2 + 12) = *v7;
      *(_DWORD *)(v2 + 16) = v13 + 512;
      v14 = &v7[v21 - 1];
      *(_DWORD *)(v2 + 36) = v14;
      v15 = *v14;
      *(_DWORD *)(v2 + 28) = *v14;
      *(_DWORD *)(v2 + 32) = v15 + 512;
    }
    v16 = *(_DWORD *)(v2 + 36);
    *(_DWORD *)(v16 + 4) = operator new(0x200u);
    v17 = *(_DWORD *)(v2 + 24);
    if ( v17 != 0 )
    {
      sub_3BEB1C(*(_DWORD *)(v2 + 24), HIDWORD(v2));
      *(_DWORD *)(v17 + 4) = *(_DWORD *)(HIDWORD(v2) + 4);
    }
    v18 = (int *)(*(_DWORD *)(v2 + 36) + 4);
    *(_DWORD *)(v2 + 36) = v18;
    v3 = *v18;
    v19 = *v18 + 512;
    *(_DWORD *)(v2 + 28) = v3;
    *(_DWORD *)(v2 + 32) = v19;
  }
  else
  {
    if ( v1 != 0 )
    {
      sub_3BEB1C(*(_DWORD *)(a1 + 24), HIDWORD(a1));
      *(_DWORD *)(v1 + 4) = *(_DWORD *)(HIDWORD(v2) + 4);
    }
    v3 = *(_DWORD *)(v2 + 24) + 8;
  }
  *(_DWORD *)(v2 + 24) = v3;
  return v21;
}


//======================================================================
// std::deque<Chunk *,std::allocator<Chunk *>>::~deque()
// address: 0x002B0294   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZNSt5dequeIP5ChunkSaIS1_EED1Ev'
int __fastcall std::deque<Chunk *>::~deque(int a1)
{
  void **v2; // r5
  unsigned int v3; // r6
  void *v4; // r0

  v2 = *(void ***)(a1 + 20);
  if ( *(_DWORD *)a1 != 0 )
  {
    v3 = *(_DWORD *)(a1 + 36) + 4;
    while ( (unsigned int)v2 < v3 )
    {
      v4 = *v2++;
      operator delete(v4);
    }
    operator delete(*(void **)a1);
  }
  return a1;
}


//======================================================================
// std::deque<Chunk *,std::allocator<Chunk *>>::pop_front(void)
// address: 0x002B02BA   size: 0x2E (46 bytes)
//======================================================================
void __fastcall std::deque<Chunk *>::pop_front(int a1)
{
  int v1; // r3
  int v3; // r3
  int *v4; // r2
  int v5; // r2

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == *(_DWORD *)(a1 + 16) - 4 )
  {
    operator delete(*(void **)(a1 + 12));
    v4 = (int *)(*(_DWORD *)(a1 + 20) + 4);
    *(_DWORD *)(a1 + 20) = v4;
    v3 = *v4;
    v5 = *v4 + 512;
    *(_DWORD *)(a1 + 12) = v3;
    *(_DWORD *)(a1 + 16) = v5;
  }
  else
  {
    v3 = v1 + 4;
  }
  *(_DWORD *)(a1 + 8) = v3;
}


//======================================================================
// std::deque<ChunkIndex,std::allocator<ChunkIndex>>::~deque()
// address: 0x002B038E   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZNSt5dequeI10ChunkIndexSaIS0_EED1Ev'
int __fastcall std::deque<ChunkIndex>::~deque(int a1)
{
  void **v2; // r5
  unsigned int v3; // r6
  void *v4; // r0
  _DWORD v6[4]; // [sp+0h] [bp-20h] BYREF
  _DWORD v7[4]; // [sp+10h] [bp-10h] BYREF

  std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v6, (_DWORD *)(a1 + 8));
  std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v7, (_DWORD *)(a1 + 24));
  if ( *(_DWORD *)a1 != 0 )
  {
    v2 = *(void ***)(a1 + 20);
    v3 = *(_DWORD *)(a1 + 36) + 4;
    while ( (unsigned int)v2 < v3 )
    {
      v4 = *v2++;
      operator delete(v4);
    }
    operator delete(*(void **)a1);
  }
  return a1;
}


//======================================================================
// std::deque<ChunkIndex,std::allocator<ChunkIndex>>::pop_front(void)
// address: 0x002B0422   size: 0x2E (46 bytes)
//======================================================================
void __fastcall std::deque<ChunkIndex>::pop_front(int a1)
{
  int v1; // r3
  int v3; // r3
  int *v4; // r2
  int v5; // r2

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == *(_DWORD *)(a1 + 16) - 8 )
  {
    operator delete(*(void **)(a1 + 12));
    v4 = (int *)(*(_DWORD *)(a1 + 20) + 4);
    *(_DWORD *)(a1 + 20) = v4;
    v3 = *v4;
    v5 = *v4 + 512;
    *(_DWORD *)(a1 + 12) = v3;
    *(_DWORD *)(a1 + 16) = v5;
  }
  else
  {
    v3 = v1 + 8;
  }
  *(_DWORD *)(a1 + 8) = v3;
}


//======================================================================
// std::deque<Chunk *,std::allocator<Chunk *>>::push_back(Chunk * const&)
// address: 0x002B1040   size: 0x100 (256 bytes)
//======================================================================
__int64 __fastcall std::deque<Chunk *>::push_back(__int64 a1)
{
  _DWORD *v1; // r3
  __int64 v2; // kr00_8
  int v3; // r3
  unsigned int v4; // r3
  int *v5; // r6
  int v6; // r5
  int *v7; // r5
  int v8; // r1
  int v9; // r1
  int v10; // r2
  unsigned int v11; // r6
  int v12; // r0
  int v13; // r3
  int *v14; // r5
  int v15; // r3
  int v16; // r5
  _DWORD *v17; // r3
  int *v18; // r2
  int v19; // r2
  __int64 v21; // [sp+0h] [bp-Ch]

  v21 = a1;
  v1 = *(_DWORD **)(a1 + 24);
  v2 = a1;
  if ( v1 == (_DWORD *)(*(_DWORD *)(a1 + 32) - 4) )
  {
    HIDWORD(a1) = *(_DWORD *)(a1 + 36);
    v4 = *(_DWORD *)(a1 + 4);
    if ( v4 - ((HIDWORD(a1) - *(_DWORD *)a1) >> 2) <= 1 )
    {
      v5 = *(int **)(a1 + 20);
      LODWORD(v21) = ((HIDWORD(a1) - (int)v5) >> 2) + 1;
      v6 = ((HIDWORD(a1) - (int)v5) >> 2) + 2;
      if ( v4 <= 2 * v6 )
      {
        v10 = 1;
        if ( v4 != 0 )
          v10 = *(_DWORD *)(a1 + 4);
        v11 = v4 + 2 + v10;
        if ( v11 > 0x3FFFFFFF )
          sub_3BCEB4(2 * v6);
        v12 = operator new(4 * v11);
        v7 = (int *)(v12 + 4 * ((v11 - v6) >> 1));
        HIDWORD(v21) = v12;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Chunk **>(
          *(void **)(v2 + 20),
          *(_DWORD *)(v2 + 36) + 4,
          v7);
        operator delete(*(void **)v2);
        *(_DWORD *)(v2 + 4) = v11;
        *(_DWORD *)v2 = HIDWORD(v21);
      }
      else
      {
        v7 = (int *)(*(_DWORD *)a1 + 4 * ((v4 - v6) >> 1));
        v8 = HIDWORD(a1) + 4;
        if ( v7 >= v5 )
        {
          v9 = v8 - (_DWORD)v5;
          if ( v9 >> 2 != 0 )
            j_memmove(&v7[v21 - (v9 >> 2)], v5, 4 * (v9 >> 2));
        }
        else
        {
          std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Chunk **>(v5, v8, v7);
        }
      }
      *(_DWORD *)(v2 + 20) = v7;
      v13 = *v7;
      *(_DWORD *)(v2 + 12) = *v7;
      *(_DWORD *)(v2 + 16) = v13 + 512;
      v14 = &v7[v21 - 1];
      *(_DWORD *)(v2 + 36) = v14;
      v15 = *v14;
      *(_DWORD *)(v2 + 28) = *v14;
      *(_DWORD *)(v2 + 32) = v15 + 512;
    }
    v16 = *(_DWORD *)(v2 + 36);
    *(_DWORD *)(v16 + 4) = operator new(0x200u);
    v17 = *(_DWORD **)(v2 + 24);
    if ( v17 != nullptr )
      *v17 = *(_DWORD *)HIDWORD(v2);
    v18 = (int *)(*(_DWORD *)(v2 + 36) + 4);
    *(_DWORD *)(v2 + 36) = v18;
    v3 = *v18;
    v19 = *v18 + 512;
    *(_DWORD *)(v2 + 28) = v3;
    *(_DWORD *)(v2 + 32) = v19;
  }
  else
  {
    if ( v1 != nullptr )
      *v1 = *(_DWORD *)HIDWORD(a1);
    v3 = *(_DWORD *)(a1 + 24) + 4;
  }
  *(_DWORD *)(v2 + 24) = v3;
  return v21;
}


//======================================================================
// std::deque<ClientWorld::ParticleEffect,std::allocator<ClientWorld::ParticleEffect>>::pop_front(void)
// address: 0x002B1C42   size: 0x2E (46 bytes)
//======================================================================
void __fastcall std::deque<ClientWorld::ParticleEffect>::pop_front(int a1)
{
  int v1; // r3
  int v3; // r3
  int *v4; // r2
  int v5; // r2

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == *(_DWORD *)(a1 + 16) - 8 )
  {
    operator delete(*(void **)(a1 + 12));
    v4 = (int *)(*(_DWORD *)(a1 + 20) + 4);
    *(_DWORD *)(a1 + 20) = v4;
    v3 = *v4;
    v5 = *v4 + 512;
    *(_DWORD *)(a1 + 12) = v3;
    *(_DWORD *)(a1 + 16) = v5;
  }
  else
  {
    v3 = v1 + 8;
  }
  *(_DWORD *)(a1 + 8) = v3;
}


//======================================================================
// std::deque<ClientWorld::ParticleEffect,std::allocator<ClientWorld::ParticleEffect>>::erase(std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>)
// address: 0x002B25B0   size: 0x11C (284 bytes)
//======================================================================
_DWORD *__fastcall std::deque<ClientWorld::ParticleEffect>::erase(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  char *v5; // r0
  int *v6; // r3
  int v7; // r3
  _DWORD *v8; // r0
  _DWORD *v10; // [sp+Ch] [bp-60h]
  unsigned int v11; // [sp+10h] [bp-5Ch]
  _DWORD v13[4]; // [sp+18h] [bp-54h] BYREF
  int v14[4]; // [sp+28h] [bp-44h] BYREF
  int v15[4]; // [sp+38h] [bp-34h] BYREF
  int v16[4]; // [sp+48h] [bp-24h] BYREF
  _DWORD v17[5]; // [sp+58h] [bp-14h] BYREF

  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    v14,
    a3);
  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::operator++(v14);
  v10 = a2 + 2;
  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    v17,
    a2 + 2);
  v11 = std::operator-<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>(a3, v17);
  if ( v11 >= (unsigned int)std::operator-<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>(
                              a2 + 6,
                              a2 + 2) >> 1 )
  {
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      v17,
      a2 + 6);
    if ( v14[0] != v17[0] )
    {
      std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
        v16,
        v14);
      std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
        v15,
        a2 + 6);
      std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
        v17,
        a3);
      std::move<ClientWorld::ParticleEffect>(v13, (int)v16, v15, v17);
    }
    v5 = (char *)a2[6];
    if ( v5 == (char *)a2[7] )
    {
      operator delete(v5);
      v6 = (int *)(a2[9] - 4);
      a2[9] = v6;
      v7 = *v6;
      a2[7] = v7;
      a2[8] = v7 + 512;
      a2[6] = v7 + 504;
    }
    else
    {
      a2[6] = v5 - 8;
    }
  }
  else
  {
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      v17,
      v10);
    if ( *a3 != v17[0] )
    {
      std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
        v15,
        v10);
      std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
        v16,
        a3);
      std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
        v17,
        v14);
      std::move_backward<ClientWorld::ParticleEffect>(v13, v15, v16, v17);
    }
    std::deque<ClientWorld::ParticleEffect>::pop_front((int)a2);
  }
  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    v16,
    v10);
  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    v17,
    v16);
  v8 = std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::operator+=(
         v17,
         v11);
  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    a1,
    v8);
  return a1;
}


//======================================================================
// std::deque<ClientWorld::ParticleEffect,std::allocator<ClientWorld::ParticleEffect>>::_M_reallocate_map(unsigned int,bool)
// address: 0x002B2758   size: 0xD0 (208 bytes)
//======================================================================
int __fastcall std::deque<ClientWorld::ParticleEffect>::_M_reallocate_map(int a1, unsigned int a2, int a3)
{
  int *v4; // r3
  int v5; // r1
  unsigned int v7; // r0
  unsigned int v8; // r7
  int v9; // r2
  unsigned int v10; // r7
  int *v11; // r7
  int v12; // r1
  unsigned int v13; // r3
  unsigned int v14; // r6
  int v15; // r0
  int v16; // r3
  unsigned int v17; // r7
  int v18; // r3
  int *v20; // r7
  int v21; // r3
  int v23; // [sp+8h] [bp-Ch]
  int v24; // [sp+Ch] [bp-8h]

  v4 = *(int **)(a1 + 20);
  v5 = *(_DWORD *)(a1 + 36);
  v7 = *(_DWORD *)(a1 + 4);
  v23 = ((v5 - (int)v4) >> 2) + 1;
  v8 = v23 + a2;
  if ( v7 <= 2 * (v23 + a2) )
  {
    v13 = a2;
    if ( a2 < v7 )
      v13 = v7;
    v14 = v7 + 2 + v13;
    if ( v14 > 0x3FFFFFFF )
      sub_3BCEB4(v7);
    v15 = operator new(4 * v14);
    v16 = 0;
    v24 = v15;
    v17 = 4 * ((v14 - v8) >> 1);
    if ( a3 != 0 )
      v16 = 4 * a2;
    v11 = (int *)(v15 + v16 + v17);
    std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<ClientWorld::ParticleEffect *>(
      *(void **)(a1 + 20),
      *(_DWORD *)(a1 + 36) + 4,
      v11);
    operator delete(*(void **)a1);
    *(_DWORD *)(a1 + 4) = v14;
    *(_DWORD *)a1 = v24;
  }
  else
  {
    v9 = 0;
    v10 = 4 * ((v7 - v8) >> 1);
    if ( a3 != 0 )
      v9 = 4 * a2;
    v11 = (int *)(*(_DWORD *)a1 + v9 + v10);
    v12 = v5 + 4;
    if ( v11 >= v4 )
    {
      if ( (v12 - (int)v4) >> 2 != 0 )
        j_memmove(&v11[v23 - ((v12 - (int)v4) >> 2)], v4, 4 * ((v12 - (int)v4) >> 2));
    }
    else
    {
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<ClientWorld::ParticleEffect *>(
        v4,
        v12,
        v11);
    }
  }
  *(_DWORD *)(a1 + 20) = v11;
  v18 = *v11;
  *(_DWORD *)(a1 + 12) = *v11;
  *(_DWORD *)(a1 + 16) = v18 + 512;
  v20 = &v11[v23 - 1];
  *(_DWORD *)(a1 + 36) = v20;
  v21 = *v20;
  *(_DWORD *)(a1 + 28) = *v20;
  *(_DWORD *)(a1 + 32) = v21 + 512;
  return 0x3FFFFFFF;
}


//======================================================================
// std::deque<ClientWorld::ParticleEffect,std::allocator<ClientWorld::ParticleEffect>>::_M_reserve_map_at_front(unsigned int)
// address: 0x002B282C   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall std::deque<ClientWorld::ParticleEffect>::_M_reserve_map_at_front(_DWORD *result, unsigned int a2)
{
  if ( a2 > (result[5] - *result) >> 2 )
    return (_DWORD *)std::deque<ClientWorld::ParticleEffect>::_M_reallocate_map((int)result, a2, 1);
  return result;
}


//======================================================================
// std::deque<ClientWorld::ParticleEffect,std::allocator<ClientWorld::ParticleEffect>>::_M_reserve_map_at_back(unsigned int)
// address: 0x002B2842   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall std::deque<ClientWorld::ParticleEffect>::_M_reserve_map_at_back(_DWORD *result, unsigned int a2)
{
  if ( a2 + 1 > result[1] - ((result[9] - *result) >> 2) )
    return (_DWORD *)std::deque<ClientWorld::ParticleEffect>::_M_reallocate_map((int)result, a2, 0);
  return result;
}


//======================================================================
// std::deque<ClientWorld::ParticleEffect,std::allocator<ClientWorld::ParticleEffect>>::insert(std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>,ClientWorld::ParticleEffect const&)
// address: 0x002B2A6E   size: 0x106 (262 bytes)
//======================================================================
_DWORD *__fastcall std::deque<ClientWorld::ParticleEffect>::insert(_DWORD *a1, _DWORD *a2, int **a3, int *a4)
{
  int *v6; // r3
  int *v8; // r3
  int v9; // r6
  int *v10; // r3
  int v11; // r3
  _DWORD *v12; // r1
  _DWORD *v13; // r0
  int v14; // r3
  int *v15; // r3
  int *v16; // r2
  int v17; // r2
  int v19; // [sp+4h] [bp-18h]
  _DWORD v20[5]; // [sp+8h] [bp-14h] BYREF

  v6 = *a3;
  if ( *a3 == (int *)a2[2] )
  {
    if ( v6 == (int *)a2[3] )
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
        *(_DWORD *)(v11 + 504) = *a4;
        *(_DWORD *)(v11 + 508) = a4[1];
      }
    }
    else
    {
      v8 = v6 - 2;
      if ( v8 != nullptr )
      {
        *v8 = *a4;
        v8[1] = a4[1];
      }
      a2[2] -= 8;
    }
    v12 = a2 + 2;
    v13 = a1;
  }
  else
  {
    if ( v6 != (int *)a2[6] )
    {
      std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
        v20,
        a3);
      std::deque<ClientWorld::ParticleEffect>::_M_insert_aux<ClientWorld::ParticleEffect const&>(a1, a2, v20, a4);
      return a1;
    }
    if ( v6 == (int *)(a2[8] - 8) )
    {
      std::deque<ClientWorld::ParticleEffect>::_M_reserve_map_at_back(a2, 1u);
      v19 = a2[9];
      *(_DWORD *)(v19 + 4) = operator new(0x200u);
      v15 = (int *)a2[6];
      if ( v15 != nullptr )
      {
        *v15 = *a4;
        v15[1] = a4[1];
      }
      v16 = (int *)(a2[9] + 4);
      a2[9] = v16;
      v14 = *v16;
      v17 = *v16 + 512;
      a2[7] = v14;
      a2[8] = v17;
    }
    else
    {
      if ( v6 != nullptr )
      {
        *v6 = *a4;
        v6[1] = a4[1];
      }
      v14 = a2[6] + 8;
    }
    a2[6] = v14;
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      v20,
      a2 + 6);
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::operator--(v20);
    v13 = a1;
    v12 = v20;
  }
  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    v13,
    v12);
  return a1;
}


//======================================================================
// std::deque<CullStep,std::allocator<CullStep>>::~deque()
// address: 0x002CEE76   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZNSt5dequeI8CullStepSaIS0_EED1Ev'
int __fastcall std::deque<CullStep>::~deque(int a1)
{
  void **v2; // r5
  unsigned int v3; // r6
  void *v4; // r0
  _DWORD v6[4]; // [sp+0h] [bp-20h] BYREF
  _DWORD v7[4]; // [sp+10h] [bp-10h] BYREF

  std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(v6, (_DWORD *)(a1 + 8));
  std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(v7, (_DWORD *)(a1 + 24));
  if ( *(_DWORD *)a1 != 0 )
  {
    v2 = *(void ***)(a1 + 20);
    v3 = *(_DWORD *)(a1 + 36) + 4;
    while ( (unsigned int)v2 < v3 )
    {
      v4 = *v2++;
      operator delete(v4);
    }
    operator delete(*(void **)a1);
  }
  return a1;
}


//======================================================================
// std::deque<CullStep,std::allocator<CullStep>>::size(void)const
// address: 0x002CEF84   size: 0x24 (36 bytes)
//======================================================================
int __fastcall std::deque<CullStep>::size(_DWORD *a1)
{
  return 32 * (((a1[9] - a1[5]) >> 2) - 1) + ((a1[6] - a1[7]) >> 4) + ((a1[4] - a1[2]) >> 4);
}


//======================================================================
// std::deque<CullStep,std::allocator<CullStep>>::_M_reserve_map_at_back(unsigned int)
// address: 0x002CFA00   size: 0xBA (186 bytes)
//======================================================================
__int64 __fastcall std::deque<CullStep>::_M_reserve_map_at_back(__int64 a1)
{
  int v1; // r4
  unsigned int v2; // r3
  int v3; // r2
  int *v4; // r7
  int v5; // r5
  int *v6; // r5
  int v7; // r1
  unsigned int v8; // r6
  int v9; // r0
  int v10; // r7
  int v11; // r3
  int *v12; // r5
  int v13; // r3
  __int64 v15; // [sp+0h] [bp-Ch]

  v15 = a1;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 36);
  LODWORD(a1) = *(_DWORD *)a1;
  if ( HIDWORD(a1) + 1 > v2 - ((v3 - (int)a1) >> 2) )
  {
    v4 = *(int **)(v1 + 20);
    HIDWORD(v15) = ((v3 - (int)v4) >> 2) + 1;
    v5 = HIDWORD(v15) + HIDWORD(a1);
    if ( v2 <= 2 * (HIDWORD(v15) + HIDWORD(a1)) )
    {
      if ( HIDWORD(a1) < v2 )
        HIDWORD(a1) = v2;
      v8 = v2 + 2 + HIDWORD(a1);
      if ( v8 > 0x3FFFFFFF )
        sub_3BCEB4(a1);
      v9 = operator new(4 * v8);
      v6 = (int *)(v9 + 4 * ((v8 - v5) >> 1));
      v10 = v9;
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<CullStep *>(
        *(void **)(v1 + 20),
        *(_DWORD *)(v1 + 36) + 4,
        v6);
      operator delete(*(void **)v1);
      *(_DWORD *)v1 = v10;
      *(_DWORD *)(v1 + 4) = v8;
    }
    else
    {
      v6 = (int *)(a1 + 4 * ((v2 - v5) >> 1));
      v7 = v3 + 4;
      if ( v6 >= v4 )
      {
        if ( (v7 - (int)v4) >> 2 != 0 )
          j_memmove(&v6[HIDWORD(v15) - ((v7 - (int)v4) >> 2)], v4, 4 * ((v7 - (int)v4) >> 2));
      }
      else
      {
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<CullStep *>(v4, v7, v6);
      }
    }
    *(_DWORD *)(v1 + 20) = v6;
    v11 = *v6;
    *(_DWORD *)(v1 + 12) = *v6;
    *(_DWORD *)(v1 + 16) = v11 + 512;
    v12 = &v6[HIDWORD(v15) - 1];
    *(_DWORD *)(v1 + 36) = v12;
    v13 = *v12;
    *(_DWORD *)(v1 + 28) = *v12;
    *(_DWORD *)(v1 + 32) = v13 + 512;
  }
  return v15;
}


//======================================================================
// std::deque<CullStep,std::allocator<CullStep>>::_M_new_elements_at_back(unsigned int)
// address: 0x002CFAC0   size: 0x66 (102 bytes)
//======================================================================
int __fastcall std::deque<CullStep>::_M_new_elements_at_back(_DWORD *a1, unsigned int a2)
{
  unsigned int v4; // r5
  int result; // r0
  unsigned int i; // r4
  _DWORD *v7; // r7

  if ( 0xFFFFFFF - std::deque<CullStep>::size(a1) < a2 )
    sub_3BD058("deque::_M_new_elements_at_back");
  v4 = (a2 + 31) >> 5;
  result = std::deque<CullStep>::_M_reserve_map_at_back(__SPAIR64__(v4, (unsigned int)a1));
  for ( i = 1; i <= v4; ++i )
  {
    v7 = (_DWORD *)(a1[9] + 4 * i);
    result = operator new(0x200u);
    *v7 = result;
  }
  return result;
}


//======================================================================
// std::deque<CullStep,std::allocator<CullStep>>::_M_default_append(unsigned int)
// address: 0x002CFB30   size: 0xB6 (182 bytes)
//======================================================================
int __fastcall std::deque<CullStep>::_M_default_append(__int64 a1)
{
  __int64 v1; // r4
  _DWORD *v2; // r0
  __int128 v4; // [sp+8h] [bp-A4h] BYREF
  _DWORD v5[4]; // [sp+18h] [bp-94h] BYREF
  _DWORD v6[4]; // [sp+28h] [bp-84h] BYREF
  _DWORD v7[4]; // [sp+38h] [bp-74h] BYREF
  _DWORD v8[4]; // [sp+48h] [bp-64h] BYREF
  _DWORD v9[4]; // [sp+58h] [bp-54h] BYREF
  _DWORD v10[4]; // [sp+68h] [bp-44h] BYREF
  _DWORD v11[4]; // [sp+78h] [bp-34h] BYREF
  _DWORD v12[4]; // [sp+88h] [bp-24h] BYREF
  _DWORD v13[5]; // [sp+98h] [bp-14h] BYREF

  v1 = a1;
  if ( HIDWORD(a1) != 0 )
  {
    HIDWORD(a1) = ((*(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 24)) >> 4) - 1;
    if ( HIDWORD(v1) > HIDWORD(a1) )
      std::deque<CullStep>::_M_new_elements_at_back((_DWORD *)a1, HIDWORD(v1) - HIDWORD(a1));
    std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(v13, (_DWORD *)(v1 + 24));
    v2 = std::_Deque_iterator<CullStep,CullStep&,CullStep*>::operator+=(v13, SHIDWORD(v1));
    std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(&v4, v2);
    std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(v5, (_DWORD *)(v1 + 24));
    std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(v6, &v4);
    std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(v7, v5);
    std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(v8, v6);
    std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(v10, v7);
    std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(v9, v8);
    std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(v13, v10);
    std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(v12, v9);
    j_memset(v11, 0, sizeof(v11));
    std::fill<std::_Deque_iterator<CullStep,CullStep&,CullStep*>,CullStep>(v13, v12, v11);
    a1 = v4;
    *(_OWORD *)(v1 + 24) = v4;
  }
  return a1;
}


//======================================================================
// std::deque<CullStep,std::allocator<CullStep>>::resize(unsigned int)
// address: 0x002CFBE6   size: 0x72 (114 bytes)
//======================================================================
unsigned int __fastcall std::deque<CullStep>::resize(_DWORD *a1, unsigned int a2)
{
  unsigned int result; // r0
  __int64 v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r5
  void **v8; // r7
  unsigned int v9; // r6
  void *v10; // r0
  int v11; // r1
  int v12; // r2
  _DWORD v13[3]; // [sp+0h] [bp-34h] BYREF
  int v14; // [sp+Ch] [bp-28h]
  _DWORD v15[4]; // [sp+10h] [bp-24h] BYREF
  _DWORD v16[5]; // [sp+20h] [bp-14h] BYREF

  result = std::deque<CullStep>::size(a1);
  if ( a2 <= result )
  {
    if ( a2 < result )
    {
      std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(v16, a1 + 2);
      v6 = std::_Deque_iterator<CullStep,CullStep&,CullStep*>::operator+=(v16, a2);
      std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(v13, v6);
      v7 = a1 + 6;
      std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(v16, v13);
      std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(v15, a1 + 6);
      v8 = (void **)(v14 + 4);
      v9 = a1[9] + 4;
      while ( (unsigned int)v8 < v9 )
      {
        v10 = *v8++;
        operator delete(v10);
      }
      result = v13[0];
      v11 = v13[1];
      v12 = v13[2];
      *v7 = v13[0];
      v7[1] = v11;
      v7[2] = v12;
      v7[3] = v14;
    }
  }
  else
  {
    HIDWORD(v5) = a2 - result;
    LODWORD(v5) = a1;
    return std::deque<CullStep>::_M_default_append(v5);
  }
  return result;
}


//======================================================================
// std::deque<CullStep,std::allocator<CullStep>>::push_back(CullStep const&)
// address: 0x002CFC58   size: 0x5C (92 bytes)
//======================================================================
int __fastcall std::deque<CullStep>::push_back(__int64 a1)
{
  _DWORD *v1; // r3
  __int64 v2; // r4
  int v3; // r6
  int v4; // r3
  int v5; // r6
  _DWORD *v6; // r3
  int v7; // r1
  int v8; // r6
  int *v9; // r2
  int v10; // r2

  v1 = *(_DWORD **)(a1 + 24);
  v2 = a1;
  if ( v1 == (_DWORD *)(*(_DWORD *)(a1 + 32) - 16) )
  {
    HIDWORD(a1) = 1;
    std::deque<CullStep>::_M_reserve_map_at_back(a1);
    v5 = *(_DWORD *)(v2 + 36);
    *(_DWORD *)(v5 + 4) = operator new(0x200u);
    v6 = *(_DWORD **)(v2 + 24);
    if ( v6 != nullptr )
    {
      v7 = *(_DWORD *)(HIDWORD(v2) + 4);
      v8 = *(_DWORD *)(HIDWORD(v2) + 8);
      *v6 = *(_DWORD *)HIDWORD(v2);
      v6[1] = v7;
      v6[2] = v8;
      v6[3] = *(_DWORD *)(HIDWORD(v2) + 12);
    }
    LODWORD(a1) = 512;
    v9 = (int *)(*(_DWORD *)(v2 + 36) + 4);
    *(_DWORD *)(v2 + 36) = v9;
    v4 = *v9;
    v10 = *v9 + 512;
    *(_DWORD *)(v2 + 28) = v4;
    *(_DWORD *)(v2 + 32) = v10;
  }
  else
  {
    if ( v1 != nullptr )
    {
      a1 = *(_QWORD *)HIDWORD(a1);
      v3 = *(_DWORD *)(HIDWORD(v2) + 8);
      *v1 = *(_DWORD *)HIDWORD(v2);
      v1[1] = HIDWORD(a1);
      v1[2] = v3;
      v1[3] = *(_DWORD *)(HIDWORD(v2) + 12);
    }
    v4 = *(_DWORD *)(v2 + 24) + 16;
  }
  *(_DWORD *)(v2 + 24) = v4;
  return a1;
}


//======================================================================
// std::deque<LightingArea *,std::allocator<LightingArea *>>::~deque()
// address: 0x002E3ADC   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZNSt5dequeIP12LightingAreaSaIS1_EED1Ev'
int __fastcall std::deque<LightingArea *>::~deque(int a1)
{
  void **v2; // r5
  unsigned int v3; // r6
  void *v4; // r0

  v2 = *(void ***)(a1 + 20);
  if ( *(_DWORD *)a1 != 0 )
  {
    v3 = *(_DWORD *)(a1 + 36) + 4;
    while ( (unsigned int)v2 < v3 )
    {
      v4 = *v2++;
      operator delete(v4);
    }
    operator delete(*(void **)a1);
  }
  return a1;
}


//======================================================================
// std::deque<LightingArea *,std::allocator<LightingArea *>>::pop_front(void)
// address: 0x002E3B4A   size: 0x2E (46 bytes)
//======================================================================
void __fastcall std::deque<LightingArea *>::pop_front(int a1)
{
  int v1; // r3
  int v3; // r3
  int *v4; // r2
  int v5; // r2

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == *(_DWORD *)(a1 + 16) - 4 )
  {
    operator delete(*(void **)(a1 + 12));
    v4 = (int *)(*(_DWORD *)(a1 + 20) + 4);
    *(_DWORD *)(a1 + 20) = v4;
    v3 = *v4;
    v5 = *v4 + 512;
    *(_DWORD *)(a1 + 12) = v3;
    *(_DWORD *)(a1 + 16) = v5;
  }
  else
  {
    v3 = v1 + 4;
  }
  *(_DWORD *)(a1 + 8) = v3;
}


//======================================================================
// std::deque<LightingArea *,std::allocator<LightingArea *>>::push_back(LightingArea * const&)
// address: 0x002E3D20   size: 0x100 (256 bytes)
//======================================================================
__int64 __fastcall std::deque<LightingArea *>::push_back(__int64 a1)
{
  _DWORD *v1; // r3
  __int64 v2; // kr00_8
  int v3; // r3
  unsigned int v4; // r3
  int *v5; // r6
  int v6; // r5
  int *v7; // r5
  int v8; // r1
  int v9; // r1
  int v10; // r2
  unsigned int v11; // r6
  int v12; // r0
  int v13; // r3
  int *v14; // r5
  int v15; // r3
  int v16; // r5
  _DWORD *v17; // r3
  int *v18; // r2
  int v19; // r2
  __int64 v21; // [sp+0h] [bp-Ch]

  v21 = a1;
  v1 = *(_DWORD **)(a1 + 24);
  v2 = a1;
  if ( v1 == (_DWORD *)(*(_DWORD *)(a1 + 32) - 4) )
  {
    HIDWORD(a1) = *(_DWORD *)(a1 + 36);
    v4 = *(_DWORD *)(a1 + 4);
    if ( v4 - ((HIDWORD(a1) - *(_DWORD *)a1) >> 2) <= 1 )
    {
      v5 = *(int **)(a1 + 20);
      LODWORD(v21) = ((HIDWORD(a1) - (int)v5) >> 2) + 1;
      v6 = ((HIDWORD(a1) - (int)v5) >> 2) + 2;
      if ( v4 <= 2 * v6 )
      {
        v10 = 1;
        if ( v4 != 0 )
          v10 = *(_DWORD *)(a1 + 4);
        v11 = v4 + 2 + v10;
        if ( v11 > 0x3FFFFFFF )
          sub_3BCEB4(2 * v6);
        v12 = operator new(4 * v11);
        v7 = (int *)(v12 + 4 * ((v11 - v6) >> 1));
        HIDWORD(v21) = v12;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<LightingArea **>(
          *(void **)(v2 + 20),
          *(_DWORD *)(v2 + 36) + 4,
          v7);
        operator delete(*(void **)v2);
        *(_DWORD *)(v2 + 4) = v11;
        *(_DWORD *)v2 = HIDWORD(v21);
      }
      else
      {
        v7 = (int *)(*(_DWORD *)a1 + 4 * ((v4 - v6) >> 1));
        v8 = HIDWORD(a1) + 4;
        if ( v7 >= v5 )
        {
          v9 = v8 - (_DWORD)v5;
          if ( v9 >> 2 != 0 )
            j_memmove(&v7[v21 - (v9 >> 2)], v5, 4 * (v9 >> 2));
        }
        else
        {
          std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<LightingArea **>(v5, v8, v7);
        }
      }
      *(_DWORD *)(v2 + 20) = v7;
      v13 = *v7;
      *(_DWORD *)(v2 + 12) = *v7;
      *(_DWORD *)(v2 + 16) = v13 + 512;
      v14 = &v7[v21 - 1];
      *(_DWORD *)(v2 + 36) = v14;
      v15 = *v14;
      *(_DWORD *)(v2 + 28) = *v14;
      *(_DWORD *)(v2 + 32) = v15 + 512;
    }
    v16 = *(_DWORD *)(v2 + 36);
    *(_DWORD *)(v16 + 4) = operator new(0x200u);
    v17 = *(_DWORD **)(v2 + 24);
    if ( v17 != nullptr )
      *v17 = *(_DWORD *)HIDWORD(v2);
    v18 = (int *)(*(_DWORD *)(v2 + 36) + 4);
    *(_DWORD *)(v2 + 36) = v18;
    v3 = *v18;
    v19 = *v18 + 512;
    *(_DWORD *)(v2 + 28) = v3;
    *(_DWORD *)(v2 + 32) = v19;
  }
  else
  {
    if ( v1 != nullptr )
      *v1 = *(_DWORD *)HIDWORD(a1);
    v3 = *(_DWORD *)(a1 + 24) + 4;
  }
  *(_DWORD *)(v2 + 24) = v3;
  return v21;
}


//======================================================================
// std::deque<tagShareSaveTask *,std::allocator<tagShareSaveTask *>>::~deque()
// address: 0x003089F0   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZNSt5dequeIP16tagShareSaveTaskSaIS1_EED1Ev'
int __fastcall std::deque<tagShareSaveTask *>::~deque(int a1)
{
  void **v2; // r5
  unsigned int v3; // r6
  void *v4; // r0

  v2 = *(void ***)(a1 + 20);
  if ( *(_DWORD *)a1 != 0 )
  {
    v3 = *(_DWORD *)(a1 + 36) + 4;
    while ( (unsigned int)v2 < v3 )
    {
      v4 = *v2++;
      operator delete(v4);
    }
    operator delete(*(void **)a1);
  }
  return a1;
}


//======================================================================
// std::deque<tagInitResult *,std::allocator<tagInitResult *>>::~deque()
// address: 0x00308A16   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZNSt5dequeIP13tagInitResultSaIS1_EED1Ev'
int __fastcall std::deque<tagInitResult *>::~deque(int a1)
{
  void **v2; // r5
  unsigned int v3; // r6
  void *v4; // r0

  v2 = *(void ***)(a1 + 20);
  if ( *(_DWORD *)a1 != 0 )
  {
    v3 = *(_DWORD *)(a1 + 36) + 4;
    while ( (unsigned int)v2 < v3 )
    {
      v4 = *v2++;
      operator delete(v4);
    }
    operator delete(*(void **)a1);
  }
  return a1;
}


//======================================================================
// std::deque<tagLoadResult *,std::allocator<tagLoadResult *>>::~deque()
// address: 0x00308A3C   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZNSt5dequeIP13tagLoadResultSaIS1_EED1Ev'
int __fastcall std::deque<tagLoadResult *>::~deque(int a1)
{
  void **v2; // r5
  unsigned int v3; // r6
  void *v4; // r0

  v2 = *(void ***)(a1 + 20);
  if ( *(_DWORD *)a1 != 0 )
  {
    v3 = *(_DWORD *)(a1 + 36) + 4;
    while ( (unsigned int)v2 < v3 )
    {
      v4 = *v2++;
      operator delete(v4);
    }
    operator delete(*(void **)a1);
  }
  return a1;
}

