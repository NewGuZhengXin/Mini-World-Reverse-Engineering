// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_390000

//======================================================================
// sub_3900C8
// address: 0x003900C8   size: 0x3C (60 bytes)
//======================================================================
bool __fastcall sub_3900C8(unsigned __int8 *a1)
{
  int v1; // r2
  _BOOL4 result; // r0

  v1 = *a1;
  result = false;
  if ( v1 == 71 && a1[1] == 78 && a1[2] == 85 && a1[3] == 67 && a1[4] == 67 && a1[5] == 43 && a1[6] == 43 )
    return a1[7] <= 1u;
  return result;
}


//======================================================================
// sub_390104
// address: 0x00390104   size: 0x20 (32 bytes)
//======================================================================
void __fastcall __noreturn sub_390104(void *a1)
{
  if ( a1 != nullptr )
  {
    _cxa_begin_catch(a1);
    if ( sub_3900C8((unsigned __int8 *)a1) )
      __cxxabiv1::__terminate(*((void (**)())a1 - 5));
  }
  std::terminate();
}


//======================================================================
// sub_390244
// address: 0x00390244   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_390244(int a1)
{
  if ( a1 != 0 )
  {
    if ( *(_BYTE *)(a1 + 4) != 0 )
      j_pthread_key_delete(*(_DWORD *)a1);
    *(_BYTE *)(a1 + 4) = 0;
  }
  return a1;
}


//======================================================================
// sub_390260
// address: 0x00390260   size: 0x26 (38 bytes)
//======================================================================
void __fastcall sub_390260(int *a1)
{
  int v2; // r3
  int v3; // r4

  if ( a1 != nullptr )
  {
    v2 = *a1;
    if ( *a1 != 0 )
    {
      while ( 1 )
      {
        v3 = *(_DWORD *)(v2 + 16);
        Unwind_DeleteException(v2 + 32);
        if ( v3 == 0 )
          break;
        v2 = v3;
      }
    }
    j_free(a1);
  }
}


//======================================================================
// sub_390530
// address: 0x00390530   size: 0x28 (40 bytes)
//======================================================================
void __fastcall sub_390530(unsigned int a1, int a2)
{
  void (__fastcall *v2)(int); // r3
  void *v3; // r4

  if ( a1 > 1 )
    __cxxabiv1::__terminate(*(void (**)())(a2 - 20));
  v2 = *(void (__fastcall **)(int))(a2 - 28);
  v3 = (void *)(a2 + 88);
  if ( v2 != nullptr )
    v2(a2 + 88);
  _cxa_free_exception(v3);
}


//======================================================================
// sub_390BFC
// address: 0x00390BFC   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_390BFC(void *obj, void (*lpfunc)(void *), void *a3)
{
  return j___cxa_atexit(lpfunc, obj, a3);
}


//======================================================================
// sub_390CD8
// address: 0x00390CD8   size: 0x3A0 (928 bytes)
//======================================================================
int __fastcall sub_390CD8(int a1)
{
  if ( sub_3C82FC(&unk_55ECA0, 1) == 0 )
  {
    byte_472444 = 1;
    dword_55EC78 = (int)&off_464358;
    dword_55EC7C = 0;
    dword_55EC80 = 0;
    dword_55EC84 = 0;
    dword_55EC88 = 0;
    dword_55EC8C = 0;
    dword_55EC90 = 0;
    sub_3A6688(algn_55EC94);
    dword_55EC78 = (int)&off_465128;
    dword_55EC98 = (int)&_sF._offset + 4;
    dword_55EC9C = -1;
    dword_55EB34 = (int)&off_464358;
    dword_55EB38 = 0;
    dword_55EB3C = 0;
    dword_55EB40 = 0;
    dword_55EB44 = 0;
    dword_55EB48 = 0;
    dword_55EB4C = 0;
    sub_3A6688(&unk_55EB50);
    dword_55EB58 = -1;
    dword_55EB34 = (int)&off_465128;
    dword_55EB54 = (int)&_sF;
    dword_55E988 = (int)&off_464358;
    dword_55E98C = 0;
    dword_55E990 = 0;
    dword_55E994 = 0;
    dword_55E998 = 0;
    dword_55E99C = 0;
    dword_55E9A0 = 0;
    sub_3A6688(algn_55E9A4);
    dword_55E9A8 = (int)&_sF + 168;
    dword_55E988 = (int)&off_465128;
    dword_55E9AC = -1;
    sub_392DEC(&byte_4[(_DWORD)&dword_55EA18]);
    byte_55EA90 = 0;
    byte_55EA91 = 0;
    dword_55EA98 = 0;
    dword_55EA9C = 0;
    dword_55EAA0 = 0;
    dword_55EA8C = 0;
    dword_55EA94 = 0;
    dword_55EA18 = (int)&off_4658F4;
    dword_55EA1C = (int)&off_465908;
    sub_391734(&byte_4[(_DWORD)&dword_55EA18], &dword_55EC78);
    sub_392DEC(&dword_55EAAC);
    byte_55EB20 = 0;
    byte_55EB21 = 0;
    dword_55EB24 = 0;
    dword_55EB28 = 0;
    dword_55EB2C = 0;
    dword_55EB30 = 0;
    dword_55EB1C = 0;
    dword_55EAA4 = (int)&off_464ABC;
    dword_55EAAC = (int)&off_464AD0;
    dword_55EAA8 = 0;
    sub_391734(&dword_55EAAC, &dword_55EB34);
    sub_392DEC(&dword_55E4E8);
    byte_55E55C = 0;
    byte_55E55D = 0;
    dword_55E564 = 0;
    dword_55E568 = 0;
    dword_55E558 = 0;
    dword_55E560 = 0;
    dword_55E56C = 0;
    dword_55E4E4 = (int)&off_4658F4;
    dword_55E4E8 = (int)&off_465908;
    sub_391734(&dword_55E4E8, &dword_55E988);
    sub_392DEC(&dword_55EB60);
    byte_55EBD4 = 0;
    byte_55EBD5 = 0;
    dword_55EBDC = 0;
    dword_55EBE0 = 0;
    dword_55EBD0 = 0;
    dword_55EBD8 = 0;
    dword_55EBE4 = 0;
    dword_55EB5C = (int)&off_4658F4;
    dword_55EB60 = (int)&off_465908;
    sub_391734(&dword_55EB60, &dword_55E988);
    dword_55E4F4 |= 0x2000u;
    dword_55EB1C = (int)&dword_55EA18;
    dword_55E558 = (int)&dword_55EA18;
    dword_55E868 = 0;
    dword_55E864 = (int)&off_464398;
    dword_55E86C = 0;
    dword_55E870 = 0;
    dword_55E874 = 0;
    dword_55E878 = 0;
    dword_55E87C = 0;
    sub_3A6688(&unk_55E880);
    dword_55E864 = (int)&off_465168;
    dword_55E884 = (int)&_sF._offset + 4;
    dword_55E888 = -1;
    dword_55E4BC = (int)&off_464398;
    dword_55E4C0 = 0;
    dword_55E4C4 = 0;
    dword_55E4C8 = 0;
    dword_55E4CC = 0;
    dword_55E4D0 = 0;
    dword_55E4D4 = 0;
    sub_3A6688(&unk_55E4D8);
    dword_55E4BC = (int)&off_465168;
    dword_55E4DC = (int)&_sF;
    dword_55E4E0 = -1;
    dword_55E570 = (int)&off_464398;
    dword_55E574 = 0;
    dword_55E578 = 0;
    dword_55E57C = 0;
    dword_55E580 = 0;
    dword_55E584 = 0;
    dword_55E588 = 0;
    sub_3A6688(algn_55E58C);
    dword_55E590 = (int)&_sF + 168;
    dword_55E570 = (int)&off_465168;
    dword_55E594 = -1;
    sub_392DEC(&byte_4[(_DWORD)&dword_55E598]);
    dword_55E60C = 0;
    dword_55E610 = 0;
    byte_55E614 = 0;
    dword_55E618 = 0;
    dword_55E61C = 0;
    dword_55E620 = 0;
    dword_55E624 = 0;
    dword_55E598 = (int)&off_465924;
    dword_55E59C = (int)&off_465938;
    sub_391B70(&byte_4[(_DWORD)&dword_55E598], &dword_55E864);
    sub_392DEC(&dword_55E8FC);
    byte_55E974 = 0;
    dword_55E978 = 0;
    dword_55E97C = 0;
    dword_55E980 = 0;
    dword_55E984 = 0;
    dword_55E96C = 0;
    dword_55E970 = 0;
    dword_55E8F4 = (int)&off_464AEC;
    dword_55E8FC = (int)&off_464B00;
    dword_55E8F8 = 0;
    sub_391B70(&dword_55E8FC, &dword_55E4BC);
    sub_392DEC(&dword_55EBEC);
    byte_55EC64 = 0;
    dword_55EC68 = 0;
    dword_55EC6C = 0;
    dword_55EC70 = 0;
    dword_55EC5C = 0;
    dword_55EC60 = 0;
    dword_55EC74 = 0;
    dword_55EBE8 = (int)&off_465924;
    dword_55EBEC = (int)&off_465938;
    sub_391B70(&dword_55EBEC, &dword_55E570);
    sub_392DEC(&dword_55E76C);
    byte_55E7E4 = 0;
    dword_55E7E8 = 0;
    dword_55E7EC = 0;
    dword_55E7F0 = 0;
    dword_55E7DC = 0;
    dword_55E7E0 = 0;
    dword_55E7F4 = 0;
    dword_55E768 = (int)&off_465924;
    dword_55E76C = (int)&off_465938;
    sub_391B70(&dword_55E76C, &dword_55E570);
    dword_55E96C = (int)&dword_55E598;
    dword_55EC5C = (int)&dword_55E598;
    dword_55EBF8 |= 0x2000u;
    sub_3C82FC(&unk_55ECA0, 1);
  }
  return a1;
}


//======================================================================
// sub_391198
// address: 0x00391198   size: 0x6E (110 bytes)
//======================================================================
int __fastcall sub_391198(int a1)
{
  if ( sub_3C82FC(&unk_55ECA0, -1) == 2 )
  {
    sub_3B3A80(&dword_55EA18);
    sub_3B3A80(&dword_55E4E4);
    sub_3B3A80(&dword_55EB5C);
    sub_3B52F0(&dword_55E598);
    sub_3B52F0(&dword_55EBE8);
    sub_3B52F0(&dword_55E768);
  }
  return a1;
}


//======================================================================
// sub_391230
// address: 0x00391230   size: 0x180 (384 bytes)
//======================================================================
int __fastcall sub_391230(int a1)
{
  int v1; // r6
  _BYTE v3[8]; // [sp+14h] [bp-8h] BYREF

  v1 = (unsigned __int8)byte_472444;
  if ( a1 != 1 && byte_472444 != 0 )
  {
    sub_390CD8((int)v3);
    byte_472444 = 0;
    dword_55EC78 = (int)&off_464358;
    sub_3A8980(algn_55EC94);
    dword_55EB34 = (int)&off_464358;
    sub_3A8980(&unk_55EB50);
    dword_55E988 = (int)&off_464358;
    sub_3A8980(algn_55E9A4);
    dword_55E864 = (int)&off_464398;
    sub_3A8980(&unk_55E880);
    dword_55E4BC = (int)&off_464398;
    sub_3A8980(&unk_55E4D8);
    dword_55E570 = (int)&off_464398;
    sub_3A8980(algn_55E58C);
    sub_392C0C(&unk_55E694, (char *)&_sF._offset + 4, 16, 1024);
    sub_392C0C(&unk_55E9B0, &_sF, 8, 1024);
    sub_392C0C(&unk_55E88C, (char *)&_sF + 168, 16, 1024);
    sub_391538(&dword_55EA1C, &unk_55E694);
    sub_391538(&dword_55EAAC, &unk_55E9B0);
    sub_391538(&dword_55E4E8, &unk_55E88C);
    sub_391538(&dword_55EB60, &unk_55E88C);
    sub_392D64(&unk_55E7F8, (char *)&_sF._offset + 4, 16, 1024);
    sub_392D64(&unk_55E628, &_sF, 8, 1024);
    sub_392D64(&unk_55E6FC, (char *)&_sF + 168, 16, 1024);
    sub_3919D4(&dword_55E59C, &unk_55E7F8);
    sub_3919D4(&dword_55E8FC, &unk_55E628);
    sub_3919D4(&dword_55EBEC, &unk_55E6FC);
    sub_3919D4(&dword_55E76C, &unk_55E6FC);
    sub_391198((int)v3);
  }
  return v1;
}


//======================================================================
// sub_391420
// address: 0x00391420   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_391420(_DWORD *a1)
{
  *a1 = &off_464320;
  sub_392FE4();
  return a1;
}


//======================================================================
// sub_391438
// address: 0x00391438   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_391438(_DWORD *a1)
{
  *a1 = &off_464330;
  sub_392FE4();
  return a1;
}


//======================================================================
// sub_391450
// address: 0x00391450   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_391450(_DWORD *a1)
{
  *a1 = &off_464320;
  sub_392FE4();
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_391470
// address: 0x00391470   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_391470(_DWORD *a1)
{
  *a1 = &off_464330;
  sub_392FE4();
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_391490
// address: 0x00391490   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_391490(int a1)
{
  return (*(_DWORD *)(a1 + 20) & 5) == 0 ? a1 : 0;
}


//======================================================================
// sub_3914A0
// address: 0x003914A0   size: 0xC (12 bytes)
//======================================================================
bool __fastcall sub_3914A0(int a1)
{
  return (*(_DWORD *)(a1 + 20) & 5) != 0;
}


//======================================================================
// sub_3914AC
// address: 0x003914AC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3914AC(int a1)
{
  return *(_DWORD *)(a1 + 20);
}


//======================================================================
// sub_3914B0
// address: 0x003914B0   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall sub_3914B0(_DWORD *result, int a2)
{
  int v2; // r3

  if ( result[30] == 0 )
    a2 |= 1u;
  v2 = result[4];
  result[5] = a2;
  if ( (v2 & a2) != 0 )
    sub_3BD280("basic_ios::clear");
  return result;
}


//======================================================================
// sub_3914D4
// address: 0x003914D4   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall sub_3914D4(_DWORD *a1, int a2)
{
  return sub_3914B0(a1, a2 | a1[5]);
}


//======================================================================
// sub_3914E0
// address: 0x003914E0   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_3914E0(int result, int a2)
{
  *(_DWORD *)(result + 20) |= a2;
  if ( (*(_DWORD *)(result + 16) & a2) != 0 )
    _cxa_rethrow();
  return result;
}


//======================================================================
// sub_3914F4
// address: 0x003914F4   size: 0x8 (8 bytes)
//======================================================================
bool __fastcall sub_3914F4(int a1)
{
  return *(_DWORD *)(a1 + 20) == 0;
}


//======================================================================
// sub_3914FC
// address: 0x003914FC   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3914FC(int a1)
{
  return *(_DWORD *)(a1 + 20) << 30 >> 31;
}


//======================================================================
// sub_391504
// address: 0x00391504   size: 0xC (12 bytes)
//======================================================================
bool __fastcall sub_391504(int a1)
{
  return (*(_DWORD *)(a1 + 20) & 5) != 0;
}


//======================================================================
// sub_391510
// address: 0x00391510   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_391510(int a1)
{
  return *(_DWORD *)(a1 + 20) & 1;
}


//======================================================================
// sub_391518
// address: 0x00391518   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_391518(int a1)
{
  return *(_DWORD *)(a1 + 16);
}


//======================================================================
// sub_39151C
// address: 0x0039151C   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall sub_39151C(_DWORD *a1, int a2)
{
  a1[4] = a2;
  return sub_3914B0(a1, a1[5]);
}


//======================================================================
// sub_391528
// address: 0x00391528   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_391528(int a1)
{
  return *(_DWORD *)(a1 + 112);
}


//======================================================================
// sub_39152C
// address: 0x0039152C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_39152C(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 112) = a2;
  return result;
}


//======================================================================
// sub_391534
// address: 0x00391534   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_391534(int a1)
{
  return *(_DWORD *)(a1 + 120);
}


//======================================================================
// sub_391538
// address: 0x00391538   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_391538(_DWORD *a1, int a2)
{
  int v2; // r4

  v2 = a1[30];
  a1[30] = a2;
  sub_3914B0(a1, 0);
  return v2;
}


//======================================================================
// sub_391548
// address: 0x00391548   size: 0x44 (68 bytes)
//======================================================================
int __fastcall sub_391548(int a1)
{
  int result; // r0
  _BYTE *v3; // r5

  if ( *(_BYTE *)(a1 + 117) != 0 )
    return *(unsigned __int8 *)(a1 + 116);
  v3 = *(_BYTE **)(a1 + 124);
  if ( v3 == nullptr )
    sub_3BCEE4();
  if ( v3[28] != 0 )
  {
    result = (unsigned __int8)v3[61];
  }
  else
  {
    sub_3A7D48(*(_DWORD *)(a1 + 124));
    result = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v3 + 24))(v3, 32);
  }
  *(_BYTE *)(a1 + 116) = result;
  *(_BYTE *)(a1 + 117) = 1;
  return result;
}


//======================================================================
// sub_39158C
// address: 0x0039158C   size: 0x4A (74 bytes)
//======================================================================
int __fastcall sub_39158C(int a1, char a2)
{
  int result; // r0
  _BYTE *v5; // r6

  if ( *(_BYTE *)(a1 + 117) != 0 )
  {
    result = *(unsigned __int8 *)(a1 + 116);
  }
  else
  {
    v5 = *(_BYTE **)(a1 + 124);
    if ( v5 == nullptr )
      sub_3BCEE4();
    if ( v5[28] != 0 )
    {
      result = (unsigned __int8)v5[61];
    }
    else
    {
      sub_3A7D48(*(_DWORD *)(a1 + 124));
      result = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v5 + 24))(v5, 32);
    }
    *(_BYTE *)(a1 + 116) = result;
    *(_BYTE *)(a1 + 117) = 1;
  }
  *(_BYTE *)(a1 + 116) = a2;
  return result;
}


//======================================================================
// sub_3915D8
// address: 0x003915D8   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_3915D8(int a1, int a2, int a3)
{
  int v3; // r3
  int v5; // r4
  int result; // r0

  v3 = *(_DWORD *)(a1 + 124);
  if ( v3 == 0 )
    sub_3BCEE4();
  v5 = v3 + a2 + 280;
  result = *(unsigned __int8 *)(v3 + a2 + 285);
  if ( *(_BYTE *)(v3 + a2 + 285) == 0 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 32))(v3);
    if ( a3 == result )
      return a3;
    else
      *(_BYTE *)(v5 + 5) = result;
  }
  return result;
}


//======================================================================
// sub_39160C
// address: 0x0039160C   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_39160C(int a1, int a2)
{
  _BYTE *v2; // r4

  v2 = *(_BYTE **)(a1 + 124);
  if ( v2 == nullptr )
    sub_3BCEE4();
  if ( v2[28] != 0 )
    return (unsigned __int8)v2[a2 + 29];
  sub_3A7D48(*(_DWORD *)(a1 + 124));
  return (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v2 + 24))(v2, a2);
}


//======================================================================
// sub_391638
// address: 0x00391638   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_391638(int a1)
{
  sub_392DEC(a1);
  *(_DWORD *)a1 = &off_464320;
  *(_DWORD *)(a1 + 112) = 0;
  *(_BYTE *)(a1 + 116) = 0;
  *(_BYTE *)(a1 + 117) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  return a1;
}


//======================================================================
// sub_391668
// address: 0x00391668   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_391668(_DWORD *a1, int a2)
{
  int result; // r0

  if ( sub_39602C(a2) != 0 )
    a1[31] = sub_394CF0(a2);
  else
    a1[31] = 0;
  if ( sub_396154(a2) != 0 )
    a1[32] = sub_39556C(a2);
  else
    a1[32] = 0;
  result = sub_39619C(a2);
  if ( result != 0 )
  {
    result = sub_3955B4(a2);
    a1[33] = result;
  }
  else
  {
    a1[33] = 0;
  }
  return result;
}


//======================================================================
// sub_3916BC
// address: 0x003916BC   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_3916BC(int a1, _DWORD *a2, int a3)
{
  int v6; // r4
  _BYTE v8[4]; // [sp+4h] [bp-4h] BYREF

  sub_3A84F8(a1, a2 + 27);
  sub_3A50FC(v8, a2, a3);
  sub_3A8980(v8);
  sub_391668(a2, a3);
  v6 = a2[30];
  if ( v6 != 0 )
  {
    sub_3A84F8(v8, v6 + 28);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v6 + 8))(v6, a3);
    sub_3A8948(v6 + 28, a3);
    sub_3A8980(v8);
  }
  return a1;
}


//======================================================================
// sub_391734
// address: 0x00391734   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_391734(int a1, int a2)
{
  int result; // r0

  sub_3A50C8();
  result = sub_391668((_DWORD *)a1, a1 + 108);
  *(_BYTE *)(a1 + 116) = 0;
  *(_BYTE *)(a1 + 117) = 0;
  *(_DWORD *)(a1 + 120) = a2;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = a2 == 0;
  return result;
}


//======================================================================
// sub_391760
// address: 0x00391760   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_391760(int a1, int a2)
{
  sub_392DEC(a1);
  *(_DWORD *)a1 = &off_464320;
  *(_DWORD *)(a1 + 112) = 0;
  *(_BYTE *)(a1 + 116) = 0;
  *(_BYTE *)(a1 + 117) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  sub_391734(a1, a2);
  return a1;
}


//======================================================================
// sub_3917A4
// address: 0x003917A4   size: 0x188 (392 bytes)
//======================================================================
int __fastcall sub_3917A4(int a1, int a2)
{
  int v4; // r0
  _DWORD *v5; // r7
  void *v6; // r8
  int v7; // r4
  void *v8; // r0
  int v9; // r3
  int v10; // r12
  int v11; // r8
  int v12; // r9
  unsigned int v13; // r3
  _DWORD *v14; // r2
  _DWORD *v15; // r4
  int v16; // r1
  int v17; // r3
  char v18; // r4
  size_t v20; // r0
  int v21; // r0
  _DWORD *v22; // r3
  int v23; // r2
  _BYTE *v24; // r7
  char v25; // r0
  _BYTE *v26; // r4
  char v27; // r0
  _BYTE v28[8]; // [sp+4h] [bp-8h] BYREF

  if ( a1 != a2 )
  {
    v4 = *(_DWORD *)(a2 + 100);
    if ( v4 > 8 )
    {
      if ( (unsigned int)v4 > 0xFE00000 )
        v20 = -1;
      else
        v20 = 8 * v4;
      v5 = operator new[](v20);
      v21 = *(_DWORD *)(a2 + 100);
      v22 = v5;
      v23 = v21 - 2;
      if ( v21 != 0 )
      {
        do
        {
          --v23;
          *v22 = 0;
          v22[1] = 0;
          v22 += 2;
        }
        while ( v23 != -2 );
        v6 = (void *)(a1 + 36);
      }
      else
      {
        v6 = (void *)(a1 + 36);
      }
    }
    else
    {
      v5 = (_DWORD *)(a1 + 36);
      v6 = (void *)(a1 + 36);
    }
    v7 = *(_DWORD *)(a2 + 24);
    if ( v7 != 0 )
      sub_3C82FC(v7 + 12, 1);
    sub_392F70(a1, 0);
    v8 = *(void **)(a1 + 104);
    if ( v6 != v8 )
    {
      if ( v8 != nullptr )
        operator delete[](v8);
      *(_DWORD *)(a1 + 104) = 0;
    }
    sub_392FA4(a1);
    v9 = *(_DWORD *)(a2 + 100);
    *(_DWORD *)(a1 + 24) = v7;
    v10 = v9;
    if ( v9 > 0 )
    {
      v11 = *(_DWORD *)(a2 + 104);
      v12 = 8 * v9;
      v13 = 0;
      do
      {
        v14 = &v5[v13 / 4];
        v15 = (_DWORD *)(v11 + v13);
        v13 += 8;
        v16 = v15[1];
        *v14 = *v15;
        v14[1] = v16;
      }
      while ( v13 != v12 );
    }
    *(_DWORD *)(a1 + 104) = v5;
    *(_DWORD *)(a1 + 100) = v10;
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
    v17 = *(unsigned __int8 *)(a2 + 117);
    *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 112);
    if ( v17 != 0 )
    {
      v18 = *(_BYTE *)(a2 + 116);
    }
    else
    {
      v26 = *(_BYTE **)(a2 + 124);
      if ( v26 == nullptr )
        goto LABEL_35;
      if ( v26[28] != 0 )
      {
        v27 = v26[61];
      }
      else
      {
        sub_3A7D48(*(_DWORD *)(a2 + 124));
        v27 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v26 + 24))(v26, 32);
      }
      *(_BYTE *)(a2 + 116) = v27;
      *(_BYTE *)(a2 + 117) = 1;
      v18 = v27;
    }
    if ( *(_BYTE *)(a1 + 117) != 0 )
    {
LABEL_16:
      *(_BYTE *)(a1 + 116) = v18;
      sub_3A84F8(v28, a2 + 108);
      sub_3A8948(a1 + 108, v28);
      sub_3A8980(v28);
      sub_391668((_DWORD *)a1, a1 + 108);
      sub_392F70(a1, 2);
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
      sub_3914B0((_DWORD *)a1, *(_DWORD *)(a1 + 20));
      return a1;
    }
    v24 = *(_BYTE **)(a1 + 124);
    if ( v24 != nullptr )
    {
      if ( v24[28] != 0 )
      {
        v25 = v24[61];
      }
      else
      {
        sub_3A7D48(*(_DWORD *)(a1 + 124));
        v25 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v24 + 24))(v24, 32);
      }
      *(_BYTE *)(a1 + 116) = v25;
      *(_BYTE *)(a1 + 117) = 1;
      goto LABEL_16;
    }
LABEL_35:
    sub_3BCEE4();
  }
  return a1;
}


//======================================================================
// sub_39192C
// address: 0x0039192C   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_39192C(int a1)
{
  return (*(_DWORD *)(a1 + 20) & 5) == 0 ? a1 : 0;
}


//======================================================================
// sub_39193C
// address: 0x0039193C   size: 0xC (12 bytes)
//======================================================================
bool __fastcall sub_39193C(int a1)
{
  return (*(_DWORD *)(a1 + 20) & 5) != 0;
}


//======================================================================
// sub_391948
// address: 0x00391948   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_391948(int a1)
{
  return *(_DWORD *)(a1 + 20);
}


//======================================================================
// sub_39194C
// address: 0x0039194C   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall sub_39194C(_DWORD *result, int a2)
{
  int v2; // r3

  if ( result[31] == 0 )
    a2 |= 1u;
  v2 = result[4];
  result[5] = a2;
  if ( (v2 & a2) != 0 )
    sub_3BD280("basic_ios::clear");
  return result;
}


//======================================================================
// sub_391970
// address: 0x00391970   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall sub_391970(_DWORD *a1, int a2)
{
  return sub_39194C(a1, a2 | a1[5]);
}


//======================================================================
// sub_39197C
// address: 0x0039197C   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_39197C(int result, int a2)
{
  *(_DWORD *)(result + 20) |= a2;
  if ( (*(_DWORD *)(result + 16) & a2) != 0 )
    _cxa_rethrow();
  return result;
}


//======================================================================
// sub_391990
// address: 0x00391990   size: 0x8 (8 bytes)
//======================================================================
bool __fastcall sub_391990(int a1)
{
  return *(_DWORD *)(a1 + 20) == 0;
}


//======================================================================
// sub_391998
// address: 0x00391998   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_391998(int a1)
{
  return *(_DWORD *)(a1 + 20) << 30 >> 31;
}


//======================================================================
// sub_3919A0
// address: 0x003919A0   size: 0xC (12 bytes)
//======================================================================
bool __fastcall sub_3919A0(int a1)
{
  return (*(_DWORD *)(a1 + 20) & 5) != 0;
}


//======================================================================
// sub_3919AC
// address: 0x003919AC   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3919AC(int a1)
{
  return *(_DWORD *)(a1 + 20) & 1;
}


//======================================================================
// sub_3919B4
// address: 0x003919B4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3919B4(int a1)
{
  return *(_DWORD *)(a1 + 16);
}


//======================================================================
// sub_3919B8
// address: 0x003919B8   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall sub_3919B8(_DWORD *a1, int a2)
{
  a1[4] = a2;
  return sub_39194C(a1, a1[5]);
}


//======================================================================
// sub_3919C4
// address: 0x003919C4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3919C4(int a1)
{
  return *(_DWORD *)(a1 + 112);
}


//======================================================================
// sub_3919C8
// address: 0x003919C8   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3919C8(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 112) = a2;
  return result;
}


//======================================================================
// sub_3919D0
// address: 0x003919D0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3919D0(int a1)
{
  return *(_DWORD *)(a1 + 124);
}


//======================================================================
// sub_3919D4
// address: 0x003919D4   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_3919D4(_DWORD *a1, int a2)
{
  int v2; // r4

  v2 = a1[31];
  a1[31] = a2;
  sub_39194C(a1, 0);
  return v2;
}


//======================================================================
// sub_3919E4
// address: 0x003919E4   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_3919E4(int a1)
{
  int result; // r0
  int v3; // r0

  if ( *(_BYTE *)(a1 + 120) != 0 )
    return *(_DWORD *)(a1 + 116);
  v3 = *(_DWORD *)(a1 + 128);
  if ( v3 == 0 )
    sub_3BCEE4();
  result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 40))(v3, 32);
  *(_DWORD *)(a1 + 116) = result;
  *(_BYTE *)(a1 + 120) = 1;
  return result;
}


//======================================================================
// sub_391A10
// address: 0x00391A10   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_391A10(int a1, int a2)
{
  int result; // r0
  int v5; // r0

  if ( *(_BYTE *)(a1 + 120) != 0 )
  {
    result = *(_DWORD *)(a1 + 116);
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 128);
    if ( v5 == 0 )
      sub_3BCEE4();
    result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 40))(v5, 32);
    *(_DWORD *)(a1 + 116) = result;
    *(_BYTE *)(a1 + 120) = 1;
  }
  *(_DWORD *)(a1 + 116) = a2;
  return result;
}


//======================================================================
// sub_391A40
// address: 0x00391A40   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_391A40(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + 128);
  if ( v1 == 0 )
    sub_3BCEE4();
  return (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 48))(v1);
}


//======================================================================
// sub_391A58
// address: 0x00391A58   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_391A58(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + 128);
  if ( v1 == 0 )
    sub_3BCEE4();
  return (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 40))(v1);
}


//======================================================================
// sub_391A70
// address: 0x00391A70   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_391A70(int a1)
{
  sub_392DEC(a1);
  *(_DWORD *)a1 = &off_464330;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 116) = 0;
  *(_BYTE *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  return a1;
}


//======================================================================
// sub_391AA0
// address: 0x00391AA0   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_391AA0(_DWORD *a1, int a2)
{
  int result; // r0

  if ( sub_3AC3D0(a2) != 0 )
    a1[32] = sub_3AB100(a2);
  else
    a1[32] = 0;
  if ( sub_3AC4F8(a2) != 0 )
    a1[33] = sub_3AB8F0(a2);
  else
    a1[33] = 0;
  result = sub_3AC540(a2);
  if ( result != 0 )
  {
    result = sub_3AB938(a2);
    a1[34] = result;
  }
  else
  {
    a1[34] = 0;
  }
  return result;
}


//======================================================================
// sub_391AF8
// address: 0x00391AF8   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_391AF8(int a1, _DWORD *a2, int a3)
{
  int v6; // r4
  _BYTE v8[4]; // [sp+4h] [bp-4h] BYREF

  sub_3A84F8(a1, a2 + 27);
  sub_3A50FC(v8, a2, a3);
  sub_3A8980(v8);
  sub_391AA0(a2, a3);
  v6 = a2[31];
  if ( v6 != 0 )
  {
    sub_3A84F8(v8, v6 + 28);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v6 + 8))(v6, a3);
    sub_3A8948(v6 + 28, a3);
    sub_3A8980(v8);
  }
  return a1;
}


//======================================================================
// sub_391B70
// address: 0x00391B70   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_391B70(int a1, int a2)
{
  int result; // r0

  sub_3A50C8();
  result = sub_391AA0((_DWORD *)a1, a1 + 108);
  *(_DWORD *)(a1 + 116) = 0;
  *(_BYTE *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 124) = a2;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = a2 == 0;
  return result;
}


//======================================================================
// sub_391B9C
// address: 0x00391B9C   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_391B9C(int a1, int a2)
{
  sub_392DEC(a1);
  *(_DWORD *)a1 = &off_464330;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 116) = 0;
  *(_BYTE *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  sub_391B70(a1, a2);
  return a1;
}


//======================================================================
// sub_391BE0
// address: 0x00391BE0   size: 0x158 (344 bytes)
//======================================================================
int __fastcall sub_391BE0(int a1, int a2)
{
  int v4; // r0
  _DWORD *v5; // r7
  void *v6; // r8
  int v7; // r4
  void *v8; // r0
  int v9; // r3
  int v10; // r12
  int v11; // r8
  int v12; // r9
  unsigned int v13; // r3
  _DWORD *v14; // r2
  _DWORD *v15; // r4
  int v16; // r1
  int v17; // r3
  int v18; // r7
  size_t v20; // r0
  int v21; // r0
  _DWORD *v22; // r3
  int v23; // r2
  int v24; // r0
  int v25; // r0
  int v26; // r0
  _BYTE v27[8]; // [sp+4h] [bp-8h] BYREF

  if ( a1 != a2 )
  {
    v4 = *(_DWORD *)(a2 + 100);
    if ( v4 > 8 )
    {
      if ( (unsigned int)v4 > 0xFE00000 )
        v20 = -1;
      else
        v20 = 8 * v4;
      v5 = operator new[](v20);
      v21 = *(_DWORD *)(a2 + 100);
      v22 = v5;
      v23 = v21 - 2;
      if ( v21 != 0 )
      {
        do
        {
          --v23;
          *v22 = 0;
          v22[1] = 0;
          v22 += 2;
        }
        while ( v23 != -2 );
        v6 = (void *)(a1 + 36);
      }
      else
      {
        v6 = (void *)(a1 + 36);
      }
    }
    else
    {
      v5 = (_DWORD *)(a1 + 36);
      v6 = (void *)(a1 + 36);
    }
    v7 = *(_DWORD *)(a2 + 24);
    if ( v7 != 0 )
      sub_3C82FC(v7 + 12, 1);
    sub_392F70(a1, 0);
    v8 = *(void **)(a1 + 104);
    if ( v6 != v8 )
    {
      if ( v8 != nullptr )
        operator delete[](v8);
      *(_DWORD *)(a1 + 104) = 0;
    }
    sub_392FA4(a1);
    v9 = *(_DWORD *)(a2 + 100);
    *(_DWORD *)(a1 + 24) = v7;
    v10 = v9;
    if ( v9 > 0 )
    {
      v11 = *(_DWORD *)(a2 + 104);
      v12 = 8 * v9;
      v13 = 0;
      do
      {
        v14 = &v5[v13 / 4];
        v15 = (_DWORD *)(v11 + v13);
        v13 += 8;
        v16 = v15[1];
        *v14 = *v15;
        v14[1] = v16;
      }
      while ( v13 != v12 );
    }
    *(_DWORD *)(a1 + 104) = v5;
    *(_DWORD *)(a1 + 100) = v10;
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
    v17 = *(unsigned __int8 *)(a2 + 120);
    *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 112);
    if ( v17 != 0 )
    {
      v18 = *(_DWORD *)(a2 + 116);
    }
    else
    {
      v25 = *(_DWORD *)(a2 + 128);
      if ( v25 == 0 )
        goto LABEL_29;
      v26 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v25 + 40))(v25, 32);
      *(_DWORD *)(a2 + 116) = v26;
      v18 = v26;
      *(_BYTE *)(a2 + 120) = 1;
    }
    if ( *(_BYTE *)(a1 + 120) != 0 )
    {
LABEL_16:
      *(_DWORD *)(a1 + 116) = v18;
      sub_3A84F8(v27, a2 + 108);
      sub_3A8948(a1 + 108, v27);
      sub_3A8980(v27);
      sub_391AA0((_DWORD *)a1, a1 + 108);
      sub_392F70(a1, 2);
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
      sub_39194C((_DWORD *)a1, *(_DWORD *)(a1 + 20));
      return a1;
    }
    v24 = *(_DWORD *)(a1 + 128);
    if ( v24 != 0 )
    {
      *(_DWORD *)(a1 + 116) = (*(int (__fastcall **)(int, int))(*(_DWORD *)v24 + 40))(v24, 32);
      *(_BYTE *)(a1 + 120) = 1;
      goto LABEL_16;
    }
LABEL_29:
    sub_3BCEE4();
  }
  return a1;
}


//======================================================================
// sub_391D38
// address: 0x00391D38   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_391D38(int result, _DWORD *a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r2

  v2 = *(_DWORD *)(result + 12);
  v3 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(result + 12) = v3;
  if ( v3 != 0 )
    *(_DWORD *)(v3 + 4) = result;
  *(_DWORD *)(v2 + 4) = *(_DWORD *)(result + 4);
  if ( *a2 == result )
  {
    *a2 = v2;
  }
  else
  {
    v4 = *(_DWORD *)(result + 4);
    if ( *(_DWORD *)(v4 + 8) == result )
      *(_DWORD *)(v4 + 8) = v2;
    else
      *(_DWORD *)(v4 + 12) = v2;
  }
  *(_DWORD *)(v2 + 8) = result;
  *(_DWORD *)(result + 4) = v2;
  return result;
}


//======================================================================
// sub_391D68
// address: 0x00391D68   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_391D68(int result, _DWORD *a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r2

  v2 = *(_DWORD *)(result + 8);
  v3 = *(_DWORD *)(v2 + 12);
  *(_DWORD *)(result + 8) = v3;
  if ( v3 != 0 )
    *(_DWORD *)(v3 + 4) = result;
  *(_DWORD *)(v2 + 4) = *(_DWORD *)(result + 4);
  if ( *a2 == result )
  {
    *a2 = v2;
  }
  else
  {
    v4 = *(_DWORD *)(result + 4);
    if ( *(_DWORD *)(v4 + 12) == result )
      *(_DWORD *)(v4 + 12) = v2;
    else
      *(_DWORD *)(v4 + 8) = v2;
  }
  *(_DWORD *)(v2 + 12) = result;
  *(_DWORD *)(result + 4) = v2;
  return result;
}


//======================================================================
// sub_391D98
// address: 0x00391D98   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_391D98(_DWORD *a1)
{
  _DWORD *v1; // r3
  int v2; // r2
  int v4; // r3

  if ( *a1 == 0 )
  {
    v1 = *(_DWORD **)(a1[1] + 4);
    if ( v1 == a1 )
      return v1[3];
  }
  v2 = a1[2];
  if ( v2 != 0 )
  {
    while ( *(_DWORD *)(v2 + 12) != 0 )
      v2 = *(_DWORD *)(v2 + 12);
  }
  else
  {
    v4 = a1[1];
    if ( a1 == *(_DWORD **)(v4 + 8) )
    {
      while ( 1 )
      {
        v2 = *(_DWORD *)(v4 + 4);
        if ( *(_DWORD *)(v2 + 8) != v4 )
          break;
        v4 = *(_DWORD *)(v4 + 4);
      }
    }
    else
    {
      return a1[1];
    }
  }
  return v2;
}


//======================================================================
// sub_391DDC
// address: 0x00391DDC   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_391DDC(int a1)
{
  int v1; // r2
  int v3; // r3

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 != 0 )
  {
    while ( *(_DWORD *)(v1 + 8) != 0 )
      v1 = *(_DWORD *)(v1 + 8);
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 4);
    if ( a1 != *(_DWORD *)(v3 + 12) )
      return v3;
    while ( 1 )
    {
      v1 = *(_DWORD *)(v3 + 4);
      if ( *(_DWORD *)(v1 + 12) != v3 )
        break;
      v3 = *(_DWORD *)(v3 + 4);
    }
    if ( v1 == *(_DWORD *)(v3 + 12) )
      return v3;
  }
  return v1;
}


//======================================================================
// sub_391E10
// address: 0x00391E10   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_391E10(int a1)
{
  int v1; // r2
  int v3; // r3

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 != 0 )
  {
    while ( *(_DWORD *)(v1 + 8) != 0 )
      v1 = *(_DWORD *)(v1 + 8);
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 4);
    if ( a1 != *(_DWORD *)(v3 + 12) )
      return v3;
    while ( 1 )
    {
      v1 = *(_DWORD *)(v3 + 4);
      if ( *(_DWORD *)(v1 + 12) != v3 )
        break;
      v3 = *(_DWORD *)(v3 + 4);
    }
    if ( v1 == *(_DWORD *)(v3 + 12) )
      return v3;
  }
  return v1;
}


//======================================================================
// sub_391E44
// address: 0x00391E44   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_391E44(_DWORD *a1)
{
  return sub_391D98(a1);
}


//======================================================================
// sub_391E4C
// address: 0x00391E4C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_391E4C(_DWORD *a1)
{
  return sub_391D98(a1);
}


//======================================================================
// sub_391E54
// address: 0x00391E54   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_391E54(int a1, _DWORD *a2)
{
  return sub_391D38(a1, a2);
}


//======================================================================
// sub_391E5C
// address: 0x00391E5C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_391E5C(int a1, _DWORD *a2)
{
  return sub_391D68(a1, a2);
}


//======================================================================
// sub_391E64
// address: 0x00391E64   size: 0xEC (236 bytes)
//======================================================================
int __fastcall sub_391E64(int result, int *a2, _DWORD *a3, _DWORD *a4)
{
  int *v5; // r6
  int *v6; // r3
  int *v7; // r4
  int *v8; // r5
  int *v9; // r2
  int v10; // r1
  _DWORD *v11; // r0
  _DWORD *v12; // r0

  v5 = a2;
  a2[1] = (int)a3;
  a2[2] = 0;
  a2[3] = 0;
  *a2 = 0;
  if ( result != 0 )
  {
    a3[2] = a2;
    if ( a3 == a4 )
    {
      a4[1] = a2;
      a4[3] = a2;
    }
    else if ( (_DWORD *)a4[2] == a3 )
    {
      a4[2] = a2;
    }
  }
  else
  {
    a3[3] = a2;
    if ( (_DWORD *)a4[3] == a3 )
      a4[3] = a2;
  }
  v6 = (int *)a4[1];
LABEL_6:
  if ( v5 != v6 )
  {
    do
    {
      v7 = (int *)v5[1];
      if ( *v7 != 0 )
        break;
      v8 = (int *)v7[1];
      v9 = (int *)v8[2];
      if ( v7 == v9 )
      {
        v9 = (int *)v8[3];
        if ( v9 == nullptr || (v10 = *v9, *v9 != 0) )
        {
          v12 = (_DWORD *)v5[1];
          if ( (int *)v7[3] == v5 )
          {
            sub_391D38((int)v12, a4 + 1);
            v5 = v7;
            v12 = (_DWORD *)v7[1];
          }
          *v12 = 1;
          *v8 = 0;
          result = sub_391D68((int)v8, a4 + 1);
          v6 = (int *)a4[1];
          goto LABEL_6;
        }
      }
      else if ( v9 == nullptr || (v10 = *v9, *v9 != 0) )
      {
        v11 = (_DWORD *)v5[1];
        if ( (int *)v7[2] == v5 )
        {
          sub_391D68((int)v11, a4 + 1);
          v5 = v7;
          v11 = (_DWORD *)v7[1];
        }
        *v11 = 1;
        *v8 = 0;
        result = sub_391D38((int)v8, a4 + 1);
        v6 = (int *)a4[1];
        goto LABEL_6;
      }
      *v7 = 1;
      v5 = v8;
      *v9 = 1;
      *v8 = v10;
    }
    while ( v8 != v6 );
  }
  *v6 = 1;
  return result;
}


//======================================================================
// sub_391F50
// address: 0x00391F50   size: 0x250 (592 bytes)
//======================================================================
int *__fastcall sub_391F50(int *a1, _DWORD *a2)
{
  _DWORD *v2; // r2
  int *v5; // r1
  int *i; // r4
  int *v7; // r3
  int *v8; // r6
  int v9; // r2
  int v10; // r3
  _DWORD *v11; // r10
  _DWORD *v12; // r3
  _DWORD *v13; // r3
  int *v14; // r3
  int *v15; // r5
  int *v17; // r0
  _DWORD *v18; // r3
  _DWORD *v19; // r3
  int v20; // r3
  int v21; // r2
  _DWORD *v22; // r2
  int *v23; // r2
  int *v24; // r2
  _DWORD *v25; // r1
  _DWORD *v26; // r1
  _DWORD *v27; // r2
  int *v28; // r2

  v2 = (_DWORD *)a1[2];
  if ( v2 != nullptr )
  {
    v5 = (int *)a1[3];
    if ( v5 != nullptr )
    {
      for ( i = (int *)a1[3]; i[2] != 0; i = (int *)i[2] )
        ;
      v7 = i;
      v8 = (int *)i[3];
      if ( i != a1 )
      {
        v2[1] = i;
        i[2] = (int)v2;
        if ( v5 != i )
        {
          i = (int *)i[1];
          if ( v8 != nullptr )
          {
            v8[1] = (int)i;
            v24 = (int *)v7[1];
          }
          else
          {
            v24 = i;
          }
          v24[2] = (int)v8;
          v7[3] = (int)v5;
          *(_DWORD *)(a1[3] + 4) = v7;
        }
        if ( (int *)a2[1] == a1 )
        {
          a2[1] = v7;
          v21 = a1[1];
        }
        else
        {
          v21 = a1[1];
          if ( *(int **)(v21 + 8) == a1 )
            *(_DWORD *)(v21 + 8) = v7;
          else
            *(_DWORD *)(v21 + 12) = v7;
        }
        v7[1] = v21;
        v9 = *v7;
        *v7 = *a1;
        *a1 = v9;
        v10 = v9;
        goto LABEL_20;
      }
      v2 = (_DWORD *)i[3];
    }
  }
  else
  {
    v2 = (_DWORD *)a1[3];
  }
  i = (int *)a1[1];
  if ( v2 != nullptr )
    v2[1] = i;
  if ( (int *)a2[1] == a1 )
  {
    a2[1] = v2;
  }
  else
  {
    v20 = a1[1];
    if ( *(int **)(v20 + 8) == a1 )
      *(_DWORD *)(v20 + 8) = v2;
    else
      *(_DWORD *)(v20 + 12) = v2;
  }
  if ( (int *)a2[2] == a1 )
  {
    v25 = v2;
    if ( a1[3] != 0 )
    {
      while ( v25[2] != 0 )
        v25 = (_DWORD *)v25[2];
      a2[2] = v25;
    }
    else
    {
      a2[2] = a1[1];
    }
  }
  if ( (int *)a2[3] != a1 )
    goto LABEL_59;
  v26 = v2;
  if ( a1[2] != 0 )
  {
    while ( v26[3] != 0 )
      v26 = (_DWORD *)v26[3];
    a2[3] = v26;
LABEL_59:
    v10 = *a1;
    v8 = v2;
    goto LABEL_20;
  }
  a2[3] = a1[1];
  v10 = *a1;
  v8 = v2;
LABEL_20:
  v11 = a2 + 1;
  if ( v10 == 0 )
    return a1;
  while ( 1 )
  {
    if ( (int *)a2[1] == v8 )
      goto LABEL_37;
    if ( v8 != nullptr && *v8 != 1 )
      goto LABEL_38;
    v15 = (int *)i[2];
    if ( v15 != v8 )
      break;
    v17 = (int *)i[3];
    if ( *v17 == 0 )
    {
      *v17 = 1;
      *i = 0;
      sub_391D38((int)i, a2 + 1);
      v17 = (int *)i[3];
    }
    v18 = (_DWORD *)v17[2];
    if ( v18 != nullptr && *v18 != 1 )
    {
      v27 = (_DWORD *)v17[3];
      if ( v27 == nullptr || *v27 == 1 )
      {
        *v18 = 1;
        *v17 = 0;
        sub_391D68((int)v17, a2 + 1);
        v28 = (int *)i[3];
        v19 = (_DWORD *)v28[3];
        *v28 = *i;
        *i = 1;
        if ( v19 != nullptr )
          goto LABEL_35;
      }
      else
      {
        v19 = (_DWORD *)v17[3];
LABEL_34:
        *v17 = *i;
        *i = 1;
LABEL_35:
        *v19 = 1;
      }
      sub_391D38((int)i, a2 + 1);
      v8 = v15;
LABEL_37:
      if ( v8 == nullptr )
        return a1;
LABEL_38:
      *v8 = 1;
      return a1;
    }
    v19 = (_DWORD *)v17[3];
    if ( v19 != nullptr && *v19 != 1 )
      goto LABEL_34;
    *v17 = 0;
    v14 = (int *)i[1];
LABEL_27:
    v8 = i;
    i = v14;
  }
  if ( *v15 == 0 )
  {
    *v15 = 1;
    *i = 0;
    sub_391D68((int)i, a2 + 1);
    v15 = (int *)i[2];
  }
  v12 = (_DWORD *)v15[3];
  if ( v12 == nullptr || *v12 == 1 )
  {
    v13 = (_DWORD *)v15[2];
    if ( v13 != nullptr && *v13 != 1 )
      goto LABEL_48;
    v14 = (int *)i[1];
    *v15 = 0;
    goto LABEL_27;
  }
  v22 = (_DWORD *)v15[2];
  if ( v22 != nullptr && *v22 != 1 )
  {
    v13 = (_DWORD *)v15[2];
LABEL_48:
    *v15 = *i;
    *i = 1;
  }
  else
  {
    *v12 = 1;
    *v15 = 0;
    sub_391D38((int)v15, v11);
    v23 = (int *)i[2];
    v13 = (_DWORD *)v23[2];
    *v23 = *i;
    *i = 1;
    if ( v13 == nullptr )
      goto LABEL_50;
  }
  *v13 = 1;
LABEL_50:
  sub_391D68((int)i, v11);
  if ( v8 != nullptr )
    goto LABEL_38;
  return a1;
}


//======================================================================
// sub_3921A0
// address: 0x003921A0   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_3921A0(_DWORD *a1, _DWORD *a2)
{
  int v2; // r3

  if ( a1 == nullptr )
    return 0;
  v2 = 0;
  while ( 1 )
  {
    v2 += *a1 == 1;
    if ( a1 == a2 )
      break;
    a1 = (_DWORD *)a1[1];
  }
  return v2;
}


//======================================================================
// sub_3921C4
// address: 0x003921C4   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_3921C4(int result, _DWORD *a2)
{
  _DWORD *v2; // r3
  _DWORD *v3; // r2
  int v4; // r3
  _DWORD *v5; // r2
  _DWORD *v6; // r2
  _DWORD *v7; // r1

  v2 = *(_DWORD **)result;
  v3 = (_DWORD *)*a2;
  if ( *(_DWORD *)result == result )
  {
    if ( v3 != a2 )
    {
      result = a2[1];
      *v2 = v3;
      v2[1] = result;
      *(_DWORD *)result = v2;
      v3[1] = v2;
      a2[1] = a2;
      *a2 = a2;
    }
  }
  else if ( v3 == a2 )
  {
    v7 = *(_DWORD **)(result + 4);
    *v3 = v2;
    v3[1] = v7;
    *v7 = v3;
    v2[1] = v3;
    *(_DWORD *)(result + 4) = result;
    *(_DWORD *)result = result;
  }
  else
  {
    *(_DWORD *)result = v3;
    *a2 = v2;
    v4 = *(_DWORD *)(result + 4);
    *(_DWORD *)(result + 4) = a2[1];
    a2[1] = v4;
    v5 = *(_DWORD **)result;
    **(_DWORD **)(result + 4) = result;
    v5[1] = result;
    v6 = (_DWORD *)*a2;
    *(_DWORD *)a2[1] = a2;
    v6[1] = a2;
  }
  return result;
}


//======================================================================
// sub_392214
// address: 0x00392214   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_392214(int result, int a2, int a3)
{
  _DWORD *v3; // r4
  _DWORD *v4; // r3
  _DWORD *v5; // r3

  if ( result != a3 )
  {
    v3 = *(_DWORD **)(a3 + 4);
    v4 = *(_DWORD **)(a2 + 4);
    *v3 = result;
    *v4 = a3;
    v5 = *(_DWORD **)(result + 4);
    *v5 = a2;
    *(_DWORD *)(result + 4) = v3;
    result = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a3 + 4) = result;
    *(_DWORD *)(a2 + 4) = v5;
  }
  return result;
}


//======================================================================
// sub_392230
// address: 0x00392230   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_392230(_DWORD *result)
{
  _DWORD *i; // r3
  _DWORD *v2; // r2

  for ( i = result; ; i = v2 )
  {
    v2 = (_DWORD *)*i;
    *i = i[1];
    i[1] = v2;
    if ( result == v2 )
      break;
  }
  return result;
}


//======================================================================
// sub_392244
// address: 0x00392244   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall sub_392244(_DWORD *result, int a2)
{
  _DWORD *v2; // r3

  result[1] = *(_DWORD *)(a2 + 4);
  v2 = *(_DWORD **)(a2 + 4);
  *result = a2;
  *v2 = result;
  *(_DWORD *)(a2 + 4) = result;
  return result;
}


//======================================================================
// sub_392254
// address: 0x00392254   size: 0xA (10 bytes)
//======================================================================
int *__fastcall sub_392254(int *result)
{
  int v1; // r3
  int *v2; // r2

  v1 = *result;
  v2 = (int *)result[1];
  *v2 = *result;
  *(_DWORD *)(v1 + 4) = v2;
  return result;
}


//======================================================================
// sub_392268
// address: 0x00392268   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_392268(_DWORD *result)
{
  *result = -1;
  result[1] = -1;
  result[2] = 0;
  return result;
}


//======================================================================
// sub_392278
// address: 0x00392278   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall sub_392278(_DWORD *result)
{
  *result = -1;
  result[1] = -1;
  result[2] = 0;
  return result;
}


//======================================================================
// sub_392290
// address: 0x00392290   size: 0x4 (4 bytes)
//======================================================================
int sub_392290()
{
  return 0;
}


//======================================================================
// sub_392294
// address: 0x00392294   size: 0x4 (4 bytes)
//======================================================================
int sub_392294()
{
  return 0;
}


//======================================================================
// sub_392298
// address: 0x00392298   size: 0x6 (6 bytes)
//======================================================================
int sub_392298()
{
  return -1;
}


//======================================================================
// sub_3922A0
// address: 0x003922A0   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_3922A0(_DWORD *a1)
{
  int result; // r0
  unsigned __int8 *v3; // r3

  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 36))(a1);
  if ( result != -1 )
  {
    v3 = (unsigned __int8 *)a1[2];
    result = *v3;
    a1[2] = v3 + 1;
  }
  return result;
}


//======================================================================
// sub_3922B8
// address: 0x003922B8   size: 0x6 (6 bytes)
//======================================================================
int sub_3922B8()
{
  return -1;
}


//======================================================================
// sub_3922C0
// address: 0x003922C0   size: 0x6 (6 bytes)
//======================================================================
int sub_3922C0()
{
  return -1;
}


//======================================================================
// sub_3922D0
// address: 0x003922D0   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3922D0(_DWORD *result)
{
  *result = -1;
  result[1] = -1;
  result[2] = 0;
  return result;
}


//======================================================================
// sub_3922E0
// address: 0x003922E0   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall sub_3922E0(_DWORD *result)
{
  *result = -1;
  result[1] = -1;
  result[2] = 0;
  return result;
}


//======================================================================
// sub_3922F8
// address: 0x003922F8   size: 0x4 (4 bytes)
//======================================================================
int sub_3922F8()
{
  return 0;
}


//======================================================================
// sub_3922FC
// address: 0x003922FC   size: 0x4 (4 bytes)
//======================================================================
int sub_3922FC()
{
  return 0;
}


//======================================================================
// sub_392300
// address: 0x00392300   size: 0x6 (6 bytes)
//======================================================================
int sub_392300()
{
  return -1;
}


//======================================================================
// sub_392308
// address: 0x00392308   size: 0x6 (6 bytes)
//======================================================================
int sub_392308()
{
  return -1;
}


//======================================================================
// sub_392310
// address: 0x00392310   size: 0x6 (6 bytes)
//======================================================================
int sub_392310()
{
  return -1;
}


//======================================================================
// sub_392318
// address: 0x00392318   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_392318(_DWORD *a1, char *a2, int a3)
{
  int v6; // r5
  _BYTE *v7; // r1
  _BYTE *v8; // r2
  signed int v9; // r3
  int v10; // r0
  _BYTE *v11; // r2
  size_t v12; // r6

  v6 = 0;
  if ( a3 > 0 )
  {
    v7 = (_BYTE *)a1[2];
    v8 = (_BYTE *)a1[3];
    v9 = v8 - v7;
    if ( v8 != v7 )
      goto LABEL_6;
    while ( 1 )
    {
      v10 = (*(int (__fastcall **)(_DWORD *))(*a1 + 40))(a1);
      if ( v10 == -1 )
        break;
      ++v6;
      *a2 = v10;
      if ( a3 <= v6 )
        break;
      v7 = (_BYTE *)a1[2];
      v11 = (_BYTE *)a1[3];
      ++a2;
      v9 = v11 - v7;
      if ( v11 != v7 )
      {
LABEL_6:
        v12 = a3 - v6;
        if ( a3 - v6 > v9 )
          v12 = v9;
        j_memcpy(a2, v7, v12);
        v6 += v12;
        a1[2] += v12;
        if ( a3 <= v6 )
          return v6;
        a2 += v12;
      }
    }
  }
  return v6;
}


//======================================================================
// sub_392380
// address: 0x00392380   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_392380(_DWORD *a1, unsigned __int8 *a2, int a3)
{
  int v6; // r5
  _BYTE *v7; // r0
  _BYTE *v8; // r2
  signed int v9; // r3
  _BYTE *v10; // r2
  size_t v11; // r6

  v6 = 0;
  if ( a3 > 0 )
  {
    v7 = (_BYTE *)a1[5];
    v8 = (_BYTE *)a1[6];
    v9 = v8 - v7;
    if ( v8 != v7 )
      goto LABEL_6;
    while ( (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 52))(a1, *a2) != -1 )
    {
      ++v6;
      ++a2;
      if ( a3 <= v6 )
        break;
      v7 = (_BYTE *)a1[5];
      v10 = (_BYTE *)a1[6];
      v9 = v10 - v7;
      if ( v10 != v7 )
      {
LABEL_6:
        v11 = a3 - v6;
        if ( a3 - v6 > v9 )
          v11 = v9;
        j_memcpy(v7, a2, v11);
        v6 += v11;
        a1[5] += v11;
        if ( a3 <= v6 )
          return v6;
        a2 += v11;
      }
    }
  }
  return v6;
}


//======================================================================
// sub_3923E4
// address: 0x003923E4   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall sub_3923E4(_DWORD *a1)
{
  *a1 = &off_464358;
  sub_3A8980(a1 + 7);
  return a1;
}


//======================================================================
// sub_392400
// address: 0x00392400   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall sub_392400(_DWORD *a1)
{
  *a1 = &off_464398;
  sub_3A8980(a1 + 7);
  return a1;
}


//======================================================================
// sub_39241C
// address: 0x0039241C   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall sub_39241C(_DWORD *a1)
{
  *a1 = &off_464358;
  sub_3A8980(a1 + 7);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_39243C
// address: 0x0039243C   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall sub_39243C(_DWORD *a1)
{
  *a1 = &off_464398;
  sub_3A8980(a1 + 7);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_39245C
// address: 0x0039245C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_39245C(_DWORD *a1, wchar_t *s1, int a3)
{
  int v6; // r5
  const wchar_t *v7; // r1
  int v8; // r3
  wchar_t v9; // r0
  size_t v10; // r6
  int v11; // r6

  v6 = 0;
  if ( a3 > 0 )
  {
    v7 = (const wchar_t *)a1[2];
    v8 = (a1[3] - (int)v7) >> 2;
    if ( v8 != 0 )
      goto LABEL_6;
    while ( 1 )
    {
      v9 = (*(int (__fastcall **)(_DWORD *))(*a1 + 40))(a1);
      if ( v9 == -1 )
        break;
      ++v6;
      *s1 = v9;
      if ( a3 <= v6 )
        break;
      v7 = (const wchar_t *)a1[2];
      ++s1;
      v8 = (a1[3] - (int)v7) >> 2;
      if ( v8 != 0 )
      {
LABEL_6:
        v10 = a3 - v6;
        if ( a3 - v6 > v8 )
          v10 = v8;
        j_wmemcpy(s1, v7, v10);
        v6 += v10;
        v11 = 4 * v10;
        a1[2] += v11;
        if ( a3 <= v6 )
          return v6;
        s1 = (wchar_t *)((char *)s1 + v11);
      }
    }
  }
  return v6;
}


//======================================================================
// sub_3924C8
// address: 0x003924C8   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_3924C8(_DWORD *a1, wchar_t *s2, int a3)
{
  int v6; // r5
  wchar_t *v7; // r0
  int v8; // r3
  size_t v9; // r6
  int v10; // r6

  v6 = 0;
  if ( a3 > 0 )
  {
    v7 = (wchar_t *)a1[5];
    v8 = (a1[6] - (int)v7) >> 2;
    if ( v8 != 0 )
      goto LABEL_6;
    while ( (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 52))(a1, *s2) != -1 )
    {
      ++v6;
      ++s2;
      if ( a3 <= v6 )
        break;
      v7 = (wchar_t *)a1[5];
      v8 = (a1[6] - (int)v7) >> 2;
      if ( v8 != 0 )
      {
LABEL_6:
        v9 = a3 - v6;
        if ( a3 - v6 > v8 )
          v9 = v8;
        j_wmemcpy(v7, s2, v9);
        v6 += v9;
        v10 = 4 * v9;
        a1[5] += v10;
        if ( a3 <= v6 )
          return v6;
        s2 = (wchar_t *)((char *)s2 + v10);
      }
    }
  }
  return v6;
}


//======================================================================
// sub_392530
// address: 0x00392530   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_392530(_DWORD *a1)
{
  int result; // r0
  int *v3; // r3

  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 36))(a1);
  if ( result != -1 )
  {
    v3 = (int *)a1[2];
    result = *v3;
    a1[2] = v3 + 1;
  }
  return result;
}


//======================================================================
// sub_392548
// address: 0x00392548   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_392548(int a1, int a2, int a3)
{
  int v3; // r7

  v3 = a2 + 28;
  sub_3A84F8(a1, a2 + 28);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a2 + 8))(a2, a3);
  sub_3A8948(v3, a3);
  return a1;
}


//======================================================================
// sub_39257C
// address: 0x0039257C   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_39257C(int a1, int a2)
{
  sub_3A84F8(a1, a2 + 28);
  return a1;
}


//======================================================================
// sub_39258C
// address: 0x0039258C   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_39258C(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_392598
// address: 0x00392598   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_392598(int a1, int a2)
{
  (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 16))(a1);
  return a1;
}


//======================================================================
// sub_3925B4
// address: 0x003925B4   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_3925B4(int a1, int a2)
{
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a2 + 20))(a1, a2);
  return a1;
}


//======================================================================
// sub_3925EC
// address: 0x003925EC   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3925EC(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 24))(a1);
}


//======================================================================
// sub_3925F8
// address: 0x003925F8   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3925F8(_DWORD *a1)
{
  int v1; // r1
  int v2; // r2
  int result; // r0

  v1 = a1[3];
  v2 = a1[2];
  result = v1 - v2;
  if ( v1 == v2 )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 28))(a1);
  return result;
}


//======================================================================
// sub_392610
// address: 0x00392610   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_392610(_DWORD *a1)
{
  unsigned int v1; // r2
  unsigned int v2; // r3
  unsigned __int8 *v4; // r2
  int result; // r0
  int v6; // r3

  v1 = a1[2];
  v2 = a1[3];
  if ( v1 >= v2 )
  {
    v6 = (*(int (__fastcall **)(_DWORD *))(*a1 + 40))(a1);
    result = -1;
    if ( v6 == -1 )
      return result;
    v4 = (unsigned __int8 *)a1[2];
    v2 = a1[3];
  }
  else
  {
    v4 = (unsigned __int8 *)(v1 + 1);
    a1[2] = v4;
  }
  if ( (unsigned int)v4 >= v2 )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 36))(a1);
  else
    return *v4;
}


//======================================================================
// sub_392648
// address: 0x00392648   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_392648(_DWORD *a1)
{
  unsigned __int8 *v1; // r2
  int result; // r0

  v1 = (unsigned __int8 *)a1[2];
  if ( (unsigned int)v1 >= a1[3] )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 40))(a1);
  result = *v1;
  a1[2] = v1 + 1;
  return result;
}


//======================================================================
// sub_392664
// address: 0x00392664   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_392664(_DWORD *a1)
{
  unsigned __int8 *v1; // r3

  v1 = (unsigned __int8 *)a1[2];
  if ( (unsigned int)v1 >= a1[3] )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 36))(a1);
  else
    return *v1;
}


//======================================================================
// sub_39267C
// address: 0x0039267C   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_39267C(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
}


//======================================================================
// sub_392688
// address: 0x00392688   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_392688(_DWORD *a1, int a2)
{
  unsigned int v2; // r3
  unsigned __int8 *v3; // r3

  v2 = a1[2];
  if ( a1[1] >= v2 )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 44))(a1);
  v3 = (unsigned __int8 *)(v2 - 1);
  if ( *v3 != a2 )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 44))(a1);
  a1[2] = v3;
  return *v3;
}


//======================================================================
// sub_3926A8
// address: 0x003926A8   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_3926A8(_DWORD *a1)
{
  unsigned int v1; // r3
  unsigned __int8 *v2; // r3

  v1 = a1[2];
  if ( a1[1] >= v1 )
    return (*(int (__fastcall **)(_DWORD *, int))(*a1 + 44))(a1, -1);
  v2 = (unsigned __int8 *)(v1 - 1);
  a1[2] = v2;
  return *v2;
}


//======================================================================
// sub_3926C8
// address: 0x003926C8   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_3926C8(_DWORD *a1, int a2)
{
  _BYTE *v2; // r3

  v2 = (_BYTE *)a1[5];
  if ( (unsigned int)v2 >= a1[6] )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 52))(a1);
  *v2 = a2;
  ++a1[5];
  return a2;
}


//======================================================================
// sub_3926E8
// address: 0x003926E8   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3926E8(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1);
}


//======================================================================
// sub_3926F4
// address: 0x003926F4   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_3926F4(_DWORD *a1)
{
  *a1 = &off_464358;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  sub_3A6688(a1 + 7);
  return a1;
}


//======================================================================
// sub_39271C
// address: 0x0039271C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_39271C(int a1)
{
  return *(_DWORD *)(a1 + 4);
}


//======================================================================
// sub_392720
// address: 0x00392720   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_392720(int a1)
{
  return *(_DWORD *)(a1 + 8);
}


//======================================================================
// sub_392724
// address: 0x00392724   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_392724(int a1)
{
  return *(_DWORD *)(a1 + 12);
}


//======================================================================
// sub_392728
// address: 0x00392728   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_392728(int result, int a2)
{
  *(_DWORD *)(result + 8) += a2;
  return result;
}


//======================================================================
// sub_392730
// address: 0x00392730   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_392730(_DWORD *result, int a2, int a3, int a4)
{
  result[1] = a2;
  result[2] = a3;
  result[3] = a4;
  return result;
}


//======================================================================
// sub_392738
// address: 0x00392738   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_392738(int a1)
{
  return *(_DWORD *)(a1 + 16);
}


//======================================================================
// sub_39273C
// address: 0x0039273C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_39273C(int a1)
{
  return *(_DWORD *)(a1 + 20);
}


//======================================================================
// sub_392740
// address: 0x00392740   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_392740(int a1)
{
  return *(_DWORD *)(a1 + 24);
}


//======================================================================
// sub_392744
// address: 0x00392744   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_392744(int result, int a2)
{
  *(_DWORD *)(result + 20) += a2;
  return result;
}


//======================================================================
// sub_39274C
// address: 0x0039274C   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_39274C(_DWORD *result, int a2, int a3)
{
  result[5] = a2;
  result[4] = a2;
  result[6] = a3;
  return result;
}


//======================================================================
// sub_392754
// address: 0x00392754   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall sub_392754(_DWORD *result)
{
  unsigned int v1; // r3

  v1 = result[2];
  if ( v1 >= result[3] )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*result + 40))(result);
  result[2] = v1 + 1;
  return result;
}


//======================================================================
// sub_39276C
// address: 0x0039276C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_39276C(int result, int a2)
{
  *(_DWORD *)(result + 8) += a2;
  return result;
}


//======================================================================
// sub_392774
// address: 0x00392774   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_392774(int result, int a2)
{
  *(_DWORD *)(result + 20) += a2;
  return result;
}


//======================================================================
// sub_39277C
// address: 0x0039277C   size: 0x30 (48 bytes)
//======================================================================
_DWORD *__fastcall sub_39277C(_DWORD *a1, _DWORD *a2)
{
  *a1 = &off_464358;
  a1[1] = a2[1];
  a1[2] = a2[2];
  a1[3] = a2[3];
  a1[4] = a2[4];
  a1[5] = a2[5];
  a1[6] = a2[5];
  sub_3A84F8(a1 + 7, a2 + 7);
  return a1;
}


//======================================================================
// sub_3927B4
// address: 0x003927B4   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_3927B4(int a1, int a2)
{
  char v3; // [sp+7h] [bp-5h] BYREF

  return sub_3A5A4C(a1, a2, &v3);
}


//======================================================================
// sub_3927C4
// address: 0x003927C4   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_3927C4(int a1, int a2, int a3)
{
  int v3; // r7

  v3 = a2 + 28;
  sub_3A84F8(a1, a2 + 28);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a2 + 8))(a2, a3);
  sub_3A8948(v3, a3);
  return a1;
}


//======================================================================
// sub_3927F8
// address: 0x003927F8   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3927F8(int a1, int a2)
{
  sub_3A84F8(a1, a2 + 28);
  return a1;
}


//======================================================================
// sub_392808
// address: 0x00392808   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_392808(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_392814
// address: 0x00392814   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_392814(int a1, int a2)
{
  (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 16))(a1);
  return a1;
}


//======================================================================
// sub_392830
// address: 0x00392830   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_392830(int a1, int a2)
{
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a2 + 20))(a1, a2);
  return a1;
}


//======================================================================
// sub_392868
// address: 0x00392868   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_392868(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 24))(a1);
}


//======================================================================
// sub_392874
// address: 0x00392874   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_392874(_DWORD *a1)
{
  int result; // r0

  result = (a1[3] - a1[2]) >> 2;
  if ( result == 0 )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 28))(a1);
  return result;
}


//======================================================================
// sub_39288C
// address: 0x0039288C   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_39288C(_DWORD *a1)
{
  int *v1; // r3
  int result; // r0
  unsigned int v4; // r3

  v1 = (int *)a1[2];
  if ( (unsigned int)v1 >= a1[3] )
  {
    result = (*(int (__fastcall **)(_DWORD *))(*a1 + 40))(a1);
  }
  else
  {
    result = *v1;
    a1[2] = v1 + 1;
  }
  if ( result != -1 )
  {
    v4 = a1[2];
    if ( v4 >= a1[3] )
      return (*(int (__fastcall **)(_DWORD *))(*a1 + 36))(a1);
    else
      return *(_DWORD *)v4;
  }
  return result;
}


//======================================================================
// sub_3928C0
// address: 0x003928C0   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_3928C0(_DWORD *a1)
{
  int *v1; // r2
  int result; // r0

  v1 = (int *)a1[2];
  if ( (unsigned int)v1 >= a1[3] )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 40))(a1);
  result = *v1;
  a1[2] = v1 + 1;
  return result;
}


//======================================================================
// sub_3928DC
// address: 0x003928DC   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3928DC(_DWORD *a1)
{
  unsigned int v1; // r3

  v1 = a1[2];
  if ( v1 >= a1[3] )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 36))(a1);
  else
    return *(_DWORD *)v1;
}


//======================================================================
// sub_3928F4
// address: 0x003928F4   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3928F4(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
}


//======================================================================
// sub_392900
// address: 0x00392900   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_392900(_DWORD *a1, int a2)
{
  unsigned int v2; // r2
  int *v4; // r2
  int result; // r0

  v2 = a1[2];
  if ( a1[1] >= v2 )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 44))(a1);
  v4 = (int *)(v2 - 4);
  result = *v4;
  if ( *v4 != a2 )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 44))(a1);
  a1[2] = v4;
  return result;
}


//======================================================================
// sub_392924
// address: 0x00392924   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_392924(_DWORD *a1)
{
  unsigned int v1; // r3
  unsigned int v2; // r3

  v1 = a1[2];
  if ( a1[1] >= v1 )
    return (*(int (__fastcall **)(_DWORD *, int))(*a1 + 44))(a1, -1);
  v2 = v1 - 4;
  a1[2] = v2;
  return *(_DWORD *)v2;
}


//======================================================================
// sub_392944
// address: 0x00392944   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_392944(_DWORD *a1, int a2)
{
  _DWORD *v2; // r2

  v2 = (_DWORD *)a1[5];
  if ( (unsigned int)v2 >= a1[6] )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 52))(a1);
  *v2 = a2;
  a1[5] = v2 + 1;
  return a2;
}


//======================================================================
// sub_392960
// address: 0x00392960   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_392960(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1);
}


//======================================================================
// sub_39296C
// address: 0x0039296C   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_39296C(_DWORD *a1)
{
  *a1 = &off_464398;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  sub_3A6688(a1 + 7);
  return a1;
}


//======================================================================
// sub_392994
// address: 0x00392994   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_392994(int a1)
{
  return *(_DWORD *)(a1 + 4);
}


//======================================================================
// sub_392998
// address: 0x00392998   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_392998(int a1)
{
  return *(_DWORD *)(a1 + 8);
}


//======================================================================
// sub_39299C
// address: 0x0039299C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_39299C(int a1)
{
  return *(_DWORD *)(a1 + 12);
}


//======================================================================
// sub_3929A0
// address: 0x003929A0   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3929A0(int result, int a2)
{
  *(_DWORD *)(result + 8) += 4 * a2;
  return result;
}


//======================================================================
// sub_3929AC
// address: 0x003929AC   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3929AC(_DWORD *result, int a2, int a3, int a4)
{
  result[1] = a2;
  result[2] = a3;
  result[3] = a4;
  return result;
}


//======================================================================
// sub_3929B4
// address: 0x003929B4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3929B4(int a1)
{
  return *(_DWORD *)(a1 + 16);
}


//======================================================================
// sub_3929B8
// address: 0x003929B8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3929B8(int a1)
{
  return *(_DWORD *)(a1 + 20);
}


//======================================================================
// sub_3929BC
// address: 0x003929BC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3929BC(int a1)
{
  return *(_DWORD *)(a1 + 24);
}


//======================================================================
// sub_3929C0
// address: 0x003929C0   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3929C0(int result, int a2)
{
  *(_DWORD *)(result + 20) += 4 * a2;
  return result;
}


//======================================================================
// sub_3929CC
// address: 0x003929CC   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3929CC(_DWORD *result, int a2, int a3)
{
  result[5] = a2;
  result[4] = a2;
  result[6] = a3;
  return result;
}


//======================================================================
// sub_3929D4
// address: 0x003929D4   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall sub_3929D4(_DWORD *result)
{
  unsigned int v1; // r3

  v1 = result[2];
  if ( v1 >= result[3] )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*result + 40))(result);
  result[2] = v1 + 4;
  return result;
}


//======================================================================
// sub_3929EC
// address: 0x003929EC   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3929EC(int result, int a2)
{
  *(_DWORD *)(result + 8) += 4 * a2;
  return result;
}


//======================================================================
// sub_3929F8
// address: 0x003929F8   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3929F8(int result, int a2)
{
  *(_DWORD *)(result + 20) += 4 * a2;
  return result;
}


//======================================================================
// sub_392A04
// address: 0x00392A04   size: 0x30 (48 bytes)
//======================================================================
_DWORD *__fastcall sub_392A04(_DWORD *a1, _DWORD *a2)
{
  *a1 = &off_464398;
  a1[1] = a2[1];
  a1[2] = a2[2];
  a1[3] = a2[3];
  a1[4] = a2[4];
  a1[5] = a2[5];
  a1[6] = a2[5];
  sub_3A84F8(a1 + 7, a2 + 7);
  return a1;
}


//======================================================================
// sub_392A3C
// address: 0x00392A3C   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_392A3C(int a1, int a2)
{
  char v3; // [sp+7h] [bp-5h] BYREF

  return sub_3A5B10(a1, a2, &v3);
}


//======================================================================
// sub_392A4C
// address: 0x00392A4C   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall sub_392A4C(_DWORD *a1)
{
  *a1 = &off_465978;
  sub_3B9684();
  sub_3A6A2C(a1 + 9);
  *a1 = &off_464358;
  sub_3A8980(a1 + 7);
  return a1;
}


//======================================================================
// sub_392AB0
// address: 0x00392AB0   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall sub_392AB0(_DWORD *a1)
{
  sub_392A4C(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_392AC4
// address: 0x00392AC4   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall sub_392AC4(_DWORD *a1)
{
  *a1 = &off_465B70;
  sub_3BB450();
  sub_3A6A2C(a1 + 9);
  *a1 = &off_464398;
  sub_3A8980(a1 + 7);
  return a1;
}


//======================================================================
// sub_392B28
// address: 0x00392B28   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall sub_392B28(_DWORD *a1)
{
  sub_392AC4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_392B3C
// address: 0x00392B3C   size: 0x48 (72 bytes)
//======================================================================
int __fastcall sub_392B3C(int a1, unsigned int a2)
{
  int v2; // r3
  int v3; // r2
  int result; // r0
  unsigned int v5; // r0
  _BYTE v6[5]; // [sp+7h] [bp-5h] BYREF

  v2 = *(_DWORD *)(a1 + 16);
  v3 = a1;
  if ( v2 != 0 )
    return *(unsigned __int8 *)(v2 + a2);
  while ( 2 )
  {
    switch ( *(_BYTE *)(v3 + 12) )
    {
      case 0:
        v2 = *(_DWORD *)(v3 + 24);
        return *(unsigned __int8 *)(v2 + a2);
      case 1:
        v5 = **(_DWORD **)(v3 + 24);
        if ( v5 <= a2 )
        {
          a2 -= v5;
          v3 = *(_DWORD *)(v3 + 28);
        }
        else
        {
          v3 = *(_DWORD *)(v3 + 24);
        }
        continue;
      case 2:
      case 3:
        (*(void (__fastcall **)(_DWORD, unsigned int, int, _BYTE *))(**(_DWORD **)(v3 + 24) + 8))(
          *(_DWORD *)(v3 + 24),
          a2,
          1,
          v6);
        result = v6[0];
        break;
      default:
        continue;
    }
    return result;
  }
}


//======================================================================
// sub_392B84
// address: 0x00392B84   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_392B84(_DWORD *a1)
{
  sub_3B9334();
  *a1 = &off_4643E8;
  return a1;
}


//======================================================================
// sub_392B9C
// address: 0x00392B9C   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_392B9C(int a1, int a2, int a3, int a4)
{
  int v9; // r2

  sub_3B9334();
  *(_DWORD *)a1 = &off_4643E8;
  sub_3A695C(a1 + 36, a2, a3);
  if ( sub_3A69D8(a1 + 36) != 0 )
  {
    *(_DWORD *)(a1 + 44) = a3;
    *(_DWORD *)(a1 + 64) = a4;
    sub_3B93F0(a1);
    *(_BYTE *)(a1 + 69) = 0;
    *(_BYTE *)(a1 + 70) = 0;
    v9 = *(_DWORD *)(a1 + 60);
    *(_DWORD *)(a1 + 4) = v9;
    *(_DWORD *)(a1 + 8) = v9;
    *(_DWORD *)(a1 + 12) = v9;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 24) = 0;
  }
  return a1;
}


//======================================================================
// sub_392C0C
// address: 0x00392C0C   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_392C0C(int a1, int a2, int a3, int a4)
{
  int v9; // r2

  sub_3B9334();
  *(_DWORD *)a1 = &off_4643E8;
  sub_3A6924(a1 + 36, a2, a3);
  if ( sub_3A69D8(a1 + 36) != 0 )
  {
    *(_DWORD *)(a1 + 44) = a3;
    *(_DWORD *)(a1 + 64) = a4;
    sub_3B93F0(a1);
    *(_BYTE *)(a1 + 69) = 0;
    *(_BYTE *)(a1 + 70) = 0;
    v9 = *(_DWORD *)(a1 + 60);
    *(_DWORD *)(a1 + 4) = v9;
    *(_DWORD *)(a1 + 8) = v9;
    *(_DWORD *)(a1 + 12) = v9;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 24) = 0;
  }
  return a1;
}


//======================================================================
// sub_392C7C
// address: 0x00392C7C   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_392C7C(int a1)
{
  return sub_3A69E0(a1 + 36);
}


//======================================================================
// sub_392C88
// address: 0x00392C88   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_392C88(int a1)
{
  return sub_3A69E8(a1 + 36);
}


//======================================================================
// sub_392C94
// address: 0x00392C94   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_392C94(int a1, unsigned int a2)
{
  int v2; // r3
  int v3; // r2
  int result; // r0
  unsigned int v5; // r0
  int v6; // [sp+4h] [bp-4h] BYREF

  v2 = *(_DWORD *)(a1 + 16);
  v3 = a1;
  if ( v2 != 0 )
    return *(_DWORD *)(4 * a2 + v2);
  while ( 2 )
  {
    switch ( *(_BYTE *)(v3 + 12) )
    {
      case 0:
        v2 = *(_DWORD *)(v3 + 24);
        return *(_DWORD *)(4 * a2 + v2);
      case 1:
        v5 = **(_DWORD **)(v3 + 24);
        if ( v5 <= a2 )
        {
          a2 -= v5;
          v3 = *(_DWORD *)(v3 + 28);
        }
        else
        {
          v3 = *(_DWORD *)(v3 + 24);
        }
        continue;
      case 2:
      case 3:
        (*(void (__fastcall **)(_DWORD, unsigned int, int, int *))(**(_DWORD **)(v3 + 24) + 8))(
          *(_DWORD *)(v3 + 24),
          a2,
          1,
          &v6);
        result = v6;
        break;
      default:
        continue;
    }
    return result;
  }
}


//======================================================================
// sub_392CDC
// address: 0x00392CDC   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_392CDC(_DWORD *a1)
{
  sub_3BB0E4();
  *a1 = &off_464428;
  return a1;
}


//======================================================================
// sub_392CF4
// address: 0x00392CF4   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_392CF4(int a1, int a2, int a3, int a4)
{
  int v9; // r2

  sub_3BB0E4();
  *(_DWORD *)a1 = &off_464428;
  sub_3A695C(a1 + 36, a2, a3);
  if ( sub_3A69D8(a1 + 36) != 0 )
  {
    *(_DWORD *)(a1 + 44) = a3;
    *(_DWORD *)(a1 + 64) = a4;
    sub_3BB1A0(a1);
    *(_BYTE *)(a1 + 69) = 0;
    *(_BYTE *)(a1 + 70) = 0;
    v9 = *(_DWORD *)(a1 + 60);
    *(_DWORD *)(a1 + 4) = v9;
    *(_DWORD *)(a1 + 8) = v9;
    *(_DWORD *)(a1 + 12) = v9;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 24) = 0;
  }
  return a1;
}


//======================================================================
// sub_392D64
// address: 0x00392D64   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_392D64(int a1, int a2, int a3, int a4)
{
  int v9; // r2

  sub_3BB0E4();
  *(_DWORD *)a1 = &off_464428;
  sub_3A6924(a1 + 36, a2, a3);
  if ( sub_3A69D8(a1 + 36) != 0 )
  {
    *(_DWORD *)(a1 + 44) = a3;
    *(_DWORD *)(a1 + 64) = a4;
    sub_3BB1A0(a1);
    *(_BYTE *)(a1 + 69) = 0;
    *(_BYTE *)(a1 + 70) = 0;
    v9 = *(_DWORD *)(a1 + 60);
    *(_DWORD *)(a1 + 4) = v9;
    *(_DWORD *)(a1 + 8) = v9;
    *(_DWORD *)(a1 + 12) = v9;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 24) = 0;
  }
  return a1;
}


//======================================================================
// sub_392DD4
// address: 0x00392DD4   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_392DD4(int a1)
{
  return sub_3A69E0(a1 + 36);
}


//======================================================================
// sub_392DE0
// address: 0x00392DE0   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_392DE0(int a1)
{
  return sub_3A69E8(a1 + 36);
}


//======================================================================
// sub_392DEC
// address: 0x00392DEC   size: 0x44 (68 bytes)
//======================================================================
_DWORD *__fastcall sub_392DEC(_DWORD *a1)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r3
  _DWORD *v5; // r1

  *a1 = &off_464480;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  v3 = a1 + 9;
  v4 = v3;
  v5 = a1 + 25;
  do
  {
    *v4 = 0;
    v4[1] = 0;
    v4 += 2;
  }
  while ( v4 != v5 );
  a1[26] = v3;
  a1[25] = 8;
  sub_3A6688(a1 + 27);
  return a1;
}


//======================================================================
// sub_392E34
// address: 0x00392E34   size: 0x10 (16 bytes)
//======================================================================
int sub_392E34()
{
  return sub_3C82FC(&unk_55ECA4, 1) + 4;
}


//======================================================================
// sub_392E48
// address: 0x00392E48   size: 0x1E (30 bytes)
//======================================================================
_DWORD *__fastcall sub_392E48(int a1, int a2, int a3)
{
  _DWORD *result; // r0
  int v7; // r3

  result = operator new(0x10u);
  v7 = *(_DWORD *)(a1 + 24);
  result[1] = a2;
  result[2] = a3;
  *result = v7;
  result[3] = 0;
  *(_DWORD *)(a1 + 24) = result;
  return result;
}


//======================================================================
// sub_392E68
// address: 0x00392E68   size: 0xC0 (192 bytes)
//======================================================================
char *__fastcall sub_392E68(_DWORD *a1, int a2, int a3)
{
  char *v6; // r8
  int v7; // r9
  size_t v8; // r0
  _DWORD *v9; // r10
  _DWORD *v10; // r3
  int v11; // r2
  int v12; // r1
  char *v13; // r0
  int v14; // r3
  _DWORD *v15; // r2
  char *v16; // r4
  int v17; // r6
  int v20; // r2
  int v21; // r6

  v6 = (char *)(a1 + 9);
  if ( a2 <= 7 )
  {
    v7 = 8;
LABEL_14:
    a1[26] = v6;
    a1[25] = v7;
    return &v6[8 * a2];
  }
  if ( a2 != 0x7FFFFFFF )
  {
    v7 = a2 + 1;
    v8 = 8 * (a2 + 1);
    if ( (unsigned int)(a2 + 1) > 0xFE00000 )
      v8 = -1;
    v9 = operator new[](v8);
    v10 = v9;
    v11 = a2 - 1;
    do
    {
      --v11;
      *v10 = 0;
      v10[1] = 0;
      v10 += 2;
    }
    while ( v11 != -2 );
    v12 = a1[25];
    v13 = (char *)a1[26];
    if ( v12 > 0 )
    {
      v14 = 0;
      do
      {
        v15 = &v9[v14];
        v16 = &v13[v14 * 4];
        v14 += 2;
        v17 = *((_DWORD *)v16 + 1);
        *v15 = *(_DWORD *)v16;
        v15[1] = v17;
      }
      while ( v14 != 2 * v12 );
    }
    if ( v13 == nullptr || v6 == v13 )
    {
      v6 = (char *)v9;
    }
    else
    {
      operator delete[](v13);
      v6 = (char *)v9;
    }
    goto LABEL_14;
  }
  v20 = a1[5];
  v21 = a1[4];
  a1[5] = v20 | 1;
  if ( ((v20 | 1) & v21) != 0 )
    sub_3BD280("ios_base::_M_grow_words is not valid");
  if ( a3 != 0 )
    a1[8] = 0;
  else
    a1[7] = 0;
  return (char *)(a1 + 7);
}


//======================================================================
// sub_392F70
// address: 0x00392F70   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_392F70(int result, int a2)
{
  int **v2; // r4
  int i; // r5

  v2 = *(int ***)(result + 24);
  for ( i = result; v2 != nullptr; v2 = (int **)*v2 )
    result = ((int (__fastcall *)(int, int, int *))v2[1])(a2, i, v2[2]);
  return result;
}


//======================================================================
// sub_392FA4
// address: 0x00392FA4   size: 0x3E (62 bytes)
//======================================================================
void __fastcall sub_392FA4(int a1)
{
  _DWORD *v1; // r4
  _DWORD *v3; // r5

  v1 = *(_DWORD **)(a1 + 24);
  if ( v1 != nullptr && sub_3C82FC(v1 + 3, -1) == 0 )
  {
    do
    {
      v3 = (_DWORD *)*v1;
      operator delete(v1);
      if ( v3 == nullptr )
        break;
      v1 = v3;
    }
    while ( sub_3C82FC(v3 + 3, -1) == 0 );
  }
  *(_DWORD *)(a1 + 24) = 0;
}


//======================================================================
// sub_392FE4
// address: 0x00392FE4   size: 0x3A (58 bytes)
//======================================================================
_DWORD *__fastcall sub_392FE4(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = &off_464480;
  sub_392F70((int)a1, 0);
  sub_392FA4((int)a1);
  v2 = (_DWORD *)a1[26];
  if ( v2 != a1 + 9 )
  {
    if ( v2 != nullptr )
      operator delete[](v2);
    a1[26] = 0;
  }
  sub_3A8980(a1 + 27);
  return a1;
}


//======================================================================
// sub_393024
// address: 0x00393024   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall sub_393024(_DWORD *a1)
{
  sub_392FE4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_393038
// address: 0x00393038   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_393038(int a1)
{
  return *(unsigned __int8 *)(*(_DWORD *)(a1 + 8) + 17);
}


//======================================================================
// sub_393040
// address: 0x00393040   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_393040(int a1)
{
  return *(unsigned __int8 *)(*(_DWORD *)(a1 + 8) + 18);
}


//======================================================================
// sub_393048
// address: 0x00393048   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_393048(int a1)
{
  return *(_DWORD *)(*(_DWORD *)(a1 + 8) + 44);
}


//======================================================================
// sub_393050
// address: 0x00393050   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_393050(int a1)
{
  return (unsigned __int8)*(_DWORD *)(*(_DWORD *)(a1 + 8) + 48)
       | ((unsigned __int8)BYTE1(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 48)) << 8)
       | ((unsigned __int8)BYTE2(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 48)) << 16)
       | (HIBYTE(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 48)) << 24);
}


//======================================================================
// sub_393078
// address: 0x00393078   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_393078(int a1)
{
  return (unsigned __int8)*(_DWORD *)(*(_DWORD *)(a1 + 8) + 52)
       | ((unsigned __int8)BYTE1(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 52)) << 8)
       | ((unsigned __int8)BYTE2(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 52)) << 16)
       | (HIBYTE(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 52)) << 24);
}


//======================================================================
// sub_3930A0
// address: 0x003930A0   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3930A0(int a1)
{
  return *(unsigned __int8 *)(*(_DWORD *)(a1 + 8) + 17);
}


//======================================================================
// sub_3930A8
// address: 0x003930A8   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3930A8(int a1)
{
  return *(unsigned __int8 *)(*(_DWORD *)(a1 + 8) + 18);
}


//======================================================================
// sub_3930B0
// address: 0x003930B0   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3930B0(int a1)
{
  return *(_DWORD *)(*(_DWORD *)(a1 + 8) + 44);
}


//======================================================================
// sub_3930B8
// address: 0x003930B8   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_3930B8(int a1)
{
  return (unsigned __int8)*(_DWORD *)(*(_DWORD *)(a1 + 8) + 48)
       | ((unsigned __int8)BYTE1(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 48)) << 8)
       | ((unsigned __int8)BYTE2(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 48)) << 16)
       | (HIBYTE(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 48)) << 24);
}


//======================================================================
// sub_3930E0
// address: 0x003930E0   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_3930E0(int a1)
{
  return (unsigned __int8)*(_DWORD *)(*(_DWORD *)(a1 + 8) + 52)
       | ((unsigned __int8)BYTE1(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 52)) << 8)
       | ((unsigned __int8)BYTE2(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 52)) << 16)
       | (HIBYTE(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 52)) << 24);
}


//======================================================================
// sub_393108
// address: 0x00393108   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_393108(int a1)
{
  return *(unsigned __int8 *)(*(_DWORD *)(a1 + 8) + 36);
}


//======================================================================
// sub_393110
// address: 0x00393110   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_393110(int a1)
{
  return *(unsigned __int8 *)(*(_DWORD *)(a1 + 8) + 37);
}


//======================================================================
// sub_393118
// address: 0x00393118   size: 0x4 (4 bytes)
//======================================================================
int sub_393118()
{
  return 0;
}


//======================================================================
// sub_39311C
// address: 0x0039311C   size: 0x4 (4 bytes)
//======================================================================
int sub_39311C()
{
  return 0;
}


//======================================================================
// sub_393124
// address: 0x00393124   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_393124(int a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  int result; // r0
  int v4; // r3

  result = 0;
  if ( a2 < a3 )
  {
    do
    {
      v4 = *a2++;
      result = v4 + __ROR4__(result, 25);
    }
    while ( a2 != a3 );
  }
  return result;
}


//======================================================================
// sub_39313C
// address: 0x0039313C   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_39313C(_DWORD *a1)
{
  *a1 = &off_464740;
  sub_3A84B4();
  return a1;
}


//======================================================================
// sub_393154
// address: 0x00393154   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_393154(_DWORD *a1)
{
  *a1 = &off_464758;
  sub_3A84B4();
  return a1;
}


//======================================================================
// sub_39316C
// address: 0x0039316C   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_39316C(_DWORD *a1)
{
  *a1 = &off_464550;
  sub_3A84B4();
  return a1;
}


//======================================================================
// sub_393184
// address: 0x00393184   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_393184(_DWORD *a1)
{
  *a1 = &off_464590;
  sub_3A84B4();
  return a1;
}


//======================================================================
// sub_39319C
// address: 0x0039319C   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_39319C(_DWORD *a1)
{
  *a1 = &off_4645C0;
  sub_3A84B4();
  return a1;
}


//======================================================================
// sub_3931B4
// address: 0x003931B4   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3931B4(_DWORD *a1)
{
  *a1 = &off_464770;
  sub_3A84B4();
  return a1;
}


//======================================================================
// sub_3931CC
// address: 0x003931CC   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3931CC(_DWORD *a1)
{
  *a1 = &off_464770;
  sub_3A84B4();
  return a1;
}


//======================================================================
// sub_3931E4
// address: 0x003931E4   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3931E4(_DWORD *a1)
{
  *a1 = &off_4647A0;
  sub_3A84B4();
  return a1;
}


//======================================================================
// sub_3931FC
// address: 0x003931FC   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3931FC(_DWORD *a1)
{
  *a1 = &off_4647A0;
  sub_3A84B4();
  return a1;
}


//======================================================================
// sub_393214
// address: 0x00393214   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_393214(_DWORD *a1)
{
  *a1 = &off_464840;
  sub_3A84B4();
  return a1;
}


//======================================================================
// sub_39322C
// address: 0x0039322C   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_39322C(_DWORD *a1)
{
  *a1 = &off_464670;
  sub_3A84B4();
  return a1;
}


//======================================================================
// sub_393244
// address: 0x00393244   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_393244(int a1, int a2)
{
  sub_3BF0BC(a1, *(char **)(*(_DWORD *)(a2 + 8) + 8));
  return a1;
}


//======================================================================
// sub_39325C
// address: 0x0039325C   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_39325C(int a1, int a2)
{
  sub_3BF0BC(a1, *(char **)(*(_DWORD *)(a2 + 8) + 20));
  return a1;
}


//======================================================================
// sub_393274
// address: 0x00393274   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_393274(int a1, int a2)
{
  sub_3BF0BC(a1, *(char **)(*(_DWORD *)(a2 + 8) + 28));
  return a1;
}


//======================================================================
// sub_39328C
// address: 0x0039328C   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_39328C(int a1, int a2)
{
  sub_3BF0BC(a1, *(char **)(*(_DWORD *)(a2 + 8) + 36));
  return a1;
}


//======================================================================
// sub_3932A4
// address: 0x003932A4   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3932A4(int a1, int a2)
{
  sub_3BF0BC(a1, *(char **)(*(_DWORD *)(a2 + 8) + 8));
  return a1;
}


//======================================================================
// sub_3932BC
// address: 0x003932BC   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3932BC(int a1, int a2)
{
  sub_3BF0BC(a1, *(char **)(*(_DWORD *)(a2 + 8) + 20));
  return a1;
}


//======================================================================
// sub_3932D4
// address: 0x003932D4   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3932D4(int a1, int a2)
{
  sub_3BF0BC(a1, *(char **)(*(_DWORD *)(a2 + 8) + 28));
  return a1;
}


//======================================================================
// sub_3932EC
// address: 0x003932EC   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3932EC(int a1, int a2)
{
  sub_3BF0BC(a1, *(char **)(*(_DWORD *)(a2 + 8) + 36));
  return a1;
}


//======================================================================
// sub_393304
// address: 0x00393304   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_393304(int a1, int a2)
{
  sub_3BF0BC(a1, *(char **)(*(_DWORD *)(a2 + 8) + 8));
  return a1;
}


//======================================================================
// sub_39331C
// address: 0x0039331C   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_39331C(int a1, int a2)
{
  sub_3BF0BC(a1, *(char **)(*(_DWORD *)(a2 + 8) + 20));
  return a1;
}


//======================================================================
// sub_393334
// address: 0x00393334   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_393334(int a1, int a2)
{
  sub_3BF0BC(a1, *(char **)(*(_DWORD *)(a2 + 8) + 28));
  return a1;
}


//======================================================================
// sub_39334C
// address: 0x0039334C   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_39334C(int a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0

  *(_DWORD *)a1 = &off_464810;
  if ( *(_BYTE *)(a1 + 67) != 0 )
  {
    v2 = *(void **)(a1 + 8);
    if ( v2 != nullptr )
      operator delete[](v2);
    v3 = *(void **)(a1 + 20);
    if ( v3 != nullptr )
      operator delete[](v3);
    v4 = *(void **)(a1 + 28);
    if ( v4 != nullptr )
      operator delete[](v4);
    v5 = *(void **)(a1 + 36);
    if ( v5 != nullptr )
      operator delete[](v5);
  }
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_393398
// address: 0x00393398   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_393398(int a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0

  *(_DWORD *)a1 = &off_464820;
  if ( *(_BYTE *)(a1 + 67) != 0 )
  {
    v2 = *(void **)(a1 + 8);
    if ( v2 != nullptr )
      operator delete[](v2);
    v3 = *(void **)(a1 + 20);
    if ( v3 != nullptr )
      operator delete[](v3);
    v4 = *(void **)(a1 + 28);
    if ( v4 != nullptr )
      operator delete[](v4);
    v5 = *(void **)(a1 + 36);
    if ( v5 != nullptr )
      operator delete[](v5);
  }
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3933E4
// address: 0x003933E4   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_3933E4(int a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0

  *(_DWORD *)a1 = &off_464830;
  if ( *(_BYTE *)(a1 + 100) != 0 )
  {
    v2 = *(void **)(a1 + 8);
    if ( v2 != nullptr )
      operator delete[](v2);
    v3 = *(void **)(a1 + 20);
    if ( v3 != nullptr )
      operator delete[](v3);
    v4 = *(void **)(a1 + 28);
    if ( v4 != nullptr )
      operator delete[](v4);
  }
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_393424
// address: 0x00393424   size: 0x12 (18 bytes)
//======================================================================
void *__fastcall sub_393424(void *a1)
{
  sub_39334C((int)a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_393438
// address: 0x00393438   size: 0x12 (18 bytes)
//======================================================================
void *__fastcall sub_393438(void *a1)
{
  sub_393398((int)a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_39344C
// address: 0x0039344C   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_39344C(_DWORD *a1)
{
  *a1 = &off_464740;
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_39346C
// address: 0x0039346C   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_39346C(_DWORD *a1)
{
  *a1 = &off_464758;
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_39348C
// address: 0x0039348C   size: 0x12 (18 bytes)
//======================================================================
void *__fastcall sub_39348C(void *a1)
{
  sub_3933E4((int)a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3934A0
// address: 0x003934A0   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3934A0(_DWORD *a1)
{
  *a1 = &off_464550;
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3934C0
// address: 0x003934C0   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3934C0(_DWORD *a1)
{
  *a1 = &off_464590;
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3934E0
// address: 0x003934E0   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall sub_3934E0(_DWORD *a1)
{
  sub_39319C(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3934F4
// address: 0x003934F4   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3934F4(_DWORD *a1)
{
  *a1 = &off_464770;
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_393514
// address: 0x00393514   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_393514(_DWORD *a1)
{
  *a1 = &off_464770;
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_393534
// address: 0x00393534   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_393534(_DWORD *a1)
{
  *a1 = &off_4647A0;
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_393554
// address: 0x00393554   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_393554(_DWORD *a1)
{
  *a1 = &off_4647A0;
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_393574
// address: 0x00393574   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_393574(_DWORD *a1)
{
  *a1 = &off_464840;
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_393594
// address: 0x00393594   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_393594(_DWORD *a1)
{
  *a1 = &off_464670;
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3935B4
// address: 0x003935B4   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall sub_3935B4(_DWORD *a1)
{
  *a1 = &off_464650;
  sub_3A5428(a1 + 2);
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3935E0
// address: 0x003935E0   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall sub_3935E0(_DWORD *a1)
{
  sub_3935B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3935F4
// address: 0x003935F4   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3935F4(_DWORD *a1)
{
  *a1 = &off_4647F0;
  sub_3935B4(a1);
  return a1;
}


//======================================================================
// sub_39360C
// address: 0x0039360C   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_39360C(_DWORD *a1)
{
  *a1 = &off_4647F0;
  sub_3935B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_39362C
// address: 0x0039362C   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall sub_39362C(_DWORD *a1)
{
  *a1 = &off_4644C0;
  sub_3A5428(a1 + 2);
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_393658
// address: 0x00393658   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_393658(_DWORD *a1)
{
  *a1 = &off_4646D0;
  sub_3BFAE8();
  return a1;
}


//======================================================================
// sub_393670
// address: 0x00393670   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_393670(_DWORD *a1)
{
  *a1 = &off_4646D0;
  sub_3BFAE8();
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_393690
// address: 0x00393690   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_393690(_DWORD *a1)
{
  *a1 = &off_464708;
  sub_3BFAA0();
  return a1;
}


//======================================================================
// sub_3936A8
// address: 0x003936A8   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3936A8(_DWORD *a1)
{
  *a1 = &off_464708;
  sub_3BFAA0();
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3936C8
// address: 0x003936C8   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3936C8(_DWORD *a1)
{
  *a1 = &off_464528;
  sub_3BF884();
  return a1;
}


//======================================================================
// sub_3936E0
// address: 0x003936E0   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3936E0(_DWORD *a1)
{
  *a1 = &off_464528;
  sub_3BF884();
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_393700
// address: 0x00393700   size: 0x3E (62 bytes)
//======================================================================
_DWORD *__fastcall sub_393700(_DWORD *a1)
{
  void *v1; // r5
  int v3; // r0

  v1 = (void *)a1[4];
  *a1 = &off_4645D0;
  if ( v1 != (void *)sub_3A8868() && v1 != nullptr )
    operator delete[](v1);
  v3 = a1[2];
  if ( v3 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  sub_3A5428(a1 + 3);
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_39374C
// address: 0x0039374C   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall sub_39374C(_DWORD *a1)
{
  sub_393700(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_393760
// address: 0x00393760   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_393760(_DWORD *a1)
{
  *a1 = &off_4646A0;
  sub_39D5EC();
  return a1;
}


//======================================================================
// sub_393778
// address: 0x00393778   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_393778(_DWORD *a1)
{
  *a1 = &off_4646A0;
  sub_39D5EC();
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_393798
// address: 0x00393798   size: 0xAE (174 bytes)
//======================================================================
int __fastcall sub_393798(int a1, int a2, int a3, int a4, int a5)
{
  char *v7; // r4
  int v8; // r0
  char *v9; // r10
  char *v10; // r8
  int v11; // r11
  int v12; // r7
  char *i; // r5
  char *v14; // r4
  char *v15; // r5
  int v16; // r0
  int v17; // r4
  _BYTE v19[8]; // [sp+4h] [bp-8h] BYREF

  v7 = (char *)sub_3BEDB4(a2, a3, v19, 0);
  v8 = sub_3BEDB4(a4, a5, v19, 0);
  v9 = v7 - 12;
  v10 = &v7[*((_DWORD *)v7 - 3)];
  v11 = v8 - 12;
  v12 = v8 + *(_DWORD *)(v8 - 12);
  for ( i = (char *)v8; ; i = v15 + 1 )
  {
    v16 = sub_3A7E6C(a1, v7, i);
    if ( v16 != 0 )
    {
      v17 = v16;
      goto LABEL_7;
    }
    v14 = &v7[j_strlen(v7)];
    v15 = &i[j_strlen(i)];
    if ( v15 == (char *)v12 )
    {
      v17 = v14 != v10;
      goto LABEL_7;
    }
    if ( v14 == v10 )
      break;
    v7 = v14 + 1;
  }
  v17 = -1;
LABEL_7:
  sub_3BDF68(v11, v19);
  sub_3BDF68(v9, v19);
  return v17;
}


//======================================================================
// sub_393854
// address: 0x00393854   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_393854(int a1, int a2)
{
  sub_3A7D48(a1);
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 24))(a1, a2);
}


//======================================================================
// sub_39386C
// address: 0x0039386C   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall sub_39386C(_DWORD *a1)
{
  *a1 = &off_4644C0;
  sub_3A5428(a1 + 2);
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_393898
// address: 0x00393898   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall sub_393898(_DWORD *a1)
{
  *a1 = &off_4644C0;
  sub_3A5428(a1 + 2);
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3938C8
// address: 0x003938C8   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall sub_3938C8(_DWORD *a1)
{
  *a1 = &off_4644C0;
  sub_3A5428(a1 + 2);
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3938F8
// address: 0x003938F8   size: 0x104 (260 bytes)
//======================================================================
int *__fastcall sub_3938F8(int *a1, int a2, int a3, int a4)
{
  char *v8; // r5
  size_t v9; // r7
  char *v10; // r11
  char *v11; // r6
  int v12; // r3
  int v13; // r2
  int v14; // r8
  int v15; // r3
  int *v16; // r2
  unsigned int v17; // r0
  int v18; // r2
  char *v19; // r5
  char *v21; // [sp+Ch] [bp-10h]
  _BYTE v22[8]; // [sp+14h] [bp-8h] BYREF

  *a1 = (int)&byte_55FB88;
  v8 = (char *)sub_3BEDB4(a3, a4, v22, 0);
  v9 = 2 * (a4 - a3);
  v10 = &v8[*((_DWORD *)v8 - 3)];
  v21 = v8 - 12;
  v11 = (char *)operator new[](v9);
  while ( 1 )
  {
    v17 = sub_3A7E84(a2, v11, v8, v9);
    v18 = v17;
    if ( v9 <= v17 )
    {
      v9 = v17 + 1;
      if ( v11 != nullptr )
        operator delete[](v11);
      v11 = (char *)operator new[](v9);
      v18 = sub_3A7E84(a2, v11, v8, v9);
    }
    sub_3BE898(a1, v11, v18);
    v19 = &v8[j_strlen(v8)];
    if ( v19 == v10 )
      break;
    v12 = *a1;
    v8 = v19 + 1;
    v13 = *(_DWORD *)(*a1 - 12);
    v14 = v13 + 1;
    if ( (unsigned int)(v13 + 1) > *(_DWORD *)(*a1 - 8) || *(int *)(v12 - 4) > 0 )
    {
      sub_3BE700(a1, v13 + 1);
      v12 = *a1;
      v13 = *(_DWORD *)(*a1 - 12);
    }
    *(_BYTE *)(v12 + v13) = 0;
    v15 = *a1;
    v16 = (int *)(*a1 - 12);
    if ( v16 != &dword_55FB7C )
    {
      *(_DWORD *)(v15 - 4) = 0;
      *v16 = v14;
      *(_BYTE *)(v15 + v14) = 0;
    }
  }
  if ( v11 != nullptr )
    operator delete[](v11);
  sub_3BDF68(v21, v22);
  return a1;
}


//======================================================================
// sub_393A38
// address: 0x00393A38   size: 0x86 (134 bytes)
//======================================================================
int sub_393A38(int a1, char *a2, int a3, const char *a4, ...)
{
  char *v5; // r0
  const char *v6; // r4
  int v7; // r4
  size_t v9; // r8
  void *v10; // r5
  va_list va; // [sp+28h] [bp+1Ch] BYREF

  va_start(va, a4);
  v5 = j_setlocale(1, nullptr);
  v6 = v5;
  if ( v5 == nullptr || j_strcmp(v5, "C") == 0 )
    return j_vsprintf(a2, a4, va);
  v9 = j_strlen(v6) + 1;
  v10 = operator new[](v9);
  j_memcpy(v10, v6, v9);
  j_setlocale(1, "C");
  v7 = j_vsprintf(a2, a4, va);
  if ( v10 != nullptr )
  {
    j_setlocale(1, (const char *)v10);
    operator delete[](v10);
  }
  return v7;
}


//======================================================================
// sub_393AC4
// address: 0x00393AC4   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_393AC4(_BYTE *a1, const void *a2, int a3, void *a4)
{
  if ( a1[28] == 1 )
  {
    j_memcpy(a4, a2, a3 - (_DWORD)a2);
    return a3;
  }
  else
  {
    if ( a1[28] == 0 )
      sub_3A7D48(a1);
    return (*(int (__fastcall **)(_BYTE *, const void *, int, void *))(*(_DWORD *)a1 + 28))(a1, a2, a3, a4);
  }
}


//======================================================================
// sub_393B04
// address: 0x00393B04   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall sub_393B04(_DWORD *a1, int a2)
{
  *a1 = &off_464618;
  a1[1] = a2 != 0;
  a1[2] = 0;
  sub_3BFCBC();
  return a1;
}


//======================================================================
// sub_393B34
// address: 0x00393B34   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall sub_393B34(_DWORD *a1, int a2, int a3)
{
  a1[1] = a3 != 0;
  a1[2] = a2;
  *a1 = &off_464618;
  sub_3BFCBC();
  return a1;
}


//======================================================================
// sub_393B64
// address: 0x00393B64   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall sub_393B64(_DWORD *a1, int a2, int a3, int a4)
{
  a1[1] = a4 != 0;
  *a1 = &off_464618;
  a1[2] = 0;
  sub_3BFCBC(a1);
  return a1;
}


//======================================================================
// sub_393B94
// address: 0x00393B94   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_393B94(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_393BA0
// address: 0x00393BA0   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_393BA0(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_393BAC
// address: 0x00393BAC   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_393BAC(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 16))();
  return a1;
}


//======================================================================
// sub_393BBC
// address: 0x00393BBC   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_393BBC(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 20))();
  return a1;
}


//======================================================================
// sub_393BCC
// address: 0x00393BCC   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_393BCC(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 24))();
  return a1;
}


//======================================================================
// sub_393BDC
// address: 0x00393BDC   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_393BDC(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 28))();
  return a1;
}


//======================================================================
// sub_393BEC
// address: 0x00393BEC   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_393BEC(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
}


//======================================================================
// sub_393BF8
// address: 0x00393BF8   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_393BF8(int a1)
{
  unsigned int v1; // r0

  v1 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
  return (BYTE1(v1) << 8) | (unsigned __int8)v1 | (BYTE2(v1) << 16) | (HIBYTE(v1) << 24);
}


//======================================================================
// sub_393C24
// address: 0x00393C24   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_393C24(int a1)
{
  unsigned int v1; // r0

  v1 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a1);
  return (BYTE1(v1) << 8) | (unsigned __int8)v1 | (BYTE2(v1) << 16) | (HIBYTE(v1) << 24);
}


//======================================================================
// sub_393C50
// address: 0x00393C50   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall sub_393C50(_DWORD *a1, int a2)
{
  *a1 = &off_4645E0;
  a1[1] = a2 != 0;
  a1[2] = 0;
  sub_3BFBF0();
  return a1;
}


//======================================================================
// sub_393C80
// address: 0x00393C80   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall sub_393C80(_DWORD *a1, int a2, int a3)
{
  a1[1] = a3 != 0;
  a1[2] = a2;
  *a1 = &off_4645E0;
  sub_3BFBF0();
  return a1;
}


//======================================================================
// sub_393CB0
// address: 0x00393CB0   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall sub_393CB0(_DWORD *a1, int a2, int a3, int a4)
{
  a1[1] = a4 != 0;
  *a1 = &off_4645E0;
  a1[2] = 0;
  sub_3BFBF0(a1);
  return a1;
}


//======================================================================
// sub_393CE0
// address: 0x00393CE0   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_393CE0(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_393CEC
// address: 0x00393CEC   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_393CEC(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_393CF8
// address: 0x00393CF8   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_393CF8(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 16))();
  return a1;
}


//======================================================================
// sub_393D08
// address: 0x00393D08   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_393D08(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 20))();
  return a1;
}


//======================================================================
// sub_393D18
// address: 0x00393D18   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_393D18(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 24))();
  return a1;
}


//======================================================================
// sub_393D28
// address: 0x00393D28   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_393D28(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 28))();
  return a1;
}


//======================================================================
// sub_393D38
// address: 0x00393D38   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_393D38(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
}


//======================================================================
// sub_393D44
// address: 0x00393D44   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_393D44(int a1)
{
  unsigned int v1; // r0

  v1 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
  return (BYTE1(v1) << 8) | (unsigned __int8)v1 | (BYTE2(v1) << 16) | (HIBYTE(v1) << 24);
}


//======================================================================
// sub_393D70
// address: 0x00393D70   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_393D70(int a1)
{
  unsigned int v1; // r0

  v1 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a1);
  return (BYTE1(v1) << 8) | (unsigned __int8)v1 | (BYTE2(v1) << 16) | (HIBYTE(v1) << 24);
}


//======================================================================
// sub_393E44
// address: 0x00393E44   size: 0x6A (106 bytes)
//======================================================================
_DWORD *__fastcall sub_393E44(_DWORD *a1, char *a2, int a3)
{
  int v6; // [sp+4h] [bp-4h] BYREF

  *a1 = &off_464618;
  a1[1] = a3 != 0;
  a1[2] = 0;
  sub_3BFCBC(a1);
  *a1 = &off_4646D0;
  if ( j_strcmp(a2, "C") != 0 && j_strcmp(a2, "POSIX") != 0 )
  {
    sub_3A5400((int)&v6, a2);
    sub_3BFCBC(a1);
    sub_3A5428(&v6);
  }
  return a1;
}


//======================================================================
// sub_393ED4
// address: 0x00393ED4   size: 0x6A (106 bytes)
//======================================================================
_DWORD *__fastcall sub_393ED4(_DWORD *a1, char *a2, int a3)
{
  int v6; // [sp+4h] [bp-4h] BYREF

  *a1 = &off_4645E0;
  a1[1] = a3 != 0;
  a1[2] = 0;
  sub_3BFBF0(a1);
  *a1 = &off_464708;
  if ( j_strcmp(a2, "C") != 0 && j_strcmp(a2, "POSIX") != 0 )
  {
    sub_3A5400((int)&v6, a2);
    sub_3BFBF0(a1);
    sub_3A5428(&v6);
  }
  return a1;
}


//======================================================================
// sub_393F64
// address: 0x00393F64   size: 0x10 (16 bytes)
//======================================================================
__int64 __fastcall sub_393F64(__int64 result)
{
  HIDWORD(result) = HIDWORD(result) != 0;
  *(_DWORD *)(result + 4) = HIDWORD(result);
  *(_DWORD *)result = &off_464740;
  return result;
}


//======================================================================
// sub_393F78
// address: 0x00393F78   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_393F78(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int8 a7, int a8, int a9, int a10)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, _DWORD, int, int, int, int, int))(*(_DWORD *)a2 + 8))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a3,
    a4);
  return a1;
}


//======================================================================
// sub_393FB8
// address: 0x00393FB8   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_393FB8(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int8 a7, int a8, int a9, int a10)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, _DWORD, int, int, int, int, int))(*(_DWORD *)a2 + 12))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a3,
    a4);
  return a1;
}


//======================================================================
// sub_393FF8
// address: 0x00393FF8   size: 0x10 (16 bytes)
//======================================================================
__int64 __fastcall sub_393FF8(__int64 result)
{
  HIDWORD(result) = HIDWORD(result) != 0;
  *(_DWORD *)(result + 4) = HIDWORD(result);
  *(_DWORD *)result = &off_464758;
  return result;
}


//======================================================================
// sub_39400C
// address: 0x0039400C   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_39400C(int a1, int a2, int a3, int a4, unsigned __int8 a5, int a6, unsigned __int8 a7)
{
  (*(void (__fastcall **)(int, int, int, int, _DWORD, int, _DWORD))(*(_DWORD *)a2 + 8))(a1, a2, a3, a4, a5, a6, a7);
  return a1;
}


//======================================================================
// sub_394044
// address: 0x00394044   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_394044(int a1, int a2, int a3, int a4, unsigned __int8 a5, int a6, unsigned __int8 a7, int a8)
{
  (*(void (__fastcall **)(int, int, int, int, _DWORD, int, _DWORD, int, int, int))(*(_DWORD *)a2 + 12))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a3,
    a4);
  return a1;
}


//======================================================================
// sub_394078
// address: 0x00394078   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall sub_394078(_DWORD *a1, int a2)
{
  *a1 = &off_464500;
  a1[1] = a2 != 0;
  a1[2] = 0;
  sub_3BF914();
  return a1;
}


//======================================================================
// sub_3940A8
// address: 0x003940A8   size: 0x1E (30 bytes)
//======================================================================
_DWORD *__fastcall sub_3940A8(_DWORD *a1, int a2, int a3)
{
  a1[2] = a2;
  a1[1] = a3 != 0;
  *a1 = &off_464500;
  sub_3BF914();
  return a1;
}


//======================================================================
// sub_3940D4
// address: 0x003940D4   size: 0x1E (30 bytes)
//======================================================================
_DWORD *__fastcall sub_3940D4(_DWORD *a1, int a2, int a3)
{
  *a1 = &off_464500;
  a1[1] = a3 != 0;
  a1[2] = 0;
  sub_3BF914();
  return a1;
}


//======================================================================
// sub_394100
// address: 0x00394100   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_394100(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_39410C
// address: 0x0039410C   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_39410C(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_394118
// address: 0x00394118   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_394118(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 16))();
  return a1;
}


//======================================================================
// sub_394128
// address: 0x00394128   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_394128(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 20))();
  return a1;
}


//======================================================================
// sub_394138
// address: 0x00394138   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_394138(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 24))();
  return a1;
}


//======================================================================
// sub_394178
// address: 0x00394178   size: 0x66 (102 bytes)
//======================================================================
_DWORD *__fastcall sub_394178(_DWORD *a1, char *a2, int a3)
{
  int v6; // [sp+4h] [bp-4h] BYREF

  *a1 = &off_464500;
  a1[1] = a3 != 0;
  a1[2] = 0;
  ((void (*)(void))sub_3BF914)();
  *a1 = &off_464528;
  if ( j_strcmp(a2, "C") != 0 && j_strcmp(a2, "POSIX") != 0 )
  {
    sub_3A5400((int)&v6, a2);
    sub_3BF914(a1, v6);
    sub_3A5428(&v6);
  }
  return a1;
}


//======================================================================
// sub_394204
// address: 0x00394204   size: 0x10 (16 bytes)
//======================================================================
__int64 __fastcall sub_394204(__int64 result)
{
  HIDWORD(result) = HIDWORD(result) != 0;
  *(_DWORD *)(result + 4) = HIDWORD(result);
  *(_DWORD *)result = &off_464550;
  return result;
}


//======================================================================
// sub_394218
// address: 0x00394218   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_394218(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 8))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_39424C
// address: 0x0039424C   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_39424C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 12))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_394280
// address: 0x00394280   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_394280(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 16))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3942B4
// address: 0x003942B4   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3942B4(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 20))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3942E8
// address: 0x003942E8   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3942E8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 24))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_39431C
// address: 0x0039431C   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_39431C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 28))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_394350
// address: 0x00394350   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_394350(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 32))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_394384
// address: 0x00394384   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_394384(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 36))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3943B8
// address: 0x003943B8   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3943B8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 40))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3943EC
// address: 0x003943EC   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3943EC(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 44))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_394420
// address: 0x00394420   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_394420(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 48))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_394454
// address: 0x00394454   size: 0x10 (16 bytes)
//======================================================================
__int64 __fastcall sub_394454(__int64 result)
{
  HIDWORD(result) = HIDWORD(result) != 0;
  *(_DWORD *)(result + 4) = HIDWORD(result);
  *(_DWORD *)result = &off_464590;
  return result;
}


//======================================================================
// sub_394468
// address: 0x00394468   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_394468(int a1, int a2, int a3, int a4, int a5, unsigned __int8 a6, unsigned __int8 a7)
{
  (*(void (__fastcall **)(int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)a2 + 8))(a1, a2, a3, a4, a5, a6, a7);
  return a1;
}


//======================================================================
// sub_39449C
// address: 0x0039449C   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_39449C(int a1, int a2, int a3, int a4, int a5, unsigned __int8 a6, int a7)
{
  (*(void (__fastcall **)(int, int, int, int, int, _DWORD, int))(*(_DWORD *)a2 + 12))(a1, a2, a3, a4, a5, a6, a7);
  return a1;
}


//======================================================================
// sub_3944CC
// address: 0x003944CC   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_3944CC(int a1, int a2, int a3, int a4, int a5, unsigned __int8 a6, int a7)
{
  (*(void (__fastcall **)(int, int, int, int, int, _DWORD, int))(*(_DWORD *)a2 + 16))(a1, a2, a3, a4, a5, a6, a7);
  return a1;
}


//======================================================================
// sub_3944FC
// address: 0x003944FC   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_3944FC(int a1, int a2, int a3, int a4, int a5, unsigned __int8 a6, int a7, int a8)
{
  (*(void (__fastcall **)(int, int, int, int, int, _DWORD, int, int, int, int))(*(_DWORD *)a2 + 20))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a3,
    a4);
  return a1;
}


//======================================================================
// sub_394530
// address: 0x00394530   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_394530(int a1, int a2, int a3, int a4, int a5, unsigned __int8 a6, int a7, int a8)
{
  (*(void (__fastcall **)(int, int, int, int, int, _DWORD, int, int, int, int))(*(_DWORD *)a2 + 24))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a3,
    a4);
  return a1;
}


//======================================================================
// sub_394564
// address: 0x00394564   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_394564(int a1, int a2, int a3, int a4, int a5, unsigned __int8 a6, int a7, int a8)
{
  (*(void (__fastcall **)(int, int, int, int, int, _DWORD, int, int, int, int))(*(_DWORD *)a2 + 28))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a3,
    a4);
  return a1;
}


//======================================================================
// sub_394598
// address: 0x00394598   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_394598(int a1, int a2, int a3, int a4, int a5, unsigned __int8 a6, int a7, int a8)
{
  (*(void (__fastcall **)(int, int, int, int, int, _DWORD, int, int, int, int))(*(_DWORD *)a2 + 32))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a3,
    a4);
  return a1;
}


//======================================================================
// sub_3945CC
// address: 0x003945CC   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_3945CC(int a1, int a2, int a3, int a4, int a5, unsigned __int8 a6, int a7)
{
  (*(void (__fastcall **)(int, int, int, int, int, _DWORD, int))(*(_DWORD *)a2 + 36))(a1, a2, a3, a4, a5, a6, a7);
  return a1;
}


//======================================================================
// sub_3945FC
// address: 0x003945FC   size: 0x28 (40 bytes)
//======================================================================
_DWORD *__fastcall sub_3945FC(_DWORD *a1, int a2)
{
  *a1 = &off_4645D0;
  a1[1] = a2 != 0;
  a1[2] = 0;
  a1[4] = sub_3A8868();
  sub_3A54B8(a1, 0);
  return a1;
}


//======================================================================
// sub_394634
// address: 0x00394634   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_394634(_DWORD *a1, int a2, int a3)
{
  a1[2] = a2;
  a1[1] = a3 != 0;
  *a1 = &off_4645D0;
  a1[4] = sub_3A8868();
  sub_3A54B8(a1, 0);
  return a1;
}


//======================================================================
// sub_394668
// address: 0x00394668   size: 0x64 (100 bytes)
//======================================================================
_DWORD *__fastcall sub_394668(_DWORD *a1, int a2, const char *a3, int a4)
{
  const char *v7; // r5
  size_t v9; // r9
  void *v10; // r8

  a1[1] = a4 != 0;
  *a1 = &off_4645D0;
  a1[2] = 0;
  v7 = (const char *)sub_3A8868();
  if ( j_strcmp(a3, v7) == 0 )
  {
    a1[4] = v7;
  }
  else
  {
    v9 = j_strlen(a3) + 1;
    v10 = operator new[](v9);
    j_memcpy(v10, a3, v9);
    a1[4] = v10;
  }
  sub_3A54B8(a1, a2);
  return a1;
}


//======================================================================
// sub_3946F8
// address: 0x003946F8   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3946F8(int result, _DWORD *a2)
{
  *a2 = *(_DWORD *)(*(_DWORD *)(result + 8) + 8);
  a2[1] = *(_DWORD *)(*(_DWORD *)(result + 8) + 12);
  return result;
}


//======================================================================
// sub_394708
// address: 0x00394708   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_394708(int result, _DWORD *a2)
{
  *a2 = *(_DWORD *)(*(_DWORD *)(result + 8) + 16);
  a2[1] = *(_DWORD *)(*(_DWORD *)(result + 8) + 20);
  return result;
}


//======================================================================
// sub_394718
// address: 0x00394718   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_394718(int result, _DWORD *a2)
{
  *a2 = *(_DWORD *)(*(_DWORD *)(result + 8) + 24);
  a2[1] = *(_DWORD *)(*(_DWORD *)(result + 8) + 28);
  return result;
}


//======================================================================
// sub_39472C
// address: 0x0039472C   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_39472C(int result, _DWORD *a2)
{
  *a2 = *(_DWORD *)(*(_DWORD *)(result + 8) + 32);
  a2[1] = *(_DWORD *)(*(_DWORD *)(result + 8) + 36);
  return result;
}


//======================================================================
// sub_3948E8
// address: 0x003948E8   size: 0x10 (16 bytes)
//======================================================================
__int64 __fastcall sub_3948E8(__int64 result)
{
  HIDWORD(result) = HIDWORD(result) != 0;
  *(_DWORD *)(result + 4) = HIDWORD(result);
  *(_DWORD *)result = &off_464770;
  return result;
}


//======================================================================
// sub_3948FC
// address: 0x003948FC   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_3948FC(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned __int8 a6,
        int a7,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)a2 + 8))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_394938
// address: 0x00394938   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_394938(_DWORD *result, int a2, int a3)
{
  result[1] = a3 != 0;
  *result = &off_464788;
  return result;
}


//======================================================================
// sub_39494C
// address: 0x0039494C   size: 0x10 (16 bytes)
//======================================================================
__int64 __fastcall sub_39494C(__int64 result)
{
  HIDWORD(result) = HIDWORD(result) != 0;
  *(_DWORD *)(result + 4) = HIDWORD(result);
  *(_DWORD *)result = &off_4647A0;
  return result;
}


//======================================================================
// sub_394960
// address: 0x00394960   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_394960(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_39496C
// address: 0x0039496C   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_39496C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 12))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3949A0
// address: 0x003949A0   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3949A0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 16))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3949D4
// address: 0x003949D4   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3949D4(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 20))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_394A08
// address: 0x00394A08   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_394A08(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 24))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_394A3C
// address: 0x00394A3C   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_394A3C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 28))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_394A70
// address: 0x00394A70   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_394A70(_DWORD *result, int a2, int a3)
{
  result[1] = a3 != 0;
  *result = &off_4647C8;
  return result;
}


//======================================================================
// sub_394A84
// address: 0x00394A84   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall sub_394A84(_DWORD *a1, int a2)
{
  a1[1] = a2 != 0;
  *a1 = &off_464650;
  a1[2] = sub_3A8844();
  return a1;
}


//======================================================================
// sub_394AB0
// address: 0x00394AB0   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall sub_394AB0(_DWORD *a1, int a2, int a3, int a4)
{
  a1[1] = a4 != 0;
  *a1 = &off_464650;
  a1[2] = sub_3A8844();
  return a1;
}


//======================================================================
// sub_394ADC
// address: 0x00394ADC   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_394ADC(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_394AE8
// address: 0x00394AE8   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_394AE8(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_394AF4
// address: 0x00394AF4   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_394AF4(int a1, int a2)
{
  (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 12))(a1);
  return a1;
}


//======================================================================
// sub_394B10
// address: 0x00394B10   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_394B10(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
}


//======================================================================
// sub_394B1C
// address: 0x00394B1C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_394B1C(int a1, int a2)
{
  return *(_DWORD *)a2;
}


//======================================================================
// sub_394B20
// address: 0x00394B20   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall sub_394B20(_DWORD *result)
{
  *result = &byte_55FB88;
  return result;
}


//======================================================================
// sub_394B30
// address: 0x00394B30   size: 0x4A (74 bytes)
//======================================================================
_DWORD *__fastcall sub_394B30(_DWORD *a1, char *a2, int a3)
{
  sub_394A84(a1, a3);
  *a1 = &off_4647F0;
  if ( j_strcmp(a2, "C") != 0 && j_strcmp(a2, "POSIX") != 0 )
  {
    sub_3A5428(a1 + 2);
    sub_3A5400((int)(a1 + 2), a2);
  }
  return a1;
}


//======================================================================
// sub_394B90
// address: 0x00394B90   size: 0x4A (74 bytes)
//======================================================================
_DWORD *__fastcall sub_394B90(_DWORD *a1, char *a2, int a3)
{
  sub_39D6A4(a1, a3);
  *a1 = &off_4646A0;
  if ( j_strcmp(a2, "C") != 0 && j_strcmp(a2, "POSIX") != 0 )
  {
    sub_3A5428(a1 + 2);
    sub_3A5400((int)(a1 + 2), a2);
  }
  return a1;
}


//======================================================================
// sub_394BF0
// address: 0x00394BF0   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall sub_394BF0(_DWORD *a1, int a2)
{
  a1[1] = a2 != 0;
  *a1 = &off_4644C0;
  a1[2] = sub_3A8844();
  return a1;
}


//======================================================================
// sub_394C1C
// address: 0x00394C1C   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_394C1C(_DWORD *a1, int a2, int a3)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  a1[1] = a3 != 0;
  *a1 = &off_4644C0;
  v5 = a2;
  a1[2] = sub_3A5430(&v5);
  return a1;
}


//======================================================================
// sub_394C44
// address: 0x00394C44   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_394C44(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_394C58
// address: 0x00394C58   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_394C58(int a1, int a2)
{
  (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 12))(a1);
  return a1;
}


//======================================================================
// sub_394C68
// address: 0x00394C68   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_394C68(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
}


//======================================================================
// sub_394C74
// address: 0x00394C74   size: 0x58 (88 bytes)
//======================================================================
_DWORD *__fastcall sub_394C74(_DWORD *a1, char *a2, int a3)
{
  a1[1] = a3 != 0;
  *a1 = &off_4644C0;
  a1[2] = sub_3A8844();
  *a1 = &off_4644E0;
  if ( j_strcmp(a2, "C") != 0 && j_strcmp(a2, "POSIX") != 0 )
  {
    sub_3A5428(a1 + 2);
    sub_3A5400((int)(a1 + 2), a2);
  }
  return a1;
}


//======================================================================
// sub_394CF0
// address: 0x00394CF0   size: 0x40 (64 bytes)
//======================================================================
void *__fastcall sub_394CF0(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&unk_55FADC);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::ctype<char>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_394D3C
// address: 0x00394D3C   size: 0x184 (388 bytes)
//======================================================================
_DWORD *__fastcall sub_394D3C(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned __int8 *a8,
        unsigned __int8 *a9)
{
  unsigned __int8 *v11; // r4
  _BYTE *v12; // r6
  unsigned __int8 *v13; // r5
  int v14; // r1
  int v15; // r7
  int v16; // r1
  int v17; // r4
  int v18; // r1
  int v19; // r5
  int v20; // r0
  int v21; // r1
  _BYTE *v22; // r3
  int v24; // r0
  int v25; // r0
  int v26; // [sp+1Ch] [bp-18h]
  int v27; // [sp+20h] [bp-14h]
  int v29; // [sp+34h] [bp+0h]
  _DWORD *v30; // [sp+38h] [bp+4h] BYREF
  unsigned __int8 v31; // [sp+3Ch] [bp+8h]

  v29 = a4;
  v11 = a8;
  v26 = (unsigned __int8)a4;
  v12 = sub_394CF0(a5 + 108);
  if ( a8 != a9 )
  {
    while ( 1 )
    {
      v18 = *v11;
      v19 = (int)&v12[v18 + 280];
      v20 = (unsigned __int8)v12[v18 + 285];
      if ( v12[v18 + 285] == 0 )
      {
        v20 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v12 + 32))(v12);
        if ( v20 == 0 )
          goto LABEL_12;
        *(_BYTE *)(v19 + 5) = v20;
      }
      if ( v20 == 37 )
      {
        v13 = v11 + 1;
        if ( a9 == v11 + 1 )
          break;
        v14 = v11[1];
        v27 = (int)&v12[v14 + 280];
        v15 = (unsigned __int8)v12[v14 + 285];
        if ( v12[v14 + 285] != 0 )
        {
          if ( v15 == 79 )
            goto LABEL_6;
LABEL_21:
          if ( v15 != 69 )
          {
LABEL_8:
            (*(void (__fastcall **)(_DWORD **, int))(*(_DWORD *)a2 + 8))(&v30, a2);
            a3 = v30;
            v26 = v31;
            goto LABEL_9;
          }
        }
        else
        {
          v24 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v12 + 32))(v12);
          if ( v24 == 0 )
            goto LABEL_8;
          *(_BYTE *)(v27 + 5) = v24;
          v15 = v24;
          if ( v24 != 79 )
            goto LABEL_21;
        }
LABEL_6:
        v13 = v11 + 2;
        if ( a9 == v11 + 2 )
          break;
        v16 = v11[2];
        v17 = (int)&v12[v16 + 280];
        if ( v12[v16 + 285] == 0 )
        {
          v25 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v12 + 32))(v12);
          if ( v25 != 0 )
            *(_BYTE *)(v17 + 5) = v25;
        }
        goto LABEL_8;
      }
LABEL_12:
      v21 = *v11;
      if ( v26 != 0 )
      {
LABEL_15:
        if ( a9 == ++v11 )
          break;
      }
      else
      {
        v22 = (_BYTE *)a3[5];
        if ( (unsigned int)v22 < a3[6] )
        {
          *v22 = v21;
          ++a3[5];
          goto LABEL_15;
        }
        if ( (*(int (__fastcall **)(_DWORD *, int))(*a3 + 52))(a3, v21) != -1 )
          goto LABEL_15;
        v13 = v11;
        v26 = 1;
LABEL_9:
        v11 = v13 + 1;
        if ( a9 == v13 + 1 )
          break;
      }
    }
  }
  LOBYTE(v29) = v26;
  *a1 = a3;
  a1[1] = v29;
  return a1;
}


//======================================================================
// sub_394EC0
// address: 0x00394EC0   size: 0x1B6 (438 bytes)
//======================================================================
_DWORD *__fastcall sub_394EC0(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        _DWORD *a12)
{
  void *v15; // r11
  int v16; // r6
  int i; // r8
  int v19; // r3
  int v20; // r1
  int v21; // r3
  int v22; // r0
  int v23; // r9
  int v24; // r0
  unsigned int v25; // r3
  unsigned __int8 *v26; // r3
  unsigned __int8 *v27; // r3
  unsigned __int8 *v28; // r3
  int v29; // r7
  int v30; // r9
  int v31; // r3

  v15 = sub_394CF0(a11 + 108);
  if ( a10 == 2 )
  {
    v29 = 10;
  }
  else
  {
    v29 = 1;
    if ( a10 == 4 )
      v29 = 1000;
  }
  v16 = 0;
  for ( i = 0; ; ++i )
  {
    if ( a3 == nullptr )
    {
      v30 = 1;
      goto LABEL_9;
    }
    v30 = 0;
    if ( a4 == -1 )
    {
      v26 = (unsigned __int8 *)a3[2];
      if ( (unsigned int)v26 < a3[3] )
      {
        a4 = *v26;
LABEL_31:
        v30 = 0;
        goto LABEL_9;
      }
      a4 = (*(int (__fastcall **)(_DWORD *, int))(*a3 + 36))(a3, a4 + 1);
      if ( a4 != -1 )
        goto LABEL_31;
      v30 = 1;
      a3 = nullptr;
    }
LABEL_9:
    if ( a5 == nullptr )
    {
      v31 = 1;
      goto LABEL_12;
    }
    v31 = 0;
    if ( a6 == -1 )
    {
      v27 = (unsigned __int8 *)a5[2];
      if ( (unsigned int)v27 < a5[3] )
      {
        a6 = *v27;
LABEL_34:
        v31 = 0;
        goto LABEL_12;
      }
      a6 = (*(int (__fastcall **)(_DWORD *))(*a5 + 36))(a5);
      if ( a6 != -1 )
        goto LABEL_34;
      v31 = 1;
      a5 = nullptr;
    }
LABEL_12:
    if ( v31 == v30 )
      break;
    if ( i == a10 )
      goto LABEL_14;
    v19 = 255;
    v20 = 255;
    if ( a3 != nullptr )
    {
      if ( a4 != -1 )
        goto LABEL_19;
      v28 = (unsigned __int8 *)a3[2];
      if ( (unsigned int)v28 < a3[3] )
      {
        a4 = *v28;
LABEL_19:
        v20 = (unsigned __int8)a4;
        v19 = (unsigned __int8)a4;
        goto LABEL_20;
      }
      a4 = (*(int (__fastcall **)(_DWORD *, int))(*a3 + 36))(a3, a4 + 1);
      if ( a4 != -1 )
        goto LABEL_19;
      v19 = 255;
      v20 = 255;
      a3 = nullptr;
    }
LABEL_20:
    v21 = (int)v15 + v19 + 280;
    v22 = *(unsigned __int8 *)(v21 + 5);
    v23 = v21;
    if ( *(_BYTE *)(v21 + 5) == 0 )
    {
      v22 = (*(int (__fastcall **)(void *, int, int))(*(_DWORD *)v15 + 32))(v15, v20, 42);
      if ( v22 == 42 )
        goto LABEL_39;
      *(_BYTE *)(v23 + 5) = v22;
    }
    v24 = v22 - 48;
    if ( (unsigned __int8)v24 > 9u )
      goto LABEL_39;
    v16 = 10 * v16 + v24;
    if ( v29 * v16 > a9 || a8 >= v29 * v16 + v29 )
      goto LABEL_39;
    v29 /= 10;
    if ( a3 != nullptr )
    {
      v25 = a3[2];
      if ( v25 >= a3[3] )
        (*(void (__fastcall **)(_DWORD *))(*a3 + 40))(a3);
      else
        a3[2] = v25 + 1;
      a4 = -1;
    }
  }
  if ( i == a10 )
  {
LABEL_14:
    *a7 = v16;
    goto LABEL_15;
  }
LABEL_39:
  if ( i == 2 && a10 == 4 )
  {
    v16 -= 100;
    goto LABEL_14;
  }
  *a12 |= 4u;
LABEL_15:
  *a1 = a3;
  a1[1] = a4;
  return a1;
}


//======================================================================
// sub_395078
// address: 0x00395078   size: 0xF8 (248 bytes)
//======================================================================
_DWORD *__fastcall sub_395078(_DWORD *a1, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8, int a9)
{
  _DWORD *v11; // r4
  int v12; // r5
  int v13; // r2
  int v14; // r8
  int v15; // r3
  unsigned __int8 *v17; // r3
  _DWORD v18[2]; // [sp+20h] [bp-1Ch] BYREF
  _DWORD *v19; // [sp+28h] [bp-14h]
  int v20; // [sp+2Ch] [bp-10h]
  int v21; // [sp+30h] [bp-Ch] BYREF
  int v22; // [sp+34h] [bp-8h] BYREF

  v19 = a3;
  v20 = a4;
  sub_394CF0(a7 + 108);
  v22 = 0;
  sub_394EC0(v18, a2, v19, v20, a5, a6, &v21, 0, 9999, 4, a7, &v22);
  v19 = (_DWORD *)v18[0];
  v20 = v18[1];
  v11 = (_DWORD *)v18[0];
  v12 = v18[1];
  if ( v22 != 0 )
  {
    *a8 |= 4u;
  }
  else
  {
    v13 = v21 - 1900;
    if ( v21 < 0 )
      v13 = v21 + 100;
    *(_DWORD *)(a9 + 20) = v13;
  }
  if ( v11 != nullptr )
  {
    v14 = 0;
    if ( v12 == -1 )
    {
      v17 = (unsigned __int8 *)v11[2];
      if ( (unsigned int)v17 >= v11[3] )
      {
        v12 = (*(int (__fastcall **)(_DWORD *))(*v11 + 36))(v11);
        if ( v12 == -1 )
        {
          v14 = 1;
          v11 = nullptr;
          goto LABEL_7;
        }
      }
      else
      {
        v12 = *v17;
      }
      v14 = 0;
    }
  }
  else
  {
    v14 = 1;
  }
LABEL_7:
  if ( a5 == nullptr )
    goto LABEL_19;
  v15 = 0;
  if ( a6 == -1 )
  {
    if ( a5[2] < a5[3] || (*(int (**)(void))(*a5 + 36))() != -1 )
      v15 = 0;
    else
LABEL_19:
      v15 = 1;
  }
  if ( v15 == v14 )
    *a8 |= 2u;
  *a1 = v11;
  a1[1] = v12;
  return a1;
}


//======================================================================
// sub_395178
// address: 0x00395178   size: 0x40 (64 bytes)
//======================================================================
void *__fastcall sub_395178(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&unk_55ED08);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::codecvt<char,char,mbstate_t>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_3951C4
// address: 0x003951C4   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_3951C4(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&unk_55ECD8);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::collate<char>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_39520C
// address: 0x0039520C   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_39520C(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&unk_55ECF4);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::numpunct<char>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_395254
// address: 0x00395254   size: 0x27E (638 bytes)
//======================================================================
void *__fastcall sub_395254(int a1, int a2)
{
  int *v4; // r5
  int v5; // r3
  int *v6; // r7
  size_t v7; // r0
  char *v8; // r7
  int v9; // r8
  int v10; // r2
  unsigned int v11; // r3
  int v12; // r3
  size_t v13; // r0
  int *v14; // r8
  void *v15; // r9
  int v16; // r8
  int v17; // r3
  size_t v18; // r0
  int *v19; // r8
  void *v20; // r8
  int v21; // r11
  int v22; // r3
  _BYTE *v23; // r0
  char *v24; // r6
  char *v25; // r11
  _BYTE *v26; // r5
  void *v27; // r4
  char *v28; // r6
  char *v29; // r10
  int v31; // [sp+8h] [bp-1Ch] BYREF
  int v32; // [sp+Ch] [bp-18h] BYREF
  int v33; // [sp+10h] [bp-14h] BYREF
  int v34; // [sp+14h] [bp-10h] BYREF
  int v35; // [sp+18h] [bp-Ch] BYREF
  _DWORD v36[2]; // [sp+1Ch] [bp-8h] BYREF

  *(_BYTE *)(a1 + 100) = 1;
  v4 = (int *)sub_39520C(a2);
  (*(void (__fastcall **)(int *, int *))(*v4 + 16))(&v31, v4);
  v5 = v31;
  v6 = (int *)(v31 - 12);
  v7 = *(_DWORD *)(v31 - 12);
  *(_DWORD *)(a1 + 12) = v7;
  if ( v6 != &dword_55FB7C )
  {
    if ( sub_3C82FC(v5 - 4, -1) <= 0 )
      sub_3BDF60(v6, v36);
    v7 = *(_DWORD *)(a1 + 12);
  }
  v8 = (char *)operator new[](v7);
  (*(void (__fastcall **)(int *, int *))(*v4 + 16))(&v32, v4);
  sub_3BD82C((int)&v32, v8);
  v9 = v32 - 12;
  if ( (int *)(v32 - 12) != &dword_55FB7C && sub_3C82FC(v32 - 4, -1) <= 0 )
    sub_3BDF60(v9, v36);
  v10 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 8) = v8;
  LOBYTE(v11) = 0;
  if ( v10 != 0 )
    v11 = (unsigned int)((*v8 >> 31) - *v8) >> 31;
  *(_BYTE *)(a1 + 16) = v11;
  (*(void (__fastcall **)(int *, int *))(*v4 + 20))(&v33, v4);
  v12 = v33;
  v13 = *(_DWORD *)(v33 - 12);
  v14 = (int *)(v33 - 12);
  *(_DWORD *)(a1 + 24) = v13;
  if ( v14 != &dword_55FB7C )
  {
    if ( sub_3C82FC(v12 - 4, -1) <= 0 )
      sub_3BDF60(v14, v36);
    v13 = *(_DWORD *)(a1 + 24);
  }
  v15 = operator new[](v13);
  (*(void (__fastcall **)(int *, int *))(*v4 + 20))(&v34, v4);
  sub_3BD82C((int)&v34, v15);
  v16 = v34 - 12;
  if ( (int *)(v34 - 12) != &dword_55FB7C && sub_3C82FC(v34 - 4, -1) <= 0 )
    sub_3BDF60(v16, v36);
  *(_DWORD *)(a1 + 20) = v15;
  (*(void (__fastcall **)(int *, int *))(*v4 + 24))(&v35, v4);
  v17 = v35;
  v18 = *(_DWORD *)(v35 - 12);
  v19 = (int *)(v35 - 12);
  *(_DWORD *)(a1 + 32) = v18;
  if ( v19 != &dword_55FB7C )
  {
    if ( sub_3C82FC(v17 - 4, -1) <= 0 )
      sub_3BDF60(v19, v36);
    v18 = *(_DWORD *)(a1 + 32);
  }
  v20 = operator new[](v18);
  (*(void (__fastcall **)(_DWORD *, int *))(*v4 + 24))(v36, v4);
  sub_3BD82C((int)v36, v20);
  v21 = v36[0] - 12;
  if ( (int *)(v36[0] - 12) != &dword_55FB7C && sub_3C82FC(v36[0] - 4, -1) <= 0 )
    sub_3BDF60(v21, &v35);
  v22 = *v4;
  *(_DWORD *)(a1 + 28) = v20;
  *(_BYTE *)(a1 + 36) = (*(int (__fastcall **)(int *))(v22 + 8))(v4);
  *(_BYTE *)(a1 + 37) = (*(int (__fastcall **)(int *))(*v4 + 12))(v4);
  v23 = sub_394CF0(a2);
  v24 = off_472454[0];
  v25 = off_472454[0] + 36;
  v26 = v23;
  if ( v23[28] == 1 )
  {
    j_memcpy((void *)(a1 + 38), off_472454[0], 0x24u);
  }
  else
  {
    if ( v23[28] == 0 )
      sub_3A7D48(v23);
    (*(void (__fastcall **)(_BYTE *, char *, char *, int))(*(_DWORD *)v26 + 28))(v26, v24, v25, a1 + 38);
  }
  v27 = (void *)(a1 + 74);
  v28 = off_472450[0];
  v29 = off_472450[0] + 26;
  if ( v26[28] == 1 )
    return j_memcpy(v27, off_472450[0], 0x1Au);
  if ( v26[28] == 0 )
    sub_3A7D48(v26);
  return (void *)(*(int (__fastcall **)(_BYTE *, char *, char *, void *))(*(_DWORD *)v26 + 28))(v26, v28, v29, v27);
}


//======================================================================
// sub_39556C
// address: 0x0039556C   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_39556C(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&unk_55ECEC);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::num_put<char,std::ostreambuf_iterator<char>>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_3955B4
// address: 0x003955B4   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_3955B4(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&unk_55ECF0);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::num_get<char,std::istreambuf_iterator<char>>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_3955FC
// address: 0x003955FC   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_3955FC(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&unk_55ED00);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::moneypunct<char,true>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_395644
// address: 0x00395644   size: 0x2E0 (736 bytes)
//======================================================================
void *__fastcall sub_395644(int a1, int a2)
{
  int *v4; // r4
  int v5; // r0
  void (__fastcall *v6)(int *, void *); // r3
  int v7; // r3
  int *v8; // r7
  size_t v9; // r0
  char *v10; // r7
  int v11; // r8
  int v12; // r2
  unsigned int v13; // r3
  int v14; // r3
  size_t v15; // r0
  int *v16; // r8
  int v17; // r8
  int v18; // r3
  size_t v19; // r0
  int *v20; // r8
  void *v21; // r9
  int v22; // r8
  int v23; // r3
  size_t v24; // r0
  int *v25; // r8
  void *v26; // r8
  int v27; // r11
  int v28; // r3
  int v29; // r0
  int v30; // r3
  _BYTE *v31; // r0
  _BYTE *v32; // r4
  void *v33; // r5
  char *v34; // r6
  char *v35; // r10
  void *v37; // [sp+4h] [bp-38h]
  int v38; // [sp+8h] [bp-34h] BYREF
  int v39; // [sp+Ch] [bp-30h] BYREF
  int v40; // [sp+10h] [bp-2Ch] BYREF
  int v41; // [sp+14h] [bp-28h] BYREF
  int v42; // [sp+18h] [bp-24h] BYREF
  int v43; // [sp+1Ch] [bp-20h] BYREF
  int v44; // [sp+20h] [bp-1Ch] BYREF
  _DWORD v45[4]; // [sp+24h] [bp-18h] BYREF
  _DWORD v46[2]; // [sp+34h] [bp-8h] BYREF

  *(_BYTE *)(a1 + 67) = 1;
  v4 = (int *)sub_3955FC(a2);
  *(_BYTE *)(a1 + 17) = (*(int (__fastcall **)(int *))(*v4 + 8))(v4);
  *(_BYTE *)(a1 + 18) = (*(int (__fastcall **)(int *))(*v4 + 12))(v4);
  v5 = (*(int (__fastcall **)(int *))(*v4 + 32))(v4);
  v6 = *(void (__fastcall **)(int *, void *))(*v4 + 16);
  *(_DWORD *)(a1 + 44) = v5;
  v6(&v38, v4);
  v7 = v38;
  v8 = (int *)(v38 - 12);
  v9 = *(_DWORD *)(v38 - 12);
  *(_DWORD *)(a1 + 12) = v9;
  if ( v8 != &dword_55FB7C )
  {
    if ( sub_3C82FC(v7 - 4, -1) <= 0 )
      sub_3BDF60(v8, v46);
    v9 = *(_DWORD *)(a1 + 12);
  }
  v10 = (char *)operator new[](v9);
  (*(void (__fastcall **)(int *, int *))(*v4 + 16))(&v39, v4);
  sub_3BD82C((int)&v39, v10);
  v11 = v39 - 12;
  if ( (int *)(v39 - 12) != &dword_55FB7C && sub_3C82FC(v39 - 4, -1) <= 0 )
    sub_3BDF60(v11, v46);
  v12 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 8) = v10;
  LOBYTE(v13) = 0;
  if ( v12 != 0 )
    v13 = (unsigned int)((*v10 >> 31) - *v10) >> 31;
  *(_BYTE *)(a1 + 16) = v13;
  (*(void (__fastcall **)(int *, int *))(*v4 + 20))(&v40, v4);
  v14 = v40;
  v15 = *(_DWORD *)(v40 - 12);
  v16 = (int *)(v40 - 12);
  *(_DWORD *)(a1 + 24) = v15;
  if ( v16 != &dword_55FB7C )
  {
    if ( sub_3C82FC(v14 - 4, -1) <= 0 )
      sub_3BDF60(v16, v46);
    v15 = *(_DWORD *)(a1 + 24);
  }
  v37 = operator new[](v15);
  (*(void (__fastcall **)(int *, int *))(*v4 + 20))(&v41, v4);
  sub_3BD82C((int)&v41, v37);
  v17 = v41 - 12;
  if ( (int *)(v41 - 12) != &dword_55FB7C && sub_3C82FC(v41 - 4, -1) <= 0 )
    sub_3BDF60(v17, v46);
  *(_DWORD *)(a1 + 20) = v37;
  (*(void (__fastcall **)(int *, int *))(*v4 + 24))(&v42, v4);
  v18 = v42;
  v19 = *(_DWORD *)(v42 - 12);
  v20 = (int *)(v42 - 12);
  *(_DWORD *)(a1 + 32) = v19;
  if ( v20 != &dword_55FB7C )
  {
    if ( sub_3C82FC(v18 - 4, -1) <= 0 )
      sub_3BDF60(v20, v46);
    v19 = *(_DWORD *)(a1 + 32);
  }
  v21 = operator new[](v19);
  (*(void (__fastcall **)(int *, int *))(*v4 + 24))(&v43, v4);
  sub_3BD82C((int)&v43, v21);
  v22 = v43 - 12;
  if ( (int *)(v43 - 12) != &dword_55FB7C && sub_3C82FC(v43 - 4, -1) <= 0 )
    sub_3BDF60(v22, v46);
  *(_DWORD *)(a1 + 28) = v21;
  (*(void (__fastcall **)(int *, int *))(*v4 + 28))(&v44, v4);
  v23 = v44;
  v24 = *(_DWORD *)(v44 - 12);
  v25 = (int *)(v44 - 12);
  *(_DWORD *)(a1 + 40) = v24;
  if ( v25 != &dword_55FB7C )
  {
    if ( sub_3C82FC(v23 - 4, -1) <= 0 )
      sub_3BDF60(v25, v46);
    v24 = *(_DWORD *)(a1 + 40);
  }
  v26 = operator new[](v24);
  (*(void (__fastcall **)(_DWORD *, int *))(*v4 + 28))(v45, v4);
  sub_3BD82C((int)v45, v26);
  v27 = v45[0] - 12;
  if ( (int *)(v45[0] - 12) != &dword_55FB7C && sub_3C82FC(v45[0] - 4, -1) <= 0 )
    sub_3BDF60(v27, v46);
  v28 = *v4;
  *(_DWORD *)(a1 + 36) = v26;
  v29 = (*(int (__fastcall **)(int *))(v28 + 36))(v4);
  *(_DWORD *)(a1 + 48) = v29;
  v30 = *v4;
  v45[2] = v29;
  v45[1] = v29;
  v46[0] = (*(int (__fastcall **)(int *))(v30 + 40))(v4);
  v45[3] = v46[0];
  *(_DWORD *)(a1 + 52) = v46[0];
  v31 = sub_394CF0(a2);
  v32 = v31;
  v33 = (void *)(a1 + 56);
  v34 = off_472458[0];
  v35 = off_472458[0] + 11;
  if ( v31[28] == 1 )
    return j_memcpy(v33, off_472458[0], 0xBu);
  if ( v31[28] == 0 )
    sub_3A7D48(v31);
  return (void *)(*(int (__fastcall **)(_BYTE *, char *, char *, void *))(*(_DWORD *)v32 + 28))(v32, v34, v35, v33);
}


//======================================================================
// sub_3959E8
// address: 0x003959E8   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_3959E8(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&unk_55ED04);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::moneypunct<char,false>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_395A30
// address: 0x00395A30   size: 0x2E0 (736 bytes)
//======================================================================
void *__fastcall sub_395A30(int a1, int a2)
{
  int *v4; // r4
  int v5; // r0
  void (__fastcall *v6)(int *, void *); // r3
  int v7; // r3
  int *v8; // r7
  size_t v9; // r0
  char *v10; // r7
  int v11; // r8
  int v12; // r2
  unsigned int v13; // r3
  int v14; // r3
  size_t v15; // r0
  int *v16; // r8
  int v17; // r8
  int v18; // r3
  size_t v19; // r0
  int *v20; // r8
  void *v21; // r9
  int v22; // r8
  int v23; // r3
  size_t v24; // r0
  int *v25; // r8
  void *v26; // r8
  int v27; // r11
  int v28; // r3
  int v29; // r0
  int v30; // r3
  _BYTE *v31; // r0
  _BYTE *v32; // r4
  void *v33; // r5
  char *v34; // r6
  char *v35; // r10
  void *v37; // [sp+4h] [bp-38h]
  int v38; // [sp+8h] [bp-34h] BYREF
  int v39; // [sp+Ch] [bp-30h] BYREF
  int v40; // [sp+10h] [bp-2Ch] BYREF
  int v41; // [sp+14h] [bp-28h] BYREF
  int v42; // [sp+18h] [bp-24h] BYREF
  int v43; // [sp+1Ch] [bp-20h] BYREF
  int v44; // [sp+20h] [bp-1Ch] BYREF
  _DWORD v45[4]; // [sp+24h] [bp-18h] BYREF
  _DWORD v46[2]; // [sp+34h] [bp-8h] BYREF

  *(_BYTE *)(a1 + 67) = 1;
  v4 = (int *)sub_3959E8(a2);
  *(_BYTE *)(a1 + 17) = (*(int (__fastcall **)(int *))(*v4 + 8))(v4);
  *(_BYTE *)(a1 + 18) = (*(int (__fastcall **)(int *))(*v4 + 12))(v4);
  v5 = (*(int (__fastcall **)(int *))(*v4 + 32))(v4);
  v6 = *(void (__fastcall **)(int *, void *))(*v4 + 16);
  *(_DWORD *)(a1 + 44) = v5;
  v6(&v38, v4);
  v7 = v38;
  v8 = (int *)(v38 - 12);
  v9 = *(_DWORD *)(v38 - 12);
  *(_DWORD *)(a1 + 12) = v9;
  if ( v8 != &dword_55FB7C )
  {
    if ( sub_3C82FC(v7 - 4, -1) <= 0 )
      sub_3BDF60(v8, v46);
    v9 = *(_DWORD *)(a1 + 12);
  }
  v10 = (char *)operator new[](v9);
  (*(void (__fastcall **)(int *, int *))(*v4 + 16))(&v39, v4);
  sub_3BD82C((int)&v39, v10);
  v11 = v39 - 12;
  if ( (int *)(v39 - 12) != &dword_55FB7C && sub_3C82FC(v39 - 4, -1) <= 0 )
    sub_3BDF60(v11, v46);
  v12 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 8) = v10;
  LOBYTE(v13) = 0;
  if ( v12 != 0 )
    v13 = (unsigned int)((*v10 >> 31) - *v10) >> 31;
  *(_BYTE *)(a1 + 16) = v13;
  (*(void (__fastcall **)(int *, int *))(*v4 + 20))(&v40, v4);
  v14 = v40;
  v15 = *(_DWORD *)(v40 - 12);
  v16 = (int *)(v40 - 12);
  *(_DWORD *)(a1 + 24) = v15;
  if ( v16 != &dword_55FB7C )
  {
    if ( sub_3C82FC(v14 - 4, -1) <= 0 )
      sub_3BDF60(v16, v46);
    v15 = *(_DWORD *)(a1 + 24);
  }
  v37 = operator new[](v15);
  (*(void (__fastcall **)(int *, int *))(*v4 + 20))(&v41, v4);
  sub_3BD82C((int)&v41, v37);
  v17 = v41 - 12;
  if ( (int *)(v41 - 12) != &dword_55FB7C && sub_3C82FC(v41 - 4, -1) <= 0 )
    sub_3BDF60(v17, v46);
  *(_DWORD *)(a1 + 20) = v37;
  (*(void (__fastcall **)(int *, int *))(*v4 + 24))(&v42, v4);
  v18 = v42;
  v19 = *(_DWORD *)(v42 - 12);
  v20 = (int *)(v42 - 12);
  *(_DWORD *)(a1 + 32) = v19;
  if ( v20 != &dword_55FB7C )
  {
    if ( sub_3C82FC(v18 - 4, -1) <= 0 )
      sub_3BDF60(v20, v46);
    v19 = *(_DWORD *)(a1 + 32);
  }
  v21 = operator new[](v19);
  (*(void (__fastcall **)(int *, int *))(*v4 + 24))(&v43, v4);
  sub_3BD82C((int)&v43, v21);
  v22 = v43 - 12;
  if ( (int *)(v43 - 12) != &dword_55FB7C && sub_3C82FC(v43 - 4, -1) <= 0 )
    sub_3BDF60(v22, v46);
  *(_DWORD *)(a1 + 28) = v21;
  (*(void (__fastcall **)(int *, int *))(*v4 + 28))(&v44, v4);
  v23 = v44;
  v24 = *(_DWORD *)(v44 - 12);
  v25 = (int *)(v44 - 12);
  *(_DWORD *)(a1 + 40) = v24;
  if ( v25 != &dword_55FB7C )
  {
    if ( sub_3C82FC(v23 - 4, -1) <= 0 )
      sub_3BDF60(v25, v46);
    v24 = *(_DWORD *)(a1 + 40);
  }
  v26 = operator new[](v24);
  (*(void (__fastcall **)(_DWORD *, int *))(*v4 + 28))(v45, v4);
  sub_3BD82C((int)v45, v26);
  v27 = v45[0] - 12;
  if ( (int *)(v45[0] - 12) != &dword_55FB7C && sub_3C82FC(v45[0] - 4, -1) <= 0 )
    sub_3BDF60(v27, v46);
  v28 = *v4;
  *(_DWORD *)(a1 + 36) = v26;
  v29 = (*(int (__fastcall **)(int *))(v28 + 36))(v4);
  *(_DWORD *)(a1 + 48) = v29;
  v30 = *v4;
  v45[2] = v29;
  v45[1] = v29;
  v46[0] = (*(int (__fastcall **)(int *))(v30 + 40))(v4);
  v45[3] = v46[0];
  *(_DWORD *)(a1 + 52) = v46[0];
  v31 = sub_394CF0(a2);
  v32 = v31;
  v33 = (void *)(a1 + 56);
  v34 = off_472458[0];
  v35 = off_472458[0] + 11;
  if ( v31[28] == 1 )
    return j_memcpy(v33, off_472458[0], 0xBu);
  if ( v31[28] == 0 )
    sub_3A7D48(v31);
  return (void *)(*(int (__fastcall **)(_BYTE *, char *, char *, void *))(*(_DWORD *)v32 + 28))(v32, v34, v35, v33);
}


//======================================================================
// sub_395DD4
// address: 0x00395DD4   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_395DD4(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&unk_55ECF8);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::money_put<char,std::ostreambuf_iterator<char>>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_395E1C
// address: 0x00395E1C   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_395E1C(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&unk_55ECFC);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::money_get<char,std::istreambuf_iterator<char>>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_395E64
// address: 0x00395E64   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_395E64(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&unk_55ECE8);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::__timepunct<char>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_395EAC
// address: 0x00395EAC   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_395EAC(int a1, int a2, int a3, bool a4, int a5, int a6, struct tm *tp, char a8, char a9)
{
  _BYTE *v10; // r5
  void *v11; // r7
  char v12; // r0
  bool v13; // r7
  size_t v14; // r8
  _BYTE v18[4]; // [sp+14h] [bp-84h] BYREF
  char v19[128]; // [sp+18h] [bp-80h] BYREF

  v10 = sub_394CF0(a5 + 108);
  v11 = sub_395E64(a5 + 108);
  if ( v10[28] != 0 )
  {
    v12 = v10[66];
  }
  else
  {
    sub_3A7D48(v10);
    v12 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v10 + 24))(v10, 37);
  }
  v18[0] = v12;
  if ( a9 != 0 )
  {
    v18[2] = a8;
    v18[1] = a9;
    v18[3] = 0;
  }
  else
  {
    v18[1] = a8;
    v18[2] = 0;
  }
  sub_3A5438((int)v11, (int)v19, 128, (int)v18, tp);
  v13 = a4;
  v14 = j_strlen(v19);
  if ( !a4 )
    v13 = v14 != (*(int (__fastcall **)(int, char *, size_t))(*(_DWORD *)a3 + 48))(a3, v19, v14);
  *(_DWORD *)a1 = a3;
  *(_BYTE *)(a1 + 4) = v13;
  return a1;
}


//======================================================================
// sub_395F54
// address: 0x00395F54   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_395F54(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&unk_55ECE4);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::time_put<char,std::ostreambuf_iterator<char>>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_395F9C
// address: 0x00395F9C   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_395F9C(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&unk_55ECE0);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::time_get<char,std::istreambuf_iterator<char>>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_395FE4
// address: 0x00395FE4   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_395FE4(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&unk_55ECDC);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::messages<char>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_39602C
// address: 0x0039602C   size: 0x3E (62 bytes)
//======================================================================
bool __fastcall sub_39602C(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&unk_55FADC);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::ctype<char>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_396078
// address: 0x00396078   size: 0x3E (62 bytes)
//======================================================================
bool __fastcall sub_396078(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&unk_55ED08);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::codecvt<char,char,mbstate_t>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_3960C4
// address: 0x003960C4   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_3960C4(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&unk_55ECD8);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::collate<char>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_39610C
// address: 0x0039610C   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_39610C(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&unk_55ECF4);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::numpunct<char>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_396154
// address: 0x00396154   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_396154(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&unk_55ECEC);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::num_put<char,std::ostreambuf_iterator<char>>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_39619C
// address: 0x0039619C   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_39619C(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&unk_55ECF0);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::num_get<char,std::istreambuf_iterator<char>>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_3961E4
// address: 0x003961E4   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_3961E4(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&unk_55ED04);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::moneypunct<char,false>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_39622C
// address: 0x0039622C   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_39622C(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&unk_55ECF8);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::money_put<char,std::ostreambuf_iterator<char>>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_396274
// address: 0x00396274   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_396274(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&unk_55ECFC);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::money_get<char,std::istreambuf_iterator<char>>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_3962BC
// address: 0x003962BC   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_3962BC(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&unk_55ECE8);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::__timepunct<char>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_396304
// address: 0x00396304   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_396304(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&unk_55ECE4);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::time_put<char,std::ostreambuf_iterator<char>>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_39634C
// address: 0x0039634C   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_39634C(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&unk_55ECE0);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::time_get<char,std::istreambuf_iterator<char>>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_396394
// address: 0x00396394   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_396394(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&unk_55ECDC);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::messages<char>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_3963DC
// address: 0x003963DC   size: 0xD8 (216 bytes)
//======================================================================
_BYTE *__fastcall sub_3963DC(_BYTE *result, char a2, unsigned __int8 *a3, int a4, char *a5, _BYTE *a6)
{
  char *v7; // r3
  int v9; // r4
  int v10; // r6
  unsigned int v11; // r7
  unsigned int v12; // r9
  int v13; // r12
  int v14; // r4
  int v15; // r5
  bool v16; // cf
  _BYTE *v17; // r12
  int v18; // r8
  char *v19; // r5
  char v20; // r4
  int v21; // r8
  _BYTE *v22; // r4
  char *v23; // r5

  v7 = a5;
  v9 = *a3;
  v10 = 0;
  v11 = 0;
  v12 = a4 - 1;
LABEL_2:
  v13 = a6 - a5;
  if ( a6 - a5 > v9 )
  {
    while ( v9 << 24 > 0 )
    {
      a6 -= v9;
      if ( v11 >= v12 )
      {
        ++v10;
        goto LABEL_2;
      }
      v9 = a3[++v11];
      v13 = a6 - a5;
      if ( a6 - a5 <= v9 )
        break;
    }
  }
  v14 = 0;
  if ( a6 != a5 )
  {
    do
    {
      result[v14] = a5[v14];
      ++v14;
    }
    while ( v14 != v13 );
    v15 = a6 - a5;
    result += v15;
    v7 = &a5[v15];
  }
  while ( 1 )
  {
    v16 = v10-- != 0;
    if ( !v16 )
      break;
    while ( 1 )
    {
      v17 = result + 1;
      *result++ = a2;
      if ( a3[v11] == 0 )
        break;
      v18 = (unsigned __int8)(a3[v11] - 1) + 1;
      v19 = &v7[v18];
      do
      {
        v20 = *v7++;
        *result++ = v20;
      }
      while ( v19 != v7 );
      result = &v17[v18];
      v7 = v19;
      v16 = v10-- != 0;
      if ( !v16 )
        goto LABEL_15;
    }
  }
LABEL_15:
  while ( 1 )
  {
    v16 = v11-- != 0;
    if ( !v16 )
      break;
    while ( 1 )
    {
      *result = a2;
      if ( a3[v11] == 0 )
        break;
      v21 = (unsigned __int8)(a3[v11] - 1);
      v22 = result + 1;
      v23 = v7;
      do
        *v22++ = *v23++;
      while ( v22 != &result[v21 + 2] );
      result += v21 + 2;
      v7 += v21 + 1;
      v16 = v11-- != 0;
      if ( !v16 )
        return result;
    }
    ++result;
  }
  return result;
}


//======================================================================
// sub_3964B4
// address: 0x003964B4   size: 0x5E (94 bytes)
//======================================================================
_BYTE *__fastcall sub_3964B4(int a1, unsigned __int8 *a2, int a3, char a4, _BYTE *a5, _BYTE *a6, char *a7, _DWORD *a8)
{
  _BYTE *v8; // r0
  int v9; // r6
  _BYTE *result; // r0
  int v11; // r6

  if ( a5 != nullptr )
  {
    v8 = sub_3963DC(a6, a4, a2, a3, a7, a5);
    v9 = v8 - a6;
    result = j_memcpy(v8, a5, *a8 - (a5 - a7));
    v11 = *a8 - (a5 - a7) + v9;
  }
  else
  {
    result = sub_3963DC(a6, a4, a2, a3, a7, &a7[*a8]);
    v11 = result - a6;
  }
  *a8 = v11;
  return result;
}


//======================================================================
// sub_396514
// address: 0x00396514   size: 0x2A (42 bytes)
//======================================================================
_BYTE *__fastcall sub_396514(int a1, unsigned __int8 *a2, int a3, char a4, int a5, _BYTE *a6, char *a7, _DWORD *a8)
{
  _BYTE *result; // r0

  result = sub_3963DC(a6, a4, a2, a3, a7, &a7[*a8]);
  *a8 = result - a6;
  return result;
}


//======================================================================
// sub_396540
// address: 0x00396540   size: 0x3DA (986 bytes)
//======================================================================
_DWORD *__fastcall sub_396540(_DWORD *a1, int a2, int a3, int a4, _DWORD *a5, unsigned __int8 a6, char **a7)
{
  _DWORD *v8; // r8
  int v9; // r0
  int *v10; // r6
  int v11; // r4
  int v12; // r5
  char *v13; // r5
  int v14; // r0
  unsigned __int8 *v15; // r0
  int v16; // r2
  char *v17; // r6
  signed int v18; // r6
  int v19; // r3
  signed int v20; // r9
  char *v21; // r0
  _BYTE *v22; // r0
  char *v23; // r3
  unsigned int v24; // r2
  unsigned int v25; // r2
  unsigned int v26; // r5
  unsigned int v27; // r0
  unsigned int v28; // r8
  int v29; // r6
  int v30; // r1
  unsigned int v31; // r3
  int v32; // r0
  int v34; // r3
  _DWORD *v35; // r0
  _DWORD *v36; // r4
  unsigned int v38; // [sp+Ch] [bp-40h]
  int v39; // [sp+10h] [bp-3Ch]
  _BYTE *v40; // [sp+14h] [bp-38h]
  unsigned __int8 *v41; // [sp+20h] [bp-2Ch]
  int v42; // [sp+24h] [bp-28h]
  _BOOL4 v43; // [sp+28h] [bp-24h]
  unsigned int v44; // [sp+2Ch] [bp-20h]
  int v45; // [sp+34h] [bp-18h]
  _BYTE v46[4]; // [sp+38h] [bp-14h] BYREF
  int v47; // [sp+3Ch] [bp-10h] BYREF
  char *v48; // [sp+40h] [bp-Ch] BYREF
  _DWORD v49[2]; // [sp+44h] [bp-8h] BYREF

  v45 = a4;
  v39 = (unsigned __int8)a4;
  v8 = sub_394CF0((int)(a5 + 27));
  v9 = sub_3A8B84(&unk_55ED00);
  v10 = (int *)(*(_DWORD *)(a5[27] + 12) + 4 * v9);
  v11 = *v10;
  v12 = v9;
  if ( *v10 == 0 )
  {
    v35 = operator new(0x44u);
    *v35 = &off_464820;
    v35[1] = 0;
    v35[2] = 0;
    v35[3] = 0;
    *((_BYTE *)v35 + 16) = 0;
    *((_BYTE *)v35 + 17) = 0;
    *((_BYTE *)v35 + 18) = 0;
    v35[5] = 0;
    v35[6] = 0;
    v35[7] = 0;
    v35[8] = 0;
    v35[9] = 0;
    v35[10] = 0;
    v35[11] = 0;
    *((_BYTE *)v35 + 48) = 0;
    *((_BYTE *)v35 + 49) = 0;
    *((_BYTE *)v35 + 50) = 0;
    *((_BYTE *)v35 + 51) = 0;
    *((_BYTE *)v35 + 52) = 0;
    *((_BYTE *)v35 + 53) = 0;
    *((_BYTE *)v35 + 54) = 0;
    *((_BYTE *)v35 + 55) = 0;
    *((_BYTE *)v35 + 67) = 0;
    v36 = v35;
    sub_395644((int)v35, (int)(a5 + 27));
    sub_3A8AB4(a5[27], v36, v12);
    v11 = *v10;
  }
  v13 = *a7;
  if ( **a7 == *(_BYTE *)(v11 + 56) )
  {
    v41 = *(unsigned __int8 **)(v11 + 36);
    v38 = *(_DWORD *)(v11 + 40);
    v14 = *((_DWORD *)v13 - 3);
    v47 = *(_DWORD *)(v11 + 52);
    if ( v14 == 0 )
      goto LABEL_45;
    ++v13;
  }
  else
  {
    v47 = *(_DWORD *)(v11 + 48);
    v41 = *(unsigned __int8 **)(v11 + 28);
    v14 = *((_DWORD *)v13 - 3);
    v38 = *(_DWORD *)(v11 + 32);
  }
  v15 = (unsigned __int8 *)&v13[v14];
  if ( v13 < (char *)v15 )
  {
    v16 = v8[6];
    if ( (*(_BYTE *)(v16 + (unsigned __int8)*v13) & 4) != 0 )
    {
      v17 = v13;
      do
        ++v17;
      while ( v17 != (char *)v15 && (*(_BYTE *)(v16 + (unsigned __int8)*v17) & 4) != 0 );
      v18 = v17 - v13;
      if ( v18 != 0 )
      {
        v48 = &byte_55FB88;
        sub_3BE700(&v48, 2 * v18);
        v19 = *(_DWORD *)(v11 + 44);
        v20 = v18 - v19;
        if ( v18 - v19 > 0 )
        {
          if ( v19 < 0 )
            v20 = v18;
          if ( *(_DWORD *)(v11 + 12) != 0 )
          {
            sub_3BE294(&v48, 0, *((_DWORD *)v48 - 3), 2 * v20, 0);
            v21 = v48;
            if ( *((int *)v48 - 1) >= 0 )
            {
              sub_3BE0AC(&v48);
              v21 = v48;
            }
            v22 = sub_3963DC(
                    v21,
                    *(_BYTE *)(v11 + 18),
                    *(unsigned __int8 **)(v11 + 8),
                    *(_DWORD *)(v11 + 12),
                    v13,
                    &v13[v20]);
            v23 = v48;
            v40 = v22;
            if ( *((int *)v48 - 1) >= 0 )
            {
              sub_3BE0AC(&v48);
              v23 = v48;
            }
            v24 = *((_DWORD *)v23 - 3);
            if ( v40 - v23 > v24 )
              sub_3BD0B4("basic_string::erase");
            sub_3BDFA4(&v48, v40 - v23, v24 - (v40 - v23), 0);
            v19 = *(_DWORD *)(v11 + 44);
          }
          else
          {
            sub_3BE408((int)&v48, v13, v20);
            v19 = *(_DWORD *)(v11 + 44);
          }
        }
        if ( v19 > 0 )
        {
          sub_3BEA50(&v48, *(unsigned __int8 *)(v11 + 17));
          if ( v20 >= 0 )
          {
            sub_3BE898(&v48, &v13[v20], *(_DWORD *)(v11 + 44));
          }
          else
          {
            sub_3BE984(&v48, -v20, *(unsigned __int8 *)(v11 + 57));
            sub_3BE898(&v48, v13, v18);
          }
        }
        v42 = a5[3] & 0xB0;
        v25 = v38 + *((_DWORD *)v48 - 3);
        if ( (a5[3] & 0x200) != 0 )
          v34 = *(_DWORD *)(v11 + 24);
        else
          v34 = 0;
        v26 = v25 + v34;
        v49[0] = &byte_55FB88;
        sub_3BE700(v49, 2 * (v25 + v34));
        v27 = a5[2];
        v43 = v42 == 16 && v26 < v27;
        v28 = v27;
        v29 = 1;
        v44 = v27 - v26;
        while ( 1 )
        {
          switch ( *((_BYTE *)&v47 + v29 - 1) )
          {
            case 0:
              if ( !v43 )
                goto LABEL_33;
              goto LABEL_57;
            case 1:
              if ( v43 )
LABEL_57:
                sub_3BE984(v49, v44, a6);
              else
                sub_3BEA50(v49, a6);
              goto LABEL_33;
            case 2:
              if ( (a5[3] & 0x200) != 0 )
                sub_3BE898(v49, *(_DWORD *)(v11 + 20), *(_DWORD *)(v11 + 24));
              goto LABEL_33;
            case 3:
              if ( v38 != 0 )
              {
                sub_3BEA50(v49, *v41);
LABEL_33:
                if ( v29 == 4 )
                {
                  if ( v38 > 1 )
                    sub_3BE898(v49, v41 + 1, v38 - 1);
LABEL_36:
                  v30 = v49[0];
                  v31 = *(_DWORD *)(v49[0] - 12);
                  if ( v28 > v31 )
                  {
                    if ( v42 == 32 )
                      sub_3BE984(v49, v28 - v31, a6);
                    else
                      sub_3BE294(v49, 0, 0, v28 - v31, a6);
                    v30 = v49[0];
                  }
                  else
                  {
                    v28 = *(_DWORD *)(v49[0] - 12);
                  }
                  if ( v39 == 0 )
                  {
                    v32 = (*(int (__fastcall **)(int, int, unsigned int))(*(_DWORD *)a3 + 48))(a3, v30, v28);
                    v30 = v49[0];
                    v39 = v28 != v32;
                  }
                  sub_3BDF68(v30 - 12, v46);
                  sub_3BDF68(v48 - 12, v46);
                  goto LABEL_45;
                }
              }
              else if ( v29 == 4 )
              {
                goto LABEL_36;
              }
              ++v29;
              break;
            case 4:
              sub_3BE774(v49, &v48);
              goto LABEL_33;
            default:
              goto LABEL_33;
          }
        }
      }
    }
  }
LABEL_45:
  a5[2] = 0;
  LOBYTE(v45) = v39;
  *a1 = a3;
  a1[1] = v45;
  return a1;
}


//======================================================================
// sub_396920
// address: 0x00396920   size: 0x3DA (986 bytes)
//======================================================================
_DWORD *__fastcall sub_396920(_DWORD *a1, int a2, int a3, int a4, _DWORD *a5, unsigned __int8 a6, char **a7)
{
  _DWORD *v8; // r8
  int v9; // r0
  int *v10; // r6
  int v11; // r4
  int v12; // r5
  char *v13; // r5
  int v14; // r0
  unsigned __int8 *v15; // r0
  int v16; // r2
  char *v17; // r6
  signed int v18; // r6
  int v19; // r3
  signed int v20; // r9
  char *v21; // r0
  _BYTE *v22; // r0
  char *v23; // r3
  unsigned int v24; // r2
  unsigned int v25; // r2
  unsigned int v26; // r5
  unsigned int v27; // r0
  unsigned int v28; // r8
  int v29; // r6
  int v30; // r1
  unsigned int v31; // r3
  int v32; // r0
  int v34; // r3
  _DWORD *v35; // r0
  _DWORD *v36; // r4
  unsigned int v38; // [sp+Ch] [bp-40h]
  int v39; // [sp+10h] [bp-3Ch]
  _BYTE *v40; // [sp+14h] [bp-38h]
  unsigned __int8 *v41; // [sp+20h] [bp-2Ch]
  int v42; // [sp+24h] [bp-28h]
  _BOOL4 v43; // [sp+28h] [bp-24h]
  unsigned int v44; // [sp+2Ch] [bp-20h]
  int v45; // [sp+34h] [bp-18h]
  _BYTE v46[4]; // [sp+38h] [bp-14h] BYREF
  int v47; // [sp+3Ch] [bp-10h] BYREF
  char *v48; // [sp+40h] [bp-Ch] BYREF
  _DWORD v49[2]; // [sp+44h] [bp-8h] BYREF

  v45 = a4;
  v39 = (unsigned __int8)a4;
  v8 = sub_394CF0((int)(a5 + 27));
  v9 = sub_3A8B84(&unk_55ED04);
  v10 = (int *)(*(_DWORD *)(a5[27] + 12) + 4 * v9);
  v11 = *v10;
  v12 = v9;
  if ( *v10 == 0 )
  {
    v35 = operator new(0x44u);
    *v35 = &off_464810;
    v35[1] = 0;
    v35[2] = 0;
    v35[3] = 0;
    *((_BYTE *)v35 + 16) = 0;
    *((_BYTE *)v35 + 17) = 0;
    *((_BYTE *)v35 + 18) = 0;
    v35[5] = 0;
    v35[6] = 0;
    v35[7] = 0;
    v35[8] = 0;
    v35[9] = 0;
    v35[10] = 0;
    v35[11] = 0;
    *((_BYTE *)v35 + 48) = 0;
    *((_BYTE *)v35 + 49) = 0;
    *((_BYTE *)v35 + 50) = 0;
    *((_BYTE *)v35 + 51) = 0;
    *((_BYTE *)v35 + 52) = 0;
    *((_BYTE *)v35 + 53) = 0;
    *((_BYTE *)v35 + 54) = 0;
    *((_BYTE *)v35 + 55) = 0;
    *((_BYTE *)v35 + 67) = 0;
    v36 = v35;
    sub_395A30((int)v35, (int)(a5 + 27));
    sub_3A8AB4(a5[27], v36, v12);
    v11 = *v10;
  }
  v13 = *a7;
  if ( **a7 == *(_BYTE *)(v11 + 56) )
  {
    v41 = *(unsigned __int8 **)(v11 + 36);
    v38 = *(_DWORD *)(v11 + 40);
    v14 = *((_DWORD *)v13 - 3);
    v47 = *(_DWORD *)(v11 + 52);
    if ( v14 == 0 )
      goto LABEL_45;
    ++v13;
  }
  else
  {
    v47 = *(_DWORD *)(v11 + 48);
    v41 = *(unsigned __int8 **)(v11 + 28);
    v14 = *((_DWORD *)v13 - 3);
    v38 = *(_DWORD *)(v11 + 32);
  }
  v15 = (unsigned __int8 *)&v13[v14];
  if ( v13 < (char *)v15 )
  {
    v16 = v8[6];
    if ( (*(_BYTE *)(v16 + (unsigned __int8)*v13) & 4) != 0 )
    {
      v17 = v13;
      do
        ++v17;
      while ( v17 != (char *)v15 && (*(_BYTE *)(v16 + (unsigned __int8)*v17) & 4) != 0 );
      v18 = v17 - v13;
      if ( v18 != 0 )
      {
        v48 = &byte_55FB88;
        sub_3BE700(&v48, 2 * v18);
        v19 = *(_DWORD *)(v11 + 44);
        v20 = v18 - v19;
        if ( v18 - v19 > 0 )
        {
          if ( v19 < 0 )
            v20 = v18;
          if ( *(_DWORD *)(v11 + 12) != 0 )
          {
            sub_3BE294(&v48, 0, *((_DWORD *)v48 - 3), 2 * v20, 0);
            v21 = v48;
            if ( *((int *)v48 - 1) >= 0 )
            {
              sub_3BE0AC(&v48);
              v21 = v48;
            }
            v22 = sub_3963DC(
                    v21,
                    *(_BYTE *)(v11 + 18),
                    *(unsigned __int8 **)(v11 + 8),
                    *(_DWORD *)(v11 + 12),
                    v13,
                    &v13[v20]);
            v23 = v48;
            v40 = v22;
            if ( *((int *)v48 - 1) >= 0 )
            {
              sub_3BE0AC(&v48);
              v23 = v48;
            }
            v24 = *((_DWORD *)v23 - 3);
            if ( v40 - v23 > v24 )
              sub_3BD0B4("basic_string::erase");
            sub_3BDFA4(&v48, v40 - v23, v24 - (v40 - v23), 0);
            v19 = *(_DWORD *)(v11 + 44);
          }
          else
          {
            sub_3BE408((int)&v48, v13, v20);
            v19 = *(_DWORD *)(v11 + 44);
          }
        }
        if ( v19 > 0 )
        {
          sub_3BEA50(&v48, *(unsigned __int8 *)(v11 + 17));
          if ( v20 >= 0 )
          {
            sub_3BE898(&v48, &v13[v20], *(_DWORD *)(v11 + 44));
          }
          else
          {
            sub_3BE984(&v48, -v20, *(unsigned __int8 *)(v11 + 57));
            sub_3BE898(&v48, v13, v18);
          }
        }
        v42 = a5[3] & 0xB0;
        v25 = v38 + *((_DWORD *)v48 - 3);
        if ( (a5[3] & 0x200) != 0 )
          v34 = *(_DWORD *)(v11 + 24);
        else
          v34 = 0;
        v26 = v25 + v34;
        v49[0] = &byte_55FB88;
        sub_3BE700(v49, 2 * (v25 + v34));
        v27 = a5[2];
        v43 = v42 == 16 && v26 < v27;
        v28 = v27;
        v29 = 1;
        v44 = v27 - v26;
        while ( 1 )
        {
          switch ( *((_BYTE *)&v47 + v29 - 1) )
          {
            case 0:
              if ( !v43 )
                goto LABEL_33;
              goto LABEL_57;
            case 1:
              if ( v43 )
LABEL_57:
                sub_3BE984(v49, v44, a6);
              else
                sub_3BEA50(v49, a6);
              goto LABEL_33;
            case 2:
              if ( (a5[3] & 0x200) != 0 )
                sub_3BE898(v49, *(_DWORD *)(v11 + 20), *(_DWORD *)(v11 + 24));
              goto LABEL_33;
            case 3:
              if ( v38 != 0 )
              {
                sub_3BEA50(v49, *v41);
LABEL_33:
                if ( v29 == 4 )
                {
                  if ( v38 > 1 )
                    sub_3BE898(v49, v41 + 1, v38 - 1);
LABEL_36:
                  v30 = v49[0];
                  v31 = *(_DWORD *)(v49[0] - 12);
                  if ( v28 > v31 )
                  {
                    if ( v42 == 32 )
                      sub_3BE984(v49, v28 - v31, a6);
                    else
                      sub_3BE294(v49, 0, 0, v28 - v31, a6);
                    v30 = v49[0];
                  }
                  else
                  {
                    v28 = *(_DWORD *)(v49[0] - 12);
                  }
                  if ( v39 == 0 )
                  {
                    v32 = (*(int (__fastcall **)(int, int, unsigned int))(*(_DWORD *)a3 + 48))(a3, v30, v28);
                    v30 = v49[0];
                    v39 = v28 != v32;
                  }
                  sub_3BDF68(v30 - 12, v46);
                  sub_3BDF68(v48 - 12, v46);
                  goto LABEL_45;
                }
              }
              else if ( v29 == 4 )
              {
                goto LABEL_36;
              }
              ++v29;
              break;
            case 4:
              sub_3BE774(v49, &v48);
              goto LABEL_33;
            default:
              goto LABEL_33;
          }
        }
      }
    }
  }
LABEL_45:
  a5[2] = 0;
  LOBYTE(v45) = v39;
  *a1 = a3;
  a1[1] = v45;
  return a1;
}


//======================================================================
// sub_396D00
// address: 0x00396D00   size: 0x14C (332 bytes)
//======================================================================
_DWORD *__fastcall sub_396D00(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        unsigned __int8 a5,
        _DWORD *a6,
        unsigned __int8 a7,
        long double a8)
{
  _BYTE *v9; // r6
  int v10; // r10
  void *v11; // r10
  char *v12; // r4
  char v14[324]; // [sp+10h] [bp-140h] BYREF
  char *v15; // [sp+154h] [bp+4h]
  int v16; // [sp+158h] [bp+8h]
  int v17; // [sp+15Ch] [bp+Ch]
  int v18; // [sp+160h] [bp+10h]
  int *v19; // [sp+164h] [bp+14h]
  int v20; // [sp+168h] [bp+18h]
  int v21; // [sp+16Ch] [bp+1Ch]
  int v22; // [sp+174h] [bp+24h] BYREF
  int v23; // [sp+178h] [bp+28h] BYREF
  void *v24[2]; // [sp+17Ch] [bp+2Ch] BYREF

  v18 = a2;
  v21 = a4;
  v20 = a3;
  v17 = a5;
  v16 = a7;
  sub_3A84F8(&v23, a6 + 27);
  v9 = sub_394CF0((int)&v23);
  v24[0] = (void *)sub_3A8844();
  v10 = sub_393A38((int)v24, v14, 0, "%.*Lf", 0, a8);
  v19 = &v22;
  sub_3BDF44(v24, v10, 0, &v22);
  v15 = &v14[v10];
  v11 = v24[0];
  if ( *((int *)v24[0] - 1) >= 0 )
  {
    sub_3BE0AC(v24);
    v11 = v24[0];
  }
  if ( v9[28] == 1 )
  {
    j_memcpy(v11, v14, v15 - v14);
  }
  else
  {
    if ( v9[28] == 0 )
      sub_3A7D48(v9);
    (*(void (__fastcall **)(_BYTE *, char *, char *, void *))(*(_DWORD *)v9 + 28))(v9, v14, v15, v11);
  }
  if ( v17 != 0 )
    sub_396540(a1, v18, v20, v21, a6, v16, (char **)v24);
  else
    sub_396920(a1, v18, v20, v21, a6, v16, (char **)v24);
  v12 = (char *)v24[0] - 12;
  if ( (char *)v24[0] - 12 != (char *)&dword_55FB7C && sub_3C82FC((char *)v24[0] - 4, -1) <= 0 )
    sub_3BDF60(v12, &v22);
  sub_3A8980(&v23);
  return a1;
}


//======================================================================
// sub_396E6C
// address: 0x00396E6C   size: 0x42 (66 bytes)
//======================================================================
_DWORD *__fastcall sub_396E6C(_DWORD *a1, int a2, int a3, int a4, char a5, _DWORD *a6, unsigned __int8 a7, char **a8)
{
  if ( a5 != 0 )
    sub_396540(a1, a2, a3, a4, a6, a7, a8);
  else
    sub_396920(a1, a2, a3, a4, a6, a7, a8);
  return a1;
}


//======================================================================
// sub_396EB0
// address: 0x00396EB0   size: 0x122 (290 bytes)
//======================================================================
void *__fastcall sub_396EB0(int a1, int a2, _BYTE *a3, _BYTE *a4, int a5, int a6)
{
  _BYTE *v6; // r4
  size_t v8; // r7
  int v10; // r6
  int v11; // r5
  _BYTE *v13; // r0
  _BYTE *v14; // r6
  int v15; // r0
  int v16; // r3
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r3
  int v21; // r0

  v6 = a3;
  v8 = a5 - a6;
  v10 = *(_DWORD *)(a1 + 12) & 0xB0;
  if ( v10 != 32 )
  {
    v11 = 0;
    if ( v10 == 16 )
    {
      v13 = sub_394CF0(a1 + 108);
      v14 = v13;
      if ( v13[28] != 0 )
        v15 = (unsigned __int8)v13[74];
      else
        v15 = sub_393854((int)v13, 45);
      v16 = (unsigned __int8)*a4;
      if ( v16 == v15 )
      {
        LOBYTE(v16) = v15;
      }
      else
      {
        if ( v14[28] != 0 )
        {
          v17 = (unsigned __int8)v14[72];
        }
        else
        {
          sub_3A7D48(v14);
          v17 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v14 + 24))(v14, 43);
          v16 = (unsigned __int8)*a4;
        }
        if ( v17 != v16 )
        {
          if ( v14[28] != 0 )
          {
            v18 = (unsigned __int8)v14[77];
          }
          else
          {
            sub_3A7D48(v14);
            v18 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v14 + 24))(v14, 48);
            v16 = (unsigned __int8)*a4;
          }
          if ( v18 == v16
            && a6 > 1
            && (v14[28] == 0 ? (v19 = sub_393854((int)v14, 120)) : (v19 = (unsigned __int8)v14[149]),
                (v20 = (unsigned __int8)a4[1]) == v19
             || (v14[28] == 0
               ? (v21 = sub_393854((int)v14, 88), v20 = (unsigned __int8)a4[1])
               : (v21 = (unsigned __int8)v14[117]),
                 v20 == v21)) )
          {
            *v6 = *a4;
            v6[1] = a4[1];
            v11 = 2;
            v6 += 2;
          }
          else
          {
            v11 = 0;
          }
          goto LABEL_3;
        }
      }
      *v6 = v16;
      v11 = 1;
      ++v6;
    }
LABEL_3:
    j_memset(v6, a2, v8);
    return j_memcpy(&v6[v8], &a4[v11], a6 - v11);
  }
  j_memcpy(a3, a4, a6);
  return j_memset(&v6[a6], a2, v8);
}


//======================================================================
// sub_396FD4
// address: 0x00396FD4   size: 0x1E (30 bytes)
//======================================================================
void *__fastcall sub_396FD4(int a1, int a2, int a3, int a4, _BYTE *a5, _BYTE *a6, int *a7)
{
  void *result; // r0

  result = sub_396EB0(a4, a2, a5, a6, a3, *a7);
  *a7 = a3;
  return result;
}


//======================================================================
// sub_396FF4
// address: 0x00396FF4   size: 0x6E (110 bytes)
//======================================================================
int __fastcall sub_396FF4(int a1, unsigned int a2, int a3, __int16 a4, char a5)
{
  int v7; // r5
  int v9; // r2
  int v10; // r2

  if ( a5 != 0 )
  {
    v7 = a1;
    do
    {
      *(_BYTE *)--v7 = *(_BYTE *)(a3 + a2 % 0xA + 4);
      a2 /= 0xAu;
    }
    while ( a2 != 0 );
  }
  else if ( (a4 & 0x4A) == 0x40 )
  {
    v7 = a1;
    do
    {
      *(_BYTE *)--v7 = *(_BYTE *)(a3 + (a2 & 7) + 4);
      a2 >>= 3;
    }
    while ( a2 != 0 );
  }
  else
  {
    v9 = 4;
    if ( (a4 & 0x4000) != 0 )
      v9 = 20;
    v7 = a1;
    v10 = a3 + v9;
    do
    {
      *(_BYTE *)--v7 = *(_BYTE *)(v10 + (a2 & 0xF));
      a2 >>= 4;
    }
    while ( a2 != 0 );
  }
  return a1 - v7;
}


//======================================================================
// sub_397064
// address: 0x00397064   size: 0x1EA (490 bytes)
//======================================================================
int __fastcall sub_397064(int a1, int a2, int a3, int a4, _DWORD *a5, unsigned __int8 a6, int a7)
{
  int v8; // r0
  int *v9; // r4
  int v10; // r6
  int v11; // r10
  int v12; // r1
  int v13; // r8
  _BOOL4 v14; // r10
  unsigned int v15; // r1
  int v16; // r0
  int v17; // r3
  int v18; // r4
  char *v19; // r1
  int v20; // r2
  int v21; // r6
  int v22; // r5
  _DWORD *v24; // r0
  _DWORD *v25; // r6
  _BYTE v26[2]; // [sp+10h] [bp-20h] BYREF
  _BYTE v27[18]; // [sp+12h] [bp-1Eh] BYREF
  int v28; // [sp+24h] [bp-Ch] BYREF
  int v29; // [sp+30h] [bp+0h]
  int v30; // [sp+34h] [bp+4h]
  int v31; // [sp+38h] [bp+8h]
  int v32; // [sp+3Ch] [bp+Ch]
  int v33; // [sp+40h] [bp+10h]
  int v34; // [sp+44h] [bp+14h]
  int v35[2]; // [sp+4Ch] [bp+1Ch] BYREF

  v34 = a4;
  v33 = a3;
  v29 = a6;
  v30 = a2;
  v8 = sub_3A8B84(&unk_55ECF4);
  v9 = (int *)(*(_DWORD *)(a5[27] + 12) + 4 * v8);
  v10 = *v9;
  v11 = v8;
  if ( *v9 == 0 )
  {
    v24 = operator new(0x68u);
    *v24 = &off_464830;
    v24[1] = 0;
    v24[2] = 0;
    v24[3] = 0;
    *((_BYTE *)v24 + 16) = 0;
    v24[5] = 0;
    v24[6] = 0;
    v24[7] = 0;
    v24[8] = 0;
    *((_BYTE *)v24 + 36) = 0;
    *((_BYTE *)v24 + 37) = 0;
    *((_BYTE *)v24 + 100) = 0;
    v25 = v24;
    sub_395254((int)v24, (int)(a5 + 27));
    sub_3A8AB4(a5[27], v25, v11);
    v10 = *v9;
  }
  v12 = a5[3];
  v31 = v10 + 38;
  v13 = v12;
  v32 = v12 & 0x4A;
  v14 = v32 != 64 && v32 != 8;
  if ( v32 != 64 && v32 != 8 && a7 <= 0 )
    v15 = -a7;
  else
    v15 = a7;
  v16 = sub_396FF4((int)&v28, v15, v31, v13, v14);
  v17 = *(unsigned __int8 *)(v10 + 16);
  v18 = v16;
  v35[0] = v16;
  v19 = &v26[-v16 + 20];
  if ( v17 != 0 )
  {
    sub_396514(v30, *(unsigned __int8 **)(v10 + 8), *(_DWORD *)(v10 + 12), *(_BYTE *)(v10 + 37), (int)a5, v27, v19, v35);
    v18 = v35[0];
    v19 = v27;
  }
  if ( v14 )
  {
    if ( a7 < 0 )
    {
      --v19;
      ++v18;
      *v19 = *(_BYTE *)(v10 + 38);
      v35[0] = v18;
    }
    else if ( (v13 & 0x800) != 0 )
    {
      --v19;
      ++v18;
      *v19 = *(_BYTE *)(v10 + 39);
      v35[0] = v18;
    }
  }
  else if ( (v13 & 0x200) != 0 && a7 != 0 )
  {
    if ( v32 == 64 )
    {
      --v19;
      ++v18;
    }
    else
    {
      *(v19 - 1) = *(_BYTE *)(v31 + ((unsigned int)(v13 << 17) >> 31) + 2);
      v19 -= 2;
      v18 += 2;
    }
    *v19 = *(_BYTE *)(v10 + 42);
    v35[0] = v18;
  }
  v20 = a5[2];
  if ( v20 > v18 )
  {
    sub_396FD4(v30, v29, v20, (int)a5, v26, v19, v35);
    v18 = v35[0];
    v19 = v26;
  }
  v21 = (unsigned __int8)v34;
  a5[2] = 0;
  v22 = v33;
  if ( v21 == 0 && (*(int (__fastcall **)(int, char *, int))(*(_DWORD *)v33 + 48))(v33, v19, v18) != v18 )
    LOBYTE(v21) = 1;
  *(_DWORD *)a1 = v22;
  *(_BYTE *)(a1 + 4) = v21;
  return a1;
}


//======================================================================
// sub_397274
// address: 0x00397274   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_397274(int a1, int a2, int a3, int a4, _DWORD *a5, unsigned __int8 a6, int a7)
{
  sub_397064(a1, a2, a3, a4, a5, a6, a7);
  return a1;
}


//======================================================================
// sub_397298
// address: 0x00397298   size: 0x1D6 (470 bytes)
//======================================================================
int __fastcall sub_397298(int a1, int a2, int a3, _BOOL4 a4, _DWORD *a5, unsigned __int8 a6, unsigned int a7)
{
  int v8; // r0
  int *v9; // r4
  int v10; // r9
  int v11; // r8
  int v12; // r10
  unsigned int v13; // r1
  int v14; // r0
  int v15; // r3
  int v16; // r4
  char *v17; // r1
  int v18; // r2
  int v19; // r5
  bool v20; // r8
  _DWORD *v22; // r0
  _DWORD *v23; // r8
  _BYTE v24[2]; // [sp+10h] [bp-20h] BYREF
  _BYTE v25[18]; // [sp+12h] [bp-1Eh] BYREF
  int v26; // [sp+24h] [bp-Ch] BYREF
  int v27; // [sp+30h] [bp+0h]
  int v28; // [sp+34h] [bp+4h]
  int v29; // [sp+38h] [bp+8h]
  int v30; // [sp+3Ch] [bp+Ch]
  int v31; // [sp+40h] [bp+10h]
  _BOOL4 v32; // [sp+44h] [bp+14h]
  int v33[2]; // [sp+4Ch] [bp+1Ch] BYREF

  v32 = a4;
  v31 = a3;
  v27 = a6;
  v28 = a2;
  v8 = sub_3A8B84(&unk_55ECF4);
  v9 = (int *)(*(_DWORD *)(a5[27] + 12) + 4 * v8);
  v10 = v8;
  v11 = *v9;
  if ( *v9 == 0 )
  {
    v22 = operator new(0x68u);
    *v22 = &off_464830;
    v22[1] = 0;
    v22[2] = 0;
    v22[3] = 0;
    *((_BYTE *)v22 + 16) = 0;
    v22[5] = 0;
    v22[6] = 0;
    v22[7] = 0;
    v22[8] = 0;
    *((_BYTE *)v22 + 36) = 0;
    *((_BYTE *)v22 + 37) = 0;
    *((_BYTE *)v22 + 100) = 0;
    v23 = v22;
    sub_395254((int)v22, (int)(a5 + 27));
    sub_3A8AB4(a5[27], v23, v10);
    v11 = *v9;
  }
  v12 = a5[3];
  v29 = v11 + 38;
  v30 = v12 & 0x4A;
  if ( v30 == 64 || v30 == 8 || (v13 = 0, a7 != 0) )
    v13 = a7;
  v14 = sub_396FF4((int)&v26, v13, v29, v12, (v12 & 0x4A) != 64 && (v12 & 0x4A) != 8);
  v15 = *(unsigned __int8 *)(v11 + 16);
  v16 = v14;
  v33[0] = v14;
  v17 = &v24[-v14 + 20];
  if ( v15 != 0 )
  {
    sub_396514(v28, *(unsigned __int8 **)(v11 + 8), *(_DWORD *)(v11 + 12), *(_BYTE *)(v11 + 37), (int)a5, v25, v17, v33);
    v16 = v33[0];
    v17 = v25;
  }
  if ( ((v12 & 0x4A) == 64 || (v12 & 0x4A) == 8) && (v12 & 0x200) != 0 && a7 != 0 )
  {
    if ( v30 == 64 )
    {
      --v17;
      ++v16;
    }
    else
    {
      *(v17 - 1) = *(_BYTE *)(v29 + ((unsigned int)(v12 << 17) >> 31) + 2);
      v17 -= 2;
      v16 += 2;
    }
    *v17 = *(_BYTE *)(v11 + 42);
    v33[0] = v16;
  }
  v18 = a5[2];
  if ( v18 > v16 )
  {
    sub_396FD4(v28, v27, v18, (int)a5, v24, v17, v33);
    v16 = v33[0];
    v17 = v24;
  }
  a5[2] = 0;
  v19 = v31;
  v20 = v32;
  if ( !v32 )
    v20 = (*(int (__fastcall **)(int, char *, int))(*(_DWORD *)v31 + 48))(v31, v17, v16) != v16;
  *(_DWORD *)a1 = v19;
  *(_BYTE *)(a1 + 4) = v20;
  return a1;
}


//======================================================================
// sub_397498
// address: 0x00397498   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_397498(int a1, int a2, int a3, _BOOL4 a4, _DWORD *a5, unsigned __int8 a6, unsigned int a7)
{
  sub_397298(a1, a2, a3, a4, a5, a6, a7);
  return a1;
}


//======================================================================
// sub_3974BC
// address: 0x003974BC   size: 0x5E (94 bytes)
//======================================================================
_DWORD *__fastcall sub_3974BC(_DWORD *a1, int a2, int a3, _BOOL4 a4, _DWORD *a5, unsigned __int8 a6, unsigned int a7)
{
  int v8; // r7
  int v10; // [sp+10h] [bp-14h]
  int v11; // [sp+14h] [bp-10h]
  _DWORD v12[3]; // [sp+18h] [bp-Ch] BYREF

  v8 = a5[3];
  v11 = a4;
  a5[3] = v8 & 0xFFFFBDB5 | 0x208;
  sub_397298((int)v12, a2, a3, a4, a5, a6, a7);
  v10 = v12[0];
  LOBYTE(v11) = v12[1];
  a5[3] = v8;
  *a1 = v10;
  a1[1] = v11;
  return a1;
}


//======================================================================
// sub_397520
// address: 0x00397520   size: 0x9E (158 bytes)
//======================================================================
int __fastcall sub_397520(int a1, int a2, unsigned int a3, unsigned int a4, int a5, __int16 a6, char a7)
{
  int v10; // r4
  unsigned __int64 v11; // r0
  int v13; // r3
  int v14; // r3

  if ( a7 != 0 )
  {
    v10 = a1;
    do
    {
      *(_BYTE *)--v10 = *(_BYTE *)(a5 + __PAIR64__(a4, a3) % 0xA + 4);
      v11 = __PAIR64__(a4, a3) / 0xA;
      a4 = (__PAIR64__(a4, a3) / 0xA) >> 32;
      a3 = v11;
    }
    while ( v11 != 0 );
  }
  else if ( (a6 & 0x4A) == 0x40 )
  {
    v10 = a1;
    do
    {
      *(_BYTE *)--v10 = *(_BYTE *)(a5 + (a3 & 7) + 4);
      a3 = (a3 >> 3) | (a4 << 29);
      a4 >>= 3;
    }
    while ( (a3 | a4) != 0 );
  }
  else
  {
    v13 = 4;
    if ( (a6 & 0x4000) != 0 )
      v13 = 20;
    v10 = a1;
    v14 = a5 + v13;
    do
    {
      *(_BYTE *)--v10 = *(_BYTE *)(v14 + (a3 & 0xF));
      a3 = (a3 >> 4) | (a4 << 28);
      a4 >>= 4;
    }
    while ( (a3 | a4) != 0 );
  }
  return a1 - v10;
}


//======================================================================
// sub_3975C0
// address: 0x003975C0   size: 0x1E8 (488 bytes)
//======================================================================
int __fastcall sub_3975C0(
        int a1,
        int a2,
        int a3,
        _BOOL4 a4,
        _DWORD *a5,
        unsigned __int8 a6,
        unsigned int a7,
        unsigned int a8)
{
  int v9; // r0
  int *v10; // r4
  int v11; // r9
  int v12; // r8
  int v13; // r0
  int v14; // r10
  _BOOL4 v15; // r9
  unsigned int v16; // r2
  unsigned int v17; // r3
  int v18; // r4
  char *v19; // r1
  int v20; // r2
  int v21; // r5
  bool v22; // r8
  _DWORD *v24; // r0
  _DWORD *v25; // r8
  _BYTE v26[2]; // [sp+10h] [bp-30h] BYREF
  _BYTE v27[38]; // [sp+12h] [bp-2Eh] BYREF
  int v28; // [sp+38h] [bp-8h] BYREF
  int v29; // [sp+40h] [bp+0h]
  int v30; // [sp+44h] [bp+4h]
  unsigned __int64 v31; // [sp+48h] [bp+8h]
  int v32; // [sp+50h] [bp+10h]
  int v33; // [sp+54h] [bp+14h]
  int v34; // [sp+58h] [bp+18h]
  _BOOL4 v35; // [sp+5Ch] [bp+1Ch]
  int v36[2]; // [sp+64h] [bp+24h] BYREF

  v35 = a4;
  v30 = a2;
  v34 = a3;
  v29 = a6;
  v31 = __PAIR64__(a7, a8);
  v9 = sub_3A8B84(&unk_55ECF4);
  v10 = (int *)(*(_DWORD *)(a5[27] + 12) + 4 * v9);
  v11 = v9;
  v12 = *v10;
  if ( *v10 == 0 )
  {
    v24 = operator new(0x68u);
    *v24 = &off_464830;
    v24[1] = 0;
    v24[2] = 0;
    v24[3] = 0;
    *((_BYTE *)v24 + 16) = 0;
    v24[5] = 0;
    v24[6] = 0;
    v24[7] = 0;
    v24[8] = 0;
    *((_BYTE *)v24 + 36) = 0;
    *((_BYTE *)v24 + 37) = 0;
    *((_BYTE *)v24 + 100) = 0;
    v25 = v24;
    sub_395254((int)v24, (int)(a5 + 27));
    sub_3A8AB4(a5[27], v25, v11);
    v12 = *v10;
  }
  v13 = a5[3] & 0x4A;
  v14 = a5[3];
  v32 = v12 + 38;
  v33 = v13;
  v15 = v13 != 64 && v13 != 8;
  if ( v13 != 64 && v13 != 8 && v31 == 0 )
  {
    v16 = 0;
    v17 = 0;
  }
  else
  {
    v16 = HIDWORD(v31);
    v17 = v31;
  }
  v18 = sub_397520((int)&v28, v15, v16, v17, v32, v14, v15);
  v36[0] = v18;
  v19 = &v26[-v18 + 40];
  if ( *(_BYTE *)(v12 + 16) != 0 )
  {
    sub_396514(v30, *(unsigned __int8 **)(v12 + 8), *(_DWORD *)(v12 + 12), *(_BYTE *)(v12 + 37), (int)a5, v27, v19, v36);
    v18 = v36[0];
    v19 = v27;
  }
  if ( !v15 && (v14 & 0x200) != 0 && v31 != 0 )
  {
    if ( v33 == 64 )
    {
      --v19;
      ++v18;
    }
    else
    {
      *(v19 - 1) = *(_BYTE *)(v32 + ((unsigned int)(v14 << 17) >> 31) + 2);
      v19 -= 2;
      v18 += 2;
    }
    *v19 = *(_BYTE *)(v12 + 42);
    v36[0] = v18;
  }
  v20 = a5[2];
  if ( v20 > v18 )
  {
    sub_396FD4(v30, v29, v20, (int)a5, v26, v19, v36);
    v18 = v36[0];
    v19 = v26;
  }
  a5[2] = 0;
  v21 = v34;
  v22 = v35;
  if ( !v35 )
    v22 = (*(int (__fastcall **)(int, char *, int))(*(_DWORD *)v34 + 48))(v34, v19, v18) != v18;
  *(_DWORD *)a1 = v21;
  *(_BYTE *)(a1 + 4) = v22;
  return a1;
}


//======================================================================
// sub_3977D0
// address: 0x003977D0   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_3977D0(
        int a1,
        int a2,
        int a3,
        _BOOL4 a4,
        _DWORD *a5,
        unsigned __int8 a6,
        unsigned int a7,
        unsigned int a8)
{
  sub_3975C0(a1, a2, a3, a4, a5, a6, a7, a8);
  return a1;
}


//======================================================================
// sub_3977F8
// address: 0x003977F8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_3977F8(int a1, _DWORD *a2)
{
  int v3; // r0
  int v4; // r6
  int v5; // r7
  int result; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r4

  v3 = sub_3A8B84(&unk_55ED00);
  v4 = *(_DWORD *)(*a2 + 12) + 4 * v3;
  v5 = v3;
  result = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 == 0 )
  {
    v7 = operator new(0x44u);
    *v7 = &off_464820;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    *((_BYTE *)v7 + 16) = 0;
    *((_BYTE *)v7 + 17) = 0;
    *((_BYTE *)v7 + 18) = 0;
    v7[5] = 0;
    v7[6] = 0;
    v7[7] = 0;
    v7[8] = 0;
    v7[9] = 0;
    v7[10] = 0;
    v7[11] = 0;
    *((_BYTE *)v7 + 48) = 0;
    *((_BYTE *)v7 + 49) = 0;
    *((_BYTE *)v7 + 50) = 0;
    *((_BYTE *)v7 + 51) = 0;
    *((_BYTE *)v7 + 52) = 0;
    *((_BYTE *)v7 + 53) = 0;
    *((_BYTE *)v7 + 54) = 0;
    *((_BYTE *)v7 + 55) = 0;
    *((_BYTE *)v7 + 67) = 0;
    v8 = v7;
    sub_395644((int)v7, (int)a2);
    sub_3A8AB4(*a2, v8, v5);
    return *(_DWORD *)v4;
  }
  return result;
}


//======================================================================
// sub_3978A0
// address: 0x003978A0   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_3978A0(int a1)
{
  _DWORD *v2; // r0
  unsigned int v3; // r2

  v2 = *(_DWORD **)a1;
  if ( v2 != nullptr )
  {
    v3 = v2[2];
    if ( v3 >= v2[3] )
      (*(void (__fastcall **)(_DWORD *))(*v2 + 40))(v2);
    else
      v2[2] = v3 + 1;
    *(_DWORD *)(a1 + 4) = -1;
  }
  return a1;
}


//======================================================================
// sub_3978C8
// address: 0x003978C8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_3978C8(int a1, _DWORD *a2)
{
  int v3; // r0
  int v4; // r6
  int v5; // r7
  int result; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r4

  v3 = sub_3A8B84(&unk_55ED04);
  v4 = *(_DWORD *)(*a2 + 12) + 4 * v3;
  v5 = v3;
  result = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 == 0 )
  {
    v7 = operator new(0x44u);
    *v7 = &off_464810;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    *((_BYTE *)v7 + 16) = 0;
    *((_BYTE *)v7 + 17) = 0;
    *((_BYTE *)v7 + 18) = 0;
    v7[5] = 0;
    v7[6] = 0;
    v7[7] = 0;
    v7[8] = 0;
    v7[9] = 0;
    v7[10] = 0;
    v7[11] = 0;
    *((_BYTE *)v7 + 48) = 0;
    *((_BYTE *)v7 + 49) = 0;
    *((_BYTE *)v7 + 50) = 0;
    *((_BYTE *)v7 + 51) = 0;
    *((_BYTE *)v7 + 52) = 0;
    *((_BYTE *)v7 + 53) = 0;
    *((_BYTE *)v7 + 54) = 0;
    *((_BYTE *)v7 + 55) = 0;
    *((_BYTE *)v7 + 67) = 0;
    v8 = v7;
    sub_395A30((int)v7, (int)a2);
    sub_3A8AB4(*a2, v8, v5);
    return *(_DWORD *)v4;
  }
  return result;
}


//======================================================================
// sub_397970
// address: 0x00397970   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_397970(int a1, _DWORD *a2)
{
  int v3; // r0
  int v4; // r5
  int v5; // r6
  int result; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r7

  v3 = sub_3A8B84(&unk_55ECF4);
  v4 = *(_DWORD *)(*a2 + 12) + 4 * v3;
  v5 = v3;
  result = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 == 0 )
  {
    v7 = operator new(0x68u);
    *v7 = &off_464830;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    *((_BYTE *)v7 + 16) = 0;
    v7[5] = 0;
    v7[6] = 0;
    v7[7] = 0;
    v7[8] = 0;
    *((_BYTE *)v7 + 36) = 0;
    *((_BYTE *)v7 + 37) = 0;
    *((_BYTE *)v7 + 100) = 0;
    v8 = v7;
    sub_395254((int)v7, (int)a2);
    sub_3A8AB4(*a2, v8, v5);
    return *(_DWORD *)v4;
  }
  return result;
}


//======================================================================
// sub_3979F8
// address: 0x003979F8   size: 0x172 (370 bytes)
//======================================================================
int *__fastcall sub_3979F8(int *a1, int a2, int a3, int a4, _DWORD *a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v8; // r8
  int v9; // r2
  int v10; // r6
  char v11; // r9
  int v12; // r2
  _DWORD *v14; // r0
  int v15; // r3
  int v16; // r0
  int v17; // r3
  int v18; // r10
  int v19; // r0
  int v20; // r0
  int v21; // [sp+10h] [bp+0h] BYREF
  int v22; // [sp+14h] [bp+4h]
  int v23; // [sp+18h] [bp+8h]
  size_t v24; // [sp+1Ch] [bp+Ch]
  int v25; // [sp+20h] [bp+10h]
  int v26; // [sp+24h] [bp+14h]
  int v27; // [sp+28h] [bp+18h] BYREF
  char v28; // [sp+2Ch] [bp+1Ch]

  v25 = a3;
  v26 = a4;
  v8 = a3;
  v9 = a5[3];
  v23 = a6;
  v10 = (unsigned __int8)a4;
  v11 = v9;
  if ( (v9 & 1) == 0 )
  {
    sub_397064((int)&v27, a2, v8, v26, a5, v23, a7);
    LOBYTE(v10) = v28;
    v8 = v27;
    goto LABEL_3;
  }
  v14 = (_DWORD *)sub_397970((int)&v27, a5 + 27);
  if ( a7 != 0 )
  {
    v17 = a5[2];
    v18 = v14[6];
    v22 = v14[5];
    if ( v18 < v17 )
      goto LABEL_6;
LABEL_12:
    a5[2] = 0;
    if ( v10 == 0 && v18 != (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v8 + 48))(v8, v22, v18) )
      LOBYTE(v10) = 1;
    goto LABEL_3;
  }
  v15 = v14[7];
  v16 = v14[8];
  v22 = v15;
  v17 = a5[2];
  v18 = v16;
  if ( v16 >= v17 )
    goto LABEL_12;
LABEL_6:
  v24 = v17 - v18;
  v21 = (int)&v21;
  j_memset(&v21, v23, v17 - v18);
  a5[2] = 0;
  if ( (v11 & 0xB0) != 0x20 )
  {
    if ( v10 != 0 )
      goto LABEL_3;
    v19 = (*(int (__fastcall **)(int, int, size_t))(*(_DWORD *)v8 + 48))(v8, v21, v24);
    if ( v24 == v19 && v18 == (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v8 + 48))(v8, v22, v18) )
      goto LABEL_3;
LABEL_18:
    LOBYTE(v10) = 1;
    goto LABEL_3;
  }
  if ( v10 == 0 )
  {
    if ( v18 != (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v8 + 48))(v8, v22, v18) )
      goto LABEL_18;
    v20 = (*(int (__fastcall **)(int, int, size_t))(*(_DWORD *)v8 + 48))(v8, v21, v24);
    if ( v24 != v20 )
      goto LABEL_18;
  }
LABEL_3:
  v25 = v8;
  LOBYTE(v26) = v10;
  v12 = v26;
  *a1 = v8;
  a1[1] = v12;
  return a1;
}


//======================================================================
// sub_397B6C
// address: 0x00397B6C   size: 0x1C2 (450 bytes)
//======================================================================
int __fastcall sub_397B6C(int a1, int a2, int a3, _BOOL4 a4, _DWORD *a5, unsigned __int8 a6, __int64 a7)
{
  int v8; // r8
  int v9; // r0
  int v10; // r10
  _BOOL4 v11; // r9
  __int64 v12; // r2
  int v13; // r0
  int v14; // r3
  int v15; // r4
  char *v16; // r1
  int v17; // r2
  int v18; // r5
  bool v19; // r8
  int v21; // r3
  _BYTE v22[2]; // [sp+10h] [bp-30h] BYREF
  _BYTE v23[38]; // [sp+12h] [bp-2Eh] BYREF
  _QWORD v24[2]; // [sp+38h] [bp-8h] BYREF
  int v25; // [sp+48h] [bp+8h]
  int v26; // [sp+4Ch] [bp+Ch]
  int v27; // [sp+50h] [bp+10h]
  int v28; // [sp+54h] [bp+14h]
  int v29; // [sp+58h] [bp+18h]
  _BOOL4 v30; // [sp+5Ch] [bp+1Ch]
  int v31; // [sp+60h] [bp+20h] BYREF
  int v32[2]; // [sp+64h] [bp+24h] BYREF

  v30 = a4;
  v26 = a2;
  v29 = a3;
  v25 = a6;
  v8 = sub_397970((int)&v31, a5 + 27);
  v9 = a5[3];
  v27 = v8 + 38;
  v10 = v9;
  v28 = v9 & 0x4A;
  v11 = v28 != 64 && v28 != 8;
  if ( v28 == 64
    || v28 == 8
    || (v24[1] = __PAIR64__(SHIDWORD(a7) >> 31, SHIDWORD(a7) >> 31) - a7,
        v12 = -a7,
        (((__PAIR64__(SHIDWORD(a7) >> 31, SHIDWORD(a7) >> 31) - a7) >> 32) & 0x80000000) != 0LL) )
  {
    v12 = a7;
  }
  v13 = sub_397520((int)v24, v9, v12, HIDWORD(v12), v27, v9, v11);
  v14 = *(unsigned __int8 *)(v8 + 16);
  v15 = v13;
  v32[0] = v13;
  v16 = &v22[-v13 + 40];
  if ( v14 != 0 )
  {
    sub_396514(v26, *(unsigned __int8 **)(v8 + 8), *(_DWORD *)(v8 + 12), *(_BYTE *)(v8 + 37), (int)a5, v23, v16, v32);
    v15 = v32[0];
    v16 = v23;
  }
  if ( !v11 )
  {
    if ( (v10 & 0x200) == 0 || a7 == 0 )
      goto LABEL_9;
    if ( v28 != 64 )
    {
      *(v16 - 1) = *(_BYTE *)(v27 + ((unsigned int)(v10 << 17) >> 31) + 2);
      v16 -= 2;
      v15 += 2;
      *v16 = *(_BYTE *)(v8 + 42);
      v32[0] = v15;
      goto LABEL_9;
    }
    --v16;
    v21 = 42;
LABEL_16:
    ++v15;
    *v16 = *(_BYTE *)(v8 + v21);
    v32[0] = v15;
    goto LABEL_9;
  }
  if ( a7 < 0 )
  {
    --v16;
    v21 = 38;
    goto LABEL_16;
  }
  if ( (v10 & 0x800) != 0 )
  {
    --v16;
    ++v15;
    *v16 = *(_BYTE *)(v8 + 39);
    v32[0] = v15;
  }
LABEL_9:
  v17 = a5[2];
  if ( v17 > v15 )
  {
    sub_396FD4(v26, v25, v17, (int)a5, v22, v16, v32);
    v15 = v32[0];
    v16 = v22;
  }
  a5[2] = 0;
  v18 = v29;
  v19 = v30;
  if ( !v30 )
    v19 = (*(int (__fastcall **)(int, char *, int))(*(_DWORD *)v29 + 48))(v29, v16, v15) != v15;
  *(_DWORD *)a1 = v18;
  *(_BYTE *)(a1 + 4) = v19;
  return a1;
}


//======================================================================
// sub_397D30
// address: 0x00397D30   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_397D30(int a1, int a2, int a3, _BOOL4 a4, _DWORD *a5, unsigned __int8 a6, __int64 a7)
{
  sub_397B6C(a1, a2, a3, a4, a5, a6, a7);
  return a1;
}


//======================================================================
// sub_397D58
// address: 0x00397D58   size: 0x21A (538 bytes)
//======================================================================
int __fastcall sub_397D58(
        int a1,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        unsigned __int8 a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v11; // r0
  int v12; // r6
  int v13; // r10
  _BYTE *v14; // r0
  size_t v15; // r11
  _BYTE *v16; // r8
  _BYTE *v17; // r0
  char v18; // r3
  size_t v19; // r3
  int v20; // r12
  int v21; // r8
  int v22; // r2
  int v23; // r5
  int v24; // r4
  size_t v26; // r8
  void *v27; // [sp+4h] [bp-Ch]
  _BYTE *v28; // [sp+10h] [bp+0h] BYREF
  int v29; // [sp+14h] [bp+4h]
  int v30; // [sp+18h] [bp+8h]
  char *v31; // [sp+1Ch] [bp+Ch]
  int v32; // [sp+20h] [bp+10h]
  int v33; // [sp+24h] [bp+14h]
  int v34; // [sp+2Ch] [bp+1Ch] BYREF
  size_t v35; // [sp+30h] [bp+20h] BYREF
  int v36; // [sp+34h] [bp+24h] BYREF
  char v37[20]; // [sp+38h] [bp+28h] BYREF

  v33 = a4;
  v29 = a6;
  v30 = a2;
  v32 = a3;
  v11 = sub_397970((int)&v34, a5 + 27);
  v12 = a5[1];
  v13 = v11;
  if ( v12 < 0 )
    v12 = 6;
  sub_3BFF28(a5);
  v36 = sub_3A8844();
  v35 = sub_393A38((int)&v36, (char *)&v28, 0, v37, v12, v27, a9, a10);
  v14 = sub_394CF0((int)(a5 + 27));
  v15 = v35;
  v31 = (char *)&v28 + v35;
  v16 = v14;
  if ( v14[28] == 1 )
  {
    j_memcpy(&v28, &v28, v35);
    v26 = v15;
  }
  else
  {
    if ( v14[28] == 0 )
      sub_3A7D48(v14);
    (*(void (__fastcall **)(_BYTE *, _BYTE **, char *, _BYTE **))(*(_DWORD *)v16 + 28))(v16, &v28, v31, &v28);
    v26 = v35;
    v15 = v35;
  }
  v17 = j_memchr(&v28, 46, v15);
  if ( v17 != nullptr )
  {
    v18 = *(_BYTE *)(v13 + 36);
    v28 = v17;
    *v17 = v18;
  }
  else
  {
    v28 = nullptr;
  }
  if ( *(_BYTE *)(v13 + 16) != 0 && (v28 != nullptr || ((v26 <= 2) + (v26 >> 31)) << 24 != 0) )
  {
    if ( (unsigned __int8)v28 == 43 || (unsigned __int8)v28 == 45 )
    {
      v19 = v26 - 1;
      v20 = 1;
      v21 = 1;
      v35 = v19;
    }
    else
    {
      v20 = 0;
      v21 = 0;
    }
    sub_3964B4(
      v30,
      *(unsigned __int8 **)(v13 + 8),
      *(_DWORD *)(v13 + 12),
      *(_BYTE *)(v13 + 37),
      v28,
      (_BYTE *)&v28 + v20,
      (char *)&v28 + v20,
      &v35);
    v26 = v35 + v21;
    v35 = v26;
  }
  v22 = a5[2];
  if ( v22 > (int)v26 )
  {
    sub_396FD4(v30, v29, v22, (int)a5, &v28, &v28, (int *)&v35);
    v26 = v35;
  }
  v23 = (unsigned __int8)v33;
  a5[2] = 0;
  v24 = v32;
  if ( v23 == 0 && (*(int (__fastcall **)(int, _BYTE **, size_t))(*(_DWORD *)v32 + 48))(v32, &v28, v26) != v26 )
    LOBYTE(v23) = 1;
  *(_DWORD *)a1 = v24;
  *(_BYTE *)(a1 + 4) = v23;
  return a1;
}


//======================================================================
// sub_397F74
// address: 0x00397F74   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_397F74(int a1, int a2, int a3, int a4, _DWORD *a5, unsigned __int8 a6, int a7, int a8)
{
  int v10; // [sp+Ch] [bp-18h]

  sub_397D58(a1, a2, a3, a4, a5, a6, 0, v10, a7, a8);
  return a1;
}


//======================================================================
// sub_397FA0
// address: 0x00397FA0   size: 0x21A (538 bytes)
//======================================================================
int __fastcall sub_397FA0(
        int a1,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        unsigned __int8 a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v11; // r0
  int v12; // r6
  int v13; // r10
  _BYTE *v14; // r0
  size_t v15; // r11
  _BYTE *v16; // r8
  _BYTE *v17; // r0
  char v18; // r3
  size_t v19; // r3
  int v20; // r12
  int v21; // r8
  int v22; // r2
  int v23; // r5
  int v24; // r4
  size_t v26; // r8
  void *v27; // [sp+4h] [bp-Ch]
  _BYTE *v28; // [sp+10h] [bp+0h] BYREF
  int v29; // [sp+14h] [bp+4h]
  int v30; // [sp+18h] [bp+8h]
  char *v31; // [sp+1Ch] [bp+Ch]
  int v32; // [sp+20h] [bp+10h]
  int v33; // [sp+24h] [bp+14h]
  int v34; // [sp+2Ch] [bp+1Ch] BYREF
  size_t v35; // [sp+30h] [bp+20h] BYREF
  int v36; // [sp+34h] [bp+24h] BYREF
  char v37[20]; // [sp+38h] [bp+28h] BYREF

  v33 = a4;
  v29 = a6;
  v30 = a2;
  v32 = a3;
  v11 = sub_397970((int)&v34, a5 + 27);
  v12 = a5[1];
  v13 = v11;
  if ( v12 < 0 )
    v12 = 6;
  sub_3BFF28(a5);
  v36 = sub_3A8844();
  v35 = sub_393A38((int)&v36, (char *)&v28, 0, v37, v12, v27, a9, a10);
  v14 = sub_394CF0((int)(a5 + 27));
  v15 = v35;
  v31 = (char *)&v28 + v35;
  v16 = v14;
  if ( v14[28] == 1 )
  {
    j_memcpy(&v28, &v28, v35);
    v26 = v15;
  }
  else
  {
    if ( v14[28] == 0 )
      sub_3A7D48(v14);
    (*(void (__fastcall **)(_BYTE *, _BYTE **, char *, _BYTE **))(*(_DWORD *)v16 + 28))(v16, &v28, v31, &v28);
    v26 = v35;
    v15 = v35;
  }
  v17 = j_memchr(&v28, 46, v15);
  if ( v17 != nullptr )
  {
    v18 = *(_BYTE *)(v13 + 36);
    v28 = v17;
    *v17 = v18;
  }
  else
  {
    v28 = nullptr;
  }
  if ( *(_BYTE *)(v13 + 16) != 0 && (v28 != nullptr || ((v26 <= 2) + (v26 >> 31)) << 24 != 0) )
  {
    if ( (unsigned __int8)v28 == 43 || (unsigned __int8)v28 == 45 )
    {
      v19 = v26 - 1;
      v20 = 1;
      v21 = 1;
      v35 = v19;
    }
    else
    {
      v20 = 0;
      v21 = 0;
    }
    sub_3964B4(
      v30,
      *(unsigned __int8 **)(v13 + 8),
      *(_DWORD *)(v13 + 12),
      *(_BYTE *)(v13 + 37),
      v28,
      (_BYTE *)&v28 + v20,
      (char *)&v28 + v20,
      &v35);
    v26 = v35 + v21;
    v35 = v26;
  }
  v22 = a5[2];
  if ( v22 > (int)v26 )
  {
    sub_396FD4(v30, v29, v22, (int)a5, &v28, &v28, (int *)&v35);
    v26 = v35;
  }
  v23 = (unsigned __int8)v33;
  a5[2] = 0;
  v24 = v32;
  if ( v23 == 0 && (*(int (__fastcall **)(int, _BYTE **, size_t))(*(_DWORD *)v32 + 48))(v32, &v28, v26) != v26 )
    LOBYTE(v23) = 1;
  *(_DWORD *)a1 = v24;
  *(_BYTE *)(a1 + 4) = v23;
  return a1;
}


//======================================================================
// sub_3981BC
// address: 0x003981BC   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_3981BC(int a1, int a2, int a3, int a4, _DWORD *a5, unsigned __int8 a6, int a7, int a8)
{
  int v10; // [sp+Ch] [bp-18h]

  sub_397FA0(a1, a2, a3, a4, a5, a6, 76, v10, a7, a8);
  return a1;
}


//======================================================================
// sub_3981E8
// address: 0x003981E8   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_3981E8(int a1)
{
  _DWORD *v2; // r0
  int v3; // r3
  unsigned __int8 *v5; // r3

  v2 = *(_DWORD **)a1;
  if ( v2 == nullptr )
    return -1;
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 == -1 )
  {
    v5 = (unsigned __int8 *)v2[2];
    if ( (unsigned int)v5 >= v2[3] )
    {
      v3 = (*(int (__fastcall **)(_DWORD *))(*v2 + 36))(v2);
      if ( v3 == -1 )
      {
        *(_DWORD *)a1 = 0;
        return v3;
      }
    }
    else
    {
      v3 = *v5;
    }
    *(_DWORD *)(a1 + 4) = v3;
  }
  return v3;
}


//======================================================================
// sub_398224
// address: 0x00398224   size: 0x72 (114 bytes)
//======================================================================
bool __fastcall sub_398224(int a1, int a2)
{
  _DWORD *v3; // r0
  int v5; // r6
  _DWORD *v6; // r0
  int v7; // r5
  unsigned __int8 *v9; // r2
  int v10; // r0
  unsigned __int8 *v11; // r2
  int v12; // r0

  v3 = *(_DWORD **)a1;
  if ( v3 != nullptr )
  {
    v5 = 0;
    if ( *(_DWORD *)(a1 + 4) != -1 )
      goto LABEL_3;
    v9 = (unsigned __int8 *)v3[2];
    if ( (unsigned int)v9 < v3[3] )
    {
      v10 = *v9;
LABEL_8:
      *(_DWORD *)(a1 + 4) = v10;
      v5 = 0;
      goto LABEL_3;
    }
    v10 = (*(int (__fastcall **)(_DWORD *))(*v3 + 36))(v3);
    if ( v10 != -1 )
      goto LABEL_8;
    *(_DWORD *)a1 = 0;
    v5 = 1;
  }
  else
  {
    v5 = 1;
  }
LABEL_3:
  v6 = *(_DWORD **)a2;
  if ( *(_DWORD *)a2 != 0 )
  {
    v7 = 0;
    if ( *(_DWORD *)(a2 + 4) == -1 )
    {
      v11 = (unsigned __int8 *)v6[2];
      if ( (unsigned int)v11 >= v6[3] )
      {
        v12 = (*(int (__fastcall **)(_DWORD *))(*v6 + 36))(v6);
        if ( v12 == -1 )
        {
          *(_DWORD *)a2 = 0;
          v7 = 1;
          return v7 == v5;
        }
      }
      else
      {
        v12 = *v11;
      }
      *(_DWORD *)(a2 + 4) = v12;
      v7 = 0;
    }
  }
  else
  {
    v7 = 1;
  }
  return v7 == v5;
}


//======================================================================
// sub_398298
// address: 0x00398298   size: 0x230 (560 bytes)
//======================================================================
int *__fastcall sub_398298(
        int *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        _DWORD *a7,
        unsigned __int8 **a8,
        int a9,
        int a10,
        int *a11)
{
  int *v11; // r10
  unsigned __int8 **v12; // r8
  void *v13; // r11
  int *v14; // r3
  int v15; // r1
  unsigned __int8 **v17; // r6
  int v18; // r5
  unsigned int v19; // r4
  int v20; // r10
  int v21; // r1
  int *v22; // r6
  unsigned int v23; // r5
  unsigned int v24; // r11
  size_t v25; // r4
  size_t v26; // r0
  _DWORD *v27; // r0
  unsigned int v28; // r3
  size_t v29; // r11
  unsigned int v30; // r3
  unsigned int v31; // r6
  int v32; // r3
  int *v33; // r5
  _DWORD *v34; // r0
  int v35; // r11
  unsigned __int8 *v36; // r3
  int v37; // r0
  int v38; // r9
  const char *v39; // r8
  size_t v40; // r4
  size_t v41; // r5
  int v42; // r6
  int v43; // r10
  int v44; // [sp+0h] [bp+0h] BYREF
  int v45; // [sp+4h] [bp+4h] BYREF
  int *v46; // [sp+8h] [bp+8h]
  int *v47; // [sp+Ch] [bp+Ch]
  int v48; // [sp+10h] [bp+10h]
  int v49; // [sp+14h] [bp+14h]
  int v50; // [sp+18h] [bp+18h] BYREF
  int v51; // [sp+1Ch] [bp+1Ch]

  v46 = a1;
  v51 = a4;
  v11 = &v50;
  v50 = a3;
  v12 = a8;
  v13 = sub_394CF0(a10 + 108);
  if ( sub_398224((int)&v50, (int)&a5) )
    goto LABEL_2;
  v49 = (unsigned __int8)sub_3981E8((int)&v50);
  if ( a9 == 0 )
    goto LABEL_2;
  v17 = v12;
  v18 = 0;
  v19 = 0;
  v47 = &v50;
  v20 = v49;
  do
  {
    while ( **v17 != v20 && v20 != (*(int (__fastcall **)(void *))(*(_DWORD *)v13 + 8))(v13) )
    {
      ++v18;
      ++v17;
      if ( v18 == a9 )
        goto LABEL_10;
    }
    v21 = a9;
    *(&v44 + v19++) = v18++;
    ++v17;
  }
  while ( v18 != v21 );
LABEL_10:
  v11 = v47;
  v48 = 0;
  v47 = &v45;
  if ( v19 > 1 )
  {
LABEL_11:
    v22 = v47;
    v23 = 1;
    v24 = v19;
    v25 = j_strlen((const char *)v12[v44]);
    do
    {
      v26 = j_strlen((const char *)v12[*v22]);
      if ( v25 > v26 )
        v25 = v26;
      ++v23;
      ++v22;
    }
    while ( v23 < v24 );
    v27 = (_DWORD *)*v11;
    v28 = v24;
    v29 = v25;
    v19 = v28;
    if ( *v11 != 0 )
    {
      v30 = v27[2];
      if ( v30 < v27[3] )
        v27[2] = v30 + 1;
      else
        (*(void (__fastcall **)(_DWORD *))(*v27 + 40))(v27);
      v11[1] = -1;
    }
    if ( ++v48 >= v29 || sub_398224((int)v11, (int)&a5) )
      goto LABEL_2;
    v31 = 0;
    while ( 1 )
    {
      v33 = &v44 + v31;
      v34 = (_DWORD *)*v11;
      v35 = v12[*v33][v48];
      if ( *v11 == 0 )
        break;
      if ( v51 != -1 )
      {
        v32 = (unsigned __int8)v51;
        goto LABEL_24;
      }
      v36 = (unsigned __int8 *)v34[2];
      if ( (unsigned int)v36 < v34[3] )
      {
        v37 = *v36;
        goto LABEL_30;
      }
      v37 = (*(int (__fastcall **)(_DWORD *))(*v34 + 36))(v34);
      if ( v37 == -1 )
      {
        *v11 = 0;
        v32 = 255;
LABEL_24:
        if ( v35 != v32 )
          goto LABEL_25;
LABEL_31:
        if ( v19 <= ++v31 )
        {
LABEL_32:
          if ( v19 <= 1 )
            goto LABEL_33;
          goto LABEL_11;
        }
      }
      else
      {
LABEL_30:
        v11[1] = v37;
        if ( v35 == (unsigned __int8)v37 )
          goto LABEL_31;
LABEL_25:
        --v19;
        *v33 = *(&v44 + v19);
        if ( v19 <= v31 )
          goto LABEL_32;
      }
    }
    v32 = 255;
    goto LABEL_24;
  }
LABEL_33:
  if ( v19 != 1 )
    goto LABEL_2;
  sub_3978A0((int)v11);
  v38 = v44;
  v39 = (const char *)v12[v44];
  v40 = v48 + 1;
  v41 = j_strlen(v39);
  if ( v48 + 1 < v41 )
  {
    v42 = (int)v11;
    do
    {
      if ( sub_398224(v42, (int)&a5) )
        break;
      v43 = (unsigned __int8)v39[v40];
      if ( (unsigned __int8)sub_3981E8(v42) != v43 )
        break;
      ++v40;
      sub_3978A0(v42);
    }
    while ( v40 < v41 );
    v11 = (int *)v42;
  }
  if ( v40 == v41 )
  {
    *a7 = v38;
  }
  else
  {
LABEL_2:
    v45 = *a11;
    *a11 = v45 | 4;
  }
  v14 = v46;
  v15 = v11[1];
  *v46 = *v11;
  v14[1] = v15;
  return v46;
}


//======================================================================
// sub_3984C8
// address: 0x003984C8   size: 0x2BE (702 bytes)
//======================================================================
_DWORD *__fastcall sub_3984C8(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        unsigned int *a7,
        unsigned __int8 **a8,
        unsigned int a9,
        int a10,
        _DWORD *a11)
{
  unsigned __int8 **v11; // r6
  void *v12; // r11
  unsigned int v13; // r4
  int v14; // r9
  _DWORD *v15; // r10
  unsigned __int8 **v16; // r3
  _DWORD *v17; // r0
  int v18; // r6
  unsigned __int8 **v19; // r9
  unsigned int v20; // r3
  int v21; // r12
  _DWORD *v22; // r1
  unsigned int *v23; // r2
  unsigned int v24; // r3
  unsigned __int8 *v25; // r3
  unsigned __int8 *v26; // r3
  unsigned int v27; // r3
  unsigned __int8 *v28; // r3
  _DWORD *v29; // r3
  int v30; // r1
  unsigned __int8 v32; // r0
  unsigned __int8 **v33; // r4
  int v34; // r6
  unsigned int v35; // r9
  unsigned int v36; // r5
  int v37; // r1
  int i; // r4
  int v39; // r11
  int v40; // r11
  int v41; // r3
  int v42; // r0
  int v43; // r0
  int v44; // r0
  _DWORD v45[2]; // [sp+0h] [bp+0h] BYREF
  unsigned __int8 **v46; // [sp+8h] [bp+8h]
  int v47; // [sp+Ch] [bp+Ch]
  _DWORD *v48; // [sp+10h] [bp+10h]
  unsigned int v49; // [sp+14h] [bp+14h]
  _DWORD *v50; // [sp+18h] [bp+18h] BYREF
  int v51; // [sp+1Ch] [bp+1Ch]

  v48 = a1;
  v51 = a4;
  v50 = a3;
  v11 = a8;
  v12 = sub_394CF0(a10 + 108);
  if ( sub_398224((int)&v50, (int)&a5) || (v32 = sub_3981E8((int)&v50), v47 = 2 * a9, v49 = v32, 2 * a9 == 0) )
  {
    v13 = 0;
    v14 = 0;
    v15 = nullptr;
  }
  else
  {
    v33 = v11;
    v46 = v11;
    v34 = 0;
    v35 = v49;
    v36 = 0;
    do
    {
      while ( **v33 != v35 && v35 != (*(int (__fastcall **)(void *))(*(_DWORD *)v12 + 8))(v12) )
      {
        ++v34;
        ++v33;
        if ( v34 == v47 )
          goto LABEL_56;
      }
      v37 = v47;
      v45[v36++] = v34++;
      ++v33;
    }
    while ( v34 != v37 );
LABEL_56:
    v13 = v36;
    v11 = v46;
    if ( v36 != 0 )
    {
      sub_3978A0((int)&v50);
      v15 = v45;
      for ( i = 0; i != v36; ++i )
        v45[i] = j_strlen((const char *)v11[v45[i]]);
      v13 = v36;
      v14 = 1;
    }
    else
    {
      v14 = 0;
      v15 = nullptr;
    }
  }
  v16 = v11;
  v17 = v50;
  v18 = v14;
  v19 = v16;
LABEL_5:
  if ( v17 == nullptr )
  {
    v40 = 1;
    goto LABEL_8;
  }
  v40 = 0;
  if ( v51 == -1 )
  {
    v25 = (unsigned __int8 *)v17[2];
    if ( (unsigned int)v25 < v17[3] )
    {
      v43 = *v25;
    }
    else
    {
      v43 = (*(int (__fastcall **)(_DWORD *))(*v17 + 36))(v17);
      if ( v43 == -1 )
      {
        v50 = nullptr;
        v40 = 1;
        goto LABEL_8;
      }
    }
    v51 = v43;
    v40 = 0;
  }
LABEL_8:
  if ( a5 == nullptr )
  {
    v41 = 1;
    goto LABEL_11;
  }
  v41 = 0;
  if ( a6 != -1 )
  {
LABEL_11:
    if ( v41 == v40 )
      goto LABEL_39;
LABEL_12:
    if ( v50 == nullptr )
    {
      v39 = 255;
      goto LABEL_16;
    }
    if ( v51 != -1 )
    {
      v39 = (unsigned __int8)v51;
      goto LABEL_16;
    }
    v28 = (unsigned __int8 *)v50[2];
    if ( (unsigned int)v28 < v50[3] )
    {
      v44 = *v28;
    }
    else
    {
      v44 = (*(int (__fastcall **)(_DWORD *))(*v50 + 36))(v50);
      if ( v44 == -1 )
      {
        v50 = nullptr;
        v39 = 255;
LABEL_16:
        if ( v13 == 0 )
          goto LABEL_48;
LABEL_17:
        v20 = 0;
        v21 = 0;
        v49 = v18;
        while ( 1 )
        {
          while ( 1 )
          {
            v22 = &v45[v20];
            v23 = &v15[v20];
            v47 = (int)v19[*v22];
            if ( v49 < *v23 )
              break;
            ++v21;
            ++v20;
LABEL_19:
            if ( v13 <= v20 )
              goto LABEL_23;
          }
          if ( *(unsigned __int8 *)(v47 + v49) == v39 )
          {
            ++v20;
            goto LABEL_19;
          }
          *v22 = v45[--v13];
          *v23 = v15[v13];
          if ( v13 <= v20 )
          {
LABEL_23:
            v18 = v49;
            if ( v13 == v21 )
              goto LABEL_39;
            v17 = v50;
            if ( v50 != nullptr )
            {
              v24 = v50[2];
              if ( v24 < v50[3] )
              {
                v50[2] = v24 + 1;
              }
              else
              {
                (*(void (__fastcall **)(_DWORD *))(*v50 + 40))(v50);
                v17 = v50;
              }
              v51 = -1;
            }
            ++v18;
            goto LABEL_5;
          }
        }
      }
    }
    v51 = v44;
    v39 = (unsigned __int8)v44;
    if ( v13 == 0 )
      goto LABEL_48;
    goto LABEL_17;
  }
  v26 = (unsigned __int8 *)a5[2];
  if ( (unsigned int)v26 < a5[3] )
  {
    v42 = *v26;
  }
  else
  {
    v42 = (*(int (**)(void))(*a5 + 36))();
    if ( v42 == -1 )
    {
      a5 = nullptr;
      v41 = 1;
      goto LABEL_11;
    }
  }
  a6 = v42;
  if ( v40 != 0 )
    goto LABEL_12;
LABEL_39:
  if ( v13 != 1 )
  {
    if ( v13 == 2 && (v18 == *v15 || v18 == v15[1]) )
      goto LABEL_41;
LABEL_48:
    *a11 |= 4u;
    goto LABEL_49;
  }
  if ( v18 != *v15 )
    goto LABEL_48;
LABEL_41:
  v27 = v45[0];
  if ( a9 <= v45[0] )
    v27 = v45[0] - a9;
  *a7 = v27;
LABEL_49:
  v29 = v48;
  v30 = v51;
  *v48 = v50;
  v29[1] = v30;
  return v48;
}


//======================================================================
// sub_398788
// address: 0x00398788   size: 0x144 (324 bytes)
//======================================================================
_DWORD *__fastcall sub_398788(_DWORD *a1, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8, int a9)
{
  _DWORD *v11; // r4
  unsigned __int8 **v12; // r3
  unsigned __int8 *v13; // r0
  unsigned __int8 *v14; // r2
  int v15; // r3
  int v16; // r3
  _DWORD *v17; // r4
  int v18; // r5
  int v19; // r7
  int v20; // r3
  unsigned __int8 *v22; // r3
  _DWORD v23[2]; // [sp+20h] [bp-54h] BYREF
  _DWORD *v24; // [sp+28h] [bp-4Ch]
  int v25; // [sp+2Ch] [bp-48h]
  unsigned int v26; // [sp+30h] [bp-44h] BYREF
  int v27; // [sp+34h] [bp-40h] BYREF
  unsigned __int8 *v28[15]; // [sp+38h] [bp-3Ch] BYREF

  v24 = a3;
  v25 = a4;
  v11 = sub_395E64(a7 + 108);
  sub_394CF0(a7 + 108);
  v12 = (unsigned __int8 **)v11[2];
  v13 = v12[19];
  v14 = v12[18];
  v28[2] = v12[20];
  v15 = v11[2];
  v28[1] = v13;
  v28[3] = *(unsigned __int8 **)(v15 + 84);
  v16 = v11[2];
  v28[0] = v14;
  v28[4] = *(unsigned __int8 **)(v16 + 88);
  v28[5] = *(unsigned __int8 **)(v11[2] + 92);
  v28[6] = *(unsigned __int8 **)(v11[2] + 96);
  v28[7] = *(unsigned __int8 **)(v11[2] + 44);
  v28[8] = *(unsigned __int8 **)(v11[2] + 48);
  v28[9] = *(unsigned __int8 **)(v11[2] + 52);
  v28[10] = *(unsigned __int8 **)(v11[2] + 56);
  v28[11] = *(unsigned __int8 **)(v11[2] + 60);
  v28[12] = *(unsigned __int8 **)(v11[2] + 64);
  v28[13] = *(unsigned __int8 **)(v11[2] + 68);
  v27 = 0;
  sub_3984C8(v23, a2, v24, v25, a5, a6, &v26, v28, 7u, a7, &v27);
  v24 = (_DWORD *)v23[0];
  v25 = v23[1];
  v17 = (_DWORD *)v23[0];
  v18 = v23[1];
  if ( v27 != 0 )
    *a8 |= 4u;
  else
    *(_DWORD *)(a9 + 24) = v26;
  if ( v17 != nullptr )
  {
    v19 = 0;
    if ( v18 == -1 )
    {
      v22 = (unsigned __int8 *)v17[2];
      if ( (unsigned int)v22 >= v17[3] )
      {
        v18 = (*(int (__fastcall **)(_DWORD *))(*v17 + 36))(v17);
        if ( v18 == -1 )
        {
          v19 = 1;
          v17 = nullptr;
          goto LABEL_5;
        }
      }
      else
      {
        v18 = *v22;
      }
      v19 = 0;
    }
  }
  else
  {
    v19 = 1;
  }
LABEL_5:
  if ( a5 == nullptr )
    goto LABEL_17;
  v20 = 0;
  if ( a6 == -1 )
  {
    if ( a5[2] < a5[3] || (*(int (**)(void))(*a5 + 36))() != -1 )
      v20 = 0;
    else
LABEL_17:
      v20 = 1;
  }
  if ( v20 == v19 )
    *a8 |= 2u;
  *a1 = v17;
  a1[1] = v18;
  return a1;
}


//======================================================================
// sub_3988CC
// address: 0x003988CC   size: 0x1A2 (418 bytes)
//======================================================================
_DWORD *__fastcall sub_3988CC(_DWORD *a1, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8, int a9)
{
  void *v11; // r4
  unsigned __int8 **v12; // r3
  _DWORD *v13; // r4
  int v14; // r5
  int v15; // r7
  int v16; // r3
  unsigned __int8 *v18; // r3
  _DWORD v19[2]; // [sp+20h] [bp-7Ch] BYREF
  _DWORD *v20; // [sp+28h] [bp-74h]
  int v21; // [sp+2Ch] [bp-70h]
  unsigned int v22; // [sp+30h] [bp-6Ch] BYREF
  int v23; // [sp+34h] [bp-68h] BYREF
  unsigned __int8 *v24[25]; // [sp+38h] [bp-64h] BYREF

  v20 = a3;
  v21 = a4;
  v11 = sub_395E64(a7 + 108);
  sub_394CF0(a7 + 108);
  v12 = *((unsigned __int8 ***)v11 + 2);
  v24[0] = v12[37];
  v24[1] = v12[38];
  v24[2] = v12[39];
  v24[3] = *(unsigned __int8 **)(*((_DWORD *)v11 + 2) + 160);
  v24[4] = *(unsigned __int8 **)(*((_DWORD *)v11 + 2) + 164);
  v24[5] = *(unsigned __int8 **)(*((_DWORD *)v11 + 2) + 168);
  v24[6] = *(unsigned __int8 **)(*((_DWORD *)v11 + 2) + 172);
  v24[7] = *(unsigned __int8 **)(*((_DWORD *)v11 + 2) + 176);
  v24[8] = *(unsigned __int8 **)(*((_DWORD *)v11 + 2) + 180);
  v24[9] = *(unsigned __int8 **)(*((_DWORD *)v11 + 2) + 184);
  v24[10] = *(unsigned __int8 **)(*((_DWORD *)v11 + 2) + 188);
  v24[11] = *(unsigned __int8 **)(*((_DWORD *)v11 + 2) + 192);
  v24[12] = *(unsigned __int8 **)(*((_DWORD *)v11 + 2) + 100);
  v24[13] = *(unsigned __int8 **)(*((_DWORD *)v11 + 2) + 104);
  v24[14] = *(unsigned __int8 **)(*((_DWORD *)v11 + 2) + 108);
  v24[15] = *(unsigned __int8 **)(*((_DWORD *)v11 + 2) + 112);
  v24[16] = *(unsigned __int8 **)(*((_DWORD *)v11 + 2) + 116);
  v24[17] = *(unsigned __int8 **)(*((_DWORD *)v11 + 2) + 120);
  v24[18] = *(unsigned __int8 **)(*((_DWORD *)v11 + 2) + 124);
  v24[19] = *(unsigned __int8 **)(*((_DWORD *)v11 + 2) + 128);
  v24[20] = *(unsigned __int8 **)(*((_DWORD *)v11 + 2) + 132);
  v24[21] = *(unsigned __int8 **)(*((_DWORD *)v11 + 2) + 136);
  v24[22] = *(unsigned __int8 **)(*((_DWORD *)v11 + 2) + 140);
  v24[23] = *(unsigned __int8 **)(*((_DWORD *)v11 + 2) + 144);
  v23 = 0;
  sub_3984C8(v19, a2, v20, v21, a5, a6, &v22, v24, 0xCu, a7, &v23);
  v20 = (_DWORD *)v19[0];
  v21 = v19[1];
  v13 = (_DWORD *)v19[0];
  v14 = v19[1];
  if ( v23 != 0 )
    *a8 |= 4u;
  else
    *(_DWORD *)(a9 + 16) = v22;
  if ( v13 != nullptr )
  {
    v15 = 0;
    if ( v14 == -1 )
    {
      v18 = (unsigned __int8 *)v13[2];
      if ( (unsigned int)v18 >= v13[3] )
      {
        v14 = (*(int (__fastcall **)(_DWORD *))(*v13 + 36))(v13);
        if ( v14 == -1 )
        {
          v15 = 1;
          v13 = nullptr;
          goto LABEL_5;
        }
      }
      else
      {
        v14 = *v18;
      }
      v15 = 0;
    }
  }
  else
  {
    v15 = 1;
  }
LABEL_5:
  if ( a5 == nullptr )
    goto LABEL_17;
  v16 = 0;
  if ( a6 == -1 )
  {
    if ( a5[2] < a5[3] || (*(int (**)(void))(*a5 + 36))() != -1 )
      v16 = 0;
    else
LABEL_17:
      v16 = 1;
  }
  if ( v16 == v15 )
    *a8 |= 2u;
  *a1 = v13;
  a1[1] = v14;
  return a1;
}


//======================================================================
// sub_398A70
// address: 0x00398A70   size: 0x7F8 (2040 bytes)
//======================================================================
_DWORD *__fastcall sub_398A70(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        int *a9,
        const char *a10)
{
  int v10; // r5
  const char *v11; // r10
  _DWORD *v12; // r11
  void *v13; // r0
  size_t v14; // r5
  int v15; // r8
  size_t v16; // r9
  int v17; // r1
  int v18; // r7
  int v19; // r0
  int v20; // r1
  int v21; // r7
  int v22; // r0
  int v23; // r1
  int v24; // r6
  int v25; // r1
  int v27; // r6
  unsigned __int8 *v28; // r3
  unsigned __int8 *v29; // r3
  unsigned __int8 *v30; // r3
  _DWORD *v31; // r3
  int v32; // r0
  _DWORD *v33; // r3
  _DWORD *v34; // r3
  const char *v35; // r1
  void *v36; // r2
  _BYTE *v37; // r0
  unsigned __int8 v38; // r0
  int v39; // r6
  int v40; // r3
  unsigned __int8 v41; // r0
  int v42; // r6
  int v43; // r3
  int v44; // r2
  _DWORD *v45; // r3
  int v46; // r0
  int v47; // r0
  int v48; // r6
  int v49; // r7
  int v50; // r3
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  _DWORD *v56; // [sp+0h] [bp-8Ch]
  int v57; // [sp+4h] [bp-88h]
  int v60; // [sp+38h] [bp-54h]
  int v61; // [sp+38h] [bp-54h]
  _DWORD v62[2]; // [sp+40h] [bp-4Ch] BYREF
  _DWORD *v63; // [sp+48h] [bp-44h] BYREF
  int v64; // [sp+4Ch] [bp-40h]
  int v65; // [sp+50h] [bp-3Ch] BYREF
  int v66; // [sp+54h] [bp-38h] BYREF
  unsigned __int8 *v67; // [sp+58h] [bp-34h] BYREF
  int v68; // [sp+5Ch] [bp-30h]
  int v69; // [sp+60h] [bp-2Ch]
  int v70; // [sp+64h] [bp-28h]
  int v71; // [sp+68h] [bp-24h]
  int v72; // [sp+6Ch] [bp-20h]
  int v73; // [sp+70h] [bp-1Ch]
  int v74; // [sp+74h] [bp-18h]
  int v75; // [sp+78h] [bp-14h]
  int v76; // [sp+7Ch] [bp-10h]
  int v77; // [sp+80h] [bp-Ch]
  int v78; // [sp+84h] [bp-8h]

  v10 = a7 + 108;
  v11 = a10;
  v64 = a4;
  v63 = a3;
  v12 = sub_395E64(a7 + 108);
  v13 = sub_394CF0(v10);
  v14 = 0;
  v15 = (int)v13;
  v65 = 0;
  v16 = j_strlen(v11);
  while ( 1 )
  {
    if ( v63 == nullptr )
    {
      v48 = 1;
      goto LABEL_5;
    }
    v48 = 0;
    if ( v64 == -1 )
    {
      v29 = (unsigned __int8 *)v63[2];
      if ( (unsigned int)v29 < v63[3] )
      {
        v51 = *v29;
LABEL_40:
        v64 = v51;
        v48 = 0;
        goto LABEL_5;
      }
      v51 = (*(int (__fastcall **)(_DWORD *, int))(*v63 + 36))(v63, v64 + 1);
      if ( v51 != -1 )
        goto LABEL_40;
      v63 = nullptr;
      v48 = 1;
    }
LABEL_5:
    if ( a5 != nullptr )
    {
      v49 = 0;
      if ( a6 == -1 )
      {
        v28 = (unsigned __int8 *)a5[2];
        if ( (unsigned int)v28 < a5[3] )
        {
          v52 = *v28;
        }
        else
        {
          v52 = (*(int (**)(void))(*a5 + 36))();
          if ( v52 == -1 )
          {
            a5 = nullptr;
            v49 = 1;
            goto LABEL_8;
          }
        }
        a6 = v52;
        v49 = 0;
      }
    }
    else
    {
      v49 = 1;
    }
LABEL_8:
    if ( v48 == v49 || v14 >= v16 || v65 != 0 )
      break;
    v17 = (unsigned __int8)v11[v14];
    v18 = v15 + v17 + 280;
    v19 = *(unsigned __int8 *)(v15 + v17 + 285);
    if ( *(_BYTE *)(v15 + v17 + 285) != 0 )
      goto LABEL_13;
    v19 = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 32))(v15);
    if ( v19 != 0 )
    {
      *(_BYTE *)(v18 + 5) = v19;
LABEL_13:
      if ( v19 != 37 )
        goto LABEL_27;
      v20 = (unsigned __int8)v11[v14 + 1];
      v21 = v15 + v20 + 280;
      v22 = *(unsigned __int8 *)(v15 + v20 + 285);
      if ( *(_BYTE *)(v15 + v20 + 285) != 0 )
      {
LABEL_16:
        v66 = 0;
        if ( v22 != 79 && v22 != 69 )
        {
          ++v14;
LABEL_22:
          switch ( v22 )
          {
            case 'A':
              v31 = (_DWORD *)v12[2];
              v67 = (unsigned __int8 *)v31[11];
              v68 = v31[12];
              v69 = v31[13];
              v70 = *(_DWORD *)(v12[2] + 56);
              v71 = *(_DWORD *)(v12[2] + 60);
              v72 = *(_DWORD *)(v12[2] + 64);
              v73 = *(_DWORD *)(v12[2] + 68);
              sub_398298(v62, a2, (int)v63, v64, (int)a5, a6, a9 + 6, &v67, 7, a7, &v65);
              goto LABEL_56;
            case 'B':
              v45 = (_DWORD *)v12[2];
              v67 = (unsigned __int8 *)v45[25];
              v68 = v45[26];
              v69 = v45[27];
              v70 = *(_DWORD *)(v12[2] + 112);
              v71 = *(_DWORD *)(v12[2] + 116);
              v72 = *(_DWORD *)(v12[2] + 120);
              v73 = *(_DWORD *)(v12[2] + 124);
              v74 = *(_DWORD *)(v12[2] + 128);
              v75 = *(_DWORD *)(v12[2] + 132);
              v76 = *(_DWORD *)(v12[2] + 136);
              v77 = *(_DWORD *)(v12[2] + 140);
              v78 = *(_DWORD *)(v12[2] + 144);
              v56 = a5;
              v57 = a6;
              goto LABEL_65;
            case 'C':
            case 'Y':
            case 'y':
              sub_394EC0(v62, a2, v63, v64, a5, a6, &v66, 0, 9999, 4, a7, &v65);
              v63 = (_DWORD *)v62[0];
              v64 = v62[1];
              if ( v65 != 0 )
                goto LABEL_21;
              v44 = v66 - 1900;
              if ( v66 < 0 )
                v44 = v66 + 100;
              ++v14;
              a9[5] = v44;
              continue;
            case 'D':
              v37 = (_BYTE *)v15;
              v35 = "%m/%d/%y";
              v36 = &unk_44DDD5;
              goto LABEL_82;
            case 'H':
              sub_394EC0(v62, a2, v63, v64, a5, a6, a9 + 2, 0, 23, 2, a7, &v65);
              goto LABEL_61;
            case 'I':
              sub_394EC0(v62, a2, v63, v64, a5, a6, a9 + 2, 1, 12, 2, a7, &v65);
              goto LABEL_61;
            case 'M':
              sub_394EC0(v62, a2, v63, v64, a5, a6, a9 + 1, 0, 59, 2, a7, &v65);
              goto LABEL_61;
            case 'R':
              v37 = (_BYTE *)v15;
              v35 = "%H:%M";
              v36 = &unk_44DDDE;
              goto LABEL_82;
            case 'S':
              sub_394EC0(v62, a2, v63, v64, a5, a6, a9, 0, 61, 2, a7, &v65);
              goto LABEL_61;
            case 'T':
              v35 = "%H:%M:%S";
              v36 = &unk_44DDE9;
              v37 = (_BYTE *)v15;
LABEL_82:
              sub_393AC4(v37, v35, (int)v36, &v67);
              sub_398A70(v62, a2, v63, v64, a5, a6, a7, &v65, a9, &v67);
              v63 = (_DWORD *)v62[0];
              v64 = v62[1];
              ++v14;
              continue;
            case 'X':
              sub_398A70(v62, a2, v63, v64, a5, a6, a7, &v65, a9, *(_DWORD *)(v12[2] + 16));
              goto LABEL_63;
            case 'Z':
              if ( (*(_BYTE *)(*(_DWORD *)(v15 + 24) + (unsigned __int8)sub_3981E8((int)&v63)) & 1) == 0 )
                goto LABEL_32;
              sub_398298(v62, a2, (int)v63, v64, (int)a5, a6, &v67, (unsigned __int8 **)off_47245C, 14, a7, &v65);
              v63 = (_DWORD *)v62[0];
              v64 = v62[1];
              if ( sub_398224((int)&v63, (int)&a5) || v65 != 0 || v67 != nullptr )
                goto LABEL_21;
              v60 = (unsigned __int8)sub_3981E8((int)&v63);
              v54 = *(_BYTE *)(v15 + 28) != 0 ? *(unsigned __int8 *)(v15 + 74) : sub_393854(v15, 45);
              if ( v60 != v54 )
              {
                v61 = (unsigned __int8)sub_3981E8((int)&v63);
                v55 = *(_BYTE *)(v15 + 28) != 0 ? *(unsigned __int8 *)(v15 + 72) : sub_393854(v15, 43);
                if ( v61 != v55 )
                  goto LABEL_21;
              }
              sub_394EC0(v62, a2, v63, v64, a5, a6, (int *)&v67, 0, 23, 2, a7, &v65);
              v63 = (_DWORD *)v62[0];
              v64 = v62[1];
              sub_394EC0(v62, a2, (_DWORD *)v62[0], v62[1], a5, a6, (int *)&v67, 0, 59, 2, a7, &v65);
              v63 = (_DWORD *)v62[0];
              v64 = v62[1];
              ++v14;
              continue;
            case 'a':
              v34 = (_DWORD *)v12[2];
              v67 = (unsigned __int8 *)v34[18];
              v68 = v34[19];
              v69 = v34[20];
              v70 = *(_DWORD *)(v12[2] + 84);
              v71 = *(_DWORD *)(v12[2] + 88);
              v72 = *(_DWORD *)(v12[2] + 92);
              v73 = *(_DWORD *)(v12[2] + 96);
              sub_398298(v62, a2, (int)v63, v64, (int)a5, a6, a9 + 6, &v67, 7, a7, &v65);
              goto LABEL_56;
            case 'b':
            case 'h':
              v33 = (_DWORD *)v12[2];
              v67 = (unsigned __int8 *)v33[37];
              v68 = v33[38];
              v69 = v33[39];
              v70 = *(_DWORD *)(v12[2] + 160);
              v71 = *(_DWORD *)(v12[2] + 164);
              v72 = *(_DWORD *)(v12[2] + 168);
              v73 = *(_DWORD *)(v12[2] + 172);
              v74 = *(_DWORD *)(v12[2] + 176);
              v75 = *(_DWORD *)(v12[2] + 180);
              v76 = *(_DWORD *)(v12[2] + 184);
              v77 = *(_DWORD *)(v12[2] + 188);
              v78 = *(_DWORD *)(v12[2] + 192);
              v56 = a5;
              v57 = a6;
LABEL_65:
              sub_398298(v62, a2, (int)v63, v64, (int)v56, v57, a9 + 4, &v67, 12, a7, &v65);
LABEL_56:
              v63 = (_DWORD *)v62[0];
              v64 = v62[1];
              ++v14;
              continue;
            case 'c':
              sub_398A70(v62, a2, v63, v64, a5, a6, a7, &v65, a9, *(_DWORD *)(v12[2] + 24));
              goto LABEL_63;
            case 'd':
              sub_394EC0(v62, a2, v63, v64, a5, a6, a9 + 3, 1, 31, 2, a7, &v65);
              goto LABEL_61;
            case 'e':
              if ( (*(_BYTE *)(*(_DWORD *)(v15 + 24) + (unsigned __int8)sub_3981E8((int)&v63)) & 8) != 0 )
              {
                v32 = sub_3978A0((int)&v63);
                ++v14;
                sub_394EC0(v62, a2, *(_DWORD **)v32, *(_DWORD *)(v32 + 4), a5, a6, a9 + 3, 1, 9, 1, a7, &v65);
                v63 = (_DWORD *)v62[0];
                v64 = v62[1];
              }
              else
              {
                sub_394EC0(v62, a2, v63, v64, a5, a6, a9 + 3, 10, 31, 2, a7, &v65);
LABEL_61:
                v63 = (_DWORD *)v62[0];
                v64 = v62[1];
                ++v14;
              }
              continue;
            case 'm':
              sub_394EC0(v62, a2, v63, v64, a5, a6, &v66, 1, 12, 2, a7, &v65);
              v63 = (_DWORD *)v62[0];
              v64 = v62[1];
              if ( v65 != 0 )
                goto LABEL_21;
              a9[4] = v66 - 1;
              ++v14;
              continue;
            case 'n':
              v41 = sub_3981E8((int)&v63);
              v42 = v41 + v15 + 280;
              v43 = *(unsigned __int8 *)(v41 + v15 + 285);
              if ( *(_BYTE *)(v41 + v15 + 285) != 0 )
                goto LABEL_90;
              v46 = (*(int (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v15 + 32))(v15, v41, 0);
              if ( v46 != 0 )
              {
                *(_BYTE *)(v42 + 5) = v46;
                v43 = v46;
LABEL_90:
                if ( v43 == 10 )
                  goto LABEL_47;
              }
              goto LABEL_32;
            case 't':
              v38 = sub_3981E8((int)&v63);
              v39 = v38 + v15 + 280;
              v40 = *(unsigned __int8 *)(v38 + v15 + 285);
              if ( *(_BYTE *)(v38 + v15 + 285) != 0 )
                goto LABEL_86;
              v47 = (*(int (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v15 + 32))(v15, v38, 0);
              if ( v47 != 0 )
              {
                *(_BYTE *)(v39 + 5) = v47;
                v40 = v47;
LABEL_86:
                if ( v40 == 9 )
                  goto LABEL_47;
              }
              goto LABEL_32;
            case 'x':
              sub_398A70(v62, a2, v63, v64, a5, a6, a7, &v65, a9, *(_DWORD *)(v12[2] + 8));
LABEL_63:
              v63 = (_DWORD *)v62[0];
              v64 = v62[1];
              ++v14;
              continue;
            default:
              goto LABEL_20;
          }
        }
        v14 += 2;
        v23 = (unsigned __int8)v11[v14];
        v24 = v15 + v23 + 280;
        v22 = *(unsigned __int8 *)(v15 + v23 + 285);
        if ( *(_BYTE *)(v15 + v23 + 285) != 0 )
          goto LABEL_22;
        v22 = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 32))(v15);
        if ( v22 != 0 )
        {
          *(_BYTE *)(v24 + 5) = v22;
          goto LABEL_22;
        }
LABEL_20:
        v65 |= 4u;
LABEL_21:
        ++v14;
      }
      else
      {
        v22 = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 32))(v15);
        if ( v22 != 0 )
        {
          *(_BYTE *)(v21 + 5) = v22;
          goto LABEL_16;
        }
        v65 |= 4u;
        v14 += 2;
      }
    }
    else
    {
LABEL_27:
      v27 = (unsigned __int8)v11[v14];
      if ( v63 == nullptr )
      {
        v50 = 255;
        goto LABEL_31;
      }
      if ( v64 != -1 )
      {
        v50 = (unsigned __int8)v64;
        goto LABEL_31;
      }
      v30 = (unsigned __int8 *)v63[2];
      if ( (unsigned int)v30 < v63[3] )
      {
        v53 = *v30;
        goto LABEL_46;
      }
      v53 = (*(int (**)(void))(*v63 + 36))();
      if ( v53 == -1 )
      {
        v63 = nullptr;
        v50 = 255;
LABEL_31:
        if ( v27 != v50 )
          goto LABEL_32;
LABEL_47:
        sub_3978A0((int)&v63);
        ++v14;
      }
      else
      {
LABEL_46:
        v64 = v53;
        if ( v27 == (unsigned __int8)v53 )
          goto LABEL_47;
LABEL_32:
        v65 |= 4u;
        ++v14;
      }
    }
  }
  if ( v65 != 0 || v14 != v16 )
    *a8 |= 4u;
  v25 = v64;
  *a1 = v63;
  a1[1] = v25;
  return a1;
}


//======================================================================
// sub_399268
// address: 0x00399268   size: 0xC4 (196 bytes)
//======================================================================
_DWORD *__fastcall sub_399268(_DWORD *a1, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8, int *a9)
{
  _DWORD *v11; // r0
  int v12; // r4
  int v13; // r5
  int v14; // r8
  int v15; // r3
  unsigned __int8 *v17; // r3
  _DWORD v18[2]; // [sp+18h] [bp-10h] BYREF
  _DWORD *v19; // [sp+20h] [bp-8h]
  int v20; // [sp+24h] [bp-4h]

  v19 = a3;
  v20 = a4;
  v11 = sub_395E64(a7 + 108);
  sub_398A70(v18, a2, v19, v20, a5, a6, a7, a8, a9, *(const char **)(v11[2] + 16));
  v19 = (_DWORD *)v18[0];
  v20 = v18[1];
  v12 = v18[0];
  v13 = v18[1];
  if ( v18[0] != 0 )
  {
    v14 = 0;
    if ( v20 == -1 )
    {
      v17 = (unsigned __int8 *)v19[2];
      if ( (unsigned int)v17 >= v19[3] )
      {
        v13 = (*(int (__fastcall **)(_DWORD *))(*v19 + 36))(v19);
        if ( v13 == -1 )
        {
          v14 = 1;
          v12 = 0;
          goto LABEL_3;
        }
      }
      else
      {
        v13 = *v17;
      }
      v14 = 0;
    }
  }
  else
  {
    v14 = 1;
  }
LABEL_3:
  if ( a5 == nullptr )
    goto LABEL_14;
  v15 = 0;
  if ( a6 == -1 )
  {
    if ( a5[2] < a5[3] || (*(int (**)(void))(*a5 + 36))() != -1 )
      v15 = 0;
    else
LABEL_14:
      v15 = 1;
  }
  if ( v14 == v15 )
    *a8 |= 2u;
  *a1 = v12;
  a1[1] = v13;
  return a1;
}


//======================================================================
// sub_39932C
// address: 0x0039932C   size: 0xC4 (196 bytes)
//======================================================================
_DWORD *__fastcall sub_39932C(_DWORD *a1, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8, int *a9)
{
  _DWORD *v11; // r0
  int v12; // r4
  int v13; // r5
  int v14; // r8
  int v15; // r3
  unsigned __int8 *v17; // r3
  _DWORD v18[2]; // [sp+18h] [bp-10h] BYREF
  _DWORD *v19; // [sp+20h] [bp-8h]
  int v20; // [sp+24h] [bp-4h]

  v19 = a3;
  v20 = a4;
  v11 = sub_395E64(a7 + 108);
  sub_398A70(v18, a2, v19, v20, a5, a6, a7, a8, a9, *(const char **)(v11[2] + 8));
  v19 = (_DWORD *)v18[0];
  v20 = v18[1];
  v12 = v18[0];
  v13 = v18[1];
  if ( v18[0] != 0 )
  {
    v14 = 0;
    if ( v20 == -1 )
    {
      v17 = (unsigned __int8 *)v19[2];
      if ( (unsigned int)v17 >= v19[3] )
      {
        v13 = (*(int (__fastcall **)(_DWORD *))(*v19 + 36))(v19);
        if ( v13 == -1 )
        {
          v14 = 1;
          v12 = 0;
          goto LABEL_3;
        }
      }
      else
      {
        v13 = *v17;
      }
      v14 = 0;
    }
  }
  else
  {
    v14 = 1;
  }
LABEL_3:
  if ( a5 == nullptr )
    goto LABEL_14;
  v15 = 0;
  if ( a6 == -1 )
  {
    if ( a5[2] < a5[3] || (*(int (**)(void))(*a5 + 36))() != -1 )
      v15 = 0;
    else
LABEL_14:
      v15 = 1;
  }
  if ( v14 == v15 )
    *a8 |= 2u;
  *a1 = v12;
  a1[1] = v13;
  return a1;
}


//======================================================================
// sub_3993F0
// address: 0x003993F0   size: 0x792 (1938 bytes)
//======================================================================
_DWORD *__fastcall sub_3993F0(_DWORD *a1, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8, int a9)
{
  _DWORD *v9; // r5
  _DWORD *v10; // r9
  int v11; // r0
  int v12; // r8
  int v13; // r11
  unsigned int v14; // r0
  int v15; // r7
  _DWORD *v16; // r0
  int v17; // r5
  _DWORD *v18; // r0
  int v19; // r3
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  int v22; // r3
  void *v23; // r0
  char v24; // r7
  char *v25; // r3
  int v26; // r2
  int v27; // r5
  char *v28; // r3
  char *v29; // r2
  unsigned int v30; // r3
  int v31; // r5
  unsigned __int8 *v32; // r3
  unsigned int i; // r5
  int v34; // r0
  int *v35; // r3
  _DWORD *v36; // r0
  int v37; // r10
  int v38; // r5
  int v39; // r7
  _DWORD *v40; // r0
  int v41; // r3
  int v42; // r2
  unsigned __int8 *v44; // r3
  int v45; // r3
  int v46; // r1
  unsigned int v47; // r3
  unsigned __int8 *v48; // r3
  unsigned __int8 *v49; // r3
  unsigned __int8 *v50; // r3
  unsigned __int8 *v51; // r3
  unsigned __int8 *v52; // r3
  unsigned __int8 *v53; // r3
  unsigned int v54; // r3
  _BOOL4 v55; // r0
  _BOOL4 v56; // r0
  int v57; // r1
  int v58; // r5
  int v59; // r3
  int v60; // r7
  char v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r1
  int v65; // r0
  int v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r0
  void *v71; // [sp+1Ch] [bp-58h]
  int v72; // [sp+20h] [bp-54h]
  int v73; // [sp+28h] [bp-4Ch]
  int v74; // [sp+2Ch] [bp-48h]
  unsigned int v75; // [sp+38h] [bp-3Ch]
  unsigned __int8 v76; // [sp+3Ch] [bp-38h]
  _BOOL4 v77; // [sp+40h] [bp-34h]
  int v79; // [sp+48h] [bp-2Ch]
  _DWORD *v80; // [sp+50h] [bp-24h] BYREF
  int v81; // [sp+54h] [bp-20h]
  _BYTE v82[4]; // [sp+5Ch] [bp-18h] BYREF
  _BYTE v83[4]; // [sp+60h] [bp-14h] BYREF
  char *v84; // [sp+64h] [bp-10h] BYREF
  char *v85; // [sp+68h] [bp-Ch] BYREF
  unsigned __int8 v86[8]; // [sp+6Ch] [bp-8h]

  v9 = (_DWORD *)(a7 + 108);
  v80 = a3;
  v81 = a4;
  v10 = sub_394CF0(a7 + 108);
  v11 = sub_3977F8((int)v82, v9);
  v77 = false;
  v12 = v11;
  v73 = v11 + 56;
  if ( *(_DWORD *)(v11 + 32) != 0 )
    v77 = *(_DWORD *)(v11 + 40) != 0;
  v84 = &byte_55FB88;
  if ( *(_BYTE *)(v11 + 16) != 0 )
    sub_3BE700(&v84, 32);
  v85 = &byte_55FB88;
  sub_3BE700(&v85, 32);
  v71 = (void *)(v12 + 57);
  *(_DWORD *)v86 = *(_DWORD *)(v12 + 52);
  v76 = 0;
  v75 = 0;
  v72 = 0;
  v74 = 0;
  v13 = 0;
  v79 = 0;
  v14 = v86[0];
  if ( v86[0] > 4u )
    goto LABEL_21;
LABEL_6:
  switch ( v14 )
  {
    case 0u:
      goto LABEL_10;
    case 1u:
      if ( sub_398224((int)&v80, (int)&a5) || (*(_BYTE *)(v10[6] + (unsigned __int8)sub_3981E8((int)&v80)) & 8) == 0 )
      {
        v15 = 0;
        if ( v72 == 3 )
          goto LABEL_69;
      }
      else
      {
        sub_3978A0((int)&v80);
LABEL_10:
        v15 = 1;
        if ( v72 == 3 )
          goto LABEL_69;
      }
      v16 = v80;
      while ( 1 )
      {
        if ( v16 == nullptr )
          goto LABEL_173;
        v17 = 0;
        if ( v81 == -1 )
          break;
        while ( 1 )
        {
LABEL_14:
          v18 = a5;
          if ( a5 == nullptr )
          {
LABEL_131:
            v19 = 1;
            goto LABEL_16;
          }
LABEL_15:
          v19 = 0;
          if ( a6 != -1 )
            goto LABEL_16;
          v44 = (unsigned __int8 *)v18[2];
          if ( (unsigned int)v44 < v18[3] )
          {
            v62 = *v44;
          }
          else
          {
            v62 = (*(int (__fastcall **)(_DWORD *, int))(*v18 + 36))(v18, a6 + 1);
            if ( v62 == -1 )
            {
              a5 = nullptr;
              v19 = 1;
LABEL_16:
              if ( v19 == v17 )
                goto LABEL_17;
              goto LABEL_117;
            }
          }
          a6 = v62;
          if ( v17 == 0 )
            goto LABEL_17;
LABEL_117:
          if ( v80 == nullptr )
          {
            v59 = 255;
            goto LABEL_121;
          }
          if ( v81 != -1 )
          {
            v59 = (unsigned __int8)v81;
            goto LABEL_121;
          }
          v53 = (unsigned __int8 *)v80[2];
          if ( (unsigned int)v53 < v80[3] )
          {
            v70 = *v53;
LABEL_162:
            v81 = v70;
            v59 = (unsigned __int8)v70;
            goto LABEL_121;
          }
          v70 = (*(int (__fastcall **)(_DWORD *))(*v80 + 36))(v80);
          if ( v70 != -1 )
            goto LABEL_162;
          v80 = nullptr;
          v59 = 255;
LABEL_121:
          v45 = *(unsigned __int8 *)(v10[6] + v59);
          v46 = v45 << 28;
          if ( (v45 & 8) == 0 )
            goto LABEL_17;
          v16 = v80;
          if ( v80 != nullptr )
            break;
LABEL_173:
          v17 = 1;
        }
        v47 = v80[2];
        if ( v47 < v80[3] )
        {
          v80[2] = v47 + 1;
        }
        else
        {
          (*(void (__fastcall **)(_DWORD *, int))(*v80 + 40))(v80, v46);
          v16 = v80;
        }
        v81 = -1;
      }
      v48 = (unsigned __int8 *)v16[2];
      if ( (unsigned int)v48 < v16[3] )
      {
        v63 = *v48;
      }
      else
      {
        v63 = (*(int (__fastcall **)(_DWORD *))(*v16 + 36))(v16);
        if ( v63 == -1 )
        {
          v80 = nullptr;
          v17 = 1;
          goto LABEL_14;
        }
      }
      v81 = v63;
      v18 = a5;
      v17 = 0;
      if ( a5 == nullptr )
        goto LABEL_131;
      goto LABEL_15;
    case 2u:
      if ( (*(_DWORD *)(a7 + 12) & 0x200) == 0 && v75 <= 1 && v72 != 0 )
      {
        if ( v72 == 1 )
        {
          if ( !v77 && v86[0] != 3 && v86[2] != 1 )
          {
            v72 = 2;
            goto LABEL_20;
          }
        }
        else
        {
          v15 = 1;
          if ( v72 != 2 )
            goto LABEL_18;
          if ( v86[3] != 4 && (!v77 || v86[3] != 3) )
          {
            v72 = 3;
            goto LABEL_20;
          }
        }
      }
      v36 = v80;
      v37 = *(_DWORD *)(v12 + 24);
      v38 = 0;
      if ( v80 != nullptr )
        goto LABEL_101;
LABEL_172:
      v39 = 1;
LABEL_102:
      v40 = a5;
      if ( a5 != nullptr )
      {
LABEL_103:
        v41 = 0;
        if ( a6 != -1 )
          goto LABEL_104;
        v52 = (unsigned __int8 *)v40[2];
        if ( (unsigned int)v52 < v40[3] )
        {
          v67 = *v52;
        }
        else
        {
          v67 = (*(int (__fastcall **)(_DWORD *, int))(*v40 + 36))(v40, a6 + 1);
          if ( v67 == -1 )
          {
            a5 = nullptr;
            v41 = 1;
LABEL_104:
            if ( v41 == v39 )
              goto LABEL_153;
            goto LABEL_105;
          }
        }
        a6 = v67;
        v41 = 0;
        goto LABEL_104;
      }
      while ( v39 != 1 )
      {
LABEL_105:
        if ( v38 == v37 )
          goto LABEL_21;
        if ( (unsigned __int8)sub_3981E8((int)&v80) != *(unsigned __int8 *)(*(_DWORD *)(v12 + 20) + v38) )
          goto LABEL_107;
        v36 = v80;
        if ( v80 != nullptr )
        {
          v54 = v80[2];
          if ( v54 < v80[3] )
          {
            v80[2] = v54 + 1;
          }
          else
          {
            (*(void (__fastcall **)(_DWORD *))(*v80 + 40))(v80);
            v36 = v80;
          }
          v81 = -1;
        }
        ++v38;
        if ( v36 == nullptr )
          goto LABEL_172;
LABEL_101:
        v39 = 0;
        if ( v81 != -1 )
          goto LABEL_102;
        v51 = (unsigned __int8 *)v36[2];
        if ( (unsigned int)v51 < v36[3] )
        {
          v66 = *v51;
        }
        else
        {
          v66 = (*(int (__fastcall **)(_DWORD *, int))(*v36 + 36))(v36, v81 + 1);
          if ( v66 == -1 )
          {
            v80 = nullptr;
            v39 = 1;
            goto LABEL_102;
          }
        }
        v81 = v66;
        v40 = a5;
        v39 = 0;
        if ( a5 != nullptr )
          goto LABEL_103;
      }
LABEL_153:
      if ( v38 != v37 )
      {
LABEL_107:
        if ( v38 == 0 && (*(_DWORD *)(a7 + 12) & 0x200) == 0 )
          goto LABEL_21;
        goto LABEL_109;
      }
      v15 = 1;
      goto LABEL_18;
    case 3u:
      if ( *(_DWORD *)(v12 + 32) != 0 )
      {
        v55 = sub_398224((int)&v80, (int)&a5);
        if ( !v55 && (unsigned __int8)sub_3981E8((int)&v80) == **(unsigned __int8 **)(v12 + 28) )
        {
          v75 = *(_DWORD *)(v12 + 32);
          sub_3978A0((int)&v80);
          v15 = 1;
          goto LABEL_18;
        }
      }
      if ( *(_DWORD *)(v12 + 40) != 0 )
      {
        v56 = sub_398224((int)&v80, (int)&a5);
        if ( !v56 && (unsigned __int8)sub_3981E8((int)&v80) == **(unsigned __int8 **)(v12 + 36) )
        {
          v75 = *(_DWORD *)(v12 + 40);
          sub_3978A0((int)&v80);
          v15 = 1;
          v79 = 1;
          while ( 1 )
          {
LABEL_18:
            if ( (((unsigned int)(v72 + 1) >> 31) + ((unsigned int)(v72 + 1) <= 3)) << 24 == 0 )
              goto LABEL_69;
            ++v72;
LABEL_20:
            v14 = v86[v72];
            if ( v14 <= 4 )
              goto LABEL_6;
LABEL_21:
            v15 = 1;
          }
        }
      }
      if ( *(_DWORD *)(v12 + 32) != 0 && *(_DWORD *)(v12 + 40) == 0 )
      {
        v15 = 1;
        v79 = 1;
        goto LABEL_18;
      }
      v15 = !v77;
LABEL_17:
      if ( v15 != 0 )
        goto LABEL_18;
LABEL_69:
      if ( ((v75 > 1) & (unsigned __int8)v15) != 0 )
      {
        if ( v79 != 0 )
          v60 = *(_DWORD *)(v12 + 36);
        else
          v60 = *(_DWORD *)(v12 + 28);
        for ( i = 1; !sub_398224((int)&v80, (int)&a5) && i < v75; ++i )
        {
          v61 = sub_3981E8((int)&v80);
          if ( v61 != *(_BYTE *)(v60 + i) )
            goto LABEL_109;
          sub_3978A0((int)&v80);
        }
        if ( i == v75 )
        {
LABEL_78:
          if ( *((_DWORD *)v85 - 3) > 1u )
          {
            v34 = sub_3BDB90(&v85, 48, 0);
            if ( v34 != 0 )
            {
              if ( v34 == -1 )
                sub_3BE210(&v85, 0, *((_DWORD *)v85 - 3) - 1);
              else
                sub_3BE210(&v85, 0, v34);
            }
          }
          if ( v79 != 0 )
          {
            v35 = (int *)v85;
            if ( *((int *)v85 - 1) >= 0 )
            {
              sub_3BE0AC(&v85);
              v35 = (int *)v85;
            }
            if ( *(_BYTE *)v35 != 48 )
            {
              if ( *(v35 - 1) >= 0 )
                sub_3BE0AC(&v85);
              sub_3BE294(&v85, 0, 0, 1, 45);
              *((_DWORD *)v85 - 1) = -1;
            }
          }
          if ( *((_DWORD *)v84 - 3) != 0 )
          {
            v64 = v74 != 0 ? v76 : (unsigned __int8)v13;
            sub_3BEA50(&v84, v64);
            if ( sub_3BFF94(*(_DWORD *)(v12 + 8), *(_DWORD *)(v12 + 12), &v84) == 0 )
              *a8 |= 4u;
          }
          if ( v74 == 0 || *(_DWORD *)(v12 + 44) == v13 )
          {
            sub_3BD870(a9, &v85);
            goto LABEL_110;
          }
        }
      }
      else if ( v15 != 0 )
      {
        goto LABEL_78;
      }
LABEL_109:
      *a8 |= 4u;
LABEL_110:
      if ( sub_398224((int)&v80, (int)&a5) )
        *a8 |= 2u;
      v42 = v81;
      *a1 = v80;
      a1[1] = v42;
      sub_3BDF68(v85 - 12, v83);
      sub_3BDF68(v84 - 12, v83);
      return a1;
    case 4u:
      v20 = v80;
LABEL_42:
      if ( v20 == nullptr )
        goto LABEL_147;
      v31 = 0;
      if ( v81 != -1 )
        goto LABEL_23;
      v32 = (unsigned __int8 *)v20[2];
      if ( (unsigned int)v32 < v20[3] )
      {
        v68 = *v32;
      }
      else
      {
        v68 = (*(int (__fastcall **)(_DWORD *))(*v20 + 36))(v20);
        if ( v68 == -1 )
        {
          v80 = nullptr;
          v31 = 1;
LABEL_23:
          while ( 1 )
          {
            v21 = a5;
            if ( a5 != nullptr )
              break;
LABEL_48:
            if ( v31 == 1 )
              goto LABEL_49;
LABEL_26:
            if ( v80 == nullptr )
            {
              v57 = 255;
              v58 = 255;
              goto LABEL_30;
            }
            if ( v81 != -1 )
            {
              v58 = (unsigned __int8)v81;
              v57 = (unsigned __int8)v81;
              goto LABEL_30;
            }
            v50 = (unsigned __int8 *)v80[2];
            if ( (unsigned int)v50 < v80[3] )
            {
              v65 = *v50;
            }
            else
            {
              v65 = (*(int (__fastcall **)(_DWORD *))(*v80 + 36))(v80);
              if ( v65 == -1 )
              {
                v80 = nullptr;
                v57 = 255;
                v58 = 255;
LABEL_30:
                v23 = j_memchr(v71, v57, 0xAu);
                if ( v23 != nullptr )
                  goto LABEL_31;
                goto LABEL_140;
              }
            }
            v81 = v65;
            v58 = (unsigned __int8)v65;
            v23 = j_memchr(v71, (unsigned __int8)v65, 0xAu);
            if ( v23 != nullptr )
            {
LABEL_31:
              v24 = off_472458[0][(unsigned int)v23 - v73];
              v25 = v85;
              v26 = *((_DWORD *)v85 - 3);
              v27 = v26 + 1;
              if ( (unsigned int)(v26 + 1) > *((_DWORD *)v85 - 2) || *((int *)v85 - 1) > 0 )
              {
                sub_3BE700(&v85, v26 + 1);
                v25 = v85;
                v26 = *((_DWORD *)v85 - 3);
              }
              v25[v26] = v24;
              v28 = v85;
              v29 = v85 - 12;
              if ( v85 - 12 != (char *)&dword_55FB7C )
              {
                *((_DWORD *)v85 - 1) = 0;
                *(_DWORD *)v29 = v27;
                v28[v27] = 0;
              }
              ++v13;
LABEL_37:
              v20 = v80;
              if ( v80 != nullptr )
                goto LABEL_38;
              goto LABEL_147;
            }
LABEL_140:
            if ( *(unsigned __int8 *)(v12 + 17) == v58 && v74 == 0 )
            {
              if ( *(int *)(v12 + 44) <= 0 )
                goto LABEL_49;
              v76 = v13;
              v74 = 1;
              v13 = 0;
              goto LABEL_37;
            }
            if ( *(_BYTE *)(v12 + 16) == 0 || *(unsigned __int8 *)(v12 + 18) != v58 || v74 != 0 )
            {
LABEL_49:
              v15 = 1;
              goto LABEL_50;
            }
            if ( v13 == 0 )
            {
              v15 = 0;
LABEL_50:
              if ( *((_DWORD *)v85 - 3) != 0 )
                goto LABEL_17;
              goto LABEL_109;
            }
            sub_3BEA50(&v84, (unsigned __int8)v13);
            v13 = 0;
            v20 = v80;
            if ( v80 != nullptr )
            {
LABEL_38:
              v30 = v20[2];
              if ( v30 < v20[3] )
              {
                v20[2] = v30 + 1;
              }
              else
              {
                (*(void (__fastcall **)(_DWORD *))(*v20 + 40))(v20);
                v20 = v80;
              }
              v81 = -1;
              goto LABEL_42;
            }
LABEL_147:
            v31 = 1;
          }
LABEL_24:
          v22 = 0;
          if ( a6 != -1 )
          {
LABEL_25:
            if ( v22 == v31 )
              goto LABEL_49;
            goto LABEL_26;
          }
          v49 = (unsigned __int8 *)v21[2];
          if ( (unsigned int)v49 < v21[3] )
          {
            v69 = *v49;
          }
          else
          {
            v69 = (*(int (__fastcall **)(_DWORD *, int))(*v21 + 36))(v21, a6 + 1);
            if ( v69 == -1 )
            {
              a5 = nullptr;
              v22 = 1;
              goto LABEL_25;
            }
          }
          a6 = v69;
          v22 = 0;
          goto LABEL_25;
        }
      }
      v81 = v68;
      v21 = a5;
      v31 = 0;
      if ( a5 == nullptr )
        goto LABEL_48;
      goto LABEL_24;
    default:
      goto LABEL_21;
  }
}


//======================================================================
// sub_399BA0
// address: 0x00399BA0   size: 0x792 (1938 bytes)
//======================================================================
_DWORD *__fastcall sub_399BA0(_DWORD *a1, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8, int a9)
{
  _DWORD *v9; // r5
  _DWORD *v10; // r9
  int v11; // r0
  int v12; // r8
  int v13; // r11
  unsigned int v14; // r0
  int v15; // r7
  _DWORD *v16; // r0
  int v17; // r5
  _DWORD *v18; // r0
  int v19; // r3
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  int v22; // r3
  void *v23; // r0
  char v24; // r7
  char *v25; // r3
  int v26; // r2
  int v27; // r5
  char *v28; // r3
  char *v29; // r2
  unsigned int v30; // r3
  int v31; // r5
  unsigned __int8 *v32; // r3
  unsigned int i; // r5
  int v34; // r0
  int *v35; // r3
  _DWORD *v36; // r0
  int v37; // r10
  int v38; // r5
  int v39; // r7
  _DWORD *v40; // r0
  int v41; // r3
  int v42; // r2
  unsigned __int8 *v44; // r3
  int v45; // r3
  int v46; // r1
  unsigned int v47; // r3
  unsigned __int8 *v48; // r3
  unsigned __int8 *v49; // r3
  unsigned __int8 *v50; // r3
  unsigned __int8 *v51; // r3
  unsigned __int8 *v52; // r3
  unsigned __int8 *v53; // r3
  unsigned int v54; // r3
  _BOOL4 v55; // r0
  _BOOL4 v56; // r0
  int v57; // r1
  int v58; // r5
  int v59; // r3
  int v60; // r7
  char v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r1
  int v65; // r0
  int v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r0
  void *v71; // [sp+1Ch] [bp-58h]
  int v72; // [sp+20h] [bp-54h]
  int v73; // [sp+28h] [bp-4Ch]
  int v74; // [sp+2Ch] [bp-48h]
  unsigned int v75; // [sp+38h] [bp-3Ch]
  unsigned __int8 v76; // [sp+3Ch] [bp-38h]
  _BOOL4 v77; // [sp+40h] [bp-34h]
  int v79; // [sp+48h] [bp-2Ch]
  _DWORD *v80; // [sp+50h] [bp-24h] BYREF
  int v81; // [sp+54h] [bp-20h]
  _BYTE v82[4]; // [sp+5Ch] [bp-18h] BYREF
  _BYTE v83[4]; // [sp+60h] [bp-14h] BYREF
  char *v84; // [sp+64h] [bp-10h] BYREF
  char *v85; // [sp+68h] [bp-Ch] BYREF
  unsigned __int8 v86[8]; // [sp+6Ch] [bp-8h]

  v9 = (_DWORD *)(a7 + 108);
  v80 = a3;
  v81 = a4;
  v10 = sub_394CF0(a7 + 108);
  v11 = sub_3978C8((int)v82, v9);
  v77 = false;
  v12 = v11;
  v73 = v11 + 56;
  if ( *(_DWORD *)(v11 + 32) != 0 )
    v77 = *(_DWORD *)(v11 + 40) != 0;
  v84 = &byte_55FB88;
  if ( *(_BYTE *)(v11 + 16) != 0 )
    sub_3BE700(&v84, 32);
  v85 = &byte_55FB88;
  sub_3BE700(&v85, 32);
  v71 = (void *)(v12 + 57);
  *(_DWORD *)v86 = *(_DWORD *)(v12 + 52);
  v76 = 0;
  v75 = 0;
  v72 = 0;
  v74 = 0;
  v13 = 0;
  v79 = 0;
  v14 = v86[0];
  if ( v86[0] > 4u )
    goto LABEL_21;
LABEL_6:
  switch ( v14 )
  {
    case 0u:
      goto LABEL_10;
    case 1u:
      if ( sub_398224((int)&v80, (int)&a5) || (*(_BYTE *)(v10[6] + (unsigned __int8)sub_3981E8((int)&v80)) & 8) == 0 )
      {
        v15 = 0;
        if ( v72 == 3 )
          goto LABEL_69;
      }
      else
      {
        sub_3978A0((int)&v80);
LABEL_10:
        v15 = 1;
        if ( v72 == 3 )
          goto LABEL_69;
      }
      v16 = v80;
      while ( 1 )
      {
        if ( v16 == nullptr )
          goto LABEL_173;
        v17 = 0;
        if ( v81 == -1 )
          break;
        while ( 1 )
        {
LABEL_14:
          v18 = a5;
          if ( a5 == nullptr )
          {
LABEL_131:
            v19 = 1;
            goto LABEL_16;
          }
LABEL_15:
          v19 = 0;
          if ( a6 != -1 )
            goto LABEL_16;
          v44 = (unsigned __int8 *)v18[2];
          if ( (unsigned int)v44 < v18[3] )
          {
            v62 = *v44;
          }
          else
          {
            v62 = (*(int (__fastcall **)(_DWORD *, int))(*v18 + 36))(v18, a6 + 1);
            if ( v62 == -1 )
            {
              a5 = nullptr;
              v19 = 1;
LABEL_16:
              if ( v19 == v17 )
                goto LABEL_17;
              goto LABEL_117;
            }
          }
          a6 = v62;
          if ( v17 == 0 )
            goto LABEL_17;
LABEL_117:
          if ( v80 == nullptr )
          {
            v59 = 255;
            goto LABEL_121;
          }
          if ( v81 != -1 )
          {
            v59 = (unsigned __int8)v81;
            goto LABEL_121;
          }
          v53 = (unsigned __int8 *)v80[2];
          if ( (unsigned int)v53 < v80[3] )
          {
            v70 = *v53;
LABEL_162:
            v81 = v70;
            v59 = (unsigned __int8)v70;
            goto LABEL_121;
          }
          v70 = (*(int (__fastcall **)(_DWORD *))(*v80 + 36))(v80);
          if ( v70 != -1 )
            goto LABEL_162;
          v80 = nullptr;
          v59 = 255;
LABEL_121:
          v45 = *(unsigned __int8 *)(v10[6] + v59);
          v46 = v45 << 28;
          if ( (v45 & 8) == 0 )
            goto LABEL_17;
          v16 = v80;
          if ( v80 != nullptr )
            break;
LABEL_173:
          v17 = 1;
        }
        v47 = v80[2];
        if ( v47 < v80[3] )
        {
          v80[2] = v47 + 1;
        }
        else
        {
          (*(void (__fastcall **)(_DWORD *, int))(*v80 + 40))(v80, v46);
          v16 = v80;
        }
        v81 = -1;
      }
      v48 = (unsigned __int8 *)v16[2];
      if ( (unsigned int)v48 < v16[3] )
      {
        v63 = *v48;
      }
      else
      {
        v63 = (*(int (__fastcall **)(_DWORD *))(*v16 + 36))(v16);
        if ( v63 == -1 )
        {
          v80 = nullptr;
          v17 = 1;
          goto LABEL_14;
        }
      }
      v81 = v63;
      v18 = a5;
      v17 = 0;
      if ( a5 == nullptr )
        goto LABEL_131;
      goto LABEL_15;
    case 2u:
      if ( (*(_DWORD *)(a7 + 12) & 0x200) == 0 && v75 <= 1 && v72 != 0 )
      {
        if ( v72 == 1 )
        {
          if ( !v77 && v86[0] != 3 && v86[2] != 1 )
          {
            v72 = 2;
            goto LABEL_20;
          }
        }
        else
        {
          v15 = 1;
          if ( v72 != 2 )
            goto LABEL_18;
          if ( v86[3] != 4 && (!v77 || v86[3] != 3) )
          {
            v72 = 3;
            goto LABEL_20;
          }
        }
      }
      v36 = v80;
      v37 = *(_DWORD *)(v12 + 24);
      v38 = 0;
      if ( v80 != nullptr )
        goto LABEL_101;
LABEL_172:
      v39 = 1;
LABEL_102:
      v40 = a5;
      if ( a5 != nullptr )
      {
LABEL_103:
        v41 = 0;
        if ( a6 != -1 )
          goto LABEL_104;
        v52 = (unsigned __int8 *)v40[2];
        if ( (unsigned int)v52 < v40[3] )
        {
          v67 = *v52;
        }
        else
        {
          v67 = (*(int (__fastcall **)(_DWORD *, int))(*v40 + 36))(v40, a6 + 1);
          if ( v67 == -1 )
          {
            a5 = nullptr;
            v41 = 1;
LABEL_104:
            if ( v41 == v39 )
              goto LABEL_153;
            goto LABEL_105;
          }
        }
        a6 = v67;
        v41 = 0;
        goto LABEL_104;
      }
      while ( v39 != 1 )
      {
LABEL_105:
        if ( v38 == v37 )
          goto LABEL_21;
        if ( (unsigned __int8)sub_3981E8((int)&v80) != *(unsigned __int8 *)(*(_DWORD *)(v12 + 20) + v38) )
          goto LABEL_107;
        v36 = v80;
        if ( v80 != nullptr )
        {
          v54 = v80[2];
          if ( v54 < v80[3] )
          {
            v80[2] = v54 + 1;
          }
          else
          {
            (*(void (__fastcall **)(_DWORD *))(*v80 + 40))(v80);
            v36 = v80;
          }
          v81 = -1;
        }
        ++v38;
        if ( v36 == nullptr )
          goto LABEL_172;
LABEL_101:
        v39 = 0;
        if ( v81 != -1 )
          goto LABEL_102;
        v51 = (unsigned __int8 *)v36[2];
        if ( (unsigned int)v51 < v36[3] )
        {
          v66 = *v51;
        }
        else
        {
          v66 = (*(int (__fastcall **)(_DWORD *, int))(*v36 + 36))(v36, v81 + 1);
          if ( v66 == -1 )
          {
            v80 = nullptr;
            v39 = 1;
            goto LABEL_102;
          }
        }
        v81 = v66;
        v40 = a5;
        v39 = 0;
        if ( a5 != nullptr )
          goto LABEL_103;
      }
LABEL_153:
      if ( v38 != v37 )
      {
LABEL_107:
        if ( v38 == 0 && (*(_DWORD *)(a7 + 12) & 0x200) == 0 )
          goto LABEL_21;
        goto LABEL_109;
      }
      v15 = 1;
      goto LABEL_18;
    case 3u:
      if ( *(_DWORD *)(v12 + 32) != 0 )
      {
        v55 = sub_398224((int)&v80, (int)&a5);
        if ( !v55 && (unsigned __int8)sub_3981E8((int)&v80) == **(unsigned __int8 **)(v12 + 28) )
        {
          v75 = *(_DWORD *)(v12 + 32);
          sub_3978A0((int)&v80);
          v15 = 1;
          goto LABEL_18;
        }
      }
      if ( *(_DWORD *)(v12 + 40) != 0 )
      {
        v56 = sub_398224((int)&v80, (int)&a5);
        if ( !v56 && (unsigned __int8)sub_3981E8((int)&v80) == **(unsigned __int8 **)(v12 + 36) )
        {
          v75 = *(_DWORD *)(v12 + 40);
          sub_3978A0((int)&v80);
          v15 = 1;
          v79 = 1;
          while ( 1 )
          {
LABEL_18:
            if ( (((unsigned int)(v72 + 1) >> 31) + ((unsigned int)(v72 + 1) <= 3)) << 24 == 0 )
              goto LABEL_69;
            ++v72;
LABEL_20:
            v14 = v86[v72];
            if ( v14 <= 4 )
              goto LABEL_6;
LABEL_21:
            v15 = 1;
          }
        }
      }
      if ( *(_DWORD *)(v12 + 32) != 0 && *(_DWORD *)(v12 + 40) == 0 )
      {
        v15 = 1;
        v79 = 1;
        goto LABEL_18;
      }
      v15 = !v77;
LABEL_17:
      if ( v15 != 0 )
        goto LABEL_18;
LABEL_69:
      if ( ((v75 > 1) & (unsigned __int8)v15) != 0 )
      {
        if ( v79 != 0 )
          v60 = *(_DWORD *)(v12 + 36);
        else
          v60 = *(_DWORD *)(v12 + 28);
        for ( i = 1; !sub_398224((int)&v80, (int)&a5) && i < v75; ++i )
        {
          v61 = sub_3981E8((int)&v80);
          if ( v61 != *(_BYTE *)(v60 + i) )
            goto LABEL_109;
          sub_3978A0((int)&v80);
        }
        if ( i == v75 )
        {
LABEL_78:
          if ( *((_DWORD *)v85 - 3) > 1u )
          {
            v34 = sub_3BDB90(&v85, 48, 0);
            if ( v34 != 0 )
            {
              if ( v34 == -1 )
                sub_3BE210(&v85, 0, *((_DWORD *)v85 - 3) - 1);
              else
                sub_3BE210(&v85, 0, v34);
            }
          }
          if ( v79 != 0 )
          {
            v35 = (int *)v85;
            if ( *((int *)v85 - 1) >= 0 )
            {
              sub_3BE0AC(&v85);
              v35 = (int *)v85;
            }
            if ( *(_BYTE *)v35 != 48 )
            {
              if ( *(v35 - 1) >= 0 )
                sub_3BE0AC(&v85);
              sub_3BE294(&v85, 0, 0, 1, 45);
              *((_DWORD *)v85 - 1) = -1;
            }
          }
          if ( *((_DWORD *)v84 - 3) != 0 )
          {
            v64 = v74 != 0 ? v76 : (unsigned __int8)v13;
            sub_3BEA50(&v84, v64);
            if ( sub_3BFF94(*(_DWORD *)(v12 + 8), *(_DWORD *)(v12 + 12), &v84) == 0 )
              *a8 |= 4u;
          }
          if ( v74 == 0 || *(_DWORD *)(v12 + 44) == v13 )
          {
            sub_3BD870(a9, &v85);
            goto LABEL_110;
          }
        }
      }
      else if ( v15 != 0 )
      {
        goto LABEL_78;
      }
LABEL_109:
      *a8 |= 4u;
LABEL_110:
      if ( sub_398224((int)&v80, (int)&a5) )
        *a8 |= 2u;
      v42 = v81;
      *a1 = v80;
      a1[1] = v42;
      sub_3BDF68(v85 - 12, v83);
      sub_3BDF68(v84 - 12, v83);
      return a1;
    case 4u:
      v20 = v80;
LABEL_42:
      if ( v20 == nullptr )
        goto LABEL_147;
      v31 = 0;
      if ( v81 != -1 )
        goto LABEL_23;
      v32 = (unsigned __int8 *)v20[2];
      if ( (unsigned int)v32 < v20[3] )
      {
        v68 = *v32;
      }
      else
      {
        v68 = (*(int (__fastcall **)(_DWORD *))(*v20 + 36))(v20);
        if ( v68 == -1 )
        {
          v80 = nullptr;
          v31 = 1;
LABEL_23:
          while ( 1 )
          {
            v21 = a5;
            if ( a5 != nullptr )
              break;
LABEL_48:
            if ( v31 == 1 )
              goto LABEL_49;
LABEL_26:
            if ( v80 == nullptr )
            {
              v57 = 255;
              v58 = 255;
              goto LABEL_30;
            }
            if ( v81 != -1 )
            {
              v58 = (unsigned __int8)v81;
              v57 = (unsigned __int8)v81;
              goto LABEL_30;
            }
            v50 = (unsigned __int8 *)v80[2];
            if ( (unsigned int)v50 < v80[3] )
            {
              v65 = *v50;
            }
            else
            {
              v65 = (*(int (__fastcall **)(_DWORD *))(*v80 + 36))(v80);
              if ( v65 == -1 )
              {
                v80 = nullptr;
                v57 = 255;
                v58 = 255;
LABEL_30:
                v23 = j_memchr(v71, v57, 0xAu);
                if ( v23 != nullptr )
                  goto LABEL_31;
                goto LABEL_140;
              }
            }
            v81 = v65;
            v58 = (unsigned __int8)v65;
            v23 = j_memchr(v71, (unsigned __int8)v65, 0xAu);
            if ( v23 != nullptr )
            {
LABEL_31:
              v24 = off_472458[0][(unsigned int)v23 - v73];
              v25 = v85;
              v26 = *((_DWORD *)v85 - 3);
              v27 = v26 + 1;
              if ( (unsigned int)(v26 + 1) > *((_DWORD *)v85 - 2) || *((int *)v85 - 1) > 0 )
              {
                sub_3BE700(&v85, v26 + 1);
                v25 = v85;
                v26 = *((_DWORD *)v85 - 3);
              }
              v25[v26] = v24;
              v28 = v85;
              v29 = v85 - 12;
              if ( v85 - 12 != (char *)&dword_55FB7C )
              {
                *((_DWORD *)v85 - 1) = 0;
                *(_DWORD *)v29 = v27;
                v28[v27] = 0;
              }
              ++v13;
LABEL_37:
              v20 = v80;
              if ( v80 != nullptr )
                goto LABEL_38;
              goto LABEL_147;
            }
LABEL_140:
            if ( *(unsigned __int8 *)(v12 + 17) == v58 && v74 == 0 )
            {
              if ( *(int *)(v12 + 44) <= 0 )
                goto LABEL_49;
              v76 = v13;
              v74 = 1;
              v13 = 0;
              goto LABEL_37;
            }
            if ( *(_BYTE *)(v12 + 16) == 0 || *(unsigned __int8 *)(v12 + 18) != v58 || v74 != 0 )
            {
LABEL_49:
              v15 = 1;
              goto LABEL_50;
            }
            if ( v13 == 0 )
            {
              v15 = 0;
LABEL_50:
              if ( *((_DWORD *)v85 - 3) != 0 )
                goto LABEL_17;
              goto LABEL_109;
            }
            sub_3BEA50(&v84, (unsigned __int8)v13);
            v13 = 0;
            v20 = v80;
            if ( v80 != nullptr )
            {
LABEL_38:
              v30 = v20[2];
              if ( v30 < v20[3] )
              {
                v20[2] = v30 + 1;
              }
              else
              {
                (*(void (__fastcall **)(_DWORD *))(*v20 + 40))(v20);
                v20 = v80;
              }
              v81 = -1;
              goto LABEL_42;
            }
LABEL_147:
            v31 = 1;
          }
LABEL_24:
          v22 = 0;
          if ( a6 != -1 )
          {
LABEL_25:
            if ( v22 == v31 )
              goto LABEL_49;
            goto LABEL_26;
          }
          v49 = (unsigned __int8 *)v21[2];
          if ( (unsigned int)v49 < v21[3] )
          {
            v69 = *v49;
          }
          else
          {
            v69 = (*(int (__fastcall **)(_DWORD *, int))(*v21 + 36))(v21, a6 + 1);
            if ( v69 == -1 )
            {
              a5 = nullptr;
              v22 = 1;
              goto LABEL_25;
            }
          }
          a6 = v69;
          v22 = 0;
          goto LABEL_25;
        }
      }
      v81 = v68;
      v21 = a5;
      v31 = 0;
      if ( a5 == nullptr )
        goto LABEL_48;
      goto LABEL_24;
    default:
      goto LABEL_21;
  }
}


//======================================================================
// sub_39A350
// address: 0x0039A350   size: 0xC4 (196 bytes)
//======================================================================
_DWORD *__fastcall sub_39A350(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        char a7,
        int a8,
        _DWORD *a9,
        int a10)
{
  char *v11; // r9
  int v12; // r2
  char *v13; // r4
  _DWORD v15[2]; // [sp+18h] [bp-1Ch] BYREF
  _DWORD *v16; // [sp+20h] [bp-14h]
  int v17; // [sp+24h] [bp-10h]
  char *v18; // [sp+28h] [bp-Ch] BYREF
  _DWORD v19[2]; // [sp+2Ch] [bp-8h] BYREF

  v17 = a4;
  v16 = a3;
  v18 = &byte_55FB88;
  if ( a7 != 0 )
    sub_3993F0(v15, a2, v16, v17, a5, a6, a8, a9, (int)&v18);
  else
    sub_399BA0(v15, a2, v16, v17, a5, a6, a8, a9, (int)&v18);
  v16 = (_DWORD *)v15[0];
  v17 = v15[1];
  v11 = v18;
  v19[0] = sub_3A8844();
  std::__convert_to_v<long double>(v11, a10, a9, v19);
  v12 = v17;
  *a1 = v16;
  a1[1] = v12;
  v13 = v18 - 12;
  if ( v18 - 12 != (char *)&dword_55FB7C && sub_3C82FC(v18 - 4, -1) <= 0 )
    sub_3BDF60(v13, v19);
  return a1;
}


//======================================================================
// sub_39A428
// address: 0x0039A428   size: 0x12C (300 bytes)
//======================================================================
_DWORD *__fastcall sub_39A428(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        char a7,
        int a8,
        _DWORD *a9,
        void **a10)
{
  _BYTE *v12; // r10
  char *v13; // r0
  int *v14; // r7
  int v15; // r6
  void *v16; // r7
  const void *v17; // r11
  char *v18; // r9
  int v19; // r2
  _DWORD v21[2]; // [sp+18h] [bp-1Ch] BYREF
  _DWORD *v22; // [sp+20h] [bp-14h]
  int v23; // [sp+24h] [bp-10h]
  _BYTE v24[4]; // [sp+28h] [bp-Ch] BYREF
  void *v25[2]; // [sp+2Ch] [bp-8h] BYREF

  v23 = a4;
  v22 = a3;
  v25[0] = &byte_55FB88;
  v12 = sub_394CF0(a8 + 108);
  if ( a7 != 0 )
    sub_3993F0(v21, a2, v22, v23, a5, a6, a8, a9, (int)v25);
  else
    sub_399BA0(v21, a2, v22, v23, a5, a6, a8, a9, (int)v25);
  v22 = (_DWORD *)v21[0];
  v23 = v21[1];
  v13 = (char *)v25[0];
  v14 = (int *)((char *)v25[0] - 12);
  v15 = *((_DWORD *)v25[0] - 3);
  if ( v15 != 0 )
  {
    sub_3BEA0C(a10, *((_DWORD *)v25[0] - 3), 0);
    v16 = *a10;
    v17 = v25[0];
    v18 = (char *)v25[0] + v15;
    if ( *((int *)*a10 - 1) >= 0 )
    {
      sub_3BE0AC(a10);
      v16 = *a10;
    }
    if ( v12[28] == 1 )
    {
      j_memcpy(v16, v17, v18 - (_BYTE *)v17);
      v13 = (char *)v25[0];
      v14 = (int *)((char *)v25[0] - 12);
    }
    else
    {
      if ( v12[28] == 0 )
        sub_3A7D48(v12);
      (*(void (__fastcall **)(_BYTE *, const void *, char *, void *))(*(_DWORD *)v12 + 28))(v12, v17, v18, v16);
      v13 = (char *)v25[0];
      v14 = (int *)((char *)v25[0] - 12);
    }
  }
  v19 = v23;
  *a1 = v22;
  a1[1] = v19;
  if ( v14 != &dword_55FB7C && sub_3C82FC(v13 - 4, -1) <= 0 )
    sub_3BDF60(v14, v24);
  return a1;
}


//======================================================================
// sub_39A568
// address: 0x0039A568   size: 0x68E (1678 bytes)
//======================================================================
_DWORD *__fastcall sub_39A568(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  int v9; // r5
  int v10; // r9
  int v11; // r3
  int v12; // r11
  int v13; // r7
  _DWORD *v14; // r0
  unsigned int v15; // r3
  unsigned __int8 *v16; // r3
  int v17; // r5
  int v18; // r5
  int v19; // r6
  unsigned __int8 v21; // r0
  unsigned int v22; // r3
  int v23; // r1
  int v24; // r0
  unsigned __int8 *v25; // r3
  int v26; // r3
  void *v27; // r0
  _DWORD *v28; // r0
  unsigned int v29; // r3
  unsigned __int8 *v30; // r3
  int v31; // r5
  unsigned __int8 *v32; // r3
  int v33; // r0
  int v34; // r1
  unsigned __int8 v35; // r0
  int v36; // r6
  int v37; // r0
  int v38; // r2
  int v39; // r7
  unsigned __int8 *v40; // r6
  _DWORD *v41; // r0
  unsigned int v42; // r2
  unsigned __int8 *v43; // r2
  int v44; // r11
  int v45; // r9
  int v46; // r1
  int v47; // r0
  unsigned __int8 v48; // r0
  unsigned __int8 *v49; // r3
  unsigned __int8 v50; // r0
  int v51; // r3
  int v52; // r3
  int v53; // r10
  int v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r0
  _BOOL4 v59; // [sp+4h] [bp-28h]
  int v60; // [sp+8h] [bp-24h]
  _DWORD *v62; // [sp+10h] [bp-1Ch] BYREF
  int v63; // [sp+14h] [bp-18h]
  _BYTE v64[4]; // [sp+1Ch] [bp-10h] BYREF
  _BYTE v65[4]; // [sp+20h] [bp-Ch] BYREF
  _DWORD v66[2]; // [sp+24h] [bp-8h] BYREF

  v62 = a3;
  v63 = a4;
  v9 = 0;
  v10 = sub_397970((int)v64, (_DWORD *)(a7 + 108));
  v59 = sub_398224((int)&v62, (int)&a5);
  if ( v59 )
    goto LABEL_3;
  v35 = sub_3981E8((int)&v62);
  v36 = v35;
  if ( *(unsigned __int8 *)(v10 + 75) != v35 && *(unsigned __int8 *)(v10 + 74) != v35 )
  {
    v11 = *(unsigned __int8 *)(v10 + 16);
    goto LABEL_118;
  }
  v11 = *(unsigned __int8 *)(v10 + 16);
  if ( *(_BYTE *)(v10 + 16) != 0 && *(unsigned __int8 *)(v10 + 37) == v35 )
  {
    v11 = 1;
    goto LABEL_118;
  }
  if ( *(unsigned __int8 *)(v10 + 36) != v35 )
  {
    v46 = 43;
    if ( *(unsigned __int8 *)(v10 + 75) != v35 )
      v46 = 45;
    sub_3BEA50(a9, v46);
    v47 = sub_3978A0((int)&v62);
    v9 = v36;
    if ( !sub_398224(v47, (int)&a5) )
    {
      v48 = sub_3981E8((int)&v62);
      v11 = *(unsigned __int8 *)(v10 + 16);
      v36 = v48;
      goto LABEL_118;
    }
LABEL_3:
    v11 = *(unsigned __int8 *)(v10 + 16);
    v12 = 0;
    v13 = 0;
    v59 = true;
    goto LABEL_4;
  }
LABEL_118:
  v37 = 0;
  v38 = v36;
  v39 = 0;
  v40 = (unsigned __int8 *)v10;
  while ( 1 )
  {
    if ( v11 != 0 && v40[37] == v38 )
    {
      v12 = v39;
      v10 = (int)v40;
      v13 = v37;
      v9 = v38;
      v66[0] = &byte_55FB88;
      goto LABEL_114;
    }
    if ( v40[36] == v38 )
      break;
    v9 = v40[78];
    if ( v9 != v38 )
      break;
    if ( v37 == 0 )
      sub_3BEA50(a9, 48);
    v41 = v62;
    ++v39;
    if ( v62 == nullptr )
    {
LABEL_146:
      v44 = 1;
      goto LABEL_132;
    }
    v42 = v62[2];
    if ( v42 >= v62[3] )
    {
      (*(void (__fastcall **)(_DWORD *))(*v62 + 40))(v62);
      v41 = v62;
      v63 = -1;
      if ( v62 == nullptr )
        goto LABEL_146;
    }
    else
    {
      v62[2] = v42 + 1;
      v63 = -1;
    }
    v43 = (unsigned __int8 *)v41[2];
    if ( (unsigned int)v43 < v41[3] )
    {
      v54 = *v43;
LABEL_131:
      v44 = 0;
      v63 = v54;
      goto LABEL_132;
    }
    v54 = (*(int (__fastcall **)(_DWORD *))(*v41 + 36))(v41);
    if ( v54 != -1 )
      goto LABEL_131;
    v62 = nullptr;
    v44 = 1;
LABEL_132:
    if ( a5 == nullptr )
    {
      v45 = 1;
      goto LABEL_134;
    }
    v45 = 0;
    if ( a6 != -1 )
      goto LABEL_134;
    v49 = (unsigned __int8 *)a5[2];
    if ( (unsigned int)v49 < a5[3] )
    {
      v58 = *v49;
    }
    else
    {
      v58 = (*(int (**)(void))(*a5 + 36))();
      if ( v58 == -1 )
      {
        a5 = nullptr;
        v45 = 1;
LABEL_134:
        if ( v44 == v45 )
          goto LABEL_135;
        goto LABEL_151;
      }
    }
    a6 = v58;
    if ( v44 == 0 )
    {
LABEL_135:
      v10 = (int)v40;
      v11 = v40[16];
      v12 = v39;
      v59 = true;
      v13 = 1;
      goto LABEL_4;
    }
LABEL_151:
    v50 = sub_3981E8((int)&v62);
    v11 = v40[16];
    v38 = v50;
    v37 = 1;
  }
  v12 = v39;
  v10 = (int)v40;
  v13 = v37;
  v9 = v38;
LABEL_4:
  v66[0] = &byte_55FB88;
  if ( v11 != 0 )
LABEL_114:
    sub_3BE700(v66, 32);
  v60 = *(unsigned __int8 *)(v10 + 100);
  if ( *(_BYTE *)(v10 + 100) == 0 )
  {
    if ( v59 )
    {
      v53 = 0;
      v59 = false;
      goto LABEL_23;
    }
    v53 = 0;
    while ( 2 )
    {
      if ( (unsigned __int8)(v9 - 48) <= 9u )
      {
LABEL_10:
        sub_3BEA50(a9, (unsigned __int8)v9);
        v13 = 1;
        break;
      }
LABEL_29:
      if ( *(unsigned __int8 *)(v10 + 36) == v9 && !v59 << 24 != 0 && (v53 ^ 1) << 24 != 0 )
      {
        sub_3BEA50(a9, 46);
        v53 = 0;
        v59 = true;
      }
      else
      {
        if ( *(unsigned __int8 *)(v10 + 92) != v9 && *(unsigned __int8 *)(v10 + 98) != v9
          || (v53 ^ 1) << 24 == 0
          || v13 == 0 )
        {
          goto LABEL_23;
        }
        sub_3BEA50(a9, 101);
        if ( v62 != nullptr )
        {
          v22 = v62[2];
          if ( v22 < v62[3] )
            v62[2] = v22 + 1;
          else
            (*(void (__fastcall **)(_DWORD *))(*v62 + 40))(v62);
          v63 = -1;
        }
        if ( sub_398224((int)&v62, (int)&a5) )
        {
          v53 = 1;
          goto LABEL_23;
        }
        v9 = (unsigned __int8)sub_3981E8((int)&v62);
        if ( *(unsigned __int8 *)(v10 + 75) == v9 )
        {
          v23 = 43;
        }
        else
        {
          v23 = 45;
          if ( *(unsigned __int8 *)(v10 + 74) != v9 )
          {
            v53 = 1;
            v13 = 1;
            continue;
          }
        }
        sub_3BEA50(a9, v23);
        v53 = 1;
        v13 = 1;
      }
      break;
    }
    v14 = v62;
    if ( v62 == nullptr )
      goto LABEL_46;
    v15 = v62[2];
    if ( v15 < v62[3] )
    {
      v62[2] = v15 + 1;
      v63 = -1;
    }
    else
    {
      (*(void (__fastcall **)(_DWORD *))(*v62 + 40))(v62);
      v14 = v62;
      v63 = -1;
      if ( v62 == nullptr )
      {
        v17 = 1;
LABEL_19:
        if ( a5 == nullptr )
        {
          v52 = 1;
          goto LABEL_22;
        }
        v52 = 0;
        if ( a6 != -1 )
        {
LABEL_22:
          if ( v52 == v17 )
            goto LABEL_23;
          v21 = sub_3981E8((int)&v62);
          v9 = v21;
          if ( (unsigned __int8)(v21 - 48) <= 9u )
            goto LABEL_10;
          goto LABEL_29;
        }
        v25 = (unsigned __int8 *)a5[2];
        if ( (unsigned int)v25 < a5[3] )
        {
          v56 = *v25;
        }
        else
        {
          v56 = (*(int (**)(void))(*a5 + 36))();
          if ( v56 == -1 )
          {
            a5 = nullptr;
            v52 = 1;
            goto LABEL_22;
          }
        }
        a6 = v56;
        v52 = 0;
        goto LABEL_22;
      }
    }
    v16 = (unsigned __int8 *)v14[2];
    if ( (unsigned int)v16 < v14[3] )
    {
      v24 = *v16;
    }
    else
    {
      v24 = (*(int (__fastcall **)(_DWORD *))(*v14 + 36))(v14);
      if ( v24 == -1 )
      {
        v62 = nullptr;
LABEL_46:
        v17 = 1;
        goto LABEL_19;
      }
    }
    v17 = 0;
    v63 = v24;
    goto LABEL_19;
  }
  if ( v59 )
  {
    v53 = 0;
    v59 = false;
    goto LABEL_23;
  }
  v26 = *(unsigned __int8 *)(v10 + 16);
  v53 = 0;
  v59 = false;
  while ( 2 )
  {
    if ( v26 == 0 )
      goto LABEL_61;
LABEL_60:
    if ( *(unsigned __int8 *)(v10 + 37) == v9 )
    {
      do
      {
        if ( (v53 ^ 1) << 24 == 0 || !v59 << 24 == 0 )
          goto LABEL_23;
        if ( v12 == 0 )
        {
          sub_3BDFA4(a9, 0, *(_DWORD *)(*a9 - 12), 0);
          v53 = 0;
          v59 = false;
          goto LABEL_23;
        }
        sub_3BEA50(v66, (unsigned __int8)v12);
        v28 = v62;
        v53 = 0;
        v59 = false;
        v12 = 0;
        if ( v62 != nullptr )
          goto LABEL_65;
LABEL_83:
        v31 = v60;
LABEL_72:
        if ( a5 != nullptr )
        {
          v51 = 0;
          if ( a6 == -1 )
          {
            v32 = (unsigned __int8 *)a5[2];
            if ( (unsigned int)v32 < a5[3] )
            {
              v55 = *v32;
            }
            else
            {
              v55 = (*(int (**)(void))(*a5 + 36))();
              if ( v55 == -1 )
              {
                a5 = nullptr;
                v51 = v60;
                goto LABEL_75;
              }
            }
            a6 = v55;
            v51 = 0;
          }
        }
        else
        {
          v51 = v60;
        }
LABEL_75:
        if ( v51 == v31 )
          goto LABEL_23;
        v9 = (unsigned __int8)sub_3981E8((int)&v62);
      }
      while ( *(_BYTE *)(v10 + 16) != 0 && *(unsigned __int8 *)(v10 + 37) == v9 );
    }
LABEL_61:
    if ( *(unsigned __int8 *)(v10 + 36) != v9 )
    {
      v27 = j_memchr((const void *)(v10 + 78), v9, 0xAu);
      if ( v27 != nullptr )
      {
        sub_3BEA50(a9, (unsigned __int8)((_BYTE)v27 - (v10 + 78) + 48));
        ++v12;
        v13 = 1;
        goto LABEL_64;
      }
      if ( *(unsigned __int8 *)(v10 + 92) != v9 && *(unsigned __int8 *)(v10 + 98) != v9 || v53 != 0 || v13 == 0 )
        goto LABEL_23;
      if ( *(_DWORD *)(v66[0] - 12) != 0 && !v59 )
        sub_3BEA50(v66, (unsigned __int8)v12);
      sub_3BEA50(a9, 101);
      v33 = sub_3978A0((int)&v62);
      if ( sub_398224(v33, (int)&a5) )
      {
        v53 = 1;
        goto LABEL_23;
      }
      v9 = (unsigned __int8)sub_3981E8((int)&v62);
      if ( *(unsigned __int8 *)(v10 + 75) != v9 && *(unsigned __int8 *)(v10 + 74) != v9 )
      {
        v26 = *(unsigned __int8 *)(v10 + 16);
        v53 = 1;
        v13 = 1;
        continue;
      }
      v26 = *(unsigned __int8 *)(v10 + 16);
      if ( *(_BYTE *)(v10 + 16) != 0 && *(unsigned __int8 *)(v10 + 37) == v9 )
      {
        v53 = 1;
        v13 = 1;
        goto LABEL_60;
      }
      if ( *(unsigned __int8 *)(v10 + 36) == v9 )
      {
        v53 = 1;
        v13 = 1;
        continue;
      }
      v34 = 43;
      if ( *(unsigned __int8 *)(v10 + 75) != v9 )
        v34 = 45;
      sub_3BEA50(a9, v34);
      v53 = 1;
      v13 = 1;
LABEL_64:
      v28 = v62;
      if ( v62 == nullptr )
        goto LABEL_83;
LABEL_65:
      v29 = v28[2];
      if ( v29 < v28[3] )
      {
        v28[2] = v29 + 1;
        v63 = -1;
      }
      else
      {
        (*(void (__fastcall **)(_DWORD *))(*v28 + 40))(v28);
        v28 = v62;
        v63 = -1;
        if ( v62 == nullptr )
        {
          v31 = v60;
          goto LABEL_72;
        }
      }
      v30 = (unsigned __int8 *)v28[2];
      if ( (unsigned int)v30 < v28[3] )
      {
        v57 = *v30;
      }
      else
      {
        v57 = (*(int (__fastcall **)(_DWORD *))(*v28 + 36))(v28);
        if ( v57 == -1 )
        {
          v62 = nullptr;
          v31 = v60;
          goto LABEL_72;
        }
      }
      v31 = 0;
      v63 = v57;
      goto LABEL_72;
    }
    break;
  }
  if ( (v53 ^ 1) << 24 != 0 && !v59 << 24 != 0 )
  {
    if ( *(_DWORD *)(v66[0] - 12) != 0 )
      sub_3BEA50(v66, (unsigned __int8)v12);
    sub_3BEA50(a9, 46);
    v53 = 0;
    v59 = true;
    goto LABEL_64;
  }
LABEL_23:
  v18 = v66[0] - 12;
  if ( *(_DWORD *)(v66[0] - 12) != 0 )
  {
    if ( (v53 ^ 1) << 24 != 0 && !v59 << 24 != 0 )
    {
      sub_3BEA50(v66, (unsigned __int8)v12);
      v18 = v66[0] - 12;
    }
    if ( sub_3BFF94(*(_DWORD *)(v10 + 8), *(_DWORD *)(v10 + 12), v66) == 0 )
      *a8 = 4;
  }
  v19 = v63;
  *a1 = v62;
  a1[1] = v19;
  sub_3BDF68(v18, v65);
  return a1;
}


//======================================================================
// sub_39AC08
// address: 0x0039AC08   size: 0x12A (298 bytes)
//======================================================================
_DWORD *__fastcall sub_39AC08(_DWORD *a1, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8, int a9)
{
  char *v11; // r8
  int v12; // r8
  int v13; // r3
  int v14; // r2
  char *v15; // r4
  unsigned __int8 *v17; // r3
  int v18; // r0
  _DWORD v19[2]; // [sp+18h] [bp-14h] BYREF
  _DWORD *v20; // [sp+20h] [bp-Ch]
  int v21; // [sp+24h] [bp-8h]
  char *v22; // [sp+28h] [bp-4h] BYREF
  _DWORD v23[2]; // [sp+2Ch] [bp+0h] BYREF

  v21 = a4;
  v20 = a3;
  v22 = &byte_55FB88;
  sub_3BE700(&v22, 32);
  sub_39A568(v19, a2, v20, v21, a5, a6, a7, a8, &v22);
  v20 = (_DWORD *)v19[0];
  v21 = v19[1];
  v11 = v22;
  v23[0] = sub_3A8844();
  std::__convert_to_v<float>(v11, a9, a8, v23);
  if ( v20 != nullptr )
  {
    v12 = 0;
    if ( v21 == -1 )
    {
      v17 = (unsigned __int8 *)v20[2];
      if ( (unsigned int)v17 >= v20[3] )
      {
        v18 = (*(int (**)(void))(*v20 + 36))();
        if ( v18 == -1 )
        {
          v20 = nullptr;
          v12 = 1;
          goto LABEL_3;
        }
      }
      else
      {
        v18 = *v17;
      }
      v21 = v18;
      v12 = 0;
    }
  }
  else
  {
    v12 = 1;
  }
LABEL_3:
  if ( a5 == nullptr )
    goto LABEL_15;
  v13 = 0;
  if ( a6 == -1 )
  {
    if ( a5[2] < a5[3] || (*(int (**)(void))(*a5 + 36))() != -1 )
      v13 = 0;
    else
LABEL_15:
      v13 = 1;
  }
  if ( v13 == v12 )
    *a8 |= 2u;
  v14 = v21;
  *a1 = v20;
  a1[1] = v14;
  v15 = v22 - 12;
  if ( v22 - 12 != (char *)&dword_55FB7C && sub_3C82FC(v22 - 4, -1) <= 0 )
    sub_3BDF60(v15, v23);
  return a1;
}


//======================================================================
// sub_39AD44
// address: 0x0039AD44   size: 0x12A (298 bytes)
//======================================================================
_DWORD *__fastcall sub_39AD44(_DWORD *a1, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8, int a9)
{
  char *v11; // r8
  int v12; // r8
  int v13; // r3
  int v14; // r2
  char *v15; // r4
  unsigned __int8 *v17; // r3
  int v18; // r0
  _DWORD v19[2]; // [sp+18h] [bp-14h] BYREF
  _DWORD *v20; // [sp+20h] [bp-Ch]
  int v21; // [sp+24h] [bp-8h]
  char *v22; // [sp+28h] [bp-4h] BYREF
  _DWORD v23[2]; // [sp+2Ch] [bp+0h] BYREF

  v21 = a4;
  v20 = a3;
  v22 = &byte_55FB88;
  sub_3BE700(&v22, 32);
  sub_39A568(v19, a2, v20, v21, a5, a6, a7, a8, &v22);
  v20 = (_DWORD *)v19[0];
  v21 = v19[1];
  v11 = v22;
  v23[0] = sub_3A8844();
  std::__convert_to_v<double>(v11, a9, a8, v23);
  if ( v20 != nullptr )
  {
    v12 = 0;
    if ( v21 == -1 )
    {
      v17 = (unsigned __int8 *)v20[2];
      if ( (unsigned int)v17 >= v20[3] )
      {
        v18 = (*(int (**)(void))(*v20 + 36))();
        if ( v18 == -1 )
        {
          v20 = nullptr;
          v12 = 1;
          goto LABEL_3;
        }
      }
      else
      {
        v18 = *v17;
      }
      v21 = v18;
      v12 = 0;
    }
  }
  else
  {
    v12 = 1;
  }
LABEL_3:
  if ( a5 == nullptr )
    goto LABEL_15;
  v13 = 0;
  if ( a6 == -1 )
  {
    if ( a5[2] < a5[3] || (*(int (**)(void))(*a5 + 36))() != -1 )
      v13 = 0;
    else
LABEL_15:
      v13 = 1;
  }
  if ( v13 == v12 )
    *a8 |= 2u;
  v14 = v21;
  *a1 = v20;
  a1[1] = v14;
  v15 = v22 - 12;
  if ( v22 - 12 != (char *)&dword_55FB7C && sub_3C82FC(v22 - 4, -1) <= 0 )
    sub_3BDF60(v15, v23);
  return a1;
}


//======================================================================
// sub_39AE80
// address: 0x0039AE80   size: 0x12A (298 bytes)
//======================================================================
_DWORD *__fastcall sub_39AE80(_DWORD *a1, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8, int a9)
{
  char *v11; // r8
  int v12; // r8
  int v13; // r3
  int v14; // r2
  char *v15; // r4
  unsigned __int8 *v17; // r3
  int v18; // r0
  _DWORD v19[2]; // [sp+18h] [bp-14h] BYREF
  _DWORD *v20; // [sp+20h] [bp-Ch]
  int v21; // [sp+24h] [bp-8h]
  char *v22; // [sp+28h] [bp-4h] BYREF
  _DWORD v23[2]; // [sp+2Ch] [bp+0h] BYREF

  v21 = a4;
  v20 = a3;
  v22 = &byte_55FB88;
  sub_3BE700(&v22, 32);
  sub_39A568(v19, a2, v20, v21, a5, a6, a7, a8, &v22);
  v20 = (_DWORD *)v19[0];
  v21 = v19[1];
  v11 = v22;
  v23[0] = sub_3A8844();
  std::__convert_to_v<long double>(v11, a9, a8, v23);
  if ( v20 != nullptr )
  {
    v12 = 0;
    if ( v21 == -1 )
    {
      v17 = (unsigned __int8 *)v20[2];
      if ( (unsigned int)v17 >= v20[3] )
      {
        v18 = (*(int (**)(void))(*v20 + 36))();
        if ( v18 == -1 )
        {
          v20 = nullptr;
          v12 = 1;
          goto LABEL_3;
        }
      }
      else
      {
        v18 = *v17;
      }
      v21 = v18;
      v12 = 0;
    }
  }
  else
  {
    v12 = 1;
  }
LABEL_3:
  if ( a5 == nullptr )
    goto LABEL_15;
  v13 = 0;
  if ( a6 == -1 )
  {
    if ( a5[2] < a5[3] || (*(int (**)(void))(*a5 + 36))() != -1 )
      v13 = 0;
    else
LABEL_15:
      v13 = 1;
  }
  if ( v13 == v12 )
    *a8 |= 2u;
  v14 = v21;
  *a1 = v20;
  a1[1] = v14;
  v15 = v22 - 12;
  if ( v22 - 12 != (char *)&dword_55FB7C && sub_3C82FC(v22 - 4, -1) <= 0 )
    sub_3BDF60(v15, v23);
  return a1;
}


//======================================================================
// sub_39AFBC
// address: 0x0039AFBC   size: 0x556 (1366 bytes)
//======================================================================
_DWORD *__fastcall sub_39AFBC(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  int v9; // r4
  int v10; // r0
  int v11; // r6
  unsigned __int8 *v12; // r8
  int v13; // r3
  int v14; // r0
  int v15; // r11
  size_t v16; // r9
  unsigned int v17; // r6
  int v18; // r7
  unsigned int v19; // r4
  unsigned int v20; // r6
  _DWORD *v21; // r0
  unsigned int v22; // r3
  unsigned __int8 *v23; // r3
  int v24; // r0
  int v25; // r4
  int v26; // r4
  _DWORD *v27; // r0
  int v28; // r3
  int v29; // r2
  unsigned __int8 *v31; // r3
  _BYTE *v32; // r0
  int v33; // r0
  unsigned int v34; // r6
  _DWORD *v35; // r0
  unsigned int v36; // r3
  unsigned __int8 *v37; // r3
  int v38; // r0
  int v39; // r4
  unsigned __int8 *v40; // r3
  int v41; // r2
  unsigned __int8 *v42; // r6
  int v43; // r8
  unsigned int v44; // r3
  unsigned __int8 v45; // r0
  unsigned int v46; // r4
  int v47; // r3
  int v48; // r3
  int v49; // r0
  int v50; // r0
  _BOOL4 v51; // [sp+4h] [bp-40h]
  unsigned int v52; // [sp+8h] [bp-3Ch]
  unsigned int v53; // [sp+Ch] [bp-38h]
  int v54; // [sp+10h] [bp-34h]
  int v55; // [sp+14h] [bp-30h]
  int v56; // [sp+18h] [bp-2Ch]
  _BOOL4 v58; // [sp+20h] [bp-24h]
  _DWORD *v59; // [sp+28h] [bp-1Ch] BYREF
  int v60; // [sp+2Ch] [bp-18h]
  char v61[4]; // [sp+34h] [bp-10h] BYREF
  char v62[4]; // [sp+38h] [bp-Ch] BYREF
  _DWORD v63[2]; // [sp+3Ch] [bp-8h] BYREF

  v9 = a7;
  v60 = a4;
  v59 = a3;
  v10 = sub_397970((int)v61, (_DWORD *)(a7 + 108));
  v11 = *(_DWORD *)(v9 + 12) & 0x4A;
  v12 = (unsigned __int8 *)v10;
  if ( v11 == 64 )
  {
    v53 = 8;
  }
  else if ( v11 == 8 )
  {
    v53 = 16;
  }
  else
  {
    v53 = 10;
  }
  v51 = sub_398224((int)&v59, (int)&a5);
  if ( v51 )
  {
    v46 = 0;
    v58 = false;
    goto LABEL_13;
  }
  v46 = (unsigned __int8)sub_3981E8((int)&v59);
  v58 = v12[74] == v46;
  if ( v12[74] != v46 && v12[75] != v46 )
  {
    v13 = v12[16];
    goto LABEL_107;
  }
  v13 = v12[16];
  if ( v12[16] != 0 && v12[37] == v46 )
  {
    v13 = 1;
    goto LABEL_107;
  }
  if ( v12[36] == v46 )
  {
LABEL_107:
    v15 = 0;
    v56 = 0;
    v41 = v11;
    v42 = v12;
    v43 = v41;
    while ( 1 )
    {
      if ( v13 != 0 && v42[37] == v46 || v42[36] == v46 )
      {
LABEL_142:
        v12 = v42;
        goto LABEL_14;
      }
      if ( v42[78] == v46 )
      {
        if ( v53 == 10 || v56 == 0 )
        {
          if ( v43 != 0 )
          {
            if ( v53 == 8 )
              v15 = 0;
            else
              ++v15;
            v56 = 1;
          }
          else
          {
            v15 = 0;
            v56 = 1;
            v53 = 8;
          }
          goto LABEL_118;
        }
      }
      else if ( v56 == 0 )
      {
        goto LABEL_142;
      }
      if ( v42[76] != v46 && v42[77] != v46 )
      {
        v12 = v42;
        v56 = 1;
        goto LABEL_14;
      }
      if ( v43 != 0 )
      {
        if ( v53 != 16 )
        {
          v12 = v42;
          v56 = 1;
          goto LABEL_15;
        }
        v15 = 0;
        v56 = 0;
      }
      else
      {
        v15 = 0;
        v56 = 0;
        v53 = 16;
      }
LABEL_118:
      if ( v59 != nullptr )
      {
        v44 = v59[2];
        if ( v44 < v59[3] )
          v59[2] = v44 + 1;
        else
          (*(void (__fastcall **)(_DWORD *))(*v59 + 40))(v59);
        v60 = -1;
      }
      if ( sub_398224((int)&v59, (int)&a5) )
      {
        v51 = true;
        v12 = v42;
        v13 = v42[16];
        if ( v53 != 16 )
          goto LABEL_15;
        goto LABEL_125;
      }
      v46 = (unsigned __int8)sub_3981E8((int)&v59);
      if ( v56 == 0 )
      {
        v12 = v42;
        v13 = v42[16];
        goto LABEL_14;
      }
      v13 = v42[16];
    }
  }
  v14 = sub_3978A0((int)&v59);
  if ( !sub_398224(v14, (int)&a5) )
  {
    v45 = sub_3981E8((int)&v59);
    v13 = v12[16];
    v46 = v45;
    goto LABEL_107;
  }
LABEL_13:
  v13 = v12[16];
  v51 = true;
  v15 = 0;
  v56 = 0;
LABEL_14:
  if ( v53 == 16 )
LABEL_125:
    v16 = 22;
  else
LABEL_15:
    v16 = v53;
  v63[0] = &byte_55FB88;
  if ( v13 != 0 )
    sub_3BE700(v63, 32);
  v54 = v58 + 0x7FFFFFFF;
  v55 = v12[100];
  v52 = (v58 + 0x7FFFFFFF) / v53;
  if ( v12[100] == 0 )
  {
    v17 = 0;
    v18 = 0;
    if ( !v51 )
    {
      while ( v16 > 0xA )
      {
        if ( (unsigned __int8)(v46 - 48) <= 9u )
        {
          v19 = v46 - 48;
          goto LABEL_24;
        }
        if ( (unsigned __int8)(v46 - 97) <= 5u )
        {
          v19 = v46 - 87;
          goto LABEL_24;
        }
        if ( (unsigned __int8)(v46 - 65) > 5u )
          goto LABEL_54;
        v19 = v46 - 55;
        if ( v52 >= v17 )
        {
LABEL_25:
          v20 = v17 * v53;
          v18 |= v54 - v19 < v20;
          v17 = v19 + v20;
          ++v15;
          goto LABEL_26;
        }
LABEL_65:
        v18 = 1;
LABEL_26:
        v21 = v59;
        if ( v59 == nullptr )
          goto LABEL_60;
        v22 = v59[2];
        if ( v22 < v59[3] )
        {
          v59[2] = v22 + 1;
          v60 = -1;
LABEL_30:
          v23 = (unsigned __int8 *)v21[2];
          if ( (unsigned int)v23 < v21[3] )
          {
            v24 = *v23;
LABEL_32:
            v25 = 0;
            v60 = v24;
            goto LABEL_33;
          }
          v24 = (*(int (__fastcall **)(_DWORD *))(*v21 + 36))(v21);
          if ( v24 != -1 )
            goto LABEL_32;
          v59 = nullptr;
LABEL_60:
          v25 = 1;
          goto LABEL_33;
        }
        (*(void (**)(void))(*v59 + 40))();
        v21 = v59;
        v60 = -1;
        if ( v59 != nullptr )
          goto LABEL_30;
        v25 = 1;
LABEL_33:
        if ( a5 == nullptr )
        {
          v47 = 1;
          goto LABEL_36;
        }
        v47 = 0;
        if ( a6 != -1 )
          goto LABEL_36;
        v31 = (unsigned __int8 *)a5[2];
        if ( (unsigned int)v31 < a5[3] )
        {
          v49 = *v31;
        }
        else
        {
          v49 = (*(int (**)(void))(*a5 + 36))();
          if ( v49 == -1 )
          {
            a5 = nullptr;
            v47 = 1;
LABEL_36:
            if ( v47 == v25 )
              goto LABEL_37;
            goto LABEL_70;
          }
        }
        a6 = v49;
        if ( v25 == 0 )
        {
LABEL_37:
          v26 = 0;
          v51 = true;
          goto LABEL_38;
        }
LABEL_70:
        v46 = (unsigned __int8)sub_3981E8((int)&v59);
      }
      if ( v46 <= 0x2F || v46 >= (unsigned __int8)(v16 + 48) )
        goto LABEL_54;
      v19 = v46 - 48;
LABEL_24:
      if ( v52 >= v17 )
        goto LABEL_25;
      goto LABEL_65;
    }
    goto LABEL_54;
  }
  v17 = 0;
  v18 = 0;
  if ( v51 )
  {
LABEL_54:
    v26 = 0;
    v27 = (_DWORD *)(v63[0] - 12);
    if ( *(_DWORD *)(v63[0] - 12) == 0 )
      goto LABEL_39;
    goto LABEL_55;
  }
  while ( v12[16] == 0 || v12[37] != v46 )
  {
    if ( v12[36] == v46 )
      goto LABEL_54;
    v32 = j_memchr(v12 + 78, v46, v16);
    if ( v32 == nullptr )
      goto LABEL_54;
    v33 = v32 - (v12 + 78);
    if ( v33 > 15 )
      v33 -= 6;
    if ( v52 < v17 )
    {
      v18 = 1;
    }
    else
    {
      v34 = v17 * v53;
      v18 |= v54 - v33 < v34;
      v17 = v33 + v34;
      ++v15;
    }
LABEL_82:
    v35 = v59;
    if ( v59 == nullptr )
      goto LABEL_96;
    v36 = v59[2];
    if ( v36 < v59[3] )
    {
      v59[2] = v36 + 1;
      v60 = -1;
LABEL_86:
      v37 = (unsigned __int8 *)v35[2];
      if ( (unsigned int)v37 < v35[3] )
      {
        v38 = *v37;
LABEL_88:
        v39 = 0;
        v60 = v38;
        goto LABEL_89;
      }
      v38 = (*(int (__fastcall **)(_DWORD *))(*v35 + 36))(v35);
      if ( v38 != -1 )
        goto LABEL_88;
      v59 = nullptr;
LABEL_96:
      v39 = v55;
      goto LABEL_89;
    }
    (*(void (**)(void))(*v59 + 40))();
    v35 = v59;
    v60 = -1;
    if ( v59 != nullptr )
      goto LABEL_86;
    v39 = v55;
LABEL_89:
    if ( a5 == nullptr )
    {
      v48 = v55;
      goto LABEL_92;
    }
    v48 = 0;
    if ( a6 == -1 )
    {
      v40 = (unsigned __int8 *)a5[2];
      if ( (unsigned int)v40 < a5[3] )
      {
        v50 = *v40;
LABEL_101:
        a6 = v50;
        v48 = 0;
        goto LABEL_92;
      }
      v50 = (*(int (**)(void))(*a5 + 36))();
      if ( v50 != -1 )
        goto LABEL_101;
      a5 = nullptr;
      v48 = v55;
    }
LABEL_92:
    if ( v48 == v39 )
    {
      v26 = 0;
      v51 = true;
      goto LABEL_38;
    }
    v46 = (unsigned __int8)sub_3981E8((int)&v59);
  }
  if ( v15 != 0 )
  {
    sub_3BEA50(v63, (unsigned __int8)v15);
    v15 = 0;
    goto LABEL_82;
  }
  v26 = 1;
LABEL_38:
  v27 = (_DWORD *)(v63[0] - 12);
  if ( *(_DWORD *)(v63[0] - 12) != 0 )
  {
LABEL_55:
    sub_3BEA50(v63, (unsigned __int8)v15);
    if ( sub_3BFF94(*((_DWORD *)v12 + 2), *((_DWORD *)v12 + 3), v63) == 0 )
      *a8 = 4;
    v27 = (_DWORD *)(v63[0] - 12);
  }
LABEL_39:
  if ( v15 == 0 && v56 == 0 && *v27 == 0 || v26 != 0 )
  {
    v28 = 0;
    goto LABEL_43;
  }
  if ( v18 != 0 )
  {
    if ( v58 )
    {
      *a9 = 0x80000000;
    }
    else
    {
      v28 = 0x7FFFFFFF;
LABEL_43:
      *a9 = v28;
    }
    *a8 = 4;
  }
  else
  {
    if ( v58 )
      v17 = -v17;
    *a9 = v17;
  }
  if ( v51 )
    *a8 |= 2u;
  v29 = v60;
  *a1 = v59;
  a1[1] = v29;
  sub_3BDF68(v27, v62);
  return a1;
}


//======================================================================
// sub_39B524
// address: 0x0039B524   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_39B524(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  sub_39AFBC(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}


//======================================================================
// sub_39B54C
// address: 0x0039B54C   size: 0x2A4 (676 bytes)
//======================================================================
_DWORD *__fastcall sub_39B54C(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _BYTE *a9)
{
  int v9; // r0
  _DWORD *v10; // r5
  _DWORD *v11; // r11
  _BOOL4 v12; // r9
  _BOOL4 v13; // r8
  unsigned int v14; // r7
  _BOOL4 v15; // r10
  int v16; // r6
  unsigned int v17; // r3
  unsigned __int8 *v18; // r3
  unsigned __int8 *v19; // r3
  unsigned __int8 *v20; // r3
  int v21; // r0
  int v22; // r7
  int v24; // r3
  _DWORD *v25; // r5
  _DWORD *v26; // r7
  int v27; // r3
  int v28; // r0
  int v29; // r0
  int v30; // [sp+1Ch] [bp-28h]
  _BOOL4 v31; // [sp+20h] [bp-24h]
  _DWORD v33[2]; // [sp+28h] [bp-1Ch] BYREF
  _DWORD *v34; // [sp+30h] [bp-14h] BYREF
  int v35; // [sp+34h] [bp-10h]
  _DWORD v36[2]; // [sp+3Ch] [bp-8h] BYREF

  v35 = a4;
  v9 = *(_DWORD *)(a7 + 12);
  v34 = a3;
  if ( (v9 & 1) == 0 )
  {
    v36[0] = -1;
    sub_39AFBC(v33, a2, v34, v35, a5, a6, a7, a8, v36);
    v34 = (_DWORD *)v33[0];
    v35 = v33[1];
    if ( v36[0] > 1u )
    {
      v10 = a8;
      *a9 = 1;
      *v10 = 4;
      if ( sub_398224((int)&v34, (int)&a5) )
        *v10 |= 2u;
    }
    else
    {
      *a9 = v36[0] & 1;
    }
    goto LABEL_47;
  }
  v11 = (_DWORD *)sub_397970((int)v36, (_DWORD *)(a7 + 108));
  v12 = v11[6] == 0;
  v13 = v11[8] == 0;
  v14 = 0;
  v15 = true;
  v31 = true;
  while ( 1 )
  {
    v16 = !v12 || !v13;
    if ( v12 && v13 )
    {
      v24 = 0;
      goto LABEL_48;
    }
    if ( v34 == nullptr )
    {
      v30 = !v12 || !v13;
      goto LABEL_12;
    }
    v30 = 0;
    if ( v35 == -1 )
    {
      v18 = (unsigned __int8 *)v34[2];
      if ( (unsigned int)v18 < v34[3] )
      {
        v29 = *v18;
LABEL_38:
        v35 = v29;
        v30 = 0;
        goto LABEL_12;
      }
      v29 = (*(int (__fastcall **)(_DWORD *))(*v34 + 36))(v34);
      if ( v29 != -1 )
        goto LABEL_38;
      v34 = nullptr;
      v30 = !v12 || !v13;
    }
LABEL_12:
    if ( a5 == nullptr )
      goto LABEL_15;
    if ( a6 != -1 )
    {
      v16 = 0;
      goto LABEL_15;
    }
    v19 = (unsigned __int8 *)a5[2];
    if ( (unsigned int)v19 < a5[3] )
    {
      v28 = *v19;
    }
    else
    {
      v28 = (*(int (**)(void))(*a5 + 36))();
      if ( v28 == -1 )
      {
        a5 = nullptr;
LABEL_15:
        if ( v30 == v16 )
          goto LABEL_43;
        goto LABEL_16;
      }
    }
    a6 = v28;
    if ( v30 == 0 )
    {
LABEL_43:
      v24 = 1;
      goto LABEL_48;
    }
LABEL_16:
    if ( v34 == nullptr )
    {
      v27 = 255;
      goto LABEL_20;
    }
    if ( v35 != -1 )
    {
      v27 = (unsigned __int8)v35;
      goto LABEL_20;
    }
    v20 = (unsigned __int8 *)v34[2];
    if ( (unsigned int)v20 < v34[3] )
    {
      v21 = *v20;
LABEL_46:
      v35 = v21;
      v27 = (unsigned __int8)v21;
      goto LABEL_20;
    }
    v21 = (*(int (__fastcall **)(_DWORD *))(*v34 + 36))(v34);
    if ( v21 != -1 )
      goto LABEL_46;
    v34 = nullptr;
    v27 = 255;
LABEL_20:
    if ( !v13 )
      v31 = *(unsigned __int8 *)(v11[7] + v14) == v27;
    if ( !v31 )
    {
      if ( v12 )
      {
        v24 = 0;
        goto LABEL_50;
      }
    }
    else if ( v12 )
    {
      goto LABEL_25;
    }
    v15 = *(unsigned __int8 *)(v11[5] + v14) == v27;
LABEL_25:
    if ( !v15 << 24 != 0 )
    {
      if ( v13 )
        break;
      if ( !v31 )
      {
        v15 = false;
        v24 = 0;
        goto LABEL_50;
      }
    }
    ++v14;
    if ( v34 != nullptr )
    {
      v17 = v34[2];
      if ( v17 < v34[3] )
        v34[2] = v17 + 1;
      else
        (*(void (__fastcall **)(_DWORD *))(*v34 + 40))(v34);
      v35 = -1;
    }
    v13 = true;
    if ( v31 )
      v13 = v14 >= v11[8];
    v12 = true;
    if ( v15 )
      v12 = v14 >= v11[6];
  }
  v24 = 0;
  v15 = false;
LABEL_48:
  if ( v31 && v14 == v11[8] && v14 != 0 )
  {
    *a9 = 0;
    if ( v15 && v11[6] == v14 )
      *a8 = 4;
    else
      *a8 = 2 * v24;
    goto LABEL_47;
  }
LABEL_50:
  if ( v15 && v11[6] == v14 && v14 != 0 )
  {
    v26 = a8;
    *a9 = 1;
    *v26 = 2 * v24;
  }
  else
  {
    v25 = a8;
    *a9 = 0;
    *v25 = 4;
    if ( v24 != 0 )
      *v25 = 6;
  }
LABEL_47:
  v22 = v35;
  *a1 = v34;
  a1[1] = v22;
  return a1;
}


//======================================================================
// sub_39B7F0
// address: 0x0039B7F0   size: 0x562 (1378 bytes)
//======================================================================
_DWORD *__fastcall sub_39B7F0(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        __int16 *a9)
{
  int v9; // r4
  int v10; // r0
  int v11; // r6
  unsigned __int8 *v12; // r8
  int v13; // r3
  int v14; // r0
  int v15; // r11
  size_t v16; // r9
  unsigned int v17; // r6
  int v18; // r7
  unsigned int v19; // r4
  int v20; // r6
  _DWORD *v21; // r0
  unsigned int v22; // r3
  unsigned __int8 *v23; // r3
  int v24; // r0
  int v25; // r4
  int v26; // r4
  _DWORD *v27; // r0
  __int16 v28; // r3
  _DWORD *v29; // r1
  int v30; // r2
  unsigned __int8 *v32; // r3
  _BYTE *v33; // r0
  int v34; // r0
  int v35; // r6
  _DWORD *v36; // r0
  unsigned int v37; // r3
  unsigned __int8 *v38; // r3
  int v39; // r0
  int v40; // r4
  unsigned __int8 *v41; // r3
  int v42; // r2
  unsigned __int8 *v43; // r6
  int v44; // r8
  unsigned int v45; // r3
  unsigned __int8 v46; // r0
  unsigned int v47; // r4
  int v48; // r3
  int v49; // r3
  int v50; // r0
  int v51; // r0
  _BOOL4 v52; // [sp+8h] [bp-3Ch]
  unsigned int v53; // [sp+Ch] [bp-38h]
  int v54; // [sp+10h] [bp-34h]
  int v55; // [sp+14h] [bp-30h]
  int v56; // [sp+18h] [bp-2Ch]
  _BOOL4 v58; // [sp+24h] [bp-20h]
  _DWORD *v59; // [sp+28h] [bp-1Ch] BYREF
  int v60; // [sp+2Ch] [bp-18h]
  char v61[4]; // [sp+34h] [bp-10h] BYREF
  char v62[4]; // [sp+38h] [bp-Ch] BYREF
  _DWORD v63[2]; // [sp+3Ch] [bp-8h] BYREF

  v9 = a7;
  v60 = a4;
  v59 = a3;
  v10 = sub_397970((int)v61, (_DWORD *)(a7 + 108));
  v11 = *(_DWORD *)(v9 + 12) & 0x4A;
  v12 = (unsigned __int8 *)v10;
  if ( v11 == 64 )
  {
    v54 = 8;
  }
  else if ( v11 == 8 )
  {
    v54 = 16;
  }
  else
  {
    v54 = 10;
  }
  v52 = sub_398224((int)&v59, (int)&a5);
  if ( v52 )
  {
    v47 = 0;
    v58 = false;
    goto LABEL_13;
  }
  v47 = (unsigned __int8)sub_3981E8((int)&v59);
  v58 = v12[74] == v47;
  if ( v12[74] != v47 && v12[75] != v47 )
  {
    v13 = v12[16];
    goto LABEL_104;
  }
  v13 = v12[16];
  if ( v12[16] != 0 && v12[37] == v47 )
  {
    v13 = 1;
    goto LABEL_104;
  }
  if ( v12[36] == v47 )
  {
LABEL_104:
    v15 = 0;
    v56 = 0;
    v42 = v11;
    v43 = v12;
    v44 = v42;
    while ( 1 )
    {
      if ( v13 != 0 && v43[37] == v47 || v43[36] == v47 )
      {
LABEL_139:
        v12 = v43;
        goto LABEL_14;
      }
      if ( v43[78] == v47 )
      {
        if ( v54 == 10 || v56 == 0 )
        {
          if ( v44 != 0 )
          {
            if ( v54 == 8 )
              v15 = 0;
            else
              ++v15;
            v56 = 1;
          }
          else
          {
            v15 = 0;
            v56 = 1;
            v54 = 8;
          }
          goto LABEL_115;
        }
      }
      else if ( v56 == 0 )
      {
        goto LABEL_139;
      }
      if ( v43[76] != v47 && v43[77] != v47 )
      {
        v12 = v43;
        v56 = 1;
        goto LABEL_14;
      }
      if ( v44 != 0 )
      {
        if ( v54 != 16 )
        {
          v12 = v43;
          v56 = 1;
          goto LABEL_15;
        }
        v15 = 0;
        v56 = 0;
      }
      else
      {
        v15 = 0;
        v56 = 0;
        v54 = 16;
      }
LABEL_115:
      if ( v59 != nullptr )
      {
        v45 = v59[2];
        if ( v45 < v59[3] )
          v59[2] = v45 + 1;
        else
          (*(void (__fastcall **)(_DWORD *))(*v59 + 40))(v59);
        v60 = -1;
      }
      if ( sub_398224((int)&v59, (int)&a5) )
      {
        v52 = true;
        v12 = v43;
        v13 = v43[16];
        if ( v54 != 16 )
          goto LABEL_15;
        goto LABEL_122;
      }
      v47 = (unsigned __int8)sub_3981E8((int)&v59);
      if ( v56 == 0 )
      {
        v12 = v43;
        v13 = v43[16];
        goto LABEL_14;
      }
      v13 = v43[16];
    }
  }
  v14 = sub_3978A0((int)&v59);
  if ( !sub_398224(v14, (int)&a5) )
  {
    v46 = sub_3981E8((int)&v59);
    v13 = v12[16];
    v47 = v46;
    goto LABEL_104;
  }
LABEL_13:
  v13 = v12[16];
  v52 = true;
  v15 = 0;
  v56 = 0;
LABEL_14:
  if ( v54 == 16 )
LABEL_122:
    v16 = 22;
  else
LABEL_15:
    v16 = v54;
  v63[0] = &byte_55FB88;
  if ( v13 != 0 )
    sub_3BE700(v63, 32);
  v55 = v12[100];
  v53 = (unsigned __int16)(0xFFFF / v54);
  if ( v12[100] == 0 )
  {
    v17 = 0;
    v18 = 0;
    if ( !v52 )
    {
      while ( v16 > 0xA )
      {
        if ( (unsigned __int8)(v47 - 48) <= 9u )
        {
          v19 = v47 - 48;
          goto LABEL_24;
        }
        if ( (unsigned __int8)(v47 - 97) <= 5u )
        {
          v19 = v47 - 87;
          goto LABEL_24;
        }
        if ( (unsigned __int8)(v47 - 65) > 5u )
          goto LABEL_51;
        v19 = v47 - 55;
        if ( v53 >= v17 )
        {
LABEL_25:
          v20 = (unsigned __int16)(v17 * v54);
          v18 = (unsigned __int8)(v18 | (v20 > (int)(0xFFFF - v19)));
          v17 = (unsigned __int16)(v20 + v19);
          ++v15;
          goto LABEL_26;
        }
LABEL_62:
        v18 = 1;
LABEL_26:
        v21 = v59;
        if ( v59 == nullptr )
          goto LABEL_57;
        v22 = v59[2];
        if ( v22 < v59[3] )
        {
          v59[2] = v22 + 1;
          v60 = -1;
LABEL_30:
          v23 = (unsigned __int8 *)v21[2];
          if ( (unsigned int)v23 < v21[3] )
          {
            v24 = *v23;
LABEL_32:
            v25 = 0;
            v60 = v24;
            goto LABEL_33;
          }
          v24 = (*(int (__fastcall **)(_DWORD *))(*v21 + 36))(v21);
          if ( v24 != -1 )
            goto LABEL_32;
          v59 = nullptr;
LABEL_57:
          v25 = 1;
          goto LABEL_33;
        }
        (*(void (__fastcall **)(_DWORD *))(*v59 + 40))(v59);
        v21 = v59;
        v60 = -1;
        if ( v59 != nullptr )
          goto LABEL_30;
        v25 = 1;
LABEL_33:
        if ( a5 == nullptr )
        {
          v48 = 1;
          goto LABEL_36;
        }
        v48 = 0;
        if ( a6 != -1 )
          goto LABEL_36;
        v32 = (unsigned __int8 *)a5[2];
        if ( (unsigned int)v32 < a5[3] )
        {
          v50 = *v32;
        }
        else
        {
          v50 = (*(int (**)(void))(*a5 + 36))();
          if ( v50 == -1 )
          {
            a5 = nullptr;
            v48 = 1;
LABEL_36:
            if ( v25 == v48 )
              goto LABEL_37;
            goto LABEL_67;
          }
        }
        a6 = v50;
        if ( v25 == 0 )
        {
LABEL_37:
          v26 = 0;
          v52 = true;
          goto LABEL_38;
        }
LABEL_67:
        v47 = (unsigned __int8)sub_3981E8((int)&v59);
      }
      if ( v47 <= 0x2F || (unsigned __int8)(v16 + 48) <= v47 )
        goto LABEL_51;
      v19 = v47 - 48;
LABEL_24:
      if ( v53 >= v17 )
        goto LABEL_25;
      goto LABEL_62;
    }
    goto LABEL_51;
  }
  v17 = 0;
  v18 = 0;
  if ( v52 )
  {
LABEL_51:
    v26 = 0;
    v27 = (_DWORD *)(v63[0] - 12);
    if ( *(_DWORD *)(v63[0] - 12) == 0 )
      goto LABEL_39;
    goto LABEL_52;
  }
  while ( v12[16] == 0 || v12[37] != v47 )
  {
    if ( v12[36] == v47 )
      goto LABEL_51;
    v33 = j_memchr(v12 + 78, v47, v16);
    if ( v33 == nullptr )
      goto LABEL_51;
    v34 = v33 - (v12 + 78);
    if ( v34 > 15 )
      v34 -= 6;
    if ( v53 < v17 )
    {
      v18 = 1;
    }
    else
    {
      v35 = (unsigned __int16)(v17 * v54);
      v18 = (unsigned __int8)(v18 | (v35 > 0xFFFF - v34));
      v17 = (unsigned __int16)(v35 + v34);
      ++v15;
    }
LABEL_79:
    v36 = v59;
    if ( v59 == nullptr )
      goto LABEL_93;
    v37 = v59[2];
    if ( v37 < v59[3] )
    {
      v59[2] = v37 + 1;
      v60 = -1;
LABEL_83:
      v38 = (unsigned __int8 *)v36[2];
      if ( (unsigned int)v38 < v36[3] )
      {
        v39 = *v38;
LABEL_85:
        v40 = 0;
        v60 = v39;
        goto LABEL_86;
      }
      v39 = (*(int (__fastcall **)(_DWORD *))(*v36 + 36))(v36);
      if ( v39 != -1 )
        goto LABEL_85;
      v59 = nullptr;
LABEL_93:
      v40 = v55;
      goto LABEL_86;
    }
    (*(void (__fastcall **)(_DWORD *))(*v59 + 40))(v59);
    v36 = v59;
    v60 = -1;
    if ( v59 != nullptr )
      goto LABEL_83;
    v40 = v55;
LABEL_86:
    if ( a5 == nullptr )
    {
      v49 = v55;
      goto LABEL_89;
    }
    v49 = 0;
    if ( a6 == -1 )
    {
      v41 = (unsigned __int8 *)a5[2];
      if ( (unsigned int)v41 < a5[3] )
      {
        v51 = *v41;
LABEL_98:
        a6 = v51;
        v49 = 0;
        goto LABEL_89;
      }
      v51 = (*(int (**)(void))(*a5 + 36))();
      if ( v51 != -1 )
        goto LABEL_98;
      a5 = nullptr;
      v49 = v55;
    }
LABEL_89:
    if ( v49 == v40 )
    {
      v26 = 0;
      v52 = true;
      goto LABEL_38;
    }
    v47 = (unsigned __int8)sub_3981E8((int)&v59);
  }
  if ( v15 != 0 )
  {
    sub_3BEA50(v63, (unsigned __int8)v15);
    v15 = 0;
    goto LABEL_79;
  }
  v26 = 1;
LABEL_38:
  v27 = (_DWORD *)(v63[0] - 12);
  if ( *(_DWORD *)(v63[0] - 12) != 0 )
  {
LABEL_52:
    sub_3BEA50(v63, (unsigned __int8)v15);
    if ( sub_3BFF94(*((_DWORD *)v12 + 2), *((_DWORD *)v12 + 3), v63) == 0 )
      *a8 = 4;
    v27 = (_DWORD *)(v63[0] - 12);
  }
LABEL_39:
  if ( v15 == 0 && v56 == 0 && *v27 == 0 || v26 != 0 )
  {
    v28 = 0;
    goto LABEL_43;
  }
  if ( v18 != 0 )
  {
    v28 = -1;
LABEL_43:
    v29 = a8;
    *a9 = v28;
    *v29 = 4;
  }
  else
  {
    if ( v58 )
      LOWORD(v17) = -(__int16)v17;
    *a9 = v17;
  }
  if ( v52 )
    *a8 |= 2u;
  v30 = v60;
  *a1 = v59;
  a1[1] = v30;
  sub_3BDF68(v27, v62);
  return a1;
}


//======================================================================
// sub_39BD60
// address: 0x0039BD60   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_39BD60(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        __int16 *a9)
{
  sub_39B7F0(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}


//======================================================================
// sub_39BD88
// address: 0x0039BD88   size: 0x532 (1330 bytes)
//======================================================================
_DWORD *__fastcall sub_39BD88(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  int v9; // r4
  int v10; // r0
  int v11; // r6
  unsigned __int8 *v12; // r8
  int v13; // r3
  int v14; // r0
  int v15; // r11
  size_t v16; // r9
  unsigned int v17; // r6
  int v18; // r7
  unsigned int v19; // r4
  unsigned int v20; // r6
  _DWORD *v21; // r0
  unsigned int v22; // r3
  unsigned __int8 *v23; // r3
  int v24; // r0
  int v25; // r4
  int v26; // r4
  _DWORD *v27; // r0
  int v28; // r3
  _DWORD *v29; // r1
  int v30; // r2
  unsigned __int8 *v32; // r3
  _BYTE *v33; // r0
  int v34; // r0
  unsigned int v35; // r6
  _DWORD *v36; // r0
  unsigned int v37; // r3
  unsigned __int8 *v38; // r3
  int v39; // r0
  int v40; // r4
  unsigned __int8 *v41; // r3
  int v42; // r2
  unsigned __int8 *v43; // r6
  int v44; // r8
  unsigned int v45; // r3
  unsigned __int8 v46; // r0
  unsigned int v47; // r4
  int v48; // r3
  int v49; // r3
  int v50; // r0
  int v51; // r0
  _BOOL4 v52; // [sp+8h] [bp-3Ch]
  unsigned int v53; // [sp+Ch] [bp-38h]
  unsigned int v54; // [sp+10h] [bp-34h]
  int v55; // [sp+14h] [bp-30h]
  int v56; // [sp+18h] [bp-2Ch]
  _BOOL4 v58; // [sp+24h] [bp-20h]
  _DWORD *v59; // [sp+28h] [bp-1Ch] BYREF
  int v60; // [sp+2Ch] [bp-18h]
  char v61[4]; // [sp+34h] [bp-10h] BYREF
  char v62[4]; // [sp+38h] [bp-Ch] BYREF
  _DWORD v63[2]; // [sp+3Ch] [bp-8h] BYREF

  v9 = a7;
  v60 = a4;
  v59 = a3;
  v10 = sub_397970((int)v61, (_DWORD *)(a7 + 108));
  v11 = *(_DWORD *)(v9 + 12) & 0x4A;
  v12 = (unsigned __int8 *)v10;
  if ( v11 == 64 )
  {
    v54 = 8;
  }
  else if ( v11 == 8 )
  {
    v54 = 16;
  }
  else
  {
    v54 = 10;
  }
  v52 = sub_398224((int)&v59, (int)&a5);
  if ( v52 )
  {
    v47 = 0;
    v58 = false;
    goto LABEL_13;
  }
  v47 = (unsigned __int8)sub_3981E8((int)&v59);
  v58 = v12[74] == v47;
  if ( v12[74] != v47 && v12[75] != v47 )
  {
    v13 = v12[16];
    goto LABEL_104;
  }
  v13 = v12[16];
  if ( v12[16] != 0 && v12[37] == v47 )
  {
    v13 = 1;
    goto LABEL_104;
  }
  if ( v12[36] == v47 )
  {
LABEL_104:
    v15 = 0;
    v56 = 0;
    v42 = v11;
    v43 = v12;
    v44 = v42;
    while ( 1 )
    {
      if ( v13 != 0 && v43[37] == v47 || v43[36] == v47 )
      {
LABEL_139:
        v12 = v43;
        goto LABEL_14;
      }
      if ( v43[78] == v47 )
      {
        if ( v54 == 10 || v56 == 0 )
        {
          if ( v44 != 0 )
          {
            if ( v54 == 8 )
              v15 = 0;
            else
              ++v15;
            v56 = 1;
          }
          else
          {
            v15 = 0;
            v56 = 1;
            v54 = 8;
          }
          goto LABEL_115;
        }
      }
      else if ( v56 == 0 )
      {
        goto LABEL_139;
      }
      if ( v43[76] != v47 && v43[77] != v47 )
      {
        v12 = v43;
        v56 = 1;
        goto LABEL_14;
      }
      if ( v44 != 0 )
      {
        if ( v54 != 16 )
        {
          v12 = v43;
          v56 = 1;
          goto LABEL_15;
        }
        v15 = 0;
        v56 = 0;
      }
      else
      {
        v15 = 0;
        v56 = 0;
        v54 = 16;
      }
LABEL_115:
      if ( v59 != nullptr )
      {
        v45 = v59[2];
        if ( v45 < v59[3] )
          v59[2] = v45 + 1;
        else
          (*(void (__fastcall **)(_DWORD *))(*v59 + 40))(v59);
        v60 = -1;
      }
      if ( sub_398224((int)&v59, (int)&a5) )
      {
        v52 = true;
        v12 = v43;
        v13 = v43[16];
        if ( v54 != 16 )
          goto LABEL_15;
        goto LABEL_122;
      }
      v47 = (unsigned __int8)sub_3981E8((int)&v59);
      if ( v56 == 0 )
      {
        v12 = v43;
        v13 = v43[16];
        goto LABEL_14;
      }
      v13 = v43[16];
    }
  }
  v14 = sub_3978A0((int)&v59);
  if ( !sub_398224(v14, (int)&a5) )
  {
    v46 = sub_3981E8((int)&v59);
    v13 = v12[16];
    v47 = v46;
    goto LABEL_104;
  }
LABEL_13:
  v13 = v12[16];
  v52 = true;
  v15 = 0;
  v56 = 0;
LABEL_14:
  if ( v54 == 16 )
LABEL_122:
    v16 = 22;
  else
LABEL_15:
    v16 = v54;
  v63[0] = &byte_55FB88;
  if ( v13 != 0 )
    sub_3BE700(v63, 32);
  v55 = v12[100];
  v53 = 0xFFFFFFFF / v54;
  if ( v12[100] == 0 )
  {
    v17 = 0;
    v18 = 0;
    if ( !v52 )
    {
      while ( v16 > 0xA )
      {
        if ( (unsigned __int8)(v47 - 48) <= 9u )
        {
          v19 = v47 - 48;
          goto LABEL_24;
        }
        if ( (unsigned __int8)(v47 - 97) <= 5u )
        {
          v19 = v47 - 87;
          goto LABEL_24;
        }
        if ( (unsigned __int8)(v47 - 65) > 5u )
          goto LABEL_51;
        v19 = v47 - 55;
        if ( v53 >= v17 )
        {
LABEL_25:
          v20 = v17 * v54;
          v18 |= ~v19 < v20;
          v17 = v19 + v20;
          ++v15;
          goto LABEL_26;
        }
LABEL_62:
        v18 = 1;
LABEL_26:
        v21 = v59;
        if ( v59 == nullptr )
          goto LABEL_57;
        v22 = v59[2];
        if ( v22 < v59[3] )
        {
          v59[2] = v22 + 1;
          v60 = -1;
LABEL_30:
          v23 = (unsigned __int8 *)v21[2];
          if ( (unsigned int)v23 < v21[3] )
          {
            v24 = *v23;
LABEL_32:
            v25 = 0;
            v60 = v24;
            goto LABEL_33;
          }
          v24 = (*(int (__fastcall **)(_DWORD *))(*v21 + 36))(v21);
          if ( v24 != -1 )
            goto LABEL_32;
          v59 = nullptr;
LABEL_57:
          v25 = 1;
          goto LABEL_33;
        }
        (*(void (**)(void))(*v59 + 40))();
        v21 = v59;
        v60 = -1;
        if ( v59 != nullptr )
          goto LABEL_30;
        v25 = 1;
LABEL_33:
        if ( a5 == nullptr )
        {
          v48 = 1;
          goto LABEL_36;
        }
        v48 = 0;
        if ( a6 != -1 )
          goto LABEL_36;
        v32 = (unsigned __int8 *)a5[2];
        if ( (unsigned int)v32 < a5[3] )
        {
          v50 = *v32;
        }
        else
        {
          v50 = (*(int (**)(void))(*a5 + 36))();
          if ( v50 == -1 )
          {
            a5 = nullptr;
            v48 = 1;
LABEL_36:
            if ( v25 == v48 )
              goto LABEL_37;
            goto LABEL_67;
          }
        }
        a6 = v50;
        if ( v25 == 0 )
        {
LABEL_37:
          v26 = 0;
          v52 = true;
          goto LABEL_38;
        }
LABEL_67:
        v47 = (unsigned __int8)sub_3981E8((int)&v59);
      }
      if ( v47 <= 0x2F || (unsigned __int8)(v16 + 48) <= v47 )
        goto LABEL_51;
      v19 = v47 - 48;
LABEL_24:
      if ( v53 >= v17 )
        goto LABEL_25;
      goto LABEL_62;
    }
    goto LABEL_51;
  }
  v17 = 0;
  v18 = 0;
  if ( v52 )
  {
LABEL_51:
    v26 = 0;
    v27 = (_DWORD *)(v63[0] - 12);
    if ( *(_DWORD *)(v63[0] - 12) == 0 )
      goto LABEL_39;
    goto LABEL_52;
  }
  while ( v12[16] == 0 || v12[37] != v47 )
  {
    if ( v12[36] == v47 )
      goto LABEL_51;
    v33 = j_memchr(v12 + 78, v47, v16);
    if ( v33 == nullptr )
      goto LABEL_51;
    v34 = v33 - (v12 + 78);
    if ( v34 > 15 )
      v34 -= 6;
    if ( v53 < v17 )
    {
      v18 = 1;
    }
    else
    {
      v35 = v17 * v54;
      v18 |= ~v34 < v35;
      v17 = v34 + v35;
      ++v15;
    }
LABEL_79:
    v36 = v59;
    if ( v59 == nullptr )
      goto LABEL_93;
    v37 = v59[2];
    if ( v37 < v59[3] )
    {
      v59[2] = v37 + 1;
      v60 = -1;
LABEL_83:
      v38 = (unsigned __int8 *)v36[2];
      if ( (unsigned int)v38 < v36[3] )
      {
        v39 = *v38;
LABEL_85:
        v40 = 0;
        v60 = v39;
        goto LABEL_86;
      }
      v39 = (*(int (__fastcall **)(_DWORD *))(*v36 + 36))(v36);
      if ( v39 != -1 )
        goto LABEL_85;
      v59 = nullptr;
LABEL_93:
      v40 = v55;
      goto LABEL_86;
    }
    (*(void (**)(void))(*v59 + 40))();
    v36 = v59;
    v60 = -1;
    if ( v59 != nullptr )
      goto LABEL_83;
    v40 = v55;
LABEL_86:
    if ( a5 == nullptr )
    {
      v49 = v55;
      goto LABEL_89;
    }
    v49 = 0;
    if ( a6 == -1 )
    {
      v41 = (unsigned __int8 *)a5[2];
      if ( (unsigned int)v41 < a5[3] )
      {
        v51 = *v41;
LABEL_98:
        a6 = v51;
        v49 = 0;
        goto LABEL_89;
      }
      v51 = (*(int (**)(void))(*a5 + 36))();
      if ( v51 != -1 )
        goto LABEL_98;
      a5 = nullptr;
      v49 = v55;
    }
LABEL_89:
    if ( v49 == v40 )
    {
      v26 = 0;
      v52 = true;
      goto LABEL_38;
    }
    v47 = (unsigned __int8)sub_3981E8((int)&v59);
  }
  if ( v15 != 0 )
  {
    sub_3BEA50(v63, (unsigned __int8)v15);
    v15 = 0;
    goto LABEL_79;
  }
  v26 = 1;
LABEL_38:
  v27 = (_DWORD *)(v63[0] - 12);
  if ( *(_DWORD *)(v63[0] - 12) != 0 )
  {
LABEL_52:
    sub_3BEA50(v63, (unsigned __int8)v15);
    if ( sub_3BFF94(*((_DWORD *)v12 + 2), *((_DWORD *)v12 + 3), v63) == 0 )
      *a8 = 4;
    v27 = (_DWORD *)(v63[0] - 12);
  }
LABEL_39:
  if ( v15 == 0 && v56 == 0 && *v27 == 0 || v26 != 0 )
  {
    v28 = 0;
    goto LABEL_43;
  }
  if ( v18 != 0 )
  {
    v28 = -1;
LABEL_43:
    v29 = a8;
    *a9 = v28;
    *v29 = 4;
  }
  else
  {
    if ( v58 )
      v17 = -v17;
    *a9 = v17;
  }
  if ( v52 )
    *a8 |= 2u;
  v30 = v60;
  *a1 = v59;
  a1[1] = v30;
  sub_3BDF68(v27, v62);
  return a1;
}


//======================================================================
// sub_39C2C8
// address: 0x0039C2C8   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_39C2C8(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  sub_39BD88(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}


//======================================================================
// sub_39C2F0
// address: 0x0039C2F0   size: 0x532 (1330 bytes)
//======================================================================
_DWORD *__fastcall sub_39C2F0(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  int v9; // r4
  int v10; // r0
  int v11; // r6
  unsigned __int8 *v12; // r8
  int v13; // r3
  int v14; // r0
  int v15; // r11
  size_t v16; // r9
  unsigned int v17; // r6
  int v18; // r7
  unsigned int v19; // r4
  unsigned int v20; // r6
  _DWORD *v21; // r0
  unsigned int v22; // r3
  unsigned __int8 *v23; // r3
  int v24; // r0
  int v25; // r4
  int v26; // r4
  _DWORD *v27; // r0
  int v28; // r3
  _DWORD *v29; // r1
  int v30; // r2
  unsigned __int8 *v32; // r3
  _BYTE *v33; // r0
  int v34; // r0
  unsigned int v35; // r6
  _DWORD *v36; // r0
  unsigned int v37; // r3
  unsigned __int8 *v38; // r3
  int v39; // r0
  int v40; // r4
  unsigned __int8 *v41; // r3
  int v42; // r2
  unsigned __int8 *v43; // r6
  int v44; // r8
  unsigned int v45; // r3
  unsigned __int8 v46; // r0
  unsigned int v47; // r4
  int v48; // r3
  int v49; // r3
  int v50; // r0
  int v51; // r0
  _BOOL4 v52; // [sp+8h] [bp-3Ch]
  unsigned int v53; // [sp+Ch] [bp-38h]
  unsigned int v54; // [sp+10h] [bp-34h]
  int v55; // [sp+14h] [bp-30h]
  int v56; // [sp+18h] [bp-2Ch]
  _BOOL4 v58; // [sp+24h] [bp-20h]
  _DWORD *v59; // [sp+28h] [bp-1Ch] BYREF
  int v60; // [sp+2Ch] [bp-18h]
  char v61[4]; // [sp+34h] [bp-10h] BYREF
  char v62[4]; // [sp+38h] [bp-Ch] BYREF
  _DWORD v63[2]; // [sp+3Ch] [bp-8h] BYREF

  v9 = a7;
  v60 = a4;
  v59 = a3;
  v10 = sub_397970((int)v61, (_DWORD *)(a7 + 108));
  v11 = *(_DWORD *)(v9 + 12) & 0x4A;
  v12 = (unsigned __int8 *)v10;
  if ( v11 == 64 )
  {
    v54 = 8;
  }
  else if ( v11 == 8 )
  {
    v54 = 16;
  }
  else
  {
    v54 = 10;
  }
  v52 = sub_398224((int)&v59, (int)&a5);
  if ( v52 )
  {
    v47 = 0;
    v58 = false;
    goto LABEL_13;
  }
  v47 = (unsigned __int8)sub_3981E8((int)&v59);
  v58 = v12[74] == v47;
  if ( v12[74] != v47 && v12[75] != v47 )
  {
    v13 = v12[16];
    goto LABEL_104;
  }
  v13 = v12[16];
  if ( v12[16] != 0 && v12[37] == v47 )
  {
    v13 = 1;
    goto LABEL_104;
  }
  if ( v12[36] == v47 )
  {
LABEL_104:
    v15 = 0;
    v56 = 0;
    v42 = v11;
    v43 = v12;
    v44 = v42;
    while ( 1 )
    {
      if ( v13 != 0 && v43[37] == v47 || v43[36] == v47 )
      {
LABEL_139:
        v12 = v43;
        goto LABEL_14;
      }
      if ( v43[78] == v47 )
      {
        if ( v54 == 10 || v56 == 0 )
        {
          if ( v44 != 0 )
          {
            if ( v54 == 8 )
              v15 = 0;
            else
              ++v15;
            v56 = 1;
          }
          else
          {
            v15 = 0;
            v56 = 1;
            v54 = 8;
          }
          goto LABEL_115;
        }
      }
      else if ( v56 == 0 )
      {
        goto LABEL_139;
      }
      if ( v43[76] != v47 && v43[77] != v47 )
      {
        v12 = v43;
        v56 = 1;
        goto LABEL_14;
      }
      if ( v44 != 0 )
      {
        if ( v54 != 16 )
        {
          v12 = v43;
          v56 = 1;
          goto LABEL_15;
        }
        v15 = 0;
        v56 = 0;
      }
      else
      {
        v15 = 0;
        v56 = 0;
        v54 = 16;
      }
LABEL_115:
      if ( v59 != nullptr )
      {
        v45 = v59[2];
        if ( v45 < v59[3] )
          v59[2] = v45 + 1;
        else
          (*(void (__fastcall **)(_DWORD *))(*v59 + 40))(v59);
        v60 = -1;
      }
      if ( sub_398224((int)&v59, (int)&a5) )
      {
        v52 = true;
        v12 = v43;
        v13 = v43[16];
        if ( v54 != 16 )
          goto LABEL_15;
        goto LABEL_122;
      }
      v47 = (unsigned __int8)sub_3981E8((int)&v59);
      if ( v56 == 0 )
      {
        v12 = v43;
        v13 = v43[16];
        goto LABEL_14;
      }
      v13 = v43[16];
    }
  }
  v14 = sub_3978A0((int)&v59);
  if ( !sub_398224(v14, (int)&a5) )
  {
    v46 = sub_3981E8((int)&v59);
    v13 = v12[16];
    v47 = v46;
    goto LABEL_104;
  }
LABEL_13:
  v13 = v12[16];
  v52 = true;
  v15 = 0;
  v56 = 0;
LABEL_14:
  if ( v54 == 16 )
LABEL_122:
    v16 = 22;
  else
LABEL_15:
    v16 = v54;
  v63[0] = &byte_55FB88;
  if ( v13 != 0 )
    sub_3BE700(v63, 32);
  v55 = v12[100];
  v53 = 0xFFFFFFFF / v54;
  if ( v12[100] == 0 )
  {
    v17 = 0;
    v18 = 0;
    if ( !v52 )
    {
      while ( v16 > 0xA )
      {
        if ( (unsigned __int8)(v47 - 48) <= 9u )
        {
          v19 = v47 - 48;
          goto LABEL_24;
        }
        if ( (unsigned __int8)(v47 - 97) <= 5u )
        {
          v19 = v47 - 87;
          goto LABEL_24;
        }
        if ( (unsigned __int8)(v47 - 65) > 5u )
          goto LABEL_51;
        v19 = v47 - 55;
        if ( v53 >= v17 )
        {
LABEL_25:
          v20 = v17 * v54;
          v18 |= ~v19 < v20;
          v17 = v19 + v20;
          ++v15;
          goto LABEL_26;
        }
LABEL_62:
        v18 = 1;
LABEL_26:
        v21 = v59;
        if ( v59 == nullptr )
          goto LABEL_57;
        v22 = v59[2];
        if ( v22 < v59[3] )
        {
          v59[2] = v22 + 1;
          v60 = -1;
LABEL_30:
          v23 = (unsigned __int8 *)v21[2];
          if ( (unsigned int)v23 < v21[3] )
          {
            v24 = *v23;
LABEL_32:
            v25 = 0;
            v60 = v24;
            goto LABEL_33;
          }
          v24 = (*(int (__fastcall **)(_DWORD *))(*v21 + 36))(v21);
          if ( v24 != -1 )
            goto LABEL_32;
          v59 = nullptr;
LABEL_57:
          v25 = 1;
          goto LABEL_33;
        }
        (*(void (**)(void))(*v59 + 40))();
        v21 = v59;
        v60 = -1;
        if ( v59 != nullptr )
          goto LABEL_30;
        v25 = 1;
LABEL_33:
        if ( a5 == nullptr )
        {
          v48 = 1;
          goto LABEL_36;
        }
        v48 = 0;
        if ( a6 != -1 )
          goto LABEL_36;
        v32 = (unsigned __int8 *)a5[2];
        if ( (unsigned int)v32 < a5[3] )
        {
          v50 = *v32;
        }
        else
        {
          v50 = (*(int (**)(void))(*a5 + 36))();
          if ( v50 == -1 )
          {
            a5 = nullptr;
            v48 = 1;
LABEL_36:
            if ( v25 == v48 )
              goto LABEL_37;
            goto LABEL_67;
          }
        }
        a6 = v50;
        if ( v25 == 0 )
        {
LABEL_37:
          v26 = 0;
          v52 = true;
          goto LABEL_38;
        }
LABEL_67:
        v47 = (unsigned __int8)sub_3981E8((int)&v59);
      }
      if ( v47 <= 0x2F || (unsigned __int8)(v16 + 48) <= v47 )
        goto LABEL_51;
      v19 = v47 - 48;
LABEL_24:
      if ( v53 >= v17 )
        goto LABEL_25;
      goto LABEL_62;
    }
    goto LABEL_51;
  }
  v17 = 0;
  v18 = 0;
  if ( v52 )
  {
LABEL_51:
    v26 = 0;
    v27 = (_DWORD *)(v63[0] - 12);
    if ( *(_DWORD *)(v63[0] - 12) == 0 )
      goto LABEL_39;
    goto LABEL_52;
  }
  while ( v12[16] == 0 || v12[37] != v47 )
  {
    if ( v12[36] == v47 )
      goto LABEL_51;
    v33 = j_memchr(v12 + 78, v47, v16);
    if ( v33 == nullptr )
      goto LABEL_51;
    v34 = v33 - (v12 + 78);
    if ( v34 > 15 )
      v34 -= 6;
    if ( v53 < v17 )
    {
      v18 = 1;
    }
    else
    {
      v35 = v17 * v54;
      v18 |= ~v34 < v35;
      v17 = v34 + v35;
      ++v15;
    }
LABEL_79:
    v36 = v59;
    if ( v59 == nullptr )
      goto LABEL_93;
    v37 = v59[2];
    if ( v37 < v59[3] )
    {
      v59[2] = v37 + 1;
      v60 = -1;
LABEL_83:
      v38 = (unsigned __int8 *)v36[2];
      if ( (unsigned int)v38 < v36[3] )
      {
        v39 = *v38;
LABEL_85:
        v40 = 0;
        v60 = v39;
        goto LABEL_86;
      }
      v39 = (*(int (__fastcall **)(_DWORD *))(*v36 + 36))(v36);
      if ( v39 != -1 )
        goto LABEL_85;
      v59 = nullptr;
LABEL_93:
      v40 = v55;
      goto LABEL_86;
    }
    (*(void (**)(void))(*v59 + 40))();
    v36 = v59;
    v60 = -1;
    if ( v59 != nullptr )
      goto LABEL_83;
    v40 = v55;
LABEL_86:
    if ( a5 == nullptr )
    {
      v49 = v55;
      goto LABEL_89;
    }
    v49 = 0;
    if ( a6 == -1 )
    {
      v41 = (unsigned __int8 *)a5[2];
      if ( (unsigned int)v41 < a5[3] )
      {
        v51 = *v41;
LABEL_98:
        a6 = v51;
        v49 = 0;
        goto LABEL_89;
      }
      v51 = (*(int (**)(void))(*a5 + 36))();
      if ( v51 != -1 )
        goto LABEL_98;
      a5 = nullptr;
      v49 = v55;
    }
LABEL_89:
    if ( v49 == v40 )
    {
      v26 = 0;
      v52 = true;
      goto LABEL_38;
    }
    v47 = (unsigned __int8)sub_3981E8((int)&v59);
  }
  if ( v15 != 0 )
  {
    sub_3BEA50(v63, (unsigned __int8)v15);
    v15 = 0;
    goto LABEL_79;
  }
  v26 = 1;
LABEL_38:
  v27 = (_DWORD *)(v63[0] - 12);
  if ( *(_DWORD *)(v63[0] - 12) != 0 )
  {
LABEL_52:
    sub_3BEA50(v63, (unsigned __int8)v15);
    if ( sub_3BFF94(*((_DWORD *)v12 + 2), *((_DWORD *)v12 + 3), v63) == 0 )
      *a8 = 4;
    v27 = (_DWORD *)(v63[0] - 12);
  }
LABEL_39:
  if ( v15 == 0 && v56 == 0 && *v27 == 0 || v26 != 0 )
  {
    v28 = 0;
    goto LABEL_43;
  }
  if ( v18 != 0 )
  {
    v28 = -1;
LABEL_43:
    v29 = a8;
    *a9 = v28;
    *v29 = 4;
  }
  else
  {
    if ( v58 )
      v17 = -v17;
    *a9 = v17;
  }
  if ( v52 )
    *a8 |= 2u;
  v30 = v60;
  *a1 = v59;
  a1[1] = v30;
  sub_3BDF68(v27, v62);
  return a1;
}


//======================================================================
// sub_39C830
// address: 0x0039C830   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_39C830(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  sub_39C2F0(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}


//======================================================================
// sub_39C858
// address: 0x0039C858   size: 0x68 (104 bytes)
//======================================================================
_DWORD *__fastcall sub_39C858(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  int v10; // r0
  int v11; // r8
  int v12; // r7
  int v13; // r1
  _DWORD v15[2]; // [sp+18h] [bp+0h] BYREF
  _DWORD *v16; // [sp+20h] [bp+8h]
  int v17; // [sp+24h] [bp+Ch]
  int v18; // [sp+2Ch] [bp+14h] BYREF

  v10 = *(_DWORD *)(a7 + 12);
  v16 = a3;
  v17 = a4;
  *(_DWORD *)(a7 + 12) = v10 & 0xFFFFFFB5 | 8;
  v11 = v10;
  sub_39C2F0(v15, a2, a3, a4, a5, a6, a7, a8, &v18);
  v16 = (_DWORD *)v15[0];
  v17 = v15[1];
  v12 = v18;
  *(_DWORD *)(a7 + 12) = v11;
  *a9 = v12;
  v13 = v17;
  *a1 = v16;
  a1[1] = v13;
  return a1;
}


//======================================================================
// sub_39C8C0
// address: 0x0039C8C0   size: 0x69E (1694 bytes)
//======================================================================
_DWORD *__fastcall sub_39C8C0(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  int v9; // r4
  int v10; // r0
  int v11; // r4
  int v12; // r11
  int v13; // r3
  int v14; // r0
  unsigned __int64 v15; // kr00_8
  unsigned __int64 v16; // r4
  int v17; // r7
  _BYTE *v18; // r0
  int v19; // r8
  unsigned __int64 v20; // r2
  _DWORD *v21; // r0
  unsigned int v22; // r3
  unsigned __int8 *v23; // r3
  int v24; // r8
  _DWORD *v25; // r0
  _DWORD *v26; // r4
  _DWORD *v27; // r5
  int v28; // r5
  _DWORD *v30; // r1
  unsigned __int8 *v31; // r3
  signed int v32; // r9
  unsigned __int64 v33; // r2
  _DWORD *v34; // r0
  unsigned int v35; // r3
  unsigned __int8 *v36; // r3
  int v37; // r9
  unsigned __int8 *v38; // r3
  int v39; // r10
  unsigned int v40; // r4
  unsigned int v41; // r3
  unsigned __int8 v42; // r0
  _DWORD *v43; // r5
  int v44; // r8
  unsigned int v45; // r9
  int v46; // r3
  int v47; // r3
  int v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  void *v52; // [sp+10h] [bp-5Ch]
  size_t v53; // [sp+14h] [bp-58h]
  int v54; // [sp+18h] [bp-54h]
  _BOOL4 v55; // [sp+1Ch] [bp-50h]
  int v56; // [sp+28h] [bp-44h]
  unsigned __int64 v57; // [sp+30h] [bp-3Ch]
  int v58; // [sp+38h] [bp-34h]
  int v59; // [sp+3Ch] [bp-30h]
  _BOOL4 v61; // [sp+48h] [bp-24h]
  _DWORD *v62; // [sp+50h] [bp-1Ch] BYREF
  int v63; // [sp+54h] [bp-18h]
  _BYTE v64[4]; // [sp+5Ch] [bp-10h] BYREF
  _BYTE v65[4]; // [sp+60h] [bp-Ch] BYREF
  _DWORD v66[2]; // [sp+64h] [bp-8h] BYREF

  v9 = a7;
  v63 = a4;
  v62 = a3;
  v10 = sub_397970((int)v64, (_DWORD *)(a7 + 108));
  v11 = *(_DWORD *)(v9 + 12) & 0x4A;
  v12 = v10;
  if ( v11 == 64 )
  {
    v56 = 8;
  }
  else if ( v11 == 8 )
  {
    v56 = 16;
  }
  else
  {
    v56 = 10;
  }
  v55 = sub_398224((int)&v62, (int)&a5);
  if ( !v55 )
  {
    v45 = (unsigned __int8)sub_3981E8((int)&v62);
    v61 = *(unsigned __int8 *)(v12 + 74) == v45;
    if ( *(unsigned __int8 *)(v12 + 74) == v45 || *(unsigned __int8 *)(v12 + 75) == v45 )
    {
      v13 = *(unsigned __int8 *)(v12 + 16);
      if ( *(_BYTE *)(v12 + 16) != 0 && *(unsigned __int8 *)(v12 + 37) == v45 )
      {
        v13 = 1;
      }
      else if ( *(unsigned __int8 *)(v12 + 36) != v45 )
      {
        v14 = sub_3978A0((int)&v62);
        if ( sub_398224(v14, (int)&a5) )
          goto LABEL_13;
        v42 = sub_3981E8((int)&v62);
        v13 = *(unsigned __int8 *)(v12 + 16);
        v45 = v42;
      }
    }
    else
    {
      v13 = *(unsigned __int8 *)(v12 + 16);
    }
    v54 = 0;
    v59 = 0;
    v39 = v11;
    v40 = v45;
    while ( 1 )
    {
      if ( v13 != 0 && *(unsigned __int8 *)(v12 + 37) == v40 || *(unsigned __int8 *)(v12 + 36) == v40 )
      {
LABEL_151:
        v45 = v40;
        goto LABEL_14;
      }
      if ( *(unsigned __int8 *)(v12 + 78) == v40 )
      {
        if ( v56 == 10 || v59 == 0 )
        {
          if ( v39 != 0 )
          {
            if ( v56 == 8 )
              v54 = 0;
            else
              ++v54;
            v59 = 1;
          }
          else
          {
            v54 = 0;
            v59 = 1;
            v56 = 8;
          }
          goto LABEL_125;
        }
      }
      else if ( v59 == 0 )
      {
        goto LABEL_151;
      }
      if ( *(unsigned __int8 *)(v12 + 76) != v40 && *(unsigned __int8 *)(v12 + 77) != v40 )
      {
        v45 = v40;
        v59 = 1;
        goto LABEL_14;
      }
      if ( v39 != 0 )
      {
        if ( v56 != 16 )
        {
          v45 = v40;
          v59 = 1;
          goto LABEL_15;
        }
        v54 = 0;
        v59 = 0;
      }
      else
      {
        v54 = 0;
        v59 = 0;
        v56 = 16;
      }
LABEL_125:
      if ( v62 != nullptr )
      {
        v41 = v62[2];
        if ( v41 < v62[3] )
          v62[2] = v41 + 1;
        else
          (*(void (__fastcall **)(_DWORD *))(*v62 + 40))(v62);
        v63 = -1;
      }
      if ( sub_398224((int)&v62, (int)&a5) )
      {
        v45 = v40;
        v13 = *(unsigned __int8 *)(v12 + 16);
        v55 = true;
        if ( v56 != 16 )
          goto LABEL_15;
        goto LABEL_132;
      }
      v40 = (unsigned __int8)sub_3981E8((int)&v62);
      if ( v59 == 0 )
      {
        v13 = *(unsigned __int8 *)(v12 + 16);
        v45 = v40;
        goto LABEL_14;
      }
      v13 = *(unsigned __int8 *)(v12 + 16);
    }
  }
  v45 = 0;
  v61 = false;
LABEL_13:
  v13 = *(unsigned __int8 *)(v12 + 16);
  v55 = true;
  v54 = 0;
  v59 = 0;
LABEL_14:
  if ( v56 == 16 )
LABEL_132:
    v53 = 22;
  else
LABEL_15:
    v53 = v56;
  v66[0] = &byte_55FB88;
  if ( v13 != 0 )
    sub_3BE700(v66, 32);
  if ( v61 )
    v57 = 0x8000000000000000LL;
  else
    v57 = 0x7FFFFFFFFFFFFFFFLL;
  v52 = (void *)(v12 + 78);
  v58 = *(unsigned __int8 *)(v12 + 100);
  v15 = v57 / v56;
  if ( *(_BYTE *)(v12 + 100) == 0 )
  {
    if ( v55 )
      goto LABEL_152;
    v16 = 0;
    v17 = 0;
    while ( v53 > 0xA )
    {
      if ( (unsigned __int8)(v45 - 48) <= 9u )
      {
        v32 = v45 - 48;
        goto LABEL_78;
      }
      if ( (unsigned __int8)(v45 - 97) <= 5u )
      {
        v32 = v45 - 87;
        goto LABEL_78;
      }
      if ( (unsigned __int8)(v45 - 65) > 5u )
      {
LABEL_149:
        v44 = 0;
        goto LABEL_45;
      }
      v32 = v45 - 55;
      if ( HIDWORD(v16) <= HIDWORD(v15) )
      {
LABEL_79:
        if ( HIDWORD(v16) != HIDWORD(v15) || (unsigned int)v16 <= (unsigned int)v15 )
        {
          v33 = v16 * v56;
          v17 = (unsigned __int8)(v17 | (v33 > v57 - v32));
          v16 = v32 + v33;
          ++v54;
          goto LABEL_82;
        }
      }
LABEL_103:
      v17 = 1;
LABEL_82:
      v34 = v62;
      if ( v62 == nullptr )
        goto LABEL_98;
      v35 = v62[2];
      if ( v35 >= v62[3] )
      {
        (*(void (__fastcall **)(_DWORD *))(*v62 + 40))(v62);
        v34 = v62;
        v63 = -1;
        if ( v62 == nullptr )
        {
LABEL_98:
          v37 = 1;
          goto LABEL_89;
        }
      }
      else
      {
        v62[2] = v35 + 1;
        v63 = -1;
      }
      v36 = (unsigned __int8 *)v34[2];
      if ( (unsigned int)v36 < v34[3] )
      {
        v49 = *v36;
LABEL_88:
        v63 = v49;
        v37 = 0;
        goto LABEL_89;
      }
      v49 = (*(int (__fastcall **)(_DWORD *))(*v34 + 36))(v34);
      if ( v49 != -1 )
        goto LABEL_88;
      v62 = nullptr;
      v37 = 1;
LABEL_89:
      if ( a5 == nullptr )
      {
        v46 = 1;
        goto LABEL_92;
      }
      v46 = 0;
      if ( a6 != -1 )
        goto LABEL_92;
      v38 = (unsigned __int8 *)a5[2];
      if ( (unsigned int)v38 < a5[3] )
      {
        v50 = *v38;
      }
      else
      {
        v50 = (*(int (**)(void))(*a5 + 36))();
        if ( v50 == -1 )
        {
          a5 = nullptr;
          v46 = 1;
LABEL_92:
          if ( v46 == v37 )
            goto LABEL_93;
          goto LABEL_108;
        }
      }
      a6 = v50;
      if ( v37 == 0 )
      {
LABEL_93:
        v25 = (_DWORD *)(v66[0] - 12);
        v44 = 0;
        v55 = true;
        if ( *(_DWORD *)(v66[0] - 12) == 0 )
          goto LABEL_46;
        goto LABEL_94;
      }
LABEL_108:
      v45 = (unsigned __int8)sub_3981E8((int)&v62);
    }
    if ( v45 <= 0x2F )
    {
      v44 = 0;
      goto LABEL_45;
    }
    if ( v45 >= (unsigned __int8)(v53 + 48) )
    {
      v44 = 0;
      goto LABEL_45;
    }
    v32 = v45 - 48;
LABEL_78:
    if ( HIDWORD(v16) > HIDWORD(v15) )
      goto LABEL_103;
    goto LABEL_79;
  }
  if ( !v55 )
  {
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      if ( *(_BYTE *)(v12 + 16) != 0 && *(unsigned __int8 *)(v12 + 37) == v45 )
      {
        if ( v54 == 0 )
        {
          v44 = 1;
          goto LABEL_45;
        }
        sub_3BEA50(v66, (unsigned __int8)v54);
        v54 = 0;
      }
      else
      {
        if ( *(unsigned __int8 *)(v12 + 36) == v45 )
          goto LABEL_149;
        v18 = j_memchr(v52, v45, v53);
        if ( v18 == nullptr )
        {
          v44 = 0;
          goto LABEL_45;
        }
        v19 = v18 - (_BYTE *)v52;
        if ( v18 - (_BYTE *)v52 > 15 )
          v19 -= 6;
        if ( v16 > v15 )
        {
          v17 = 1;
        }
        else
        {
          v20 = v16 * v56;
          v17 = (unsigned __int8)(v17 | (v20 > v57 - v19));
          v16 = v19 + v20;
          ++v54;
        }
      }
      v21 = v62;
      if ( v62 == nullptr )
        break;
      v22 = v62[2];
      if ( v22 >= v62[3] )
      {
        (*(void (__fastcall **)(_DWORD *))(*v62 + 40))(v62);
        v21 = v62;
        v63 = -1;
        if ( v62 == nullptr )
          break;
      }
      else
      {
        v62[2] = v22 + 1;
        v63 = -1;
      }
      v23 = (unsigned __int8 *)v21[2];
      if ( (unsigned int)v23 < v21[3] )
      {
        v48 = *v23;
LABEL_39:
        v63 = v48;
        v24 = 0;
        goto LABEL_40;
      }
      v48 = (*(int (__fastcall **)(_DWORD *))(*v21 + 36))(v21);
      if ( v48 != -1 )
        goto LABEL_39;
      v62 = nullptr;
      v24 = v58;
LABEL_40:
      if ( a5 == nullptr )
      {
        v47 = v58;
        goto LABEL_43;
      }
      v47 = 0;
      if ( a6 != -1 )
        goto LABEL_43;
      v31 = (unsigned __int8 *)a5[2];
      if ( (unsigned int)v31 < a5[3] )
      {
        v51 = *v31;
      }
      else
      {
        v51 = (*(int (**)(void))(*a5 + 36))();
        if ( v51 == -1 )
        {
          a5 = nullptr;
          v47 = v58;
LABEL_43:
          if ( v47 == v24 )
            goto LABEL_44;
          goto LABEL_66;
        }
      }
      a6 = v51;
      if ( v24 == 0 )
      {
LABEL_44:
        v44 = 0;
        v55 = true;
        goto LABEL_45;
      }
LABEL_66:
      v45 = (unsigned __int8)sub_3981E8((int)&v62);
    }
    v24 = v58;
    goto LABEL_40;
  }
LABEL_152:
  v17 = 0;
  v16 = 0;
  v44 = 0;
LABEL_45:
  v25 = (_DWORD *)(v66[0] - 12);
  if ( *(_DWORD *)(v66[0] - 12) != 0 )
  {
LABEL_94:
    sub_3BEA50(v66, (unsigned __int8)v54);
    if ( sub_3BFF94(*(_DWORD *)(v12 + 8), *(_DWORD *)(v12 + 12), v66) == 0 )
      *a8 = 4;
    v25 = (_DWORD *)(v66[0] - 12);
  }
LABEL_46:
  if ( (v54 != 0 || v59 != 0 || *v25 != 0) && v44 == 0 )
  {
    if ( v17 != 0 )
    {
      if ( v61 )
      {
        v43 = a9;
        *a9 = 0;
        v43[1] = 0x80000000;
      }
      else
      {
        v30 = a9;
        *a9 = -1;
        v30[1] = 0x7FFFFFFF;
      }
      *a8 = 4;
    }
    else
    {
      if ( v61 )
        v16 = -(__int64)v16;
      *(_QWORD *)a9 = v16;
    }
  }
  else
  {
    v26 = a9;
    v27 = a8;
    *a9 = 0;
    v26[1] = 0;
    *v27 = 4;
  }
  if ( v55 )
    *a8 |= 2u;
  v28 = v63;
  *a1 = v62;
  a1[1] = v28;
  sub_3BDF68(v25, v65);
  return a1;
}


//======================================================================
// sub_39CF70
// address: 0x0039CF70   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_39CF70(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  sub_39C8C0(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}


//======================================================================
// sub_39CF98
// address: 0x0039CF98   size: 0x5DC (1500 bytes)
//======================================================================
_DWORD *__fastcall sub_39CF98(_DWORD *a1, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8, int *a9)
{
  int v9; // r4
  int v10; // r0
  int v11; // r4
  unsigned __int8 *v12; // r9
  int v13; // r3
  int v14; // r0
  unsigned int v15; // r10
  unsigned __int8 *v16; // r11
  unsigned __int64 v17; // r4
  int v18; // r6
  unsigned __int64 v19; // r0
  _DWORD *v20; // r0
  unsigned int v21; // r3
  unsigned __int8 *v22; // r3
  int v23; // r0
  int v24; // r6
  _DWORD *v25; // r0
  int v26; // r2
  int v27; // r3
  int *v28; // r1
  int v29; // r2
  unsigned __int8 *v31; // r3
  _BYTE *v32; // r0
  int v33; // r6
  unsigned __int64 v34; // r0
  _DWORD *v35; // r0
  unsigned int v36; // r3
  unsigned __int8 *v37; // r3
  int v38; // r0
  int v39; // r6
  unsigned __int8 *v40; // r3
  int v41; // r2
  unsigned __int8 *v42; // r4
  int v43; // r9
  unsigned int v44; // r3
  unsigned __int8 v45; // r0
  unsigned int v46; // r6
  int v47; // r3
  int v48; // r3
  int v49; // r8
  int v50; // r6
  int v51; // r0
  int v52; // r0
  size_t v53; // [sp+14h] [bp-2Ch]
  int v54; // [sp+18h] [bp-28h]
  _BOOL4 v55; // [sp+1Ch] [bp-24h]
  int v56; // [sp+20h] [bp-20h]
  int v57; // [sp+28h] [bp-18h]
  int v58; // [sp+2Ch] [bp-14h]
  unsigned int v60; // [sp+34h] [bp-Ch]
  _BOOL4 v61; // [sp+3Ch] [bp-4h]
  _DWORD *v62; // [sp+40h] [bp+0h] BYREF
  int v63; // [sp+44h] [bp+4h]
  char v64[4]; // [sp+4Ch] [bp+Ch] BYREF
  char v65[4]; // [sp+50h] [bp+10h] BYREF
  _DWORD v66[2]; // [sp+54h] [bp+14h] BYREF

  v9 = a7;
  v63 = a4;
  v62 = a3;
  v10 = sub_397970((int)v64, (_DWORD *)(a7 + 108));
  v11 = *(_DWORD *)(v9 + 12) & 0x4A;
  v12 = (unsigned __int8 *)v10;
  if ( v11 == 64 )
  {
    v56 = 8;
  }
  else if ( v11 == 8 )
  {
    v56 = 16;
  }
  else
  {
    v56 = 10;
  }
  v55 = sub_398224((int)&v62, (int)&a5);
  if ( !v55 )
  {
    v46 = (unsigned __int8)sub_3981E8((int)&v62);
    v61 = v12[74] == v46;
    if ( v12[74] == v46 || v12[75] == v46 )
    {
      v13 = v12[16];
      if ( v12[16] != 0 && v12[37] == v46 )
      {
        v13 = 1;
      }
      else if ( v12[36] != v46 )
      {
        v14 = sub_3978A0((int)&v62);
        if ( sub_398224(v14, (int)&a5) )
          goto LABEL_13;
        v45 = sub_3981E8((int)&v62);
        v13 = v12[16];
        v46 = v45;
      }
    }
    else
    {
      v13 = v12[16];
    }
    v58 = 0;
    v54 = 0;
    v41 = v11;
    v42 = v12;
    v43 = v41;
    while ( 1 )
    {
      if ( v13 != 0 && v42[37] == v46 || v42[36] == v46 )
      {
LABEL_144:
        v12 = v42;
        goto LABEL_14;
      }
      if ( v42[78] == v46 )
      {
        if ( v56 == 10 || v58 == 0 )
        {
          if ( v43 != 0 )
          {
            if ( v56 == 8 )
              v54 = 0;
            else
              ++v54;
            v58 = 1;
          }
          else
          {
            v54 = 0;
            v58 = 1;
            v56 = 8;
          }
          goto LABEL_120;
        }
      }
      else if ( v58 == 0 )
      {
        goto LABEL_144;
      }
      if ( v42[76] != v46 && v42[77] != v46 )
      {
        v12 = v42;
        v58 = 1;
        goto LABEL_14;
      }
      if ( v43 != 0 )
      {
        if ( v56 != 16 )
        {
          v12 = v42;
          v58 = 1;
          goto LABEL_15;
        }
        v54 = 0;
        v58 = 0;
      }
      else
      {
        v54 = 0;
        v58 = 0;
        v56 = 16;
      }
LABEL_120:
      if ( v62 != nullptr )
      {
        v44 = v62[2];
        if ( v44 < v62[3] )
          v62[2] = v44 + 1;
        else
          (*(void (__fastcall **)(_DWORD *))(*v62 + 40))(v62);
        v63 = -1;
      }
      if ( sub_398224((int)&v62, (int)&a5) )
      {
        v55 = true;
        v12 = v42;
        v13 = v42[16];
        if ( v56 != 16 )
          goto LABEL_15;
        goto LABEL_127;
      }
      v46 = (unsigned __int8)sub_3981E8((int)&v62);
      if ( v58 == 0 )
      {
        v12 = v42;
        v13 = v42[16];
        goto LABEL_14;
      }
      v13 = v42[16];
    }
  }
  v46 = 0;
  v61 = false;
LABEL_13:
  v13 = v12[16];
  v55 = true;
  v54 = 0;
  v58 = 0;
LABEL_14:
  if ( v56 == 16 )
LABEL_127:
    v53 = 22;
  else
LABEL_15:
    v53 = v56;
  v66[0] = &byte_55FB88;
  if ( v13 != 0 )
    sub_3BE700(v66, 32);
  v57 = v12[100];
  v15 = (0xFFFFFFFFFFFFFFFFLL / v56) >> 32;
  v60 = 0xFFFFFFFFFFFFFFFFLL / v56;
  v16 = v12 + 78;
  if ( v12[100] == 0 )
  {
    v17 = 0;
    if ( v55 )
    {
      v49 = 0;
      v50 = 0;
      goto LABEL_42;
    }
    v49 = 0;
    while ( v53 > 0xA )
    {
      if ( (unsigned __int8)(v46 - 48) <= 9u )
      {
        v18 = v46 - 48;
        goto LABEL_26;
      }
      if ( (unsigned __int8)(v46 - 97) <= 5u )
      {
        v18 = v46 - 87;
        goto LABEL_26;
      }
      if ( (unsigned __int8)(v46 - 65) > 5u )
        goto LABEL_70;
      v18 = v46 - 55;
      if ( HIDWORD(v17) <= v15 )
      {
LABEL_27:
        if ( HIDWORD(v17) != v15 || (unsigned int)v17 <= v60 )
        {
          v19 = v17 * v56;
          v17 = v18 + v19;
          v49 = (unsigned __int8)((v19 > __PAIR64__(~(v18 >> 31), ~v18)) | v49);
          ++v54;
          goto LABEL_30;
        }
      }
LABEL_61:
      v49 = 1;
LABEL_30:
      v20 = v62;
      if ( v62 == nullptr )
        goto LABEL_56;
      v21 = v62[2];
      if ( v21 < v62[3] )
      {
        v62[2] = v21 + 1;
        v63 = -1;
LABEL_34:
        v22 = (unsigned __int8 *)v20[2];
        if ( (unsigned int)v22 < v20[3] )
        {
          v23 = *v22;
LABEL_36:
          v24 = 0;
          v63 = v23;
          goto LABEL_37;
        }
        v23 = (*(int (__fastcall **)(_DWORD *))(*v20 + 36))(v20);
        if ( v23 != -1 )
          goto LABEL_36;
        v62 = nullptr;
LABEL_56:
        v24 = 1;
        goto LABEL_37;
      }
      (*(void (__fastcall **)(_DWORD *))(*v62 + 40))(v62);
      v20 = v62;
      v63 = -1;
      if ( v62 != nullptr )
        goto LABEL_34;
      v24 = 1;
LABEL_37:
      if ( a5 == nullptr )
      {
        v47 = 1;
        goto LABEL_40;
      }
      v47 = 0;
      if ( a6 != -1 )
        goto LABEL_40;
      v31 = (unsigned __int8 *)a5[2];
      if ( (unsigned int)v31 < a5[3] )
      {
        v51 = *v31;
      }
      else
      {
        v51 = (*(int (**)(void))(*a5 + 36))();
        if ( v51 == -1 )
        {
          a5 = nullptr;
          v47 = 1;
LABEL_40:
          if ( v24 == v47 )
            goto LABEL_41;
          goto LABEL_66;
        }
      }
      a6 = v51;
      if ( v24 == 0 )
      {
LABEL_41:
        v50 = 0;
        v55 = true;
        goto LABEL_42;
      }
LABEL_66:
      v46 = (unsigned __int8)sub_3981E8((int)&v62);
    }
    if ( v46 <= 0x2F || (unsigned __int8)(v53 + 48) <= v46 )
      goto LABEL_70;
    v18 = v46 - 48;
LABEL_26:
    if ( HIDWORD(v17) > v15 )
      goto LABEL_61;
    goto LABEL_27;
  }
  v17 = 0;
  v49 = 0;
  if ( v55 )
  {
LABEL_70:
    v50 = 0;
    v25 = (_DWORD *)(v66[0] - 12);
    if ( *(_DWORD *)(v66[0] - 12) == 0 )
      goto LABEL_43;
    goto LABEL_71;
  }
  while ( v12[16] == 0 || v12[37] != v46 )
  {
    if ( v12[36] == v46 )
      goto LABEL_70;
    v32 = j_memchr(v12 + 78, v46, v53);
    if ( v32 == nullptr )
      goto LABEL_70;
    v33 = v32 - v16;
    if ( v32 - v16 > 15 )
      v33 -= 6;
    if ( v17 > __PAIR64__(v15, v60) )
    {
      v49 = 1;
    }
    else
    {
      v34 = v17 * v56;
      v17 = v33 + v34;
      v49 = (unsigned __int8)((v34 > __PAIR64__(~(v33 >> 31), ~v33)) | v49);
      ++v54;
    }
LABEL_83:
    v35 = v62;
    if ( v62 == nullptr )
      goto LABEL_97;
    v36 = v62[2];
    if ( v36 < v62[3] )
    {
      v62[2] = v36 + 1;
      v63 = -1;
LABEL_87:
      v37 = (unsigned __int8 *)v35[2];
      if ( (unsigned int)v37 < v35[3] )
      {
        v38 = *v37;
LABEL_89:
        v39 = 0;
        v63 = v38;
        goto LABEL_90;
      }
      v38 = (*(int (__fastcall **)(_DWORD *))(*v35 + 36))(v35);
      if ( v38 != -1 )
        goto LABEL_89;
      v62 = nullptr;
LABEL_97:
      v39 = v57;
      goto LABEL_90;
    }
    (*(void (__fastcall **)(_DWORD *))(*v62 + 40))(v62);
    v35 = v62;
    v63 = -1;
    if ( v62 != nullptr )
      goto LABEL_87;
    v39 = v57;
LABEL_90:
    if ( a5 == nullptr )
    {
      v48 = v57;
      goto LABEL_93;
    }
    v48 = 0;
    if ( a6 == -1 )
    {
      v40 = (unsigned __int8 *)a5[2];
      if ( (unsigned int)v40 < a5[3] )
      {
        v52 = *v40;
LABEL_102:
        a6 = v52;
        v48 = 0;
        goto LABEL_93;
      }
      v52 = (*(int (**)(void))(*a5 + 36))();
      if ( v52 != -1 )
        goto LABEL_102;
      a5 = nullptr;
      v48 = v57;
    }
LABEL_93:
    if ( v48 == v39 )
    {
      v50 = 0;
      v55 = true;
      goto LABEL_42;
    }
    v46 = (unsigned __int8)sub_3981E8((int)&v62);
  }
  if ( v54 != 0 )
  {
    sub_3BEA50(v66, (unsigned __int8)v54);
    v54 = 0;
    goto LABEL_83;
  }
  v50 = 1;
LABEL_42:
  v25 = (_DWORD *)(v66[0] - 12);
  if ( *(_DWORD *)(v66[0] - 12) != 0 )
  {
LABEL_71:
    sub_3BEA50(v66, (unsigned __int8)v54);
    if ( sub_3BFF94(*((_DWORD *)v12 + 2), *((_DWORD *)v12 + 3), v66) == 0 )
      *a8 = 4;
    v25 = (_DWORD *)(v66[0] - 12);
  }
LABEL_43:
  if ( v54 == 0 && v58 == 0 && *v25 == 0 || v50 != 0 )
  {
    v26 = 0;
    v27 = 0;
    goto LABEL_47;
  }
  if ( v49 != 0 )
  {
    v26 = -1;
    v27 = -1;
LABEL_47:
    v28 = a9;
    *a9 = v26;
    v28[1] = v27;
    *a8 = 4;
  }
  else
  {
    if ( v61 )
      v17 = -(__int64)v17;
    *(_QWORD *)a9 = v17;
  }
  if ( v55 )
    *a8 |= 2u;
  v29 = v63;
  *a1 = v62;
  a1[1] = v29;
  sub_3BDF68(v25, v65);
  return a1;
}


//======================================================================
// sub_39D574
// address: 0x0039D574   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_39D574(_DWORD *a1, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8, int *a9)
{
  sub_39CF98(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}


//======================================================================
// sub_39D59C
// address: 0x0039D59C   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_39D59C(int a1, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8)
{
  *a5 = a3;
  *a8 = a6;
  return 3;
}


//======================================================================
// sub_39D5AC
// address: 0x0039D5AC   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_39D5AC(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  *a5 = a3;
  return 3;
}


//======================================================================
// sub_39D5B4
// address: 0x0039D5B4   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_39D5B4(int a1, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8)
{
  *a5 = a3;
  *a8 = a6;
  return 3;
}


//======================================================================
// sub_39D5C4
// address: 0x0039D5C4   size: 0x4 (4 bytes)
//======================================================================
int sub_39D5C4()
{
  return 1;
}


//======================================================================
// sub_39D5C8
// address: 0x0039D5C8   size: 0x4 (4 bytes)
//======================================================================
int sub_39D5C8()
{
  return 1;
}


//======================================================================
// sub_39D5CC
// address: 0x0039D5CC   size: 0xE (14 bytes)
//======================================================================
unsigned int __fastcall sub_39D5CC(int a1, int a2, int a3, int a4, unsigned int a5)
{
  unsigned int result; // r0

  result = a4 - a3;
  if ( a4 - a3 > a5 )
    return a5;
  return result;
}


//======================================================================
// sub_39D5DC
// address: 0x0039D5DC   size: 0x4 (4 bytes)
//======================================================================
int sub_39D5DC()
{
  return 1;
}


//======================================================================
// sub_39D5E0
// address: 0x0039D5E0   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_39D5E0(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  *a5 = a3;
  return 3;
}


//======================================================================
// sub_39D5E8
// address: 0x0039D5E8   size: 0x4 (4 bytes)
//======================================================================
int sub_39D5E8()
{
  return 0;
}


//======================================================================
// sub_39D5EC
// address: 0x0039D5EC   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_39D5EC(_DWORD *a1)
{
  *a1 = &off_464A30;
  sub_3A5428(a1 + 2);
  *a1 = &off_464670;
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_39D634
// address: 0x0039D634   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall sub_39D634(_DWORD *a1)
{
  sub_39D5EC(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_39D648
// address: 0x0039D648   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_39D648(_DWORD *a1)
{
  *a1 = &off_464A70;
  sub_3A5428(a1 + 2);
  *a1 = &off_465568;
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_39D690
// address: 0x0039D690   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall sub_39D690(_DWORD *a1)
{
  sub_39D648(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_39D6A4
// address: 0x0039D6A4   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall sub_39D6A4(_DWORD *a1, int a2)
{
  a1[1] = a2 != 0;
  *a1 = &off_464A30;
  a1[2] = sub_3A8844();
  return a1;
}


//======================================================================
// sub_39D6DC
// address: 0x0039D6DC   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_39D6DC(_DWORD *a1, int a2, int a3)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  a1[1] = a3 != 0;
  *a1 = &off_464A30;
  v5 = a2;
  a1[2] = sub_3A5430(&v5);
  return a1;
}


//======================================================================
// sub_39D704
// address: 0x0039D704   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall sub_39D704(_DWORD *a1, int a2)
{
  a1[1] = a2 != 0;
  *a1 = &off_464A70;
  a1[2] = sub_3A8844();
  return a1;
}


//======================================================================
// sub_39D73C
// address: 0x0039D73C   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_39D73C(_DWORD *a1, int a2, int a3)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  a1[1] = a3 != 0;
  *a1 = &off_464A70;
  v5 = a2;
  a1[2] = sub_3A5430(&v5);
  return a1;
}


//======================================================================
// sub_39D764
// address: 0x0039D764   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_39D764(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = &off_464ABC;
  a1[1] = 0;
  v2 = a1 + 2;
  *v2 = &off_464320;
  sub_392FE4(v2);
  return a1;
}


//======================================================================
// sub_39D790
// address: 0x0039D790   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_39D790(_DWORD *a1)
{
  return sub_39D764((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_39D7A0
// address: 0x0039D7A0   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_39D7A0(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = &off_464AEC;
  a1[1] = 0;
  v2 = a1 + 2;
  *v2 = &off_464330;
  sub_392FE4(v2);
  return a1;
}


//======================================================================
// sub_39D7CC
// address: 0x0039D7CC   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_39D7CC(_DWORD *a1)
{
  return sub_39D7A0((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_39D7DC
// address: 0x0039D7DC   size: 0x2A (42 bytes)
//======================================================================
_DWORD *__fastcall sub_39D7DC(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = &off_464ABC;
  a1[1] = 0;
  v2 = a1 + 2;
  *v2 = &off_464320;
  sub_392FE4(v2);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_39D810
// address: 0x0039D810   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_39D810(_DWORD *a1)
{
  return sub_39D7DC((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_39D820
// address: 0x0039D820   size: 0x2A (42 bytes)
//======================================================================
_DWORD *__fastcall sub_39D820(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = &off_464AEC;
  a1[1] = 0;
  v2 = a1 + 2;
  *v2 = &off_464330;
  sub_392FE4(v2);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_39D854
// address: 0x0039D854   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_39D854(_DWORD *a1)
{
  return sub_39D820((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_39D864
// address: 0x0039D864   size: 0x24 (36 bytes)
//======================================================================
int *__fastcall sub_39D864(int *a1, int *a2, int a3)
{
  int v4; // r0

  v4 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v4 - 12)) = a2[1];
  a1[1] = 0;
  sub_391734((int)a1 + *(_DWORD *)(v4 - 12), a3);
  return a1;
}


//======================================================================
// sub_39D888
// address: 0x0039D888   size: 0x48 (72 bytes)
//======================================================================
int __fastcall sub_39D888(int a1, int a2)
{
  int v2; // r5

  v2 = a1 + 8;
  sub_392DEC((_DWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 124) = 0;
  *(_BYTE *)(a1 + 125) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_464ABC;
  *(_DWORD *)(a1 + 8) = &off_464AD0;
  sub_391734(v2, a2);
  return a1;
}


//======================================================================
// sub_39D8EC
// address: 0x0039D8EC   size: 0x12 (18 bytes)
//======================================================================
int *__fastcall sub_39D8EC(int *result, int *a2)
{
  int v2; // r3

  v2 = *a2;
  *result = *a2;
  *(int *)((char *)result + *(_DWORD *)(v2 - 12)) = a2[1];
  result[1] = 0;
  return result;
}


//======================================================================
// sub_39D900
// address: 0x0039D900   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_39D900(int a1, int (*a2)(void))
{
  return a2();
}


//======================================================================
// sub_39D908
// address: 0x0039D908   size: 0x12 (18 bytes)
//======================================================================
char *__fastcall sub_39D908(char *a1, void (__fastcall *a2)(char *))
{
  a2(&a1[*(_DWORD *)(*(_DWORD *)a1 - 12)]);
  return a1;
}


//======================================================================
// sub_39D91C
// address: 0x0039D91C   size: 0x12 (18 bytes)
//======================================================================
char *__fastcall sub_39D91C(char *a1, void (__fastcall *a2)(char *))
{
  a2(&a1[*(_DWORD *)(*(_DWORD *)a1 - 12)]);
  return a1;
}


//======================================================================
// sub_39D930
// address: 0x0039D930   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_39D930(int a1)
{
  return *(_DWORD *)(a1 + 4);
}


//======================================================================
// sub_39D934
// address: 0x0039D934   size: 0x44 (68 bytes)
//======================================================================
int __fastcall sub_39D934(_DWORD *a1, int a2, int a3)
{
  _BYTE *v5; // r4
  int v7; // r3

  v5 = *(_BYTE **)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
  if ( v5 == nullptr )
    sub_3BCEE4();
  if ( v5[28] != 0 )
  {
    v7 = (unsigned __int8)v5[39];
  }
  else
  {
    sub_3A7D48(v5);
    v7 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v5 + 24))(v5, 10);
  }
  return sub_3A6BBC(a1, a2, a3, v7);
}


//======================================================================
// sub_39D978
// address: 0x0039D978   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall sub_39D978(_DWORD *a1, int a2)
{
  _DWORD *v2; // r3

  v2 = *(_DWORD **)a2;
  *a1 = *(_DWORD *)a2;
  v2 -= 3;
  *(_DWORD *)((char *)a1 + *v2) = *(_DWORD *)(a2 + 4);
  a1[1] = 0;
  sub_391734((int)a1 + *v2, 0);
  return a1;
}


//======================================================================
// sub_39D99C
// address: 0x0039D99C   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_39D99C(int a1)
{
  int v1; // r5

  v1 = a1 + 8;
  sub_392DEC((_DWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 124) = 0;
  *(_BYTE *)(a1 + 125) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_464ABC;
  *(_DWORD *)(a1 + 8) = &off_464AD0;
  sub_391734(v1, 0);
  return a1;
}


//======================================================================
// sub_39DA00
// address: 0x0039DA00   size: 0xF6 (246 bytes)
//======================================================================
_BYTE *__fastcall sub_39DA00(_BYTE *a1, _DWORD *a2, int a3)
{
  _DWORD *v5; // r0
  int v6; // r3
  int v8; // r5
  unsigned __int8 *v9; // r3
  int v10; // r3
  int v11; // r7
  int v12; // r2
  unsigned int v14; // r3
  unsigned int v15; // r2
  _BYTE *v16; // r3
  int v17; // r0

  *a1 = 0;
  v5 = (_DWORD *)((char *)a2 + *(_DWORD *)(*a2 - 12));
  v6 = v5[5];
  if ( v6 == 0 )
  {
    if ( v5[28] != 0 )
    {
      sub_3B3A80(v5[28]);
      v5 = (_DWORD *)((char *)a2 + *(_DWORD *)(*a2 - 12));
    }
    if ( a3 == 0 && (v5[3] & 0x1000) != 0 )
    {
      v8 = v5[30];
      v9 = *(unsigned __int8 **)(v8 + 8);
      if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 12) )
      {
        v10 = sub_13B800(v5[30]);
        v5 = (_DWORD *)((char *)a2 + *(_DWORD *)(*a2 - 12));
      }
      else
      {
        v10 = *v9;
      }
      v11 = v5[31];
      if ( v11 == 0 )
        sub_3BCEE4();
      if ( v10 == -1 )
      {
LABEL_18:
        v6 = v5[5];
        v12 = 2;
        goto LABEL_14;
      }
      if ( (*(_BYTE *)(*(_DWORD *)(v11 + 24) + (unsigned __int8)v10) & 8) != 0 )
      {
        do
        {
          v14 = *(_DWORD *)(v8 + 8);
          v15 = *(_DWORD *)(v8 + 12);
          if ( v14 >= v15 )
          {
            if ( sub_13B7F4(v8) == -1 )
              goto LABEL_17;
            v16 = *(_BYTE **)(v8 + 8);
            v15 = *(_DWORD *)(v8 + 12);
          }
          else
          {
            v16 = (_BYTE *)(v14 + 1);
            *(_DWORD *)(v8 + 8) = v16;
          }
          if ( (unsigned int)v16 >= v15 )
          {
            v17 = sub_13B800(v8);
            if ( v17 == -1 )
            {
LABEL_17:
              v5 = (_DWORD *)((char *)a2 + *(_DWORD *)(*a2 - 12));
              goto LABEL_18;
            }
          }
          else
          {
            LOBYTE(v17) = *v16;
          }
        }
        while ( (*(_BYTE *)(*(_DWORD *)(v11 + 24) + (unsigned __int8)v17) & 8) != 0 );
        v5 = (_DWORD *)((char *)a2 + *(_DWORD *)(*a2 - 12));
      }
    }
    v6 = v5[5];
    if ( v6 == 0 )
    {
      *a1 = 1;
      return a1;
    }
  }
  v12 = 0;
LABEL_14:
  sub_3914B0(v5, v12 | 4 | v6);
  return a1;
}


//======================================================================
// sub_39DAF8
// address: 0x0039DAF8   size: 0xC4 (196 bytes)
//======================================================================
_DWORD *__fastcall sub_39DAF8(_DWORD *a1, _WORD *a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r6
  int v8; // r1
  char v10[4]; // [sp+1Ch] [bp-28h] BYREF
  int v11; // [sp+20h] [bp-24h] BYREF
  int v12; // [sp+24h] [bp-20h] BYREF
  char v13[8]; // [sp+28h] [bp-1Ch] BYREF
  int v14; // [sp+30h] [bp-14h]
  int v15; // [sp+34h] [bp-10h]
  int v16; // [sp+38h] [bp-Ch]
  int v17; // [sp+3Ch] [bp-8h]

  sub_39DA00(v10, a1, 0);
  if ( v10[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 33);
    v11 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 30);
    v7 = *v5;
    v16 = 0;
    v14 = v6;
    v15 = -1;
    v17 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int *))(v7 + 12))(
      v13,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v11,
      &v12);
    if ( v12 >= -32768 )
    {
      if ( v12 > 0x7FFF )
      {
        v8 = v11 | 4;
        v11 |= 4u;
        *a2 = 0x7FFF;
        goto LABEL_9;
      }
      *a2 = v12;
      v8 = v11;
    }
    else
    {
      v8 = v11 | 4;
      v11 |= 4u;
      *a2 = 0x8000;
    }
    if ( v8 == 0 )
      return a1;
LABEL_9:
    sub_3914B0(
      (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
      v8 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_39DC20
// address: 0x0039DC20   size: 0x9E (158 bytes)
//======================================================================
_DWORD *__fastcall sub_39DC20(_DWORD *a1, _DWORD *a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r3
  char v9[4]; // [sp+1Ch] [bp-28h] BYREF
  int v10; // [sp+20h] [bp-24h] BYREF
  int v11; // [sp+24h] [bp-20h] BYREF
  char v12[8]; // [sp+28h] [bp-1Ch] BYREF
  int v13; // [sp+30h] [bp-14h]
  int v14; // [sp+34h] [bp-10h]
  int v15; // [sp+38h] [bp-Ch]
  int v16; // [sp+3Ch] [bp-8h]

  sub_39DA00(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 33);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 30);
    v14 = -1;
    v16 = -1;
    v7 = *v5;
    v15 = 0;
    v13 = v6;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int *))(v7 + 12))(
      v12,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      &v11);
    *a2 = v11;
    if ( v10 != 0 )
      sub_3914B0(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_39DD18
// address: 0x0039DD18   size: 0x78 (120 bytes)
//======================================================================
_DWORD *__fastcall sub_39DD18(_DWORD *a1, int a2)
{
  int v4; // r1
  _BYTE v6[3]; // [sp+4h] [bp-4h] BYREF
  char v7; // [sp+7h] [bp-1h] BYREF

  sub_39DA00(v6, a1, 0);
  if ( v6[0] != 0 )
  {
    if ( a2 != 0 )
    {
      v4 = 4 * (sub_3A5A4C(*(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120), a2, &v7) == 0);
      if ( v7 != 0 )
      {
        v4 |= 2u;
      }
      else if ( v4 == 0 )
      {
        return a1;
      }
      goto LABEL_5;
    }
  }
  else if ( a2 != 0 )
  {
    return a1;
  }
  v4 = 4;
LABEL_5:
  sub_3914B0((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)), v4 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  return a1;
}


//======================================================================
// sub_39DDEC
// address: 0x0039DDEC   size: 0x76 (118 bytes)
//======================================================================
int __fastcall sub_39DDEC(_DWORD *a1)
{
  int v2; // r3
  unsigned __int8 *v3; // r2
  int result; // r0
  int v5; // r1
  _BYTE v6[8]; // [sp+4h] [bp-8h] BYREF

  a1[1] = 0;
  sub_39DA00(v6, a1, 1);
  if ( v6[0] == 0 )
  {
    v5 = 0;
    goto LABEL_7;
  }
  v2 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120);
  v3 = *(unsigned __int8 **)(v2 + 8);
  if ( (unsigned int)v3 >= *(_DWORD *)(v2 + 12) )
  {
    result = sub_13B7F4(*(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120));
    v5 = 2;
    if ( result != -1 )
      goto LABEL_4;
LABEL_7:
    if ( a1[1] != 0 )
    {
      if ( v5 == 0 )
        return -1;
    }
    else
    {
      v5 |= 4u;
    }
    sub_3914B0(
      (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
      v5 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
    return -1;
  }
  result = *v3;
  *(_DWORD *)(v2 + 8) = v3 + 1;
LABEL_4:
  a1[1] = 1;
  return result;
}


//======================================================================
// sub_39DEC0
// address: 0x0039DEC0   size: 0x98 (152 bytes)
//======================================================================
_DWORD *__fastcall sub_39DEC0(_DWORD *a1, _BYTE *a2)
{
  int v4; // r2
  int v5; // r3
  int v7; // r3
  _BYTE *v8; // r2
  int v9; // r0
  _BYTE v10[4]; // [sp+4h] [bp-4h] BYREF

  a1[1] = 0;
  sub_39DA00(v10, a1, 1);
  if ( v10[0] != 0 )
  {
    v7 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120);
    v8 = *(_BYTE **)(v7 + 8);
    if ( (unsigned int)v8 >= *(_DWORD *)(v7 + 12) )
    {
      v9 = sub_13B7F4(*(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120));
      if ( v9 == -1 )
      {
        if ( a1[1] != 0 )
        {
          v5 = 2;
          goto LABEL_4;
        }
        v4 = 2;
LABEL_3:
        v5 = v4 | 4;
LABEL_4:
        sub_3914B0(
          (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
          *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | v5);
        return a1;
      }
    }
    else
    {
      LOBYTE(v9) = *v8;
      *(_DWORD *)(v7 + 8) = v8 + 1;
    }
    a1[1] = 1;
    *a2 = v9;
  }
  v4 = a1[1];
  if ( v4 == 0 )
    goto LABEL_3;
  return a1;
}


//======================================================================
// sub_39DF90
// address: 0x0039DF90   size: 0xC4 (196 bytes)
//======================================================================
_DWORD *__fastcall sub_39DF90(_DWORD *a1, _BYTE *a2, int a3, int a4)
{
  int v8; // r6
  unsigned __int8 *v9; // r3
  int v10; // r0
  unsigned int v11; // r4
  unsigned int v12; // r3
  unsigned __int8 *v13; // r4
  int v14; // r1
  char v16[8]; // [sp+4h] [bp-8h] BYREF

  a1[1] = 0;
  sub_39DA00(v16, a1, 1);
  if ( v16[0] == 0 )
    goto LABEL_19;
  v8 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120);
  v9 = *(unsigned __int8 **)(v8 + 8);
  if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 12) )
    goto LABEL_22;
  v10 = *v9;
  while ( a1[1] + 1 < a3 )
  {
    if ( v10 == -1 )
      goto LABEL_11;
    if ( v10 == a4 )
      goto LABEL_19;
    *a2++ = v10;
    v11 = *(_DWORD *)(v8 + 8);
    ++a1[1];
    v12 = *(_DWORD *)(v8 + 12);
    if ( v11 >= v12 )
    {
      v10 = sub_13B7F4(v8);
      if ( v10 != -1 )
      {
        v13 = *(unsigned __int8 **)(v8 + 8);
        v12 = *(_DWORD *)(v8 + 12);
        goto LABEL_7;
      }
    }
    else
    {
      v13 = (unsigned __int8 *)(v11 + 1);
      *(_DWORD *)(v8 + 8) = v13;
LABEL_7:
      if ( (unsigned int)v13 >= v12 )
LABEL_22:
        v10 = sub_13B800(v8);
      else
        v10 = *v13;
    }
  }
  if ( v10 == -1 )
  {
LABEL_11:
    v14 = 2;
    goto LABEL_12;
  }
LABEL_19:
  v14 = 0;
LABEL_12:
  if ( a3 > 0 )
    *a2 = 0;
  if ( a1[1] == 0 )
  {
    v14 |= 4u;
    goto LABEL_16;
  }
  if ( v14 != 0 )
LABEL_16:
    sub_3914B0(
      (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
      v14 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  return a1;
}


//======================================================================
// sub_39E0B0
// address: 0x0039E0B0   size: 0x44 (68 bytes)
//======================================================================
_DWORD *__fastcall sub_39E0B0(_DWORD *a1, _BYTE *a2, int a3)
{
  _BYTE *v5; // r4
  int v7; // r3

  v5 = *(_BYTE **)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
  if ( v5 == nullptr )
    sub_3BCEE4();
  if ( v5[28] != 0 )
  {
    v7 = (unsigned __int8)v5[39];
  }
  else
  {
    sub_3A7D48(v5);
    v7 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v5 + 24))(v5, 10);
  }
  return sub_39DF90(a1, a2, a3, v7);
}


//======================================================================
// sub_39E0F4
// address: 0x0039E0F4   size: 0xD6 (214 bytes)
//======================================================================
_DWORD *__fastcall sub_39E0F4(_DWORD *a1, _DWORD *a2, int a3)
{
  int v6; // r1
  int v8; // r5
  char *v9; // r3
  char v10; // r1
  int v11; // r6
  _BYTE *v12; // r2
  unsigned int v13; // r6
  unsigned int v14; // r3
  char v15[4]; // [sp+4h] [bp-4h] BYREF

  a1[1] = 0;
  sub_39DA00(v15, a1, 1);
  if ( v15[0] != 0 )
  {
    v8 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120);
    v9 = *(char **)(v8 + 8);
    if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 12) )
      goto LABEL_14;
LABEL_7:
    v10 = *v9;
    v11 = (unsigned __int8)*v9;
    while ( a3 != v11 )
    {
      v12 = (_BYTE *)a2[5];
      if ( (unsigned int)v12 >= a2[6] )
      {
        if ( (*(int (__fastcall **)(_DWORD *))(*a2 + 52))(a2) == -1 )
          break;
      }
      else
      {
        *v12 = v10;
        ++a2[5];
      }
      v13 = *(_DWORD *)(v8 + 12);
      ++a1[1];
      v14 = *(_DWORD *)(v8 + 8);
      if ( v14 >= v13 )
      {
        if ( sub_13B7F4(v8) == -1 )
          goto LABEL_15;
        v9 = *(char **)(v8 + 8);
        v13 = *(_DWORD *)(v8 + 12);
      }
      else
      {
        v9 = (char *)(v14 + 1);
        *(_DWORD *)(v8 + 8) = v9;
      }
      if ( v13 > (unsigned int)v9 )
        goto LABEL_7;
LABEL_14:
      v11 = sub_13B800(v8);
      v10 = v11;
      if ( v11 == -1 )
      {
LABEL_15:
        v6 = 2;
        if ( a1[1] == 0 )
          goto LABEL_4;
        sub_3914B0(
          (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
          *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 2);
        return a1;
      }
    }
  }
  if ( a1[1] == 0 )
  {
    v6 = 0;
LABEL_4:
    sub_3914B0(
      (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
      v6 | 4 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_39E224
// address: 0x0039E224   size: 0x40 (64 bytes)
//======================================================================
_DWORD *__fastcall sub_39E224(_DWORD *a1, _DWORD *a2)
{
  _BYTE *v3; // r4
  int v5; // r2

  v3 = *(_BYTE **)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
  if ( v3 == nullptr )
    sub_3BCEE4();
  if ( v3[28] != 0 )
  {
    v5 = (unsigned __int8)v3[39];
  }
  else
  {
    sub_3A7D48(v3);
    v5 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v3 + 24))(v3, 10);
  }
  return sub_39E0F4(a1, a2, v5);
}


//======================================================================
// sub_39E264
// address: 0x0039E264   size: 0x5A (90 bytes)
//======================================================================
_DWORD *__fastcall sub_39E264(_DWORD *a1)
{
  int v3; // r0
  unsigned int v4; // r3
  _BYTE v5[8]; // [sp+4h] [bp-8h] BYREF

  a1[1] = 0;
  sub_39DA00(v5, a1, 1);
  if ( v5[0] != 0 )
  {
    v3 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120);
    v4 = *(_DWORD *)(v3 + 8);
    if ( v4 >= *(_DWORD *)(v3 + 12) )
    {
      if ( sub_13B7F4(v3) == -1 )
      {
        sub_3914B0(
          (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
          *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 2);
        return a1;
      }
    }
    else
    {
      *(_DWORD *)(v3 + 8) = v4 + 1;
    }
    a1[1] = 1;
  }
  return a1;
}


//======================================================================
// sub_39E318
// address: 0x0039E318   size: 0x78 (120 bytes)
//======================================================================
int __fastcall sub_39E318(_DWORD *a1)
{
  int v2; // r0
  unsigned __int8 *v3; // r3
  int v4; // r5
  _BYTE v6[8]; // [sp+4h] [bp-8h] BYREF

  a1[1] = 0;
  sub_39DA00(v6, a1, 1);
  if ( v6[0] == 0 )
    return -1;
  v2 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120);
  v3 = *(unsigned __int8 **)(v2 + 8);
  if ( (unsigned int)v3 < *(_DWORD *)(v2 + 12) )
    return *v3;
  v4 = sub_13B800(v2);
  if ( v4 == -1 )
    sub_3914B0((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 2);
  return v4;
}


//======================================================================
// sub_39E3CC
// address: 0x0039E3CC   size: 0x54 (84 bytes)
//======================================================================
_DWORD *__fastcall sub_39E3CC(_DWORD *a1, int a2, int a3)
{
  int v7; // r0
  int v8; // r0
  _BYTE v9[8]; // [sp+4h] [bp-8h] BYREF

  a1[1] = 0;
  sub_39DA00(v9, a1, 1);
  if ( v9[0] != 0 )
  {
    v7 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120);
    v8 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v7 + 32))(v7, a2, a3);
    a1[1] = v8;
    if ( a3 != v8 )
      sub_3914B0(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 6);
  }
  return a1;
}


//======================================================================
// sub_39E47C
// address: 0x0039E47C   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_39E47C(_DWORD *a1, int a2, int a3)
{
  _DWORD *v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r0
  int v11; // r2
  int result; // r0
  _BYTE v13[8]; // [sp+4h] [bp-8h] BYREF

  a1[1] = 0;
  sub_39DA00(v13, a1, 1);
  if ( v13[0] == 0 )
    return a1[1];
  v6 = *(_DWORD **)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120);
  v7 = v6[3];
  v8 = v6[2];
  v9 = v7 - v8;
  if ( v7 == v8 )
  {
    v9 = (*(int (__fastcall **)(_DWORD *))(*v6 + 28))(v6);
    if ( v9 > 0 )
      goto LABEL_4;
  }
  else if ( v9 > 0 )
  {
LABEL_4:
    v11 = v9;
    if ( v9 > a3 )
      v11 = a3;
    v10 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120);
    result = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v10 + 32))(v10, a2, v11);
    a1[1] = result;
    return result;
  }
  if ( v9 == -1 )
  {
    sub_3914B0((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 2);
    return a1[1];
  }
  return a1[1];
}


//======================================================================
// sub_39E55C
// address: 0x0039E55C   size: 0x84 (132 bytes)
//======================================================================
_DWORD *__fastcall sub_39E55C(_DWORD *a1, int a2)
{
  char *v4; // r3
  _DWORD *v5; // r0
  unsigned int v6; // r3
  unsigned int v7; // r3
  _BYTE v9[4]; // [sp+4h] [bp-4h] BYREF

  a1[1] = 0;
  sub_3914B0(
    (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
    *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) & 0xFFFFFFFD);
  sub_39DA00(v9, a1, 1);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((_DWORD **)v4 + 30);
    if ( v5 != nullptr )
    {
      v6 = v5[2];
      if ( v5[1] < v6 && *(unsigned __int8 *)(v7 = v6 - 1) == a2 )
      {
        v5[2] = v7;
      }
      else if ( (*(int (__fastcall **)(_DWORD *, int))(*v5 + 44))(v5, a2) == -1 )
      {
        sub_3914B0(
          (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
          *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
      }
    }
    else
    {
      sub_3914B0((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *((_DWORD *)v4 + 5) | 1);
    }
  }
  return a1;
}


//======================================================================
// sub_39E63C
// address: 0x0039E63C   size: 0x72 (114 bytes)
//======================================================================
_DWORD *__fastcall sub_39E63C(_DWORD *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r3
  unsigned int v4; // r2
  _BYTE v6[8]; // [sp+4h] [bp-8h] BYREF

  a1[1] = 0;
  sub_3914B0(
    (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
    *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) & 0xFFFFFFFD);
  sub_39DA00(v6, a1, 1);
  if ( v6[0] != 0 )
  {
    v2 = (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12));
    v3 = (_DWORD *)v2[30];
    if ( v3 != nullptr )
    {
      v4 = v3[2];
      if ( v3[1] < v4 )
      {
        v3[2] = v4 - 1;
        return a1;
      }
      if ( (*(int (__fastcall **)(_DWORD, int))(*v3 + 44))(v2[30], -1) != -1 )
        return a1;
      v2 = (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12));
    }
    sub_3914B0(v2, v2[5] | 1);
  }
  return a1;
}


//======================================================================
// sub_39E708
// address: 0x0039E708   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_39E708(_DWORD *a1)
{
  int v2; // r0
  _BYTE v4[8]; // [sp+4h] [bp-8h] BYREF

  sub_39DA00(v4, a1, 1);
  if ( v4[0] == 0 )
    return -1;
  v2 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120);
  if ( v2 == 0 )
    return -1;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 24))(v2) != -1 )
    return 0;
  sub_3914B0((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  return -1;
}


//======================================================================
// sub_39E7BC
// address: 0x0039E7BC   size: 0x60 (96 bytes)
//======================================================================
_DWORD *__fastcall sub_39E7BC(_DWORD *a1, _DWORD *a2)
{
  char *v4; // r3
  _BYTE v6[4]; // [sp+Ch] [bp-18h] BYREF
  _BYTE v7[20]; // [sp+10h] [bp-14h] BYREF

  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  sub_39DA00(v6, a2, 1);
  if ( v6[0] != 0 )
  {
    v4 = (char *)a2 + *(_DWORD *)(*a2 - 12);
    if ( (*((_DWORD *)v4 + 5) & 5) == 0 )
    {
      (*(void (__fastcall **)(_BYTE *, _DWORD, _DWORD, _DWORD, int, int))(**((_DWORD **)v4 + 30) + 16))(
        v7,
        *((_DWORD *)v4 + 30),
        0,
        0,
        1,
        8);
      j_memcpy(a1, v7, 0xCu);
    }
  }
  return a1;
}


//======================================================================
// sub_39E878
// address: 0x0039E878   size: 0x96 (150 bytes)
//======================================================================
// local variable allocation has failed, the output may be wrong!
_DWORD *__fastcall sub_39E878(_DWORD *a1)
{
  char *v2; // r3
  int v4; // r5
  _BYTE v5[4]; // [sp+14h] [bp-28h] BYREF
  _DWORD v6[4]; // [sp+18h] [bp-24h] BYREF
  __int128 v7; // [sp+28h] [bp-14h]
  __int128 varg_r2; // [sp+50h] [bp+14h] OVERLAPPED

  sub_3914B0(
    (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
    *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) & 0xFFFFFFFD);
  sub_39DA00(v5, a1, 1);
  if ( v5[0] != 0 )
  {
    v2 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    if ( (*((_DWORD *)v2 + 5) & 5) == 0 )
    {
      v4 = *((_DWORD *)v2 + 30);
      v7 = varg_r2;
      (*(void (__fastcall **)(_DWORD *, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 20))(v6, v4, v7, DWORD1(v7));
      if ( v6[0] == -1 && v6[1] == -1 )
        sub_3914B0(
          (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
          *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 4);
    }
  }
  return a1;
}


//======================================================================
// sub_39E968
// address: 0x0039E968   size: 0x7A (122 bytes)
//======================================================================
_DWORD *__fastcall sub_39E968(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  char *v8; // r3
  _BYTE v10[4]; // [sp+Ch] [bp+0h] BYREF
  _DWORD v11[5]; // [sp+10h] [bp+4h] BYREF

  sub_3914B0(
    (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
    *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) & 0xFFFFFFFD);
  sub_39DA00(v10, a1, 1);
  if ( v10[0] != 0 )
  {
    v8 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    if ( (*((_DWORD *)v8 + 5) & 5) == 0 )
    {
      (*(void (__fastcall **)(_DWORD *, _DWORD, int, int, int, int))(**((_DWORD **)v8 + 30) + 16))(
        v11,
        *((_DWORD *)v8 + 30),
        a3,
        a4,
        a5,
        8);
      if ( v11[0] == -1 && v11[1] == -1 )
        sub_3914B0(
          (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
          *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 4);
    }
  }
  return a1;
}


//======================================================================
// sub_39EA3C
// address: 0x0039EA3C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_39EA3C(unsigned __int8 *a1)
{
  return *a1;
}


//======================================================================
// sub_39EA40
// address: 0x0039EA40   size: 0xB4 (180 bytes)
//======================================================================
_DWORD *__fastcall sub_39EA40(_DWORD *a1)
{
  _DWORD *v2; // r6
  int v3; // r4
  _BYTE *v4; // r3
  int v5; // r0
  unsigned int v6; // r3
  unsigned int v7; // r2
  _BYTE *v8; // r3
  int v9; // r0
  char v11[4]; // [sp+4h] [bp-4h] BYREF

  sub_3A84F8(v11, (char *)a1 + *(_DWORD *)(*a1 - 12) + 108);
  v2 = sub_394CF0((int)v11);
  sub_3A8980(v11);
  v3 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120);
  v4 = *(_BYTE **)(v3 + 8);
  if ( (unsigned int)v4 >= *(_DWORD *)(v3 + 12) )
  {
    v5 = sub_13B800(*(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120));
    if ( v5 == -1 )
    {
LABEL_11:
      sub_3914B0(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 2);
      return a1;
    }
  }
  else
  {
    LOBYTE(v5) = *v4;
  }
  if ( (*(_BYTE *)(v2[6] + (unsigned __int8)v5) & 8) != 0 )
  {
    do
    {
      v6 = *(_DWORD *)(v3 + 8);
      v7 = *(_DWORD *)(v3 + 12);
      if ( v6 >= v7 )
      {
        if ( sub_13B7F4(v3) == -1 )
          goto LABEL_11;
        v8 = *(_BYTE **)(v3 + 8);
        v7 = *(_DWORD *)(v3 + 12);
      }
      else
      {
        v8 = (_BYTE *)(v6 + 1);
        *(_DWORD *)(v3 + 8) = v8;
      }
      if ( (unsigned int)v8 >= v7 )
      {
        v9 = sub_13B800(v3);
        if ( v9 == -1 )
          goto LABEL_11;
      }
      else
      {
        LOBYTE(v9) = *v8;
      }
    }
    while ( (*(_BYTE *)(v2[6] + (unsigned __int8)v9) & 8) != 0 );
  }
  return a1;
}


//======================================================================
// sub_39EB00
// address: 0x0039EB00   size: 0x5A (90 bytes)
//======================================================================
_DWORD *__fastcall sub_39EB00(_DWORD *a1, _BYTE *a2)
{
  int v5; // r3
  _BYTE *v6; // r2
  int v7; // r0
  _BYTE v8[4]; // [sp+4h] [bp-4h] BYREF

  sub_39DA00(v8, a1, 0);
  if ( v8[0] != 0 )
  {
    v5 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120);
    v6 = *(_BYTE **)(v5 + 8);
    if ( (unsigned int)v6 >= *(_DWORD *)(v5 + 12) )
    {
      v7 = sub_13B7F4(*(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120));
      if ( v7 == -1 )
      {
        sub_3914B0(
          (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
          *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 6);
        return a1;
      }
    }
    else
    {
      LOBYTE(v7) = *v6;
      *(_DWORD *)(v5 + 8) = v6 + 1;
    }
    *a2 = v7;
  }
  return a1;
}


//======================================================================
// sub_39EBB4
// address: 0x0039EBB4   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_39EBB4(_DWORD *a1, _BYTE *a2)
{
  return sub_39EB00(a1, a2);
}


//======================================================================
// sub_39EBBC
// address: 0x0039EBBC   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_39EBBC(_DWORD *a1, _BYTE *a2)
{
  return sub_39EB00(a1, a2);
}


//======================================================================
// sub_39EBC4
// address: 0x0039EBC4   size: 0x8 (8 bytes)
//======================================================================
int sub_39EBC4()
{
  return sub_3A6F64();
}


//======================================================================
// sub_39EBCC
// address: 0x0039EBCC   size: 0x8 (8 bytes)
//======================================================================
int sub_39EBCC()
{
  return sub_3A6F64();
}


//======================================================================
// sub_39EBD4
// address: 0x0039EBD4   size: 0x50 (80 bytes)
//======================================================================
_DWORD *__fastcall sub_39EBD4(_DWORD *a1, char a2)
{
  char *v2; // r4
  _BYTE *v5; // r6
  char v6; // r0

  v2 = (char *)a1 + *(_DWORD *)(*a1 - 12);
  if ( v2[117] == 0 )
  {
    v5 = *((_BYTE **)v2 + 31);
    if ( v5 == nullptr )
      sub_3BCEE4();
    if ( v5[28] != 0 )
    {
      v6 = v5[61];
    }
    else
    {
      sub_3A7D48(*((_DWORD *)v2 + 31));
      v6 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v5 + 24))(v5, 32);
    }
    v2[116] = v6;
    v2[117] = 1;
  }
  v2[116] = a2;
  return a1;
}


//======================================================================
// sub_39EC24
// address: 0x0039EC24   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_39EC24(_DWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_DWORD *)(*result - 12) + 12) |= a2;
  return result;
}


//======================================================================
// sub_39EC34
// address: 0x0039EC34   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_39EC34(_DWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_DWORD *)(*result - 12) + 12) &= ~a2;
  return result;
}


//======================================================================
// sub_39EC44
// address: 0x0039EC44   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall sub_39EC44(_DWORD *result, int a2)
{
  int v2; // r1

  if ( a2 == 8 )
  {
    v2 = 64;
  }
  else if ( a2 == 10 )
  {
    v2 = 2;
  }
  else
  {
    v2 = 8 * (a2 == 16);
  }
  *(_DWORD *)((char *)result + *(_DWORD *)(*result - 12) + 12) = v2
                                                               | *(_DWORD *)((char *)result
                                                                           + *(_DWORD *)(*result - 12)
                                                                           + 12)
                                                               & 0xFFFFFFB5;
  return result;
}


//======================================================================
// sub_39EC74
// address: 0x0039EC74   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall sub_39EC74(_DWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_DWORD *)(*result - 12) + 4) = a2;
  return result;
}


//======================================================================
// sub_39EC80
// address: 0x0039EC80   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall sub_39EC80(_DWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_DWORD *)(*result - 12) + 8) = a2;
  return result;
}


//======================================================================
// sub_39EC8C
// address: 0x0039EC8C   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_39EC8C(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39DA00(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 33);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 30);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 16))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_3914B0(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_39ED7C
// address: 0x0039ED7C   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_39ED7C(_DWORD *a1, int a2)
{
  return sub_39EC8C(a1, a2);
}


//======================================================================
// sub_39ED84
// address: 0x0039ED84   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_39ED84(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39DA00(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 33);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 30);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 20))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_3914B0(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_39EE74
// address: 0x0039EE74   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_39EE74(_DWORD *a1, int a2)
{
  return sub_39ED84(a1, a2);
}


//======================================================================
// sub_39EE7C
// address: 0x0039EE7C   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_39EE7C(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39DA00(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 33);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 30);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 12))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_3914B0(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_39EF6C
// address: 0x0039EF6C   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_39EF6C(_DWORD *a1, int a2)
{
  return sub_39EE7C(a1, a2);
}


//======================================================================
// sub_39EF74
// address: 0x0039EF74   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_39EF74(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39DA00(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 33);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 30);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 24))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_3914B0(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_39F064
// address: 0x0039F064   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_39F064(_DWORD *a1, int a2)
{
  return sub_39EF74(a1, a2);
}


//======================================================================
// sub_39F06C
// address: 0x0039F06C   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_39F06C(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39DA00(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 33);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 30);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 8))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_3914B0(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_39F15C
// address: 0x0039F15C   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_39F15C(_DWORD *a1, int a2)
{
  return sub_39F06C(a1, a2);
}


//======================================================================
// sub_39F164
// address: 0x0039F164   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_39F164(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39DA00(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 33);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 30);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 28))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_3914B0(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_39F254
// address: 0x0039F254   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_39F254(_DWORD *a1, int a2)
{
  return sub_39F164(a1, a2);
}


//======================================================================
// sub_39F25C
// address: 0x0039F25C   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_39F25C(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39DA00(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 33);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 30);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 32))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_3914B0(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_39F34C
// address: 0x0039F34C   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_39F34C(_DWORD *a1, int a2)
{
  return sub_39F25C(a1, a2);
}


//======================================================================
// sub_39F354
// address: 0x0039F354   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_39F354(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39DA00(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 33);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 30);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 36))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_3914B0(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_39F444
// address: 0x0039F444   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_39F444(_DWORD *a1, int a2)
{
  return sub_39F354(a1, a2);
}


//======================================================================
// sub_39F44C
// address: 0x0039F44C   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_39F44C(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39DA00(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 33);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 30);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 40))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_3914B0(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_39F53C
// address: 0x0039F53C   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_39F53C(_DWORD *a1, int a2)
{
  return sub_39F44C(a1, a2);
}


//======================================================================
// sub_39F544
// address: 0x0039F544   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_39F544(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39DA00(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 33);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 30);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 44))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_3914B0(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_39F634
// address: 0x0039F634   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_39F634(_DWORD *a1, int a2)
{
  return sub_39F544(a1, a2);
}


//======================================================================
// sub_39F63C
// address: 0x0039F63C   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_39F63C(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39DA00(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 33);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 30);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 48))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_3914B0(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_39F72C
// address: 0x0039F72C   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_39F72C(_DWORD *a1, int a2)
{
  return sub_39F63C(a1, a2);
}


//======================================================================
// sub_39F734
// address: 0x0039F734   size: 0x24 (36 bytes)
//======================================================================
int *__fastcall sub_39F734(int *a1, int *a2, int a3)
{
  int v4; // r0

  v4 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v4 - 12)) = a2[1];
  a1[1] = 0;
  sub_391B70((int)a1 + *(_DWORD *)(v4 - 12), a3);
  return a1;
}


//======================================================================
// sub_39F758
// address: 0x0039F758   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_39F758(int a1, int a2)
{
  int v2; // r5

  v2 = a1 + 8;
  sub_392DEC((_DWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_BYTE *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_464AEC;
  *(_DWORD *)(a1 + 8) = &off_464B00;
  sub_391B70(v2, a2);
  return a1;
}


//======================================================================
// sub_39F7BC
// address: 0x0039F7BC   size: 0x12 (18 bytes)
//======================================================================
int *__fastcall sub_39F7BC(int *result, int *a2)
{
  int v2; // r3

  v2 = *a2;
  *result = *a2;
  *(int *)((char *)result + *(_DWORD *)(v2 - 12)) = a2[1];
  result[1] = 0;
  return result;
}


//======================================================================
// sub_39F7D0
// address: 0x0039F7D0   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_39F7D0(int a1, int (*a2)(void))
{
  return a2();
}


//======================================================================
// sub_39F7D8
// address: 0x0039F7D8   size: 0x12 (18 bytes)
//======================================================================
char *__fastcall sub_39F7D8(char *a1, void (__fastcall *a2)(char *))
{
  a2(&a1[*(_DWORD *)(*(_DWORD *)a1 - 12)]);
  return a1;
}


//======================================================================
// sub_39F7EC
// address: 0x0039F7EC   size: 0x12 (18 bytes)
//======================================================================
char *__fastcall sub_39F7EC(char *a1, void (__fastcall *a2)(char *))
{
  a2(&a1[*(_DWORD *)(*(_DWORD *)a1 - 12)]);
  return a1;
}


//======================================================================
// sub_39F800
// address: 0x0039F800   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_39F800(int a1)
{
  return *(_DWORD *)(a1 + 4);
}


//======================================================================
// sub_39F804
// address: 0x0039F804   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_39F804(_DWORD *a1, int a2, int a3)
{
  int v4; // r0
  int v7; // r0

  v4 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 128);
  if ( v4 == 0 )
    sub_3BCEE4();
  v7 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 40))(v4, 10);
  return sub_3A7600(a1, a2, a3, v7);
}


//======================================================================
// sub_39F838
// address: 0x0039F838   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall sub_39F838(_DWORD *a1, int a2)
{
  _DWORD *v2; // r3

  v2 = *(_DWORD **)a2;
  *a1 = *(_DWORD *)a2;
  v2 -= 3;
  *(_DWORD *)((char *)a1 + *v2) = *(_DWORD *)(a2 + 4);
  a1[1] = 0;
  sub_391B70((int)a1 + *v2, 0);
  return a1;
}


//======================================================================
// sub_39F85C
// address: 0x0039F85C   size: 0x44 (68 bytes)
//======================================================================
int __fastcall sub_39F85C(int a1)
{
  int v1; // r5

  v1 = a1 + 8;
  sub_392DEC((_DWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_BYTE *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_464AEC;
  *(_DWORD *)(a1 + 8) = &off_464B00;
  sub_391B70(v1, 0);
  return a1;
}


//======================================================================
// sub_39F8BC
// address: 0x0039F8BC   size: 0xEA (234 bytes)
//======================================================================
_BYTE *__fastcall sub_39F8BC(_BYTE *a1, _DWORD *a2, int a3)
{
  _DWORD *v5; // r0
  int v6; // r3
  int v8; // r4
  int *v9; // r3
  int v10; // r5
  int v11; // r8
  int v12; // r1
  int *v14; // r3
  int v15; // r0
  int *v16; // r3

  *a1 = 0;
  v5 = (_DWORD *)((char *)a2 + *(_DWORD *)(*a2 - 12));
  v6 = v5[5];
  if ( v6 == 0 )
  {
    if ( v5[28] != 0 )
    {
      sub_3B52F0(v5[28]);
      v5 = (_DWORD *)((char *)a2 + *(_DWORD *)(*a2 - 12));
    }
    if ( a3 == 0 && (v5[3] & 0x1000) != 0 )
    {
      v8 = v5[31];
      v9 = *(int **)(v8 + 8);
      if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 12) )
      {
        v10 = sub_13B818(v5[31]);
        v5 = (_DWORD *)((char *)a2 + *(_DWORD *)(*a2 - 12));
      }
      else
      {
        v10 = *v9;
      }
      v11 = v5[32];
      if ( v11 == 0 )
        sub_3BCEE4();
      if ( v10 != -1 )
      {
        do
        {
          if ( (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v11 + 8))(v11, 8, v10) == 0 )
          {
            v5 = (_DWORD *)((char *)a2 + *(_DWORD *)(*a2 - 12));
            goto LABEL_12;
          }
          v14 = *(int **)(v8 + 8);
          if ( (unsigned int)v14 >= *(_DWORD *)(v8 + 12) )
          {
            v15 = sub_13B80C(v8);
          }
          else
          {
            v15 = *v14;
            *(_DWORD *)(v8 + 8) = v14 + 1;
          }
          if ( v15 == -1 )
            break;
          v16 = *(int **)(v8 + 8);
          v10 = (unsigned int)v16 >= *(_DWORD *)(v8 + 12) ? sub_13B818(v8) : *v16;
        }
        while ( v10 != -1 );
        v5 = (_DWORD *)((char *)a2 + *(_DWORD *)(*a2 - 12));
      }
      v6 = v5[5];
      v12 = 2;
      goto LABEL_14;
    }
LABEL_12:
    v6 = v5[5];
    if ( v6 == 0 )
    {
      *a1 = 1;
      return a1;
    }
  }
  v12 = 0;
LABEL_14:
  sub_39194C(v5, v12 | 4 | v6);
  return a1;
}


//======================================================================
// sub_39F9A8
// address: 0x0039F9A8   size: 0xC4 (196 bytes)
//======================================================================
_DWORD *__fastcall sub_39F9A8(_DWORD *a1, _WORD *a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r6
  int v8; // r1
  char v10[4]; // [sp+1Ch] [bp-28h] BYREF
  int v11; // [sp+20h] [bp-24h] BYREF
  int v12; // [sp+24h] [bp-20h] BYREF
  char v13[8]; // [sp+28h] [bp-1Ch] BYREF
  int v14; // [sp+30h] [bp-14h]
  int v15; // [sp+34h] [bp-10h]
  int v16; // [sp+38h] [bp-Ch]
  int v17; // [sp+3Ch] [bp-8h]

  sub_39F8BC(v10, a1, 0);
  if ( v10[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 34);
    v11 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 31);
    v7 = *v5;
    v16 = 0;
    v14 = v6;
    v15 = -1;
    v17 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int *))(v7 + 12))(
      v13,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v11,
      &v12);
    if ( v12 >= -32768 )
    {
      if ( v12 > 0x7FFF )
      {
        v8 = v11 | 4;
        v11 |= 4u;
        *a2 = 0x7FFF;
        goto LABEL_9;
      }
      *a2 = v12;
      v8 = v11;
    }
    else
    {
      v8 = v11 | 4;
      v11 |= 4u;
      *a2 = 0x8000;
    }
    if ( v8 == 0 )
      return a1;
LABEL_9:
    sub_39194C(
      (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
      v8 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_39FAD0
// address: 0x0039FAD0   size: 0x9E (158 bytes)
//======================================================================
_DWORD *__fastcall sub_39FAD0(_DWORD *a1, _DWORD *a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r3
  char v9[4]; // [sp+1Ch] [bp-28h] BYREF
  int v10; // [sp+20h] [bp-24h] BYREF
  int v11; // [sp+24h] [bp-20h] BYREF
  char v12[8]; // [sp+28h] [bp-1Ch] BYREF
  int v13; // [sp+30h] [bp-14h]
  int v14; // [sp+34h] [bp-10h]
  int v15; // [sp+38h] [bp-Ch]
  int v16; // [sp+3Ch] [bp-8h]

  sub_39F8BC(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 34);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 31);
    v14 = -1;
    v16 = -1;
    v7 = *v5;
    v15 = 0;
    v13 = v6;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int *))(v7 + 12))(
      v12,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      &v11);
    *a2 = v11;
    if ( v10 != 0 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_39FBC8
// address: 0x0039FBC8   size: 0x78 (120 bytes)
//======================================================================
_DWORD *__fastcall sub_39FBC8(_DWORD *a1, int a2)
{
  int v4; // r1
  _BYTE v6[3]; // [sp+4h] [bp-4h] BYREF
  char v7; // [sp+7h] [bp-1h] BYREF

  sub_39F8BC(v6, a1, 0);
  if ( v6[0] != 0 )
  {
    if ( a2 != 0 )
    {
      v4 = 4 * (sub_3A5B10(*(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124), a2, &v7) == 0);
      if ( v7 != 0 )
      {
        v4 |= 2u;
      }
      else if ( v4 == 0 )
      {
        return a1;
      }
      goto LABEL_5;
    }
  }
  else if ( a2 != 0 )
  {
    return a1;
  }
  v4 = 4;
LABEL_5:
  sub_39194C((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)), v4 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  return a1;
}


//======================================================================
// sub_39FC9C
// address: 0x0039FC9C   size: 0x76 (118 bytes)
//======================================================================
int __fastcall sub_39FC9C(_DWORD *a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r3
  int *v5; // r2
  _BYTE v6[8]; // [sp+4h] [bp-8h] BYREF

  a1[1] = 0;
  sub_39F8BC(v6, a1, 1);
  v2 = 0;
  if ( v6[0] != 0 )
  {
    v4 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
    v5 = *(int **)(v4 + 8);
    if ( (unsigned int)v5 >= *(_DWORD *)(v4 + 12) )
    {
      result = sub_13B80C(*(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124));
    }
    else
    {
      result = *v5;
      *(_DWORD *)(v4 + 8) = v5 + 1;
    }
    if ( result != -1 )
    {
      a1[1] = 1;
      return result;
    }
    v2 = 2;
  }
  if ( a1[1] == 0 )
  {
    v2 |= 4u;
LABEL_4:
    sub_39194C(
      (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
      v2 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
    return -1;
  }
  result = -1;
  if ( v2 != 0 )
    goto LABEL_4;
  return result;
}


//======================================================================
// sub_39FD70
// address: 0x0039FD70   size: 0x98 (152 bytes)
//======================================================================
_DWORD *__fastcall sub_39FD70(_DWORD *a1, int *a2)
{
  int v4; // r2
  int v5; // r3
  int v7; // r3
  int *v8; // r2
  int v9; // r0
  _BYTE v10[4]; // [sp+4h] [bp-4h] BYREF

  a1[1] = 0;
  sub_39F8BC(v10, a1, 1);
  if ( v10[0] != 0 )
  {
    v7 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
    v8 = *(int **)(v7 + 8);
    if ( (unsigned int)v8 >= *(_DWORD *)(v7 + 12) )
    {
      v9 = sub_13B80C(*(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124));
    }
    else
    {
      v9 = *v8;
      *(_DWORD *)(v7 + 8) = v8 + 1;
    }
    if ( v9 == -1 )
    {
      if ( a1[1] != 0 )
      {
        v5 = 2;
        goto LABEL_4;
      }
      v4 = 2;
LABEL_3:
      v5 = v4 | 4;
LABEL_4:
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | v5);
      return a1;
    }
    a1[1] = 1;
    *a2 = v9;
  }
  v4 = a1[1];
  if ( v4 == 0 )
    goto LABEL_3;
  return a1;
}


//======================================================================
// sub_39FE40
// address: 0x0039FE40   size: 0xC4 (196 bytes)
//======================================================================
_DWORD *__fastcall sub_39FE40(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int v8; // r4
  int *v9; // r3
  int v10; // r0
  int *v11; // r5
  int *v12; // r5
  int v13; // r1
  _BYTE v15[8]; // [sp+4h] [bp-8h] BYREF

  a1[1] = 0;
  sub_39F8BC(v15, a1, 1);
  if ( v15[0] != 0 )
  {
    v8 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
    v9 = *(int **)(v8 + 8);
    if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 12) )
      goto LABEL_23;
    v10 = *v9;
    while ( a1[1] + 1 < a3 )
    {
      if ( v10 == -1 )
        goto LABEL_12;
      if ( a4 == v10 )
        goto LABEL_20;
      *a2++ = v10;
      v11 = *(int **)(v8 + 8);
      ++a1[1];
      if ( (unsigned int)v11 >= *(_DWORD *)(v8 + 12) )
      {
        v10 = sub_13B80C(v8);
      }
      else
      {
        v10 = *v11;
        *(_DWORD *)(v8 + 8) = v11 + 1;
      }
      if ( v10 != -1 )
      {
        v12 = *(int **)(v8 + 8);
        if ( (unsigned int)v12 >= *(_DWORD *)(v8 + 12) )
LABEL_23:
          v10 = sub_13B818(v8);
        else
          v10 = *v12;
      }
    }
    if ( v10 == -1 )
    {
LABEL_12:
      v13 = 2;
      goto LABEL_13;
    }
  }
LABEL_20:
  v13 = 0;
LABEL_13:
  if ( a3 > 0 )
    *a2 = 0;
  if ( a1[1] != 0 )
  {
    if ( v13 == 0 )
      return a1;
  }
  else
  {
    v13 |= 4u;
  }
  sub_39194C((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)), v13 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  return a1;
}


//======================================================================
// sub_39FF60
// address: 0x0039FF60   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall sub_39FF60(_DWORD *a1, _DWORD *a2, int a3)
{
  int v4; // r0
  int v7; // r0

  v4 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 128);
  if ( v4 == 0 )
    sub_3BCEE4();
  v7 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 40))(v4, 10);
  return sub_39FE40(a1, a2, a3, v7);
}


//======================================================================
// sub_39FF94
// address: 0x0039FF94   size: 0xCE (206 bytes)
//======================================================================
_DWORD *__fastcall sub_39FF94(_DWORD *a1, _DWORD *a2, int a3)
{
  int v6; // r1
  int v8; // r4
  int *v9; // r3
  int i; // r5
  int *v11; // r3
  unsigned int v12; // r1
  int *v13; // r3
  int v14; // r0
  _BYTE v15[4]; // [sp+4h] [bp-4h] BYREF

  a1[1] = 0;
  sub_39F8BC(v15, a1, 1);
  if ( v15[0] != 0 )
  {
    v8 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
    v9 = *(int **)(v8 + 8);
    if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 12) )
      goto LABEL_16;
LABEL_7:
    for ( i = *v9; i != -1; i = sub_13B818(v8) )
    {
      if ( a3 == i )
        goto LABEL_2;
      v11 = (int *)a2[5];
      if ( (unsigned int)v11 >= a2[6] )
      {
        if ( (*(int (__fastcall **)(_DWORD *, int, int))(*a2 + 52))(a2, i, i + 1) == -1 )
          goto LABEL_2;
      }
      else
      {
        *v11 = i;
        a2[5] = v11 + 1;
      }
      v12 = *(_DWORD *)(v8 + 12);
      ++a1[1];
      v13 = *(int **)(v8 + 8);
      if ( (unsigned int)v13 >= v12 )
      {
        v14 = sub_13B80C(v8);
      }
      else
      {
        v14 = *v13;
        *(_DWORD *)(v8 + 8) = v13 + 1;
      }
      if ( v14 == -1 )
        break;
      v9 = *(int **)(v8 + 8);
      if ( (unsigned int)v9 < *(_DWORD *)(v8 + 12) )
        goto LABEL_7;
LABEL_16:
      ;
    }
    v6 = 2;
    if ( a1[1] != 0 )
    {
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 2);
      return a1;
    }
    goto LABEL_4;
  }
LABEL_2:
  if ( a1[1] == 0 )
  {
    v6 = 0;
LABEL_4:
    sub_39194C(
      (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
      v6 | 4 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}

