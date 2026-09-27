// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_1B0000

//======================================================================
// sub_1B000C
// address: 0x001B000C   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1B000C(int a1)
{
  int v2; // r5
  char *v3; // r6
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "UIObject", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = (char *)tolua_tostring(a1, 2, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'SetName'", 0);
    UIObject::SetName(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetName'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1B0098
// address: 0x001B0098   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_1B0098(int a1)
{
  int v3; // r0
  unsigned int v4; // r0
  _BYTE v5[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isnumber(a1, 1, 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (int)tolua_tonumber(a1, 1, 0, 0);
    v4 = IsAltPress(v3);
    tolua_pushboolean(a1, v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'IsAltPress'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B0100
// address: 0x001B0100   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_1B0100(int a1)
{
  int v3; // r0
  unsigned int v4; // r0
  _BYTE v5[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isnumber(a1, 1, 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (int)tolua_tonumber(a1, 1, 0, 0);
    v4 = IsShiftPress(v3);
    tolua_pushboolean(a1, v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'IsShiftPress'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B0168
// address: 0x001B0168   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_1B0168(int a1)
{
  int v3; // r0
  unsigned int v4; // r0
  _BYTE v5[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isnumber(a1, 1, 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (int)tolua_tonumber(a1, 1, 0, 0);
    v4 = IsCtrlPress(v3);
    tolua_pushboolean(a1, v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'IsCtrlPress'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B01D0
// address: 0x001B01D0   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_1B01D0(int a1)
{
  FrameManager *v3; // r5
  int CurEditBox; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "FrameManager", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (FrameManager *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getCurEditBox'", 0);
    CurEditBox = FrameManager::getCurEditBox(v3);
    tolua_pushusertype(a1, CurEditBox, "Frame");
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCurEditBox'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B024C
// address: 0x001B024C   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_1B024C(int a1)
{
  char *v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r0
  _BYTE v7[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isstring(a1, 1, 0, v7) != 0 && tolua_isnoobj(a1, 2, v7) != 0 )
  {
    v3 = (char *)tolua_tostring(a1, 1, 0);
    v6 = replaceFaceString(v3, v4, v5);
    tolua_pushstring(a1, v6);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'replaceFaceString'.", v7);
    return 0;
  }
}


//======================================================================
// sub_1B02A0
// address: 0x001B02A0   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_1B02A0(int a1)
{
  int v3; // r0
  _BOOL4 v4; // r0
  _BYTE v5[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isnumber(a1, 1, 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (int)tolua_tonumber(a1, 1, 0, 0);
    v4 = isKeyPressed(v3);
    tolua_pushboolean(a1, v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isKeyPressed'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B0308
// address: 0x001B0308   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_1B0308(int a1)
{
  const char *v3; // r0
  _BOOL4 v4; // r0
  _BYTE v5[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isstring(a1, 1, 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (const char *)tolua_tostring(a1, 1, 0);
    v4 = IsInExistence(v3);
    tolua_pushboolean(a1, v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'IsInExistence'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B035C
// address: 0x001B035C   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_1B035C(int a1)
{
  int v3; // r0
  double v4; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "FontString", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    v4 = COERCE_FLOAT(GetFontTextWidth(v3));
    tolua_pushnumber(a1, HIDWORD(v4), LODWORD(v4), HIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetFontTextWidth'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B03C0
// address: 0x001B03C0   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_1B03C0(int a1, int a2, int a3, int a4)
{
  int v5; // r4
  double ScreenScaleX; // r0
  _DWORD v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_isnoobj(a1, 1, v8);
  if ( v5 != 0 )
  {
    ScreenScaleX = GetScreenScaleX();
    tolua_pushnumber(a1, HIDWORD(ScreenScaleX), LODWORD(ScreenScaleX), HIDWORD(ScreenScaleX));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetScreenScaleX'.", v8);
  }
  return v5;
}


//======================================================================
// sub_1B0400
// address: 0x001B0400   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_1B0400(int a1, int a2, int a3, int a4)
{
  int v5; // r4
  double ScreenScaleY; // r0
  _DWORD v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_isnoobj(a1, 1, v8);
  if ( v5 != 0 )
  {
    ScreenScaleY = GetScreenScaleY();
    tolua_pushnumber(a1, HIDWORD(ScreenScaleY), LODWORD(ScreenScaleY), HIDWORD(ScreenScaleY));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetScreenScaleY'.", v8);
  }
  return v5;
}


//======================================================================
// sub_1B0440
// address: 0x001B0440   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_1B0440(int a1)
{
  const char *v2; // r0
  _BYTE v4[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isstring(a1, 1, 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (const char *)tolua_tostring(a1, 1, 0);
    playUISound(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'playUISound'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B048C
// address: 0x001B048C   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_1B048C(int a1)
{
  char *v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  _BYTE v7[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isstring(a1, 1, 0, v7) != 0 && tolua_isnoobj(a1, 2, v7) != 0 )
  {
    v2 = (char *)tolua_tostring(a1, 1, 0);
    addChangedFrames(v2, v3, v4, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addChangedFrames'.", v7);
  }
  return 0;
}


//======================================================================
// sub_1B04D8
// address: 0x001B04D8   size: 0x44 (68 bytes)
//======================================================================
int __fastcall sub_1B04D8(int a1)
{
  LayoutFrame *v3; // r0
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v4) == 0 || tolua_isnoobj(a1, 2, v4) == 0 )
    return sub_1B048C(a1);
  v3 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
  addChangedFrames(v3);
  return 0;
}


//======================================================================
// sub_1B0520
// address: 0x001B0520   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_1B0520(int a1)
{
  const char *v2; // r0
  _BYTE v4[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isstring(a1, 1, 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (const char *)tolua_tostring(a1, 1, 0);
    CopyToMemory(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'CopyToMemory'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B056C
// address: 0x001B056C   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_1B056C(int a1)
{
  char *v3; // r0
  int v4; // r1
  int v5; // r0
  _BYTE v6[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isstring(a1, 1, 0, v6) != 0 && tolua_isnoobj(a1, 2, v6) != 0 )
  {
    v3 = (char *)tolua_tostring(a1, 1, 0);
    v5 = isPointInFrame(v3, v4);
    tolua_pushboolean(a1, v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isPointInFrame'.", v6);
    return 0;
  }
}


//======================================================================
// sub_1B05C0
// address: 0x001B05C0   size: 0xA2 (162 bytes)
//======================================================================
int __fastcall sub_1B05C0(int a1)
{
  double v2; // r4
  char *v3; // r7
  int v4; // r0
  double v6; // [sp+0h] [bp-1Ch]
  _BYTE v7[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isnumber(a1, 1, 0, v7) == 0
    || tolua_isnumber(a1, 2, 0, v7) == 0
    || tolua_isstring(a1, 3, 0, v7) == 0
    || tolua_isnoobj(a1, 4, v7) == 0 )
  {
    return sub_1B056C(a1);
  }
  v2 = tolua_tonumber(a1, 1, 0, 0);
  v6 = tolua_tonumber(a1, 2, 0, 0);
  v3 = (char *)tolua_tostring(a1, 3, 0);
  v4 = isPointInFrame((int)v2, (int)v6, v3);
  tolua_pushboolean(a1, v4);
  return 1;
}


//======================================================================
// sub_1B0670
// address: 0x001B0670   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_1B0670(int a1, int a2, int a3, int a4)
{
  int v5; // r4
  int CurrentDialogFrame; // r0
  _DWORD v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_isnoobj(a1, 1, v8);
  if ( v5 != 0 )
  {
    CurrentDialogFrame = GetCurrentDialogFrame();
    tolua_pushstring(a1, CurrentDialogFrame);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetCurrentDialogFrame'.", v8);
  }
  return v5;
}


//======================================================================
// sub_1B06A8
// address: 0x001B06A8   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_1B06A8(int a1)
{
  char *v2; // r0
  _BYTE v4[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isstring(a1, 1, 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (char *)tolua_tostring(a1, 1, 0);
    pushUnCloseWin(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'pushUnCloseWin'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B06F4
// address: 0x001B06F4   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_1B06F4(int a1, int a2, int a3, int a4)
{
  int v5; // r4
  double CursorPosY; // r0
  _DWORD v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_isnoobj(a1, 1, v8);
  if ( v5 != 0 )
  {
    CursorPosY = (double)GetCursorPosY();
    tolua_pushnumber(a1, HIDWORD(CursorPosY), LODWORD(CursorPosY), HIDWORD(CursorPosY));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetCursorPosY'.", v8);
  }
  return v5;
}


//======================================================================
// sub_1B0734
// address: 0x001B0734   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_1B0734(int a1, int a2, int a3, int a4)
{
  int v5; // r4
  double CursorPosX; // r0
  _DWORD v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_isnoobj(a1, 1, v8);
  if ( v5 != 0 )
  {
    CursorPosX = (double)GetCursorPosX();
    tolua_pushnumber(a1, HIDWORD(CursorPosX), LODWORD(CursorPosX), HIDWORD(CursorPosX));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetCursorPosX'.", v8);
  }
  return v5;
}


//======================================================================
// sub_1B0774
// address: 0x001B0774   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_1B0774(int a1, int a2, int a3, int a4)
{
  int v5; // r4
  double ScreenHeight; // r0
  _DWORD v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_isnoobj(a1, 1, v8);
  if ( v5 != 0 )
  {
    ScreenHeight = (double)GetScreenHeight();
    tolua_pushnumber(a1, HIDWORD(ScreenHeight), LODWORD(ScreenHeight), HIDWORD(ScreenHeight));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetScreenHeight'.", v8);
  }
  return v5;
}


//======================================================================
// sub_1B07B4
// address: 0x001B07B4   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_1B07B4(int a1, int a2, int a3, int a4)
{
  int v5; // r4
  double ScreenWidth; // r0
  _DWORD v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_isnoobj(a1, 1, v8);
  if ( v5 != 0 )
  {
    ScreenWidth = (double)GetScreenWidth();
    tolua_pushnumber(a1, HIDWORD(ScreenWidth), LODWORD(ScreenWidth), HIDWORD(ScreenWidth));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetScreenWidth'.", v8);
  }
  return v5;
}


//======================================================================
// sub_1B07F4
// address: 0x001B07F4   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_1B07F4(int a1, int a2, int a3, int a4)
{
  int v5; // r4
  double CurrentCursorLevel; // r0
  _DWORD v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_isnoobj(a1, 1, v8);
  if ( v5 != 0 )
  {
    CurrentCursorLevel = (double)GetCurrentCursorLevel();
    tolua_pushnumber(a1, HIDWORD(CurrentCursorLevel), LODWORD(CurrentCursorLevel), HIDWORD(CurrentCursorLevel));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetCurrentCursorLevel'.", v8);
  }
  return v5;
}


//======================================================================
// sub_1B0834
// address: 0x001B0834   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_1B0834(int a1, int a2, int a3, int a4)
{
  int v5; // r4
  int CurrentCursor; // r0
  _DWORD v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_isnoobj(a1, 1, v8);
  if ( v5 != 0 )
  {
    CurrentCursor = GetCurrentCursor();
    tolua_pushstring(a1, CurrentCursor);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetCurrentCursor'.", v8);
  }
  return v5;
}


//======================================================================
// sub_1B086C
// address: 0x001B086C   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_1B086C(int a1)
{
  const char *v2; // r0
  _BYTE v4[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isstring(a1, 1, 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (const char *)tolua_tostring(a1, 1, 0);
    ChangeCursorState(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'ChangeCursorState'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B08B8
// address: 0x001B08B8   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_1B08B8(int a1)
{
  const char *v2; // r0
  _BYTE v4[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isstring(a1, 1, 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (const char *)tolua_tostring(a1, 1, 0);
    SetCurrentCursor(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetCurrentCursor'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B0904
// address: 0x001B0904   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_1B0904(int a1)
{
  char *v3; // r0
  int v4; // r1
  int v5; // r2
  int Texture; // r0
  _BYTE v7[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isstring(a1, 1, 0, v7) != 0 && tolua_isnoobj(a1, 2, v7) != 0 )
  {
    v3 = (char *)tolua_tostring(a1, 1, 0);
    Texture = FindTexture(v3, v4, v5);
    tolua_pushusertype(a1, Texture, "Texture");
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'FindTexture'.", v7);
    return 0;
  }
}


//======================================================================
// sub_1B0960
// address: 0x001B0960   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_1B0960(int a1)
{
  char *v3; // r0
  int v4; // r1
  int v5; // r2
  _BOOL4 exist; // r0
  _BYTE v7[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isstring(a1, 1, 0, v7) != 0 && tolua_isnoobj(a1, 2, v7) != 0 )
  {
    v3 = (char *)tolua_tostring(a1, 1, 0);
    exist = isAlreadyExistFrame(v3, v4, v5);
    tolua_pushboolean(a1, exist);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isAlreadyExistFrame'.", v7);
    return 0;
  }
}


//======================================================================
// sub_1B09B4
// address: 0x001B09B4   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_1B09B4(int a1)
{
  char *v3; // r0
  int v4; // r1
  int v5; // r2
  int Button; // r0
  _BYTE v7[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isstring(a1, 1, 0, v7) != 0 && tolua_isnoobj(a1, 2, v7) != 0 )
  {
    v3 = (char *)tolua_tostring(a1, 1, 0);
    Button = FindButton(v3, v4, v5);
    tolua_pushusertype(a1, Button, "Button");
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'FindButton'.", v7);
    return 0;
  }
}


//======================================================================
// sub_1B0A10
// address: 0x001B0A10   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_1B0A10(int a1)
{
  char *v3; // r0
  int v4; // r1
  int v5; // r2
  int FontString; // r0
  _BYTE v7[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isstring(a1, 1, 0, v7) != 0 && tolua_isnoobj(a1, 2, v7) != 0 )
  {
    v3 = (char *)tolua_tostring(a1, 1, 0);
    FontString = FindFontString(v3, v4, v5);
    tolua_pushusertype(a1, FontString, "FontString");
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'FindFontString'.", v7);
    return 0;
  }
}


//======================================================================
// sub_1B0A6C
// address: 0x001B0A6C   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_1B0A6C(int a1, int a2, int a3, int a4)
{
  int v5; // r4
  int v6; // r0
  _DWORD v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_isnoobj(a1, 1, v8);
  if ( v5 != 0 )
  {
    v6 = UIIsInDragState();
    tolua_pushboolean(a1, v6);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'UIIsInDragState'.", v8);
  }
  return v5;
}


//======================================================================
// sub_1B0AA4
// address: 0x001B0AA4   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_1B0AA4(int a1)
{
  const char *v2; // r0
  _BYTE v4[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isstring(a1, 1, 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (const char *)tolua_tostring(a1, 1, 0);
    UIEndDrag(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'UIEndDrag'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B0AF0
// address: 0x001B0AF0   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_1B0AF0(int a1)
{
  char *v2; // r0
  _BYTE v4[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isstring(a1, 1, 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (char *)tolua_tostring(a1, 1, 0);
    HideUIPanel(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'HideUIPanel'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B0B3C
// address: 0x001B0B3C   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_1B0B3C(int a1)
{
  char *v2; // r0
  int v3; // r1
  int v4; // r2
  _BYTE v6[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isstring(a1, 1, 0, v6) != 0 && tolua_isnoobj(a1, 2, v6) != 0 )
  {
    v2 = (char *)tolua_tostring(a1, 1, 0);
    ShowUIPanel(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'ShowUIPanel'.", v6);
  }
  return 0;
}


//======================================================================
// sub_1B0B88
// address: 0x001B0B88   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B0B88(int a1)
{
  LineFrame *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LineFrame", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (LineFrame *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'clearLine'", 0);
    LineFrame::clearLine(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'clearLine'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B0BF0
// address: 0x001B0BF0   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B0BF0(int a1)
{
  SlidingFrame *v3; // r5
  double CanMoveRightDistance; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "SlidingFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (SlidingFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getCanMoveRightDistance'", 0);
    CanMoveRightDistance = (double)SlidingFrame::getCanMoveRightDistance(v3);
    tolua_pushnumber(a1, HIDWORD(CanMoveRightDistance), LODWORD(CanMoveRightDistance), HIDWORD(CanMoveRightDistance));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCanMoveRightDistance'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B0C68
// address: 0x001B0C68   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B0C68(int a1)
{
  SlidingFrame *v3; // r5
  double CanMoveBottomDistance; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "SlidingFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (SlidingFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getCanMoveBottomDistance'", 0);
    CanMoveBottomDistance = (double)SlidingFrame::getCanMoveBottomDistance(v3);
    tolua_pushnumber(a1, HIDWORD(CanMoveBottomDistance), LODWORD(CanMoveBottomDistance), HIDWORD(CanMoveBottomDistance));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCanMoveBottomDistance'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B0CE0
// address: 0x001B0CE0   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B0CE0(int a1)
{
  SlidingFrame *v3; // r5
  double CanMoveLeftDistance; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "SlidingFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (SlidingFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getCanMoveLeftDistance'", 0);
    CanMoveLeftDistance = (double)SlidingFrame::getCanMoveLeftDistance(v3);
    tolua_pushnumber(a1, HIDWORD(CanMoveLeftDistance), LODWORD(CanMoveLeftDistance), HIDWORD(CanMoveLeftDistance));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCanMoveLeftDistance'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B0D58
// address: 0x001B0D58   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B0D58(int a1)
{
  SlidingFrame *v3; // r5
  double CanMoveTopDistance; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "SlidingFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (SlidingFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getCanMoveTopDistance'", 0);
    CanMoveTopDistance = (double)SlidingFrame::getCanMoveTopDistance(v3);
    tolua_pushnumber(a1, HIDWORD(CanMoveTopDistance), LODWORD(CanMoveTopDistance), HIDWORD(CanMoveTopDistance));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCanMoveTopDistance'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B0DD0
// address: 0x001B0DD0   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B0DD0(int a1)
{
  SlidingFrame *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "SlidingFrame", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (SlidingFrame *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'resetOffsetPos'", 0);
    SlidingFrame::resetOffsetPos(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'resetOffsetPos'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B0E38
// address: 0x001B0E38   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B0E38(int a1)
{
  ProgressBar *v3; // r5
  double v4; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ProgressBar", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (ProgressBar *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetValue'", 0);
    v4 = COERCE_FLOAT(ProgressBar::GetValue(v3));
    tolua_pushnumber(a1, HIDWORD(v4), LODWORD(v4), HIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetValue'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B0EB0
// address: 0x001B0EB0   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B0EB0(int a1)
{
  MultiEditBox *v3; // r5
  double SelBegin; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "MultiEditBox", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (MultiEditBox *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getSelBegin'", 0);
    SelBegin = (double)(int)MultiEditBox::getSelBegin(v3);
    tolua_pushnumber(a1, HIDWORD(SelBegin), LODWORD(SelBegin), HIDWORD(SelBegin));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getSelBegin'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B0F28
// address: 0x001B0F28   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B0F28(int a1)
{
  MultiEditBox *v3; // r5
  double CursorPos; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "MultiEditBox", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (MultiEditBox *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getCursorPos'", 0);
    CursorPos = (double)(int)MultiEditBox::getCursorPos(v3);
    tolua_pushnumber(a1, HIDWORD(CursorPos), LODWORD(CursorPos), HIDWORD(CursorPos));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCursorPos'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B0FA0
// address: 0x001B0FA0   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B0FA0(int a1)
{
  MultiEditBox *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "MultiEditBox", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (MultiEditBox *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SelectAllText'", 0);
    MultiEditBox::SelectAllText(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SelectAllText'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B1008
// address: 0x001B1008   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B1008(int a1)
{
  MultiEditBox *v3; // r5
  double TextCount; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "MultiEditBox", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (MultiEditBox *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getTextCount'", 0);
    TextCount = (double)(unsigned int)MultiEditBox::getTextCount(v3);
    tolua_pushnumber(a1, HIDWORD(TextCount), LODWORD(TextCount), HIDWORD(TextCount));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getTextCount'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B1080
// address: 0x001B1080   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B1080(int a1)
{
  MultiEditBox *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "MultiEditBox", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (MultiEditBox *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'Clear'", 0);
    MultiEditBox::Clear(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'Clear'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B10E8
// address: 0x001B10E8   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_1B10E8(int a1)
{
  MultiEditBox *v3; // r5
  int Text; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "MultiEditBox", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (MultiEditBox *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetText'", 0);
    Text = MultiEditBox::GetText(v3);
    tolua_pushstring(a1, Text);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetText'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B115C
// address: 0x001B115C   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B115C(int a1)
{
  ListBox *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ListBox", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (ListBox *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'updatePos'", 0);
    ListBox::updatePos(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'updatePos'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B11C4
// address: 0x001B11C4   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B11C4(int a1)
{
  ListBox *v3; // r5
  double TotalHeight; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ListBox", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (ListBox *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetTotalHeight'", 0);
    TotalHeight = (double)(int)ListBox::GetTotalHeight(v3);
    tolua_pushnumber(a1, HIDWORD(TotalHeight), LODWORD(TotalHeight), HIDWORD(TotalHeight));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetTotalHeight'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B123C
// address: 0x001B123C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B123C(int a1)
{
  Slider *v3; // r5
  double v4; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Slider", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (Slider *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetValueStep'", 0);
    v4 = COERCE_FLOAT(Slider::GetValueStep(v3));
    tolua_pushnumber(a1, HIDWORD(v4), LODWORD(v4), HIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetValueStep'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B12B4
// address: 0x001B12B4   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B12B4(int a1)
{
  Slider *v3; // r5
  double v4; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Slider", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (Slider *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetMaxValue'", 0);
    v4 = COERCE_FLOAT(Slider::GetMaxValue(v3));
    tolua_pushnumber(a1, HIDWORD(v4), LODWORD(v4), HIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetMaxValue'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B132C
// address: 0x001B132C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B132C(int a1)
{
  Slider *v3; // r5
  double v4; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Slider", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (Slider *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetMinValue'", 0);
    v4 = COERCE_FLOAT(Slider::GetMinValue(v3));
    tolua_pushnumber(a1, HIDWORD(v4), LODWORD(v4), HIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetMinValue'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B13A4
// address: 0x001B13A4   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B13A4(int a1)
{
  Slider *v3; // r5
  double v4; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Slider", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (Slider *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetLastValue'", 0);
    v4 = COERCE_FLOAT(Slider::GetLastValue(v3));
    tolua_pushnumber(a1, HIDWORD(v4), LODWORD(v4), HIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetLastValue'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B141C
// address: 0x001B141C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B141C(int a1)
{
  Slider *v3; // r5
  double Value; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Slider", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (Slider *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetValue'", 0);
    Value = Slider::GetValue(v3);
    tolua_pushnumber(a1, HIDWORD(Value), LODWORD(Value), HIDWORD(Value));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetValue'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B1494
// address: 0x001B1494   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B1494(int a1)
{
  ScrollFrame *v3; // r5
  double HorizonalScrollRange; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ScrollFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (ScrollFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetHorizonalScrollRange'", 0);
    HorizonalScrollRange = (double)(int)ScrollFrame::GetHorizonalScrollRange(v3);
    tolua_pushnumber(a1, HIDWORD(HorizonalScrollRange), LODWORD(HorizonalScrollRange), HIDWORD(HorizonalScrollRange));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetHorizonalScrollRange'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B150C
// address: 0x001B150C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B150C(int a1)
{
  ScrollFrame *v3; // r5
  double HorizonalOffset; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ScrollFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (ScrollFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetHorizonalOffset'", 0);
    HorizonalOffset = (double)(int)ScrollFrame::GetHorizonalOffset(v3);
    tolua_pushnumber(a1, HIDWORD(HorizonalOffset), LODWORD(HorizonalOffset), HIDWORD(HorizonalOffset));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetHorizonalOffset'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B1584
// address: 0x001B1584   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B1584(int a1)
{
  ScrollFrame *v3; // r5
  double VerticalScrollRange; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ScrollFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (ScrollFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetVerticalScrollRange'", 0);
    VerticalScrollRange = (double)(int)ScrollFrame::GetVerticalScrollRange(v3);
    tolua_pushnumber(a1, HIDWORD(VerticalScrollRange), LODWORD(VerticalScrollRange), HIDWORD(VerticalScrollRange));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetVerticalScrollRange'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B15FC
// address: 0x001B15FC   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B15FC(int a1)
{
  ScrollFrame *v3; // r5
  double VerticalOffset; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ScrollFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (ScrollFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetVerticalOffset'", 0);
    VerticalOffset = (double)(int)ScrollFrame::GetVerticalOffset(v3);
    tolua_pushnumber(a1, HIDWORD(VerticalOffset), LODWORD(VerticalOffset), HIDWORD(VerticalOffset));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetVerticalOffset'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B1674
// address: 0x001B1674   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B1674(int a1)
{
  ScrollFrame *v3; // r5
  double ValueStep; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ScrollFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (ScrollFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetValueStep'", 0);
    ValueStep = (double)(int)ScrollFrame::GetValueStep(v3);
    tolua_pushnumber(a1, HIDWORD(ValueStep), LODWORD(ValueStep), HIDWORD(ValueStep));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetValueStep'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B16EC
// address: 0x001B16EC   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B16EC(int a1)
{
  ScrollFrame *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ScrollFrame", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (ScrollFrame *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'CalHorizonalScrollRange'", 0);
    ScrollFrame::CalHorizonalScrollRange(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'CalHorizonalScrollRange'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B1754
// address: 0x001B1754   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B1754(int a1)
{
  ScrollFrame *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ScrollFrame", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (ScrollFrame *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'CalVerticalScrollRange'", 0);
    ScrollFrame::CalVerticalScrollRange(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'CalVerticalScrollRange'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B17BC
// address: 0x001B17BC   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B17BC(int a1)
{
  RichText *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setCursorNormal'", 0);
    RichText::setCursorNormal(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setCursorNormal'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B1824
// address: 0x001B1824   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B1824(int a1)
{
  RichText *v3; // r5
  double AccurateViewLines; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (RichText *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetAccurateViewLines'", 0);
    AccurateViewLines = (double)(int)RichText::GetAccurateViewLines(v3);
    tolua_pushnumber(a1, HIDWORD(AccurateViewLines), LODWORD(AccurateViewLines), HIDWORD(AccurateViewLines));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetAccurateViewLines'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B189C
// address: 0x001B189C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B189C(int a1)
{
  RichText *v3; // r5
  double ViewLines; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (RichText *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetViewLines'", 0);
    ViewLines = (double)(int)RichText::GetViewLines(v3);
    tolua_pushnumber(a1, HIDWORD(ViewLines), LODWORD(ViewLines), HIDWORD(ViewLines));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetViewLines'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B1914
// address: 0x001B1914   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B1914(int a1)
{
  RichText *v3; // r5
  double TotalHeight; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (RichText *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetTotalHeight'", 0);
    TotalHeight = (double)(int)RichText::GetTotalHeight(v3);
    tolua_pushnumber(a1, HIDWORD(TotalHeight), LODWORD(TotalHeight), HIDWORD(TotalHeight));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetTotalHeight'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B198C
// address: 0x001B198C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B198C(int a1)
{
  RichText *v3; // r5
  double TextLines; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (RichText *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetTextLines'", 0);
    TextLines = (double)(int)RichText::GetTextLines(v3);
    tolua_pushnumber(a1, HIDWORD(TextLines), LODWORD(TextLines), HIDWORD(TextLines));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetTextLines'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B1A04
// address: 0x001B1A04   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B1A04(int a1)
{
  RichText *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'ScrollEnd'", 0);
    RichText::ScrollEnd(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'ScrollEnd'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B1A6C
// address: 0x001B1A6C   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B1A6C(int a1)
{
  RichText *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'ScrollFirst'", 0);
    RichText::ScrollFirst(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'ScrollFirst'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B1AD4
// address: 0x001B1AD4   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B1AD4(int a1)
{
  RichText *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'ScrollDown'", 0);
    RichText::ScrollDown(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'ScrollDown'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B1B3C
// address: 0x001B1B3C   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B1B3C(int a1)
{
  RichText *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'ScrollUp'", 0);
    RichText::ScrollUp(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'ScrollUp'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B1BA4
// address: 0x001B1BA4   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B1BA4(int a1)
{
  RichText *v3; // r5
  double v4; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (RichText *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetEndDispPos'", 0);
    v4 = COERCE_FLOAT(RichText::GetEndDispPos(v3));
    tolua_pushnumber(a1, HIDWORD(v4), LODWORD(v4), HIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetEndDispPos'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B1C1C
// address: 0x001B1C1C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B1C1C(int a1)
{
  RichText *v3; // r5
  double v4; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (RichText *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetStartDispPos'", 0);
    v4 = COERCE_FLOAT(RichText::GetStartDispPos(v3));
    tolua_pushnumber(a1, HIDWORD(v4), LODWORD(v4), HIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetStartDispPos'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B1C94
// address: 0x001B1C94   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B1C94(int a1)
{
  RichText *v3; // r5
  double v4; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (RichText *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetDispPosX'", 0);
    v4 = COERCE_FLOAT(RichText::GetDispPosX(v3));
    tolua_pushnumber(a1, HIDWORD(v4), LODWORD(v4), HIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetDispPosX'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B1D0C
// address: 0x001B1D0C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B1D0C(int a1)
{
  RichText *v3; // r5
  double v4; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (RichText *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetDispPos'", 0);
    v4 = COERCE_FLOAT(RichText::GetDispPos(v3));
    tolua_pushnumber(a1, HIDWORD(v4), LODWORD(v4), HIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetDispPos'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B1D84
// address: 0x001B1D84   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B1D84(int a1)
{
  RichText *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'clearHistory'", 0);
    RichText::clearHistory(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'clearHistory'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B1DEC
// address: 0x001B1DEC   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B1DEC(int a1)
{
  RichText *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (RichText *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'Clear'", 0);
    RichText::Clear(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'Clear'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B1E54
// address: 0x001B1E54   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B1E54(int a1)
{
  RichText *v3; // r5
  double FaceHeight; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (RichText *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getFaceHeight'", 0);
    FaceHeight = (double)(int)RichText::getFaceHeight(v3);
    tolua_pushnumber(a1, HIDWORD(FaceHeight), LODWORD(FaceHeight), HIDWORD(FaceHeight));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getFaceHeight'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B1ECC
// address: 0x001B1ECC   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B1ECC(int a1)
{
  RichText *v3; // r5
  double FaceWidth; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (RichText *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getFaceWidth'", 0);
    FaceWidth = (double)(int)RichText::getFaceWidth(v3);
    tolua_pushnumber(a1, HIDWORD(FaceWidth), LODWORD(FaceWidth), HIDWORD(FaceWidth));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getFaceWidth'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B1F44
// address: 0x001B1F44   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_1B1F44(int a1)
{
  EditBox *v3; // r5
  int DefaultText; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (EditBox *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetDefaultText'", 0);
    DefaultText = EditBox::GetDefaultText(v3);
    tolua_pushstring(a1, DefaultText);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetDefaultText'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B1FB8
// address: 0x001B1FB8   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B1FB8(int a1)
{
  EditBox *v3; // r5
  double SelBegin; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (EditBox *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getSelBegin'", 0);
    SelBegin = (double)(int)EditBox::getSelBegin(v3);
    tolua_pushnumber(a1, HIDWORD(SelBegin), LODWORD(SelBegin), HIDWORD(SelBegin));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getSelBegin'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B2030
// address: 0x001B2030   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B2030(int a1)
{
  EditBox *v3; // r5
  double CursorPos; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (EditBox *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getCursorPos'", 0);
    CursorPos = (double)(int)EditBox::getCursorPos(v3);
    tolua_pushnumber(a1, HIDWORD(CursorPos), LODWORD(CursorPos), HIDWORD(CursorPos));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCursorPos'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B20A8
// address: 0x001B20A8   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B20A8(int a1)
{
  EditBox *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (EditBox *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SelectAllText'", 0);
    EditBox::SelectAllText(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SelectAllText'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B2110
// address: 0x001B2110   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B2110(int a1)
{
  EditBox *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (EditBox *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'clearHistory'", 0);
    EditBox::clearHistory(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'clearHistory'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B2178
// address: 0x001B2178   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_1B2178(int a1)
{
  EditBox *v3; // r5
  int PassWord; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (EditBox *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetPassWord'", 0);
    PassWord = EditBox::GetPassWord(v3);
    tolua_pushstring(a1, PassWord);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetPassWord'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B21EC
// address: 0x001B21EC   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_1B21EC(int a1)
{
  EditBox *v3; // r5
  int Text; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (EditBox *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetText'", 0);
    Text = EditBox::GetText(v3);
    tolua_pushstring(a1, Text);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetText'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B2260
// address: 0x001B2260   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B2260(int a1)
{
  EditBox *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (EditBox *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'Clear'", 0);
    EditBox::Clear(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'Clear'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B22C8
// address: 0x001B22C8   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_1B22C8(int a1)
{
  EditBox *v3; // r5
  int IsAnyTextSelect; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (EditBox *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'IsAnyTextSelect'", 0);
    IsAnyTextSelect = EditBox::IsAnyTextSelect(v3);
    tolua_pushboolean(a1, IsAnyTextSelect);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'IsAnyTextSelect'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B233C
// address: 0x001B233C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B233C(int a1)
{
  EditBox *v3; // r5
  double SelctTexLen; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "EditBox", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (EditBox *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetSelctTexLen'", 0);
    SelctTexLen = (double)(int)EditBox::GetSelctTexLen(v3);
    tolua_pushnumber(a1, HIDWORD(SelctTexLen), LODWORD(SelctTexLen), HIDWORD(SelctTexLen));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetSelctTexLen'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B23B4
// address: 0x001B23B4   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B23B4(int a1)
{
  Button *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (Button *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'ClearPushState'", 0);
    Button::ClearPushState(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'ClearPushState'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B241C
// address: 0x001B241C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B241C(int a1)
{
  Button *v3; // r5
  double v4; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (Button *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetAngle'", 0);
    v4 = COERCE_FLOAT(Button::GetAngle(v3));
    tolua_pushnumber(a1, HIDWORD(v4), LODWORD(v4), HIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetAngle'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B2494
// address: 0x001B2494   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_1B2494(int a1)
{
  Button *v3; // r5
  int IsChecked; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (Button *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'IsChecked'", 0);
    IsChecked = Button::IsChecked(v3);
    tolua_pushboolean(a1, IsChecked);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'IsChecked'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B2508
// address: 0x001B2508   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B2508(int a1)
{
  Button *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (Button *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'DisChecked'", 0);
    Button::DisChecked(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'DisChecked'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B2570
// address: 0x001B2570   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B2570(int a1)
{
  Button *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (Button *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'Checked'", 0);
    Button::Checked(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'Checked'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B25D8
// address: 0x001B25D8   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_1B25D8(int a1)
{
  Button *v3; // r5
  int IsHighlight; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (Button *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'IsHighlight'", 0);
    IsHighlight = Button::IsHighlight(v3);
    tolua_pushboolean(a1, IsHighlight);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'IsHighlight'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B264C
// address: 0x001B264C   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B264C(int a1)
{
  Button *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (Button *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'DisHighlight'", 0);
    Button::DisHighlight(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'DisHighlight'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B26B4
// address: 0x001B26B4   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B26B4(int a1)
{
  Button *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (Button *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'Highlight'", 0);
    Button::Highlight(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'Highlight'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B271C
// address: 0x001B271C   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_1B271C(int a1)
{
  Button *v3; // r5
  int IsEnable; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (Button *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'IsEnable'", 0);
    IsEnable = Button::IsEnable(v3);
    tolua_pushboolean(a1, IsEnable);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'IsEnable'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B2790
// address: 0x001B2790   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B2790(int a1)
{
  Button *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (Button *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'Enable'", 0);
    Button::Enable(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'Enable'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B27F8
// address: 0x001B27F8   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B27F8(int a1)
{
  Button *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (Button *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'Disable'", 0);
    Button::Disable(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'Disable'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B2860
// address: 0x001B2860   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_1B2860(int a1)
{
  Button *v3; // r5
  int PushedState; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (Button *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetPushedState'", 0);
    PushedState = Button::GetPushedState(v3);
    tolua_pushboolean(a1, PushedState);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetPushedState'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B28D4
// address: 0x001B28D4   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B28D4(int a1)
{
  Button *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (Button *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'SetPushedState'", 0);
    Button::SetPushedState(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetPushedState'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B293C
// address: 0x001B293C   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_1B293C(int a1)
{
  Button *v3; // r5
  int Text; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (Button *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetText'", 0);
    Text = Button::GetText(v3);
    tolua_pushstring(a1, Text);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetText'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B29B0
// address: 0x001B29B0   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_1B29B0(int a1)
{
  Button *v3; // r5
  int IsCooldown; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (Button *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'IsCooldown'", 0);
    IsCooldown = Button::IsCooldown(v3);
    tolua_pushboolean(a1, IsCooldown);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'IsCooldown'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B2A24
// address: 0x001B2A24   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B2A24(int a1)
{
  Frame *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Frame", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (Frame *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'EndMoveFrame'", 0);
    Frame::EndMoveFrame(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'EndMoveFrame'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B2A8C
// address: 0x001B2A8C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B2A8C(int a1)
{
  Frame *v3; // r5
  double v4; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Frame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (Frame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetBackDropBlendAlpha'", 0);
    v4 = COERCE_FLOAT(Frame::GetBackDropBlendAlpha(v3));
    tolua_pushnumber(a1, HIDWORD(v4), LODWORD(v4), HIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetBackDropBlendAlpha'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B2B04
// address: 0x001B2B04   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B2B04(int a1)
{
  Frame *v3; // r5
  double FrameLevel; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Frame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (Frame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetFrameLevel'", 0);
    FrameLevel = (double)(int)Frame::GetFrameLevel(v3);
    tolua_pushnumber(a1, HIDWORD(FrameLevel), LODWORD(FrameLevel), HIDWORD(FrameLevel));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetFrameLevel'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B2B7C
// address: 0x001B2B7C   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B2B7C(int a1)
{
  Texture *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (Texture *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'StopAlphaAmin'", 0);
    Texture::StopAlphaAmin(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'StopAlphaAmin'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B2BE4
// address: 0x001B2BE4   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B2BE4(int a1)
{
  Texture *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (Texture *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'StopUVAnim'", 0);
    Texture::StopUVAnim(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'StopUVAnim'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B2C4C
// address: 0x001B2C4C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B2C4C(int a1)
{
  Texture *v3; // r5
  double v4; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (Texture *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetBlendAlpha'", 0);
    v4 = COERCE_FLOAT(Texture::GetBlendAlpha(v3));
    tolua_pushnumber(a1, HIDWORD(v4), LODWORD(v4), HIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetBlendAlpha'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B2CC4
// address: 0x001B2CC4   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B2CC4(int a1)
{
  Texture *v3; // r5
  double RelHeight; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (Texture *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getRelHeight'", 0);
    RelHeight = (double)(int)Texture::getRelHeight(v3);
    tolua_pushnumber(a1, HIDWORD(RelHeight), LODWORD(RelHeight), HIDWORD(RelHeight));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getRelHeight'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B2D3C
// address: 0x001B2D3C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B2D3C(int a1)
{
  Texture *v3; // r5
  double RelWidth; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (Texture *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getRelWidth'", 0);
    RelWidth = (double)(int)Texture::getRelWidth(v3);
    tolua_pushnumber(a1, HIDWORD(RelWidth), LODWORD(RelWidth), HIDWORD(RelWidth));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getRelWidth'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B2DB4
// address: 0x001B2DB4   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B2DB4(int a1)
{
  Texture *v3; // r5
  double v4; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (Texture *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetAngle'", 0);
    v4 = COERCE_FLOAT(Texture::GetAngle(v3));
    tolua_pushnumber(a1, HIDWORD(v4), LODWORD(v4), HIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetAngle'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B2E2C
// address: 0x001B2E2C   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_1B2E2C(int a1)
{
  Texture *v3; // r5
  int Texture; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (Texture *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetTexture'", 0);
    Texture = Texture::GetTexture(v3);
    tolua_pushstring(a1, Texture);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetTexture'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B2EA0
// address: 0x001B2EA0   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_1B2EA0(int a1)
{
  Texture *v3; // r5
  int IsGray; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (Texture *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'IsGray'", 0);
    IsGray = Texture::IsGray(v3);
    tolua_pushboolean(a1, IsGray);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'IsGray'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B2F14
// address: 0x001B2F14   size: 0x74 (116 bytes)
//======================================================================
int __fastcall sub_1B2F14(int a1)
{
  Texture *v3; // r5
  int TextureHuires; // r5
  _DWORD *v5; // r0
  _BYTE v6[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v6) != 0 && tolua_isnoobj(a1, 2, v6) != 0 )
  {
    v3 = (Texture *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetTextureHuires'", 0);
    TextureHuires = Texture::GetTextureHuires(v3);
    v5 = (_DWORD *)operator new(4u);
    *v5 = TextureHuires;
    tolua_pushusertype_and_takeownership(a1, v5, "Ogre::HUIRES");
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetTextureHuires'.", v6);
    return 0;
  }
}


//======================================================================
// sub_1B2F98
// address: 0x001B2F98   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B2F98(int a1)
{
  FontString *v3; // r5
  double v4; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "FontString", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (FontString *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetBlendAlpha'", 0);
    v4 = COERCE_FLOAT(FontString::GetBlendAlpha(v3));
    tolua_pushnumber(a1, HIDWORD(v4), LODWORD(v4), HIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetBlendAlpha'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B3010
// address: 0x001B3010   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_1B3010(int a1)
{
  FontString *v3; // r5
  int Text; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "FontString", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (FontString *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetText'", 0);
    Text = FontString::GetText(v3);
    tolua_pushstring(a1, Text);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetText'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B3084
// address: 0x001B3084   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B3084(int a1)
{
  LayoutFrame *v3; // r5
  double FrameDrawLevel; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getFrameDrawLevel'", 0);
    FrameDrawLevel = (double)(int)LayoutFrame::getFrameDrawLevel(v3);
    tolua_pushnumber(a1, HIDWORD(FrameDrawLevel), LODWORD(FrameDrawLevel), HIDWORD(FrameDrawLevel));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getFrameDrawLevel'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B30FC
// address: 0x001B30FC   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_1B30FC(int a1)
{
  LayoutFrame *v3; // r5
  int ClientString; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetClientString'", 0);
    ClientString = LayoutFrame::GetClientString(v3);
    tolua_pushstring(a1, ClientString);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetClientString'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B3170
// address: 0x001B3170   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B3170(int a1)
{
  LayoutFrame *v3; // r5
  double ClientID; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetClientID'", 0);
    ClientID = (double)(int)LayoutFrame::GetClientID(v3);
    tolua_pushnumber(a1, HIDWORD(ClientID), LODWORD(ClientID), HIDWORD(ClientID));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetClientID'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B31E8
// address: 0x001B31E8   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_1B31E8(int a1)
{
  LayoutFrame *v3; // r5
  int ParentFrame; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetParentFrame'", 0);
    ParentFrame = LayoutFrame::GetParentFrame(v3);
    tolua_pushusertype(a1, ParentFrame, "Frame");
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetParentFrame'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B3264
// address: 0x001B3264   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_1B3264(int a1)
{
  LayoutFrame *v3; // r5
  int Parent; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetParent'", 0);
    Parent = LayoutFrame::GetParent(v3);
    tolua_pushstring(a1, Parent);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetParent'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B32D8
// address: 0x001B32D8   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B32D8(int a1)
{
  LayoutFrame *v3; // r5
  double RealBottom; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetRealBottom'", 0);
    RealBottom = (double)(int)LayoutFrame::GetRealBottom(v3);
    tolua_pushnumber(a1, HIDWORD(RealBottom), LODWORD(RealBottom), HIDWORD(RealBottom));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetRealBottom'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B3350
// address: 0x001B3350   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B3350(int a1)
{
  LayoutFrame *v3; // r5
  double RealTop; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetRealTop'", 0);
    RealTop = (double)(int)LayoutFrame::GetRealTop(v3);
    tolua_pushnumber(a1, HIDWORD(RealTop), LODWORD(RealTop), HIDWORD(RealTop));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetRealTop'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B33C8
// address: 0x001B33C8   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B33C8(int a1)
{
  LayoutFrame *v3; // r5
  double RealRight; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetRealRight'", 0);
    RealRight = (double)(int)LayoutFrame::GetRealRight(v3);
    tolua_pushnumber(a1, HIDWORD(RealRight), LODWORD(RealRight), HIDWORD(RealRight));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetRealRight'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B3440
// address: 0x001B3440   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B3440(int a1)
{
  LayoutFrame *v3; // r5
  double RealLeft; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetRealLeft'", 0);
    RealLeft = (double)(int)LayoutFrame::GetRealLeft(v3);
    tolua_pushnumber(a1, HIDWORD(RealLeft), LODWORD(RealLeft), HIDWORD(RealLeft));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetRealLeft'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B34B8
// address: 0x001B34B8   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B34B8(int a1)
{
  LayoutFrame *v3; // r5
  double RealWidth; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetRealWidth'", 0);
    RealWidth = (double)(int)LayoutFrame::GetRealWidth(v3);
    tolua_pushnumber(a1, HIDWORD(RealWidth), LODWORD(RealWidth), HIDWORD(RealWidth));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetRealWidth'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B3530
// address: 0x001B3530   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B3530(int a1)
{
  LayoutFrame *v3; // r5
  double RealHeight; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetRealHeight'", 0);
    RealHeight = (double)(int)LayoutFrame::GetRealHeight(v3);
    tolua_pushnumber(a1, HIDWORD(RealHeight), LODWORD(RealHeight), HIDWORD(RealHeight));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetRealHeight'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B35A8
// address: 0x001B35A8   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B35A8(int a1)
{
  LayoutFrame *v3; // r5
  double Height; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetHeight'", 0);
    Height = (double)(int)LayoutFrame::GetHeight(v3);
    tolua_pushnumber(a1, HIDWORD(Height), LODWORD(Height), HIDWORD(Height));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetHeight'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B3620
// address: 0x001B3620   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B3620(int a1)
{
  LayoutFrame *v3; // r5
  double Width; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetWidth'", 0);
    Width = (double)(int)LayoutFrame::GetWidth(v3);
    tolua_pushnumber(a1, HIDWORD(Width), LODWORD(Width), HIDWORD(Width));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetWidth'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B3698
// address: 0x001B3698   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B3698(int a1)
{
  LayoutFrame *v3; // r5
  double Bottom; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetBottom'", 0);
    Bottom = (double)(int)LayoutFrame::GetBottom(v3);
    tolua_pushnumber(a1, HIDWORD(Bottom), LODWORD(Bottom), HIDWORD(Bottom));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetBottom'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B3710
// address: 0x001B3710   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B3710(int a1)
{
  LayoutFrame *v3; // r5
  double Top; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetTop'", 0);
    Top = (double)(int)LayoutFrame::GetTop(v3);
    tolua_pushnumber(a1, HIDWORD(Top), LODWORD(Top), HIDWORD(Top));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetTop'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B3788
// address: 0x001B3788   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B3788(int a1)
{
  LayoutFrame *v3; // r5
  double Right; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetRight'", 0);
    Right = (double)(int)LayoutFrame::GetRight(v3);
    tolua_pushnumber(a1, HIDWORD(Right), LODWORD(Right), HIDWORD(Right));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetRight'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B3800
// address: 0x001B3800   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B3800(int a1)
{
  LayoutFrame *v3; // r5
  double Left; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetLeft'", 0);
    Left = (double)(int)LayoutFrame::GetLeft(v3);
    tolua_pushnumber(a1, HIDWORD(Left), LODWORD(Left), HIDWORD(Left));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetLeft'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B3878
// address: 0x001B3878   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B3878(int a1)
{
  LayoutFrame *v3; // r5
  double v4; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetAnchorOffsetY'", 0);
    v4 = COERCE_FLOAT(LayoutFrame::GetAnchorOffsetY(v3));
    tolua_pushnumber(a1, HIDWORD(v4), LODWORD(v4), HIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetAnchorOffsetY'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B38F0
// address: 0x001B38F0   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B38F0(int a1)
{
  LayoutFrame *v3; // r5
  double v4; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetAnchorOffsetX'", 0);
    v4 = COERCE_FLOAT(LayoutFrame::GetAnchorOffsetX(v3));
    tolua_pushnumber(a1, HIDWORD(v4), LODWORD(v4), HIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetAnchorOffsetX'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B3968
// address: 0x001B3968   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_1B3968(int a1)
{
  LayoutFrame *v3; // r5
  int IsShown; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'IsShown'", 0);
    IsShown = LayoutFrame::IsShown(v3);
    tolua_pushboolean(a1, IsShown);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'IsShown'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B39DC
// address: 0x001B39DC   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B39DC(int a1)
{
  LayoutFrame *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'Hide'", 0);
    LayoutFrame::Hide(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'Hide'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B3A44
// address: 0x001B3A44   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B3A44(int a1)
{
  LayoutFrame *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'Active'", 0);
    LayoutFrame::Active(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'Active'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B3AAC
// address: 0x001B3AAC   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B3AAC(int a1)
{
  LayoutFrame *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (LayoutFrame *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'Show'", 0);
    LayoutFrame::Show(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'Show'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B3B14
// address: 0x001B3B14   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B3B14(int a1)
{
  tagRect_ToLua *v3; // r5
  double v4; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "tagRect_ToLua", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (tagRect_ToLua *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getHeight'", 0);
    v4 = COERCE_FLOAT(tagRect_ToLua::getHeight(v3));
    tolua_pushnumber(a1, HIDWORD(v4), LODWORD(v4), HIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getHeight'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B3B8C
// address: 0x001B3B8C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B3B8C(int a1)
{
  tagRect_ToLua *v3; // r5
  double v4; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "tagRect_ToLua", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (tagRect_ToLua *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getWidth'", 0);
    v4 = COERCE_FLOAT(tagRect_ToLua::getWidth(v3));
    tolua_pushnumber(a1, HIDWORD(v4), LODWORD(v4), HIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getWidth'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B3C04
// address: 0x001B3C04   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B3C04(int a1)
{
  tagRect_ToLua *v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "tagRect_ToLua", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = (tagRect_ToLua *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'empty'", 0);
    tagRect_ToLua::empty(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'empty'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B3C6C
// address: 0x001B3C6C   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_1B3C6C(int a1)
{
  UIObject *v3; // r5
  int Name; // r0
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "UIObject", 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (UIObject *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'GetName'", 0);
    Name = UIObject::GetName(v3);
    tolua_pushstring(a1, Name);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetName'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B3CE0
// address: 0x001B3CE0   size: 0x5E (94 bytes)
//======================================================================
int __fastcall sub_1B3CE0(int a1)
{
  unsigned int v3; // r0
  _BYTE v4[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isnumber(a1, 1, 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v3 = (unsigned int)tolua_tonumber(a1, 1, 0, 0);
    tolua_pushboolean(a1, (unsigned __int8)(v3 - 48) <= 9u);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'IsDigit'.", v4);
    return 0;
  }
}


//======================================================================
// sub_1B3D50
// address: 0x001B3D50   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B3D50(int a1)
{
  int v3; // r0
  _BOOL4 v4; // r1
  _BYTE v5[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isnumber(a1, 1, 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (unsigned __int8)(unsigned int)tolua_tonumber(a1, 1, 0, 0);
    v4 = true;
    if ( (unsigned int)(v3 - 65) > 0x19 )
      v4 = (unsigned __int8)(v3 - 97) <= 0x19u;
    tolua_pushboolean(a1, v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'IsAlpha'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B3DD0
// address: 0x001B3DD0   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_1B3DD0(int a1)
{
  unsigned int v3; // r0
  _BOOL4 v4; // r1
  _BYTE v5[16]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isnumber(a1, 1, 0, v5) != 0 && tolua_isnoobj(a1, 2, v5) != 0 )
  {
    v3 = (unsigned int)tolua_tonumber(a1, 1, 0, 0);
    v4 = (unsigned __int8)v3 > 0x1Fu && (unsigned __int8)v3 != 127;
    tolua_pushboolean(a1, v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'IsPrint'.", v5);
    return 0;
  }
}


//======================================================================
// sub_1B3E48
// address: 0x001B3E48   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_1B3E48(int a1)
{
  _DWORD *v3; // r0
  _BYTE v4[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertable(a1, 1, "tagRect_ToLua", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v3 = (_DWORD *)operator new(0x10u);
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    v3[3] = 0;
    tolua_pushusertype_and_takeownership(a1, v3, "tagRect_ToLua");
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'new'.", v4);
    return 0;
  }
}


//======================================================================
// sub_1B3EAC
// address: 0x001B3EAC   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_1B3EAC(int a1)
{
  _DWORD *v3; // r0
  _BYTE v4[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertable(a1, 1, "tagRect_ToLua", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v3 = (_DWORD *)operator new(0x10u);
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    v3[3] = 0;
    tolua_pushusertype(a1, v3, "tagRect_ToLua");
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'new'.", v4);
    return 0;
  }
}


//======================================================================
// sub_1B3F10
// address: 0x001B3F10   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_1B3F10(int a1)
{
  int v3; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LayoutFrame", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'GetSelfScale'", 0);
    tolua_pushnumber(
      a1,
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v3 + 224))),
      COERCE_UNSIGNED_INT64(*(float *)(v3 + 224)),
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v3 + 224))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetSelfScale'.", v4);
    return 0;
  }
}


//======================================================================
// sub_1B3F88
// address: 0x001B3F88   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_1B3F88(int a1)
{
  int v3; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "FontString", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'GetBuffStart'", 0);
    tolua_pushnumber(
      a1,
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v3 + 300))),
      COERCE_UNSIGNED_INT64(*(float *)(v3 + 300)),
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v3 + 300))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetBuffStart'.", v4);
    return 0;
  }
}


//======================================================================
// sub_1B4000
// address: 0x001B4000   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_1B4000(int a1)
{
  int v3; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "FontString", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'GetBuffTotal'", 0);
    tolua_pushnumber(
      a1,
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v3 + 304))),
      COERCE_UNSIGNED_INT64(*(float *)(v3 + 304)),
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v3 + 304))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetBuffTotal'.", v4);
    return 0;
  }
}


//======================================================================
// sub_1B4078
// address: 0x001B4078   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_1B4078(int a1)
{
  int v3; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Texture", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'IsPlayAlphaAnim'", 0);
    tolua_pushboolean(a1, *(unsigned __int8 *)(v3 + 544));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'IsPlayAlphaAnim'.", v4);
    return 0;
  }
}


//======================================================================
// sub_1B40E8
// address: 0x001B40E8   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_1B40E8(int a1)
{
  int v3; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "FrameManager", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'GetEditMode'", 0);
    tolua_pushnumber(
      a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 304))),
      COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 304)),
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 304))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetEditMode'.", v4);
    return 0;
  }
}


//======================================================================
// sub_1B4160
// address: 0x001B4160   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1B4160(int a1)
{
  int v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "FrameManager", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'ForceUpdateFramePos'", 0);
    *(_BYTE *)(v2 + 188) = 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'ForceUpdateFramePos'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B41C8
// address: 0x001B41C8   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B41C8(int a1)
{
  int v3; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'GetCoolStart'", 0);
    tolua_pushnumber(
      a1,
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v3 + 464))),
      COERCE_UNSIGNED_INT64(*(float *)(v3 + 464)),
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v3 + 464))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetCoolStart'.", v4);
    return 0;
  }
}


//======================================================================
// sub_1B4240
// address: 0x001B4240   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B4240(int a1)
{
  int v3; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "Button", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'GetCoolTotal'", 0);
    tolua_pushnumber(
      a1,
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v3 + 468))),
      COERCE_UNSIGNED_INT64(*(float *)(v3 + 468)),
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v3 + 468))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetCoolTotal'.", v4);
    return 0;
  }
}


//======================================================================
// sub_1B42B8
// address: 0x001B42B8   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_1B42B8(int a1)
{
  int v2; // r7
  float v3; // r0
  float v4; // r4
  _BYTE v6[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v6) == 0
    || tolua_isnumber(a1, 2, 0, v6) == 0
    || tolua_isnoobj(a1, 3, v6) == 0 )
  {
    tolua_error(a1, "#ferror in function 'SetAlpha'.", v6);
    return 0;
  }
  v2 = tolua_tousertype(a1, 1, 0);
  v3 = tolua_tonumber(a1, 2, 0, 0);
  v4 = v3;
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in function 'SetAlpha'", 0);
  if ( v4 < 0.0 )
  {
    v4 = 0.0;
  }
  else if ( v4 > 1.0 )
  {
    *(_DWORD *)(v2 + 468) = 1065353216;
    return 0;
  }
  *(float *)(v2 + 468) = v4;
  return 0;
}


//======================================================================
// sub_1B4378
// address: 0x001B4378   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1B4378(int a1)
{
  int v3; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "RichText", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'GetAlpha'", 0);
    tolua_pushnumber(
      a1,
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v3 + 468))),
      COERCE_UNSIGNED_INT64(*(float *)(v3 + 468)),
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v3 + 468))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'GetAlpha'.", v4);
    return 0;
  }
}


//======================================================================
// sub_1B43F0
// address: 0x001B43F0   size: 0x5E (94 bytes)
//======================================================================
int __fastcall sub_1B43F0(int a1)
{
  int v2; // r5
  _BYTE v4[16]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ScrollFrame", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'ResetChildAnchor'", 0);
    *(_BYTE *)(v2 + 468) = 0;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'ResetChildAnchor'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B445C
// address: 0x001B445C   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall sub_1B445C(int a1)
{
  int v2; // r5
  char *v3; // r1
  int LayoutFrame; // r0
  int v6; // [sp+10h] [bp-10h] BYREF
  _BYTE v7[12]; // [sp+14h] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "FrameManager", 0, v7) != 0
    && tolua_isstring(a1, 2, 0, v7) != 0
    && tolua_isnoobj(a1, 3, v7) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = (char *)tolua_tostring(a1, 2, 0);
    if ( v3 == nullptr )
      v3 = (char *)&unk_3FB8EA;
    sub_3BF0BC((int)&v6, v3);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'FindLayoutFrame'", 0);
    LayoutFrame = FrameManager::FindLayoutFrame(v2);
    tolua_pushusertype(a1, LayoutFrame, "LayoutFrame");
    tolua_pushstring(a1, v6);
    sub_3BDF80(&v6);
    return 2;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'FindLayoutFrame'.", v7);
    return 0;
  }
}


//======================================================================
// sub_1B685C
// address: 0x001B685C   size: 0x6E (110 bytes)
//======================================================================
int __fastcall sub_1B685C(int a1)
{
  int v2; // r5
  _BYTE v4[12]; // [sp+Ch] [bp-1Ch] BYREF
  int v5[4]; // [sp+18h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "DrawLineFrame", 0, v4) != 0 && tolua_isnoobj(a1, 2, v4) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'ClearDrawPointList'", 0);
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(
      v5,
      (_DWORD *)(v2 + 260));
    std::deque<Ogre::TVector2<int>>::_M_erase_at_end(v2 + 252, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'ClearDrawPointList'.", v4);
  }
  return 0;
}


//======================================================================
// sub_1B6A56
// address: 0x001B6A56   size: 0x70 (112 bytes)
//======================================================================
int *__fastcall sub_1B6A56(int *a1, int a2, int a3, int a4, int a5, _DWORD *a6, _DWORD *a7)
{
  _DWORD *v8; // r4
  _DWORD *v10; // r3
  _DWORD *v12; // [sp+4h] [bp-4h]
  _DWORD v13[4]; // [sp+8h] [bp+0h] BYREF
  _DWORD var14[14]; // [sp+18h] [bp+10h] BYREF

  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v13, a7);
  v8 = (_DWORD *)var14[11];
  v12 = (_DWORD *)var14[13];
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(var14, v13);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(a1, var14);
  while ( v8 != a6 )
  {
    v10 = (_DWORD *)*a1;
    if ( *a1 != 0 )
    {
      *v10 = *v8;
      v10[1] = v8[1];
    }
    v8 += 2;
    if ( v8 == v12 )
    {
      v8 = *(_DWORD **)(a5 + 4);
      v12 = v8 + 128;
      a5 += 4;
    }
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator++(a1);
  }
  return a1;
}


//======================================================================
// sub_1B6B92
// address: 0x001B6B92   size: 0x94 (148 bytes)
//======================================================================
int *__fastcall sub_1B6B92(int *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v6; // r3
  _DWORD *v7; // r2
  _DWORD v10[4]; // [sp+8h] [bp-20h] BYREF
  _DWORD v11[4]; // [sp+18h] [bp-10h] BYREF
  _DWORD v12[4]; // [sp+28h] [bp+0h] BYREF
  _DWORD v13[4]; // [sp+38h] [bp+10h] BYREF
  _DWORD v14[4]; // [sp+48h] [bp+20h] BYREF
  _DWORD v15[4]; // [sp+58h] [bp+30h] BYREF
  _DWORD v16[4]; // [sp+68h] [bp+40h] BYREF
  _DWORD v17[4]; // [sp+78h] [bp+50h] BYREF
  int v18[5]; // [sp+88h] [bp+60h] BYREF

  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v12, a2);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v11, a3);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v10, a4);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v13, v12);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v14, v11);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v15, v10);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v18, v13);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v17, v14);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v16, v15);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(a1, v16);
  while ( 1 )
  {
    v6 = v18[0];
    if ( v18[0] == v17[0] )
      break;
    v7 = (_DWORD *)*a1;
    if ( *a1 != 0 )
    {
      *v7 = *(_DWORD *)v18[0];
      v7[1] = *(_DWORD *)(v6 + 4);
    }
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator++(v18);
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator++(a1);
  }
  return a1;
}


//======================================================================
// sub_1B751C
// address: 0x001B751C   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall sub_1B751C(int a1)
{
  int v2; // r5
  int v3; // r0
  _BYTE v5[12]; // [sp+Ch] [bp-5Ch] BYREF
  _DWORD v6[10]; // [sp+18h] [bp-50h] BYREF
  _DWORD v7[10]; // [sp+40h] [bp-28h] BYREF

  if ( tolua_isusertype(a1, 1, "DrawLineFrame", 0, v5) != 0
    && tolua_isusertype(a1, 2, "std::deque<Ogre::Point2D>", 0, v5) != 0
    && tolua_isnoobj(a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_tousertype(a1, 2, 0);
    std::deque<Ogre::TVector2<int>>::deque(v6, v3);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'SetDrawPointList'", 0);
    std::deque<Ogre::TVector2<int>>::deque(v7, (int)v6);
    std::deque<Ogre::TVector2<int>>::operator=(v2 + 252, (int)v7);
    std::deque<Ogre::TVector2<int>>::~deque((int)v7);
    std::deque<Ogre::TVector2<int>>::~deque((int)v6);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'SetDrawPointList'.", v5);
  }
  return 0;
}


//======================================================================
// sub_1B7A8C
// address: 0x001B7A8C   size: 0x70 (112 bytes)
//======================================================================
int *__fastcall sub_1B7A8C(int *a1, int a2, int a3, int a4, int a5, _DWORD *a6, _DWORD *a7)
{
  _DWORD *v8; // r4
  _DWORD *v10; // r3
  _DWORD *v12; // [sp+4h] [bp-4h]
  _DWORD v13[4]; // [sp+8h] [bp+0h] BYREF
  _DWORD var14[14]; // [sp+18h] [bp+10h] BYREF

  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v13, a7);
  v8 = (_DWORD *)var14[11];
  v12 = (_DWORD *)var14[13];
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(var14, v13);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(a1, var14);
  while ( v8 != a6 )
  {
    v10 = (_DWORD *)*a1;
    if ( *a1 != 0 )
    {
      *v10 = *v8;
      v10[1] = v8[1];
    }
    v8 += 2;
    if ( v8 == v12 )
    {
      v8 = *(_DWORD **)(a5 + 4);
      v12 = v8 + 128;
      a5 += 4;
    }
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator++(a1);
  }
  return a1;
}


//======================================================================
// sub_1B7AFC
// address: 0x001B7AFC   size: 0x94 (148 bytes)
//======================================================================
int *__fastcall sub_1B7AFC(int *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v6; // r3
  _DWORD *v7; // r2
  _DWORD v10[4]; // [sp+8h] [bp-20h] BYREF
  _DWORD v11[4]; // [sp+18h] [bp-10h] BYREF
  _DWORD v12[4]; // [sp+28h] [bp+0h] BYREF
  _DWORD v13[4]; // [sp+38h] [bp+10h] BYREF
  _DWORD v14[4]; // [sp+48h] [bp+20h] BYREF
  _DWORD v15[4]; // [sp+58h] [bp+30h] BYREF
  _DWORD v16[4]; // [sp+68h] [bp+40h] BYREF
  _DWORD v17[4]; // [sp+78h] [bp+50h] BYREF
  int v18[5]; // [sp+88h] [bp+60h] BYREF

  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v12, a2);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v11, a3);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v10, a4);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v13, v12);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v14, v11);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v15, v10);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v18, v13);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v17, v14);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(v16, v15);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(a1, v16);
  while ( 1 )
  {
    v6 = v18[0];
    if ( v18[0] == v17[0] )
      break;
    v7 = (_DWORD *)*a1;
    if ( *a1 != 0 )
    {
      *v7 = *(_DWORD *)v18[0];
      v7[1] = *(_DWORD *)(v6 + 4);
    }
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator++(v18);
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator++(a1);
  }
  return a1;
}


//======================================================================
// sub_1B7D80
// address: 0x001B7D80   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_1B7D80(unsigned int a1)
{
  if ( a1 > 0x3FFFFFFF )
    sub_3BCEB4(a1);
  return operator new(4 * a1);
}


//======================================================================
// sub_1B8968
// address: 0x001B8968   size: 0x32 (50 bytes)
//======================================================================
unsigned int __fastcall sub_1B8968(int a1, int a2)
{
  int v2; // r2
  int v3; // r3
  unsigned int v4; // r0

  v2 = *(_DWORD *)(a1 + 44);
  v3 = *(_DWORD *)(a2 + 44);
  if ( v2 == v3 )
    v4 = (*(_QWORD *)(a2 + 48) > *(_QWORD *)(a1 + 48)) << 24;
  else
    v4 = (v2 < v3) << 24;
  return HIBYTE(v4);
}


//======================================================================
// sub_1B899A
// address: 0x001B899A   size: 0x3A (58 bytes)
//======================================================================
unsigned int __fastcall sub_1B899A(int a1, int a2)
{
  int v2; // r3
  int v3; // r2
  unsigned int v4; // r0

  v2 = *(_DWORD *)(a1 + 44);
  if ( v2 == 9 )
    return 0;
  v3 = *(_DWORD *)(a2 + 44);
  if ( v2 == v3 )
    v4 = (*(_QWORD *)(a1 + 48) > *(_QWORD *)(a2 + 48)) << 24;
  else
    v4 = (v2 > v3) << 24;
  return HIBYTE(v4);
}


//======================================================================
// sub_1BA238
// address: 0x001BA238   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_1BA238(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}


//======================================================================
// sub_1BA244
// address: 0x001BA244   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_1BA244(unsigned int a1)
{
  if ( a1 > 0x3FFFFFFF )
    sub_3BCEB4(a1);
  return operator new(4 * a1);
}


//======================================================================
// sub_1BCD28
// address: 0x001BCD28   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_1BCD28(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}


//======================================================================
// sub_1BCD34
// address: 0x001BCD34   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_1BCD34(unsigned int a1)
{
  if ( a1 > 0x3FFFFFFF )
    sub_3BCEB4(a1);
  return operator new(4 * a1);
}

