// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MultiEditBox

//======================================================================
// MultiEditBox::GetTypeName(void)
// address: 0x001C4424   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall MultiEditBox::GetTypeName(MultiEditBox *this)
{
  return "MultiEditBox";
}


//======================================================================
// MultiEditBox::~MultiEditBox()
// address: 0x001C4430   size: 0x3A (58 bytes)
//======================================================================
// Alternative name is '_ZN12MultiEditBoxD1Ev'
void __fastcall MultiEditBox::~MultiEditBox(MultiEditBox *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_4592D0;
  sub_3BDF80((char *)this + 508);
  v2 = *((void **)this + 112);
  if ( v2 != nullptr )
    operator delete(v2);
  sub_3BDF80((char *)this + 412);
  Frame::~Frame(this);
}


//======================================================================
// MultiEditBox::~MultiEditBox()
// address: 0x001C4470   size: 0x12 (18 bytes)
//======================================================================
void __fastcall MultiEditBox::~MultiEditBox(MultiEditBox *this)
{
  MultiEditBox::~MultiEditBox(this);
  operator delete(this);
}


//======================================================================
// MultiEditBox::MultiEditBox(void)
// address: 0x001C44A4   size: 0x144 (324 bytes)
//======================================================================
// Alternative name is '_ZN12MultiEditBoxC2Ev'
void __fastcall MultiEditBox::MultiEditBox(MultiEditBox *this)
{
  Frame::Frame(this);
  *(_DWORD *)this = &off_4592D0;
  *((_DWORD *)this + 103) = &byte_55FB88;
  *((_DWORD *)this + 111) = 0;
  *((_DWORD *)this + 112) = 0;
  *((_DWORD *)this + 113) = 0;
  *((_DWORD *)this + 114) = 0;
  *((_DWORD *)this + 127) = &byte_55FB88;
  *((_DWORD *)this + 104) = 1000;
  *((_DWORD *)this + 109) = 0;
  *((_DWORD *)this + 118) = 0;
  *((_DWORD *)this + 115) = 0;
  *((_DWORD *)this + 117) = 0;
  *((_DWORD *)this + 121) = 0;
  *((_DWORD *)this + 122) = 1;
  *((_DWORD *)this + 119) = 1;
  *((_DWORD *)this + 108) = 10;
  *((_DWORD *)this + 123) = 700;
  *((_DWORD *)this + 124) = 400;
  sub_3BE508((int)this + 412, (char *)&unk_3FB8EA);
  *((_DWORD *)this + 110) = -1;
  *((_BYTE *)this + 480) = 0;
  *((_BYTE *)this + 481) = 0;
  *((_BYTE *)this + 482) = 0;
  *((_BYTE *)this + 483) = -1;
  *((_BYTE *)this + 428) = -1;
  *((_BYTE *)this + 429) = -1;
  *((_BYTE *)this + 430) = -1;
  *((_BYTE *)this + 431) = -1;
  *((_BYTE *)this + 420) = -1;
  *((_BYTE *)this + 421) = 0;
  *((_BYTE *)this + 422) = 0;
  *((_BYTE *)this + 423) = 0x80;
  *((_BYTE *)this + 424) = -56;
  *((_BYTE *)this + 425) = -56;
  *((_BYTE *)this + 426) = -56;
  *((_BYTE *)this + 427) = -1;
  *((_DWORD *)this + 125) = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)g_pDisplay + 32))(
                              g_pDisplay,
                              *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 144) + 32 * *((_DWORD *)this + 108) + 20));
  *((_DWORD *)this + 72) = 0x200000;
}


//======================================================================
// MultiEditBox::CopyMembers(MultiEditBox*)
// address: 0x001C45FC   size: 0xA2 (162 bytes)
//======================================================================
LayoutFrame *__fastcall MultiEditBox::CopyMembers(LayoutFrame *this, MultiEditBox *a2)
{
  LayoutFrame *v2; // r5

  v2 = this;
  if ( a2 != nullptr )
  {
    Frame::CopyMembers(this, a2);
    *((_DWORD *)a2 + 104) = *((_DWORD *)v2 + 104);
    *((_DWORD *)a2 + 109) = *((_DWORD *)v2 + 109);
    *((_DWORD *)a2 + 118) = *((_DWORD *)v2 + 118);
    *((_DWORD *)a2 + 115) = *((_DWORD *)v2 + 115);
    *((_DWORD *)a2 + 117) = *((_DWORD *)v2 + 117);
    *((_DWORD *)a2 + 121) = *((_DWORD *)v2 + 121);
    *((_DWORD *)a2 + 122) = *((_DWORD *)v2 + 122);
    *((_DWORD *)a2 + 119) = *((_DWORD *)v2 + 119);
    *((_DWORD *)a2 + 108) = *((_DWORD *)v2 + 108);
    *((_DWORD *)a2 + 123) = *((_DWORD *)v2 + 123);
    *((_DWORD *)a2 + 124) = *((_DWORD *)v2 + 124);
    *((_DWORD *)a2 + 120) = *((_DWORD *)v2 + 120);
    *((_DWORD *)a2 + 107) = *((_DWORD *)v2 + 107);
    *((_DWORD *)a2 + 105) = *((_DWORD *)v2 + 105);
    *((_DWORD *)a2 + 106) = *((_DWORD *)v2 + 106);
    *((_DWORD *)a2 + 125) = *((_DWORD *)v2 + 125);
    this = (LayoutFrame *)sub_3BEBBC((char *)a2 + 412);
    *((_DWORD *)a2 + 110) = *((_DWORD *)v2 + 110);
  }
  return this;
}


//======================================================================
// MultiEditBox::CreateClone(void)
// address: 0x001C469E   size: 0x1E (30 bytes)
//======================================================================
MultiEditBox *__fastcall MultiEditBox::CreateClone(MultiEditBox *this)
{
  MultiEditBox *v2; // r4

  v2 = (MultiEditBox *)operator new(0x200u);
  MultiEditBox::MultiEditBox(v2);
  MultiEditBox::CopyMembers(this, v2);
  return v2;
}


//======================================================================
// MultiEditBox::IsCursorVisible(void)
// address: 0x001C46BC   size: 0x36 (54 bytes)
//======================================================================
int __fastcall MultiEditBox::IsCursorVisible(MultiEditBox *this)
{
  MultiEditBox *CurEditBox; // r0
  int result; // r0
  int v4; // r3

  if ( *((_DWORD *)this + 117) != *((_DWORD *)this + 118) )
    return 0;
  CurEditBox = (MultiEditBox *)FrameManager::getCurEditBox((FrameManager *)g_pFrameMgr);
  if ( CurEditBox != this )
    return 0;
  v4 = *((_DWORD *)CurEditBox + 122);
  result = 1;
  if ( v4 == 0 )
    return 0;
  return result;
}


//======================================================================
// MultiEditBox::OnPaste(void)
// address: 0x001C46F8   size: 0x2 (2 bytes)
//======================================================================
void __fastcall MultiEditBox::OnPaste(MultiEditBox *this)
{
  ;
}


//======================================================================
// MultiEditBox::OnCopy(void)
// address: 0x001C46FA   size: 0x2 (2 bytes)
//======================================================================
void __fastcall MultiEditBox::OnCopy(MultiEditBox *this)
{
  ;
}


//======================================================================
// MultiEditBox::CheckForReason(void)
// address: 0x001C46FC   size: 0x48 (72 bytes)
//======================================================================
_DWORD *__fastcall MultiEditBox::CheckForReason(_DWORD *this)
{
  int v1; // r1
  int v2; // r2

  if ( (int)*(this + 117) < 0 )
    *(this + 117) = 0;
  v1 = *(this + 118);
  v2 = 0;
  if ( v1 < 0 || (v2 = -1431655765 * ((*(this + 113) - *(this + 112)) >> 3), v1 > v2) )
    *(this + 118) = v2;
  if ( (int)*(this + 115) < 0 )
    *(this + 115) = 0;
  return this;
}


//======================================================================
// MultiEditBox::UpdateScrollBar(void)
// address: 0x001C4748   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall MultiEditBox::UpdateScrollBar(MultiEditBox *this)
{
  int result; // r0
  int v3; // r3
  int v4; // r2
  int v5; // r5
  int v6; // r5

  result = (*((_DWORD *)this + 18) - *((_DWORD *)this + 16))
         / (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)g_pDisplay + 32))(
             g_pDisplay,
             *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 144) + 32 * *((_DWORD *)this + 108) + 20));
  v3 = *((_DWORD *)this + 112);
  v4 = -1431655765 * ((*((_DWORD *)this + 113) - v3) >> 3);
  if ( v4 <= 0 )
    v5 = 0;
  else
    v5 = *(_DWORD *)(v3 + 24 * (v4 - 1) + 12) + 1;
  v6 = v5 - result;
  if ( v6 < 0 )
  {
    v6 = 0;
    *((_DWORD *)this + 115) = 0;
  }
  if ( *(_DWORD *)(*((_DWORD *)this + 103) - 12) != 0 )
  {
    if ( v6 != 0 )
    {
      LayoutFrame::Show(*((LayoutFrame **)this + 111));
    }
    else
    {
      *((_DWORD *)this + 115) = 0;
      LayoutFrame::Hide(*((LayoutFrame **)this + 111));
    }
    return Slider::SetMaxValue(*((Slider **)this + 111), (float)v6);
  }
  return result;
}


//======================================================================
// MultiEditBox::GetCharPos(int)
// address: 0x001C47FC   size: 0xD0 (208 bytes)
//======================================================================
MultiEditBox *__fastcall MultiEditBox::GetCharPos(MultiEditBox *this, _DWORD *a2, int a3)
{
  int v3; // r5
  int v6; // r7
  float v7; // r0
  int v8; // r2
  int v10; // [sp+10h] [bp-1Ch]
  int UIFontByIndex; // [sp+14h] [bp-18h]
  int v12; // [sp+18h] [bp-14h]
  float v14; // [sp+20h] [bp-Ch] BYREF
  int v15; // [sp+24h] [bp-8h] BYREF

  v3 = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  UIFontByIndex = FrameManager::getUIFontByIndex((FrameManager *)g_pFrameMgr, a2[108]);
  v10 = 0;
  v12 = -1431655765 * ((a2[113] - a2[112]) >> 3);
  while ( v3 < v12 )
  {
    v14 = 0.0;
    v15 = 0;
    v6 = a2[112] + 24 * v3;
    (*(void (__fastcall **)(int, _DWORD, int, float *, int *))(*(_DWORD *)g_pDisplay + 52))(
      g_pDisplay,
      *(_DWORD *)(UIFontByIndex + 20),
      v6 + 17,
      &v14,
      &v15);
    if ( v3 == a3 )
      break;
    if ( *(_DWORD *)(v6 + 4) == 8 || (float)((float)v10 + v14) > (float)(a2[17] - a2[15]) )
    {
      v8 = *((_DWORD *)this + 1);
      *(_DWORD *)this = 0;
      *((_DWORD *)this + 1) = v8 + 1;
      v10 = 0;
    }
    v7 = v14;
    ++v3;
    ++*(_DWORD *)this;
    v10 += (int)v7;
  }
  return this;
}


//======================================================================
// MultiEditBox::PosToChar(Ogre::TVector2<int>)
// address: 0x001C48D8   size: 0x1B4 (436 bytes)
//======================================================================
int __fastcall MultiEditBox::PosToChar(_DWORD *a1, int a2, int a3)
{
  int v4; // r5
  int v5; // r7
  int v7; // [sp+10h] [bp-44h]
  int v8; // [sp+20h] [bp-34h]
  int v9; // [sp+24h] [bp-30h]
  int v10; // [sp+28h] [bp-2Ch]
  int UIFontByIndex; // [sp+30h] [bp-24h]
  int v13; // [sp+34h] [bp-20h]
  int v14; // [sp+38h] [bp-1Ch]
  float v16; // [sp+48h] [bp-Ch] BYREF
  char v17[8]; // [sp+4Ch] [bp-8h] BYREF

  UIFontByIndex = FrameManager::getUIFontByIndex((FrameManager *)g_pFrameMgr, a1[108]);
  v13 = a3 / (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 32))(g_pDisplay);
  v14 = -1431655765 * ((a1[113] - a1[112]) >> 3);
  v4 = v14;
  v7 = 0;
  v10 = 0;
  v8 = 0;
  v9 = 0;
  while ( v7 < v14 )
  {
    v5 = a1[112] + 24 * v7;
    (*(void (__fastcall **)(int, _DWORD, int, float *, char *))(*(_DWORD *)g_pDisplay + 52))(
      g_pDisplay,
      *(_DWORD *)(UIFontByIndex + 20),
      v5 + 17,
      &v16,
      v17);
    if ( *(_DWORD *)(v5 + 12) >= a1[115] )
    {
      if ( v9 > v13 )
        return v4;
      if ( v9 == v13 && a2 >= v8 )
      {
        if ( (double)a2 <= (double)v8 + v16 * 0.5 )
          return v7;
        if ( (float)a2 <= (float)((float)v8 + v16) )
          return ++v7;
        if ( *(_DWORD *)(v5 + 4) == 8 )
          return v7;
        v4 = v7 + 1;
      }
      if ( *(_DWORD *)(v5 + 4) == 8 || (v8 += (int)v16, (float)((float)v8 + v16) > (float)(a1[17] - a1[15])) )
      {
        v10 += a1[125] + a1[109];
        ++v9;
        v8 = 0;
      }
      if ( v10 + a1[125] > a1[18] - a1[16] )
        return v4;
    }
    ++v7;
  }
  return v4;
}


//======================================================================
// MultiEditBox::GetPosChar(int,int)
// address: 0x001C4AA8   size: 0x102 (258 bytes)
//======================================================================
int __fastcall MultiEditBox::GetPosChar(MultiEditBox *this, int a2, int a3)
{
  int v3; // r4
  int v5; // r2
  int v6; // r6
  int v8; // [sp+Ch] [bp-20h]
  int v9; // [sp+10h] [bp-1Ch]
  int v10; // [sp+14h] [bp-18h]
  int v11; // [sp+18h] [bp-14h]
  int v12; // [sp+1Ch] [bp-10h]
  float v13; // [sp+20h] [bp-Ch] BYREF
  _BYTE v14[8]; // [sp+24h] [bp-8h] BYREF

  v3 = 0;
  v11 = a2 & (~a2 >> 31);
  v12 = a3 & (~a3 >> 31);
  v9 = 0;
  v8 = 0;
  v10 = 0;
  while ( 1 )
  {
    v5 = *((_DWORD *)this + 112);
    if ( v8 >= -1431655765 * ((*((_DWORD *)this + 113) - v5) >> 3) )
      break;
    (*(void (__fastcall **)(int, _DWORD, int, float *, _BYTE *))(*(_DWORD *)g_pDisplay + 52))(
      g_pDisplay,
      *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 144) + 32 * *((_DWORD *)this + 108) + 20),
      v5 + 24 * v8 + 17,
      &v13,
      v14);
    v6 = *((_DWORD *)this + 112);
    if ( *(_DWORD *)(v6 + 24 * v8 + 4) == 8
      || (float)((float)v10 + v13) > (float)(*((_DWORD *)this + 17) - *((_DWORD *)this + 15)) )
    {
      if ( v11 == v9 )
        return v8;
      v3 = 0;
      v10 = 0;
      ++v9;
    }
    if ( v11 != v9 || v12 != v3 )
    {
      ++v3;
      v10 += (int)v13;
      if ( ++v8 != -1431655765 * ((*((_DWORD *)this + 113) - v6) >> 3) || v11 != v9 )
        continue;
    }
    return v8;
  }
  return -1;
}


//======================================================================
// MultiEditBox::CalcCharsLine(void)
// address: 0x001C4BB8   size: 0xC8 (200 bytes)
//======================================================================
int __fastcall MultiEditBox::CalcCharsLine(MultiEditBox *this)
{
  int v2; // r5
  int v3; // r7
  int result; // r0
  int v5; // r6
  float v6; // r0
  int v7; // [sp+18h] [bp-1Ch]
  int v8; // [sp+1Ch] [bp-18h]
  int v9; // [sp+20h] [bp-14h]
  float v10; // [sp+28h] [bp-Ch] BYREF
  _BYTE v11[8]; // [sp+2Ch] [bp-8h] BYREF

  v8 = *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 144) + 32 * *((_DWORD *)this + 108) + 20);
  v2 = 0;
  (*(void (__fastcall **)(int, int))(*(_DWORD *)g_pDisplay + 32))(g_pDisplay, v8);
  v7 = 0;
  v3 = 0;
  v9 = -1431655765 * ((*((_DWORD *)this + 113) - *((_DWORD *)this + 112)) >> 3);
  while ( 1 )
  {
    result = v9;
    if ( v2 >= v9 )
      break;
    (*(void (__fastcall **)(int, int, int, float *, _BYTE *))(*(_DWORD *)g_pDisplay + 52))(
      g_pDisplay,
      v8,
      *((_DWORD *)this + 112) + 24 * v2 + 17,
      &v10,
      v11);
    v5 = *((_DWORD *)this + 112) + 24 * v2;
    if ( *(_DWORD *)(v5 + 4) == 8 || (float)((float)v3 + v10) > (float)(*((_DWORD *)this + 17) - *((_DWORD *)this + 15)) )
    {
      v3 = 0;
      ++v7;
    }
    v6 = v10;
    ++v2;
    *(_DWORD *)(v5 + 12) = v7;
    v3 += (int)v6;
  }
  return result;
}


//======================================================================
// MultiEditBox::IsHalfDBCSPre(int)
// address: 0x001C4C8C   size: 0x34 (52 bytes)
//======================================================================
bool __fastcall MultiEditBox::IsHalfDBCSPre(MultiEditBox *this, int a2)
{
  int v2; // r3

  if ( a2 > 0 && (v2 = *((_DWORD *)this + 112), a2 <= -1431655765 * ((*((_DWORD *)this + 113) - v2) >> 3)) )
    return *(_DWORD *)(v2 + 24 * (a2 - 1) + 4) == 9;
  else
    return false;
}


//======================================================================
// MultiEditBox::EraseRichChar(int)
// address: 0x001C4CC4   size: 0x80 (128 bytes)
//======================================================================
int __fastcall MultiEditBox::EraseRichChar(MultiEditBox *this, int a2)
{
  char *v3; // r6
  char *v4; // r3
  int v5; // r2
  int v7; // r0
  char *v8; // r5
  int i; // r7

  if ( a2 < 0 )
    return 0;
  v3 = (char *)this + 448;
  v4 = *((char **)this + 113);
  v5 = *((_DWORD *)this + 112);
  if ( a2 >= -1431655765 * ((int)&v4[-v5] >> 3) )
    return 0;
  v7 = *((_DWORD *)this + 118);
  if ( v7 > a2 )
    *((_DWORD *)this + 118) = v7 - 1;
  v8 = (char *)(v5 + 24 * a2 + 24);
  if ( v8 != v4 )
  {
    for ( i = -1431655765 * ((v4 - v8) >> 3); i > 0; --i )
    {
      j_memcpy(v8 - 24, v8, 0x16u);
      v8 += 24;
    }
  }
  *((_DWORD *)v3 + 1) -= 24;
  if ( UIObject::hasScriptsEvent(this, 42) )
    UIObject::CallScript(this, 42, (const char *)&unk_3FB8EA);
  return 1;
}


//======================================================================
// MultiEditBox::ParseMaxSize(void)
// address: 0x001C4D4C   size: 0x32 (50 bytes)
//======================================================================
int __fastcall MultiEditBox::ParseMaxSize(MultiEditBox *this)
{
  int v1; // r6
  int v2; // r4
  int v3; // r7
  const char *v4; // r6
  int v5; // r5

  v1 = *((_DWORD *)this + 112);
  v2 = 0;
  v3 = -1431655765 * ((*((_DWORD *)this + 113) - v1) >> 3);
  v4 = (const char *)(v1 + 17);
  v5 = 0;
  while ( v2 < v3 )
  {
    ++v2;
    v5 += j_strlen(v4);
    v4 += 24;
  }
  return v5;
}


//======================================================================
// MultiEditBox::SetTextColor(int,int,int)
// address: 0x001C4D84   size: 0x1E (30 bytes)
//======================================================================
_BYTE *__fastcall MultiEditBox::SetTextColor(_BYTE *this, char a2, char a3, char a4)
{
  *(this + 428) = a4;
  *(this + 429) = a3;
  *(this + 430) = a2;
  *(this + 431) = -1;
  return this;
}


//======================================================================
// MultiEditBox::enableIME(bool)
// address: 0x001C4DA4   size: 0x10 (16 bytes)
//======================================================================
int __fastcall MultiEditBox::enableIME(MultiEditBox *this, bool a2)
{
  return Ogre::InputManager::enableIME((Ogre::InputManager *)Ogre::Singleton<Ogre::InputManager>::ms_Singleton, a2);
}


//======================================================================
// MultiEditBox::GetRawString(std::string &,int,int)
// address: 0x001C4DB8   size: 0x8A (138 bytes)
//======================================================================
int __fastcall MultiEditBox::GetRawString(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r6
  int result; // r0
  int v8; // [sp+4h] [bp-10h]
  int v9; // [sp+8h] [bp-Ch]

  v4 = a3;
  v5 = a4;
  if ( a3 < 0 || a3 >= -1431655765 * ((*(_DWORD *)(a1 + 452) - *(_DWORD *)(a1 + 448)) >> 3) )
    v4 = 0;
  if ( a4 < 0 || v4 + a4 > -1431655765 * ((*(_DWORD *)(a1 + 452) - *(_DWORD *)(a1 + 448)) >> 3) )
    v5 = -1431655765 * ((*(_DWORD *)(a1 + 452) - *(_DWORD *)(a1 + 448)) >> 3) - v4;
  result = sub_3BE508(a2, (char *)&unk_3FB8EA);
  v8 = v4;
  v9 = 24 * v4;
  while ( v8 < v4 + v5 )
  {
    sub_3BE96C(a2, (char *)(*(_DWORD *)(a1 + 448) + v9 + 17));
    result = ++v8;
    v9 += 24;
  }
  return result;
}


//======================================================================
// MultiEditBox::GetText(void)
// address: 0x001C4E4C   size: 0x2E (46 bytes)
//======================================================================
int __fastcall MultiEditBox::GetText(MultiEditBox *this)
{
  MultiEditBox::GetRawString(
    (int)this,
    (int)this + 508,
    0,
    -1431655765 * ((*((_DWORD *)this + 113) - *((_DWORD *)this + 112)) >> 3));
  return *((_DWORD *)this + 127);
}


//======================================================================
// MultiEditBox::GetCharsInLine(int)
// address: 0x001C4E80   size: 0xD0 (208 bytes)
//======================================================================
int __fastcall MultiEditBox::GetCharsInLine(MultiEditBox *this, int a2)
{
  int v2; // r4
  int v5; // [sp+Ch] [bp-20h]
  int v6; // [sp+10h] [bp-1Ch]
  int v7; // [sp+14h] [bp-18h]
  int v9; // [sp+1Ch] [bp-10h]
  float v10; // [sp+20h] [bp-Ch] BYREF
  _BYTE v11[8]; // [sp+24h] [bp-8h] BYREF

  v2 = 0;
  v9 = -1431655765 * ((*((_DWORD *)this + 113) - *((_DWORD *)this + 112)) >> 3);
  v7 = 0;
  v6 = 0;
  v5 = 0;
  while ( v2 < v9 && v6 <= a2 )
  {
    (*(void (__fastcall **)(int, _DWORD, int, float *, _BYTE *))(*(_DWORD *)g_pDisplay + 52))(
      g_pDisplay,
      *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 144) + 32 * *((_DWORD *)this + 108) + 20),
      *((_DWORD *)this + 112) + 24 * v2 + 17,
      &v10,
      v11);
    if ( *(_DWORD *)(*((_DWORD *)this + 112) + 24 * v2 + 4) == 8
      || (float)((float)v5 + v10) > (float)(*((_DWORD *)this + 17) - *((_DWORD *)this + 15)) )
    {
      v5 = 0;
      ++v6;
    }
    ++v2;
    v7 += v6 == a2;
    v5 += (int)v10;
  }
  return v7;
}


//======================================================================
// MultiEditBox::MoveSelBegin(int)
// address: 0x001C4F5C   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall MultiEditBox::MoveSelBegin(_DWORD *this, int a2)
{
  int v2; // r3

  v2 = -1431655765 * ((*(this + 113) - *(this + 112)) >> 3);
  if ( a2 < 0 )
  {
    v2 = 0;
  }
  else if ( v2 > a2 )
  {
    v2 = a2;
  }
  *(this + 117) = v2;
  return this;
}


//======================================================================
// MultiEditBox::MoveCursor(int)
// address: 0x001C4F90   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall MultiEditBox::MoveCursor(_DWORD *this, int a2)
{
  int v2; // r3

  v2 = -1431655765 * ((*(this + 113) - *(this + 112)) >> 3);
  if ( a2 < 0 )
  {
    v2 = 0;
  }
  else if ( v2 > a2 )
  {
    v2 = a2;
  }
  *(this + 118) = v2;
  return this;
}


//======================================================================
// MultiEditBox::Clear(void)
// address: 0x001C4FC4   size: 0x32 (50 bytes)
//======================================================================
int __fastcall MultiEditBox::Clear(MultiEditBox *this)
{
  *((_DWORD *)this + 113) = *((_DWORD *)this + 112);
  MultiEditBox::MoveCursor(this, 0);
  *((_DWORD *)this + 115) = 0;
  MultiEditBox::MoveSelBegin(this, 0);
  return UIObject::CallScript(this, 42, (const char *)&unk_3FB8EA);
}


//======================================================================
// MultiEditBox::SetSel(int,int)
// address: 0x001C4FFC   size: 0x4C (76 bytes)
//======================================================================
int __fastcall MultiEditBox::SetSel(MultiEditBox *this, int a2, int a3)
{
  int v4; // r4
  int v5; // r3

  v4 = -1431655765 * ((*((_DWORD *)this + 113) - *((_DWORD *)this + 112)) >> 3);
  if ( a2 < 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = -1431655765 * ((*((_DWORD *)this + 113) - *((_DWORD *)this + 112)) >> 3);
    if ( v4 > a2 )
      v5 = a2;
  }
  if ( a3 < 0 )
  {
    v4 = 0;
  }
  else if ( v4 > a3 )
  {
    v4 = a3;
  }
  MultiEditBox::MoveSelBegin(this, v5);
  MultiEditBox::MoveCursor(this, v4);
  return 1;
}


//======================================================================
// MultiEditBox::CancelSel(bool,bool)
// address: 0x001C504C   size: 0x44 (68 bytes)
//======================================================================
int __fastcall MultiEditBox::CancelSel(MultiEditBox *this, int a2, int a3)
{
  int v4; // r3
  int v5; // r0
  int v6; // r1

  v4 = *((_DWORD *)this + 117);
  v5 = *((_DWORD *)this + 118);
  if ( v4 == v5 )
    return 0;
  if ( a3 != 0 )
  {
    if ( a2 != 0 )
    {
      if ( v5 > v4 )
        v5 = v4;
      v6 = v5;
    }
    else
    {
      v6 = v5;
      if ( v5 < v4 )
        v6 = v4;
    }
    MultiEditBox::MoveCursor(this, v6);
  }
  MultiEditBox::MoveSelBegin(this, *((_DWORD *)this + 118));
  return 1;
}


//======================================================================
// MultiEditBox::SetUpdateDirty(bool)
// address: 0x001C5090   size: 0x8 (8 bytes)
//======================================================================
int __fastcall MultiEditBox::SetUpdateDirty(int this, bool a2)
{
  *(_BYTE *)(this + 504) = a2;
  return this;
}


//======================================================================
// MultiEditBox::ClearSel(void)
// address: 0x001C5098   size: 0x50 (80 bytes)
//======================================================================
int __fastcall MultiEditBox::ClearSel(MultiEditBox *this)
{
  int v1; // r3
  int v2; // r6
  int v4; // r5

  v1 = *((_DWORD *)this + 117);
  v2 = *((_DWORD *)this + 118);
  if ( v1 == v2 )
    return 0;
  v4 = *((_DWORD *)this + 118);
  if ( v2 > v1 )
    v4 = *((_DWORD *)this + 117);
  if ( v2 < v1 )
    v2 = *((_DWORD *)this + 117);
  while ( --v2 >= v4 )
    MultiEditBox::EraseRichChar(this, v2);
  MultiEditBox::MoveCursor(this, v4);
  MultiEditBox::MoveSelBegin(this, v4);
  MultiEditBox::SetUpdateDirty((int)this, true);
  return 1;
}


//======================================================================
// MultiEditBox::OnCut(void)
// address: 0x001C50E8   size: 0x18 (24 bytes)
//======================================================================
int __fastcall MultiEditBox::OnCut(MultiEditBox *this)
{
  MultiEditBox::OnCopy(this);
  MultiEditBox::ClearSel(this);
  return MultiEditBox::SetUpdateDirty((int)this, true);
}


//======================================================================
// MultiEditBox::OnKeyDown(Ogre::InputEvent const&,bool)
// address: 0x001C5100   size: 0x296 (662 bytes)
//======================================================================
int __fastcall MultiEditBox::OnKeyDown(MultiEditBox *this, const InputEvent *a2, bool a3)
{
  __int16 *ie_closure; // r3
  int v6; // r1
  struct _InputEvent *v7; // r3
  struct _InputEvent *ie_next; // r3
  int v9; // r0
  struct _InputEvent *v10; // r3
  MultiEditBox *v11; // r0
  int v12; // r1
  int v15; // r1
  int PosChar; // r1
  __int16 KeyState; // r0
  __int16 v18; // r0
  __int16 v19; // r0
  int v22[3]; // [sp+8h] [bp-Ch] BYREF

  MultiEditBox::SetUpdateDirty((int)this, true);
  ie_closure = (__int16 *)a2->ie_closure;
  if ( ie_closure == (_WORD *)&dword_24 + 1 )
  {
    MultiEditBox::GetCharPos((MultiEditBox *)v22, this, *((_DWORD *)this + 118));
    v15 = v22[1] - 1;
LABEL_60:
    PosChar = MultiEditBox::GetPosChar(this, v15, v22[0]);
    if ( PosChar >= 0 )
      MultiEditBox::MoveCursor(this, PosChar);
    if ( ((int)a2->ie_next & 4) == 0 )
    {
      v12 = *((_DWORD *)this + 118);
      goto LABEL_64;
    }
    return 0;
  }
  if ( (int)ie_closure > 38 )
  {
    if ( ie_closure == &word_2E )
    {
      if ( UIObject::hasScriptsEvent(this, 23) )
        UIObject::CallScript(this, 23, "iii", a2->ie_closure, *((_DWORD *)this + 118) + 1, *((_DWORD *)this + 117) + 1);
      MultiEditBox::ClearSel(this);
      return 0;
    }
    if ( (int)ie_closure > 46 )
    {
      if ( ie_closure == (_WORD *)&dword_54 + 1 )
      {
        KeyState = GetKeyState(17);
        if ( (KeyState & 0xFF00) == 0 )
          return 0;
        MultiEditBox::OnPaste(this);
      }
      else if ( ie_closure == (__int16 *)&dword_58 )
      {
        v19 = GetKeyState(17);
        if ( (v19 & 0xFF00) == 0 )
          return 0;
        MultiEditBox::OnCut(this);
      }
      else
      {
        if ( ie_closure != (__int16 *)((char *)&dword_40 + 3) )
          return 0;
        v18 = GetKeyState(17);
        if ( (v18 & 0xFF00) == 0 )
          return 0;
        MultiEditBox::OnCopy(this);
      }
      MultiEditBox::SetUpdateDirty((int)this, true);
      return 0;
    }
    if ( ie_closure != (__int16 *)((char *)&dword_24 + 3) )
    {
      if ( ie_closure != &word_28 )
        return 0;
      MultiEditBox::GetCharPos((MultiEditBox *)v22, this, *((_DWORD *)this + 118));
      v15 = v22[1] + 1;
      goto LABEL_60;
    }
    ie_next = a2->ie_next;
    if ( ((unsigned __int8)ie_next & 8) == 0 )
    {
      if ( ((unsigned __int8)ie_next & 4) == 0 && MultiEditBox::CancelSel(this, 0, 1) != 0 )
        return 0;
      v6 = *((_DWORD *)this + 118) + 1;
      goto LABEL_51;
    }
    MultiEditBox::GetCharPos((MultiEditBox *)v22, this, *((_DWORD *)this + 118));
    v9 = MultiEditBox::GetPosChar(this, 1000, v22[0]);
    v6 = v9 + 1;
    if ( v9 < 0 )
      goto LABEL_53;
LABEL_51:
    v11 = this;
LABEL_52:
    MultiEditBox::MoveCursor(v11, v6);
    goto LABEL_53;
  }
  if ( ie_closure == (__int16 *)((char *)&dword_18 + 3) )
  {
    if ( UIObject::hasScriptsEvent(this, 13) )
      UIObject::CallScript(this, 13, (const char *)&unk_3FB8EA);
    return 0;
  }
  if ( (int)ie_closure <= 27 )
  {
    if ( ie_closure == (__int16 *)&byte_8 )
    {
      if ( UIObject::hasScriptsEvent(this, 23) )
        UIObject::CallScript(this, 23, "iii", a2->ie_closure, *((_DWORD *)this + 118) + 1, *((_DWORD *)this + 117) + 1);
    }
    else if ( ie_closure == (__int16 *)&byte_9[4]
           && (GetKeyState(17) & 0xFF00) != 0
           && UIObject::hasScriptsEvent(this, 12) )
    {
      UIObject::CallScript(this, 12, (const char *)&unk_3FB8EA);
    }
    return 0;
  }
  if ( ie_closure == (__int16 *)&dword_24 )
  {
    v10 = a2->ie_next;
    if ( ((unsigned __int8)v10 & 8) == 0 )
    {
      if ( ((unsigned __int8)v10 & 4) == 0 && MultiEditBox::CancelSel(this, 0, 1) != 0 )
        return 0;
      MultiEditBox::GetCharPos((MultiEditBox *)v22, this, *((_DWORD *)this + 118));
      if ( MultiEditBox::GetPosChar(this, 0, v22[0]) < 0 )
        goto LABEL_53;
    }
    v11 = this;
    v6 = 0;
    goto LABEL_52;
  }
  if ( (int)ie_closure <= 36 )
  {
    if ( ie_closure != (__int16 *)((char *)&dword_20 + 3) )
      return 0;
    v6 = -1431655765 * ((*((_DWORD *)this + 113) - *((_DWORD *)this + 112)) >> 3);
    goto LABEL_51;
  }
  v7 = a2->ie_next;
  if ( ((unsigned __int8)v7 & 8) == 0 )
  {
    if ( ((unsigned __int8)v7 & 4) == 0 && MultiEditBox::CancelSel(this, 1, 1) != 0 )
      return 0;
    v6 = *((_DWORD *)this + 118) - 1;
    goto LABEL_51;
  }
  MultiEditBox::GetCharPos((MultiEditBox *)v22, this, *((_DWORD *)this + 118));
  v6 = MultiEditBox::GetPosChar(this, 0, v22[0]);
  if ( v6 >= 0 )
    goto LABEL_51;
LABEL_53:
  if ( ((int)a2->ie_next & 4) == 0 )
  {
    v12 = *((_DWORD *)this + 118);
LABEL_64:
    MultiEditBox::MoveSelBegin(this, v12);
  }
  return 0;
}


//======================================================================
// MultiEditBox::SetSliderValue(int)
// address: 0x001C53AC   size: 0x10 (16 bytes)
//======================================================================
int __fastcall MultiEditBox::SetSliderValue(MultiEditBox *this, int a2)
{
  *((_DWORD *)this + 115) = a2;
  return MultiEditBox::SetUpdateDirty((int)this, false);
}


//======================================================================
// MultiEditBox::IniMultiEditSlider(void)
// address: 0x001C53BC   size: 0x1E (30 bytes)
//======================================================================
int __fastcall MultiEditBox::IniMultiEditSlider(MultiEditBox *this)
{
  int result; // r0

  result = FrameManager::FindLayoutFrame(g_pFrameMgr);
  *((_DWORD *)this + 111) = result;
  return result;
}


//======================================================================
// MultiEditBox::AjustForReason(void)
// address: 0x001C53E0   size: 0xE2 (226 bytes)
//======================================================================
MultiEditBox *__fastcall MultiEditBox::AjustForReason(MultiEditBox *this)
{
  int v1; // r2
  int v2; // r3
  int v4; // r1
  MultiEditBox *result; // r0
  int v6; // r7
  int v7; // [sp+4h] [bp-18h]
  int v8; // [sp+8h] [bp-14h]
  int v9; // [sp+Ch] [bp-10h]
  _DWORD v10[3]; // [sp+10h] [bp-Ch] BYREF

  v1 = *((_DWORD *)this + 118);
  v2 = -1431655765 * ((*((_DWORD *)this + 113) - *((_DWORD *)this + 112)) >> 3);
  if ( v1 <= v2 )
  {
    if ( v1 < 0 )
      *((_DWORD *)this + 118) = 0;
  }
  else
  {
    *((_DWORD *)this + 118) = v2;
  }
  v4 = *((_DWORD *)this + 117);
  if ( v4 <= v2 )
  {
    if ( v4 >= 0 )
      goto LABEL_9;
    v2 = 0;
  }
  *((_DWORD *)this + 117) = v2;
LABEL_9:
  v9 = *((_DWORD *)this + 16);
  v8 = *((_DWORD *)this + 18);
  v7 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)g_pDisplay + 32))(
         g_pDisplay,
         *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 144) + 32 * *((_DWORD *)this + 108) + 20));
  MultiEditBox::CalcCharsLine(this);
  result = MultiEditBox::GetCharPos((MultiEditBox *)v10, this, *((_DWORD *)this + 118));
  v6 = *((_DWORD *)this + 115);
  if ( v10[1] >= v6 )
  {
    result = (MultiEditBox *)((v8 - v9) / v7);
    if ( v10[1] >= (int)result + v6 )
    {
      result = (MultiEditBox *)(v10[1] + 1 - (_DWORD)result);
      *((_DWORD *)this + 115) = result;
    }
  }
  else
  {
    *((_DWORD *)this + 115) = v10[1];
  }
  if ( *(_DWORD *)(*((_DWORD *)this + 103) - 12) != 0 )
  {
    if ( *((_DWORD *)this + 111) == 0 )
      MultiEditBox::IniMultiEditSlider(this);
    return (MultiEditBox *)Slider::SetValue(*((Slider **)this + 111), (float)*((int *)this + 115));
  }
  return result;
}


//======================================================================
// MultiEditBox::UpdateSelf(float)
// address: 0x001C54D0   size: 0x9A (154 bytes)
//======================================================================
MultiEditBox *__fastcall MultiEditBox::UpdateSelf(MultiEditBox *this, float a2)
{
  MultiEditBox *result; // r0
  int v5; // r3
  int v6; // r3
  int v7; // r2

  *((_DWORD *)this + 125) = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)g_pDisplay + 32))(
                              g_pDisplay,
                              *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 144) + 32 * *((_DWORD *)this + 108) + 20));
  MultiEditBox::CheckForReason(this);
  result = (MultiEditBox *)FrameManager::getCurEditBox((FrameManager *)g_pFrameMgr);
  v5 = 1;
  if ( result != this )
    goto LABEL_6;
  result = (MultiEditBox *)((int)(float)(a2 * 1000.0) + *((_DWORD *)this + 121));
  *((_DWORD *)this + 121) = result;
  v6 = *((_DWORD *)this + 122);
  v7 = 246;
  if ( v6 == 0 )
    v7 = 248;
  if ( (int)result > *(_DWORD *)((char *)this + 2 * v7) )
  {
    v5 = 1 - v6;
LABEL_6:
    *((_DWORD *)this + 122) = v5;
    *((_DWORD *)this + 121) = 0;
  }
  if ( *((_BYTE *)this + 504) != 0 )
  {
    MultiEditBox::SetUpdateDirty((int)this, false);
    MultiEditBox::AjustForReason(this);
    return (MultiEditBox *)MultiEditBox::UpdateScrollBar(this);
  }
  return result;
}


//======================================================================
// MultiEditBox::getTextCount(void)
// address: 0x001C5578   size: 0x30 (48 bytes)
//======================================================================
int __fastcall MultiEditBox::getTextCount(MultiEditBox *this)
{
  char *v2; // r7

  v2 = (char *)this + 448;
  MultiEditBox::GetRawString(
    (int)this,
    (int)this + 508,
    0,
    -1431655765 * ((*((_DWORD *)this + 113) - *((_DWORD *)this + 112)) >> 3));
  return -1431655765 * ((*((_DWORD *)v2 + 1) - *((_DWORD *)this + 112)) >> 3);
}


//======================================================================
// MultiEditBox::IsInputEnable(unsigned char)
// address: 0x001C55AC   size: 0x140 (320 bytes)
//======================================================================
bool __fastcall MultiEditBox::IsInputEnable(MultiEditBox *this, int a2)
{
  _BOOL4 v3; // r6
  int v4; // r0
  int v5; // r3
  int v6; // r2
  int v7; // r6
  int CharsInLine; // r7
  int PosChar; // r0
  int v11; // [sp+8h] [bp-34h]
  int v12; // [sp+10h] [bp-2Ch]
  char *v14; // [sp+18h] [bp-24h] BYREF
  float v15; // [sp+1Ch] [bp-20h] BYREF
  float v16; // [sp+20h] [bp-1Ch] BYREF
  _BYTE v17[4]; // [sp+24h] [bp-18h] BYREF
  int v18; // [sp+28h] [bp-14h] BYREF
  char v19; // [sp+2Ch] [bp-10h]
  _BYTE v20[4]; // [sp+30h] [bp-Ch] BYREF
  int v21; // [sp+34h] [bp-8h]

  if ( MultiEditBox::ParseMaxSize(this) >= *((_DWORD *)this + 104)
    || (unsigned int)MultiEditBox::getTextCount(this) >= *((_DWORD *)this + 110) )
  {
    return false;
  }
  v3 = true;
  if ( *(_DWORD *)(*((_DWORD *)this + 103) - 12) == 0 )
  {
    v12 = *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 144) + 32 * *((_DWORD *)this + 108) + 20);
    v11 = *((_DWORD *)this + 18) - *((_DWORD *)this + 16);
    v4 = v11 / (*(int (__fastcall **)(int, int))(*(_DWORD *)g_pDisplay + 32))(g_pDisplay, v12);
    v19 = 0;
    v14 = &byte_55FB88;
    v18 = (unsigned __int8)a2;
    v5 = *((_DWORD *)this + 112);
    v6 = *((_DWORD *)this + 113);
    if ( v5 != v6 && *(_DWORD *)(v5 + 24 * (-1431655765 * ((v6 - v5) >> 3) - 1) + 12) >= v4 - 1 )
    {
      v3 = false;
      if ( a2 != 10 )
      {
        MultiEditBox::GetCharPos((MultiEditBox *)v20, this, *((_DWORD *)this + 118));
        v7 = v21;
        CharsInLine = MultiEditBox::GetCharsInLine(this, v21);
        PosChar = MultiEditBox::GetPosChar(this, v7, 1);
        MultiEditBox::GetRawString((int)this, (int)&v14, PosChar - 1, CharsInLine);
        (*(void (__fastcall **)(int, int, char *, float *, _BYTE *))(*(_DWORD *)g_pDisplay + 52))(
          g_pDisplay,
          v12,
          v14,
          &v15,
          v17);
        (*(void (__fastcall **)(int, int, int *, float *, _BYTE *))(*(_DWORD *)g_pDisplay + 52))(
          g_pDisplay,
          v12,
          &v18,
          &v16,
          v17);
        v3 = (float)(v15 + v16) <= (float)(*((_DWORD *)this + 17) - *((_DWORD *)this + 15));
      }
    }
    sub_3BDF80(&v14);
  }
  return v3;
}


//======================================================================
// MultiEditBox::SelectAllText(void)
// address: 0x001C56FC   size: 0x20 (32 bytes)
//======================================================================
int __fastcall MultiEditBox::SelectAllText(MultiEditBox *this)
{
  return MultiEditBox::SetSel(this, 0, -1431655765 * ((*((_DWORD *)this + 113) - *((_DWORD *)this + 112)) >> 3));
}


//======================================================================
// MultiEditBox::enableEdit(bool)
// address: 0x001C5720   size: 0x1C (28 bytes)
//======================================================================
char *__fastcall MultiEditBox::enableEdit(MultiEditBox *this, int a2)
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
// MultiEditBox::getCursorPos(void)
// address: 0x001C5740   size: 0x8 (8 bytes)
//======================================================================
int __fastcall MultiEditBox::getCursorPos(MultiEditBox *this)
{
  return *((_DWORD *)this + 118);
}


//======================================================================
// MultiEditBox::setCursorPos(int)
// address: 0x001C5748   size: 0xE (14 bytes)
//======================================================================
int __fastcall MultiEditBox::setCursorPos(int this, int a2)
{
  *(_DWORD *)(this + 472) = a2 & (~a2 >> 31);
  return this;
}


//======================================================================
// MultiEditBox::getSelBegin(void)
// address: 0x001C5756   size: 0x8 (8 bytes)
//======================================================================
int __fastcall MultiEditBox::getSelBegin(MultiEditBox *this)
{
  return *((_DWORD *)this + 117);
}


//======================================================================
// MultiEditBox::setSelBegin(int)
// address: 0x001C575E   size: 0xE (14 bytes)
//======================================================================
int __fastcall MultiEditBox::setSelBegin(int this, int a2)
{
  *(_DWORD *)(this + 468) = a2 & (~a2 >> 31);
  return this;
}


//======================================================================
// MultiEditBox::getTextBegin(char const*,int)
// address: 0x001C576C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall MultiEditBox::getTextBegin(MultiEditBox *this, const char *a2, int a3)
{
  return 0;
}


//======================================================================
// MultiEditBox::getTextEnd(char const*,int)
// address: 0x001C5770   size: 0x4 (4 bytes)
//======================================================================
int __fastcall MultiEditBox::getTextEnd(MultiEditBox *this, const char *a2, int a3)
{
  return 0;
}


//======================================================================
// MultiEditBox::getTextIndexFromRichCharIndex(int)
// address: 0x001C5774   size: 0x2E (46 bytes)
//======================================================================
int __fastcall MultiEditBox::getTextIndexFromRichCharIndex(MultiEditBox *this, int a2)
{
  int v2; // r4
  int v4; // r5
  int v5; // r0

  v2 = 0;
  v4 = 0;
  while ( v2 < a2 )
  {
    v5 = 24 * v2++;
    v4 += j_strlen((const char *)(*((_DWORD *)this + 112) + v5 + 17));
  }
  return v4;
}


//======================================================================
// MultiEditBox::InsertRichChar(int,stRichChar)
// address: 0x001C5918   size: 0x82 (130 bytes)
//======================================================================
int __fastcall MultiEditBox::InsertRichChar(int *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // r3
  int v9; // r4
  int v11; // r5
  int v12; // r6
  char *v13; // r1
  __int64 varg_r2; // [sp+10h] [bp+10h] BYREF

  if ( a2 < 0 )
    return 0;
  v8 = a1[113];
  v9 = a1[112];
  if ( a2 > -1431655765 * ((v8 - v9) >> 3) )
    return 0;
  v11 = a1[117];
  if ( a2 <= v11 )
    a1[117] = v11 + 1;
  v12 = a1[118];
  if ( a2 <= v12 )
    a1[118] = v12 + 1;
  v13 = (char *)(v9 + 24 * a2);
  if ( v8 == a1[114] || v13 != (char *)v8 )
  {
    std::vector<stRichChar>::_M_insert_aux(a1 + 112, v13, &varg_r2);
  }
  else
  {
    if ( v8 != 0 )
    {
      *(_QWORD *)v8 = varg_r2;
      *(_DWORD *)(v8 + 8) = a5;
      *(_DWORD *)(v8 + 12) = a6;
      *(_DWORD *)(v8 + 16) = a7;
      *(_DWORD *)(v8 + 20) = a8;
    }
    a1[113] += 24;
  }
  return 1;
}


//======================================================================
// MultiEditBox::InputRawChar(unsigned char)
// address: 0x001C59A0   size: 0x15A (346 bytes)
//======================================================================
bool __fastcall MultiEditBox::InputRawChar(MultiEditBox *this, unsigned int a2)
{
  _BOOL4 result; // r0
  int inserted; // r0
  int v6; // r1
  int v7; // r1
  int v8; // r7
  int v9; // r0
  int v10; // r0
  int v11; // [sp+10h] [bp-1Ch] BYREF
  int v12; // [sp+14h] [bp-18h]
  int v13; // [sp+18h] [bp-14h]
  int v14; // [sp+1Ch] [bp-10h]
  int v15; // [sp+20h] [bp-Ch]
  int v16; // [sp+24h] [bp-8h]

  result = MultiEditBox::IsInputEnable(this, a2);
  if ( !result )
    return result;
  if ( a2 == 10 )
  {
    stRichChar::stRichChar((stRichChar *)&v11);
    v13 = 0;
    v12 = 8;
    BYTE1(v15) = 10;
    inserted = MultiEditBox::InsertRichChar((int *)this, *((_DWORD *)this + 118), v11, 8, 0, v14, v15, v16);
LABEL_14:
    v8 = inserted;
    goto LABEL_15;
  }
  v6 = *((_DWORD *)this + 118);
  if ( a2 > 0x80 )
  {
    if ( !MultiEditBox::IsHalfDBCSPre(this, v6) )
    {
      stRichChar::stRichChar((stRichChar *)&v11);
      v9 = *((_DWORD *)this + 125);
      v12 = 9;
      BYTE1(v15) = a2;
      v13 = (int)((double)v9 * 0.5);
      inserted = MultiEditBox::InsertRichChar((int *)this, *((_DWORD *)this + 118), v11, 9, v13, v14, v15, v16);
      goto LABEL_14;
    }
    *(_DWORD *)(*((_DWORD *)this + 112) + 24 * (*((_DWORD *)this + 118) - 1) + 4) = 1;
    *(_BYTE *)(*((_DWORD *)this + 112) + 24 * (*((_DWORD *)this + 118) - 1) + 18) = a2;
    v7 = *((_DWORD *)this + 125);
    goto LABEL_12;
  }
  if ( MultiEditBox::IsHalfDBCSPre(this, v6) )
  {
    *(_DWORD *)(*((_DWORD *)this + 112) + 24 * (*((_DWORD *)this + 118) - 1) + 4) = 1;
    *(_BYTE *)(*((_DWORD *)this + 112) + 24 * (*((_DWORD *)this + 118) - 1) + 18) = a2;
    v7 = *((_DWORD *)this + 125);
LABEL_12:
    v8 = 0;
    *(_DWORD *)(*((_DWORD *)this + 112) + 24 * (*((_DWORD *)this + 118) - 1) + 8) = v7;
    goto LABEL_15;
  }
  v8 = 0;
  if ( a2 > 0x1F && a2 != 127 )
  {
    stRichChar::stRichChar((stRichChar *)&v11);
    v12 = 2;
    v10 = (int)((double)*((int *)this + 125) * 0.5);
    BYTE1(v15) = a2;
    v13 = v10;
    inserted = MultiEditBox::InsertRichChar((int *)this, *((_DWORD *)this + 118), v11, 2, v10, v14, v15, v16);
    goto LABEL_14;
  }
LABEL_15:
  if ( UIObject::hasScriptsEvent(this, 42) )
    UIObject::CallScript(this, 42, (const char *)&unk_3FB8EA);
  return v8;
}


//======================================================================
// MultiEditBox::SetText(char const*)
// address: 0x001C5B10   size: 0x3E (62 bytes)
//======================================================================
MultiEditBox *__fastcall MultiEditBox::SetText(MultiEditBox *this, char *a2)
{
  MultiEditBox *v2; // r4
  int v4; // r5

  v2 = this;
  if ( a2 != nullptr )
  {
    MultiEditBox::Clear(this);
    sub_3BE508((int)v2 + 508, a2);
    v4 = 0;
    *((_DWORD *)v2 + 118) = 0;
    *((_DWORD *)v2 + 117) = 0;
    while ( 1 )
    {
      this = (MultiEditBox *)j_strlen(a2);
      if ( v4 >= (int)this )
        break;
      MultiEditBox::InputRawChar(v2, (unsigned __int8)a2[v4++]);
    }
  }
  return this;
}


//======================================================================
// MultiEditBox::AddText(char const*)
// address: 0x001C5B4E   size: 0x24 (36 bytes)
//======================================================================
signed int __fastcall MultiEditBox::AddText(signed int this, const char *a2)
{
  signed int v2; // r4
  MultiEditBox *v3; // r6

  v2 = 0;
  v3 = (MultiEditBox *)this;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      this = j_strlen(a2);
      if ( v2 >= this )
        break;
      MultiEditBox::InputRawChar(v3, (unsigned __int8)a2[v2++]);
    }
  }
  return this;
}


//======================================================================
// MultiEditBox::Draw(void)
// address: 0x001C5B74   size: 0x318 (792 bytes)
//======================================================================
int __fastcall MultiEditBox::Draw(MultiEditBox *this)
{
  int v2; // r2
  int v3; // r3
  int v4; // r2
  int v5; // r5
  int v6; // r4
  void (__fastcall *v7)(int, int); // r5
  int v8; // r0
  int result; // r0
  int v10; // r5
  void (__fastcall *v11)(int, int, _DWORD, _DWORD, _DWORD); // r6
  int v12; // r0
  int v13; // r5
  int v14; // r6
  int v15; // r0
  int v16; // [sp+34h] [bp-58h]
  int v17; // [sp+38h] [bp-54h]
  int v18; // [sp+38h] [bp-54h]
  int v19; // [sp+3Ch] [bp-50h]
  int v20; // [sp+40h] [bp-4Ch]
  int v21; // [sp+48h] [bp-44h]
  void (__fastcall *v22)(int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+48h] [bp-44h]
  int v23; // [sp+54h] [bp-38h]
  int v24; // [sp+5Ch] [bp-30h]
  int v25; // [sp+60h] [bp-2Ch]
  int v26; // [sp+64h] [bp-28h]
  int v27; // [sp+68h] [bp-24h]
  float v28; // [sp+70h] [bp-1Ch] BYREF
  float v29; // [sp+74h] [bp-18h] BYREF
  float v30[5]; // [sp+78h] [bp-14h] BYREF

  Frame::Draw(this);
  v24 = *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 144) + 32 * *((_DWORD *)this + 108) + 20);
  v30[1] = (float)*((int *)this + 16);
  v30[0] = (float)*((int *)this + 15);
  v30[3] = (float)*((int *)this + 18);
  v2 = *((_DWORD *)this + 117);
  v3 = *((_DWORD *)this + 118);
  v30[2] = (float)*((int *)this + 17);
  if ( v2 < v3 )
  {
    v26 = v2;
    v23 = v3;
  }
  else
  {
    v23 = v3;
    if ( v3 < v2 )
      v23 = v2;
    v26 = v3;
  }
  v27 = -1431655765 * ((*((_DWORD *)this + 113) - *((_DWORD *)this + 112)) >> 3);
  v21 = 0;
  v25 = 0;
  v20 = 0;
  v19 = 0;
  v17 = 0;
  while ( v20 < v27 )
  {
    v4 = *((_DWORD *)this + 112) + 24 * v20;
    if ( *(_DWORD *)(v4 + 12) >= *((_DWORD *)this + 115) )
    {
      (*(void (__fastcall **)(int, _DWORD, int, float *, float *))(*(_DWORD *)g_pDisplay + 52))(
        g_pDisplay,
        *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 144) + 32 * *((_DWORD *)this + 108) + 20),
        v4 + 17,
        &v28,
        &v29);
      if ( v20 == *((_DWORD *)this + 118) )
      {
        v21 = v19;
        v25 = v17;
      }
      v5 = *((_DWORD *)this + 112) + 24 * v20;
      if ( *(_DWORD *)(v5 + 4) == 8
        || (float)((float)v17 + v28) > (float)(*((_DWORD *)this + 17) - *((_DWORD *)this + 15)) )
      {
        v19 += *((_DWORD *)this + 125) + *((_DWORD *)this + 109);
        v17 = 0;
      }
      v16 = *((_DWORD *)this + 16);
      if ( v19 + *((_DWORD *)this + 125) > *((_DWORD *)this + 18) - v16 )
        break;
      v30[0] = (float)(v17 + *((_DWORD *)this + 15));
      v30[1] = (float)(v16 + v19);
      (*(void (__fastcall **)(int, int, _DWORD, int, float *, _DWORD, _DWORD, _DWORD, char *, int, _DWORD, char *))(*(_DWORD *)g_pDisplay + 40))(
        g_pDisplay,
        v24,
        0,
        v5 + 17,
        v30,
        0,
        0,
        0,
        (char *)this + 428,
        1065353216,
        0,
        &byte_50FCB0);
      if ( v20 >= v26 && v20 < v23 )
      {
        v6 = g_pDisplay;
        v7 = *(void (__fastcall **)(int, int))(*(_DWORD *)g_pDisplay + 96);
        v8 = (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 84))(g_pDisplay);
        v7(v6, v8);
        (*(void (__fastcall **)(int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 108))(
          g_pDisplay,
          v17 + *((_DWORD *)this + 15),
          *((_DWORD *)this + 16) + v19,
          (int)v28,
          (int)v29,
          *((_DWORD *)this + 105),
          0,
          0,
          0);
        (*(void (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 100))(g_pDisplay);
      }
      v17 += (int)v28;
    }
    ++v20;
  }
  if ( -1431655765 * ((*((_DWORD *)this + 113) - *((_DWORD *)this + 112)) >> 3) != *((_DWORD *)this + 118) )
  {
    v19 = v21;
    v17 = v25;
  }
  result = MultiEditBox::IsCursorVisible(this);
  if ( result != 0 )
  {
    v10 = g_pDisplay;
    v11 = *(void (__fastcall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 96);
    v12 = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 84))(v10);
    v11(v10, v12, 0, 0, 0);
    v13 = g_pDisplay;
    v18 = v17 + *((_DWORD *)this + 15);
    v22 = *(void (__fastcall **)(int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 108);
    v14 = v19 + *((_DWORD *)this + 16);
    v15 = (*(int (__fastcall **)(int, int))(*(_DWORD *)g_pDisplay + 32))(g_pDisplay, v24);
    v22(v13, v18, v14, 2, v15, *((_DWORD *)this + 106), 0, 0, 0);
    return (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 100))(g_pDisplay);
  }
  return result;
}


//======================================================================
// MultiEditBox::OnChar(Ogre::InputEvent const&,bool)
// address: 0x001C5EA0   size: 0x158 (344 bytes)
//======================================================================
int __fastcall MultiEditBox::OnChar(MultiEditBox *this, const InputEvent *a2, bool a3)
{
  int v5; // r6
  unsigned int v6; // r5
  int v7; // r1
  int v8; // r2
  unsigned __int8 v10[5]; // [sp+17h] [bp-5h] BYREF

  v5 = 1;
  if ( (*((_DWORD *)this + 72) & 0x200000) == 0 )
    return v5;
  v6 = *(unsigned __int8 *)a2->ie_closure;
  if ( UIObject::hasScriptsEvent(this, 1) )
    UIObject::CallScript(this, 1, "iii", v6, *((_DWORD *)this + 118), *((_DWORD *)this + 117));
  if ( v6 == 9 )
  {
    if ( !UIObject::hasScriptsEvent(this, 40) )
      return Frame::OnInputMessage((char **)this, a2);
    UIObject::CallScript(this, 40, (const char *)&unk_3FB8EA);
    return 0;
  }
  if ( v6 > 9 )
  {
    if ( v6 == 13 )
    {
      MultiEditBox::ClearSel(this);
      if ( MultiEditBox::InputRawChar(this, 0xAu) )
        MultiEditBox::CalcCharsLine(this);
      MultiEditBox::SetUpdateDirty((int)this, true);
      v7 = *((_DWORD *)this + 118);
      goto LABEL_16;
    }
    if ( v6 != 27 )
      goto LABEL_21;
    if ( !UIObject::hasScriptsEvent(this, 13) )
      return Frame::OnInputMessage((char **)this, a2);
    UIObject::CallScript(this, 13, (const char *)&unk_3FB8EA);
    return 0;
  }
  if ( v6 == 8 )
  {
    if ( MultiEditBox::ClearSel(this) == 0 )
    {
      MultiEditBox::EraseRichChar(this, *((_DWORD *)this + 118) - 1);
      MultiEditBox::SetUpdateDirty((int)this, true);
      v7 = *((_DWORD *)this + 118);
LABEL_16:
      MultiEditBox::MoveSelBegin(this, v7);
      return 1;
    }
    return Frame::OnInputMessage((char **)this, a2);
  }
LABEL_21:
  if ( v6 <= 0x1F || v6 == 127 )
    return Frame::OnInputMessage((char **)this, a2);
  if ( !UIObject::hasScriptsEvent(this, 3)
    || (v8 = *((_DWORD *)this + 117),
        v10[0] = 1,
        UIObject::CallFunction(this, 3, "ii>b", *((_DWORD *)this + 118), v8, v10),
        v5 = v10[0],
        v10[0] != 0) )
  {
    MultiEditBox::ClearSel(this);
    if ( MultiEditBox::InputRawChar(this, v6) )
      MultiEditBox::CalcCharsLine(this);
    MultiEditBox::SetUpdateDirty((int)this, true);
    *((_DWORD *)this + 117) = *((_DWORD *)this + 118);
    return 0;
  }
  return v5;
}


//======================================================================
// MultiEditBox::OnInputMessage(Ogre::InputEvent const&)
// address: 0x001C6008   size: 0x100 (256 bytes)
//======================================================================
int __fastcall MultiEditBox::OnInputMessage(MultiEditBox *this, const InputEvent *a2)
{
  int v3; // r0
  int v4; // r5
  int v5; // r0
  __int16 v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r0
  int ie_closure_low; // r0
  __int16 ie_closure_high; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r0

  switch ( (unsigned int)a2->ie_proc )
  {
    case 0u:
      v3 = MultiEditBox::OnChar(this, a2, false);
      goto LABEL_22;
    case 1u:
      v3 = MultiEditBox::OnKeyDown(this, a2, false);
      goto LABEL_22;
    case 3u:
      *((_DWORD *)this + 73) |= 2u;
      ie_closure_low = SLOWORD(a2->ie_closure);
      ie_closure_high = HIWORD(a2->ie_closure);
      v12 = *((_DWORD *)this + 15);
      v13 = *((_DWORD *)this + 16);
      if ( ie_closure_low >= v12
        && ie_closure_high >= v13
        && ie_closure_low <= *((_DWORD *)this + 17)
        && ie_closure_high <= *((_DWORD *)this + 18) )
      {
        v14 = MultiEditBox::PosToChar(this, ie_closure_low - v12, ie_closure_high - v13);
        MultiEditBox::MoveCursor(this, v14);
      }
      MultiEditBox::MoveSelBegin(this, *((_DWORD *)this + 118));
      goto LABEL_13;
    case 4u:
      v4 = *((_DWORD *)this + 73) & 2;
      if ( v4 == 0 )
        return v4;
      *((_DWORD *)this + 73) &= ~2u;
LABEL_13:
      v4 = 0;
      break;
    case 5u:
      MultiEditBox::SelectAllText(this);
      goto LABEL_13;
    case 9u:
      v4 = *((_DWORD *)this + 73) & 2;
      if ( v4 != 0 )
      {
        v5 = SLOWORD(a2->ie_closure);
        v6 = HIWORD(a2->ie_closure);
        v7 = *((_DWORD *)this + 15);
        v8 = *((_DWORD *)this + 16);
        v4 = 0;
        if ( v5 >= v7 && v6 >= v8 && v5 <= *((_DWORD *)this + 17) && v6 <= *((_DWORD *)this + 18) )
        {
          v9 = MultiEditBox::PosToChar(this, v5 - v7, v6 - v8);
          MultiEditBox::MoveCursor(this, v9);
        }
      }
      return v4;
    case 0xFu:
      MultiEditBox::CancelSel(this, 1, 0);
      goto LABEL_13;
    default:
      v3 = Frame::OnInputMessage((char **)this, a2);
LABEL_22:
      v4 = v3;
      break;
  }
  return v4;
}


//======================================================================
// MultiEditBox::onGainFocus(void)
// address: 0x001C6108   size: 0x12 (18 bytes)
//======================================================================
int __fastcall MultiEditBox::onGainFocus(MultiEditBox *this)
{
  MultiEditBox::enableIME(this, true);
  return Frame::onGainFocus(this);
}


//======================================================================
// MultiEditBox::onLostFocus(void)
// address: 0x001C611A   size: 0x12 (18 bytes)
//======================================================================
int __fastcall MultiEditBox::onLostFocus(MultiEditBox *this)
{
  MultiEditBox::enableIME(this, false);
  return Frame::onLostFocus(this);
}

