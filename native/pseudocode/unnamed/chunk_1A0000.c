// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_1A0000

//======================================================================
// sub_1A0E08
// address: 0x001A0E08   size: 0x14 (20 bytes)
//======================================================================
int sub_1A0E08()
{
  return UICursor::updateCursor(*(UICursor **)(g_pFrameMgr + 140));
}


//======================================================================
// sub_1A0E20
// address: 0x001A0E20   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_1A0E20(unsigned int a1)
{
  if ( a1 > 0x3FFFFFFF )
    sub_3BCEB4(a1);
  return operator new(4 * a1);
}


//======================================================================
// sub_1A1564
// address: 0x001A1564   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_1A1564(int a1, int *a2)
{
  int v4; // r3
  int v5; // r2
  _DWORD v7[66]; // [sp+4h] [bp-110h] BYREF

  j_memset(v7, 0, sizeof(v7));
  v7[0] = a2[1];
  v4 = a2[2];
  LOBYTE(v7[1]) = (v4 & 4) != 0;
  BYTE2(v7[1]) = (v4 & 0x20) != 0;
  v5 = *a2;
  BYTE1(v7[1]) = (v4 & 8) != 0;
  return FrameManager::ProcessAccelerator(a1, v7, v5 == 1);
}


//======================================================================
// sub_1A18B2
// address: 0x001A18B2   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_1A18B2(int a1, int a2, int a3)
{
  sub_3BEB1C(a1, a2);
  sub_3BE774(a1, a3);
  return a1;
}


//======================================================================
// sub_1A4B48
// address: 0x001A4B48   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_1A4B48(int a1)
{
  return (int)(float)((float)a1 * (float)(*(float *)(g_pFrameMgr + 16) * *(float *)g_pFrameMgr));
}


//======================================================================
// sub_1A4B74
// address: 0x001A4B74   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_1A4B74(int a1)
{
  return (int)(float)((float)a1 * (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr));
}


//======================================================================
// sub_1A6326
// address: 0x001A6326   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_1A6326(int a1, int a2)
{
  return (*(int (__fastcall **)(int, _DWORD))a1)(a2, *(_DWORD *)(a1 + 4));
}


//======================================================================
// sub_1A7264
// address: 0x001A7264   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_1A7264(const char *a1)
{
  int v2; // r4
  const char *v3; // r0

  v2 = 0;
  while ( 1 )
  {
    v3 = (const char *)LayoutFrame::FP2Name(v2);
    if ( j_strcasecmp(a1, v3) == 0 )
      break;
    if ( ++v2 == 9 )
      return 0;
  }
  return v2;
}


//======================================================================
// sub_1A81D0
// address: 0x001A81D0   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_1A81D0(int a1)
{
  _BYTE v3[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isnumber(a1, 2, 0, v3) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v3);
  DEFAULT_UI_HEIGHT = (int)tolua_tonumber(a1, 2, 0, 0);
  return 0;
}


//======================================================================
// sub_1A8220
// address: 0x001A8220   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_1A8220(int a1)
{
  _BYTE v3[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isnumber(a1, 2, 0, v3) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v3);
  DEFAULT_UI_WIDTH = (int)tolua_tonumber(a1, 2, 0, 0);
  return 0;
}


//======================================================================
// sub_1A8270
// address: 0x001A8270   size: 0x9E (158 bytes)
//======================================================================
int __fastcall sub_1A8270(int a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v6; // r5
  int v7; // r0
  double ControlKeyCode; // r0
  _DWORD v10[3]; // [sp+4h] [bp-Ch] BYREF

  v10[0] = a2;
  v10[1] = a3;
  v10[2] = a4;
  if ( tolua_isboolean(a1, 1, 0, v10) != 0
    && tolua_isboolean(a1, 2, 0, v10) != 0
    && tolua_isboolean(a1, 3, 0, v10) != 0
    && tolua_isnoobj(a1, 4, v10) != 0 )
  {
    v5 = tolua_toboolean(a1, 1, 0);
    v6 = tolua_toboolean(a1, 2, 0);
    v7 = tolua_toboolean(a1, 3, 0);
    ControlKeyCode = (double)GetControlKeyCode(v5 != 0, v6 != 0, v7 != 0);
    tolua_pushnumber(a1, HIDWORD(ControlKeyCode), LODWORD(ControlKeyCode), HIDWORD(ControlKeyCode));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetControlKeyCode'.", v10);
    return 0;
  }
}


//======================================================================
// sub_1A8314
// address: 0x001A8314   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_1A8314(int a1)
{
  tolua_pushnumber(
    a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)DEFAULT_UI_HEIGHT)),
    COERCE_UNSIGNED_INT64((double)DEFAULT_UI_HEIGHT),
    HIDWORD(COERCE_UNSIGNED_INT64((double)DEFAULT_UI_HEIGHT)));
  return 1;
}


//======================================================================
// sub_1A8338
// address: 0x001A8338   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_1A8338(int a1)
{
  tolua_pushnumber(
    a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)DEFAULT_UI_WIDTH)),
    COERCE_UNSIGNED_INT64((double)DEFAULT_UI_WIDTH),
    HIDWORD(COERCE_UNSIGNED_INT64((double)DEFAULT_UI_WIDTH)));
  return 1;
}


//======================================================================
// sub_1A8360
// address: 0x001A8360   size: 0xF0 (240 bytes)
//======================================================================
int __fastcall sub_1A8360(int a1)
{
  int v2; // r5
  float v3; // r0
  float v4; // r0
  float v5; // r0
  float v6; // r6
  float v7; // r0
  float v8; // r7
  float v10; // [sp+8h] [bp-1Ch]
  float v11; // [sp+Ch] [bp-18h]
  _BYTE v12[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v12) != 0
    && tolua_isnumber(a1, 2, 0, v12) != 0
    && tolua_isnumber(a1, 3, 0, v12) != 0
    && tolua_isnumber(a1, 4, 0, v12) != 0
    && tolua_isnumber(a1, 5, 0, v12) != 0
    && tolua_isnoobj(a1, 6, v12) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v10 = v3;
    v4 = tolua_tonumber(a1, 3, 0, 0);
    v11 = v4;
    v5 = tolua_tonumber(a1, 4, 0, 0);
    v6 = v5;
    v7 = tolua_tonumber(a1, 5, 0, 0);
    v8 = v7;
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setAbsRect'", 0);
    (*(void (__fastcall **)(int, float, float, float, float))(*(_DWORD *)v2 + 40))(
      v2,
      COERCE_FLOAT(LODWORD(v10)),
      COERCE_FLOAT(LODWORD(v11)),
      COERCE_FLOAT(LODWORD(v6)),
      COERCE_FLOAT(LODWORD(v8)));
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setAbsRect'.", v12);
  }
  return 0;
}


//======================================================================
// sub_1A8468
// address: 0x001A8468   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall sub_1A8468(int a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r7
  _BYTE v6[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnumber(a1, 3, 0, v6) != 0
    && tolua_isnoobj(a1, 4, v6) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    v4 = (int)tolua_tonumber(a1, 3, 0, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'resizeRect'", 0);
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v2 + 44))(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'resizeRect'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1A8528
// address: 0x001A8528   size: 0x84 (132 bytes)
//======================================================================
int __fastcall sub_1A8528(int a1)
{
  int v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Frame", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'SetSelfScale'", 0);
    (*(void (__fastcall **)(int, float))(*(_DWORD *)v2 + 48))(v2, COERCE_FLOAT(LODWORD(v4)));
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetSelfScale'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1A85C8
// address: 0x001A85C8   size: 0x84 (132 bytes)
//======================================================================
int __fastcall sub_1A85C8(int a1)
{
  int v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'SetSelfScale'", 0);
    (*(void (__fastcall **)(int, float))(*(_DWORD *)v2 + 48))(v2, COERCE_FLOAT(LODWORD(v4)));
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetSelfScale'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1A8668
// address: 0x001A8668   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall sub_1A8668(int a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r7
  _BYTE v6[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnumber(a1, 3, 0, v6) != 0
    && tolua_isnoobj(a1, 4, v6) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    v4 = (int)tolua_tonumber(a1, 3, 0, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'resizeRect'", 0);
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v2 + 44))(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'resizeRect'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1A8728
// address: 0x001A8728   size: 0xF0 (240 bytes)
//======================================================================
int __fastcall sub_1A8728(int a1)
{
  int v2; // r5
  float v3; // r0
  float v4; // r0
  float v5; // r0
  float v6; // r6
  float v7; // r0
  float v8; // r7
  float v10; // [sp+8h] [bp-1Ch]
  float v11; // [sp+Ch] [bp-18h]
  _BYTE v12[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v12) != 0
    && tolua_isnumber(a1, 2, 0, v12) != 0
    && tolua_isnumber(a1, 3, 0, v12) != 0
    && tolua_isnumber(a1, 4, 0, v12) != 0
    && tolua_isnumber(a1, 5, 0, v12) != 0
    && tolua_isnoobj(a1, 6, v12) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v10 = v3;
    v4 = tolua_tonumber(a1, 3, 0, 0);
    v11 = v4;
    v5 = tolua_tonumber(a1, 4, 0, 0);
    v6 = v5;
    v7 = tolua_tonumber(a1, 5, 0, 0);
    v8 = v7;
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setAbsRect'", 0);
    (*(void (__fastcall **)(int, float, float, float, float))(*(_DWORD *)v2 + 40))(
      v2,
      COERCE_FLOAT(LODWORD(v10)),
      COERCE_FLOAT(LODWORD(v11)),
      COERCE_FLOAT(LODWORD(v6)),
      COERCE_FLOAT(LODWORD(v8)));
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setAbsRect'.", v12);
  }
  return 0;
}


//======================================================================
// sub_1A8830
// address: 0x001A8830   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_1A8830(int a1, int a2, int a3, int a4)
{
  int v5; // r5
  float v6; // r0
  _DWORD v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_nBottom'", 0);
  if ( tolua_isnumber(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = tolua_tonumber(a1, 2, 0, 0);
  *(float *)(v5 + 12) = v6;
  return 0;
}


//======================================================================
// sub_1A8898
// address: 0x001A8898   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_1A8898(int a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_nBottom'", 0);
  tolua_pushnumber(
    a1,
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 12))),
    COERCE_UNSIGNED_INT64(*(float *)(v2 + 12)),
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 12))));
  return 1;
}


//======================================================================
// sub_1A88D0
// address: 0x001A88D0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_1A88D0(int a1, int a2, int a3, int a4)
{
  int v5; // r5
  float v6; // r0
  _DWORD v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_nTop'", 0);
  if ( tolua_isnumber(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = tolua_tonumber(a1, 2, 0, 0);
  *(float *)(v5 + 8) = v6;
  return 0;
}


//======================================================================
// sub_1A8938
// address: 0x001A8938   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_1A8938(int a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_nTop'", 0);
  tolua_pushnumber(
    a1,
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 8))),
    COERCE_UNSIGNED_INT64(*(float *)(v2 + 8)),
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 8))));
  return 1;
}


//======================================================================
// sub_1A8970
// address: 0x001A8970   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_1A8970(int a1, int a2, int a3, int a4)
{
  int v5; // r5
  float v6; // r0
  _DWORD v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_nRight'", 0);
  if ( tolua_isnumber(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = tolua_tonumber(a1, 2, 0, 0);
  *(float *)(v5 + 4) = v6;
  return 0;
}


//======================================================================
// sub_1A89D8
// address: 0x001A89D8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_1A89D8(int a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_nRight'", 0);
  tolua_pushnumber(
    a1,
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 4))),
    COERCE_UNSIGNED_INT64(*(float *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_1A8A10
// address: 0x001A8A10   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_1A8A10(int a1, int a2, int a3, int a4)
{
  float *v5; // r5
  float v6; // r0
  _DWORD v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = (float *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_nLeft'", 0);
  if ( tolua_isnumber(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = tolua_tonumber(a1, 2, 0, 0);
  *v5 = v6;
  return 0;
}


//======================================================================
// sub_1A8A78
// address: 0x001A8A78   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_1A8A78(int a1)
{
  float *v2; // r5

  v2 = (float *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_nLeft'", 0);
  tolua_pushnumber(
    a1,
    HIDWORD(COERCE_UNSIGNED_INT64(*v2)),
    COERCE_UNSIGNED_INT64(*v2),
    HIDWORD(COERCE_UNSIGNED_INT64(*v2)));
  return 1;
}


//======================================================================
// sub_1A8AAC
// address: 0x001A8AAC   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_1A8AAC(int a1)
{
  void *v1; // r0

  v1 = (void *)tolua_tousertype(a1, 1, 0);
  operator delete(v1);
  return 0;
}


//======================================================================
// sub_1A8AC0
// address: 0x001A8AC0   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_1A8AC0(int a1)
{
  int v2; // r5
  bool v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, 0) != 0;
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setCenterLine'", 0);
    *(_BYTE *)(v2 + 540) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setCenterLine'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1A8B50
// address: 0x001A8B50   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1A8B50(int a1)
{
  int v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "MultiEditBox", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setMaxWordCount'", 0);
    *(_DWORD *)(v2 + 440) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setMaxWordCount'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1A8BE8
// address: 0x001A8BE8   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1A8BE8(int a1)
{
  FrameManager *v2; // r5
  Frame *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "FrameManager", 0, v5) != 0
    && tolua_isusertype(a1, 2, "Frame", 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (FrameManager *)tolua_tousertype(a1, 1, 0);
    v3 = (Frame *)tolua_tousertype(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'frameShow'", 0);
    FrameManager::frameShow(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'frameShow'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1A8C78
// address: 0x001A8C78   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1A8C78(int a1)
{
  FrameManager *v2; // r5
  Frame *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "FrameManager", 0, v5) != 0
    && tolua_isusertype(a1, 2, "Frame", 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (FrameManager *)tolua_tousertype(a1, 1, 0);
    v3 = (Frame *)tolua_tousertype(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'frameHide'", 0);
    FrameManager::frameHide(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'frameHide'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1A8D08
// address: 0x001A8D08   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_1A8D08(int a1)
{
  int v2; // r4
  int v3; // r1

  v2 = tolua_tousertype(a1, 1, 0);
  v3 = v2 + 228;
  if ( v2 == 0 )
  {
    tolua_error(a1, "invalid 'self' in accessing variable '__FontInstance__'", 0);
    v3 = 0;
  }
  tolua_pushusertype(a1, v3, "FontInstance");
  return 1;
}


//======================================================================
// sub_1A8D44
// address: 0x001A8D44   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1A8D44(int a1)
{
  int v2; // r5
  int v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "FrameManager", 0, v5) != 0
    && tolua_isusertype(a1, 2, "Frame", 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_tousertype(a1, 2, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setCurEditBox'", 0);
    FrameManager::setCurEditBox(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setCurEditBox'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1A8DD4
// address: 0x001A8DD4   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1A8DD4(int a1)
{
  int v2; // r5
  bool v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "FrameManager", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, 0) != 0;
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'EnableAccelerator'", 0);
    FrameManager::EnableAccelerator(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'EnableAccelerator'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1A8E60
// address: 0x001A8E60   size: 0xF8 (248 bytes)
//======================================================================
int __fastcall sub_1A8E60(int a1)
{
  double v2; // r6
  double v3; // r0
  double v5; // [sp+8h] [bp-2Ch]
  char *v6; // [sp+14h] [bp-20h]
  double v7; // [sp+18h] [bp-1Ch]
  _BYTE v8[16]; // [sp+24h] [bp-10h] BYREF

  if ( tolua_isstring(a1, 1, 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, v8) != 0
    && tolua_isnumber(a1, 3, 0, v8) != 0
    && tolua_isnumber(a1, 4, 0, v8) != 0
    && tolua_isnumber(a1, 5, 0, v8) != 0
    && tolua_isnoobj(a1, 6, v8) != 0 )
  {
    v6 = (char *)tolua_tostring(a1, 1, 0);
    v2 = tolua_tonumber(a1, 2, 0, 0);
    v5 = tolua_tonumber(a1, 3, 0, 0);
    v7 = tolua_tonumber(a1, 4, 0, 0);
    v3 = tolua_tonumber(a1, 5, 0, 0);
    updateHeadBindingFrame(v6, (int)v2, (int)v5, (int)v7, (int)v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'updateHeadBindingFrame'.", v8);
  }
  return 0;
}


//======================================================================
// sub_1A8F68
// address: 0x001A8F68   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_1A8F68(int a1)
{
  double v2; // r4
  double Rand; // r0
  double v5; // [sp+0h] [bp-18h]
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isnumber(a1, 1, 0, v6) != 0 && tolua_isnumber(a1, 2, 0, v6) != 0 && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = tolua_tonumber(a1, 1, 0, 0);
    v5 = tolua_tonumber(a1, 2, 0, 0);
    Rand = (double)getRand((int)v2, (int)v5);
    tolua_pushnumber(a1, HIDWORD(Rand), LODWORD(Rand), HIDWORD(Rand));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getRand'.", v6);
    return 0;
  }
}


//======================================================================
// sub_1A9010
// address: 0x001A9010   size: 0x78 (120 bytes)
//======================================================================
int __fastcall sub_1A9010(int a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r0
  _BOOL4 v4; // r0
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "const LayoutFrame", 0, v6) != 0
    && tolua_isusertype(a1, 2, "const LayoutFrame", 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (_DWORD *)tolua_tousertype(a1, 1, 0);
    v3 = (_DWORD *)tolua_tousertype(a1, 2, 0);
    v4 = isInVisibleArea(v2, v3);
    tolua_pushboolean(a1, v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isInVisibleArea'.", v6);
    return 0;
  }
}


//======================================================================
// sub_1A9090
// address: 0x001A9090   size: 0x70 (112 bytes)
//======================================================================
int __fastcall sub_1A9090(int a1)
{
  char *v2; // r5
  const char *v3; // r0
  int v4; // r0
  _BYTE v6[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isstring(a1, 1, 0, v6) != 0 && tolua_isstring(a1, 2, 0, v6) != 0 && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (char *)tolua_tostring(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    v4 = isFiliation(v2, v3);
    tolua_pushboolean(a1, v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isFiliation'.", v6);
    return 0;
  }
}


//======================================================================
// sub_1A9104
// address: 0x001A9104   size: 0x78 (120 bytes)
//======================================================================
int __fastcall sub_1A9104(int a1)
{
  int v2; // r5
  int v3; // r0
  _BOOL4 v4; // r0
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v6) != 0
    && tolua_isusertype(a1, 2, "LayoutFrame", 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_tousertype(a1, 2, 0);
    v4 = isTwoFrameXConflict(v2, v3);
    tolua_pushboolean(a1, v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isTwoFrameXConflict'.", v6);
    return 0;
  }
}


//======================================================================
// sub_1A9184
// address: 0x001A9184   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_1A9184(int a1)
{
  _BYTE v3[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isnoobj(a1, 1, v3) != 0 )
    closePopWin();
  else
    tolua_error(a1, "#ferror in function 'closePopWin'.", v3);
  return 0;
}


//======================================================================
// sub_1A91B4
// address: 0x001A91B4   size: 0xB8 (184 bytes)
//======================================================================
int __fastcall sub_1A91B4(int a1)
{
  const char *v2; // r7
  char *v3; // r6
  Frame *v4; // r5
  int v5; // r0
  UIObject *Button; // r0
  _BYTE v8[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isstring(a1, 1, 0, v8) != 0
    && tolua_isstring(a1, 2, 1, v8) != 0
    && tolua_isusertype(a1, 3, "Frame", 1, v8) != 0
    && tolua_isboolean(a1, 4, 1, v8) != 0
    && tolua_isnoobj(a1, 5, v8) != 0 )
  {
    v2 = (const char *)tolua_tostring(a1, 1, 0);
    v3 = (char *)tolua_tostring(a1, 2, 0);
    v4 = (Frame *)tolua_tousertype(a1, 3, 0);
    v5 = tolua_toboolean(a1, 4, 0);
    Button = CreateButton(v2, v3, v4, v5 != 0);
    tolua_pushusertype(a1, Button, "Button");
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'CreateButton'.", v8);
    return 0;
  }
}


//======================================================================
// sub_1A9278
// address: 0x001A9278   size: 0xCC (204 bytes)
//======================================================================
int __fastcall sub_1A9278(int a1)
{
  double v2; // r4
  double v3; // r0
  char *v5; // [sp+4h] [bp-20h]
  double v6; // [sp+8h] [bp-1Ch]
  _BYTE v7[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isstring(a1, 1, 0, v7) != 0
    && tolua_isnumber(a1, 2, 1, v7) != 0
    && tolua_isnumber(a1, 3, 1, v7) != 0
    && tolua_isnumber(a1, 4, 1, v7) != 0
    && tolua_isnoobj(a1, 5, v7) != 0 )
  {
    v5 = (char *)tolua_tostring(a1, 1, 0);
    v2 = tolua_tonumber(a1, 2, 0, 0);
    v6 = tolua_tonumber(a1, 3, 0, 0);
    v3 = tolua_tonumber(a1, 4, 0, 1079574528);
    UIBeginDrag(v5, (int)v2, (int)v6, (int)v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'UIBeginDrag'.", v7);
  }
  return 0;
}


//======================================================================
// sub_1A9360
// address: 0x001A9360   size: 0x15E (350 bytes)
//======================================================================
int __fastcall sub_1A9360(int a1)
{
  LineFrame *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+14h] [bp-28h]
  int v7; // [sp+18h] [bp-24h]
  int v8; // [sp+1Ch] [bp-20h]
  int v9; // [sp+20h] [bp-1Ch]
  int v10; // [sp+24h] [bp-18h]
  _BYTE v11[16]; // [sp+2Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LineFrame", 0, v11) != 0
    && tolua_isnumber(a1, 2, 0, v11) != 0
    && tolua_isnumber(a1, 3, 0, v11) != 0
    && tolua_isnumber(a1, 4, 0, v11) != 0
    && tolua_isnumber(a1, 5, 0, v11) != 0
    && tolua_isnumber(a1, 6, 0, v11) != 0
    && tolua_isnumber(a1, 7, 0, v11) != 0
    && tolua_isnumber(a1, 8, 0, v11) != 0
    && tolua_isnoobj(a1, 9, v11) != 0 )
  {
    v2 = (LineFrame *)tolua_tousertype(a1, 1, 0);
    v6 = (int)tolua_tonumber(a1, 2, 0, 0);
    v7 = (int)tolua_tonumber(a1, 3, 0, 0);
    v8 = (int)tolua_tonumber(a1, 4, 0, 0);
    v9 = (int)tolua_tonumber(a1, 5, 0, 0);
    v10 = (int)tolua_tonumber(a1, 6, 0, 0);
    v3 = (int)tolua_tonumber(a1, 7, 0, 0);
    v4 = (int)tolua_tonumber(a1, 8, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'AddLine'", 0);
    LineFrame::AddLine(v2, v6, v7, v8, v9, v10, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'AddLine'.", v11);
  }
  return 0;
}


//======================================================================
// sub_1A94D8
// address: 0x001A94D8   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1A94D8(int a1)
{
  int v2; // r5
  bool v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "SlidingFrame", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, 0) != 0;
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setDealMsg'", 0);
    SlidingFrame::setDealMsg(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setDealMsg'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1A9568
// address: 0x001A9568   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1A9568(int a1)
{
  SlidingFrame *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "SlidingFrame", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (SlidingFrame *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setCurOffsety'", 0);
    SlidingFrame::setCurOffsety(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setCurOffsety'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1A9608
// address: 0x001A9608   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1A9608(int a1)
{
  SlidingFrame *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "SlidingFrame", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (SlidingFrame *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setCurOffsetX'", 0);
    SlidingFrame::setCurOffsetX(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setCurOffsetX'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1A96A8
// address: 0x001A96A8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1A96A8(int a1)
{
  int v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "SlidingFrame", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setMovestartY'", 0);
    SlidingFrame::setMovestartY(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setMovestartY'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1A9748
// address: 0x001A9748   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1A9748(int a1)
{
  int v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "SlidingFrame", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setMovestartX'", 0);
    SlidingFrame::setMovestartX(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setMovestartX'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1A97E8
// address: 0x001A97E8   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1A97E8(int a1)
{
  int v2; // r5
  bool v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "SlidingFrame", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, 0) != 0;
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setSlidingY'", 0);
    SlidingFrame::setSlidingY(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setSlidingY'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1A9874
// address: 0x001A9874   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1A9874(int a1)
{
  int v2; // r5
  bool v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "SlidingFrame", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, 0) != 0;
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setSlidingX'", 0);
    SlidingFrame::setSlidingX(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setSlidingX'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1A9900
// address: 0x001A9900   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_1A9900(int a1)
{
  SlidingFrame *v2; // r5
  int v3; // r6
  int v4; // r7
  _BYTE v6[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "SlidingFrame", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnumber(a1, 3, 0, v6) != 0
    && tolua_isnoobj(a1, 4, v6) != 0 )
  {
    v2 = (SlidingFrame *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    v4 = (int)tolua_tonumber(a1, 3, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setSlidingPlaneSize'", 0);
    SlidingFrame::setSlidingPlaneSize(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setSlidingPlaneSize'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1A99C0
// address: 0x001A99C0   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1A99C0(int a1)
{
  int v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ProgressBar", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'SetValue'", 0);
    ProgressBar::SetValue(COERCE_DOUBLE(__PAIR64__(LODWORD(v4), v2)));
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetValue'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1A9A60
// address: 0x001A9A60   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_1A9A60(int a1)
{
  IconBar *v2; // r7
  float v3; // r0
  float v4; // r4
  bool v5; // r5
  _BYTE v7[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "IconBar", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, v7) != 0
    && tolua_isboolean(a1, 3, 0, v7) != 0
    && tolua_isnoobj(a1, 4, v7) != 0 )
  {
    v2 = (IconBar *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    v5 = tolua_toboolean(a1, 3, 0) != 0;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetCurValue'", 0);
    IconBar::SetCurValue(v2, v4, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetCurValue'.", v7);
  }
  return 0;
}


//======================================================================
// sub_1A9B20
// address: 0x001A9B20   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1A9B20(int a1)
{
  IconBar *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "IconBar", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (IconBar *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetBackgroundIcon'", 0);
    IconBar::SetBackgroundIcon(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetBackgroundIcon'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1A9BC0
// address: 0x001A9BC0   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_1A9BC0(int a1)
{
  MultiEditBox *v2; // r5
  int v3; // r6
  double TextIndexFromRichCharIndex; // r0
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "MultiEditBox", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (MultiEditBox *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getTextIndexFromRichCharIndex'", 0);
    TextIndexFromRichCharIndex = (double)(int)MultiEditBox::getTextIndexFromRichCharIndex(v2, v3);
    tolua_pushnumber(
      a1,
      HIDWORD(TextIndexFromRichCharIndex),
      LODWORD(TextIndexFromRichCharIndex),
      HIDWORD(TextIndexFromRichCharIndex));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getTextIndexFromRichCharIndex'.", v6);
    return 0;
  }
}


//======================================================================
// sub_1A9C70
// address: 0x001A9C70   size: 0xB0 (176 bytes)
//======================================================================
int __fastcall sub_1A9C70(int a1)
{
  MultiEditBox *v2; // r5
  const char *v3; // r6
  int v4; // r7
  double TextEnd; // r0
  _BYTE v7[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "MultiEditBox", 0, v7) != 0
    && tolua_isstring(a1, 2, 0, v7) != 0
    && tolua_isnumber(a1, 3, 0, v7) != 0
    && tolua_isnoobj(a1, 4, v7) != 0 )
  {
    v2 = (MultiEditBox *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    v4 = (int)tolua_tonumber(a1, 3, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getTextEnd'", 0);
    TextEnd = (double)(int)MultiEditBox::getTextEnd(v2, v3, v4);
    tolua_pushnumber(a1, HIDWORD(TextEnd), LODWORD(TextEnd), HIDWORD(TextEnd));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getTextEnd'.", v7);
    return 0;
  }
}


//======================================================================
// sub_1A9D38
// address: 0x001A9D38   size: 0xB0 (176 bytes)
//======================================================================
int __fastcall sub_1A9D38(int a1)
{
  MultiEditBox *v2; // r5
  const char *v3; // r6
  int v4; // r7
  double TextBegin; // r0
  _BYTE v7[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "MultiEditBox", 0, v7) != 0
    && tolua_isstring(a1, 2, 0, v7) != 0
    && tolua_isnumber(a1, 3, 0, v7) != 0
    && tolua_isnoobj(a1, 4, v7) != 0 )
  {
    v2 = (MultiEditBox *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    v4 = (int)tolua_tonumber(a1, 3, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getTextBegin'", 0);
    TextBegin = (double)(int)MultiEditBox::getTextBegin(v2, v3, v4);
    tolua_pushnumber(a1, HIDWORD(TextBegin), LODWORD(TextBegin), HIDWORD(TextBegin));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getTextBegin'.", v7);
    return 0;
  }
}


//======================================================================
// sub_1A9E00
// address: 0x001A9E00   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1A9E00(int a1)
{
  MultiEditBox *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "MultiEditBox", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (MultiEditBox *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setSelBegin'", 0);
    MultiEditBox::setSelBegin(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setSelBegin'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1A9EA0
// address: 0x001A9EA0   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1A9EA0(int a1)
{
  MultiEditBox *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "MultiEditBox", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (MultiEditBox *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setCursorPos'", 0);
    MultiEditBox::setCursorPos(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setCursorPos'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1A9F40
// address: 0x001A9F40   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1A9F40(int a1)
{
  MultiEditBox *v2; // r5
  bool v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "MultiEditBox", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (MultiEditBox *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, 0) != 0;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'enableEdit'", 0);
    MultiEditBox::enableEdit(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'enableEdit'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1A9FCC
// address: 0x001A9FCC   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1A9FCC(int a1)
{
  MultiEditBox *v2; // r5
  bool v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "MultiEditBox", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (MultiEditBox *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, 0) != 0;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'enableIME'", 0);
    MultiEditBox::enableIME(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'enableIME'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AA058
// address: 0x001AA058   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_1AA058(int a1)
{
  MultiEditBox *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-18h]
  _BYTE v7[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "MultiEditBox", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, v7) != 0
    && tolua_isnumber(a1, 3, 0, v7) != 0
    && tolua_isnumber(a1, 4, 0, v7) != 0
    && tolua_isnoobj(a1, 5, v7) != 0 )
  {
    v2 = (MultiEditBox *)tolua_tousertype(a1, 1, 0);
    v6 = (int)tolua_tonumber(a1, 2, 0, 0);
    v3 = (int)tolua_tonumber(a1, 3, 0, 0);
    v4 = (int)tolua_tonumber(a1, 4, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetTextColor'", 0);
    MultiEditBox::SetTextColor(v2, v6, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetTextColor'.", v7);
  }
  return 0;
}


//======================================================================
// sub_1AA140
// address: 0x001AA140   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1AA140(int a1)
{
  MultiEditBox *v2; // r5
  const char *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "MultiEditBox", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (MultiEditBox *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'AddText'", 0);
    MultiEditBox::AddText(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'AddText'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AA1C8
// address: 0x001AA1C8   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1AA1C8(int a1)
{
  MultiEditBox *v2; // r5
  const char *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "MultiEditBox", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (MultiEditBox *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetText'", 0);
    MultiEditBox::SetText(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetText'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AA250
// address: 0x001AA250   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AA250(int a1)
{
  MultiEditBox *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "MultiEditBox", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (MultiEditBox *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetSliderValue'", 0);
    MultiEditBox::SetSliderValue(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetSliderValue'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AA2F0
// address: 0x001AA2F0   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_1AA2F0(int a1)
{
  DrawLineFrame *v2; // r5
  int v3; // r6
  int v4; // r7
  _BYTE v6[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "DrawLineFrame", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnumber(a1, 3, 0, v6) != 0
    && tolua_isnoobj(a1, 4, v6) != 0 )
  {
    v2 = (DrawLineFrame *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    v4 = (int)tolua_tonumber(a1, 3, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'AddPoint'", 0);
    DrawLineFrame::AddPoint(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'AddPoint'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AA3B0
// address: 0x001AA3B0   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1AA3B0(int a1)
{
  ListBox *v2; // r5
  const char *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ListBox", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (ListBox *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetFilterFunc'", 0);
    ListBox::SetFilterFunc(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetFilterFunc'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AA438
// address: 0x001AA438   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_1AA438(int a1)
{
  ListBox *v2; // r7
  int v3; // r4
  int IsGroupOpen; // r0
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ListBox", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (ListBox *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'IsGroupOpen'", 0);
    IsGroupOpen = ListBox::IsGroupOpen(v2, v3);
    tolua_pushboolean(a1, IsGroupOpen);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'IsGroupOpen'.", v6);
    return 0;
  }
}


//======================================================================
// sub_1AA4E0
// address: 0x001AA4E0   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AA4E0(int a1)
{
  ListBox *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ListBox", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (ListBox *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'ToggleGroupOpen'", 0);
    ListBox::ToggleGroupOpen(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'ToggleGroupOpen'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AA580
// address: 0x001AA580   size: 0xB4 (180 bytes)
//======================================================================
int __fastcall sub_1AA580(int a1)
{
  ListBox *v2; // r5
  int v3; // r6
  int v4; // r7
  int ItemFrame; // r0
  _BYTE v7[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ListBox", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, v7) != 0
    && tolua_isnumber(a1, 3, 0, v7) != 0
    && tolua_isnoobj(a1, 4, v7) != 0 )
  {
    v2 = (ListBox *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    v4 = (int)tolua_tonumber(a1, 3, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetItemFrame'", 0);
    ItemFrame = ListBox::GetItemFrame(v2, v3, v4);
    tolua_pushusertype(a1, ItemFrame, "Frame");
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetItemFrame'.", v7);
    return 0;
  }
}


//======================================================================
// sub_1AA650
// address: 0x001AA650   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AA650(int a1)
{
  ListBox *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ListBox", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (ListBox *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetViewPos'", 0);
    ListBox::SetViewPos(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetViewPos'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AA6F0
// address: 0x001AA6F0   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_1AA6F0(int a1)
{
  ListBox *v2; // r5
  int v3; // r6
  int v4; // r7
  _BYTE v6[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ListBox", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnumber(a1, 3, 0, v6) != 0
    && tolua_isnoobj(a1, 4, v6) != 0 )
  {
    v2 = (ListBox *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    v4 = (int)tolua_tonumber(a1, 3, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'Resize'", 0);
    ListBox::Resize(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'Resize'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AA7B0
// address: 0x001AA7B0   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AA7B0(int a1)
{
  ListBox *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ListBox", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (ListBox *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetItemHeight'", 0);
    ListBox::SetItemHeight(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetItemHeight'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AA850
// address: 0x001AA850   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1AA850(int a1)
{
  ListBox *v2; // r5
  const char *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ListBox", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (ListBox *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetItemTemplate'", 0);
    ListBox::SetItemTemplate(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetItemTemplate'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AA8D8
// address: 0x001AA8D8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AA8D8(int a1)
{
  ListBox *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ListBox", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (ListBox *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetGroupHeaderHeight'", 0);
    ListBox::SetGroupHeaderHeight(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetGroupHeaderHeight'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AA978
// address: 0x001AA978   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1AA978(int a1)
{
  ListBox *v2; // r5
  Frame *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ListBox", 0, v5) != 0
    && tolua_isusertype(a1, 2, "Frame", 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (ListBox *)tolua_tousertype(a1, 1, 0);
    v3 = (Frame *)tolua_tousertype(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'AddGroup'", 0);
    ListBox::AddGroup(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'AddGroup'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AAA08
// address: 0x001AAA08   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AAA08(int a1)
{
  int v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Slider", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'SetValueStep'", 0);
    Slider::SetValueStep(v2, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetValueStep'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AAAA8
// address: 0x001AAAA8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AAAA8(int a1)
{
  Slider *v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Slider", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (Slider *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetMaxValue'", 0);
    Slider::SetMaxValue(v2, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetMaxValue'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AAB48
// address: 0x001AAB48   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AAB48(int a1)
{
  Slider *v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Slider", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (Slider *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetMinValue'", 0);
    Slider::SetMinValue(v2, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetMinValue'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AABE8
// address: 0x001AABE8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AABE8(int a1)
{
  Slider *v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Slider", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (Slider *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetValue'", 0);
    Slider::SetValue(v2, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetValue'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AAC88
// address: 0x001AAC88   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AAC88(int a1)
{
  ScrollFrame *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ScrollFrame", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (ScrollFrame *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetHorizonalScrollRange'", 0);
    ScrollFrame::SetHorizonalScrollRange(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetHorizonalScrollRange'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AAD28
// address: 0x001AAD28   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AAD28(int a1)
{
  ScrollFrame *v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ScrollFrame", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (ScrollFrame *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'IncreaseHorizonalScroll'", 0);
    ScrollFrame::IncreaseHorizonalScroll(v2, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'IncreaseHorizonalScroll'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AADC8
// address: 0x001AADC8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AADC8(int a1)
{
  ScrollFrame *v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ScrollFrame", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (ScrollFrame *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetHorizonalScroll'", 0);
    ScrollFrame::SetHorizonalScroll(v2, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetHorizonalScroll'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AAE68
// address: 0x001AAE68   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AAE68(int a1)
{
  ScrollFrame *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ScrollFrame", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (ScrollFrame *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetVerticalScrollRange'", 0);
    ScrollFrame::SetVerticalScrollRange(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetVerticalScrollRange'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AAF08
// address: 0x001AAF08   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AAF08(int a1)
{
  ScrollFrame *v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ScrollFrame", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (ScrollFrame *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'IncreaseVerticalScroll'", 0);
    ScrollFrame::IncreaseVerticalScroll(v2, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'IncreaseVerticalScroll'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AAFA8
// address: 0x001AAFA8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AAFA8(int a1)
{
  ScrollFrame *v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ScrollFrame", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (ScrollFrame *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetVerticalScroll'", 0);
    ScrollFrame::SetVerticalScroll(v2, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetVerticalScroll'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AB048
// address: 0x001AB048   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_1AB048(int a1)
{
  ScrollFrame *v2; // r5
  float v3; // r0
  float v4; // r6
  float v5; // r0
  float v6; // r7
  _BYTE v8[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ScrollFrame", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, v8) != 0
    && tolua_isnumber(a1, 3, 0, v8) != 0
    && tolua_isnoobj(a1, 4, v8) != 0 )
  {
    v2 = (ScrollFrame *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    v5 = tolua_tonumber(a1, 3, 0, 0);
    v6 = v5;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'IncreaseScrollChildRect'", 0);
    ScrollFrame::IncreaseScrollChildRect(v2, v4, v6);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'IncreaseScrollChildRect'.", v8);
  }
  return 0;
}


//======================================================================
// sub_1AB108
// address: 0x001AB108   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_1AB108(int a1)
{
  ScrollFrame *v2; // r5
  float v3; // r0
  float v4; // r6
  float v5; // r0
  float v6; // r7
  _BYTE v8[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ScrollFrame", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, v8) != 0
    && tolua_isnumber(a1, 3, 0, v8) != 0
    && tolua_isnoobj(a1, 4, v8) != 0 )
  {
    v2 = (ScrollFrame *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    v5 = tolua_tonumber(a1, 3, 0, 0);
    v6 = v5;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetScrollChildRect'", 0);
    ScrollFrame::SetScrollChildRect(v2, v4, v6);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetScrollChildRect'.", v8);
  }
  return 0;
}


//======================================================================
// sub_1AB1C8
// address: 0x001AB1C8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AB1C8(int a1)
{
  ScrollFrame *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ScrollFrame", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (ScrollFrame *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetValueStep'", 0);
    ScrollFrame::SetValueStep(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetValueStep'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AB268
// address: 0x001AB268   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_1AB268(int a1)
{
  RichText *v2; // r5
  const char *v3; // r6
  double TextExtentHeight; // r0
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v6) != 0
    && tolua_isstring(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetTextExtentHeight'", 0);
    TextExtentHeight = (double)(int)RichText::GetTextExtentHeight(v2, v3);
    tolua_pushnumber(a1, HIDWORD(TextExtentHeight), LODWORD(TextExtentHeight), HIDWORD(TextExtentHeight));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetTextExtentHeight'.", v6);
    return 0;
  }
}


//======================================================================
// sub_1AB300
// address: 0x001AB300   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_1AB300(int a1)
{
  RichText *v2; // r5
  const char *v3; // r6
  double TextExtentWidth; // r0
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v6) != 0
    && tolua_isstring(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetTextExtentWidth'", 0);
    TextExtentWidth = (double)(int)RichText::GetTextExtentWidth(v2, v3);
    tolua_pushnumber(a1, HIDWORD(TextExtentWidth), LODWORD(TextExtentWidth), HIDWORD(TextExtentWidth));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetTextExtentWidth'.", v6);
    return 0;
  }
}


//======================================================================
// sub_1AB398
// address: 0x001AB398   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_1AB398(int a1)
{
  RichText *v2; // r5
  int v3; // r6
  double LineHeight; // r0
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetLineHeight'", 0);
    LineHeight = (double)(int)RichText::GetLineHeight(v2, v3);
    tolua_pushnumber(a1, HIDWORD(LineHeight), LODWORD(LineHeight), HIDWORD(LineHeight));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetLineHeight'.", v6);
    return 0;
  }
}


//======================================================================
// sub_1AB448
// address: 0x001AB448   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_1AB448(int a1)
{
  RichText *v2; // r5
  int v3; // r6
  double LineWidth; // r0
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetLineWidth'", 0);
    LineWidth = (double)(int)RichText::GetLineWidth(v2, v3);
    tolua_pushnumber(a1, HIDWORD(LineWidth), LODWORD(LineWidth), HIDWORD(LineWidth));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetLineWidth'.", v6);
    return 0;
  }
}


//======================================================================
// sub_1AB4F8
// address: 0x001AB4F8   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_1AB4F8(int a1)
{
  RichText *v2; // r5
  int v3; // r6
  double LineWidth; // r0
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getLineWidth'", 0);
    LineWidth = (double)(int)RichText::getLineWidth(v2, v3);
    tolua_pushnumber(a1, HIDWORD(LineWidth), LODWORD(LineWidth), HIDWORD(LineWidth));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getLineWidth'.", v6);
    return 0;
  }
}


//======================================================================
// sub_1AB5A8
// address: 0x001AB5A8   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_1AB5A8(int a1)
{
  RichText *v2; // r5
  int v3; // r6
  double LineRealWidth; // r0
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getLineRealWidth'", 0);
    LineRealWidth = (double)(int)RichText::getLineRealWidth(v2, v3);
    tolua_pushnumber(a1, HIDWORD(LineRealWidth), LODWORD(LineRealWidth), HIDWORD(LineRealWidth));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getLineRealWidth'.", v6);
    return 0;
  }
}


//======================================================================
// sub_1AB658
// address: 0x001AB658   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AB658(int a1)
{
  RichText *v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetDispPosX'", 0);
    RichText::SetDispPosX(v2, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetDispPosX'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AB6F8
// address: 0x001AB6F8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AB6F8(int a1)
{
  RichText *v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'IncrDispPos'", 0);
    RichText::IncrDispPos(v2, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'IncrDispPos'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AB798
// address: 0x001AB798   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AB798(int a1)
{
  RichText *v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetDispPos'", 0);
    RichText::SetDispPos(v2, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetDispPos'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AB838
// address: 0x001AB838   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AB838(int a1)
{
  RichText *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetFontType'", 0);
    RichText::SetFontType(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetFontType'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AB8D8
// address: 0x001AB8D8   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_1AB8D8(int a1)
{
  RichText *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-18h]
  _BYTE v7[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, v7) != 0
    && tolua_isnumber(a1, 3, 0, v7) != 0
    && tolua_isnumber(a1, 4, 0, v7) != 0
    && tolua_isnoobj(a1, 5, v7) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v6 = (int)tolua_tonumber(a1, 2, 0, 0);
    v3 = (int)tolua_tonumber(a1, 3, 0, 0);
    v4 = (int)tolua_tonumber(a1, 4, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetShadowColor'", 0);
    RichText::SetShadowColor(v2, v6, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetShadowColor'.", v7);
  }
  return 0;
}


//======================================================================
// sub_1AB9C0
// address: 0x001AB9C0   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_1AB9C0(int a1)
{
  RichText *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-18h]
  _BYTE v7[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, v7) != 0
    && tolua_isnumber(a1, 3, 0, v7) != 0
    && tolua_isnumber(a1, 4, 0, v7) != 0
    && tolua_isnoobj(a1, 5, v7) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v6 = (int)tolua_tonumber(a1, 2, 0, 0);
    v3 = (int)tolua_tonumber(a1, 3, 0, 0);
    v4 = (int)tolua_tonumber(a1, 4, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetLinkTextColor'", 0);
    RichText::SetLinkTextColor(v2, v6, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetLinkTextColor'.", v7);
  }
  return 0;
}


//======================================================================
// sub_1ABAA8
// address: 0x001ABAA8   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1ABAA8(int a1)
{
  RichText *v2; // r5
  bool v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, 0) != 0;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetAutoExtend'", 0);
    RichText::SetAutoExtend(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetAutoExtend'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1ABB38
// address: 0x001ABB38   size: 0xE8 (232 bytes)
//======================================================================
int __fastcall sub_1ABB38(int a1)
{
  RichText *v2; // r5
  int v3; // r6
  int v4; // r7
  char *v6; // [sp+8h] [bp-1Ch]
  int v7; // [sp+Ch] [bp-18h]
  _BYTE v8[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v8) != 0
    && tolua_isstring(a1, 2, 0, v8) != 0
    && tolua_isnumber(a1, 3, 0, v8) != 0
    && tolua_isnumber(a1, 4, 0, v8) != 0
    && tolua_isnumber(a1, 5, 0, v8) != 0
    && tolua_isnoobj(a1, 6, v8) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v6 = (char *)tolua_tostring(a1, 2, 0);
    v7 = (int)tolua_tonumber(a1, 3, 0, 0);
    v3 = (int)tolua_tonumber(a1, 4, 0, 0);
    v4 = (int)tolua_tonumber(a1, 5, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetText'", 0);
    RichText::SetText(v2, v6, v7, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetText'.", v8);
  }
  return 0;
}


//======================================================================
// sub_1ABC38
// address: 0x001ABC38   size: 0xE8 (232 bytes)
//======================================================================
int __fastcall sub_1ABC38(int a1)
{
  RichText *v2; // r5
  int v3; // r6
  int v4; // r7
  char *v6; // [sp+8h] [bp-1Ch]
  int v7; // [sp+Ch] [bp-18h]
  _BYTE v8[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v8) != 0
    && tolua_isstring(a1, 2, 0, v8) != 0
    && tolua_isnumber(a1, 3, 0, v8) != 0
    && tolua_isnumber(a1, 4, 0, v8) != 0
    && tolua_isnumber(a1, 5, 0, v8) != 0
    && tolua_isnoobj(a1, 6, v8) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v6 = (char *)tolua_tostring(a1, 2, 0);
    v7 = (int)tolua_tonumber(a1, 3, 0, 0);
    v3 = (int)tolua_tonumber(a1, 4, 0, 0);
    v4 = (int)tolua_tonumber(a1, 5, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'AddText'", 0);
    RichText::AddText(v2, v6, v7, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'AddText'.", v8);
  }
  return 0;
}


//======================================================================
// sub_1ABD38
// address: 0x001ABD38   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_1ABD38(int a1)
{
  RichText *v2; // r5
  int v3; // r6
  int v4; // r7
  _BYTE v6[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnumber(a1, 3, 0, v6) != 0
    && tolua_isnoobj(a1, 4, v6) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    v4 = (int)tolua_tonumber(a1, 3, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'resizeText'", 0);
    RichText::resizeText(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'resizeText'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1ABDF8
// address: 0x001ABDF8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1ABDF8(int a1)
{
  RichText *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'resizeRichHeight'", 0);
    RichText::resizeRichHeight(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'resizeRichHeight'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1ABE98
// address: 0x001ABE98   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1ABE98(int a1)
{
  RichText *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'resizeRichWidth'", 0);
    RichText::resizeRichWidth(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'resizeRichWidth'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1ABF38
// address: 0x001ABF38   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_1ABF38(int a1)
{
  RichText *v2; // r5
  float v3; // r0
  float v4; // r6
  float v5; // r0
  float v6; // r7
  _BYTE v8[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, v8) != 0
    && tolua_isnumber(a1, 3, 0, v8) != 0
    && tolua_isnoobj(a1, 4, v8) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    v5 = tolua_tonumber(a1, 3, 0, 0);
    v6 = v5;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetFaceTexRelUV'", 0);
    RichText::SetFaceTexRelUV(v2, v4, v6);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetFaceTexRelUV'.", v8);
  }
  return 0;
}


//======================================================================
// sub_1ABFF8
// address: 0x001ABFF8   size: 0xEE (238 bytes)
//======================================================================
int __fastcall sub_1ABFF8(int a1)
{
  RichText *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+8h] [bp-1Ch]
  int v7; // [sp+Ch] [bp-18h]
  _BYTE v8[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, v8) != 0
    && tolua_isnumber(a1, 3, 0, v8) != 0
    && tolua_isnumber(a1, 4, 0, v8) != 0
    && tolua_isnumber(a1, 5, 0, v8) != 0
    && tolua_isnoobj(a1, 6, v8) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v6 = (int)tolua_tonumber(a1, 2, 0, 0);
    v7 = (int)tolua_tonumber(a1, 3, 0, 0);
    v3 = (int)tolua_tonumber(a1, 4, 0, 0);
    v4 = (int)tolua_tonumber(a1, 5, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetFaceTexUV'", 0);
    RichText::SetFaceTexUV(v2, v6, v7, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetFaceTexUV'.", v8);
  }
  return 0;
}


//======================================================================
// sub_1AC100
// address: 0x001AC100   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1AC100(int a1)
{
  RichText *v2; // r5
  const char *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetFaceTexture'", 0);
    RichText::SetFaceTexture(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetFaceTexture'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AC188
// address: 0x001AC188   size: 0x8A (138 bytes)
//======================================================================
int __fastcall sub_1AC188(int a1)
{
  RichText *v2; // r5
  const char *v3; // r6
  int LinkTextRect; // r0
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v6) != 0
    && tolua_isstring(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getLinkTextRect'", 0);
    LinkTextRect = RichText::getLinkTextRect(v2, v3);
    tolua_pushusertype(a1, LinkTextRect, "tagRect_ToLua");
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getLinkTextRect'.", v6);
    return 0;
  }
}


//======================================================================
// sub_1AC228
// address: 0x001AC228   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_1AC228(int a1)
{
  RichText *v2; // r5
  float v3; // r0
  float v4; // r6
  float v5; // r0
  float v6; // r7
  _BYTE v8[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, v8) != 0
    && tolua_isnumber(a1, 3, 0, v8) != 0
    && tolua_isnoobj(a1, 4, v8) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    v5 = tolua_tonumber(a1, 3, 0, 0);
    v6 = v5;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setTwoFaceInterval'", 0);
    RichText::setTwoFaceInterval(v2, v4, v6);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setTwoFaceInterval'.", v8);
  }
  return 0;
}


//======================================================================
// sub_1AC2E8
// address: 0x001AC2E8   size: 0x9A (154 bytes)
//======================================================================
int __fastcall sub_1AC2E8(int a1)
{
  RichText *v2; // r5
  const char *v3; // r6
  const char *v4; // r7
  _BYTE v6[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v6) != 0
    && tolua_isstring(a1, 2, 0, v6) != 0
    && tolua_isstring(a1, 3, 0, v6) != 0
    && tolua_isnoobj(a1, 4, v6) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    v4 = (const char *)tolua_tostring(a1, 3, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'ReplacePartialText'", 0);
    RichText::ReplacePartialText(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'ReplacePartialText'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AC390
// address: 0x001AC390   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1AC390(int a1)
{
  EditBox *v2; // r5
  const char *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (EditBox *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetDefaultText'", 0);
    EditBox::SetDefaultText(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetDefaultText'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AC418
// address: 0x001AC418   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AC418(int a1)
{
  EditBox *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (EditBox *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setSelBegin'", 0);
    EditBox::setSelBegin(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setSelBegin'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AC4B8
// address: 0x001AC4B8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AC4B8(int a1)
{
  EditBox *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (EditBox *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setCursorPos'", 0);
    EditBox::setCursorPos(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setCursorPos'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AC558
// address: 0x001AC558   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AC558(int a1)
{
  EditBox *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (EditBox *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setMaxChar'", 0);
    EditBox::setMaxChar(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setMaxChar'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AC5F8
// address: 0x001AC5F8   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_1AC5F8(int a1)
{
  EditBox *v2; // r5
  const char *v3; // r6
  double TextExtentWidth; // r0
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v6) != 0
    && tolua_isstring(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (EditBox *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetTextExtentWidth'", 0);
    TextExtentWidth = (double)(int)EditBox::GetTextExtentWidth(v2, v3);
    tolua_pushnumber(a1, HIDWORD(TextExtentWidth), LODWORD(TextExtentWidth), HIDWORD(TextExtentWidth));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetTextExtentWidth'.", v6);
    return 0;
  }
}


//======================================================================
// sub_1AC690
// address: 0x001AC690   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1AC690(int a1)
{
  EditBox *v2; // r5
  bool v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (EditBox *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, 0) != 0;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'enableEdit'", 0);
    EditBox::enableEdit(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'enableEdit'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AC71C
// address: 0x001AC71C   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1AC71C(int a1)
{
  EditBox *v2; // r5
  const char *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (EditBox *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetPassword'", 0);
    EditBox::SetPassword(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetPassword'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AC7A4
// address: 0x001AC7A4   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1AC7A4(int a1)
{
  EditBox *v2; // r5
  bool v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (EditBox *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, 0) != 0;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'enableIME'", 0);
    EditBox::enableIME(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'enableIME'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AC830
// address: 0x001AC830   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1AC830(int a1)
{
  EditBox *v2; // r5
  const char *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (EditBox *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'AddStringToHistory'", 0);
    EditBox::AddStringToHistory(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'AddStringToHistory'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AC8B8
// address: 0x001AC8B8   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_1AC8B8(int a1)
{
  EditBox *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-18h]
  _BYTE v7[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, v7) != 0
    && tolua_isnumber(a1, 3, 0, v7) != 0
    && tolua_isnumber(a1, 4, 0, v7) != 0
    && tolua_isnoobj(a1, 5, v7) != 0 )
  {
    v2 = (EditBox *)tolua_tousertype(a1, 1, 0);
    v6 = (int)tolua_tonumber(a1, 2, 0, 0);
    v3 = (int)tolua_tonumber(a1, 3, 0, 0);
    v4 = (int)tolua_tonumber(a1, 4, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetCursorColor'", 0);
    EditBox::SetCursorColor(v2, v6, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetCursorColor'.", v7);
  }
  return 0;
}


//======================================================================
// sub_1AC9A0
// address: 0x001AC9A0   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_1AC9A0(int a1)
{
  EditBox *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-18h]
  _BYTE v7[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, v7) != 0
    && tolua_isnumber(a1, 3, 0, v7) != 0
    && tolua_isnumber(a1, 4, 0, v7) != 0
    && tolua_isnoobj(a1, 5, v7) != 0 )
  {
    v2 = (EditBox *)tolua_tousertype(a1, 1, 0);
    v6 = (int)tolua_tonumber(a1, 2, 0, 0);
    v3 = (int)tolua_tonumber(a1, 3, 0, 0);
    v4 = (int)tolua_tonumber(a1, 4, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetTextColor'", 0);
    EditBox::SetTextColor(v2, v6, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetTextColor'.", v7);
  }
  return 0;
}


//======================================================================
// sub_1ACA88
// address: 0x001ACA88   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1ACA88(int a1)
{
  EditBox *v2; // r5
  const char *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (EditBox *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'AddText'", 0);
    EditBox::AddText(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'AddText'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1ACB10
// address: 0x001ACB10   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1ACB10(int a1)
{
  EditBox *v2; // r5
  const char *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (EditBox *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetText'", 0);
    EditBox::SetText(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetText'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1ACB98
// address: 0x001ACB98   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1ACB98(int a1)
{
  EditBox *v2; // r5
  const char *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (EditBox *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'ReplaceSelectText'", 0);
    EditBox::ReplaceSelectText(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'ReplaceSelectText'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1ACC20
// address: 0x001ACC20   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1ACC20(int a1)
{
  Button *v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (Button *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetAngle'", 0);
    Button::SetAngle(v2, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetAngle'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1ACCC0
// address: 0x001ACCC0   size: 0xEE (238 bytes)
//======================================================================
int __fastcall sub_1ACCC0(int a1)
{
  Button *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+8h] [bp-1Ch]
  int v7; // [sp+Ch] [bp-18h]
  _BYTE v8[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, v8) != 0
    && tolua_isnumber(a1, 3, 0, v8) != 0
    && tolua_isnumber(a1, 4, 0, v8) != 0
    && tolua_isnumber(a1, 5, 0, v8) != 0
    && tolua_isnoobj(a1, 6, v8) != 0 )
  {
    v2 = (Button *)tolua_tousertype(a1, 1, 0);
    v6 = (int)tolua_tonumber(a1, 2, 0, 0);
    v7 = (int)tolua_tonumber(a1, 3, 0, 0);
    v3 = (int)tolua_tonumber(a1, 4, 0, 0);
    v4 = (int)tolua_tonumber(a1, 5, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetCooldownTextureRect'", 0);
    Button::SetCooldownTextureRect(v2, v6, v7, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetCooldownTextureRect'.", v8);
  }
  return 0;
}


//======================================================================
// sub_1ACDC8
// address: 0x001ACDC8   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1ACDC8(int a1)
{
  Button *v2; // r5
  Button *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v5) != 0
    && tolua_isusertype(a1, 2, "Button", 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (Button *)tolua_tousertype(a1, 1, 0);
    v3 = (Button *)tolua_tousertype(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'CopyCooldownMembers'", 0);
    Button::CopyCooldownMembers(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'CopyCooldownMembers'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1ACE54
// address: 0x001ACE54   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1ACE54(int a1)
{
  Button *v2; // r5
  Button *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v5) != 0
    && tolua_isusertype(a1, 2, "Button", 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (Button *)tolua_tousertype(a1, 1, 0);
    v3 = (Button *)tolua_tousertype(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SwapCooldownMembers'", 0);
    Button::SwapCooldownMembers(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SwapCooldownMembers'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1ACEE0
// address: 0x001ACEE0   size: 0x122 (290 bytes)
//======================================================================
int __fastcall sub_1ACEE0(int a1)
{
  Button *v3; // r5
  int v4; // r6
  int v5; // r7
  double v6; // r0
  int v7; // [sp+Ch] [bp-20h]
  int v8; // [sp+10h] [bp-1Ch]
  int v9; // [sp+14h] [bp-18h]
  _BYTE v10[16]; // [sp+1Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v10) != 0
    && tolua_isnumber(a1, 2, 0, v10) != 0
    && tolua_isnumber(a1, 3, 0, v10) != 0
    && tolua_isnumber(a1, 4, 0, v10) != 0
    && tolua_isnumber(a1, 5, 0, v10) != 0
    && tolua_isnumber(a1, 6, 0, v10) != 0
    && tolua_isnoobj(a1, 7, v10) != 0 )
  {
    v3 = (Button *)tolua_tousertype(a1, 1, 0);
    v7 = (int)tolua_tonumber(a1, 2, 0, 0);
    v8 = (int)tolua_tonumber(a1, 3, 0, 0);
    v9 = (int)tolua_tonumber(a1, 4, 0, 0);
    v4 = (int)tolua_tonumber(a1, 5, 0, 0);
    v5 = (int)tolua_tonumber(a1, 6, 0, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'OnMouseUp'", 0);
    v6 = (double)(int)Button::OnMouseUp(v3, v7, v8, v9, v4, v5);
    tolua_pushnumber(a1, HIDWORD(v6), LODWORD(v6), HIDWORD(v6));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'OnMouseUp'.", v10);
    return 0;
  }
}


//======================================================================
// sub_1AD020
// address: 0x001AD020   size: 0x122 (290 bytes)
//======================================================================
int __fastcall sub_1AD020(int a1)
{
  Button *v3; // r5
  int v4; // r6
  int v5; // r7
  double v6; // r0
  int v7; // [sp+Ch] [bp-20h]
  int v8; // [sp+10h] [bp-1Ch]
  int v9; // [sp+14h] [bp-18h]
  _BYTE v10[16]; // [sp+1Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v10) != 0
    && tolua_isnumber(a1, 2, 0, v10) != 0
    && tolua_isnumber(a1, 3, 0, v10) != 0
    && tolua_isnumber(a1, 4, 0, v10) != 0
    && tolua_isnumber(a1, 5, 0, v10) != 0
    && tolua_isnumber(a1, 6, 0, v10) != 0
    && tolua_isnoobj(a1, 7, v10) != 0 )
  {
    v3 = (Button *)tolua_tousertype(a1, 1, 0);
    v7 = (int)tolua_tonumber(a1, 2, 0, 0);
    v8 = (int)tolua_tonumber(a1, 3, 0, 0);
    v9 = (int)tolua_tonumber(a1, 4, 0, 0);
    v4 = (int)tolua_tonumber(a1, 5, 0, 0);
    v5 = (int)tolua_tonumber(a1, 6, 0, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'OnMouseDown'", 0);
    v6 = (double)(int)Button::OnMouseDown(v3, v7, v8, v9, v4, v5);
    tolua_pushnumber(a1, HIDWORD(v6), LODWORD(v6), HIDWORD(v6));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'OnMouseDown'.", v10);
    return 0;
  }
}


//======================================================================
// sub_1AD160
// address: 0x001AD160   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1AD160(int a1)
{
  Button *v2; // r5
  bool v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (Button *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, 0) != 0;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetChecked'", 0);
    Button::SetChecked(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetChecked'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AD1F0
// address: 0x001AD1F0   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_1AD1F0(int a1)
{
  Button *v2; // r5
  float v3; // r0
  float v4; // r6
  float v5; // r0
  float v6; // r7
  _BYTE v8[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, v8) != 0
    && tolua_isnumber(a1, 3, 0, v8) != 0
    && tolua_isnoobj(a1, 4, v8) != 0 )
  {
    v2 = (Button *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    v5 = tolua_tonumber(a1, 3, 0, 0);
    v6 = v5;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetIntonateTimer'", 0);
    Button::SetIntonateTimer(v2, v4, v6);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetIntonateTimer'.", v8);
  }
  return 0;
}


//======================================================================
// sub_1AD2B0
// address: 0x001AD2B0   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_1AD2B0(int a1)
{
  Button *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-18h]
  _BYTE v7[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, v7) != 0
    && tolua_isnumber(a1, 3, 0, v7) != 0
    && tolua_isnumber(a1, 4, 0, v7) != 0
    && tolua_isnoobj(a1, 5, v7) != 0 )
  {
    v2 = (Button *)tolua_tousertype(a1, 1, 0);
    v6 = (int)tolua_tonumber(a1, 2, 0, 0);
    v3 = (int)tolua_tonumber(a1, 3, 0, 0);
    v4 = (int)tolua_tonumber(a1, 4, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetTextColor'", 0);
    Button::SetTextColor(v2, v6, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetTextColor'.", v7);
  }
  return 0;
}


//======================================================================
// sub_1AD398
// address: 0x001AD398   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1AD398(int a1)
{
  Button *v2; // r5
  const char *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (Button *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetText'", 0);
    Button::SetText(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetText'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AD420
// address: 0x001AD420   size: 0xEC (236 bytes)
//======================================================================
int __fastcall sub_1AD420(int a1)
{
  Button *v2; // r5
  float v3; // r0
  float v4; // r0
  float v5; // r6
  bool v6; // r7
  float v8; // [sp+8h] [bp-1Ch]
  bool v9; // [sp+Ch] [bp-18h]
  _BYTE v10[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v10) != 0
    && tolua_isnumber(a1, 2, 0, v10) != 0
    && tolua_isnumber(a1, 3, 0, v10) != 0
    && tolua_isboolean(a1, 4, 0, v10) != 0
    && tolua_isboolean(a1, 5, 1, v10) != 0
    && tolua_isnoobj(a1, 6, v10) != 0 )
  {
    v2 = (Button *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v8 = v3;
    v4 = tolua_tonumber(a1, 3, 0, 0);
    v5 = v4;
    v9 = tolua_toboolean(a1, 4, 0) != 0;
    v6 = tolua_toboolean(a1, 5, 0) != 0;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetCooldownTimer'", 0);
    Button::SetCooldownTimer(v2, v8, v5, v9, v6);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetCooldownTimer'.", v10);
  }
  return 0;
}


//======================================================================
// sub_1AD528
// address: 0x001AD528   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AD528(int a1)
{
  Frame *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Frame", 0, v5) != 0
    && tolua_isnumber(a1, 2, 1, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (Frame *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 1072693248);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'AddLevelRecursive'", 0);
    Frame::AddLevelRecursive(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'AddLevelRecursive'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AD5C8
// address: 0x001AD5C8   size: 0x112 (274 bytes)
//======================================================================
int __fastcall sub_1AD5C8(int a1)
{
  Frame *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-20h]
  int v7; // [sp+10h] [bp-1Ch]
  int v8; // [sp+14h] [bp-18h]
  _BYTE v9[16]; // [sp+1Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Frame", 0, v9) != 0
    && tolua_isnumber(a1, 2, 0, v9) != 0
    && tolua_isnumber(a1, 3, 0, v9) != 0
    && tolua_isnumber(a1, 4, 0, v9) != 0
    && tolua_isnumber(a1, 5, 0, v9) != 0
    && tolua_isnumber(a1, 6, 0, v9) != 0
    && tolua_isnoobj(a1, 7, v9) != 0 )
  {
    v2 = (Frame *)tolua_tousertype(a1, 1, 0);
    v6 = (int)tolua_tonumber(a1, 2, 0, 0);
    v7 = (int)tolua_tonumber(a1, 3, 0, 0);
    v8 = (int)tolua_tonumber(a1, 4, 0, 0);
    v3 = (int)tolua_tonumber(a1, 5, 0, 0);
    v4 = (int)tolua_tonumber(a1, 6, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetBackDropAttr'", 0);
    Frame::SetBackDropAttr(v2, v6, v7, v8, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetBackDropAttr'.", v9);
  }
  return 0;
}


//======================================================================
// sub_1AD6F8
// address: 0x001AD6F8   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1AD6F8(int a1)
{
  Frame *v2; // r5
  const char *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Frame", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (Frame *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetBackDropEdgeTex'", 0);
    Frame::SetBackDropEdgeTex(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetBackDropEdgeTex'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AD780
// address: 0x001AD780   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1AD780(int a1)
{
  Frame *v2; // r5
  const char *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Frame", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (Frame *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetBackDropBorderTex'", 0);
    Frame::SetBackDropBorderTex(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetBackDropBorderTex'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AD808
// address: 0x001AD808   size: 0xE8 (232 bytes)
//======================================================================
int __fastcall sub_1AD808(int a1)
{
  Frame *v2; // r5
  float v3; // r0
  int v4; // r6
  int v5; // r7
  char *v7; // [sp+8h] [bp-1Ch]
  float v8; // [sp+Ch] [bp-18h]
  _BYTE v9[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Frame", 0, v9) != 0
    && tolua_isstring(a1, 2, 0, v9) != 0
    && tolua_isnumber(a1, 3, 0, v9) != 0
    && tolua_isnumber(a1, 4, 0, v9) != 0
    && tolua_isnumber(a1, 5, 0, v9) != 0
    && tolua_isnoobj(a1, 6, v9) != 0 )
  {
    v2 = (Frame *)tolua_tousertype(a1, 1, 0);
    v7 = (char *)tolua_tostring(a1, 2, 0);
    v3 = tolua_tonumber(a1, 3, 0, 0);
    v8 = v3;
    v4 = (int)tolua_tonumber(a1, 4, 0, 0);
    v5 = (int)tolua_tonumber(a1, 5, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'MoveFrame'", 0);
    Frame::MoveFrame(v2, v7, v8, v4, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'MoveFrame'.", v9);
  }
  return 0;
}


//======================================================================
// sub_1AD908
// address: 0x001AD908   size: 0xEE (238 bytes)
//======================================================================
int __fastcall sub_1AD908(int a1)
{
  Frame *v2; // r5
  unsigned int v3; // r6
  unsigned int v4; // r7
  unsigned int v6; // [sp+8h] [bp-1Ch]
  unsigned int v7; // [sp+Ch] [bp-18h]
  _BYTE v8[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Frame", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, v8) != 0
    && tolua_isnumber(a1, 3, 0, v8) != 0
    && tolua_isnumber(a1, 4, 0, v8) != 0
    && tolua_isnumber(a1, 5, 1, v8) != 0
    && tolua_isnoobj(a1, 6, v8) != 0 )
  {
    v2 = (Frame *)tolua_tousertype(a1, 1, 0);
    v6 = (unsigned int)tolua_tonumber(a1, 2, 0, 0);
    v7 = (unsigned int)tolua_tonumber(a1, 3, 0, 0);
    v3 = (unsigned int)tolua_tonumber(a1, 4, 0, 0);
    v4 = (unsigned int)tolua_tonumber(a1, 5, 0, 1081073664);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetBackDropColor'", 0);
    Frame::SetBackDropColor(v2, v6, v7, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetBackDropColor'.", v8);
  }
  return 0;
}


//======================================================================
// sub_1ADA18
// address: 0x001ADA18   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1ADA18(int a1)
{
  Frame *v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Frame", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (Frame *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetBackDropBlendAlpha'", 0);
    Frame::SetBackDropBlendAlpha(v2, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetBackDropBlendAlpha'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1ADAB8
// address: 0x001ADAB8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1ADAB8(int a1)
{
  Frame *v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Frame", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (Frame *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setUpdateTime'", 0);
    Frame::setUpdateTime(v2, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setUpdateTime'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1ADB58
// address: 0x001ADB58   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1ADB58(int a1)
{
  Frame *v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Frame", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (Frame *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetBlendAlpha'", 0);
    Frame::SetBlendAlpha(v2, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetBlendAlpha'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1ADBF8
// address: 0x001ADBF8   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1ADBF8(int a1)
{
  Frame *v2; // r5
  bool v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Frame", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (Frame *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, 0) != 0;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetClipState'", 0);
    Frame::SetClipState(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetClipState'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1ADC88
// address: 0x001ADC88   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1ADC88(int a1)
{
  Frame *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Frame", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (Frame *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetFrameLevel'", 0);
    Frame::SetFrameLevel(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetFrameLevel'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1ADD28
// address: 0x001ADD28   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1ADD28(int a1)
{
  Frame *v2; // r5
  const char *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Frame", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (Frame *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'RegisterEvent'", 0);
    Frame::RegisterEvent(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'RegisterEvent'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1ADDB0
// address: 0x001ADDB0   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_1ADDB0(int a1)
{
  ModelView *v2; // r5
  int v3; // r6
  int v4; // r7
  _BYTE v6[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ModelView", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnumber(a1, 3, 0, v6) != 0
    && tolua_isnoobj(a1, 4, v6) != 0 )
  {
    v2 = (ModelView *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    v4 = (int)tolua_tonumber(a1, 3, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'playActorAnim'", 0);
    ModelView::playActorAnim(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'playActorAnim'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1ADE70
// address: 0x001ADE70   size: 0xB6 (182 bytes)
//======================================================================
int __fastcall sub_1ADE70(int a1)
{
  ModelView *v2; // r5
  int v3; // r6
  int v4; // r7
  double ActorOnScreenPoint; // r0
  _BYTE v7[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ModelView", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, v7) != 0
    && tolua_isnumber(a1, 3, 0, v7) != 0
    && tolua_isnoobj(a1, 4, v7) != 0 )
  {
    v2 = (ModelView *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    v4 = (int)tolua_tonumber(a1, 3, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getActorOnScreenPoint'", 0);
    ActorOnScreenPoint = (double)(int)ModelView::getActorOnScreenPoint(v2, v3, v4);
    tolua_pushnumber(a1, HIDWORD(ActorOnScreenPoint), LODWORD(ActorOnScreenPoint), HIDWORD(ActorOnScreenPoint));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getActorOnScreenPoint'.", v7);
    return 0;
  }
}


//======================================================================
// sub_1ADF40
// address: 0x001ADF40   size: 0xE8 (232 bytes)
//======================================================================
int __fastcall sub_1ADF40(int a1)
{
  ModelView *v2; // r5
  float v3; // r0
  float v4; // r0
  float v5; // r6
  float v6; // r0
  float v7; // r7
  Ogre::FixedString *v9; // [sp+8h] [bp-1Ch]
  float v10; // [sp+Ch] [bp-18h]
  _BYTE v11[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ModelView", 0, v11) != 0
    && tolua_isstring(a1, 2, 0, v11) != 0
    && tolua_isnumber(a1, 3, 0, v11) != 0
    && tolua_isnumber(a1, 4, 0, v11) != 0
    && tolua_isnumber(a1, 5, 0, v11) != 0
    && tolua_isnoobj(a1, 6, v11) != 0 )
  {
    v2 = (ModelView *)tolua_tousertype(a1, 1, 0);
    v9 = (Ogre::FixedString *)tolua_tostring(a1, 2, 0);
    v3 = tolua_tonumber(a1, 3, 0, 0);
    v10 = v3;
    v4 = tolua_tonumber(a1, 4, 0, 0);
    v5 = v4;
    v6 = tolua_tonumber(a1, 5, 0, 0);
    v7 = v6;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addBackgroundEffect'", 0);
    ModelView::addBackgroundEffect(v2, v9, v10, v5, v7);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addBackgroundEffect'.", v11);
  }
  return 0;
}


//======================================================================
// sub_1AE040
// address: 0x001AE040   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1AE040(int a1)
{
  ModelView *v2; // r5
  Ogre::FixedString *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ModelView", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (ModelView *)tolua_tousertype(a1, 1, 0);
    v3 = (Ogre::FixedString *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setBackground'", 0);
    ModelView::setBackground(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setBackground'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AE0C8
// address: 0x001AE0C8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AE0C8(int a1)
{
  ModelView *v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ModelView", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (ModelView *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setCameraWidthFov'", 0);
    ModelView::setCameraWidthFov(v2, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setCameraWidthFov'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AE168
// address: 0x001AE168   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AE168(int a1)
{
  ModelView *v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ModelView", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (ModelView *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setCameraFov'", 0);
    ModelView::setCameraFov(v2, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setCameraFov'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AE208
// address: 0x001AE208   size: 0x138 (312 bytes)
//======================================================================
int __fastcall sub_1AE208(int a1)
{
  ModelView *v2; // r5
  float v3; // r0
  float v4; // r0
  float v5; // r0
  float v6; // r0
  float v7; // r0
  float v8; // r6
  float v9; // r0
  float v10; // r7
  float v12; // [sp+10h] [bp-24h]
  float v13; // [sp+14h] [bp-20h]
  float v14; // [sp+18h] [bp-1Ch]
  float v15; // [sp+1Ch] [bp-18h]
  _BYTE v16[16]; // [sp+24h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ModelView", 0, v16) != 0
    && tolua_isnumber(a1, 2, 0, v16) != 0
    && tolua_isnumber(a1, 3, 0, v16) != 0
    && tolua_isnumber(a1, 4, 0, v16) != 0
    && tolua_isnumber(a1, 5, 0, v16) != 0
    && tolua_isnumber(a1, 6, 0, v16) != 0
    && tolua_isnumber(a1, 7, 0, v16) != 0
    && tolua_isnoobj(a1, 8, v16) != 0 )
  {
    v2 = (ModelView *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v12 = v3;
    v4 = tolua_tonumber(a1, 3, 0, 0);
    v13 = v4;
    v5 = tolua_tonumber(a1, 4, 0, 0);
    v14 = v5;
    v6 = tolua_tonumber(a1, 5, 0, 0);
    v15 = v6;
    v7 = tolua_tonumber(a1, 6, 0, 0);
    v8 = v7;
    v9 = tolua_tonumber(a1, 7, 0, 0);
    v10 = v9;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setCameraLookAt'", 0);
    ModelView::setCameraLookAt(v2, v12, v13, v14, v15, v8, v10);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setCameraLookAt'.", v16);
  }
  return 0;
}


//======================================================================
// sub_1AE358
// address: 0x001AE358   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_1AE358(int a1)
{
  ModelView *v2; // r5
  bool v3; // r6
  int v4; // r7
  _BYTE v6[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ModelView", 0, v6) != 0
    && tolua_isboolean(a1, 2, 0, v6) != 0
    && tolua_isnumber(a1, 3, 0, v6) != 0
    && tolua_isnoobj(a1, 4, v6) != 0 )
  {
    v2 = (ModelView *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, 0) != 0;
    v4 = (int)tolua_tonumber(a1, 3, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setActorCollide'", 0);
    ModelView::setActorCollide(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setActorCollide'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AE418
// address: 0x001AE418   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_1AE418(int a1)
{
  ModelView *v2; // r5
  float v3; // r0
  float v4; // r6
  int v5; // r7
  _BYTE v7[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ModelView", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, v7) != 0
    && tolua_isnumber(a1, 3, 1, v7) != 0
    && tolua_isnoobj(a1, 4, v7) != 0 )
  {
    v2 = (ModelView *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    v5 = (int)tolua_tonumber(a1, 3, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setRotateSpeed'", 0);
    ModelView::setRotateSpeed(v2, v4, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setRotateSpeed'.", v7);
  }
  return 0;
}


//======================================================================
// sub_1AE4D8
// address: 0x001AE4D8   size: 0xEE (238 bytes)
//======================================================================
int __fastcall sub_1AE4D8(int a1)
{
  ModelView *v2; // r5
  float v3; // r0
  float v4; // r0
  float v5; // r0
  float v6; // r6
  int v7; // r7
  float v9; // [sp+8h] [bp-1Ch]
  float v10; // [sp+Ch] [bp-18h]
  _BYTE v11[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ModelView", 0, v11) != 0
    && tolua_isnumber(a1, 2, 0, v11) != 0
    && tolua_isnumber(a1, 3, 0, v11) != 0
    && tolua_isnumber(a1, 4, 0, v11) != 0
    && tolua_isnumber(a1, 5, 1, v11) != 0
    && tolua_isnoobj(a1, 6, v11) != 0 )
  {
    v2 = (ModelView *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v9 = v3;
    v4 = tolua_tonumber(a1, 3, 0, 0);
    v10 = v4;
    v5 = tolua_tonumber(a1, 4, 0, 0);
    v6 = v5;
    v7 = (int)tolua_tonumber(a1, 5, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setActorPosition'", 0);
    ModelView::setActorPosition(v2, v9, v10, v6, v7);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setActorPosition'.", v11);
  }
  return 0;
}


//======================================================================
// sub_1AE5E0
// address: 0x001AE5E0   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_1AE5E0(int a1)
{
  ModelView *v2; // r5
  int v3; // r6
  int v4; // r7
  _BYTE v6[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ModelView", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnumber(a1, 3, 1, v6) != 0
    && tolua_isnoobj(a1, 4, v6) != 0 )
  {
    v2 = (ModelView *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    v4 = (int)tolua_tonumber(a1, 3, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'bindActorToAnchor'", 0);
    ModelView::bindActorToAnchor(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'bindActorToAnchor'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AE6A0
// address: 0x001AE6A0   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AE6A0(int a1)
{
  Texture *v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (Texture *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'StartAlphaAmin'", 0);
    Texture::StartAlphaAmin(v2, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'StartAlphaAmin'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AE740
// address: 0x001AE740   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1AE740(int a1)
{
  Texture *v2; // r5
  const char *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (Texture *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'ChangeTextureTemplate'", 0);
    Texture::ChangeTextureTemplate(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'ChangeTextureTemplate'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AE7C8
// address: 0x001AE7C8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AE7C8(int a1)
{
  Texture *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (Texture *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setUvType'", 0);
    Texture::setUvType(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setUvType'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AE868
// address: 0x001AE868   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1AE868(int a1)
{
  Texture *v2; // r5
  bool v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (Texture *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, 0) != 0;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetOverlay'", 0);
    Texture::SetOverlay(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetOverlay'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AE8F4
// address: 0x001AE8F4   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1AE8F4(int a1)
{
  Texture *v2; // r5
  const char *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (Texture *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setMask'", 0);
    Texture::setMask(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setMask'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AE980
// address: 0x001AE980   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AE980(int a1)
{
  Texture *v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (Texture *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetBlendAlpha'", 0);
    Texture::SetBlendAlpha(v2, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetBlendAlpha'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AEA20
// address: 0x001AEA20   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_1AEA20(int a1)
{
  Texture *v2; // r5
  float v3; // r0
  float v4; // r6
  float v5; // r0
  float v6; // r7
  _BYTE v8[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, v8) != 0
    && tolua_isnumber(a1, 3, 0, v8) != 0
    && tolua_isnoobj(a1, 4, v8) != 0 )
  {
    v2 = (Texture *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    v5 = tolua_tonumber(a1, 3, 0, 0);
    v6 = v5;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetTexRelUV'", 0);
    Texture::SetTexRelUV(v2, v4, v6);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetTexRelUV'.", v8);
  }
  return 0;
}


//======================================================================
// sub_1AEAE0
// address: 0x001AEAE0   size: 0xE8 (232 bytes)
//======================================================================
int __fastcall sub_1AEAE0(int a1)
{
  Texture *v2; // r5
  float v3; // r0
  float v4; // r0
  float v5; // r0
  float v6; // r6
  float v7; // r0
  float v8; // r7
  float v10; // [sp+8h] [bp-1Ch]
  float v11; // [sp+Ch] [bp-18h]
  _BYTE v12[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v12) == 0
    || tolua_isnumber(a1, 2, 0, v12) == 0
    || tolua_isnumber(a1, 3, 0, v12) == 0
    || tolua_isnumber(a1, 4, 0, v12) == 0
    || tolua_isnumber(a1, 5, 0, v12) == 0
    || tolua_isnoobj(a1, 6, v12) == 0 )
  {
    return sub_1AEA20(a1);
  }
  v2 = (Texture *)tolua_tousertype(a1, 1, 0);
  v3 = tolua_tonumber(a1, 2, 0, 0);
  v10 = v3;
  v4 = tolua_tonumber(a1, 3, 0, 0);
  v11 = v4;
  v5 = tolua_tonumber(a1, 4, 0, 0);
  v6 = v5;
  v7 = tolua_tonumber(a1, 5, 0, 0);
  v8 = v7;
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in function 'SetTexRelUV'", 0);
  Texture::SetTexRelUV(v2, v10, v11, v6, v8);
  return 0;
}


//======================================================================
// sub_1AEBD8
// address: 0x001AEBD8   size: 0xEE (238 bytes)
//======================================================================
int __fastcall sub_1AEBD8(int a1)
{
  Texture *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+8h] [bp-1Ch]
  int v7; // [sp+Ch] [bp-18h]
  _BYTE v8[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, v8) != 0
    && tolua_isnumber(a1, 3, 0, v8) != 0
    && tolua_isnumber(a1, 4, 0, v8) != 0
    && tolua_isnumber(a1, 5, 0, v8) != 0
    && tolua_isnoobj(a1, 6, v8) != 0 )
  {
    v2 = (Texture *)tolua_tousertype(a1, 1, 0);
    v6 = (int)tolua_tonumber(a1, 2, 0, 0);
    v7 = (int)tolua_tonumber(a1, 3, 0, 0);
    v3 = (int)tolua_tonumber(a1, 4, 0, 0);
    v4 = (int)tolua_tonumber(a1, 5, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetTexUV'", 0);
    Texture::SetTexUV(v2, v6, v7, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetTexUV'.", v8);
  }
  return 0;
}


//======================================================================
// sub_1AECE0
// address: 0x001AECE0   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AECE0(int a1)
{
  Texture *v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (Texture *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetAngle'", 0);
    Texture::SetAngle(v2, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetAngle'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AED80
// address: 0x001AED80   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1AED80(int a1)
{
  Texture *v2; // r5
  const char *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (Texture *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetTexture'", 0);
    Texture::SetTexture(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetTexture'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AEE08
// address: 0x001AEE08   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1AEE08(int a1)
{
  Texture *v2; // r5
  bool v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (Texture *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, 0) != 0;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetGray'", 0);
    Texture::SetGray(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetGray'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AEE98
// address: 0x001AEE98   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_1AEE98(int a1)
{
  Texture *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-18h]
  _BYTE v7[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, v7) != 0
    && tolua_isnumber(a1, 3, 0, v7) != 0
    && tolua_isnumber(a1, 4, 0, v7) != 0
    && tolua_isnoobj(a1, 5, v7) != 0 )
  {
    v2 = (Texture *)tolua_tousertype(a1, 1, 0);
    v6 = (int)tolua_tonumber(a1, 2, 0, 0);
    v3 = (int)tolua_tonumber(a1, 3, 0, 0);
    v4 = (int)tolua_tonumber(a1, 4, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetColor'", 0);
    Texture::SetColor(v2, v6, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetColor'.", v7);
  }
  return 0;
}


//======================================================================
// sub_1AEF80
// address: 0x001AEF80   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1AEF80(int a1)
{
  Texture *v2; // r5
  void *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v5) != 0
    && tolua_isusertype(a1, 2, "Ogre::HUIRES", 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (Texture *)tolua_tousertype(a1, 1, 0);
    v3 = *(void **)tolua_tousertype(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetTextureHuires'", 0);
    Texture::SetTextureHuires(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetTextureHuires'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AF010
// address: 0x001AF010   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_1AF010(int a1)
{
  Texture *v2; // r7
  int v3; // r4
  bool v4; // r5
  _BYTE v6[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isboolean(a1, 3, 0, v6) != 0
    && tolua_isnoobj(a1, 4, v6) != 0 )
  {
    v2 = (Texture *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    v4 = tolua_toboolean(a1, 3, 0) != 0;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetUVAnimation'", 0);
    Texture::SetUVAnimation(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetUVAnimation'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AF0D0
// address: 0x001AF0D0   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_1AF0D0(int a1)
{
  FontString *v2; // r5
  const char *v3; // r6
  double TextExtentWidth; // r0
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "FontString", 0, v6) != 0
    && tolua_isstring(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (FontString *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetTextExtentWidth'", 0);
    TextExtentWidth = (double)(int)FontString::GetTextExtentWidth(v2, v3);
    tolua_pushnumber(a1, HIDWORD(TextExtentWidth), LODWORD(TextExtentWidth), HIDWORD(TextExtentWidth));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetTextExtentWidth'.", v6);
    return 0;
  }
}


//======================================================================
// sub_1AF168
// address: 0x001AF168   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_1AF168(int a1)
{
  FontString *v2; // r5
  unsigned int v3; // r6
  float v4; // r0
  float v5; // r7
  unsigned int v7; // [sp+Ch] [bp-18h]
  _BYTE v8[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "FontString", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, v8) != 0
    && tolua_isnumber(a1, 3, 0, v8) != 0
    && tolua_isnumber(a1, 4, 0, v8) != 0
    && tolua_isnoobj(a1, 5, v8) != 0 )
  {
    v2 = (FontString *)tolua_tousertype(a1, 1, 0);
    v7 = (unsigned int)tolua_tonumber(a1, 2, 0, 0);
    v3 = (unsigned int)tolua_tonumber(a1, 3, 0, 0);
    v4 = tolua_tonumber(a1, 4, 0, 0);
    v5 = v4;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetScrollNumberWithUint'", 0);
    FontString::SetScrollNumberWithUint(v2, v7, v3, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetScrollNumberWithUint'.", v8);
  }
  return 0;
}


//======================================================================
// sub_1AF250
// address: 0x001AF250   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_1AF250(int a1)
{
  FontString *v2; // r5
  unsigned int v3; // r6
  float v4; // r0
  float v5; // r7
  unsigned int v7; // [sp+Ch] [bp-18h]
  _BYTE v8[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "FontString", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, v8) != 0
    && tolua_isnumber(a1, 3, 0, v8) != 0
    && tolua_isnumber(a1, 4, 0, v8) != 0
    && tolua_isnoobj(a1, 5, v8) != 0 )
  {
    v2 = (FontString *)tolua_tousertype(a1, 1, 0);
    v7 = (unsigned int)tolua_tonumber(a1, 2, 0, 0);
    v3 = (unsigned int)tolua_tonumber(a1, 3, 0, 0);
    v4 = tolua_tonumber(a1, 4, 0, 0);
    v5 = v4;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetScrollNumber'", 0);
    FontString::SetScrollNumber(v2, v7, v3, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetScrollNumber'.", v8);
  }
  return 0;
}


//======================================================================
// sub_1AF338
// address: 0x001AF338   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AF338(int a1)
{
  FontString *v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "FontString", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (FontString *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetBlendAlpha'", 0);
    FontString::SetBlendAlpha(v2, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetBlendAlpha'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AF3D8
// address: 0x001AF3D8   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_1AF3D8(int a1)
{
  FontString *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-18h]
  _BYTE v7[16]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "FontString", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, v7) != 0
    && tolua_isnumber(a1, 3, 0, v7) != 0
    && tolua_isnumber(a1, 4, 0, v7) != 0
    && tolua_isnoobj(a1, 5, v7) != 0 )
  {
    v2 = (FontString *)tolua_tousertype(a1, 1, 0);
    v6 = (int)tolua_tonumber(a1, 2, 0, 0);
    v3 = (int)tolua_tonumber(a1, 3, 0, 0);
    v4 = (int)tolua_tonumber(a1, 4, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetTextColor'", 0);
    FontString::SetTextColor(v2, v6, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetTextColor'.", v7);
  }
  return 0;
}


//======================================================================
// sub_1AF4C0
// address: 0x001AF4C0   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_1AF4C0(int a1)
{
  FontString *v2; // r5
  float v3; // r0
  float v4; // r6
  float v5; // r0
  float v6; // r7
  _BYTE v8[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "FontString", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, v8) != 0
    && tolua_isnumber(a1, 3, 0, v8) != 0
    && tolua_isnoobj(a1, 4, v8) != 0 )
  {
    v2 = (FontString *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_tonumber(a1, 2, 0, 0);
    v4 = v3;
    v5 = tolua_tonumber(a1, 3, 0, 0);
    v6 = v5;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetBufferTimer'", 0);
    FontString::SetBufferTimer(v2, v4, v6);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetBufferTimer'.", v8);
  }
  return 0;
}


//======================================================================
// sub_1AF580
// address: 0x001AF580   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1AF580(int a1)
{
  FontString *v2; // r5
  const char *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "FontString", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (FontString *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetText'", 0);
    FontString::SetText(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetText'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AF608
// address: 0x001AF608   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1AF608(int a1)
{
  LayoutFrame *v2; // r5
  LayoutFrame *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0
    && tolua_isusertype(a1, 2, "LayoutFrame", 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    v3 = (LayoutFrame *)tolua_tousertype(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'AddRelFrame'", 0);
    LayoutFrame::AddRelFrame(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'AddRelFrame'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AF694
// address: 0x001AF694   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1AF694(int a1)
{
  LayoutFrame *v2; // r5
  bool v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, 0) != 0;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setInputTransparent'", 0);
    LayoutFrame::setInputTransparent(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setInputTransparent'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AF720
// address: 0x001AF720   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1AF720(int a1)
{
  LayoutFrame *v2; // r5
  const char *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetClientString'", 0);
    LayoutFrame::SetClientString(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetClientString'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AF7A8
// address: 0x001AF7A8   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_1AF7A8(int a1)
{
  LayoutFrame *v2; // r5
  int v3; // r6
  double ClientUserData; // r0
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetClientUserData'", 0);
    ClientUserData = (double)(int)LayoutFrame::GetClientUserData(v2, v3);
    tolua_pushnumber(a1, HIDWORD(ClientUserData), LODWORD(ClientUserData), HIDWORD(ClientUserData));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetClientUserData'.", v6);
    return 0;
  }
}


//======================================================================
// sub_1AF858
// address: 0x001AF858   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_1AF858(int a1)
{
  LayoutFrame *v2; // r5
  int v3; // r6
  int v4; // r7
  _BYTE v6[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnumber(a1, 3, 0, v6) != 0
    && tolua_isnoobj(a1, 4, v6) != 0 )
  {
    v2 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    v4 = (int)tolua_tonumber(a1, 3, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetClientUserData'", 0);
    LayoutFrame::SetClientUserData(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetClientUserData'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AF918
// address: 0x001AF918   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AF918(int a1)
{
  LayoutFrame *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetClientID'", 0);
    LayoutFrame::SetClientID(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetClientID'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AF9B8
// address: 0x001AF9B8   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_1AF9B8(int a1)
{
  LayoutFrame *v2; // r5
  const char *v3; // r6
  double TextExtentHeight; // r0
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v6) != 0
    && tolua_isstring(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetTextExtentHeight'", 0);
    TextExtentHeight = (double)(int)LayoutFrame::GetTextExtentHeight(v2, v3);
    tolua_pushnumber(a1, HIDWORD(TextExtentHeight), LODWORD(TextExtentHeight), HIDWORD(TextExtentHeight));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetTextExtentHeight'.", v6);
    return 0;
  }
}


//======================================================================
// sub_1AFA50
// address: 0x001AFA50   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_1AFA50(int a1)
{
  LayoutFrame *v2; // r5
  const char *v3; // r6
  double TextExtentWidth; // r0
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v6) != 0
    && tolua_isstring(a1, 2, 0, v6) != 0
    && tolua_isnoobj(a1, 3, v6) != 0 )
  {
    v2 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetTextExtentWidth'", 0);
    TextExtentWidth = (double)(int)LayoutFrame::GetTextExtentWidth(v2, v3);
    tolua_pushnumber(a1, HIDWORD(TextExtentWidth), LODWORD(TextExtentWidth), HIDWORD(TextExtentWidth));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetTextExtentWidth'.", v6);
    return 0;
  }
}


//======================================================================
// sub_1AFAE8
// address: 0x001AFAE8   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_1AFAE8(int a1)
{
  LayoutFrame *v2; // r5
  int v3; // r6
  int v4; // r7
  _BYTE v6[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnumber(a1, 3, 0, v6) != 0
    && tolua_isnoobj(a1, 4, v6) != 0 )
  {
    v2 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    v4 = (int)tolua_tonumber(a1, 3, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetSize'", 0);
    LayoutFrame::SetSize(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetSize'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AFBA8
// address: 0x001AFBA8   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_1AFBA8(int a1)
{
  LayoutFrame *v2; // r5
  int v3; // r6
  int v4; // r7
  _BYTE v6[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnumber(a1, 3, 0, v6) != 0
    && tolua_isnoobj(a1, 4, v6) != 0 )
  {
    v2 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    v4 = (int)tolua_tonumber(a1, 3, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetSizeNoRecal'", 0);
    LayoutFrame::SetSizeNoRecal(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetSizeNoRecal'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AFC68
// address: 0x001AFC68   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_1AFC68(int a1)
{
  LayoutFrame *v2; // r5
  int v3; // r6
  int v4; // r7
  _BYTE v6[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, v6) != 0
    && tolua_isnumber(a1, 3, 0, v6) != 0
    && tolua_isnoobj(a1, 4, v6) != 0 )
  {
    v2 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    v4 = (int)tolua_tonumber(a1, 3, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'extendRect'", 0);
    LayoutFrame::extendRect(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'extendRect'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1AFD28
// address: 0x001AFD28   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AFD28(int a1)
{
  LayoutFrame *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetHeight'", 0);
    LayoutFrame::SetHeight(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetHeight'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AFDC8
// address: 0x001AFDC8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_1AFDC8(int a1)
{
  LayoutFrame *v2; // r7
  int v3; // r4
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    v3 = (int)tolua_tonumber(a1, 2, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetWidth'", 0);
    LayoutFrame::SetWidth(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetWidth'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1AFE68
// address: 0x001AFE68   size: 0x100 (256 bytes)
//======================================================================
int __fastcall sub_1AFE68(int a1)
{
  LayoutFrame *v2; // r5
  int v3; // r6
  int v4; // r7
  LayoutFrame *v6; // [sp+Ch] [bp-20h]
  char *v7; // [sp+10h] [bp-1Ch]
  char *v8; // [sp+14h] [bp-18h]
  _BYTE v9[16]; // [sp+1Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v9) != 0
    && tolua_isstring(a1, 2, 0, v9) != 0
    && tolua_isstring(a1, 3, 0, v9) != 0
    && tolua_isstring(a1, 4, 0, v9) != 0
    && tolua_isnumber(a1, 5, 0, v9) != 0
    && tolua_isnumber(a1, 6, 0, v9) != 0
    && tolua_isnoobj(a1, 7, v9) != 0 )
  {
    v2 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    v6 = (LayoutFrame *)tolua_tostring(a1, 2, 0);
    v7 = (char *)tolua_tostring(a1, 3, 0);
    v8 = (char *)tolua_tostring(a1, 4, 0);
    v3 = (int)tolua_tonumber(a1, 5, 0, 0);
    v4 = (int)tolua_tonumber(a1, 6, 0, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetPoint'", 0);
    LayoutFrame::SetPoint(v2, v6, v7, v8, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetPoint'.", v9);
  }
  return 0;
}


//======================================================================
// sub_1AFF80
// address: 0x001AFF80   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_1AFF80(int a1)
{
  LayoutFrame *v2; // r5
  LayoutFrame *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0
    && tolua_isusertype(a1, 2, "LayoutFrame", 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    v3 = (LayoutFrame *)tolua_tousertype(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'removeRelFrames'", 0);
    LayoutFrame::removeRelFrames(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'removeRelFrames'.", v5);
  }
  return 0;
}

