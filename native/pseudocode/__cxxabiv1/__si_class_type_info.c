// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: __cxxabiv1::__si_class_type_info

//======================================================================
// __cxxabiv1::__si_class_type_info::~__si_class_type_info()
// address: 0x00390314   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN10__cxxabiv120__si_class_type_infoD1Ev'
void __fastcall __cxxabiv1::__si_class_type_info::~__si_class_type_info(__cxxabiv1::__si_class_type_info *this)
{
  *(_DWORD *)this = &off_4641F0;
  __cxxabiv1::__class_type_info::~__class_type_info(this);
}


//======================================================================
// __cxxabiv1::__si_class_type_info::~__si_class_type_info()
// address: 0x00390330   size: 0x12 (18 bytes)
//======================================================================
void __fastcall __cxxabiv1::__si_class_type_info::~__si_class_type_info(__cxxabiv1::__si_class_type_info *this)
{
  __cxxabiv1::__si_class_type_info::~__si_class_type_info(this);
  operator delete(this);
}


//======================================================================
// __cxxabiv1::__si_class_type_info::__do_find_public_src(int,void const*,__cxxabiv1::__class_type_info const*,void const*)const
// address: 0x00390344   size: 0x36 (54 bytes)
//======================================================================
int __fastcall __cxxabiv1::__si_class_type_info::__do_find_public_src(
        __cxxabiv1::__si_class_type_info *this,
        int a2,
        const void *a3,
        const __cxxabiv1::__class_type_info *a4,
        const void *a5)
{
  if ( a5 == a3 && sub_3BF438(this, a4) != 0 )
    return 6;
  else
    return (*(int (__fastcall **)(_DWORD, int, const void *, const __cxxabiv1::__class_type_info *, const void *))(**((_DWORD **)this + 2) + 32))(
             *((_DWORD *)this + 2),
             a2,
             a3,
             a4,
             a5);
}


//======================================================================
// __cxxabiv1::__si_class_type_info::__do_dyncast(int,__cxxabiv1::__class_type_info::__sub_kind,__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__dyncast_result &)const
// address: 0x0039037C   size: 0x94 (148 bytes)
//======================================================================
int __fastcall __cxxabiv1::__si_class_type_info::__do_dyncast(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        _DWORD *a8)
{
  int v12; // r4
  int v13; // r3

  v12 = sub_3BF438(a1, a4);
  if ( v12 != 0 )
  {
    *a8 = a5;
    a8[1] = a3;
    if ( a2 < 0 )
    {
      v12 = 0;
      if ( a2 == -2 )
        a8[3] = 1;
    }
    else
    {
      v13 = 1;
      if ( a7 == a5 + a2 )
        v13 = 6;
      a8[3] = v13;
      return 0;
    }
  }
  else if ( a5 == a7 && sub_3BF438(a1, a6) != 0 )
  {
    a8[2] = a3;
  }
  else
  {
    return (*(int (__fastcall **)(_DWORD, int, int, int, int, int, int, _DWORD *))(**(_DWORD **)(a1 + 8) + 28))(
             *(_DWORD *)(a1 + 8),
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8);
  }
  return v12;
}


//======================================================================
// __cxxabiv1::__si_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__upcast_result &)const
// address: 0x00390410   size: 0x22 (34 bytes)
//======================================================================
int __fastcall __cxxabiv1::__si_class_type_info::__do_upcast(int a1, int a2, int a3, int a4)
{
  int result; // r0

  result = __cxxabiv1::__class_type_info::__do_upcast();
  if ( result == 0 )
    return (*(int (__fastcall **)(_DWORD, int, int, int))(**(_DWORD **)(a1 + 8) + 24))(*(_DWORD *)(a1 + 8), a2, a3, a4);
  return result;
}

