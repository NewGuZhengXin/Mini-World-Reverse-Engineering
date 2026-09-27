// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: __cxxabiv1::__class_type_info

//======================================================================
// __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*,void **)const
// address: 0x0039043C   size: 0x32 (50 bytes)
//======================================================================
int __fastcall __cxxabiv1::__class_type_info::__do_upcast(
        __cxxabiv1::__class_type_info *this,
        const __class_type_info *a2,
        void **a3)
{
  int v3; // r3
  int result; // r0
  void *v6; // [sp+0h] [bp-10h] BYREF
  int v7; // [sp+4h] [bp-Ch]
  int v8; // [sp+8h] [bp-8h]
  int v9; // [sp+Ch] [bp-4h]

  v6 = nullptr;
  v7 = 0;
  v9 = 0;
  v3 = *(_DWORD *)this;
  v8 = 16;
  (*(void (__fastcall **)(__cxxabiv1::__class_type_info *, const __class_type_info *, _DWORD, void **))(v3 + 24))(
    this,
    a2,
    *a3,
    &v6);
  result = 0;
  if ( (v7 & 6) == 6 )
  {
    *a3 = v6;
    return 1;
  }
  return result;
}


//======================================================================
// __cxxabiv1::__class_type_info::__do_find_public_src(int,void const*,__cxxabiv1::__class_type_info const*,void const*)const
// address: 0x00390470   size: 0x10 (16 bytes)
//======================================================================
int __fastcall __cxxabiv1::__class_type_info::__do_find_public_src(
        __cxxabiv1::__class_type_info *this,
        int a2,
        const void *a3,
        const __cxxabiv1::__class_type_info *a4,
        const void *a5)
{
  int result; // r0

  result = 1;
  if ( a5 == a3 )
    return 6;
  return result;
}


//======================================================================
// __cxxabiv1::__class_type_info::~__class_type_info()
// address: 0x00390480   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN10__cxxabiv117__class_type_infoD1Ev'
void __fastcall __cxxabiv1::__class_type_info::~__class_type_info(__cxxabiv1::__class_type_info *this)
{
  *(_DWORD *)this = &off_464230;
  sub_3BF404();
}


//======================================================================
// __cxxabiv1::__class_type_info::~__class_type_info()
// address: 0x0039049C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall __cxxabiv1::__class_type_info::~__class_type_info(__cxxabiv1::__class_type_info *this)
{
  __cxxabiv1::__class_type_info::~__class_type_info(this);
  operator delete(this);
}


//======================================================================
// __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__upcast_result &)const
// address: 0x003904B0   size: 0x1A (26 bytes)
//======================================================================
int __fastcall __cxxabiv1::__class_type_info::__do_upcast(int a1, int a2, int a3, _DWORD *a4)
{
  int result; // r0

  result = sub_3BF438(a1, a2);
  if ( result != 0 )
  {
    a4[3] = 8;
    *a4 = a3;
    a4[1] = 6;
  }
  return result;
}


//======================================================================
// __cxxabiv1::__class_type_info::__do_catch(std::type_info const*,void **,unsigned int)const
// address: 0x003904CC   size: 0x26 (38 bytes)
//======================================================================
int __fastcall __cxxabiv1::__class_type_info::__do_catch(
        __cxxabiv1::__class_type_info *this,
        const type_info *a2,
        void **a3,
        unsigned int a4)
{
  int result; // r0

  result = sub_3BF438(this, a2);
  if ( result == 0 && a4 <= 3 )
    return (*(int (__fastcall **)(const type_info *, __cxxabiv1::__class_type_info *, void **))(*(_DWORD *)a2 + 20))(
             a2,
             this,
             a3);
  return result;
}


//======================================================================
// __cxxabiv1::__class_type_info::__do_dyncast(int,__cxxabiv1::__class_type_info::__sub_kind,__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__dyncast_result &)const
// address: 0x003904F4   size: 0x3C (60 bytes)
//======================================================================
int __fastcall __cxxabiv1::__class_type_info::__do_dyncast(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        _DWORD *a8)
{
  if ( a5 == a7 && sub_3BF438(a1, a6) != 0 )
  {
    a8[2] = a3;
  }
  else if ( sub_3BF438(a1, a4) != 0 )
  {
    *a8 = a5;
    a8[1] = a3;
    a8[3] = 1;
  }
  return 0;
}

