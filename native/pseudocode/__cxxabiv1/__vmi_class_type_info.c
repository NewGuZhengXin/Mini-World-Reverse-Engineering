// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: __cxxabiv1::__vmi_class_type_info

//======================================================================
// __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info()
// address: 0x0038F314   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN10__cxxabiv121__vmi_class_type_infoD1Ev'
void __fastcall __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info(__cxxabiv1::__vmi_class_type_info *this)
{
  *(_DWORD *)this = &off_4641B0;
  __cxxabiv1::__class_type_info::~__class_type_info(this);
}


//======================================================================
// __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info()
// address: 0x0038F330   size: 0x12 (18 bytes)
//======================================================================
void __fastcall __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info(__cxxabiv1::__vmi_class_type_info *this)
{
  __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info(this);
  operator delete(this);
}


//======================================================================
// __cxxabiv1::__vmi_class_type_info::__do_find_public_src(int,void const*,__cxxabiv1::__class_type_info const*,void const*)const
// address: 0x0038F344   size: 0x98 (152 bytes)
//======================================================================
int __fastcall __cxxabiv1::__vmi_class_type_info::__do_find_public_src(
        __cxxabiv1::__vmi_class_type_info *this,
        int a2,
        _DWORD *a3,
        const __cxxabiv1::__class_type_info *a4,
        _DWORD *a5)
{
  int v9; // r3
  int v10; // r5
  int *v11; // r4
  _DWORD *v12; // r8
  int v13; // r2
  int v14; // r7
  int result; // r0
  int v16; // r3

  if ( a3 != a5 || (v16 = sub_3BF438(this, a4), result = 6, v16 == 0) )
  {
    v9 = *((_DWORD *)this + 3);
    v10 = v9 - 1;
    v11 = (int *)((char *)this + 8 * v9 + 12);
    v12 = a3;
    while ( 1 )
    {
      if ( v10 == -1 )
        return 1;
      if ( (*v11 & 2) != 0 )
      {
        v13 = *v11 >> 8;
        v14 = *v11 & 1;
        if ( v14 != 0 )
        {
          if ( a2 == -3 )
            goto LABEL_8;
          v13 = *(_DWORD *)(*v12 + v13);
        }
        result = (*(int (__fastcall **)(_DWORD, int, int, const __cxxabiv1::__class_type_info *, _DWORD *))(*(_DWORD *)*(v11 - 1) + 32))(
                   *(v11 - 1),
                   a2,
                   (int)v12 + v13,
                   a4,
                   a5);
        if ( result > 3 )
        {
          if ( v14 != 0 )
            return result | 1;
          return result;
        }
      }
LABEL_8:
      --v10;
      v11 -= 2;
    }
  }
  return result;
}


//======================================================================
// __cxxabiv1::__vmi_class_type_info::__do_dyncast(int,__cxxabiv1::__class_type_info::__sub_kind,__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__dyncast_result &)const
// address: 0x0038F3DC   size: 0x3AE (942 bytes)
//======================================================================
int __fastcall __cxxabiv1::__vmi_class_type_info::__do_dyncast(
        int a1,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        int a6,
        _DWORD *a7,
        int *a8)
{
  int v8; // r3
  int v9; // r7
  int *v10; // r6
  int v11; // r3
  int v12; // r12
  int v13; // r8
  int v14; // r2
  char *v15; // r1
  int v16; // r0
  int v17; // r8
  int v18; // r3
  int v19; // r1
  int v20; // r12
  int v21; // r2
  int v22; // r3
  int v23; // r3
  int v25; // r10
  int v26; // r2
  int v27; // r0
  int v28; // r4
  char *v29; // r11
  int v30; // r0
  int v31; // [sp+20h] [bp-44h]
  int v34; // [sp+2Ch] [bp-38h]
  int v36; // [sp+34h] [bp-30h]
  int v37; // [sp+38h] [bp-2Ch]
  int v39; // [sp+44h] [bp-20h]
  int v40; // [sp+4Ch] [bp-18h] BYREF
  int v41; // [sp+50h] [bp-14h]
  int v42; // [sp+54h] [bp-10h]
  int v43; // [sp+58h] [bp-Ch]
  int v44; // [sp+5Ch] [bp-8h]

  if ( (a8[4] & 0x10) != 0 )
    a8[4] = *(_DWORD *)(a1 + 8);
  if ( a5 == a7 && sub_3BF438(a1, a6) != 0 )
  {
    a8[2] = a3;
    return 0;
  }
  v37 = sub_3BF438(a1, a4);
  if ( v37 != 0 )
  {
    *a8 = (int)a5;
    a8[1] = a3;
    if ( a2 < 0 )
    {
      v37 = 0;
      if ( a2 == -2 )
        a8[3] = 1;
    }
    else
    {
      v23 = 1;
      if ( a7 == (_DWORD *)((char *)a5 + a2) )
        v23 = 6;
      a8[3] = v23;
      return 0;
    }
    return v37;
  }
  if ( a2 >= 0 )
    v29 = (char *)a7 - a2;
  else
    v29 = nullptr;
  v34 = 0;
  v39 = 0;
  v36 = 1;
  while ( 2 )
  {
    v8 = *(_DWORD *)(a1 + 12);
    v9 = v8 - 1;
    v10 = (int *)(a1 + 8 * (v8 + 1) + 4);
    while ( v9 != -1 )
    {
      v40 = 0;
      v41 = 0;
      v42 = 0;
      v43 = 0;
      v11 = *v10;
      v12 = *v10 >> 8;
      v13 = a8[4];
      v44 = v13;
      v14 = a3;
      if ( (v11 & 1) != 0 )
      {
        v14 = a3 | 1;
        v12 = *(_DWORD *)(*a5 + v12);
      }
      v15 = (char *)a5 + v12;
      if ( v29 != nullptr && v29 < v15 == v36 )
      {
        v39 = 1;
        goto LABEL_52;
      }
      if ( (v11 & 2) == 0 )
      {
        if ( a2 == -2 && v13 << 30 == 0 )
          goto LABEL_52;
        v14 &= ~2u;
      }
      v16 = (*(int (__fastcall **)(_DWORD, int, int, int, char *, int, _DWORD *, int *))(*(_DWORD *)*(v10 - 1) + 28))(
              *(v10 - 1),
              a2,
              v14,
              a4,
              v15,
              a6,
              a7,
              &v40);
      v17 = v43;
      v18 = v42 | a8[2];
      v19 = v18;
      a8[2] = v18;
      v20 = v16;
      if ( (v17 & 0xFFFFFFFB) == 2 )
      {
        v28 = v41;
        *a8 = v40;
        a8[1] = v28;
        a8[3] = v17;
        return v16;
      }
      if ( v34 != 0 )
      {
        v21 = *a8;
        if ( *a8 == 0 )
        {
          if ( v40 == 0 )
            goto LABEL_50;
          v31 = a8[3];
          if ( v18 <= 3 )
            goto LABEL_56;
LABEL_27:
          if ( (v18 & 1) != 0 && (a8[4] & 2) != 0 )
            goto LABEL_56;
          if ( v31 != 0 )
          {
            v25 = v31;
          }
          else
          {
            v25 = 1;
            v31 = 1;
          }
          v22 = v17;
          if ( v17 == 0 )
            goto LABEL_33;
          goto LABEL_44;
        }
      }
      else
      {
        v21 = *a8;
        if ( *a8 == 0 )
        {
          v26 = v40;
          v27 = v41;
          *a8 = v40;
          a8[1] = v27;
          if ( v26 != 0 )
          {
            if ( v18 == 0 )
            {
              v34 = v20;
              goto LABEL_52;
            }
            if ( (*(_DWORD *)(a1 + 8) & 1) == 0 )
              return v20;
            v34 = v20;
          }
          else
          {
            v34 = v20;
          }
          goto LABEL_50;
        }
      }
      if ( v21 == v40 )
      {
        a8[1] |= v41;
        goto LABEL_50;
      }
      if ( v40 != 0 || v16 != 0 )
      {
        v31 = a8[3];
        if ( v18 > 3 )
          goto LABEL_27;
LABEL_56:
        if ( v31 > 0 )
        {
          v22 = v17;
          v25 = v31;
          goto LABEL_58;
        }
        if ( v17 <= 3 || (v17 & 1) != 0 && (*(_DWORD *)(a1 + 8) & 2) != 0 )
        {
          if ( a2 < 0 )
          {
            if ( a2 == -2 )
            {
              v25 = 1;
              v31 = 1;
              v22 = v17;
            }
            else
            {
              v30 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a4 + 32))(a4, a2);
              v22 = v17;
              v31 = v30;
              v25 = v30;
            }
          }
          else
          {
            v25 = 1;
            v31 = 1;
            if ( a7 == (_DWORD *)(v21 + a2) )
            {
              v31 = 6;
              v25 = 6;
            }
            v22 = v17;
          }
LABEL_58:
          if ( v17 <= 0 )
          {
            if ( v25 <= 3 || (v25 & 1) != 0 && (*(_DWORD *)(a1 + 8) & 2) != 0 )
            {
              if ( a2 < 0 )
              {
                if ( a2 == -2 )
                {
                  v22 = 1;
                  v17 = 1;
                }
                else
                {
                  v17 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a4 + 32))(a4, a2);
                  v22 = v17;
                }
              }
              else
              {
                v22 = 1;
                v17 = 1;
                if ( a7 == (_DWORD *)(v40 + a2) )
                {
                  v22 = 6;
                  v17 = 6;
                }
              }
              goto LABEL_44;
            }
LABEL_33:
            if ( (v25 ^ 1) <= 3 )
              goto LABEL_34;
LABEL_47:
            a8[3] = v31;
            if ( (v25 & 2) != 0 || (v25 & 1) == 0 )
              return v37;
            v18 = a8[2];
            goto LABEL_50;
          }
LABEL_44:
          if ( (v25 ^ v22) <= 3 )
          {
            if ( (v22 & v25) > 3 )
            {
              *a8 = 0;
              a8[3] = 2;
              return 1;
            }
LABEL_34:
            v19 = a8[2];
LABEL_35:
            *a8 = 0;
            a8[3] = 1;
            v18 = v19;
            v34 = 1;
            goto LABEL_50;
          }
          if ( v22 <= 3 )
            goto LABEL_47;
        }
        else
        {
          if ( (v17 ^ 1) <= 3 )
            goto LABEL_35;
          LOBYTE(v22) = v17;
        }
        *a8 = v40;
        LOBYTE(v25) = v22;
        a8[1] = v41;
        v31 = v17;
        v34 = 0;
        goto LABEL_47;
      }
LABEL_50:
      if ( v18 == 4 )
        return v34;
LABEL_52:
      --v9;
      v10 -= 2;
    }
    if ( v39 != 0 && v36 != 0 )
    {
      v36 = 0;
      v39 = 1;
      continue;
    }
    return v34;
  }
}


//======================================================================
// __cxxabiv1::__vmi_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__upcast_result &)const
// address: 0x0038F78C   size: 0x182 (386 bytes)
//======================================================================
bool __fastcall __cxxabiv1::__vmi_class_type_info::__do_upcast(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v6; // r10
  int v7; // r3
  _DWORD *v8; // r5
  int v9; // r6
  int v10; // r2
  int v11; // r10
  _BOOL4 v12; // r7
  int v13; // r2
  char *v14; // r2
  int v15; // r1
  int v17; // r1
  int v18; // r7
  int v19; // r3
  int v20; // [sp+Ch] [bp-28h]
  int v21; // [sp+10h] [bp-24h]
  int v24; // [sp+20h] [bp-14h] BYREF
  int v25; // [sp+24h] [bp-10h]
  int v26; // [sp+28h] [bp-Ch]
  int v27; // [sp+2Ch] [bp-8h]

  v6 = __cxxabiv1::__class_type_info::__do_upcast();
  if ( v6 == 0 )
  {
    v21 = a4[2];
    if ( (v21 & 0x10) != 0 )
      v21 = *(_DWORD *)(a1 + 8);
    v7 = *(_DWORD *)(a1 + 12);
    v8 = (_DWORD *)(a1 + 8 * (v7 + 1));
    v9 = v7 - 1;
    if ( v7 != 0 )
    {
      do
      {
        v10 = v8[1];
        v26 = v21;
        v24 = 0;
        v25 = 0;
        v27 = 0;
        v11 = v10 & 1;
        v12 = (v10 & 2) != 0;
        if ( (v10 & 2) != 0 || (v21 & 1) != 0 )
        {
          if ( a3 != nullptr )
          {
            v13 = v10 >> 8;
            if ( v11 != 0 )
              v13 = *(_DWORD *)(*a3 + v13);
            v14 = (char *)a3 + v13;
          }
          else
          {
            v14 = nullptr;
          }
          v20 = (*(int (__fastcall **)(_DWORD, int, char *, int *))(*(_DWORD *)*v8 + 24))(*v8, a2, v14, &v24);
          if ( v20 != 0 )
          {
            if ( v27 == 8 && v11 != 0 )
              v27 = *v8;
            if ( v25 > 3 && !v12 )
              v25 &= ~2u;
            v15 = a4[3];
            if ( v15 != 0 )
            {
              if ( *a4 != v24 )
              {
                v6 = v20;
                *a4 = 0;
                a4[1] = 2;
                return v6;
              }
              if ( *a4 == 0 )
              {
                if ( v27 == 8 )
                {
                  v6 = v20;
                  goto LABEL_34;
                }
                if ( v15 == 8 || sub_3BF438(v27, v15) == 0 )
                {
                  v6 = v20;
LABEL_34:
                  a4[1] = 2;
                  return v6;
                }
              }
              a4[1] |= v25;
            }
            else
            {
              v17 = v25;
              v18 = v26;
              *a4 = v24;
              a4[1] = v17;
              a4[2] = v18;
              a4[3] = v27;
              v19 = a4[1];
              if ( v19 <= 3 )
                return v20;
              if ( (v19 & 2) != 0 )
              {
                if ( (*(_DWORD *)(a1 + 8) & 1) == 0 )
                  return v20;
              }
              else
              {
                if ( (v19 & 1) == 0 )
                  return v20;
                if ( (*(_DWORD *)(a1 + 8) & 2) == 0 )
                  return v20;
              }
            }
          }
        }
        --v9;
        v8 -= 2;
      }
      while ( v9 != -1 );
    }
    return a4[1] != 0;
  }
  return v6;
}

