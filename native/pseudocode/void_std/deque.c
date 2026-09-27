// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::deque

//======================================================================
// void std::deque<Ogre::TVector2<int>,std::allocator<Ogre::TVector2<int>>>::_M_insert_aux<std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>>(std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>,std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>,std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>,unsigned int)
// address: 0x001B6E68   size: 0x458 (1112 bytes)
//======================================================================
_DWORD *__fastcall std::deque<Ogre::TVector2<int>>::_M_insert_aux<std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>>(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        signed int a8)
{
  _DWORD *v9; // r7
  int v10; // r5
  unsigned int v11; // r4
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  int v14; // r3
  int v16; // r5
  int v17; // r3
  int v18; // r1
  unsigned int v19; // r4
  int i; // r4
  _DWORD *v21; // r3
  _DWORD *v22; // r2
  int v23; // r5
  int v24; // r1
  int j; // r1
  int v26; // [sp+0h] [bp-114h]
  __int128 v27; // [sp+4h] [bp-110h]
  __int128 *v28; // [sp+14h] [bp-100h]
  _DWORD *v29; // [sp+20h] [bp-F4h]
  _DWORD *v31; // [sp+38h] [bp-DCh]
  int v32[4]; // [sp+40h] [bp-D4h] BYREF
  __int128 v33; // [sp+50h] [bp-C4h] BYREF
  __int128 v34; // [sp+60h] [bp-B4h] BYREF
  __int128 v35; // [sp+70h] [bp-A4h] BYREF
  __int64 v36; // [sp+80h] [bp-94h] BYREF
  __int64 v37; // [sp+88h] [bp-8Ch]
  _DWORD v38[4]; // [sp+90h] [bp-84h] BYREF
  _DWORD v39[4]; // [sp+A0h] [bp-74h] BYREF
  __int128 v40; // [sp+B0h] [bp-64h] BYREF
  __int64 v41; // [sp+C0h] [bp-54h] BYREF
  __int64 v42; // [sp+C8h] [bp-4Ch]
  __int128 v43; // [sp+D0h] [bp-44h] BYREF
  __int128 v44; // [sp+E0h] [bp-34h] BYREF
  __int128 v45; // [sp+F0h] [bp-24h] BYREF
  _QWORD var14[4]; // [sp+100h] [bp-14h] BYREF
  __int64 varg_r2; // [sp+128h] [bp+14h]

  v29 = a1 + 2;
  v9 = a1 + 6;
  v10 = std::operator-<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>((_DWORD *)a2, a1 + 2);
  v11 = std::operator-<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>(v9, v29);
  if ( v10 < v11 >> 1 )
  {
    std::deque<Ogre::TVector2<int>>::_M_reserve_elements_at_front(&v34, a1, a8);
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(&v35, v29);
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(var14, v29);
    v12 = std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator+=(var14, v10);
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(&v45, v12);
    *(_OWORD *)a2 = v45;
    if ( v10 < a8 )
    {
      v36 = varg_r2;
      v37 = a5;
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>::operator+=(
        &v36,
        a8 - v10);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v38, v29);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(
        v39,
        (_DWORD *)a2);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(&v40, &v34);
      v41 = varg_r2;
      v42 = a5;
      v31 = (_DWORD *)v36;
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(var14, v38);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(&v45, v39);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(&v44, &v40);
      sub_1B6B92((int *)&v43, var14, &v45, &v44);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(var14, &v43);
      sub_1B6A56((int *)&v44, v41, SHIDWORD(v41), v42, SHIDWORD(v42), v31, var14);
      *(_OWORD *)v29 = v34;
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(var14, &v35);
      return std::copy<Ogre::TVector2<int>>(
               v32,
               v36,
               SHIDWORD(v36),
               v37,
               SHIDWORD(v37),
               a6,
               SHIDWORD(a6),
               a7,
               SHIDWORD(a7),
               var14);
    }
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(var14, v29);
    v13 = std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator+=(var14, a8);
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v39, v13);
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(&v44, v29);
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(&v45, v39);
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(var14, &v34);
    sub_1B6B92(v32, &v44, &v45, var14);
    *(_OWORD *)v29 = v34;
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(&v40, v39);
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(
      &v41,
      (_DWORD *)a2);
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(&v43, &v35);
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>::_Deque_iterator(
      var14,
      &v40);
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>::_Deque_iterator(
      &v45,
      &v41);
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(&v44, &v43);
    std::copy<Ogre::TVector2<int>>(
      v38,
      var14[0],
      SHIDWORD(var14[0]),
      var14[1],
      SHIDWORD(var14[1]),
      v45,
      SDWORD1(v45),
      SDWORD2(v45),
      SHIDWORD(v45),
      &v44);
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator-(
      var14,
      (_DWORD *)a2,
      a8,
      v14);
    *(_QWORD *)&v27 = a6;
    *((_QWORD *)&v27 + 1) = a7;
    v28 = (__int128 *)var14;
    v26 = HIDWORD(a5);
  }
  else
  {
    std::deque<Ogre::TVector2<int>>::_M_reserve_elements_at_back(&v33, a1, a8);
    v16 = v11 - v10;
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(&v34, v9);
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator-(var14, v9, v16, v17);
    v18 = HIDWORD(var14[0]);
    v19 = var14[1];
    *(_DWORD *)a2 = var14[0];
    *(_DWORD *)(a2 + 4) = v18;
    *(_QWORD *)(a2 + 8) = __PAIR64__(HIDWORD(var14[1]), v19);
    if ( v16 > a8 )
    {
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator-(
        &v35,
        v9,
        a8,
        a2 + 12);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(&v44, &v35);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(&v45, v9);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(var14, v9);
      sub_1B6B92(v32, &v44, &v45, var14);
      *(_OWORD *)v9 = v33;
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(
        &v36,
        (_DWORD *)a2);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v38, &v35);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(&v40, &v34);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>::_Deque_iterator(
        &v44,
        &v36);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>::_Deque_iterator(
        &v43,
        v38);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(&v41, &v40);
      v45 = v44;
      *(_OWORD *)var14 = v43;
      for ( i = std::operator-<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>(var14, &v45);
            i > 0;
            i -= v23 )
      {
        v21 = (_DWORD *)var14[0];
        v22 = (_DWORD *)v41;
        v23 = (LODWORD(var14[0]) - HIDWORD(var14[0])) >> 3;
        v24 = ((int)v41 - HIDWORD(v41)) >> 3;
        if ( v23 == 0 )
        {
          v23 = 64;
          v21 = (_DWORD *)(*(_DWORD *)(HIDWORD(var14[1]) - 4) + 512);
        }
        if ( v24 == 0 )
        {
          v22 = (_DWORD *)(*(_DWORD *)(HIDWORD(v42) - 4) + 512);
          v24 = 64;
        }
        if ( v23 > i )
          v23 = i;
        if ( v23 > v24 )
          v23 = v24;
        for ( j = (8 * v23) >> 3; j > 0; --j )
        {
          v21 -= 2;
          v22 -= 2;
          *v22 = *v21;
          v22[1] = v21[1];
        }
        std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>::operator+=(
          var14,
          -v23);
        std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator+=(&v41, -v23);
      }
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v39, &v41);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(
        &v44,
        (_DWORD *)a2);
      *(_QWORD *)&v27 = a6;
      *((_QWORD *)&v27 + 1) = a7;
      v28 = &v44;
      v26 = HIDWORD(a5);
    }
    else
    {
      *(_QWORD *)&v35 = varg_r2;
      *((_QWORD *)&v35 + 1) = a5;
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>::operator+=(
        &v35,
        v16);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(
        &v36,
        (_DWORD *)a2);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v38, v9);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v39, v9);
      v40 = v35;
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(var14, v39);
      sub_1B6A56((int *)&v41, v40, SDWORD1(v40), SDWORD2(v40), SHIDWORD(v40), (_DWORD *)a6, var14);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(var14, &v36);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(&v45, v38);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(&v44, &v41);
      sub_1B6B92((int *)&v43, var14, &v45, &v44);
      *(_OWORD *)v9 = v33;
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(
        var14,
        (_DWORD *)a2);
      v27 = v35;
      v28 = (__int128 *)var14;
      v26 = HIDWORD(a5);
    }
  }
  return std::copy<Ogre::TVector2<int>>(
           v32,
           varg_r2,
           SHIDWORD(varg_r2),
           a5,
           v26,
           v27,
           SDWORD1(v27),
           SDWORD2(v27),
           SHIDWORD(v27),
           v28);
}


//======================================================================
// void std::deque<Ogre::TVector2<int>,std::allocator<Ogre::TVector2<int>>>::_M_range_insert_aux<std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>>(std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>,std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>,std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>,std::forward_iterator_tag)
// address: 0x001B72C0   size: 0xEC (236 bytes)
//======================================================================
int __fastcall std::deque<Ogre::TVector2<int>>::_M_range_insert_aux<std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>>(
        int a1,
        _DWORD *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v9; // r0
  signed int v10; // r7
  __int64 v11; // r0
  _DWORD *v12; // r1
  _DWORD *v13; // r4
  int v15[4]; // [sp+28h] [bp-54h] BYREF
  __int128 v16; // [sp+38h] [bp-44h] BYREF
  _DWORD v17[4]; // [sp+48h] [bp-34h] BYREF
  _QWORD v18[2]; // [sp+58h] [bp-24h] BYREF
  _DWORD v19[2]; // [sp+68h] [bp-14h] BYREF
  __int64 v20; // [sp+70h] [bp-Ch]
  int vars14; // [sp+90h] [bp+14h]
  int varg_r3; // [sp+94h] [bp+18h]

  v19[0] = a3;
  vars14 = a3;
  v20 = a5;
  v18[0] = a6;
  v19[1] = a4;
  v18[1] = a7;
  v9 = std::operator-<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>(v18, v19);
  v10 = v9;
  if ( *a2 == *(_DWORD *)(a1 + 8) )
  {
    std::deque<Ogre::TVector2<int>>::_M_reserve_elements_at_front(&v16, (_DWORD *)a1, v9);
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v17, &v16);
    LODWORD(v11) = sub_1B6A56(v15, vars14, varg_r3, a5, SHIDWORD(a5), (_DWORD *)a6, v17);
    *(_OWORD *)(a1 + 8) = v16;
  }
  else if ( *a2 == *(_DWORD *)(a1 + 24) )
  {
    v12 = (_DWORD *)a1;
    v13 = (_DWORD *)(a1 + 24);
    std::deque<Ogre::TVector2<int>>::_M_reserve_elements_at_back(&v16, v12, v9);
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v17, v13);
    sub_1B6A56(v15, vars14, varg_r3, a5, SHIDWORD(a5), (_DWORD *)a6, v17);
    v11 = v16;
    *(_OWORD *)v13 = v16;
  }
  else
  {
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v17, a2);
    LODWORD(v11) = std::deque<Ogre::TVector2<int>>::_M_insert_aux<std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int> const&,Ogre::TVector2<int> const*>>(
                     (_DWORD *)a1,
                     (int)v17,
                     vars14,
                     varg_r3,
                     a5,
                     a6,
                     a7,
                     v10);
  }
  return v11;
}

