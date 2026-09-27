// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: FrameManager

//======================================================================
// FrameManager::UpdateGameFont(void)
// address: 0x001A0E84   size: 0x10C (268 bytes)
//======================================================================
float __fastcall FrameManager::UpdateGameFont(FrameManager *this)
{
  float *v1; // r4
  float result; // r0
  unsigned int v3; // r7
  int v4; // r3
  int v5; // r4
  int v6; // r1
  int v7; // r0
  int v8; // r1
  int v9; // r6
  int v10; // r3
  int v11; // r2
  int v12; // [sp+8h] [bp-14h]
  int v13; // [sp+Ch] [bp-10h]
  float v15; // [sp+14h] [bp-8h]

  v1 = (float *)((char *)this + 156);
  v15 = *((float *)this + 5) * *(float *)this;
  LODWORD(result) = v15 == *((float *)this + 39);
  if ( result == 0.0 )
  {
    v3 = 0;
    *v1 = v15;
    while ( 1 )
    {
      v4 = *((_DWORD *)this + 36);
      if ( v3 >= (*((_DWORD *)this + 37) - v4) >> 5 )
        break;
      v5 = v4 + 32 * v3;
      v6 = *(_DWORD *)(v5 + 20);
      if ( *(_BYTE *)(v5 + 8) != 0 )
      {
        if ( v6 == 0 )
        {
          v7 = (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)g_pDisplay + 24))(
                 g_pDisplay,
                 *(_DWORD *)(v5 + 4),
                 1);
          *(_DWORD *)(v5 + 20) = v7;
          result = (float)*(unsigned int *)(v5 + 12)
                 / (float)(*(int (__fastcall **)(int, int))(*(_DWORD *)g_pDisplay + 32))(g_pDisplay, v7);
          *(float *)(v5 + 24) = result;
        }
      }
      else
      {
        if ( v6 != 0 )
          (*(void (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 28))(g_pDisplay);
        v8 = 10000;
        v9 = -1;
        v10 = 0;
        while ( 1 )
        {
          v12 = (int)(float)((float)((float)*(unsigned int *)(v5 + 16) * v15) + 0.5);
          v13 = (*(_DWORD *)&asc_42EE64[4 * v10] - v12 + ((*(_DWORD *)&asc_42EE64[4 * v10] - v12) >> 31))
              ^ ((*(_DWORD *)&asc_42EE64[4 * v10] - v12) >> 31);
          if ( v13 < v8 )
            v9 = v10;
          else
            v13 = v8;
          if ( ++v10 == 10 )
            break;
          v8 = v13;
        }
        v11 = *(_DWORD *)&asc_42EE64[4 * v9];
        *(_DWORD *)(v5 + 12) = v11;
        result = COERCE_FLOAT(
                   (*(int (__fastcall **)(int, int, int, _DWORD, int, _DWORD))(*(_DWORD *)g_pDisplay + 20))(
                     g_pDisplay,
                     v11,
                     v11,
                     *(_DWORD *)(v5 + 4),
                     1,
                     *(_DWORD *)(v5 + 28)));
        *(float *)(v5 + 20) = result;
      }
      ++v3;
    }
  }
  return result;
}


//======================================================================
// FrameManager::UpdateChangedFrames(void)
// address: 0x001A0FA4   size: 0x7E (126 bytes)
//======================================================================
int __fastcall FrameManager::UpdateChangedFrames(FrameManager *this)
{
  int **v1; // r6
  int result; // r0
  int *v3; // r4
  int *v4; // r5
  int *v5; // r7
  int *i; // r7
  int v7; // r4
  int **v8; // [sp+Ch] [bp-8h]

  v1 = (int **)((char *)this + 192);
  result = (int)this + 196;
  v3 = *v1;
  v4 = *(int **)result;
  v8 = (int **)result;
  if ( *v1 != *(int **)result )
  {
    while ( 1 )
    {
      v5 = v3 + 1;
      if ( v3 + 1 == v4 )
        break;
      result = mod_equal(*v3, v3[1]);
      if ( result != 0 )
      {
        if ( v3 != v4 )
        {
          while ( v4 != v5 + 1 )
          {
            result = mod_equal(*v3, v5[1]);
            if ( result == 0 )
              *++v3 = v5[1];
            ++v5;
          }
          v4 = v3 + 1;
        }
        break;
      }
      ++v3;
    }
    for ( i = *v1; i != v4; ++i )
    {
      v7 = *i;
      if ( *i != 0 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(*i);
        result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v7 + 24))(v7, -1);
      }
    }
    *v8 = *v1;
  }
  return result;
}


//======================================================================
// FrameManager::GetAllSelfScale(void)
// address: 0x001A1022   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FrameManager::GetAllSelfScale(FrameManager *this)
{
  return *(_DWORD *)this;
}


//======================================================================
// FrameManager::UpdateAllSelfScale(float)
// address: 0x001A1026   size: 0xA (10 bytes)
//======================================================================
_BYTE *__fastcall FrameManager::UpdateAllSelfScale(FrameManager *this, float a2)
{
  _BYTE *result; // r0

  *(float *)this = a2;
  result = (char *)this + 188;
  *result = 1;
  return result;
}


//======================================================================
// FrameManager::GetCalAbsRectFrame(void)
// address: 0x001A1060   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FrameManager::GetCalAbsRectFrame(FrameManager *this)
{
  return *((_DWORD *)this + 1);
}


//======================================================================
// FrameManager::GetRootFrame(Frame *)
// address: 0x001A1064   size: 0x24 (36 bytes)
//======================================================================
int __fastcall FrameManager::GetRootFrame(int a1, int a2)
{
  const char *v3; // r6
  int v4; // r5

  v3 = (const char *)dword_50F7E0;
  while ( 1 )
  {
    v4 = *(_DWORD *)(a2 + 108);
    if ( v4 == 0 || j_strcmp(v3, *(const char **)(v4 + 8)) == 0 )
      break;
    a2 = v4;
  }
  return a2;
}


//======================================================================
// FrameManager::CreateObjLuaTable(UIObject *,char const*)
// address: 0x001A108C   size: 0x36 (54 bytes)
//======================================================================
int __fastcall FrameManager::CreateObjLuaTable(FrameManager *this, UIObject *a2, const char *a3)
{
  Ogre::ScriptVM *v5; // r6
  const char *v6; // r0

  if ( a2 == nullptr )
    return 0;
  if ( a3 == nullptr )
    return 0;
  v5 = (Ogre::ScriptVM *)g_pUIScriptVM;
  v6 = (const char *)(*(int (__fastcall **)(UIObject *))(*(_DWORD *)a2 + 4))(a2);
  Ogre::ScriptVM::setUserTypePointer(v5, a3, v6, a2);
  return 1;
}


//======================================================================
// FrameManager::CreateLuaTable(Frame *)
// address: 0x001A10C8   size: 0xB8 (184 bytes)
//======================================================================
int __fastcall FrameManager::CreateLuaTable(FrameManager *this, Frame *a2)
{
  const char *Name; // r0
  unsigned int v5; // r6
  _DWORD *v6; // r5
  int v7; // r3
  const char *v8; // r0
  unsigned int i; // r5
  int v10; // r3
  UIObject *v12; // [sp+8h] [bp-Ch]
  int ObjLuaTable; // [sp+Ch] [bp-8h]

  if ( a2 == nullptr )
    return 0;
  Name = (const char *)UIObject::GetName(a2);
  v5 = 0;
  ObjLuaTable = FrameManager::CreateObjLuaTable(this, a2, Name);
  if ( ObjLuaTable == 0 )
    return 0;
  while ( 1 )
  {
    v6 = (_DWORD *)((char *)a2 + 228);
    v7 = *((_DWORD *)a2 + 57);
    if ( v5 >= (*((_DWORD *)a2 + 58) - v7) >> 3 )
      break;
    v12 = *(UIObject **)(v7 + 8 * v5);
    v8 = (const char *)UIObject::GetName(v12);
    FrameManager::CreateObjLuaTable(this, v12, v8);
    if ( UIObject::hasScriptsEvent(*(UIObject **)(*v6 + 8 * v5), 26) != 0 )
      UIObject::CallScript(*(UIObject **)(*v6 + 8 * v5), 26, (const char *)&unk_3FB8EA);
    ++v5;
  }
  for ( i = 0; ; ++i )
  {
    v10 = *((_DWORD *)a2 + 77);
    if ( i >= (*((_DWORD *)a2 + 78) - v10) >> 2 )
      break;
    FrameManager::CreateLuaTable(this, *(Frame **)(4 * i + v10));
  }
  if ( UIObject::hasScriptsEvent(a2, 26) != 0 )
    UIObject::CallScript(a2, 26, (const char *)&unk_3FB8EA);
  return ObjLuaTable;
}


//======================================================================
// FrameManager::InternalCreateUIObj(char const*,char const*)
// address: 0x001A1188   size: 0x2FE (766 bytes)
//======================================================================
int __fastcall FrameManager::InternalCreateUIObj(FrameManager *this, const char *a2, const char *a3)
{
  int v5; // r0
  int v6; // r6
  _DWORD *v7; // r6
  _DWORD *v8; // r2
  _DWORD *v9; // r3
  _DWORD *v10; // r3
  int v11; // r1
  _DWORD *v12; // r3
  _DWORD *v13; // r1
  int v14; // r5

  if ( a2 == nullptr )
    return 0;
  if ( a3 == nullptr )
    return 0;
  if ( j_strcasecmp(a2, "Frame") == 0 )
  {
    v14 = operator new(0x1A0u);
    Frame::Frame((Frame *)v14);
  }
  else if ( j_strcasecmp(a2, "DrawLineFrame") == 0 )
  {
    v14 = operator new(0x128u);
    LayoutFrame::LayoutFrame((LayoutFrame *)v14);
    *(_DWORD *)v14 = &off_458E98;
    *(_BYTE *)(v14 + 228) = -1;
    *(_BYTE *)(v14 + 229) = -1;
    *(_BYTE *)(v14 + 230) = -1;
    *(_BYTE *)(v14 + 231) = -1;
    *(_DWORD *)(v14 + 232) = 0;
    *(_DWORD *)(v14 + 252) = 0;
    *(_DWORD *)(v14 + 260) = 0;
    *(_DWORD *)(v14 + 264) = 0;
    *(_DWORD *)(v14 + 268) = 0;
    *(_DWORD *)(v14 + 272) = 0;
    *(_DWORD *)(v14 + 276) = 0;
    *(_DWORD *)(v14 + 280) = 0;
    *(_DWORD *)(v14 + 284) = 0;
    *(_DWORD *)(v14 + 288) = 0;
    *(_DWORD *)(v14 + 256) = 8;
    v5 = operator new(0x20u);
    v6 = *(_DWORD *)(v14 + 256);
    *(_DWORD *)(v14 + 252) = v5;
    v7 = (_DWORD *)(v5 + 4 * ((unsigned int)(v6 - 1) >> 1));
    *v7 = operator new(0x200u);
    *(_DWORD *)(v14 + 272) = v7;
    v8 = (_DWORD *)*v7;
    *(_DWORD *)(v14 + 264) = *v7;
    *(_DWORD *)(v14 + 268) = v8 + 128;
    *(_DWORD *)(v14 + 288) = v7;
    v9 = (_DWORD *)*v7;
    *(_DWORD *)(v14 + 280) = *v7;
    *(_DWORD *)(v14 + 284) = v9 + 128;
    *(_DWORD *)(v14 + 260) = v8;
    *(_DWORD *)(v14 + 276) = v9;
    while ( (unsigned int)v7 < *(_DWORD *)(v14 + 288) )
    {
      v10 = (_DWORD *)*v7;
      v11 = *v7 + 512;
      while ( v10 != (_DWORD *)v11 )
      {
        if ( v10 != nullptr )
        {
          *v10 = 0;
          v10[1] = 0;
        }
        v10 += 2;
      }
      ++v7;
    }
    v12 = *(_DWORD **)(v14 + 280);
    v13 = *(_DWORD **)(v14 + 276);
    while ( v12 != v13 )
    {
      if ( v12 != nullptr )
      {
        *v12 = 0;
        v12[1] = 0;
      }
      v12 += 2;
    }
    *(_DWORD *)(v14 + 236) = 0;
    *(_DWORD *)(v14 + 240) = 0;
    *(_DWORD *)(v14 + 244) = 0;
    *(_DWORD *)(v14 + 248) = 0;
  }
  else if ( j_strcasecmp(a2, "FontString") == 0 )
  {
    v14 = operator new(0x150u);
    FontString::FontString((FontString *)v14);
  }
  else if ( j_strcasecmp(a2, "ModelView") == 0 )
  {
    v14 = operator new(0x1A8u);
    ModelView::ModelView((ModelView *)v14);
  }
  else if ( j_strcasecmp(a2, "Texture") == 0 )
  {
    v14 = operator new(0x238u);
    Texture::Texture((Texture *)v14);
  }
  else
  {
    if ( j_strcasecmp(a2, "Button") == 0 )
    {
      v14 = operator new(0x208u);
      Button::Button((Button *)v14);
      UIObject::SetName((UIObject *)v14, a3);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 92))(v14);
      return v14;
    }
    if ( j_strcasecmp(a2, "EditBox") == 0 )
    {
      v14 = operator new(0x218u);
      EditBox::EditBox((EditBox *)v14);
    }
    else if ( j_strcasecmp(a2, "Slider") == 0 )
    {
      v14 = operator new(0x1C0u);
      Slider::Slider((Slider *)v14);
    }
    else if ( j_strcasecmp(a2, "ListBox") == 0 )
    {
      v14 = operator new(0x1C0u);
      ListBox::ListBox((ListBox *)v14);
    }
    else if ( j_strcasecmp(a2, "ScrollFrame") == 0 )
    {
      v14 = operator new(0x1E0u);
      ScrollFrame::ScrollFrame((ScrollFrame *)v14);
    }
    else if ( j_strcasecmp(a2, "SlidingFrame") == 0 )
    {
      v14 = operator new(0x1F8u);
      SlidingFrame::SlidingFrame((SlidingFrame *)v14);
    }
    else if ( j_strcasecmp(a2, "LineFrame") == 0 )
    {
      v14 = operator new(0x1B0u);
      LineFrame::LineFrame((LineFrame *)v14);
    }
    else if ( j_strcasecmp(a2, "RichText") == 0 )
    {
      v14 = operator new(0x250u);
      RichText::RichText((RichText *)v14);
    }
    else if ( j_strcasecmp(a2, "MultiEditBox") == 0 )
    {
      v14 = operator new(0x200u);
      MultiEditBox::MultiEditBox((MultiEditBox *)v14);
    }
    else
    {
      v14 = 0;
      if ( j_strcasecmp(a2, "WebBrowerFrame") == 0 )
        return v14;
      if ( j_strcasecmp(a2, "IconBar") == 0 )
      {
        v14 = operator new(0x1E0u);
        IconBar::IconBar((IconBar *)v14);
      }
      else
      {
        if ( j_strcasecmp(a2, "ProgressBar") != 0 )
          return v14;
        v14 = operator new(0x1C0u);
        ProgressBar::ProgressBar((ProgressBar *)v14);
      }
    }
  }
  UIObject::SetName((UIObject *)v14, a3);
  return v14;
}


//======================================================================
// FrameManager::setCurEditBox(Frame *)
// address: 0x001A14D0   size: 0x26 (38 bytes)
//======================================================================
int __fastcall FrameManager::setCurEditBox(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 104);
  if ( a2 != result )
  {
    if ( result != 0 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 72))(result);
    if ( a2 != 0 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 68))(a2);
    *(_DWORD *)(a1 + 104) = a2;
  }
  return result;
}


//======================================================================
// FrameManager::getCurEditBox(void)
// address: 0x001A14F6   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FrameManager::getCurEditBox(FrameManager *this)
{
  return *((_DWORD *)this + 26);
}


//======================================================================
// FrameManager::ProcessAccelerator(AccelItem const&,bool)
// address: 0x001A14FC   size: 0x5E (94 bytes)
//======================================================================
int __fastcall FrameManager::ProcessAccelerator(int a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // r3
  int v4; // r4
  int v5; // r12
  int v6; // r4
  const char *v7; // r1

  v3 = *(_DWORD **)(a1 + 160);
  v4 = 0;
  v5 = 1041204193 * ((*(_DWORD *)(a1 + 164) - (int)v3) >> 3);
  while ( 1 )
  {
    if ( v4 == v5 )
      return 1;
    if ( *v3 == *a2 && a2[1] << 8 == v3[1] << 8 )
      break;
    ++v4;
    v3 += 66;
  }
  v7 = (char *)v3 + 7;
  if ( a3 == 0 )
    v7 = (char *)v3 + 135;
  v6 = 0;
  if ( *v7 != 0 )
    UIObject::CallScript(*(UIObject **)(a1 + 100), v7, (const char *)&unk_3FB8EA);
  return v6;
}


//======================================================================
// FrameManager::OnAccelerator(Ogre::InputEvent const&)
// address: 0x001A15C4   size: 0x18 (24 bytes)
//======================================================================
int __fastcall FrameManager::OnAccelerator(FrameManager *this, InputEvent *a2)
{
  int v2; // r2
  int result; // r0

  v2 = *((unsigned __int8 *)this + 312);
  result = 1;
  if ( v2 != 0 )
    return sub_1A1564((int)this, (int *)a2);
  return result;
}


//======================================================================
// FrameManager::GetFramePoint(FRAMEPOINT_T,int &,int &)
// address: 0x001A15DC   size: 0x6A (106 bytes)
//======================================================================
int __fastcall FrameManager::GetFramePoint(int a1, int a2, int *a3, int *a4)
{
  int result; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r1

  result = a2;
  switch ( a2 )
  {
    case 0:
      *a3 = 0;
      *a4 = 0;
      return result;
    case 1:
      *a3 = *(_DWORD *)(a1 + 8);
      goto LABEL_8;
    case 2:
      v7 = 0;
      goto LABEL_10;
    case 3:
      v7 = *(_DWORD *)(a1 + 8);
      goto LABEL_10;
    case 4:
      result = *(_DWORD *)(a1 + 8) >> 31;
      *a3 = *(_DWORD *)(a1 + 8) / 2;
LABEL_8:
      v8 = 0;
      goto LABEL_15;
    case 5:
      result = *(_DWORD *)(a1 + 8) >> 31;
      v7 = *(_DWORD *)(a1 + 8) / 2;
LABEL_10:
      *a3 = v7;
      *a4 = *(_DWORD *)(a1 + 12);
      return result;
    case 6:
      v9 = 0;
      goto LABEL_14;
    case 7:
      v9 = *(_DWORD *)(a1 + 8);
      goto LABEL_14;
    case 8:
      result = *(_DWORD *)(a1 + 8) >> 31;
      v9 = *(_DWORD *)(a1 + 8) / 2;
LABEL_14:
      *a3 = v9;
      v8 = *(_DWORD *)(a1 + 12) / 2;
LABEL_15:
      *a4 = v8;
      break;
    default:
      result = a1;
      break;
  }
  return result;
}


//======================================================================
// FrameManager::InitFaceTexture(int,int)
// address: 0x001A1648   size: 0xAC (172 bytes)
//======================================================================
float __fastcall FrameManager::InitFaceTexture(FrameManager *this, unsigned int a2, unsigned int a3)
{
  RFaceCodeMap *v6; // r7
  int v7; // r0
  float v8; // r7
  int v9; // r3
  unsigned int v10; // r0
  int v11; // r6
  float result; // r0

  v6 = (RFaceCodeMap *)operator new(0x3E84u);
  RFaceCodeMap::RFaceCodeMap(v6);
  *((_DWORD *)this + 60) = v6;
  RFaceCodeMap::Init(v6, *((const char **)this + 61));
  v7 = (*(int (__fastcall **)(int, _DWORD, int, _DWORD, _DWORD, int))(*(_DWORD *)g_pDisplay + 72))(
         g_pDisplay,
         *((_DWORD *)this + 62),
         2,
         0,
         0,
         1);
  this = (FrameManager *)((char *)this + 252);
  *(_DWORD *)this = v7;
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = a3;
  v8 = (float)a2;
  *((float *)this + 9) = 1.0 / (float)a2;
  v9 = *((_DWORD *)this + 1);
  *((float *)this + 10) = 1.0 / (float)a3;
  v10 = a2 / v9;
  v11 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 7) = v10;
  *((_DWORD *)this + 8) = a3 / v11;
  *((float *)this + 5) = (float)v9 / v8;
  result = (float)v11 / (float)a3;
  *((float *)this + 6) = result;
  return result;
}


//======================================================================
// FrameManager::setCursor(char const*)
// address: 0x001A16FC   size: 0x36 (54 bytes)
//======================================================================
int __fastcall FrameManager::setCursor(FrameManager *this, const char *a2)
{
  int result; // r0
  UICursor **v5; // r5
  const char *Cursor; // r0

  result = UIIsInDragState();
  if ( result != 0 )
    result = UIEndDrag(nullptr);
  if ( a2 != nullptr )
  {
    v5 = (UICursor **)((char *)this + 140);
    Cursor = (const char *)UICursor::getCursor(*v5);
    result = j_strcmp(a2, Cursor);
    if ( result != 0 )
      return UICursor::setCursor(*v5, a2);
  }
  return result;
}


//======================================================================
// FrameManager::setUiCursor(char const*)
// address: 0x001A1732   size: 0x18 (24 bytes)
//======================================================================
int __fastcall FrameManager::setUiCursor(FrameManager *this, const char *a2)
{
  int result; // r0

  result = GetCurrentCursorLevel();
  if ( result != 2 )
    return FrameManager::setCursor(this, a2);
  return result;
}


//======================================================================
// FrameManager::getFontInfoByFontType(char const*)
// address: 0x001A174A   size: 0x38 (56 bytes)
//======================================================================
int __fastcall FrameManager::getFontInfoByFontType(FrameManager *this, char *a2)
{
  _DWORD *v2; // r5
  int v4; // r4
  int v5; // r6
  int v7; // [sp+4h] [bp-8h]

  v2 = (_DWORD *)((char *)this + 144);
  v4 = 0;
  v7 = (*((_DWORD *)this + 37) - *((_DWORD *)this + 36)) >> 5;
  while ( v4 < v7 )
  {
    v5 = *v2 + 32 * v4;
    if ( sub_3BDD5C(v5, a2) == 0 )
      return *(_DWORD *)(v5 + 20);
    ++v4;
  }
  return 0;
}


//======================================================================
// FrameManager::getUIFontByName(char const*)
// address: 0x001A1782   size: 0x2A (42 bytes)
//======================================================================
int __fastcall FrameManager::getUIFontByName(FrameManager *this, char *a2)
{
  int v2; // r5
  int i; // r4
  int v5; // r7
  int v6; // r0

  v2 = *((_DWORD *)this + 37);
  for ( i = *((_DWORD *)this + 36); ; i += 32 )
  {
    v5 = i;
    if ( i == v2 )
      break;
    v6 = sub_3BDD5C(i, a2);
    if ( v6 == 0 )
      return v5;
  }
  return 0;
}


//======================================================================
// FrameManager::getUIFontByIndex(int)
// address: 0x001A17AC   size: 0xA (10 bytes)
//======================================================================
int __fastcall FrameManager::getUIFontByIndex(FrameManager *this, int a2)
{
  return *((_DWORD *)this + 36) + 32 * a2;
}


//======================================================================
// FrameManager::getUIFontIndexByName(char const*)
// address: 0x001A17B6   size: 0x34 (52 bytes)
//======================================================================
int __fastcall FrameManager::getUIFontIndexByName(FrameManager *this, char *a2)
{
  _DWORD *v2; // r5
  int v4; // r4
  int v5; // r6

  v2 = (_DWORD *)((char *)this + 144);
  v4 = 0;
  v5 = (*((_DWORD *)this + 37) - *((_DWORD *)this + 36)) >> 5;
  while ( 1 )
  {
    if ( v4 >= v5 )
      return -1;
    if ( sub_3BDD5C(*v2 + 32 * v4, a2) == 0 )
      break;
    ++v4;
  }
  return v4;
}


//======================================================================
// FrameManager::setAllScale(float)
// address: 0x001A17EA   size: 0x4 (4 bytes)
//======================================================================
float *__fastcall FrameManager::setAllScale(float *this, float a2)
{
  *this = a2;
  return this;
}


//======================================================================
// FrameManager::setScaleXYByWinSize(int,int)
// address: 0x001A17F0   size: 0x56 (86 bytes)
//======================================================================
bool __fastcall FrameManager::setScaleXYByWinSize(FrameManager *this, int a2, int a3)
{
  float v4; // r6
  float v5; // r4
  _BOOL4 result; // r0

  v4 = (float)a2 / (float)DEFAULT_UI_WIDTH;
  v5 = (float)a3 / (float)DEFAULT_UI_HEIGHT;
  result = v4 > v5;
  if ( v4 <= v5 )
    v5 = (float)a2 / (float)DEFAULT_UI_WIDTH;
  *((float *)this + 4) = v5;
  *((float *)this + 5) = v5;
  return result;
}


//======================================================================
// FrameManager::EnableAccelerator(bool)
// address: 0x001A1850   size: 0x8 (8 bytes)
//======================================================================
int __fastcall FrameManager::EnableAccelerator(int this, bool a2)
{
  *(_BYTE *)(this + 312) = a2;
  return this;
}


//======================================================================
// FrameManager::getFrameBindMouseID(Frame *)
// address: 0x001A1858   size: 0x34 (52 bytes)
//======================================================================
int __fastcall FrameManager::getFrameBindMouseID(int a1, unsigned int a2)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r3
  _DWORD *v4; // r2
  _DWORD *v5; // r4

  v2 = (_DWORD *)(a1 + 120);
  v3 = (_DWORD *)v2[1];
  v4 = v2;
  while ( v3 != nullptr )
  {
    if ( v3[4] < a2 )
    {
      v5 = (_DWORD *)v3[3];
      v3 = v4;
    }
    else
    {
      v5 = (_DWORD *)v3[2];
    }
    v4 = v3;
    v3 = v5;
  }
  if ( v4 == v2 || a2 < v4[4] )
    return -1;
  else
    return v4[5];
}


//======================================================================
// FrameManager::getMouseIDBindFrame(int)
// address: 0x001A188C   size: 0x26 (38 bytes)
//======================================================================
int __fastcall FrameManager::getMouseIDBindFrame(FrameManager *this, int a2)
{
  int v3; // r0
  char *v5; // r4

  v3 = *((_DWORD *)this + 32);
  v5 = (char *)this + 120;
  while ( (char *)v3 != v5 )
  {
    if ( *(_DWORD *)(v3 + 20) == a2 )
      return *(_DWORD *)(v3 + 16);
    v3 = sub_391DDC(v3);
  }
  return 0;
}


//======================================================================
// FrameManager::FrameManager(void)
// address: 0x001A1910   size: 0x208 (520 bytes)
//======================================================================
// Alternative name is '_ZN12FrameManagerC1Ev'
void __fastcall FrameManager::FrameManager(FrameManager *this)
{
  _DWORD *v2; // r1
  int v3; // r2
  int v4; // r3
  UICursor *v5; // r4
  int v6; // r6
  int v7; // r4
  int v8; // r6
  int i; // r4
  _DWORD *v10; // r5
  char *v11; // [sp+4h] [bp-28h]
  int v12; // [sp+4h] [bp-28h]
  int v13; // [sp+4h] [bp-28h]
  int *v14; // [sp+1Ch] [bp-10h]

  v11 = (char *)this + 32;
  j_memset((char *)this + 32, 0, 0x10u);
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 10) = v11;
  *((_DWORD *)this + 11) = v11;
  j_memset((char *)this + 56, 0, 0x10u);
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 16) = (char *)this + 56;
  *((_DWORD *)this + 17) = (char *)this + 56;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  j_memset((char *)this + 120, 0, 0x10u);
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 32) = (char *)this + 120;
  *((_DWORD *)this + 33) = (char *)this + 120;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 42) = 0;
  v14 = (int *)((char *)this + 172);
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 46) = &byte_55FB88;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 53) = 0;
  j_memset((char *)this + 220, 0, 0x10u);
  *((_DWORD *)this + 59) = 0;
  *((_DWORD *)this + 57) = (char *)this + 220;
  *((_DWORD *)this + 58) = (char *)this + 220;
  *((_DWORD *)this + 61) = &byte_55FB88;
  *((_DWORD *)this + 62) = &byte_55FB88;
  *((_BYTE *)this + 312) = 1;
  j_memset((char *)this + 320, 0, 0x10u);
  *((_DWORD *)this + 82) = (char *)this + 320;
  *((_DWORD *)this + 83) = (char *)this + 320;
  *((_DWORD *)this + 84) = 0;
  j_memset((char *)this + 344, 0, 0x10u);
  *((_DWORD *)this + 90) = 0;
  *((_DWORD *)this + 88) = (char *)this + 344;
  *((_DWORD *)this + 89) = (char *)this + 344;
  *((_DWORD *)this + 6) = 1;
  *(_DWORD *)this = 1065353216;
  *((_DWORD *)this + 4) = 1065353216;
  *((_DWORD *)this + 5) = 1065353216;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 39) = 0;
  std::_Rb_tree<std::string,std::pair<std::string const,UIObject *>,std::_Select1st<std::pair<std::string const,UIObject *>>,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::_M_erase(
    (int)this + 28,
    *((_DWORD **)this + 9));
  v2 = *((_DWORD **)this + 15);
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = v11;
  *((_DWORD *)this + 11) = v11;
  *((_DWORD *)this + 12) = 0;
  std::_Rb_tree<std::string,std::pair<std::string const,UIObject *>,std::_Select1st<std::pair<std::string const,UIObject *>>,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::_M_erase(
    (int)this + 52,
    v2);
  v3 = *((_DWORD *)this + 19);
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = (char *)this + 56;
  *((_DWORD *)this + 17) = (char *)this + 56;
  v4 = *((_DWORD *)this + 22);
  *((_DWORD *)this + 20) = v3;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 23) = v4;
  *((_DWORD *)this + 25) = 0;
  v5 = (UICursor *)operator new(0x44u);
  UICursor::UICursor(v5);
  *((_DWORD *)this + 35) = v5;
  v6 = *((_DWORD *)this + 36);
  v7 = v6;
  v12 = *((_DWORD *)this + 37);
  while ( v7 != v12 )
  {
    sub_3BDF80(v7 + 4);
    sub_3BDF80(v7);
    v7 += 32;
  }
  *((_DWORD *)this + 37) = v6;
  *((_DWORD *)this + 41) = *((_DWORD *)this + 40);
  v8 = *v14;
  v13 = *((_DWORD *)this + 44);
  for ( i = *v14; i != v13; i += 4 )
    sub_3BDF80(i);
  *((_DWORD *)this + 44) = v8;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 63) = 0;
  *((_DWORD *)this + 60) = 0;
  v10 = (_DWORD *)operator new(0x34u);
  *v10 = &byte_55FB88;
  v10[1] = &byte_55FB88;
  j_memset(v10 + 8, 0, 0x10u);
  v10[12] = 0;
  v10[10] = v10 + 8;
  v10[11] = v10 + 8;
  *((_DWORD *)this + 75) = v10;
  *((_BYTE *)this + 188) = 1;
  *(_DWORD *)(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 72) = sub_1A0E08;
}


//======================================================================
// FrameManager::clearFrameMouseID(Frame *)
// address: 0x001A1B68   size: 0xB6 (182 bytes)
//======================================================================
__int64 __fastcall FrameManager::clearFrameMouseID(FrameManager *this, Frame *a2)
{
  _DWORD *v3; // r12
  unsigned __int64 v4; // r4
  unsigned int v5; // r3
  unsigned int v6; // r3
  _DWORD *v7; // r2
  _DWORD *v8; // r3
  _DWORD *v9; // r0
  _DWORD *v10; // r2
  int v11; // r7
  void *v12; // r0
  __int64 v14; // [sp+0h] [bp-Ch]

  LODWORD(v14) = this;
  v3 = *((_DWORD **)this + 31);
  HIDWORD(v14) = (char *)this + 120;
  HIDWORD(v4) = (char *)this + 120;
  LODWORD(v4) = v3;
  while ( 1 )
  {
    if ( (_DWORD)v4 == 0 )
    {
      LODWORD(v4) = HIDWORD(v4);
      goto LABEL_21;
    }
    v5 = *(_DWORD *)(v4 + 16);
    if ( v5 < (unsigned int)a2 )
    {
      v6 = *(_DWORD *)(v4 + 12);
      LODWORD(v4) = HIDWORD(v4);
      goto LABEL_19;
    }
    if ( (unsigned int)a2 >= v5 )
      break;
    v6 = *(_DWORD *)(v4 + 8);
LABEL_19:
    v4 = __PAIR64__(v4, v6);
  }
  v7 = *(_DWORD **)(v4 + 8);
  v8 = *(_DWORD **)(v4 + 12);
  while ( v7 != nullptr )
  {
    if ( v7[4] < (unsigned int)a2 )
    {
      v9 = (_DWORD *)v7[3];
      v7 = (_DWORD *)v4;
    }
    else
    {
      v9 = (_DWORD *)v7[2];
    }
    LODWORD(v4) = v7;
    v7 = v9;
  }
  while ( v8 != nullptr )
  {
    if ( (unsigned int)a2 >= v8[4] )
    {
      v10 = (_DWORD *)v8[3];
      v8 = (_DWORD *)HIDWORD(v4);
    }
    else
    {
      v10 = (_DWORD *)v8[2];
    }
    HIDWORD(v4) = v8;
    v8 = v10;
  }
LABEL_21:
  if ( v4 == __PAIR64__(HIDWORD(v14), *((_DWORD *)this + 32)) )
  {
    std::_Rb_tree<Frame *,std::pair<Frame * const,int>,std::_Select1st<std::pair<Frame * const,int>>,std::less<Frame *>,std::allocator<std::pair<Frame * const,int>>>::_M_erase(
      (int)this + 116,
      v3);
    *((_DWORD *)this + 32) = HIDWORD(v4);
    *((_DWORD *)this + 31) = 0;
    *((_DWORD *)this + 33) = HIDWORD(v4);
    *((_DWORD *)this + 34) = 0;
  }
  else
  {
    while ( (_DWORD)v4 != HIDWORD(v4) )
    {
      v11 = sub_391E10(v4);
      v12 = (void *)sub_391F50(v4, HIDWORD(v14));
      operator delete(v12);
      LODWORD(v4) = v11;
      --*((_DWORD *)this + 34);
    }
  }
  return v14;
}


//======================================================================
// FrameManager::~FrameManager()
// address: 0x001A1C78   size: 0x1B8 (440 bytes)
//======================================================================
// Alternative name is '_ZN12FrameManagerD1Ev'
void __fastcall FrameManager::~FrameManager(FrameManager *this)
{
  _DWORD **i; // r5
  _DWORD **j; // r5
  unsigned int k; // r5
  int v5; // r3
  _DWORD *v6; // r0
  void *v7; // r5
  _DWORD *v8; // r6
  _DWORD **v9; // r5
  unsigned int m; // r5
  void **v11; // r7
  int v12; // r2
  int v13; // r1
  void **v14; // r6
  int v15; // r5
  void *v16; // r0
  char *v17; // r5
  char *v18; // r6
  int v19; // [sp+4h] [bp-8h]

  for ( i = *((_DWORD ***)this + 16); i != (_DWORD **)((char *)this + 56); i = (_DWORD **)sub_391DDC(i) )
    UIObject::release(i[5]);
  for ( j = *((_DWORD ***)this + 10); j != (_DWORD **)((char *)this + 32); j = (_DWORD **)sub_391DDC(j) )
    UIObject::release(j[5]);
  for ( k = 0; ; ++k )
  {
    v5 = *((_DWORD *)this + 19);
    if ( k >= (*((_DWORD *)this + 20) - v5) >> 2 )
      break;
    UIObject::release(*(_DWORD **)(4 * k + v5));
  }
  v6 = *((_DWORD **)this + 25);
  if ( v6 != nullptr )
    UIObject::release(v6);
  v7 = *((void **)this + 35);
  if ( v7 != nullptr )
  {
    UICursor::~UICursor(*((UICursor **)this + 35));
    operator delete(v7);
  }
  v8 = (_DWORD *)((char *)this + 252);
  operator delete(*((void **)this + 60));
  v9 = *((_DWORD ***)this + 75);
  if ( v9 != nullptr )
  {
    std::_Rb_tree<int,std::pair<int const,PictureData>,std::_Select1st<std::pair<int const,PictureData>>,std::less<int>,std::allocator<std::pair<int const,PictureData>>>::_M_erase(
      (int)(v9 + 7),
      v9[9]);
    sub_3BDF80(v9 + 1);
    sub_3BDF80(v9);
    operator delete(v9);
  }
  if ( *v8 != 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 92))(g_pDisplay);
    *v8 = 0;
  }
  for ( m = 0; ; ++m )
  {
    v11 = (void **)((char *)this + 144);
    v12 = *((_DWORD *)this + 36);
    if ( m >= (*((_DWORD *)this + 37) - v12) >> 5 )
      break;
    v13 = *(_DWORD *)(v12 + 32 * m + 20);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)g_pDisplay + 28))(g_pDisplay, v13);
  }
  std::_Rb_tree<int,std::pair<int const,std::vector<Frame *>>,std::_Select1st<std::pair<int const,std::vector<Frame *>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<Frame *>>>>::_M_erase(
    (int)this + 340,
    *((_DWORD *)this + 87));
  std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::_M_erase(
    (int)this + 316,
    *((_DWORD **)this + 81));
  sub_3BDF80((char *)this + 248);
  sub_3BDF80((char *)this + 244);
  std::_Rb_tree<std::string,std::pair<std::string const,tagPopWin>,std::_Select1st<std::pair<std::string const,tagPopWin>>,std::less<std::string>,std::allocator<std::pair<std::string const,tagPopWin>>>::_M_erase(
    (int)this + 216,
    *((_DWORD **)this + 56));
  std::_Vector_base<LayoutFrame *>::~_Vector_base((void **)this + 51);
  std::_Vector_base<LayoutFrame *>::~_Vector_base((void **)this + 48);
  v14 = (void **)((char *)this + 172);
  sub_3BDF80((char *)this + 184);
  v15 = *((_DWORD *)this + 43);
  v19 = *((_DWORD *)this + 44);
  while ( v15 != v19 )
  {
    sub_3BDF80(v15);
    v15 += 4;
  }
  if ( *v14 != nullptr )
    operator delete(*v14);
  v16 = *((void **)this + 40);
  if ( v16 != nullptr )
    operator delete(v16);
  v17 = (char *)*v11;
  v18 = *((char **)this + 37);
  while ( v17 != v18 )
  {
    sub_3BDF80(v17 + 4);
    sub_3BDF80(v17);
    v17 += 32;
  }
  if ( *v11 != nullptr )
    operator delete(*v11);
  std::_Rb_tree<Frame *,std::pair<Frame * const,int>,std::_Select1st<std::pair<Frame * const,int>>,std::less<Frame *>,std::allocator<std::pair<Frame * const,int>>>::_M_erase(
    (int)this + 116,
    *((_DWORD **)this + 31));
  std::_Vector_base<LayoutFrame *>::~_Vector_base((void **)this + 22);
  std::_Vector_base<Frame *>::~_Vector_base((void **)this + 19);
  std::_Rb_tree<std::string,std::pair<std::string const,UIObject *>,std::_Select1st<std::pair<std::string const,UIObject *>>,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::_M_erase(
    (int)this + 52,
    *((_DWORD **)this + 15));
  std::_Rb_tree<std::string,std::pair<std::string const,UIObject *>,std::_Select1st<std::pair<std::string const,UIObject *>>,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::_M_erase(
    (int)this + 28,
    *((_DWORD **)this + 9));
}


//======================================================================
// FrameManager::AddGameFont(UIFont)
// address: 0x001A1FD8   size: 0x36 (54 bytes)
//======================================================================
int __fastcall FrameManager::AddGameFont(int *a1, int a2)
{
  _DWORD *v2; // r4
  int v4; // r1

  v2 = a1 + 36;
  v4 = a1[37];
  if ( v4 == a1[38] )
  {
    std::vector<UIFont>::_M_insert_aux(a1 + 36, v4, a2);
  }
  else
  {
    if ( v4 != 0 )
      UIFont::UIFont(a1[37], a2);
    v2[1] += 32;
  }
  return ((v2[1] - *v2) >> 5) - 1;
}


//======================================================================
// FrameManager::frameShow(Frame *)
// address: 0x001A2294   size: 0x9C (156 bytes)
//======================================================================
void **__fastcall FrameManager::frameShow(FrameManager *this, Frame *a2)
{
  void **result; // r0
  void **v4; // r4
  int TouchObjById; // r0
  void *v6; // r0
  void *v7; // r0
  int v8; // [sp+4h] [bp-30h]
  int v9; // [sp+Ch] [bp-28h]
  void *v10[3]; // [sp+20h] [bp-14h] BYREF

  result = (void **)LayoutFrame::Show(a2);
  v4 = *((void ***)this + 32);
  while ( v4 != (void **)((char *)this + 120) )
  {
    TouchObjById = Ogre::InputManager::findTouchObjById(
                     (Ogre::InputManager *)Ogre::Singleton<Ogre::InputManager>::ms_Singleton,
                     (int)v4[5]);
    if ( v4[4] == (void *)FrameManager::FindUIObjectOnPoint(
                            this,
                            *(_DWORD *)(TouchObjById + 24),
                            *(_DWORD *)(TouchObjById + 28),
                            false) )
    {
      result = (void **)sub_391DDC(v4);
      v4 = result;
    }
    else
    {
      memset(v10, 0, sizeof(v10));
      v6 = v4[4];
      v9 = 11;
      (*(void (__fastcall **)(void *))(*(_DWORD *)v6 + 64))(v6);
      v8 = sub_391DDC(v4);
      v7 = (void *)sub_391F50(v4, (char *)this + 120);
      operator delete(v7);
      --*((_DWORD *)this + 34);
      result = std::_Vector_base<char>::~_Vector_base(v10);
      v4 = (void **)v8;
    }
  }
  return result;
}


//======================================================================
// FrameManager::isInAccelKeyState(int)
// address: 0x001A2338   size: 0x32 (50 bytes)
//======================================================================
bool __fastcall FrameManager::isInAccelKeyState(FrameManager *this, __suseconds_t a2, int a3)
{
  unsigned int SystemTick; // r5
  _DWORD *v5; // r0
  _DWORD v7[2]; // [sp+4h] [bp-8h] BYREF

  v7[1] = a3;
  v7[0] = a2;
  SystemTick = Ogre::Timer::getSystemTick(this, a2);
  v5 = std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::find(
         (int)this + 316,
         v7);
  return v5 != (_DWORD *)((char *)this + 320) && SystemTick < v5[5] + 500;
}


//======================================================================
// FrameManager::SendEvent(char const*)
// address: 0x001A23A8   size: 0x8C (140 bytes)
//======================================================================
void __fastcall FrameManager::SendEvent(FrameManager *this, char *a2)
{
  int v3; // r4
  _DWORD *v4; // r5
  int v5; // r3
  unsigned int i; // r4
  int v7; // r3
  _BYTE v8[8]; // [sp+Ch] [bp-8h] BYREF

  if ( a2 != nullptr )
  {
    sub_3BF0BC((int)v8, a2);
    v3 = dword_50F800;
    v4 = &unk_50F7FC;
    while ( v3 != 0 )
    {
      if ( std::operator<<char>() != 0 )
      {
        v5 = *(_DWORD *)(v3 + 12);
        v3 = (int)v4;
      }
      else
      {
        v5 = *(_DWORD *)(v3 + 8);
      }
      v4 = (_DWORD *)v3;
      v3 = v5;
    }
    if ( v4 != (_DWORD *)&unk_50F7FC && std::operator<<char>() != 0 )
      v4 = &unk_50F7FC;
    sub_3BDF80(v8);
    if ( v4 != (_DWORD *)&unk_50F7FC )
    {
      for ( i = 0; ; ++i )
      {
        v7 = v4[5];
        if ( i >= (v4[6] - v7) >> 2 )
          break;
        UIObject::CallScript(*(UIObject **)(4 * i + v7), 14, "s", a2);
      }
    }
  }
}


//======================================================================
// FrameManager::FindLayoutFrame(std::string const&)
// address: 0x001A247E   size: 0x18 (24 bytes)
//======================================================================
int __fastcall FrameManager::FindLayoutFrame(int a1)
{
  int v2; // r0

  v2 = std::_Rb_tree<std::string,std::pair<std::string const,UIObject *>,std::_Select1st<std::pair<std::string const,UIObject *>>,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::find(a1 + 28);
  if ( v2 == a1 + 32 )
    return 0;
  else
    return *(_DWORD *)(v2 + 20);
}


//======================================================================
// FrameManager::updateHeadBindingFrame(char const*,int,int,int,int)
// address: 0x001A2496   size: 0x110 (272 bytes)
//======================================================================
int __fastcall FrameManager::updateHeadBindingFrame(FrameManager *this, char *a2, int a3, int a4, int a5, int a6)
{
  LayoutFrame *LayoutFrame; // r4
  int result; // r0
  float v10; // r6
  int **v11; // r5
  int **i; // r4
  int *v13; // r0
  int v14; // r3
  _BYTE v16[8]; // [sp+1Ch] [bp-8h] BYREF

  sub_3BF0BC((int)v16, a2);
  LayoutFrame = (LayoutFrame *)FrameManager::FindLayoutFrame((int)this);
  result = sub_3BDF80(v16);
  if ( LayoutFrame != nullptr )
  {
    v10 = *((float *)this + 5) * *(float *)this;
    (*(void (__fastcall **)(LayoutFrame *, float, float, float, float))(*(_DWORD *)LayoutFrame + 40))(
      LayoutFrame,
      (float)a3,
      (float)a4,
      (float)(a3 + a5),
      (float)(a4 + a6));
    LayoutFrame::SetSizeNoRecal(
      LayoutFrame,
      (int)(float)((float)(*((_DWORD *)LayoutFrame + 17) - *((_DWORD *)LayoutFrame + 15)) / v10),
      (int)(float)((float)(*((_DWORD *)LayoutFrame + 18) - *((_DWORD *)LayoutFrame + 16)) / v10));
    if ( (int)LayoutFrame::GetRight(LayoutFrame) > 0
      && LayoutFrame::GetLeft(LayoutFrame) < *((_DWORD *)this + 2)
      && (int)LayoutFrame::GetBottom(LayoutFrame) > 0
      && LayoutFrame::GetTop(LayoutFrame) < *((_DWORD *)this + 3) )
    {
      result = LayoutFrame::IsShown(LayoutFrame);
      if ( result == 0 )
        result = LayoutFrame::Show(LayoutFrame);
    }
    else
    {
      result = LayoutFrame::IsShown(LayoutFrame);
      if ( result != 0 )
        return LayoutFrame::Hide(LayoutFrame);
    }
    v11 = *((int ***)LayoutFrame + 58);
    for ( i = *((int ***)LayoutFrame + 57); i != v11; i += 2 )
    {
      v13 = *i;
      v14 = **i;
      result = (*(int (__fastcall **)(int *, int))(v14 + 24))(v13, -1);
    }
  }
  return result;
}


//======================================================================
// FrameManager::hidePopWin(char const*)
// address: 0x001A25A8   size: 0xDA (218 bytes)
//======================================================================
int __fastcall FrameManager::hidePopWin(FrameManager *this, char *a2)
{
  LayoutFrame *LayoutFrame; // r6
  LayoutFrame *v4; // r5
  char *v7; // [sp+18h] [bp-14h] BYREF
  char *v8; // [sp+1Ch] [bp-10h] BYREF
  _BYTE v9[4]; // [sp+20h] [bp-Ch] BYREF
  _BYTE v10[8]; // [sp+24h] [bp-8h] BYREF

  sub_3BF0BC((int)v9, a2);
  sub_3BF0BC((int)v10, "_Pop");
  sub_1A18B2((int)&v7, (int)v9, (int)v10);
  sub_3BDF80(v10);
  sub_3BDF80(v9);
  sub_3BF0BC((int)v9, a2);
  sub_3BF0BC((int)v10, "_PopBack");
  sub_1A18B2((int)&v8, (int)v9, (int)v10);
  sub_3BDF80(v10);
  sub_3BDF80(v9);
  sub_3BF0BC((int)v10, v8);
  LayoutFrame = (LayoutFrame *)FrameManager::FindLayoutFrame((int)this);
  sub_3BDF80(v10);
  sub_3BF0BC((int)v10, v7);
  v4 = (LayoutFrame *)FrameManager::FindLayoutFrame((int)this);
  sub_3BDF80(v10);
  if ( LayoutFrame != nullptr
    && v4 != nullptr
    && LayoutFrame::IsShown(v4) != 0
    && LayoutFrame::IsShown(LayoutFrame) != 0 )
  {
    LayoutFrame::Hide(LayoutFrame);
    LayoutFrame::Hide(v4);
  }
  sub_3BDF80(&v8);
  return sub_3BDF80(&v7);
}


//======================================================================
// FrameManager::showPopWin(char const*)
// address: 0x001A268C   size: 0xDA (218 bytes)
//======================================================================
int __fastcall FrameManager::showPopWin(FrameManager *this, char *a2)
{
  LayoutFrame *LayoutFrame; // r6
  LayoutFrame *v4; // r5
  char *v7; // [sp+18h] [bp-14h] BYREF
  char *v8; // [sp+1Ch] [bp-10h] BYREF
  _BYTE v9[4]; // [sp+20h] [bp-Ch] BYREF
  _BYTE v10[8]; // [sp+24h] [bp-8h] BYREF

  sub_3BF0BC((int)v9, a2);
  sub_3BF0BC((int)v10, "_Pop");
  sub_1A18B2((int)&v7, (int)v9, (int)v10);
  sub_3BDF80(v10);
  sub_3BDF80(v9);
  sub_3BF0BC((int)v9, a2);
  sub_3BF0BC((int)v10, "_PopBack");
  sub_1A18B2((int)&v8, (int)v9, (int)v10);
  sub_3BDF80(v10);
  sub_3BDF80(v9);
  sub_3BF0BC((int)v10, v8);
  LayoutFrame = (LayoutFrame *)FrameManager::FindLayoutFrame((int)this);
  sub_3BDF80(v10);
  sub_3BF0BC((int)v10, v7);
  v4 = (LayoutFrame *)FrameManager::FindLayoutFrame((int)this);
  sub_3BDF80(v10);
  if ( LayoutFrame != nullptr
    && v4 != nullptr
    && (LayoutFrame::IsShown(v4) == 0 || LayoutFrame::IsShown(LayoutFrame) != 0) )
  {
    LayoutFrame::Show(LayoutFrame);
    LayoutFrame::Show(v4);
  }
  sub_3BDF80(&v8);
  return sub_3BDF80(&v7);
}


//======================================================================
// FrameManager::Update(float)
// address: 0x001A2770   size: 0x156 (342 bytes)
//======================================================================
int __fastcall FrameManager::Update(UICursor **this, float a2)
{
  unsigned int i; // r5
  int v5; // r3
  int v6; // r0
  unsigned int j; // r5
  int v8; // r3
  int v9; // r0
  Ogre::Timer *v10; // r0
  __suseconds_t v11; // r1
  int result; // r0
  UICursor **v13; // r6
  LayoutFrame *v14; // r7
  LayoutFrame *LayoutFrame; // [sp+0h] [bp-24h]
  unsigned int v16; // [sp+Ch] [bp-18h]
  char *v17; // [sp+14h] [bp-10h] BYREF
  char *v18; // [sp+18h] [bp-Ch] BYREF
  _BYTE v19[8]; // [sp+1Ch] [bp-8h] BYREF

  FrameManager::UpdateGameFont((FrameManager *)this);
  *(this + 1) = (UICursor *)((char *)*(this + 1) + 1);
  if ( *((_BYTE *)this + 188) != 0 )
  {
    for ( i = 0; ; ++i )
    {
      v5 = (int)*(this + 19);
      if ( i >= ((int)*(this + 20) - v5) >> 2 )
        break;
      v6 = *(_DWORD *)(4 * i + v5);
      (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v6 + 24))(v6, *(this + 1));
    }
    *((_BYTE *)this + 188) = 0;
  }
  else
  {
    FrameManager::UpdateChangedFrames((FrameManager *)this);
  }
  for ( j = 0; ; ++j )
  {
    v8 = (int)*(this + 19);
    if ( j >= ((int)*(this + 20) - v8) >> 2 )
      break;
    v9 = *(_DWORD *)(4 * j + v8);
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v9 + 28))(v9, LODWORD(a2));
  }
  FrameManager::UpdateChangedFrames((FrameManager *)this);
  v10 = (Ogre::Timer *)UICursor::update(*(this + 35), a2);
  result = Ogre::Timer::getSystemTick(v10, v11);
  v13 = (UICursor **)*(this + 57);
  v16 = result;
  while ( v13 != this + 55 )
  {
    if ( v16 > (unsigned int)v13[5] )
    {
      sub_3BF0BC((int)v19, "_Pop");
      sub_1A18B2((int)&v17, (int)(v13 + 4), (int)v19);
      sub_3BDF80(v19);
      sub_3BF0BC((int)v19, "_PopBack");
      sub_1A18B2((int)&v18, (int)(v13 + 4), (int)v19);
      sub_3BDF80(v19);
      sub_3BF0BC((int)v19, v17);
      LayoutFrame = (LayoutFrame *)FrameManager::FindLayoutFrame((int)this);
      sub_3BDF80(v19);
      sub_3BF0BC((int)v19, v18);
      v14 = (LayoutFrame *)FrameManager::FindLayoutFrame((int)this);
      sub_3BDF80(v19);
      if ( LayoutFrame != nullptr
        && v14 != nullptr
        && LayoutFrame::IsShown(v14) != 0
        && LayoutFrame::IsShown(LayoutFrame) != 0 )
      {
        LayoutFrame::Hide(v14);
        LayoutFrame::Hide(LayoutFrame);
      }
      sub_3BDF80(&v18);
      sub_3BDF80(&v17);
    }
    result = sub_391DDC(v13);
    v13 = (UICursor **)result;
  }
  return result;
}


//======================================================================
// FrameManager::GetUIClientFrame(void)
// address: 0x001A28D0   size: 0x28 (40 bytes)
//======================================================================
int __fastcall FrameManager::GetUIClientFrame(FrameManager *this, int a2, int a3)
{
  int LayoutFrame; // r5
  _DWORD v6[2]; // [sp+4h] [bp-8h] BYREF

  v6[0] = a2;
  v6[1] = a3;
  sub_3BF0BC((int)v6, (char *)dword_50F7E0);
  LayoutFrame = FrameManager::FindLayoutFrame((int)this);
  sub_3BDF80(v6);
  return LayoutFrame;
}


//======================================================================
// FrameManager::hideFrame(char const*)
// address: 0x001A28FC   size: 0x52 (82 bytes)
//======================================================================
__int64 __fastcall FrameManager::hideFrame(__int64 this)
{
  FrameManager *v1; // r5
  void *LayoutFrame; // r4
  Frame *v3; // r1
  __int64 v5; // [sp+0h] [bp-8h] BYREF

  v5 = this;
  v1 = (FrameManager *)this;
  sub_3BF0BC((int)&v5 + 4, (char *)HIDWORD(this));
  LayoutFrame = (void *)FrameManager::FindLayoutFrame((int)v1);
  sub_3BDF80((char *)&v5 + 4);
  if ( LayoutFrame != nullptr && LayoutFrame::IsShown((LayoutFrame *)LayoutFrame) != 0 )
  {
    v3 = (Frame *)_dynamic_cast(
                    LayoutFrame,
                    (const struct __class_type_info *)&`typeinfo for'LayoutFrame,
                    (const struct __class_type_info *)&`typeinfo for'Frame,
                    0);
    if ( v3 != nullptr )
      FrameManager::clearFrameMouseID(v1, v3);
    LayoutFrame::Hide((LayoutFrame *)LayoutFrame);
  }
  return v5;
}


//======================================================================
// FrameManager::frameHide(Frame *)
// address: 0x001A2958   size: 0x14 (20 bytes)
//======================================================================
__int64 __fastcall FrameManager::frameHide(FrameManager *this, Frame *a2)
{
  unsigned int Name; // r0

  Name = UIObject::GetName(a2);
  return FrameManager::hideFrame(__SPAIR64__(Name, (unsigned int)this));
}


//======================================================================
// FrameManager::FindTexture(std::string const&,std::string const&)
// address: 0x001A296C   size: 0x56 (86 bytes)
//======================================================================
int __fastcall FrameManager::FindTexture(int a1, int a2, const void **a3)
{
  int v5; // r0
  int v6; // r4
  int v7; // r5
  int v8; // r6
  size_t v9; // r2
  int v11; // [sp+4h] [bp-8h]

  v5 = std::_Rb_tree<std::string,std::pair<std::string const,UIObject *>,std::_Select1st<std::pair<std::string const,UIObject *>>,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::find(a1 + 28);
  if ( v5 != a1 + 32 )
  {
    v6 = 0;
    v7 = *(_DWORD *)(*(_DWORD *)(v5 + 20) + 228);
    v11 = (*(_DWORD *)(*(_DWORD *)(v5 + 20) + 232) - v7) >> 3;
    while ( v6 != v11 )
    {
      v8 = *(_DWORD *)(v7 + 8 * v6);
      v9 = *(_DWORD *)(*(_DWORD *)(v8 + 8) - 12);
      if ( v9 == *((_DWORD *)*a3 - 3) && j_memcmp(*(const void **)(v8 + 8), *a3, v9) == 0 )
        return v8;
      ++v6;
    }
  }
  return 0;
}


//======================================================================
// FrameManager::getTemplateObject(std::string)
// address: 0x001A29C2   size: 0x18 (24 bytes)
//======================================================================
int __fastcall FrameManager::getTemplateObject(int a1)
{
  int v2; // r0

  v2 = std::_Rb_tree<std::string,std::pair<std::string const,UIObject *>,std::_Select1st<std::pair<std::string const,UIObject *>>,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::find(a1 + 52);
  if ( v2 == a1 + 56 )
    return 0;
  else
    return *(_DWORD *)(v2 + 20);
}


//======================================================================
// FrameManager::CreateObject(char const*,char const*,char const*)
// address: 0x001A29DA   size: 0x60 (96 bytes)
//======================================================================
UIObject *__fastcall FrameManager::CreateObject(FrameManager *this, const char *a2, const char *a3, char *a4)
{
  int v7; // r0
  UIObject *UIObj; // r5
  _DWORD v10[2]; // [sp+4h] [bp-8h] BYREF

  v10[0] = a2;
  v10[1] = a3;
  if ( a3 == nullptr )
    return nullptr;
  if ( a4 != nullptr && *a4 != 0 )
  {
    sub_3BF0BC((int)v10, a4);
    v7 = std::_Rb_tree<std::string,std::pair<std::string const,UIObject *>,std::_Select1st<std::pair<std::string const,UIObject *>>,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::find((int)this + 52);
    UIObj = (UIObject *)(***(int (__fastcall ****)(_DWORD))(v7 + 20))(*(_DWORD *)(v7 + 20));
    sub_3BE508((int)UIObj + 12, a4);
    sub_3BDF80(v10);
  }
  else
  {
    UIObj = (UIObject *)FrameManager::InternalCreateUIObj(this, a2, a3);
  }
  UIObject::SetName(UIObj, a3);
  return UIObj;
}


//======================================================================
// FrameManager::updatePopWinPos(char const*,int,int,float)
// address: 0x001A2A80   size: 0x444 (1092 bytes)
//======================================================================
int __fastcall FrameManager::updatePopWinPos(FrameManager *this, char *a2, int a3, int a4, float a5)
{
  Frame *LayoutFrame; // r7
  RichText *v7; // r5
  float v8; // r4
  int v9; // r0
  float v11; // r0
  int v12; // r3
  int v13; // r4
  int v14; // r4
  float v15; // r4
  float v16; // [sp+0h] [bp-6Ch]
  double v18; // [sp+8h] [bp-64h]
  int v19; // [sp+8h] [bp-64h]
  float v20; // [sp+8h] [bp-64h]
  float TotalHeight; // [sp+10h] [bp-5Ch]
  double v22; // [sp+10h] [bp-5Ch]
  int v23; // [sp+10h] [bp-5Ch]
  float v24; // [sp+10h] [bp-5Ch]
  float Height; // [sp+10h] [bp-5Ch]
  float v26; // [sp+18h] [bp-54h]
  void (__fastcall *v27)(LayoutFrame *, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+18h] [bp-54h]
  float v28; // [sp+1Ch] [bp-50h]
  LayoutFrame *v29; // [sp+20h] [bp-4Ch]
  float v30; // [sp+24h] [bp-48h]
  int v32; // [sp+28h] [bp-44h]
  int v34; // [sp+38h] [bp-34h]
  float v35; // [sp+40h] [bp-2Ch]
  _DWORD *v36; // [sp+44h] [bp-28h]
  char *v37; // [sp+58h] [bp-14h] BYREF
  char *v38; // [sp+5Ch] [bp-10h] BYREF
  char *v39; // [sp+60h] [bp-Ch] BYREF
  _BYTE v40[8]; // [sp+64h] [bp-8h] BYREF

  sub_3BF0BC((int)&v39, a2);
  sub_3BF0BC((int)v40, "_Pop");
  sub_1A18B2((int)&v37, (int)&v39, (int)v40);
  sub_3BDF80(v40);
  sub_3BDF80(&v39);
  sub_3BF0BC((int)&v39, a2);
  sub_3BF0BC((int)v40, "_PopBack");
  sub_1A18B2((int)&v38, (int)&v39, (int)v40);
  sub_3BDF80(v40);
  sub_3BDF80(&v39);
  sub_3BEB1C(&v39, &v38);
  sub_3BE948((int)&v39, "_ArrowTex");
  sub_3BF0BC((int)v40, v38);
  LayoutFrame = (Frame *)FrameManager::FindLayoutFrame((int)this);
  sub_3BDF80(v40);
  sub_3BF0BC((int)v40, v37);
  v7 = (RichText *)FrameManager::FindLayoutFrame((int)this);
  sub_3BDF80(v40);
  sub_3BF0BC((int)v40, v39);
  v29 = (LayoutFrame *)FrameManager::FindLayoutFrame((int)this);
  sub_3BDF80(v40);
  sub_3BF0BC((int)v40, a2);
  v36 = (_DWORD *)std::_Rb_tree<std::string,std::pair<std::string const,tagPopWin>,std::_Select1st<std::pair<std::string const,tagPopWin>>,std::less<std::string>,std::allocator<std::pair<std::string const,tagPopWin>>>::find((int)this + 216);
  sub_3BDF80(v40);
  if ( v36 != (_DWORD *)((char *)this + 220)
    && LayoutFrame != nullptr
    && v7 != nullptr
    && v29 != nullptr
    && LayoutFrame::IsShown(LayoutFrame) != 0
    && LayoutFrame::IsShown(v7) != 0
    && LayoutFrame::IsShown(v29) != 0 )
  {
    v28 = *((float *)this + 5) * *(float *)this;
    v11 = (int)RichText::GetTextLines(v7) > 1
        ? (float)(int)LayoutFrame::GetWidth(v7) * v28
        : (float)(int)RichText::getLineWidth(v7, 0);
    v8 = v11;
    TotalHeight = (float)(int)RichText::GetTotalHeight(v7);
    v26 = v28 * 10.0;
    v18 = j_floor(v8);
    v19 = v18 > 30.0 ? (int)v18 : 30;
    v22 = j_floor(TotalHeight);
    v23 = v22 > 20.0 ? (int)v22 : 20;
    v32 = a3 - v19 / 2 - (int)v26;
    v34 = a4 - v23 / 2;
    v9 = FloatToInt((float)v32 - v26);
    v35 = (float)(v32 + v19);
    (*(void (__fastcall **)(Frame *, float, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LayoutFrame + 40))(
      LayoutFrame,
      (float)v9,
      (float)v34 - v26,
      v35 + v26,
      (float)((float)v34 + v26) + (float)v23);
    Frame::SetBlendAlpha(LayoutFrame, a5);
    Frame::SetBackDropBlendAlpha(LayoutFrame, a5);
    LayoutFrame::SetSizeNoRecal(
      LayoutFrame,
      (int)(float)((float)(*((_DWORD *)LayoutFrame + 17) - *((_DWORD *)LayoutFrame + 15)) / v28),
      (int)(float)((float)(*((_DWORD *)LayoutFrame + 18) - *((_DWORD *)LayoutFrame + 16)) / v28));
    if ( (int)LayoutFrame::GetRight(LayoutFrame) > 0
      && LayoutFrame::GetLeft(LayoutFrame) < *((_DWORD *)this + 2)
      && (int)LayoutFrame::GetBottom(LayoutFrame) > 0
      && LayoutFrame::GetTop(LayoutFrame) < *((_DWORD *)this + 3) )
    {
      v16 = (float)(v34 + v23);
      v24 = v16;
      (*(void (__fastcall **)(RichText *, float, float, float, _DWORD))(*(_DWORD *)v7 + 40))(
        v7,
        (float)v32,
        (float)v34,
        COERCE_FLOAT(LODWORD(v35)),
        LODWORD(v16));
      if ( a5 < 0.0 )
        v12 = 0;
      else
        v12 = a5 <= 1.0 ? LODWORD(a5) : 1065353216;
      *((_DWORD *)v7 + 117) = v12;
      Frame::SetBackDropBlendAlpha(v7, a5);
      if ( (int)LayoutFrame::GetRight(v7) > 0
        && LayoutFrame::GetLeft(v7) < *((_DWORD *)this + 2)
        && (int)LayoutFrame::GetBottom(v7) > 0
        && LayoutFrame::GetTop(v7) < *((_DWORD *)this + 3) )
      {
        v13 = v36[8];
        if ( v13 != 0 )
          v14 = v32 + v13;
        else
          v14 = v32 + v19 / 2;
        Texture::SetBlendAlpha(v29, a5);
        v30 = (float)v14 - v26;
        v15 = (float)(v24 + v26) - 3.0;
        v27 = *(void (__fastcall **)(LayoutFrame *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v29 + 40);
        v20 = v30 + (float)((float)(int)LayoutFrame::GetWidth(v29) * (float)(*((float *)this + 5) * *(float *)this));
        Height = (float)(int)LayoutFrame::GetHeight(v29);
        v27(
          v29,
          LODWORD(v30),
          LODWORD(v15),
          LODWORD(v20),
          v15 + (float)(Height * (float)(*((float *)this + 5) * *(float *)this)));
        (*(void (__fastcall **)(Frame *))(*(_DWORD *)LayoutFrame + 32))(LayoutFrame);
        (*(void (__fastcall **)(RichText *))(*(_DWORD *)v7 + 32))(v7);
      }
    }
  }
  sub_3BDF80(&v39);
  sub_3BDF80(&v38);
  return sub_3BDF80(&v37);
}


//======================================================================
// FrameManager::updatePopWinPos(char const*,float,float,float)
// address: 0x001A2EC8   size: 0x28 (40 bytes)
//======================================================================
int __fastcall FrameManager::updatePopWinPos(FrameManager *this, char *a2, float a3, float a4, float a5)
{
  int v6; // [sp+0h] [bp-Ch]

  FrameManager::updatePopWinPos(this, a2, (int)a3, (int)a4, a5);
  return v6;
}


//======================================================================
// FrameManager::delPopWindow(char const*)
// address: 0x001A2EF0   size: 0x10E (270 bytes)
//======================================================================
int __fastcall FrameManager::delPopWindow(FrameManager *this, char *a2)
{
  int result; // r0
  LayoutFrame *LayoutFrame; // r7
  LayoutFrame *v6; // r5
  char *v7; // r4
  FrameManager *v8; // [sp+Ch] [bp-28h]
  char *v9; // [sp+20h] [bp-14h] BYREF
  char *v10; // [sp+24h] [bp-10h] BYREF
  _BYTE v11[4]; // [sp+28h] [bp-Ch] BYREF
  _BYTE v12[8]; // [sp+2Ch] [bp-8h] BYREF

  sub_3BF0BC((int)v12, a2);
  v8 = (FrameManager *)std::_Rb_tree<std::string,std::pair<std::string const,tagPopWin>,std::_Select1st<std::pair<std::string const,tagPopWin>>,std::less<std::string>,std::allocator<std::pair<std::string const,tagPopWin>>>::find((int)this + 216);
  result = sub_3BDF80(v12);
  if ( v8 != (FrameManager *)((char *)this + 220) )
  {
    sub_3BF0BC((int)v11, a2);
    sub_3BF0BC((int)v12, "_Pop");
    sub_1A18B2((int)&v9, (int)v11, (int)v12);
    sub_3BDF80(v12);
    sub_3BDF80(v11);
    sub_3BF0BC((int)v11, a2);
    sub_3BF0BC((int)v12, "_PopBack");
    sub_1A18B2((int)&v10, (int)v11, (int)v12);
    sub_3BDF80(v12);
    sub_3BDF80(v11);
    sub_3BF0BC((int)v12, v9);
    LayoutFrame = (LayoutFrame *)FrameManager::FindLayoutFrame((int)this);
    sub_3BDF80(v12);
    sub_3BF0BC((int)v12, v10);
    v6 = (LayoutFrame *)FrameManager::FindLayoutFrame((int)this);
    sub_3BDF80(v12);
    if ( LayoutFrame != nullptr )
    {
      LayoutFrame::Hide(LayoutFrame);
      LayoutFrame::Hide(v6);
    }
    v7 = (char *)sub_391F50(v8, (char *)this + 220);
    sub_3BDF80(v7 + 44);
    sub_3BDF80(v7 + 16);
    operator delete(v7);
    --*((_DWORD *)this + 59);
    sub_3BDF80(&v10);
    return sub_3BDF80(&v9);
  }
  return result;
}


//======================================================================
// FrameManager::InitPictureTexture(int,int)
// address: 0x001A3308   size: 0x40 (64 bytes)
//======================================================================
int __fastcall FrameManager::InitPictureTexture(RPictureCodeMap **this, int a2, int a3)
{
  char *v3; // r4
  int v6; // r7
  int result; // r0
  int v8; // r3

  v3 = (char *)(this + 63);
  RPictureCodeMap::Init(*(this + 75));
  v6 = *((_DWORD *)v3 + 12);
  result = (*(int (__fastcall **)(int, _DWORD, int, _DWORD, _DWORD, int))(*(_DWORD *)g_pDisplay + 72))(
             g_pDisplay,
             *(_DWORD *)(v6 + 4),
             2,
             0,
             0,
             1);
  *(_DWORD *)(v6 + 8) = result;
  v8 = *((_DWORD *)v3 + 12);
  *(_DWORD *)(v8 + 12) = a2;
  *(_DWORD *)(v8 + 16) = a3;
  return result;
}


//======================================================================
// FrameManager::AddGameAccels(AccelItem)
// address: 0x001A3852   size: 0x54 (84 bytes)
//======================================================================
_DWORD *__fastcall FrameManager::AddGameAccels(int a1)
{
  int v1; // r5
  char *v2; // r1
  _DWORD *result; // r0
  int varg_r1; // [sp+14h] [bp+14h] BYREF

  v1 = a1 + 160;
  v2 = *(char **)(a1 + 164);
  if ( v2 == *(char **)(a1 + 168) )
  {
    std::vector<AccelItem>::_M_insert_aux((void **)(a1 + 160), v2, &varg_r1);
  }
  else
  {
    if ( v2 != nullptr )
      j_memcpy(*(void **)(a1 + 164), &varg_r1, 0x108u);
    *(_DWORD *)(v1 + 4) += 264;
  }
  result = (_DWORD *)std::map<int,unsigned int>::operator[]((_DWORD *)(a1 + 316), &varg_r1);
  *result = 0;
  return result;
}


//======================================================================
// FrameManager::setAccelKeyState(int)
// address: 0x001A38A6   size: 0x30 (48 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> FrameManager::setAccelKeyState(FrameManager *this, int a2)
{
  _DWORD *v2; // r5
  Ogre::Timer *v3; // r4
  __suseconds_t v4; // r1
  int v5; // [sp+4h] [bp-4h] BYREF

  v2 = (_DWORD *)((char *)this + 316);
  if ( std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::find(
         (int)this + 316,
         &v5) != (_DWORD *)((char *)this + 320) )
  {
    v3 = (Ogre::Timer *)std::map<int,unsigned int>::operator[](v2, &v5);
    *(_DWORD *)v3 = Ogre::Timer::getSystemTick(v3, v4);
  }
}


//======================================================================
// FrameManager::clearAccelKeyState(int)
// address: 0x001A38D6   size: 0x2C (44 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> FrameManager::clearAccelKeyState(FrameManager *this, int a2)
{
  _DWORD *v2; // r5
  int v3; // [sp+4h] [bp-4h] BYREF

  v2 = (_DWORD *)((char *)this + 316);
  if ( std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::find(
         (int)this + 316,
         &v3) != (_DWORD *)((char *)this + 320) )
    *(_DWORD *)std::map<int,unsigned int>::operator[](v2, &v3) = 0;
}


//======================================================================
// FrameManager::AddRootFrame(Frame *)
// address: 0x001A3A2C   size: 0x30 (48 bytes)
//======================================================================
__int64 __fastcall FrameManager::AddRootFrame(__int64 this, int a2)
{
  int v2; // r2
  int v3; // r3
  __int64 v5; // [sp+0h] [bp-Ch] BYREF
  int v6; // [sp+8h] [bp-4h]

  v5 = this;
  v6 = a2;
  *(_DWORD *)(HIDWORD(this) + 108) = 0;
  v2 = *(_DWORD *)(HIDWORD(this) + 40);
  v3 = HIDWORD(this);
  HIDWORD(v5) = HIDWORD(this);
  *(_DWORD *)(HIDWORD(this) + 40) = v2 + 1;
  HIDWORD(this) = *(_DWORD *)(this + 80);
  if ( HIDWORD(this) == *(_DWORD *)(this + 84) )
  {
    std::vector<Frame *>::_M_insert_aux(this + 76, (_DWORD *)HIDWORD(this), (int *)&v5 + 1);
  }
  else
  {
    if ( HIDWORD(this) != 0 )
      *(_DWORD *)HIDWORD(this) = v3;
    *(_DWORD *)(this + 80) += 4;
  }
  return v5;
}


//======================================================================
// FrameManager::addPopWindow(char const*,char const*,char const*,int,int,int,char const*,bool,int,int)
// address: 0x001A3A5C   size: 0x30A (778 bytes)
//======================================================================
int __fastcall FrameManager::addPopWindow(
        FrameManager *this,
        char *a2,
        char *a3,
        const char *a4,
        int a5,
        int a6,
        int a7,
        char *a8,
        bool a9,
        int a10,
        int a11)
{
  int LayoutFrame; // r6
  UIObject *Object; // r4
  UIObject *v13; // r7
  int v14; // r2
  int v15; // r2
  float v16; // r0
  int v17; // r0
  int v18; // r0
  int Width; // r0
  float LineWidth; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r1
  int v24; // r2
  Ogre::Timer *v25; // r0
  __suseconds_t v26; // r1
  _DWORD *v27; // r0
  float v31; // [sp+14h] [bp-24h]
  float v32; // [sp+18h] [bp-20h]
  char *TotalHeight; // [sp+1Ch] [bp-1Ch]
  char *v36; // [sp+30h] [bp-8h] BYREF
  char *v37; // [sp+34h] [bp-4h] BYREF
  int v38; // [sp+38h] [bp+0h] BYREF
  int v39; // [sp+3Ch] [bp+4h] BYREF
  int v40; // [sp+40h] [bp+8h]
  int v41; // [sp+44h] [bp+Ch]
  int v42; // [sp+48h] [bp+10h]
  int v43; // [sp+4Ch] [bp+14h]
  bool v44; // [sp+50h] [bp+18h]
  _DWORD v45[2]; // [sp+54h] [bp+1Ch] BYREF

  sub_3BF0BC((int)&v38, a3);
  sub_3BF0BC((int)&v39, "_Pop");
  sub_1A18B2((int)&v36, (int)&v38, (int)&v39);
  sub_3BDF80(&v39);
  sub_3BDF80(&v38);
  sub_3BF0BC((int)&v38, a3);
  sub_3BF0BC((int)&v39, "_PopBack");
  sub_1A18B2((int)&v37, (int)&v38, (int)&v39);
  sub_3BDF80(&v39);
  sub_3BDF80(&v38);
  sub_3BF0BC((int)&v39, v36);
  LayoutFrame = FrameManager::FindLayoutFrame((int)this);
  sub_3BDF80(&v39);
  if ( LayoutFrame != 0 )
  {
    sub_3BF0BC((int)&v39, v36);
    Object = (UIObject *)FrameManager::FindLayoutFrame((int)this);
    sub_3BDF80(&v39);
    sub_3BF0BC((int)&v39, v37);
    v13 = (UIObject *)FrameManager::FindLayoutFrame((int)this);
    sub_3BDF80(&v39);
  }
  else
  {
    Object = FrameManager::CreateObject(this, "RichText", v36, "ChatPopText");
    v13 = FrameManager::CreateObject(this, "Frame", v37, a2);
    (*(void (__fastcall **)(UIObject *))(*(_DWORD *)v13 + 20))(v13);
    (*(void (__fastcall **)(UIObject *))(*(_DWORD *)Object + 20))(Object);
    Frame::RegisterToFrameMgr(Object, this);
    Frame::RegisterToFrameMgr(v13, this);
    LayoutFrame::SetFrameDraw(v13, false);
    LayoutFrame::SetFrameDraw(Object, false);
    FrameManager::AddRootFrame(__SPAIR64__((unsigned int)v13, (unsigned int)this), v14);
    FrameManager::AddRootFrame(__SPAIR64__((unsigned int)Object, (unsigned int)this), v15);
  }
  v16 = *((float *)this + 5) * *(float *)this;
  *((_BYTE *)Object + 472) = 1;
  v31 = v16;
  v39 = 4;
  v17 = std::map<int,std::string>::operator[]((_DWORD *)Object + 4, &v39);
  sub_3BE508(v17, "RichText_OnClick();");
  v39 = 17;
  v18 = std::map<int,std::string>::operator[]((_DWORD *)Object + 4, &v39);
  sub_3BE508(v18, "TeamRoleFrameChatPop_OnHide();");
  Width = LayoutFrame::GetWidth(Object);
  RichText::resizeRichWidth(Object, (int)(float)((float)Width * v31));
  if ( j_strcmp("NpcGuidePop", a2) == 0 )
    RichText::SetText(Object, a4, 86, 79, 54);
  else
    RichText::SetText(Object, a4, 255, 255, 255);
  TotalHeight = (char *)RichText::GetTotalHeight(Object);
  if ( (int)RichText::GetTextLines(Object) <= 1 )
    LineWidth = (float)(int)RichText::getLineWidth(Object, 0);
  else
    LineWidth = (float)(int)LayoutFrame::GetWidth(Object) * v31;
  v32 = (float)a5 + LineWidth;
  (*(void (__fastcall **)(UIObject *, float, float, _DWORD, _DWORD))(*(_DWORD *)Object + 40))(
    Object,
    (float)a5,
    (float)a6,
    LODWORD(v32),
    (float)a6 + (float)(int)TotalHeight);
  (*(void (__fastcall **)(UIObject *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v13 + 40))(
    v13,
    (float)a5 - (float)(v31 * 10.0),
    (float)a6 - (float)(v31 * 10.0),
    v32 + (float)(v31 * 10.0),
    (float)(int)&TotalHeight[a6] + (float)(v31 * 10.0));
  *((_DWORD *)v13 + 27) = FrameManager::GetUIClientFrame(this, v21, v22);
  *((_DWORD *)Object + 27) = FrameManager::GetUIClientFrame(this, v23, v24);
  LayoutFrame::Show(v13);
  v25 = (Ogre::Timer *)LayoutFrame::Show(Object);
  v45[0] = &byte_55FB88;
  v39 = Ogre::Timer::getSystemTick(v25, v26) + 1000 * a7;
  v44 = a9;
  sub_3BE508((int)v45, a8);
  v40 = a5;
  v41 = a6;
  v42 = a10;
  v43 = a11;
  sub_3BF0BC((int)&v38, a3);
  v27 = std::map<std::string,tagPopWin>::operator[]((_DWORD *)this + 54, (int)&v38);
  *v27 = v39;
  v27[1] = v40;
  v27[2] = v41;
  v27[3] = v42;
  v27[4] = v43;
  *((_BYTE *)v27 + 20) = v44;
  sub_3BEBBC(v27 + 6);
  sub_3BDF80(&v38);
  sub_3BDF80(v45);
  sub_3BDF80(&v37);
  return sub_3BDF80(&v36);
}


//======================================================================
// FrameManager::RegisterObject(UIObject *)
// address: 0x001A417C   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall FrameManager::RegisterObject(FrameManager *this, UIObject *a2)
{
  int v2; // r3
  char *v4; // r1
  char *v5; // r0
  _DWORD *result; // r0

  ++*((_DWORD *)a2 + 10);
  v2 = *((unsigned __int8 *)a2 + 4);
  v4 = (char *)a2 + 8;
  if ( v2 != 0 )
    v5 = (char *)this + 52;
  else
    v5 = (char *)this + 28;
  result = std::map<std::string,UIObject *>::operator[](v5, (int)v4);
  *result = a2;
  return result;
}


//======================================================================
// FrameManager::InitRootFrames(void)
// address: 0x001A419C   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall FrameManager::InitRootFrames(LayoutFrame **this)
{
  UIObject *Object; // r0
  _DWORD *result; // r0
  unsigned int v4; // r5
  int v5; // r3
  Frame *v6; // r6
  unsigned int i; // r5
  int v8; // r3
  unsigned int j; // r5
  int v10; // r3
  int v11; // r0

  Object = FrameManager::CreateObject((FrameManager *)this, "Frame", (const char *)dword_50F7E0, nullptr);
  *(this + 25) = Object;
  LayoutFrame::setInputTransparent(Object, true);
  LayoutFrame::Hide(*(this + 25));
  result = FrameManager::RegisterObject((FrameManager *)this, *(this + 25));
  v4 = 0;
  while ( 1 )
  {
    v5 = (int)*(this + 19);
    if ( v4 >= ((int)*(this + 20) - v5) >> 2 )
      break;
    v6 = *(Frame **)(4 * v4++ + v5);
    (*(void (__fastcall **)(Frame *))(*(_DWORD *)v6 + 20))(v6);
    Frame::InitFrameStrata(v6);
    result = (_DWORD *)Frame::RegisterToFrameMgr(v6, (FrameManager *)g_pFrameMgr);
  }
  for ( i = 0; ; ++i )
  {
    v8 = (int)*(this + 19);
    if ( i >= ((int)*(this + 20) - v8) >> 2 )
      break;
    result = (_DWORD *)FrameManager::CreateLuaTable((FrameManager *)this, *(Frame **)(4 * i + v8));
  }
  for ( j = 0; ; ++j )
  {
    v10 = (int)*(this + 19);
    if ( j >= ((int)*(this + 20) - v10) >> 2 )
      break;
    v11 = *(_DWORD *)(4 * j + v10);
    result = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v11 + 16))(v11);
  }
  return result;
}


//======================================================================
// FrameManager::bindFrameMouseID(Frame *,int)
// address: 0x001A429A   size: 0x12C (300 bytes)
//======================================================================
int *__fastcall FrameManager::bindFrameMouseID(int *this, Frame *a2, int a3)
{
  int *v3; // r6
  int *v5; // r4
  int *v6; // r3
  unsigned int v7; // r3
  int *v8; // r5
  _BOOL4 v9; // r6
  int *v10; // r0
  int v11; // r2
  int *v12; // [sp+8h] [bp-24h]
  int v13; // [sp+Ch] [bp-20h]
  int *v14; // [sp+10h] [bp-1Ch]
  Frame *v16; // [sp+18h] [bp-14h] BYREF
  int v17; // [sp+1Ch] [bp-10h]
  int *v18; // [sp+20h] [bp-Ch] BYREF
  int *v19; // [sp+24h] [bp-8h]

  v3 = (int *)*(this + 31);
  v12 = this;
  v14 = this + 30;
  v5 = this + 30;
  while ( v3 != nullptr )
  {
    if ( v3[4] < (unsigned int)a2 )
    {
      v6 = (int *)v3[3];
      v3 = v5;
    }
    else
    {
      v6 = (int *)v3[2];
    }
    v5 = v3;
    v3 = v6;
  }
  if ( v5 != v14 && (unsigned int)a2 >= v5[4] )
    goto LABEL_12;
  v17 = 0;
  v16 = a2;
  v13 = (int)(this + 29);
  if ( v5 != v14 )
  {
    v7 = v5[4];
    if ( (unsigned int)a2 >= v7 )
    {
      if ( v7 >= (unsigned int)a2 )
        goto LABEL_12;
      if ( v5 != (int *)*(this + 33) )
      {
        this = (int *)sub_391DDC(v5);
        if ( (unsigned int)a2 >= *(this + 4) )
        {
          this = std::_Rb_tree<Frame *,std::pair<Frame * const,int>,std::_Select1st<std::pair<Frame * const,int>>,std::less<Frame *>,std::allocator<std::pair<Frame * const,int>>>::_M_get_insert_unique_pos(
                   (int *)&v18,
                   v13,
                   &v16);
          v3 = v18;
          v5 = v19;
        }
        else if ( v5[3] != 0 )
        {
          v5 = this;
          v3 = this;
        }
      }
      v8 = v5;
      v5 = v3;
LABEL_27:
      if ( v8 == nullptr )
        goto LABEL_12;
      v9 = true;
      if ( v5 != nullptr )
        goto LABEL_32;
      goto LABEL_29;
    }
    if ( v5 == (int *)*(this + 32) )
    {
      v8 = v5;
      goto LABEL_27;
    }
    this = (int *)sub_391E44(v5);
    v8 = this;
    if ( *(this + 4) < (unsigned int)a2 )
    {
      if ( *(this + 3) != 0 )
        v8 = v5;
      else
        v5 = nullptr;
      goto LABEL_27;
    }
LABEL_35:
    this = std::_Rb_tree<Frame *,std::pair<Frame * const,int>,std::_Select1st<std::pair<Frame * const,int>>,std::less<Frame *>,std::allocator<std::pair<Frame * const,int>>>::_M_get_insert_unique_pos(
             (int *)&v18,
             v13,
             &v16);
    v5 = v18;
    v8 = v19;
    goto LABEL_27;
  }
  if ( *(this + 34) == 0 )
    goto LABEL_35;
  v8 = (int *)*(this + 33);
  if ( v8[4] >= (unsigned int)a2 )
    goto LABEL_35;
LABEL_29:
  v9 = v8 == v14 || (unsigned int)a2 < v8[4];
LABEL_32:
  v10 = (int *)operator new(0x18u);
  v5 = v10;
  if ( v10 != (int *)-16 )
  {
    v11 = v17;
    v10[4] = (int)v16;
    v10[5] = v11;
  }
  this = (int *)sub_391E64(v9, v10, v8, v14);
  ++v12[34];
LABEL_12:
  v5[5] = a3;
  return this;
}


//======================================================================
// FrameManager::OnInputMessage(Ogre::InputEvent const&)
// address: 0x001A43C8   size: 0x32C (812 bytes)
//======================================================================
int __fastcall FrameManager::OnInputMessage(FrameManager *this, InputEvent *a2)
{
  unsigned int v4; // r7
  struct _InputEvent *v5; // r2
  struct _InputEvent *v6; // r3
  int v7; // r0
  int v8; // r0
  int *v9; // r7
  char *v10; // r6
  char *v11; // r3
  unsigned int v12; // r5
  int v13; // r3
  int v14; // r0
  _DWORD *v15; // r6
  unsigned int i; // r5
  int v17; // r3
  int v18; // r0
  unsigned __int8 *ie_closure; // r3
  int v20; // r6
  int v21; // r0
  int v22; // r0
  int v23; // r0
  Frame *UIObjectOnPoint; // r6
  unsigned int v25; // r0
  int ie_closure_high; // r2
  struct _InputEvent *ie_next; // r0
  __int16 v28; // r2
  Frame *v29; // r7
  int MouseIDBindFrame; // r0
  struct _InputEvent *ie_oq; // r2
  int v32; // r0
  XtPointer v33; // r3
  int v34; // r0
  int *p_ie_closure; // [sp+8h] [bp-3Ch]
  Frame *v38; // [sp+8h] [bp-3Ch]
  Frame *v39; // [sp+8h] [bp-3Ch]
  _DWORD *v40; // [sp+10h] [bp-34h] BYREF
  _BYTE *v41; // [sp+14h] [bp-30h]
  int v42; // [sp+18h] [bp-2Ch]
  int v43; // [sp+1Ch] [bp-28h] BYREF
  __int16 v44; // [sp+20h] [bp-24h]
  __int16 v45; // [sp+22h] [bp-22h]
  struct _InputEvent *v46; // [sp+24h] [bp-20h]
  void *v47[3]; // [sp+30h] [bp-14h] BYREF

  switch ( (unsigned int)a2->ie_proc )
  {
    case 0u:
      ie_closure = (unsigned __int8 *)a2->ie_closure;
      if ( ie_closure[1] == 0 && FrameManager::isInAccelKeyState(this, *ie_closure, ie_closure[1]) )
        return 0;
      v23 = *((_DWORD *)this + 26);
      goto LABEL_29;
    case 1u:
      v21 = *((_DWORD *)this + 26);
      if ( v21 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v21 + 64))(v21) == 0 )
        return 0;
      FrameManager::setAccelKeyState(this, (int)a2->ie_closure);
      return FrameManager::OnAccelerator(this, a2) != 0;
    case 2u:
      v22 = *((_DWORD *)this + 26);
      if ( v22 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v22 + 64))(v22) == 0 )
        return 0;
      FrameManager::clearAccelKeyState(this, (int)a2->ie_closure);
      return FrameManager::OnAccelerator(this, a2) != 0;
    case 3u:
      *((_DWORD *)this + 27) = SLOWORD(a2->ie_closure);
      *((_DWORD *)this + 28) = SHIWORD(a2->ie_closure);
      UIObjectOnPoint = (Frame *)FrameManager::FindUIObjectOnPoint(
                                   this,
                                   SLOWORD(a2->ie_closure),
                                   SHIWORD(a2->ie_closure),
                                   false);
      if ( UIObjectOnPoint != *((Frame **)this + 26) )
        FrameManager::setCurEditBox((int)this, 0);
      if ( UIObjectOnPoint == nullptr )
        return 1;
      FrameManager::bindFrameMouseID((int *)this, UIObjectOnPoint, (int)a2->ie_oq);
      return (*(int (__fastcall **)(Frame *, InputEvent *))(*(_DWORD *)UIObjectOnPoint + 64))(UIObjectOnPoint, a2);
    case 4u:
      v25 = FrameManager::FindUIObjectOnPoint(this, SLOWORD(a2->ie_closure), SHIWORD(a2->ie_closure), false);
      UIObjectOnPoint = (Frame *)v25;
      if ( v25 == 0 || (struct _InputEvent *)FrameManager::getFrameBindMouseID((int)this, v25) != a2->ie_oq )
        return 1;
      FrameManager::clearFrameMouseID(this, UIObjectOnPoint);
      return (*(int (__fastcall **)(Frame *, InputEvent *))(*(_DWORD *)UIObjectOnPoint + 64))(UIObjectOnPoint, a2);
    case 5u:
      v23 = FrameManager::FindUIObjectOnPoint(this, SLOWORD(a2->ie_closure), SHIWORD(a2->ie_closure), false);
LABEL_29:
      if ( v23 != 0 )
        (*(void (__fastcall **)(int, InputEvent *))(*(_DWORD *)v23 + 64))(v23, a2);
      return 1;
    case 9u:
      ie_closure_high = SHIWORD(a2->ie_closure);
      ie_next = a2->ie_next;
      v20 = 1;
      UICursor::m_Pos = SLOWORD(a2->ie_closure);
      dword_50FA38 = ie_closure_high;
      if ( ((unsigned __int8)ie_next & 1) == 0 )
        return v20;
      v28 = HIWORD(a2->ie_closure);
      v44 = (__int16)a2->ie_closure;
      v45 = v28;
      memset(v47, 0, sizeof(v47));
      v46 = ie_next;
      v29 = (Frame *)FrameManager::FindUIObjectOnPoint(this, v44, v28, false);
      MouseIDBindFrame = FrameManager::getMouseIDBindFrame(this, (int)a2->ie_oq);
      v39 = (Frame *)MouseIDBindFrame;
      if ( v29 == (Frame *)MouseIDBindFrame )
      {
        if ( v29 != nullptr )
        {
          v32 = (*(int (__fastcall **)(Frame *, InputEvent *))(*(_DWORD *)v29 + 64))(v29, a2);
          goto LABEL_46;
        }
      }
      else
      {
        if ( MouseIDBindFrame != 0 )
        {
          v43 = 11;
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)MouseIDBindFrame + 64))(MouseIDBindFrame, &v43);
          FrameManager::clearFrameMouseID(this, v39);
        }
        if ( v29 != nullptr )
        {
          ie_oq = a2->ie_oq;
          v43 = 12;
          FrameManager::bindFrameMouseID((int *)this, v29, (int)ie_oq);
          v32 = (*(int (__fastcall **)(Frame *, int *))(*(_DWORD *)v29 + 64))(v29, &v43);
LABEL_46:
          v20 = v32;
          std::_Vector_base<char>::~_Vector_base(v47);
          return v20;
        }
      }
      std::_Vector_base<char>::~_Vector_base(v47);
      return 1;
    case 0xAu:
      v34 = FrameManager::FindUIObjectOnPoint(this, SLOWORD(a2->ie_oq), SHIWORD(a2->ie_oq), false);
      if ( v34 == 0 )
        return 1;
      return (*(int (__fastcall **)(int, InputEvent *))(*(_DWORD *)v34 + 64))(v34, a2);
    case 0xDu:
      if ( a2->ie_next == nullptr )
        return 0;
      v33 = a2->ie_closure;
      if ( v33 == nullptr )
        return 0;
      *((_DWORD *)this + 2) = v33;
      v20 = 1;
      *((_DWORD *)this + 3) = a2->ie_next;
      FrameManager::setScaleXYByWinSize(this, (int)a2->ie_closure, (int)a2->ie_next);
      *((_BYTE *)this + 188) = 1;
      return v20;
    case 0x10u:
      v4 = 0;
      v41 = nullptr;
      v42 = 0;
      v5 = a2->ie_next;
      v6 = a2->ie_oq;
      v40 = nullptr;
      FrameManager::FindUIObjectOnPoint(this, &v40, v5, v6, 0);
      while ( v4 < (v41 - (_BYTE *)v40) >> 2 )
      {
        v7 = v40[v4++];
        (*(void (__fastcall **)(int, InputEvent *))(*(_DWORD *)v7 + 64))(v7, a2);
      }
      if ( v40 == (_DWORD *)v41 )
      {
        std::_Vector_base<Frame *>::~_Vector_base((void **)&v40);
        return 1;
      }
      v8 = std::map<int,std::vector<Frame *>>::operator[]((_DWORD *)this + 85, (int *)&a2->ie_closure);
      std::vector<Frame *>::operator=(v8, (int)&v40);
      std::_Vector_base<Frame *>::~_Vector_base((void **)&v40);
      return 0;
    case 0x11u:
    case 0x13u:
      v9 = (int *)((char *)this + 340);
      p_ie_closure = (int *)&a2->ie_closure;
      v10 = (char *)std::_Rb_tree<int,std::pair<int const,std::vector<Frame *>>,std::_Select1st<std::pair<int const,std::vector<Frame *>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<Frame *>>>>::find(
                      (int)this + 340,
                      &a2->ie_closure);
      v11 = (char *)this + 344;
      v12 = 0;
      if ( v10 == v11 )
        return 1;
      while ( 1 )
      {
        v13 = *((_DWORD *)v10 + 5);
        if ( v12 >= (*((_DWORD *)v10 + 6) - v13) >> 2 )
          break;
        v14 = *(_DWORD *)(4 * v12++ + v13);
        (*(void (__fastcall **)(int, InputEvent *))(*(_DWORD *)v14 + 64))(v14, a2);
      }
      std::_Rb_tree<int,std::pair<int const,std::vector<Frame *>>,std::_Select1st<std::pair<int const,std::vector<Frame *>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<Frame *>>>>::erase(
        v9,
        p_ie_closure);
      return 0;
    case 0x12u:
      v38 = (Frame *)a2->ie_closure;
      v15 = std::_Rb_tree<int,std::pair<int const,std::vector<Frame *>>,std::_Select1st<std::pair<int const,std::vector<Frame *>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<Frame *>>>>::find(
              (int)this + 340,
              v38);
      if ( std::_Rb_tree<int,std::pair<int const,std::vector<Frame *>>,std::_Select1st<std::pair<int const,std::vector<Frame *>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<Frame *>>>>::find(
             (int)this + 340,
             v38) == (_DWORD *)((char *)this + 344) )
        return 1;
      for ( i = 0; ; ++i )
      {
        v17 = v15[5];
        if ( i >= (v15[6] - v17) >> 2 )
          break;
        v18 = *(_DWORD *)(4 * i + v17);
        (*(void (__fastcall **)(int, InputEvent *))(*(_DWORD *)v18 + 64))(v18, a2);
      }
      return 0;
    default:
      return 1;
  }
}


//======================================================================
// FrameManager::AddDrawItems(Frame *)
// address: 0x001A47E2   size: 0xE (14 bytes)
//======================================================================
FrameManager *__fastcall FrameManager::AddDrawItems(FrameManager *this, Frame *a2, int a3)
{
  __int64 v3; // r0
  _DWORD v6[2]; // [sp+4h] [bp-8h] BYREF

  v6[1] = a3;
  LODWORD(v3) = (char *)this + 88;
  HIDWORD(v3) = v6;
  std::vector<LayoutFrame *>::push_back(v3);
  return this;
}


//======================================================================
// FrameManager::AddReCalFrame(LayoutFrame *)
// address: 0x001A47F0   size: 0x9A (154 bytes)
//======================================================================
__int64 __fastcall FrameManager::AddReCalFrame(__int64 this)
{
  int v1; // r4
  const char *Name; // r0
  __int64 v3; // r0
  _DWORD *v4; // r2
  _DWORD *v5; // r4
  int i; // r5
  _DWORD *v7; // r3
  int v8; // r5
  __int64 v10; // [sp+0h] [bp-8h] BYREF

  v10 = this;
  v1 = this;
  if ( *(_BYTE *)(HIDWORD(this) + 4) != 0 )
    return v10;
  Name = (const char *)UIObject::GetName((UIObject *)HIDWORD(this));
  if ( j_strstr(Name, "$parent") != nullptr )
    return v10;
  LODWORD(v3) = v1 + 192;
  v4 = *(_DWORD **)v3;
  v5 = *(_DWORD **)(v1 + 196);
  for ( i = ((int)v5 - *(_DWORD *)v3) >> 4; ; --i )
  {
    v7 = v4;
    if ( i <= 0 )
      break;
    if ( *v4 == HIDWORD(v10) )
      goto LABEL_23;
    if ( v4[1] == HIDWORD(v10) )
    {
      v7 = v4 + 1;
      goto LABEL_24;
    }
    if ( v4[2] == HIDWORD(v10) )
    {
      v7 = v4 + 2;
      goto LABEL_24;
    }
    v4 += 4;
    if ( *(v4 - 1) == HIDWORD(v10) )
    {
      v7 += 3;
      goto LABEL_24;
    }
  }
  v8 = v5 - v4;
  if ( v8 != 2 )
  {
    if ( v8 != 3 )
    {
      if ( v8 != 1 )
        goto LABEL_25;
      goto LABEL_21;
    }
    if ( *v4 == HIDWORD(v10) )
    {
LABEL_23:
      v7 = v4;
      goto LABEL_24;
    }
    v7 = v4 + 1;
  }
  if ( *v7 == HIDWORD(v10) )
    goto LABEL_24;
  ++v7;
LABEL_21:
  if ( *v7 == HIDWORD(v10) )
  {
LABEL_24:
    if ( v7 != v5 )
      return v10;
  }
LABEL_25:
  HIDWORD(v3) = (char *)&v10 + 4;
  std::vector<LayoutFrame *>::push_back(v3);
  return v10;
}


//======================================================================
// FrameManager::FindUIObjectOnPoint(std::vector<Frame *,std::allocator<Frame *>> &,int,int,bool)
// address: 0x001B9104   size: 0x88 (136 bytes)
//======================================================================
void __fastcall FrameManager::FindUIObjectOnPoint(int a1, char **a2, int a3, int a4, char a5)
{
  unsigned int i; // r5
  int v8; // r3
  int v9; // r0
  char *v10; // r1
  unsigned int v11; // r3
  char *v12; // r2
  int j; // r3

  for ( i = 0; ; ++i )
  {
    v8 = *(_DWORD *)(a1 + 76);
    if ( i >= (*(_DWORD *)(a1 + 80) - v8) >> 2 )
      break;
    if ( LayoutFrame::IsShown(*(LayoutFrame **)(v8 + 4 * i)) != 0 )
    {
      v9 = *(_DWORD *)(*(_DWORD *)(a1 + 76) + 4 * i);
      (*(void (__fastcall **)(int, int, int, char **))(*(_DWORD *)v9 + 88))(v9, a3, a4, a2);
    }
  }
  v10 = a2[1];
  v11 = (v10 - *a2) >> 2;
  if ( v11 != 1 )
  {
    if ( v11 > 1 )
      std::stable_sort<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        *a2,
        v10,
        (int (__fastcall *)(int, int))sub_1B899A);
    if ( a5 != 0 )
    {
      v12 = *a2;
      for ( j = 0; j != (a2[1] - *a2) >> 2; ++j )
      {
        if ( *(_DWORD *)(*(_DWORD *)&v12[4 * j] + 296) != -1 )
        {
          Frame::AddLevelRecursive(*(Frame **)&v12[4 * j], 1);
          return;
        }
      }
    }
  }
}


//======================================================================
// FrameManager::FindModalFrame(char const*,std::vector<Frame *,std::allocator<Frame *>> &)
// address: 0x001B9190   size: 0x72 (114 bytes)
//======================================================================
__int64 __fastcall FrameManager::FindModalFrame(__int64 a1, unsigned int a2)
{
  int v2; // r6
  unsigned int i; // r5
  int v5; // r3
  int *v6; // r7
  _DWORD *v7; // r1
  char *v8; // r1
  __int64 v10; // [sp+0h] [bp-Ch]

  v10 = a1;
  v2 = a1;
  for ( i = 0; ; ++i )
  {
    v5 = *(_DWORD *)(v2 + 76);
    if ( i >= (*(_DWORD *)(v2 + 80) - v5) >> 2 )
      break;
    if ( LayoutFrame::IsShown(*(LayoutFrame **)(v5 + 4 * i)) != 0 )
    {
      v6 = (int *)(*(_DWORD *)(v2 + 76) + 4 * i);
      LODWORD(v10) = *v6;
      if ( j_strcmp((const char *)HIDWORD(v10), *(const char **)(*v6 + 400)) == 0 )
      {
        v7 = *(_DWORD **)(a2 + 4);
        if ( v7 == *(_DWORD **)(a2 + 8) )
        {
          std::vector<Frame *>::_M_insert_aux(a2, v7, v6);
        }
        else
        {
          if ( v7 != nullptr )
            *v7 = v10;
          *(_DWORD *)(a2 + 4) += 4;
        }
      }
    }
  }
  v8 = *(char **)(a2 + 4);
  if ( (int)&v8[-*(_DWORD *)a2] >> 2 != 0 )
    std::stable_sort<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
      *(char **)a2,
      v8,
      (int (__fastcall *)(int, int))sub_1B899A);
  return v10;
}


//======================================================================
// FrameManager::FindUIObjectOnPoint(int,int,bool)
// address: 0x001B9208   size: 0x19A (410 bytes)
//======================================================================
int __fastcall FrameManager::FindUIObjectOnPoint(FrameManager *this, int a2, int a3, int a4)
{
  unsigned int v4; // r5
  int v6; // r3
  int v7; // r0
  int RootFrame; // r0
  unsigned int v9; // r6
  __int64 v10; // r0
  int *v11; // r3
  LayoutFrame *LayoutFrame; // r4
  _DWORD *v13; // r2
  char *v14; // r1
  int i; // r0
  LayoutFrame **v16; // r3
  int v17; // r0
  int v18; // r4
  char *Parent; // [sp+4h] [bp-30h]
  char v24[4]; // [sp+14h] [bp-20h] BYREF
  void *v25; // [sp+18h] [bp-1Ch] BYREF
  char *v26; // [sp+1Ch] [bp-18h]
  int v27; // [sp+20h] [bp-14h]
  void *v28; // [sp+24h] [bp-10h] BYREF
  int v29; // [sp+28h] [bp-Ch]
  int v30; // [sp+2Ch] [bp-8h]

  v4 = 0;
  v25 = nullptr;
  v26 = nullptr;
  v27 = 0;
  v28 = nullptr;
  v29 = 0;
  v30 = 0;
  while ( 1 )
  {
    v6 = *((_DWORD *)this + 19);
    if ( v4 >= (*((_DWORD *)this + 20) - v6) >> 2 )
      break;
    if ( LayoutFrame::IsShown(*(LayoutFrame **)(v6 + 4 * v4)) != 0 )
    {
      v7 = *(_DWORD *)(*((_DWORD *)this + 19) + 4 * v4);
      (*(void (__fastcall **)(int, int, int, void **))(*(_DWORD *)v7 + 88))(v7, a2, a3, &v25);
    }
    ++v4;
  }
  if ( (v26 - (_BYTE *)v25) >> 2 != 0 )
  {
    std::stable_sort<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
      (char *)v25,
      v26,
      (int (__fastcall *)(int, int))sub_1B899A);
    if ( a4 == 0 )
      goto LABEL_30;
    RootFrame = FrameManager::GetRootFrame((int)this, *(_DWORD *)v25);
    if ( RootFrame != 0 )
    {
      HIDWORD(v10) = *(_DWORD *)(RootFrame + 8);
      LODWORD(v10) = this;
      FrameManager::FindModalFrame(v10, (unsigned int)&v28);
      if ( (v29 - (int)v28) >> 2 != 0 )
      {
        Frame::AddLevelRecursive(*(Frame **)v25, 1);
        Frame::AddLevelRecursive(*(Frame **)v28, 1);
        v11 = (int *)v28;
LABEL_31:
        v18 = *v11;
        goto LABEL_33;
      }
    }
    v9 = 0;
    while ( 2 )
    {
      if ( v9 >= (v26 - (_BYTE *)v25) >> 2 )
      {
LABEL_30:
        v11 = (int *)v25;
        goto LABEL_31;
      }
      LayoutFrame = *((LayoutFrame **)v25 + v9);
      while ( 1 )
      {
        Parent = (char *)LayoutFrame::GetParent(LayoutFrame);
        if ( Parent == nullptr || sub_3BDD5C((int)&unk_50F9EC, Parent) == 0 )
          break;
        sub_3BF0BC((int)v24, Parent);
        LayoutFrame = (LayoutFrame *)FrameManager::FindLayoutFrame((int)this);
        sub_3BDF80(v24);
        if ( LayoutFrame == nullptr )
          goto LABEL_22;
      }
      if ( LayoutFrame == nullptr || *((_DWORD *)LayoutFrame + 74) == -1 )
      {
LABEL_22:
        ++v9;
        continue;
      }
      break;
    }
    v13 = *((_DWORD **)this + 19);
    v14 = *((char **)this + 20);
    for ( i = (v14 - (char *)v13) >> 4; ; --i )
    {
      v16 = (LayoutFrame **)v13;
      if ( i <= 0 )
        break;
      if ( (LayoutFrame *)*v13 == LayoutFrame )
        goto LABEL_48;
      if ( (LayoutFrame *)v13[1] == LayoutFrame )
      {
        v16 = (LayoutFrame **)(v13 + 1);
        goto LABEL_28;
      }
      if ( (LayoutFrame *)v13[2] == LayoutFrame )
      {
        v16 = (LayoutFrame **)(v13 + 2);
        goto LABEL_28;
      }
      v13 += 4;
      if ( (LayoutFrame *)*(v13 - 1) == LayoutFrame )
      {
        v16 += 3;
        goto LABEL_28;
      }
    }
    v17 = (v14 - (char *)v13) >> 2;
    if ( v17 != 2 )
    {
      if ( v17 != 3 )
      {
        if ( v17 != 1 )
          goto LABEL_22;
        goto LABEL_46;
      }
      if ( (LayoutFrame *)*v13 == LayoutFrame )
      {
LABEL_48:
        v16 = (LayoutFrame **)v13;
        goto LABEL_28;
      }
      v16 = (LayoutFrame **)(v13 + 1);
    }
    if ( *v16 != LayoutFrame )
    {
      ++v16;
LABEL_46:
      if ( *v16 != LayoutFrame )
        goto LABEL_22;
    }
LABEL_28:
    if ( v16 == (LayoutFrame **)v14 )
      goto LABEL_22;
    Frame::AddLevelRecursive(LayoutFrame, 1);
    goto LABEL_30;
  }
  v18 = 0;
LABEL_33:
  if ( v28 != nullptr )
    operator delete(v28);
  if ( v25 != nullptr )
    operator delete(v25);
  return v18;
}


//======================================================================
// FrameManager::Render(void)
// address: 0x001B99A4   size: 0x98 (152 bytes)
//======================================================================
void __fastcall FrameManager::Render(FrameManager *this)
{
  unsigned int i; // r5
  int v3; // r3
  int v4; // r0
  int j; // r7
  char *v6; // r6
  unsigned int k; // r5
  int v8; // r3
  int v9; // r0
  char *v10; // [sp+8h] [bp-Ch]
  char *v11; // [sp+Ch] [bp-8h]

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 19);
    if ( i >= (*((_DWORD *)this + 20) - v3) >> 2 )
      break;
    v4 = *(_DWORD *)(4 * i + v3);
    (*(void (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v4 + 56))(v4, 0, 0);
  }
  v11 = *((char **)this + 23);
  v10 = *((char **)this + 22);
  for ( j = (v11 - v10) >> 2; ; j >>= 1 )
  {
    if ( j <= 0 )
    {
      v6 = nullptr;
      std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        (int)v10,
        v11,
        (int (__fastcall *)(int, int))sub_1B8968);
      goto LABEL_10;
    }
    v6 = (char *)operator new(4 * j, (const std::nothrow_t *)&std::nothrow);
    if ( v6 != nullptr )
      break;
  }
  std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,LayoutFrame **,int,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
    v10,
    v11,
    v6,
    j,
    (int (__fastcall *)(int, int))sub_1B8968);
LABEL_10:
  operator delete(v6, (const std::nothrow_t *)&std::nothrow);
  for ( k = 0; ; ++k )
  {
    v8 = *((_DWORD *)this + 22);
    if ( k >= (*((_DWORD *)this + 23) - v8) >> 2 )
      break;
    v9 = *(_DWORD *)(4 * k + v8);
    (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 32))(v9);
  }
  *((_DWORD *)this + 23) = v8;
}

