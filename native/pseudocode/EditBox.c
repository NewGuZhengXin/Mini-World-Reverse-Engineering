// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: EditBox

//======================================================================
// EditBox::GetTypeName(void)
// address: 0x001BCD1C   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall EditBox::GetTypeName(EditBox *this)
{
  return "EditBox";
}


//======================================================================
// EditBox::EditBox(void)
// address: 0x001BCD50   size: 0xE4 (228 bytes)
//======================================================================
// Alternative name is '_ZN7EditBoxC2Ev'
void __fastcall EditBox::EditBox(EditBox *this)
{
  Frame::Frame(this);
  *(_DWORD *)this = &off_459070;
  *((_DWORD *)this + 103) = 0;
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 109) = &byte_55FB88;
  *((_DWORD *)this + 125) = 0;
  *((_DWORD *)this + 126) = 0;
  *((_DWORD *)this + 127) = 0;
  *((_DWORD *)this + 76) = 6;
  *((_DWORD *)this + 72) = 2097160;
  *((_DWORD *)this + 107) = 0;
  *((_DWORD *)this + 128) = -1;
  *((_DWORD *)this + 105) = 0x7FFFFFFF;
  *((_BYTE *)this + 424) = 0;
  *((_DWORD *)this + 110) = 0;
  *((_DWORD *)this + 111) = 0;
  *((_DWORD *)this + 112) = 0;
  *((_DWORD *)this + 113) = 0;
  *((_DWORD *)this + 114) = 1;
  *((_DWORD *)this + 115) = 500;
  *((_DWORD *)this + 116) = 400;
  *((_DWORD *)this + 120) = -4194304;
  *((_DWORD *)this + 121) = 1105199103;
  *((_DWORD *)this + 122) = 0;
  *((_DWORD *)this + 123) = 0;
  *((_BYTE *)this + 520) = -1;
  *((_BYTE *)this + 521) = 0;
  *((_BYTE *)this + 522) = 0;
  *((_BYTE *)this + 523) = 0x80;
  *((_BYTE *)this + 524) = -1;
  *((_BYTE *)this + 525) = -1;
  *((_BYTE *)this + 526) = -1;
  *((_BYTE *)this + 527) = -1;
  *((_DWORD *)this + 108) = 527;
}


//======================================================================
// EditBox::SetSel(int,int)
// address: 0x001BCE70   size: 0x4A (74 bytes)
//======================================================================
int __fastcall EditBox::SetSel(EditBox *this, unsigned int a2, unsigned int a3)
{
  if ( (a2 & 0x80000000) != 0 )
  {
    a2 = 0;
  }
  else if ( a2 > *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 103) + 244) - 12) )
  {
    a2 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 103) + 244) - 12);
  }
  if ( (a3 & 0x80000000) != 0 )
  {
    a3 = 0;
  }
  else if ( a3 > *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 103) + 244) - 12) )
  {
    a3 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 103) + 244) - 12);
  }
  *((_DWORD *)this + 112) = a2;
  *((_DWORD *)this + 110) = a3;
  return 1;
}


//======================================================================
// EditBox::IsCursorVisible(void)
// address: 0x001BCEBC   size: 0x36 (54 bytes)
//======================================================================
int __fastcall EditBox::IsCursorVisible(EditBox *this)
{
  EditBox *CurEditBox; // r0
  int result; // r0
  int v4; // r3

  if ( *((_DWORD *)this + 112) != *((_DWORD *)this + 110) )
    return 0;
  CurEditBox = (EditBox *)FrameManager::getCurEditBox((FrameManager *)g_pFrameMgr);
  if ( CurEditBox != this )
    return 0;
  v4 = *((_DWORD *)CurEditBox + 114);
  result = 1;
  if ( v4 == 0 )
    return 0;
  return result;
}


//======================================================================
// EditBox::CheckForReason(void)
// address: 0x001BCEF8   size: 0x156 (342 bytes)
//======================================================================
int __fastcall EditBox::CheckForReason(EditBox *this)
{
  int v1; // r1
  unsigned int v3; // r2
  int v4; // r1
  unsigned int v5; // r2
  int v6; // r1
  int v7; // r2
  int v8; // r1
  float v9; // r0
  int v10; // r2
  int v11; // r6
  int v12; // r5
  const char *v13; // r6
  int CurrChar; // r0
  int v16; // [sp+8h] [bp-24h]
  float v17; // [sp+14h] [bp-18h] BYREF
  int v18; // [sp+18h] [bp-14h] BYREF
  int v19; // [sp+1Ch] [bp-10h] BYREF
  int v20; // [sp+20h] [bp-Ch] BYREF
  int v21; // [sp+24h] [bp-8h] BYREF

  v1 = *((_DWORD *)this + 112);
  v3 = 0;
  if ( v1 < 0 || (v3 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 103) + 244) - 12), v1 > v3) )
    *((_DWORD *)this + 112) = v3;
  v4 = *((_DWORD *)this + 110);
  v5 = 0;
  if ( v4 < 0 || (v5 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 103) + 244) - 12), v4 > v5) )
    *((_DWORD *)this + 110) = v5;
  v6 = *((_DWORD *)this + 111);
  v7 = 0;
  if ( v6 < 0 || (v7 = *((_DWORD *)this + 110), v6 > v7) )
    *((_DWORD *)this + 111) = v7;
  v19 = 0;
  v17 = 0.0;
  v18 = 0;
  sub_3BED3C(
    &v20,
    *((_DWORD *)this + 103) + 244,
    *((_DWORD *)this + 111),
    *((_DWORD *)this + 110) - *((_DWORD *)this + 111));
  v8 = *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 144) + 32 * *(_DWORD *)(*((_DWORD *)this + 103) + 228) + 20);
  if ( v8 != 0 )
  {
    (*(void (__fastcall **)(int, int, int, float *, int *))(*(_DWORD *)g_pDisplay + 52))(
      g_pDisplay,
      v8,
      v20,
      &v17,
      &v18);
    v9 = (float)(*((_DWORD *)this + 17) - *((_DWORD *)this + 15));
    v10 = *((_DWORD *)this + 103);
    v21 = 0;
    (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, int *, int *))(*(_DWORD *)g_pDisplay + 56))(
      g_pDisplay,
      *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 144) + 32 * *(_DWORD *)(v10 + 228) + 20),
      *(_DWORD *)(v10 + 244),
      v9 + 0.5,
      &v21,
      &v19);
    v11 = *((_DWORD *)this + 17);
    v12 = *((_DWORD *)this + 15);
    if ( v17 > (float)(v11 - v12) && v11 != v12 )
    {
      v16 = *((_DWORD *)this + 111);
      if ( v16 + 1 >= 0 )
        *((_DWORD *)this + 111) = v16 + 1;
      else
        *((_DWORD *)this + 111) = 0;
      v13 = *(const char **)(*((_DWORD *)this + 103) + 244);
      CurrChar = UTF8_GetCurrChar(v13, *((_DWORD *)this + 111));
      if ( CurrChar != *((_DWORD *)this + 111) )
        *((_DWORD *)this + 111) += UTF8_GetCharBytes((const unsigned __int8 *)&v13[CurrChar]);
    }
  }
  return sub_3BDF80(&v20);
}


//======================================================================
// EditBox::OnPaste(void)
// address: 0x001BD058   size: 0x2 (2 bytes)
//======================================================================
void __fastcall EditBox::OnPaste(EditBox *this)
{
  ;
}


//======================================================================
// EditBox::OnCopy(void)
// address: 0x001BD05A   size: 0x2 (2 bytes)
//======================================================================
void __fastcall EditBox::OnCopy(EditBox *this)
{
  ;
}


//======================================================================
// EditBox::OnChangeText(void)
// address: 0x001BD05C   size: 0x1C (28 bytes)
//======================================================================
int __fastcall EditBox::OnChangeText(EditBox *this)
{
  int result; // r0

  result = UIObject::hasScriptsEvent(this, 2);
  if ( result != 0 )
    return UIObject::CallScript(this, 2, (const char *)&unk_3FB8EA);
  return result;
}


//======================================================================
// EditBox::ValueToCaption(void)
// address: 0x001BD07C   size: 0x68 (104 bytes)
//======================================================================
int __fastcall EditBox::ValueToCaption(EditBox *this)
{
  int result; // r0
  int v3; // r3
  char v4[128]; // [sp+4h] [bp+0h] BYREF

  j_sprintf(v4, "%d", (int)*((double *)this + 59));
  result = sub_3BE508(*((_DWORD *)this + 103) + 244, v4);
  v3 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 103) + 244) - 12);
  *((_DWORD *)this + 110) = v3;
  *((_DWORD *)this + 111) = 0;
  *((_DWORD *)this + 112) = v3;
  return result;
}


//======================================================================
// EditBox::QueryInputFlag(char const*,int)
// address: 0x001BD0EC   size: 0xA8 (168 bytes)
//======================================================================
bool __fastcall EditBox::QueryInputFlag(EditBox *this, const char *a2, int a3)
{
  int v4; // r4
  _BOOL4 result; // r0
  unsigned int v6; // r3

  v4 = *((_DWORD *)this + 108);
  result = false;
  if ( (v4 & 0x40) == 0 )
  {
    result = false;
    if ( (unsigned int)(a3 + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 103) + 244) - 12)) <= *((_DWORD *)this + 105) )
    {
      v6 = *(unsigned __int8 *)a2;
      if ( (v6 & 0xDF) - 65 > 0x19 )
      {
        if ( v6 - 48 > 9 )
        {
          if ( v6 == 95 || v6 - 32 > 0xF && v6 - 58 > 6 && v6 - 91 > 5 && v6 - 123 > 3 )
          {
            if ( v6 >> 7 != 0 )
            {
              result = false;
              if ( (v4 & 8) == 0 )
                return result;
            }
          }
          else
          {
            result = false;
            if ( (v4 & 4) == 0 )
              return result;
          }
        }
        else if ( (v4 & 2) == 0 )
        {
          return result;
        }
      }
      else if ( (v4 & 1) == 0 )
      {
        return result;
      }
      if ( (v4 & 0x10) == 0 || (result = false, v6 - 48 <= 9) )
      {
        result = true;
        if ( (v4 & 0x20) != 0 )
        {
          result = false;
          if ( v6 > 0x1F )
            return v6 != 127;
        }
      }
    }
  }
  return result;
}


//======================================================================
// EditBox::CancelSel(bool,bool)
// address: 0x001BD194   size: 0x34 (52 bytes)
//======================================================================
int __fastcall EditBox::CancelSel(EditBox *this, int a2, int a3)
{
  int v3; // r4
  int v4; // r3

  v3 = *((_DWORD *)this + 112);
  v4 = *((_DWORD *)this + 110);
  if ( v3 != v4 )
  {
    if ( a3 == 0 )
    {
LABEL_9:
      *((_DWORD *)this + 112) = *((_DWORD *)this + 110);
      return 1;
    }
    if ( a2 != 0 )
    {
      if ( v4 > v3 )
        goto LABEL_7;
    }
    else if ( v4 < v3 )
    {
LABEL_7:
      v4 = *((_DWORD *)this + 112);
    }
    *((_DWORD *)this + 110) = v4;
    goto LABEL_9;
  }
  return 0;
}


//======================================================================
// EditBox::Encrypt(void)
// address: 0x001BD1C8   size: 0x36 (54 bytes)
//======================================================================
void *__fastcall EditBox::Encrypt(EditBox *this)
{
  size_t v2; // r5
  void *result; // r0

  v2 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 103) + 244) - 12);
  result = (void *)sub_3BEBBC((char *)this + 436);
  *((_DWORD *)this + 129) = v2;
  if ( v2 != 0 )
    return j_memset(*(void **)(*((_DWORD *)this + 103) + 244), 42, v2);
  return result;
}


//======================================================================
// EditBox::Decrypt(void)
// address: 0x001BD1FE   size: 0x22 (34 bytes)
//======================================================================
int __fastcall EditBox::Decrypt(int this)
{
  if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 412) + 244) - 12) != 0 )
    return sub_3BEBBC(*(_DWORD *)(this + 412) + 244);
  return this;
}


//======================================================================
// EditBox::GetSelctTexLen(void)
// address: 0x001BD220   size: 0x16 (22 bytes)
//======================================================================
int __fastcall EditBox::GetSelctTexLen(EditBox *this)
{
  int v1; // r0

  v1 = *((_DWORD *)this + 112) - *((_DWORD *)this + 110);
  return (v1 + (v1 >> 31)) ^ (v1 >> 31);
}


//======================================================================
// EditBox::IsAnyTextSelect(void)
// address: 0x001BD236   size: 0x14 (20 bytes)
//======================================================================
bool __fastcall EditBox::IsAnyTextSelect(EditBox *this)
{
  return *((_DWORD *)this + 112) != *((_DWORD *)this + 110);
}


//======================================================================
// EditBox::ReplaceSelectText(char const*)
// address: 0x001BD24A   size: 0xDE (222 bytes)
//======================================================================
int __fastcall EditBox::ReplaceSelectText(EditBox *this, char *a2)
{
  int v3; // r2
  int result; // r0
  char *v5; // r3
  char *v6; // r3
  int v7; // r5
  _BYTE v9[4]; // [sp+18h] [bp-14h] BYREF
  _BYTE v10[4]; // [sp+1Ch] [bp-10h] BYREF
  char *v11; // [sp+20h] [bp-Ch] BYREF
  _BYTE v12[8]; // [sp+24h] [bp-8h] BYREF

  v3 = *((_DWORD *)this + 112);
  result = *((_DWORD *)this + 110);
  if ( v3 != result )
  {
    v5 = (char *)this + 448;
    if ( result < v3 )
      v5 = (char *)this + 440;
    sub_3BED3C(v9, *((_DWORD *)this + 103) + 244, 0, *(_DWORD *)v5);
    v6 = (char *)this + 448;
    if ( *((_DWORD *)this + 112) < *((_DWORD *)this + 110) )
      v6 = (char *)this + 440;
    sub_3BED3C(v10, *((_DWORD *)this + 103) + 244, *(_DWORD *)v6, -1);
    sub_3BEB1C(v12, v9);
    sub_3BE948((int)v12, a2);
    sub_3BEB1C(&v11, v12);
    sub_3BE774(&v11, v10);
    sub_3BDF80(v12);
    FontString::SetText(*((FontString **)this + 103), v11);
    v7 = *((_DWORD *)this + 112);
    if ( v7 < *((_DWORD *)this + 110) )
      *((_DWORD *)this + 110) = j_strlen(a2) + v7;
    *((_DWORD *)this + 112) = *((_DWORD *)this + 110);
    sub_3BDF80(&v11);
    sub_3BDF80(v10);
    return sub_3BDF80(v9);
  }
  return result;
}


//======================================================================
// EditBox::Clear(void)
// address: 0x001BD328   size: 0x56 (86 bytes)
//======================================================================
int __fastcall EditBox::Clear(EditBox *this)
{
  sub_3BE210(*((_DWORD *)this + 103) + 244, 0, -1);
  sub_3BE210((char *)this + 436, 0, -1);
  *((_DWORD *)this + 129) = 0;
  *((_DWORD *)this + 110) = 0;
  *((_DWORD *)this + 111) = 0;
  *((_DWORD *)this + 112) = 0;
  *((_DWORD *)this + 118) = 0;
  *((_DWORD *)this + 119) = 0;
  return EditBox::OnChangeText(this);
}


//======================================================================
// EditBox::CheckValueRange(void)
// address: 0x001BD388   size: 0x68 (104 bytes)
//======================================================================
int __fastcall EditBox::CheckValueRange(EditBox *this)
{
  double v1; // r4
  _BOOL4 v2; // r6
  double *v3; // r7
  int v4; // r5
  _DWORD *v6; // [sp+4h] [bp-8h]

  v1 = *((double *)this + 61);
  v6 = (_DWORD *)((char *)this + 480);
  v2 = *((double *)this + 60) < v1;
  if ( *((double *)this + 60) < v1 )
  {
    v2 = true;
    *v6 = LODWORD(v1);
    *((_DWORD *)this + 121) = HIDWORD(v1);
  }
  v3 = (double *)((char *)this + 472);
  if ( *((double *)this + 59) < v1 )
  {
    *(_DWORD *)v3 = LODWORD(v1);
    *((_DWORD *)this + 119) = HIDWORD(v1);
    v2 = true;
  }
  v4 = *((_DWORD *)this + 121);
  if ( *v3 > *(double *)v6 )
  {
    *(_DWORD *)v3 = *v6;
    *((_DWORD *)this + 119) = v4;
    return 1;
  }
  return v2;
}


//======================================================================
// EditBox::SetVar(double,char const*)
// address: 0x001BD3F0   size: 0x34 (52 bytes)
//======================================================================
double *__fastcall EditBox::SetVar(double *this, double a2, const char *a3)
{
  EditBox *v4; // r6

  v4 = (EditBox *)this;
  if ( a3 != nullptr )
  {
    if ( *(this + 59) != a2 )
    {
      *(this + 59) = a2;
      EditBox::CheckValueRange((EditBox *)this);
    }
    return (double *)EditBox::ValueToCaption(v4);
  }
  return this;
}


//======================================================================
// EditBox::CaptionToValue(void)
// address: 0x001BD424   size: 0x3A (58 bytes)
//======================================================================
int __fastcall EditBox::CaptionToValue(EditBox *this)
{
  double v2; // r4
  int result; // r0

  v2 = j_strtod((const char *)*(_DWORD *)(*((_DWORD *)this + 103) + 244), nullptr);
  result = *((double *)this + 59) == v2;
  if ( *((double *)this + 59) != v2 )
  {
    *((double *)this + 59) = v2;
    return EditBox::CheckValueRange(this);
  }
  return result;
}


//======================================================================
// EditBox::ClearSel(void)
// address: 0x001BD45E   size: 0x8E (142 bytes)
//======================================================================
int __fastcall EditBox::ClearSel(EditBox *this)
{
  int v1; // r3
  int v2; // r6
  int v4; // r5

  *((_DWORD *)this + 128) = -1;
  v1 = *((_DWORD *)this + 112);
  v2 = *((_DWORD *)this + 110);
  if ( v1 == v2 )
    return 0;
  v4 = *((_DWORD *)this + 110);
  if ( v2 > v1 )
    v4 = *((_DWORD *)this + 112);
  if ( v2 < v1 )
    v2 = *((_DWORD *)this + 112);
  if ( (*((_DWORD *)this + 108) & 0x20) != 0 )
    sub_3BEBBC(*((_DWORD *)this + 103) + 244);
  sub_3BE210(*((_DWORD *)this + 103) + 244, v4, v2 - v4);
  if ( (*((_DWORD *)this + 108) & 0x20) != 0 )
    EditBox::Encrypt(this);
  if ( (*((_DWORD *)this + 108) & 0x10) != 0 )
    EditBox::CaptionToValue(this);
  *((_DWORD *)this + 110) = v4;
  *((_DWORD *)this + 112) = v4;
  EditBox::OnChangeText(this);
  return 1;
}


//======================================================================
// EditBox::OnCut(void)
// address: 0x001BD4EC   size: 0x1A (26 bytes)
//======================================================================
EditBox *__fastcall EditBox::OnCut(EditBox *this)
{
  EditBox *v1; // r4

  v1 = this;
  if ( (*((_DWORD *)this + 108) & 0x80) == 0 )
  {
    EditBox::OnCopy(this);
    return (EditBox *)EditBox::ClearSel(v1);
  }
  return this;
}


//======================================================================
// EditBox::OnKeyDown(Ogre::InputEvent const&,bool)
// address: 0x001BD508   size: 0x3E8 (1000 bytes)
//======================================================================
int __fastcall EditBox::OnKeyDown(EditBox *this, const InputEvent *a2, bool a3)
{
  __int16 *ie_closure; // r3
  struct _InputEvent *v6; // r3
  struct _InputEvent *ie_next; // r3
  int v8; // r3
  int v11; // r3
  const unsigned __int8 *CharBytes; // r0
  int v13; // r3
  int v14; // r0
  unsigned int v15; // r1
  int v16; // r3
  int v17; // r1
  int v18; // r3
  __int16 KeyState; // r0
  __int16 v20; // r0
  __int16 v21; // r0
  const char *Name; // r0
  char s[256]; // [sp+24h] [bp-108h] BYREF

  if ( (*((_DWORD *)this + 108) & 0x20) != 0 )
    EditBox::Decrypt((int)this);
  ie_closure = (__int16 *)a2->ie_closure;
  if ( ie_closure == (_WORD *)&dword_24 + 1 )
  {
    v13 = *((_DWORD *)this + 125);
    v14 = *((_DWORD *)this + 126);
    if ( v13 != v14 )
    {
      v15 = *((_DWORD *)this + 128) + 1;
      if ( v15 < (v14 - v13) >> 2 )
      {
        *((_DWORD *)this + 128) = v15;
        sub_3BEBBC(*((_DWORD *)this + 103) + 244);
        v16 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 103) + 244) - 12);
        *((_DWORD *)this + 110) = v16;
        *((_DWORD *)this + 111) = 0;
        *((_DWORD *)this + 112) = v16;
        if ( (*((_DWORD *)this + 108) & 0x10) != 0 )
          EditBox::CaptionToValue(this);
        if ( UIObject::hasScriptsEvent(this, 23) )
          goto LABEL_61;
      }
    }
    goto LABEL_74;
  }
  if ( (int)ie_closure > 38 )
  {
    if ( ie_closure == &word_2E )
    {
      if ( UIObject::hasScriptsEvent(this, 23) )
        UIObject::CallScript(this, 23, "iii", a2->ie_closure, *((_DWORD *)this + 110) + 1, *((_DWORD *)this + 112) + 1);
      if ( EditBox::ClearSel(this) == 0 )
      {
        v11 = *((_DWORD *)this + 110);
        if ( v11 != *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 103) + 244) - 12) )
        {
          CharBytes = UTF8_GetCharBytes((const unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 103) + 244) + v11));
          sub_3BE210(*((_DWORD *)this + 103) + 244, *((_DWORD *)this + 110), CharBytes);
          if ( (*((_DWORD *)this + 108) & 0x10) != 0 )
            EditBox::CaptionToValue(this);
          EditBox::OnChangeText(this);
        }
      }
      goto LABEL_74;
    }
    if ( (int)ie_closure > 46 )
    {
      if ( ie_closure == (_WORD *)&dword_54 + 1 )
      {
        KeyState = GetKeyState(17);
        if ( (KeyState & 0xFF00) != 0 )
          EditBox::OnPaste(this);
      }
      else if ( ie_closure == (__int16 *)&dword_58 )
      {
        v21 = GetKeyState(17);
        if ( (v21 & 0xFF00) != 0 )
          EditBox::OnCut(this);
      }
      else if ( ie_closure == (__int16 *)((char *)&dword_40 + 3) )
      {
        v20 = GetKeyState(17);
        if ( (v20 & 0xFF00) != 0 )
          EditBox::OnCopy(this);
      }
      goto LABEL_74;
    }
    if ( ie_closure != (__int16 *)((char *)&dword_24 + 3) )
    {
      if ( ie_closure == &word_28 && *((_DWORD *)this + 125) != *((_DWORD *)this + 126) )
      {
        v17 = *((_DWORD *)this + 128);
        if ( v17 > 0 )
        {
          *((_DWORD *)this + 128) = v17 - 1;
          sub_3BEBBC(*((_DWORD *)this + 103) + 244);
          v18 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 103) + 244) - 12);
          *((_DWORD *)this + 110) = v18;
          *((_DWORD *)this + 111) = 0;
          *((_DWORD *)this + 112) = v18;
          if ( (*((_DWORD *)this + 108) & 0x10) != 0 )
            EditBox::CaptionToValue(this);
          if ( UIObject::hasScriptsEvent(this, 23) )
            UIObject::CallScript(
              this,
              23,
              "iiii",
              a2->ie_closure,
              *((_DWORD *)this + 110) + 1,
              *((_DWORD *)this + 112) + 1,
              1);
        }
      }
      goto LABEL_74;
    }
    ie_next = a2->ie_next;
    if ( ((unsigned __int8)ie_next & 8) != 0 )
    {
      *((_DWORD *)this + 110) = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 103) + 244) - 12);
    }
    else
    {
      if ( ((unsigned __int8)ie_next & 4) == 0 && EditBox::CancelSel(this, 0, 1) != 0 )
        goto LABEL_74;
      *((_DWORD *)this + 110) += UTF8_GetCharBytes((const unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 103) + 244)
                                                                           + *((_DWORD *)this + 110)));
    }
    if ( ((int)a2->ie_next & 4) != 0 )
      goto LABEL_74;
LABEL_42:
    *((_DWORD *)this + 112) = *((_DWORD *)this + 110);
    goto LABEL_74;
  }
  if ( ie_closure == (__int16 *)((char *)&dword_20 + 3) )
  {
    v8 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 103) + 244) - 12);
    *((_DWORD *)this + 110) = v8;
    if ( ((int)a2->ie_next & 4) != 0 )
      goto LABEL_74;
    goto LABEL_46;
  }
  if ( (int)ie_closure > 35 )
  {
    if ( ie_closure != (__int16 *)&dword_24 )
    {
      v6 = a2->ie_next;
      if ( ((unsigned __int8)v6 & 8) != 0 )
      {
        *((_DWORD *)this + 110) = 0;
      }
      else
      {
        if ( ((unsigned __int8)v6 & 4) == 0 && EditBox::CancelSel(this, 1, 1) != 0 )
          goto LABEL_74;
        *((_DWORD *)this + 110) = UTF8_GetPrevChar(
                                    *(const char **)(*((_DWORD *)this + 103) + 244),
                                    *((_DWORD *)this + 110));
      }
      if ( ((int)a2->ie_next & 4) != 0 )
        goto LABEL_74;
      goto LABEL_42;
    }
    *((_DWORD *)this + 110) = 0;
    v8 = (int)a2->ie_next & 4;
    if ( v8 != 0 )
      goto LABEL_74;
LABEL_46:
    *((_DWORD *)this + 112) = v8;
    goto LABEL_74;
  }
  if ( ie_closure == (__int16 *)&byte_8 )
  {
    if ( UIObject::hasScriptsEvent(this, 23) )
LABEL_61:
      UIObject::CallScript(this, 23, "iii", a2->ie_closure, *((_DWORD *)this + 110) + 1, *((_DWORD *)this + 112) + 1);
  }
  else if ( ie_closure == (__int16 *)&byte_9[4] && UIObject::hasScriptsEvent(this, 11) )
  {
    UIObject::CallScript(this, 11, (const char *)&unk_3FB8EA);
  }
LABEL_74:
  if ( (GetKeyState(18) & 0xFF00) != 0 )
  {
    Name = (const char *)UIObject::GetName(this);
    j_sprintf(s, "Accelkey_AltGroup(\"%s\",%d)", Name, a2->ie_closure);
    Ogre::ScriptVM::callString((Ogre::ScriptVM *)g_pUIScriptVM, s, 0);
  }
  if ( (*((_DWORD *)this + 108) & 0x20) != 0 )
    EditBox::Encrypt(this);
  return 0;
}


//======================================================================
// EditBox::AddText(char const*)
// address: 0x001BD8F8   size: 0xD6 (214 bytes)
//======================================================================
int __fastcall EditBox::AddText(EditBox *this, const char *a2)
{
  const unsigned __int8 *v3; // r5
  size_t CharBytes; // r6
  unsigned int v5; // r3
  size_t v8; // [sp+8h] [bp-24h]
  char v9[16]; // [sp+14h] [bp-18h] BYREF

  Ogre::LogSetCurParam(
    (int)"D:/work/oworldsrc/client/OgreMain/UILib/ui_editbox.cpp",
    (_BYTE *)&stru_538.st_size + 3,
    2,
    _stack_chk_guard);
  Ogre::LogMessage((Ogre *)"EditBox::AddText: %s", a2);
  v3 = (const unsigned __int8 *)a2;
  v8 = j_strlen(a2);
  while ( v3 < (const unsigned __int8 *)&a2[v8] )
  {
    CharBytes = (size_t)UTF8_GetCharBytes(v3);
    if ( EditBox::QueryInputFlag(this, (const char *)v3, CharBytes) )
    {
      j_memcpy(v9, v3, CharBytes);
      v9[CharBytes] = 0;
      sub_3BE63C(*((_DWORD *)this + 103) + 244, *((_DWORD *)this + 110), v9);
      *((_DWORD *)this + 110) += CharBytes;
    }
    v3 += CharBytes;
  }
  *((_DWORD *)this + 112) = *((_DWORD *)this + 110);
  EditBox::OnChangeText(this);
  FrameManager::setCurEditBox(g_pFrameMgr, 0);
  Ogre::LogSetCurParam(
    (int)"D:/work/oworldsrc/client/OgreMain/UILib/ui_editbox.cpp",
    (_BYTE *)&stru_558.st_value + 1,
    2,
    v5);
  return Ogre::LogMessage(
           (Ogre *)"EditBox::AddText Result: %s, cursor=%d",
           *(const char **)(*((_DWORD *)this + 103) + 244),
           *((_DWORD *)this + 110));
}


//======================================================================
// EditBox::SetText(char const*)
// address: 0x001BD9F0   size: 0x16 (22 bytes)
//======================================================================
EditBox *__fastcall EditBox::SetText(EditBox *this, const char *a2)
{
  EditBox *v2; // r5

  v2 = this;
  if ( a2 != nullptr )
  {
    EditBox::Clear(this);
    return (EditBox *)EditBox::AddText(v2, a2);
  }
  return this;
}


//======================================================================
// EditBox::SetPassword(char const*)
// address: 0x001BDA06   size: 0x10 (16 bytes)
//======================================================================
void *__fastcall EditBox::SetPassword(EditBox *this, const char *a2)
{
  EditBox::SetText(this, a2);
  return EditBox::Encrypt(this);
}


//======================================================================
// EditBox::GetText(void)
// address: 0x001BDA18   size: 0x30 (48 bytes)
//======================================================================
int __fastcall EditBox::GetText(EditBox *this, int a2, int a3, unsigned int a4)
{
  const char *v5; // r6
  int Text; // r0

  Ogre::LogSetCurParam(
    (int)"D:/work/oworldsrc/client/OgreMain/UILib/ui_editbox.cpp",
    (_BYTE *)&stru_558.st_size + 2,
    2,
    a4);
  v5 = *((const char **)this + 2);
  Text = FontString::GetText(*((FontString **)this + 103));
  Ogre::LogMessage((Ogre *)"EditBox: %s GetText: %s", v5, Text);
  return FontString::GetText(*((FontString **)this + 103));
}


//======================================================================
// EditBox::GetPassWord(void)
// address: 0x001BDA54   size: 0x8 (8 bytes)
//======================================================================
int __fastcall EditBox::GetPassWord(EditBox *this)
{
  return *((_DWORD *)this + 109);
}


//======================================================================
// EditBox::SetTextColor(int,int,int)
// address: 0x001BDA5C   size: 0xE (14 bytes)
//======================================================================
int __fastcall EditBox::SetTextColor(FontString **this, int a2, int a3, int a4)
{
  return FontString::SetTextColor(*(this + 103), a2, a3, a4);
}


//======================================================================
// EditBox::SetCursorColor(int,int,int)
// address: 0x001BDA6C   size: 0x18 (24 bytes)
//======================================================================
_BYTE *__fastcall EditBox::SetCursorColor(_BYTE *this, char a2, char a3, char a4)
{
  *(this + 524) = a4;
  *(this + 525) = a3;
  *(this + 526) = a2;
  *(this + 527) = -1;
  return this;
}


//======================================================================
// EditBox::SelectAllText(void)
// address: 0x001BDA90   size: 0x18 (24 bytes)
//======================================================================
int __fastcall EditBox::SelectAllText(EditBox *this)
{
  return EditBox::SetSel(this, 0, *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 103) + 244) - 12));
}


//======================================================================
// EditBox::enableIME(bool)
// address: 0x001BDAA8   size: 0x2C (44 bytes)
//======================================================================
int __fastcall EditBox::enableIME(FontString **this, _BOOL4 a2)
{
  bool v2; // r5
  Ogre::InputManager *v3; // r6
  char *Text; // r0

  v2 = a2;
  if ( a2 )
  {
    v3 = (Ogre::InputManager *)Ogre::Singleton<Ogre::InputManager>::ms_Singleton;
    Text = (char *)FontString::GetText(*(this + 103));
    Ogre::InputManager::setInitialInput(v3, Text);
  }
  return Ogre::InputManager::enableIME((Ogre::InputManager *)Ogre::Singleton<Ogre::InputManager>::ms_Singleton, v2);
}


//======================================================================
// EditBox::enableEdit(bool)
// address: 0x001BDAD8   size: 0x1C (28 bytes)
//======================================================================
char *__fastcall EditBox::enableEdit(EditBox *this, int a2)
{
  char *result; // r0
  unsigned int v3; // r3

  result = (char *)this + 252;
  if ( a2 != 0 )
    v3 = *((_DWORD *)result + 9) | 0x200000;
  else
    v3 = *((_DWORD *)result + 9) & 0xFFDFFFFF;
  *((_DWORD *)result + 9) = v3;
  return result;
}


//======================================================================
// EditBox::GetTextExtentWidth(char const*)
// address: 0x001BDAF8   size: 0x42 (66 bytes)
//======================================================================
int __fastcall EditBox::GetTextExtentWidth(EditBox *this, const char *a2)
{
  float v3; // [sp+8h] [bp-Ch] BYREF
  _BYTE v4[8]; // [sp+Ch] [bp-8h] BYREF

  (*(void (__fastcall **)(int, _DWORD, const char *, float *, _BYTE *))(*(_DWORD *)g_pDisplay + 52))(
    g_pDisplay,
    *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 144) + 32 * *(_DWORD *)(*((_DWORD *)this + 103) + 228) + 20),
    a2,
    &v3,
    v4);
  return FloatToInt(v3);
}


//======================================================================
// EditBox::setMaxChar(int)
// address: 0x001BDB44   size: 0x8 (8 bytes)
//======================================================================
int __fastcall EditBox::setMaxChar(int this, int a2)
{
  *(_DWORD *)(this + 420) = a2;
  return this;
}


//======================================================================
// EditBox::getCursorPos(void)
// address: 0x001BDB4C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall EditBox::getCursorPos(EditBox *this)
{
  return *((_DWORD *)this + 110);
}


//======================================================================
// EditBox::setCursorPos(int)
// address: 0x001BDB54   size: 0x24 (36 bytes)
//======================================================================
int __fastcall EditBox::setCursorPos(int this, int a2)
{
  int v2; // r1

  v2 = a2 & (~a2 >> 31);
  if ( v2 > *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 412) + 244) - 12) )
    v2 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 412) + 244) - 12);
  *(_DWORD *)(this + 440) = v2;
  return this;
}


//======================================================================
// EditBox::getSelBegin(void)
// address: 0x001BDB78   size: 0x8 (8 bytes)
//======================================================================
int __fastcall EditBox::getSelBegin(EditBox *this)
{
  return *((_DWORD *)this + 112);
}


//======================================================================
// EditBox::setSelBegin(int)
// address: 0x001BDB80   size: 0xE (14 bytes)
//======================================================================
int __fastcall EditBox::setSelBegin(int this, int a2)
{
  *(_DWORD *)(this + 448) = a2 & (~a2 >> 31);
  return this;
}


//======================================================================
// EditBox::SetDefaultText(char const*)
// address: 0x001BDB8E   size: 0x10 (16 bytes)
//======================================================================
int __fastcall EditBox::SetDefaultText(EditBox *this, char *a2)
{
  return sub_3BE508(*((_DWORD *)this + 104) + 244, a2);
}


//======================================================================
// EditBox::GetDefaultText(void)
// address: 0x001BDBA0   size: 0x30 (48 bytes)
//======================================================================
int __fastcall EditBox::GetDefaultText(EditBox *this, int a2, int a3, unsigned int a4)
{
  const char *v5; // r6
  int Text; // r0

  Ogre::LogSetCurParam(
    (int)"D:/work/oworldsrc/client/OgreMain/UILib/ui_editbox.cpp",
    (const char *)&stru_5D8.st_other,
    2,
    a4);
  v5 = *((const char **)this + 2);
  Text = FontString::GetText(*((FontString **)this + 104));
  Ogre::LogMessage((Ogre *)"EditBox: %s GetDefaultText: %s", v5, Text);
  return FontString::GetText(*((FontString **)this + 104));
}


//======================================================================
// EditBox::~EditBox()
// address: 0x001BDCC4   size: 0x5A (90 bytes)
//======================================================================
// Alternative name is '_ZN7EditBoxD1Ev'
void __fastcall EditBox::~EditBox(EditBox *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0

  *(_DWORD *)this = &off_459070;
  v2 = *((_DWORD **)this + 103);
  if ( v2 != nullptr )
  {
    UIObject::release(v2);
    *((_DWORD *)this + 103) = 0;
  }
  v3 = *((_DWORD **)this + 104);
  if ( v3 != nullptr )
  {
    UIObject::release(v3);
    *((_DWORD *)this + 104) = 0;
  }
  std::_Destroy_aux<false>::__destroy<std::string *>(*((_DWORD *)this + 125), *((_DWORD *)this + 126));
  sub_1BCD28(*((void **)this + 125));
  sub_3BDF80((char *)this + 436);
  Frame::~Frame(this);
}


//======================================================================
// EditBox::~EditBox()
// address: 0x001BDD24   size: 0x12 (18 bytes)
//======================================================================
void __fastcall EditBox::~EditBox(EditBox *this)
{
  EditBox::~EditBox(this);
  operator delete(this);
}


//======================================================================
// EditBox::clearHistory(void)
// address: 0x001BDD36   size: 0x1A (26 bytes)
//======================================================================
int __fastcall EditBox::clearHistory(EditBox *this)
{
  int v1; // r6
  int result; // r0

  v1 = *((_DWORD *)this + 125);
  result = std::_Destroy_aux<false>::__destroy<std::string *>(v1, *((_DWORD *)this + 126));
  *((_DWORD *)this + 126) = v1;
  return result;
}


//======================================================================
// EditBox::AddStringToHistory(char const*)
// address: 0x001BDE60   size: 0xF2 (242 bytes)
//======================================================================
int __fastcall EditBox::AddStringToHistory(int this, char *a2)
{
  int v2; // r4
  const void **v3; // r0
  const void **v4; // r3
  const void **v5; // r5
  int v6; // r0
  int i; // r7
  int v8; // r2
  char *v9; // r1
  char *v10; // r3
  int v11; // r2
  int v12; // r1
  int v13; // r5
  const void *v14; // [sp+8h] [bp-Ch] BYREF
  char *v15; // [sp+Ch] [bp-8h] BYREF

  v2 = this;
  if ( (*(_DWORD *)(this + 432) & 0x20) == 0 && a2 != nullptr && *a2 != 0 )
  {
    sub_3BF0BC((int)&v14, a2);
    v3 = std::__find<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>,std::string>(
           *(const void ***)(v2 + 500),
           *(_DWORD *)(v2 + 504),
           &v14);
    v4 = *(const void ***)(v2 + 504);
    if ( v3 == v4 )
    {
      v8 = *(_DWORD *)(v2 + 428);
      if ( v8 <= 7 )
        *(_DWORD *)(v2 + 428) = v8 + 1;
    }
    else
    {
      v5 = v3 + 1;
      if ( v3 + 1 != v4 )
      {
        for ( i = v4 - v5; i > 0; --i )
          sub_3BEBBC(v5++ - 1);
      }
      v6 = *(_DWORD *)(v2 + 504) - 4;
      *(_DWORD *)(v2 + 504) = v6;
      sub_3BDF80(v6);
    }
    v9 = *(char **)(v2 + 500);
    v10 = *(char **)(v2 + 504);
    if ( v10 != *(char **)(v2 + 508) && v9 == v10 )
    {
      if ( v9 != nullptr )
        sub_3BEB1C(*(_DWORD *)(v2 + 500), &v14);
      *(_DWORD *)(v2 + 504) += 4;
    }
    else
    {
      std::vector<std::string>::_M_insert_aux((int *)(v2 + 500), v9, (int)&v14);
    }
    v11 = *(_DWORD *)(v2 + 500);
    v12 = *(_DWORD *)(v2 + 504);
    if ( (unsigned int)(v12 - v11) > 0x23 )
    {
      v13 = v11 + 32;
      v15 = &byte_55FB88;
      std::_Destroy_aux<false>::__destroy<std::string *>(v11 + 32, v12);
      *(_DWORD *)(v2 + 504) = v13;
      sub_3BDF80(&v15);
    }
    *(_DWORD *)(v2 + 512) = -1;
    return sub_3BDF80(&v14);
  }
  return this;
}


//======================================================================
// EditBox::CopyMembers(EditBox*)
// address: 0x001BDF58   size: 0x12C (300 bytes)
//======================================================================
LayoutFrame *__fastcall EditBox::CopyMembers(LayoutFrame *this, unsigned int a2)
{
  LayoutFrame *v2; // r5
  int v4; // r1
  int v5; // r3
  int (__fastcall ***v6)(_DWORD); // r0
  _DWORD *v7; // r0
  int (__fastcall ***v8)(_DWORD, int); // r0
  _DWORD *v9; // r0
  int v10; // r3
  int v11; // r3
  int v12; // r3

  v2 = this;
  if ( a2 != 0 )
  {
    Frame::CopyMembers(this, (Frame *)a2);
    v5 = *(_DWORD *)(a2 + 228);
    if ( (*(_DWORD *)(a2 + 232) - v5) >> 3 != 0 )
      *(_DWORD *)(a2 + 232) = v5;
    v6 = *((int (__fastcall ****)(_DWORD))v2 + 103);
    if ( v6 != nullptr )
    {
      v7 = (_DWORD *)(**v6)(v6);
      *(_DWORD *)(a2 + 412) = v7;
      v4 = (unsigned __int64)Frame::AddFontString(a2 | 0x200000000LL, v7) >> 32;
    }
    v8 = *((int (__fastcall ****)(_DWORD, int))v2 + 104);
    if ( v8 != nullptr )
    {
      v9 = (_DWORD *)(**v8)(v8, v4);
      *(_DWORD *)(a2 + 416) = v9;
      Frame::AddFontString(a2 | 0x200000000LL, v9);
    }
    *(_DWORD *)(a2 + 420) = *((_DWORD *)v2 + 105);
    *(_BYTE *)(a2 + 424) = *((_BYTE *)v2 + 424);
    *(_DWORD *)(a2 + 428) = *((_DWORD *)v2 + 107);
    *(_DWORD *)(a2 + 432) = *((_DWORD *)v2 + 108);
    *(_DWORD *)(a2 + 440) = *((_DWORD *)v2 + 110);
    *(_DWORD *)(a2 + 444) = *((_DWORD *)v2 + 111);
    *(_DWORD *)(a2 + 448) = *((_DWORD *)v2 + 112);
    *(_DWORD *)(a2 + 452) = *((_DWORD *)v2 + 113);
    *(_DWORD *)(a2 + 456) = *((_DWORD *)v2 + 114);
    *(_DWORD *)(a2 + 460) = *((_DWORD *)v2 + 115);
    *(_DWORD *)(a2 + 464) = *((_DWORD *)v2 + 116);
    v10 = *((_DWORD *)v2 + 119);
    *(_DWORD *)(a2 + 472) = *((_DWORD *)v2 + 118);
    *(_DWORD *)(a2 + 476) = v10;
    v11 = *((_DWORD *)v2 + 121);
    *(_DWORD *)(a2 + 480) = *((_DWORD *)v2 + 120);
    *(_DWORD *)(a2 + 484) = v11;
    v12 = *((_DWORD *)v2 + 123);
    *(_DWORD *)(a2 + 488) = *((_DWORD *)v2 + 122);
    *(_DWORD *)(a2 + 492) = v12;
    *(_DWORD *)(a2 + 496) = *((_DWORD *)v2 + 124);
    std::vector<std::string>::operator=((int *)(a2 + 500), (int *)v2 + 125);
    *(_DWORD *)(a2 + 512) = *((_DWORD *)v2 + 128);
    sub_3BEBBC(a2 + 436);
    this = *((LayoutFrame **)v2 + 130);
    *(_DWORD *)(a2 + 520) = this;
    *(_DWORD *)(a2 + 524) = *((_DWORD *)v2 + 131);
    *(_DWORD *)(a2 + 528) = *((_DWORD *)v2 + 132);
  }
  return this;
}


//======================================================================
// EditBox::CreateClone(void)
// address: 0x001BE084   size: 0x1E (30 bytes)
//======================================================================
EditBox *__fastcall EditBox::CreateClone(EditBox *this)
{
  EditBox *v2; // r4

  v2 = (EditBox *)operator new(0x218u);
  EditBox::EditBox(v2);
  EditBox::CopyMembers(this, (unsigned int)v2);
  return v2;
}


//======================================================================
// EditBox::UpdateSelf(float)
// address: 0x001BE0A4   size: 0x64 (100 bytes)
//======================================================================
int __fastcall EditBox::UpdateSelf(double this)
{
  double v1; // kr00_8
  int v2; // r3
  int v3; // r2
  int v4; // r3

  v1 = this;
  if ( *(_BYTE *)(LODWORD(this) + 57) != 0 )
  {
    Frame::UpdateSelf(this);
    EditBox::CheckForReason((EditBox *)LODWORD(v1));
    LODWORD(this) = FrameManager::getCurEditBox((FrameManager *)g_pFrameMgr);
    v2 = 1;
    if ( LODWORD(this) != LODWORD(v1) )
    {
LABEL_7:
      *(_DWORD *)(LODWORD(v1) + 456) = v2;
      *(_DWORD *)(LODWORD(v1) + 452) = 0;
      return LODWORD(this);
    }
    v3 = 230;
    LODWORD(this) = (int)(float)(*((float *)&v1 + 1) * 1000.0) + *(_DWORD *)(LODWORD(v1) + 452);
    *(_DWORD *)(LODWORD(v1) + 452) = LODWORD(this);
    v4 = *(_DWORD *)(LODWORD(v1) + 456);
    if ( v4 == 0 )
      v3 = 232;
    if ( SLODWORD(this) > *(_DWORD *)(LODWORD(v1) + 2 * v3) )
    {
      v2 = 1 - v4;
      goto LABEL_7;
    }
  }
  return LODWORD(this);
}


//======================================================================
// EditBox::OnChar(Ogre::InputEvent const&,bool)
// address: 0x001BE110   size: 0x18A (394 bytes)
//======================================================================
int __fastcall EditBox::OnChar(EditBox *this, const InputEvent *a2, bool a3)
{
  unsigned int v5; // r6
  int v6; // r1
  int PrevChar; // r5
  _DWORD *v8; // r7
  const unsigned __int8 *CharBytes; // r0
  int v10; // r2
  int result; // r0
  int v12; // r2
  unsigned __int8 v13[5]; // [sp+17h] [bp-5h] BYREF

  v5 = *(unsigned __int8 *)a2->ie_closure;
  if ( UIObject::hasScriptsEvent(this, 1) )
    UIObject::CallScript(this, 1, "iii", v5, *((_DWORD *)this + 110), *((_DWORD *)this + 112));
  if ( (*((_DWORD *)this + 72) & 0x200000) == 0 )
    return 1;
  if ( v5 == 9 )
  {
    if ( !UIObject::hasScriptsEvent(this, 40) )
      return Frame::OnInputMessage((char **)this, a2);
    UIObject::CallScript(this, 40, (const char *)&unk_3FB8EA);
    return 0;
  }
  if ( v5 > 9 )
  {
    if ( v5 == 13 )
    {
      if ( !UIObject::hasScriptsEvent(this, 11) )
        return Frame::OnInputMessage((char **)this, a2);
    }
    else
    {
      if ( v5 != 27 )
        goto LABEL_26;
      if ( !UIObject::hasScriptsEvent(this, 13) )
        return Frame::OnInputMessage((char **)this, a2);
      UIObject::CallScript(this, 13, (const char *)&unk_3FB8EA);
    }
    return 0;
  }
  if ( v5 == 8 )
  {
    if ( (*((_DWORD *)this + 108) & 0x40) != 0 || EditBox::ClearSel(this) != 0 )
      return 1;
    v6 = *((_DWORD *)this + 110);
    if ( v6 > 0 )
    {
      PrevChar = UTF8_GetPrevChar(*(const char **)(*((_DWORD *)this + 103) + 244), v6);
      v8 = (_DWORD *)(*((_DWORD *)this + 103) + 244);
      CharBytes = UTF8_GetCharBytes((const unsigned __int8 *)(*v8 + PrevChar));
      sub_3BE210(v8, PrevChar, CharBytes);
      v10 = PrevChar - *((_DWORD *)this + 110) + *((_DWORD *)this + 111);
      if ( v10 < 0 )
        v10 = 0;
      *((_DWORD *)this + 111) = v10;
      *((_DWORD *)this + 110) = PrevChar;
      *((_DWORD *)this + 112) = PrevChar;
      if ( (*((_DWORD *)this + 108) & 0x10) != 0 )
        EditBox::CaptionToValue(this);
      EditBox::OnChangeText(this);
      return 1;
    }
    return Frame::OnInputMessage((char **)this, a2);
  }
LABEL_26:
  if ( v5 <= 0x1F || v5 == 127 )
    return Frame::OnInputMessage((char **)this, a2);
  if ( !UIObject::hasScriptsEvent(this, 3)
    || (v12 = *((_DWORD *)this + 112),
        v13[0] = 1,
        UIObject::CallFunction(this, 3, "ii>b", *((_DWORD *)this + 110), v12, v13),
        result = v13[0],
        v13[0] != 0) )
  {
    EditBox::ClearSel(this);
    if ( (*((_DWORD *)this + 108) & 0x20) != 0 )
      EditBox::Decrypt((int)this);
    EditBox::AddText(this, (const char *)a2->ie_closure);
    if ( (*((_DWORD *)this + 108) & 0x20) != 0 )
      EditBox::Encrypt(this);
    return 0;
  }
  return result;
}


//======================================================================
// EditBox::OnInputMessage(Ogre::InputEvent const&)
// address: 0x001BE2AC   size: 0x1DE (478 bytes)
//======================================================================
int __fastcall EditBox::OnInputMessage(EditBox *this, const InputEvent *a2)
{
  int result; // r0
  int v5; // r2
  int v6; // r0
  const unsigned __int8 *PrevChar; // r0
  int v8; // r2
  int v9; // r3
  int v10; // r5
  char *v11; // r4
  int v12; // r3
  int v13; // r0
  int v14; // r3
  _DWORD *v15; // r3
  int v16; // r6
  int v17; // [sp+8h] [bp-14h]
  int v18; // [sp+10h] [bp-Ch] BYREF
  _BYTE v19[8]; // [sp+14h] [bp-8h] BYREF

  switch ( (unsigned int)a2->ie_proc )
  {
    case 0u:
      return EditBox::OnChar(this, a2, false);
    case 1u:
      return EditBox::OnKeyDown(this, a2, false);
    case 3u:
      *((_DWORD *)this + 73) |= 2u;
      FrameManager::setCurEditBox(g_pFrameMgr, (int)this);
      v12 = *((_DWORD *)this + 15);
      v13 = SLOWORD(a2->ie_closure) - v12;
      if ( v13 < 0 )
      {
        v13 = 0;
      }
      else
      {
        v14 = *((_DWORD *)this + 17) - v12;
        if ( v13 > v14 )
          v13 = v14;
      }
      v15 = (_DWORD *)(*((_DWORD *)this + 103) + 228);
      v17 = *(_DWORD *)(*((_DWORD *)this + 103) + 244) + *((_DWORD *)this + 111);
      v18 = 0;
      v16 = *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 144) + 32 * *v15 + 20);
      if ( v16 != 0 )
      {
        (*(void (__fastcall **)(int, int, int, _DWORD, _BYTE *, int *))(*(_DWORD *)g_pDisplay + 56))(
          g_pDisplay,
          v16,
          v17,
          (float)v13 + 0.5,
          v19,
          &v18);
        *((_DWORD *)this + 110) = v18 + *((_DWORD *)this + 111);
        EditBox::CheckForReason(this);
        *((_DWORD *)this + 112) = *((_DWORD *)this + 110);
      }
      return 0;
    case 4u:
      v11 = (char *)this + 252;
      result = *((_DWORD *)this + 73) & 2;
      if ( result == 0 )
        return result;
      *((_DWORD *)v11 + 10) &= ~2u;
      return 0;
    case 5u:
      EditBox::SelectAllText(this);
      return 0;
    case 9u:
      result = *((_DWORD *)this + 73) & 2;
      if ( (*((_DWORD *)this + 73) & 2) == 0 )
        return result;
      v5 = *((_DWORD *)this + 15);
      v6 = SLOWORD(a2->ie_closure) - v5;
      if ( v6 <= 9 )
      {
        PrevChar = (const unsigned __int8 *)UTF8_GetPrevChar(
                                              *(const char **)(*((_DWORD *)this + 103) + 244),
                                              *((_DWORD *)this + 110));
LABEL_10:
        *((_DWORD *)this + 110) = PrevChar;
        goto LABEL_13;
      }
      if ( *((_DWORD *)this + 17) - v5 - 9 <= v6 )
      {
        v8 = *((_DWORD *)this + 110);
        if ( v8 >= *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 103) + 244) - 12) )
          goto LABEL_13;
        PrevChar = &UTF8_GetCharBytes((const unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 103) + 244) + v8))[*((_DWORD *)this + 110)];
        goto LABEL_10;
      }
      v18 = 0;
      v9 = *((_DWORD *)this + 103);
      v10 = *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 144) + 32 * *(_DWORD *)(v9 + 228) + 20);
      if ( v10 != 0 )
      {
        (*(void (__fastcall **)(int, int, _DWORD, _DWORD, _BYTE *, int *))(*(_DWORD *)g_pDisplay + 56))(
          g_pDisplay,
          v10,
          *(_DWORD *)(v9 + 244),
          (float)v6 + 0.5,
          v19,
          &v18);
        *((_DWORD *)this + 110) = v18 + *((_DWORD *)this + 111);
      }
LABEL_13:
      EditBox::CheckForReason(this);
      return 0;
    case 0xFu:
      EditBox::CancelSel(this, 1, 0);
      return 0;
    default:
      return Frame::OnInputMessage((char **)this, a2);
  }
}


//======================================================================
// EditBox::Draw(void)
// address: 0x001BE498   size: 0x546 (1350 bytes)
//======================================================================
int __fastcall EditBox::Draw(EditBox *this)
{
  _DWORD *v2; // r3
  _DWORD *v3; // r1
  int v4; // r0
  int v5; // r2
  int v6; // r3
  int v7; // r3
  int UIFontByIndex; // r4
  int v9; // r3
  int v10; // r3
  float v11; // r0
  int v12; // r3
  int v13; // r3
  float v14; // r0
  _DWORD *v15; // r4
  int v16; // r6
  int result; // r0
  int v18; // r5
  int v19; // r1
  int v20; // r1
  int v21; // r6
  int v22; // r3
  int v23; // r3
  int v24; // r5
  void (__fastcall *v25)(int, int, _DWORD, float *, int *); // r6
  int v26; // r3
  int v27; // r5
  void (__fastcall *v28)(int, int, _DWORD, float *, int *); // r6
  float v29; // r4
  float v30; // r5
  float v31; // r4
  int v32; // r6
  int v33; // r4
  int v34; // r1
  int v35; // [sp+2Ch] [bp-58h]
  void (__fastcall *v36)(int, int); // [sp+2Ch] [bp-58h]
  int v37; // [sp+30h] [bp-54h]
  void (__fastcall *v38)(int, int, _DWORD, _DWORD, _DWORD); // [sp+30h] [bp-54h]
  int v39; // [sp+34h] [bp-50h]
  int v40; // [sp+34h] [bp-50h]
  int v41; // [sp+38h] [bp-4Ch]
  float v42; // [sp+54h] [bp-30h] BYREF
  int v43; // [sp+58h] [bp-2Ch] BYREF
  int v44; // [sp+5Ch] [bp-28h] BYREF
  float v45; // [sp+60h] [bp-24h] BYREF
  float v46; // [sp+64h] [bp-20h] BYREF
  float v47; // [sp+68h] [bp-1Ch] BYREF
  float v48; // [sp+6Ch] [bp-18h] BYREF
  float v49; // [sp+70h] [bp-14h] BYREF
  float v50; // [sp+74h] [bp-10h]
  float v51; // [sp+78h] [bp-Ch]
  float v52; // [sp+7Ch] [bp-8h]

  Frame::Draw(this);
  v2 = *((_DWORD **)this + 103);
  v42 = 0.0;
  v3 = v2 + 61;
  v4 = v2[61];
  v43 = 0;
  if ( *(_DWORD *)(v4 - 12) != 0 )
  {
    v5 = *((_DWORD *)this + 111);
    v37 = v4 + v5;
    v39 = *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 144) + 32 * v2[57] + 20);
    v6 = *((_DWORD *)this + 110);
    if ( v6 > v5 && v39 != 0 )
    {
      sub_3BED3C(&v49, v3, v5, v6 - v5);
      (*(void (__fastcall **)(int, int, float, float *, int *))(*(_DWORD *)g_pDisplay + 52))(
        g_pDisplay,
        v39,
        COERCE_FLOAT(LODWORD(v49)),
        &v42,
        &v43);
      sub_3BDF80(&v49);
    }
    v50 = (float)*((int *)this + 16);
    v49 = (float)*((int *)this + 15);
    v52 = (float)*((int *)this + 18);
    v51 = (float)*((int *)this + 17);
    v7 = *((_DWORD *)this + 103);
    v41 = 0;
    if ( *(_DWORD *)(v7 + 264) == 0 )
      goto LABEL_11;
    v47 = 0.0;
    v48 = 0.0;
    UIFontByIndex = FrameManager::getUIFontByIndex((FrameManager *)g_pFrameMgr, *(_DWORD *)(v7 + 228));
    (*(void (__fastcall **)(int, _DWORD, int, float *, float *))(*(_DWORD *)g_pDisplay + 52))(
      g_pDisplay,
      *(_DWORD *)(UIFontByIndex + 20),
      v37,
      &v47,
      &v48);
    v9 = *((_DWORD *)this + 103);
    v47 = v47 * *(float *)(UIFontByIndex + 24);
    v10 = *(_DWORD *)(v9 + 264);
    if ( v10 == 1 )
    {
      v11 = (float)((float)(*((_DWORD *)this + 17) - *((_DWORD *)this + 15)) - v47) * 0.5;
    }
    else
    {
      if ( v10 != 2 )
      {
LABEL_11:
        (*(void (__fastcall **)(int, _DWORD, _DWORD, int, float *, float, _DWORD, _DWORD, int, _DWORD, _DWORD, char *))(*(_DWORD *)g_pDisplay + 40))(
          g_pDisplay,
          *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 144) + 32 * *(_DWORD *)(*((_DWORD *)this + 103) + 228) + 20),
          *(_DWORD *)(*((_DWORD *)this + 103) + 272),
          v37,
          &v49,
          (float)v41,
          0,
          0,
          *((_DWORD *)this + 103) + 236,
          *((_DWORD *)this + 56),
          0,
          &byte_50FA78);
        v44 = 0;
        if ( v39 != 0
          && *((_DWORD *)this + 112) != *((_DWORD *)this + 110)
          && (EditBox *)FrameManager::getCurEditBox((FrameManager *)g_pFrameMgr) == this )
        {
          v22 = *((_DWORD *)this + 111);
          v45 = 0.0;
          v46 = 0.0;
          v47 = 0.0;
          if ( v22 > 0 )
          {
            v48 = 0.0;
            (*(void (__fastcall **)(int, int, int, float *, int *))(*(_DWORD *)g_pDisplay + 52))(
              g_pDisplay,
              v39,
              *(_DWORD *)(*((_DWORD *)this + 103) + 244) + v22,
              &v45,
              &v44);
            (*(void (__fastcall **)(int, int, int, float *, int *))(*(_DWORD *)g_pDisplay + 52))(
              g_pDisplay,
              v39,
              *(_DWORD *)(*((_DWORD *)this + 103) + 244) + *((_DWORD *)this + 111),
              &v48,
              &v44);
            v45 = v45 - v48;
          }
          v23 = *((_DWORD *)this + 112);
          if ( v23 > 0 )
          {
            v24 = g_pDisplay;
            v25 = *(void (__fastcall **)(int, int, _DWORD, float *, int *))(*(_DWORD *)g_pDisplay + 52);
            sub_3BED3C(&v48, *((_DWORD *)this + 103) + 244, *((_DWORD *)this + 111), v23 - *((_DWORD *)this + 111));
            v25(v24, v39, LODWORD(v48), &v46, &v44);
            sub_3BDF80(&v48);
          }
          v26 = *((_DWORD *)this + 110);
          v46 = v46 - v45;
          if ( v26 > 0 )
          {
            v27 = g_pDisplay;
            v28 = *(void (__fastcall **)(int, int, _DWORD, float *, int *))(*(_DWORD *)g_pDisplay + 52);
            sub_3BED3C(&v48, *((_DWORD *)this + 103) + 244, *((_DWORD *)this + 111), v26 - *((_DWORD *)this + 111));
            v28(v27, v39, LODWORD(v48), &v47, &v44);
            sub_3BDF80(&v48);
          }
          v29 = v47 - v45;
          v47 = v47 - v45;
          if ( v47 >= 0.0 )
          {
            v30 = (float)(*((_DWORD *)this + 17) - *((_DWORD *)this + 15));
            if ( v29 > v30 )
              v47 = v30 + 0.5;
          }
          else
          {
            v47 = 0.0;
          }
          if ( v46 >= 0.0 )
          {
            v31 = (float)(*((_DWORD *)this + 17) - *((_DWORD *)this + 15));
            if ( v46 > v31 )
              v46 = v31 + 0.5;
          }
          else
          {
            v46 = 0.0;
          }
          v40 = (int)v46;
          v32 = (int)v47;
          if ( v46 <= v47 )
          {
            v32 = (int)v46;
            v40 = (int)v47;
          }
          v33 = g_pDisplay;
          v38 = *(void (__fastcall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 96);
          v34 = (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 84))(g_pDisplay);
          v38(v33, v34, 0, 0, 0);
          (*(void (__fastcall **)(int, int, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay
                                                                                             + 108))(
            g_pDisplay,
            v32 + *((_DWORD *)this + 15) + v41,
            *((_DWORD *)this + 16),
            v40 - v32,
            *((_DWORD *)this + 18) - *((_DWORD *)this + 16),
            *((_DWORD *)this + 130),
            0,
            0,
            0);
          (*(void (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 100))(g_pDisplay);
        }
        goto LABEL_25;
      }
      v11 = (float)(*((_DWORD *)this + 17) - *((_DWORD *)this + 15)) - v47;
    }
    v41 = FloatToInt(v11);
    goto LABEL_11;
  }
  v12 = v2[66];
  v41 = *(_DWORD *)(v4 - 12);
  if ( v12 != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = *((_DWORD *)this + 104);
      v48 = 0.0;
      v49 = 0.0;
      if ( v13 != 0 )
        (*(void (__fastcall **)(int, _DWORD, _DWORD, float *, float *))(*(_DWORD *)g_pDisplay + 52))(
          g_pDisplay,
          *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 144) + 32 * *(_DWORD *)(v13 + 228) + 20),
          *(_DWORD *)(v13 + 244),
          &v48,
          &v49);
      v14 = (float)((float)(*((_DWORD *)this + 17) - *((_DWORD *)this + 15)) - v48) * 0.5;
    }
    else
    {
      if ( v12 != 2 )
        goto LABEL_23;
      v14 = (float)(*((_DWORD *)this + 17) - *((_DWORD *)this + 15));
    }
    v41 = FloatToInt(v14);
  }
LABEL_23:
  v15 = *((_DWORD **)this + 104);
  if ( v15 != nullptr )
  {
    v35 = v15[61];
    v50 = (float)*((int *)this + 16);
    v49 = (float)*((int *)this + 15);
    v52 = (float)*((int *)this + 18);
    v51 = (float)*((int *)this + 17);
    (*(void (__fastcall **)(int, _DWORD, _DWORD, int, float *, float, _DWORD, _DWORD, _DWORD *, _DWORD, _DWORD, char *))(*(_DWORD *)g_pDisplay + 40))(
      g_pDisplay,
      *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 144) + 32 * v15[57] + 20),
      v15[68],
      v35,
      &v49,
      (float)v41,
      0,
      0,
      v15 + 59,
      *((_DWORD *)this + 56),
      0,
      &byte_50FA78);
  }
LABEL_25:
  v16 = FloatToInt(v42);
  result = EditBox::IsCursorVisible(this);
  if ( result != 0 )
  {
    v18 = g_pDisplay;
    v36 = *(void (__fastcall **)(int, int))(*(_DWORD *)g_pDisplay + 96);
    v19 = (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 84))(g_pDisplay);
    v36(v18, v19);
    v20 = *((_DWORD *)this + 15);
    v21 = v41 + v16 + 1;
    if ( v21 > *((_DWORD *)this + 17) - v20 )
      v21 = *((_DWORD *)this + 17) - v20;
    (*(void (__fastcall **)(int, int, _DWORD, int, int))(*(_DWORD *)g_pDisplay + 108))(
      g_pDisplay,
      v20 + v21,
      *((_DWORD *)this + 16),
      1,
      *((_DWORD *)this + 18) - *((_DWORD *)this + 16));
    return (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 100))(g_pDisplay);
  }
  return result;
}


//======================================================================
// EditBox::Save(TiXmlElement *)
// address: 0x001BE9E0   size: 0xA2 (162 bytes)
//======================================================================
TiXmlElement *__fastcall EditBox::Save(EditBox *this, TiXmlElement *a2)
{
  TiXmlElement *v3; // r0
  int v4; // r2
  TiXmlElement *v5; // r5
  int v6; // r2
  TiXmlElement *v7; // r6

  v3 = Frame::Save(this, a2);
  v4 = *((_DWORD *)this + 105);
  v5 = v3;
  if ( v4 != 0x7FFFFFFF )
    TiXmlElement::SetAttribute(v3, "letters", v4);
  if ( *((_BYTE *)this + 424) != 0 )
    TiXmlElement::SetAttribute(v5, "multiLine", "true");
  v6 = *((_DWORD *)this + 107);
  if ( v6 > 0 )
    TiXmlElement::SetAttribute(v5, "historyLines", v6);
  if ( (*((_DWORD *)this + 108) & 0x20) != 0 )
    TiXmlElement::SetAttribute(v5, "password", "true");
  if ( *((_DWORD *)this + 103) != 0 )
  {
    v7 = (TiXmlElement *)operator new(0x50u);
    TiXmlElement::TiXmlElement(v7, "FontString");
    TiXmlNode::LinkEndChild(v5, v7);
    if ( *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 103) + 232) - 12) != 0 )
      TiXmlElement::SetAttribute(v7, "fonttype", *(const char **)(*((_DWORD *)this + 103) + 232));
  }
  return v5;
}


//======================================================================
// EditBox::onGainFocus(void)
// address: 0x001BEAA8   size: 0x2A (42 bytes)
//======================================================================
int __fastcall EditBox::onGainFocus(FontString **this, int a2, int a3, unsigned int a4)
{
  const char *v5; // r1

  Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/OgreMain/UILib/ui_editbox.cpp", (const char *)&stru_438, 2, a4);
  Ogre::LogMessage((Ogre *)"EditBox onGainFocus", v5);
  EditBox::enableIME(this, true);
  return Frame::onGainFocus((Frame *)this);
}


//======================================================================
// EditBox::onLostFocus(void)
// address: 0x001BEADC   size: 0x2A (42 bytes)
//======================================================================
int __fastcall EditBox::onLostFocus(FontString **this, int a2, int a3, unsigned int a4)
{
  const char *v5; // r1

  Ogre::LogSetCurParam(
    (int)"D:/work/oworldsrc/client/OgreMain/UILib/ui_editbox.cpp",
    (const char *)&stru_438.st_size,
    2,
    a4);
  Ogre::LogMessage((Ogre *)"EditBox onLostFocus", v5);
  EditBox::enableIME(this, false);
  return Frame::onLostFocus((Frame *)this);
}

