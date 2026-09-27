// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: RichText

//======================================================================
// RichText::GetTypeName(void)
// address: 0x001C796C   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall RichText::GetTypeName(RichText *this)
{
  return "RichText";
}


//======================================================================
// RichText::UpdateRichRect(Ogre::TRect<int> const&)
// address: 0x001C7994   size: 0x40 (64 bytes)
//======================================================================
__int64 __fastcall RichText::UpdateRichRect(int a1, int *a2)
{
  float v3; // r6
  float v4; // r0
  __int64 v6; // [sp+0h] [bp-Ch]

  LODWORD(v6) = a1;
  v3 = (float)a2[1];
  v4 = (float)a2[2];
  *((float *)&v6 + 1) = (float)a2[3];
  *(float *)(a1 + 524) = (float)*a2;
  *(float *)(a1 + 532) = v4;
  *(float *)(a1 + 528) = v3;
  *(_DWORD *)(a1 + 536) = HIDWORD(v6);
  return v6;
}


//======================================================================
// RichText::resizeRect(int,int)
// address: 0x001C79D4   size: 0x18 (24 bytes)
//======================================================================
__int64 __fastcall RichText::resizeRect(RichText *this, int a2, int a3)
{
  int v3; // r3

  v3 = *((_DWORD *)this + 18);
  *((_DWORD *)this + 17) = *((_DWORD *)this + 15) + a2;
  *((_DWORD *)this + 16) = v3 - a3;
  return RichText::UpdateRichRect((int)this, (int *)this + 15);
}


//======================================================================
// RichText::setAbsRect(float,float,float,float)
// address: 0x001C79EC   size: 0x34 (52 bytes)
//======================================================================
__int64 __fastcall RichText::setAbsRect(RichText *this, float a2, float a3, float a4, float a5)
{
  *((_DWORD *)this + 15) = FloatToInt(a2);
  *((_DWORD *)this + 16) = FloatToInt(a3);
  *((_DWORD *)this + 17) = FloatToInt(a4);
  *((_DWORD *)this + 18) = FloatToInt(a5);
  return RichText::UpdateRichRect((int)this, (int *)this + 15);
}


//======================================================================
// RichText::initViewStartPoint(RFPoint &,Ogre::TRect<float> const&)
// address: 0x001C7A20   size: 0x60 (96 bytes)
//======================================================================
float __fastcall RichText::initViewStartPoint(float *a1, float *a2, float *a3)
{
  float v4; // r0
  float v5; // r7
  float v6; // r0
  float v7; // r6
  float v8; // r0
  float v9; // r7
  float v10; // r0
  float result; // r0

  v4 = *a2 + *a3;
  *a2 = v4;
  v5 = v4;
  v6 = a2[1] + a3[3];
  a2[1] = v6;
  v7 = v6;
  v8 = v5 - a1[115];
  *a2 = v8;
  v9 = v8;
  v10 = v7 - a1[116];
  a2[1] = v10;
  *a2 = v9 + a1[131];
  result = v10 + a1[132];
  a2[1] = result;
  return result;
}


//======================================================================
// RichText::CopyMembers(RichText*)
// address: 0x001C7BA4   size: 0x46 (70 bytes)
//======================================================================
LayoutFrame *__fastcall RichText::CopyMembers(LayoutFrame *this, RichText *a2)
{
  LayoutFrame *v2; // r5

  v2 = this;
  if ( a2 != nullptr )
  {
    this = Frame::CopyMembers(this, a2);
    *((_DWORD *)a2 + 104) = *((_DWORD *)v2 + 104);
    *((_DWORD *)a2 + 110) = *((_DWORD *)v2 + 110);
    *((_DWORD *)a2 + 105) = *((_DWORD *)v2 + 105);
    *((_DWORD *)a2 + 106) = *((_DWORD *)v2 + 106);
    *((_DWORD *)a2 + 103) = *((_DWORD *)v2 + 103);
    *((_BYTE *)a2 + 472) = *((_BYTE *)v2 + 472);
    *((_BYTE *)a2 + 540) = *((_BYTE *)v2 + 540);
  }
  return this;
}


//======================================================================
// RichText::RichText(void)
// address: 0x001C7BEC   size: 0x182 (386 bytes)
//======================================================================
// Alternative name is '_ZN8RichTextC2Ev'
void __fastcall RichText::RichText(RichText *this)
{
  int v2; // r0
  int *v3; // r7
  int v4; // r2
  int v5; // r3

  Frame::Frame(this);
  *(_DWORD *)this = &off_4594D0;
  *((_DWORD *)this + 103) = 1;
  *((_DWORD *)this + 111) = (char *)this + 444;
  *((_DWORD *)this + 112) = (char *)this + 444;
  *((_DWORD *)this + 113) = 0;
  *((_DWORD *)this + 114) = 0;
  *((_DWORD *)this + 115) = 0;
  *((_DWORD *)this + 116) = 0;
  *((_BYTE *)this + 472) = 0;
  *((_DWORD *)this + 121) = 0;
  *((_DWORD *)this + 123) = 0;
  *((_DWORD *)this + 124) = 0;
  *((_DWORD *)this + 125) = 0;
  *((_DWORD *)this + 126) = 0;
  *((_DWORD *)this + 127) = 0;
  *((_DWORD *)this + 128) = 0;
  *((_DWORD *)this + 129) = 0;
  *((_DWORD *)this + 130) = 0;
  *((_DWORD *)this + 122) = 8;
  v2 = operator new(0x20u);
  *((_DWORD *)this + 121) = v2;
  v3 = (int *)(v2 + 4 * ((unsigned int)(*((_DWORD *)this + 122) - 1) >> 1));
  *v3 = operator new(0x200u);
  *((_DWORD *)this + 126) = v3;
  v4 = *v3;
  *((_DWORD *)this + 125) = *v3 + 512;
  *((_DWORD *)this + 124) = v4;
  *((_DWORD *)this + 130) = v3;
  v5 = *v3;
  *((_DWORD *)this + 129) = *v3 + 512;
  *((_DWORD *)this + 128) = v5;
  *((_DWORD *)this + 127) = v5;
  *((_DWORD *)this + 123) = v4;
  *((_DWORD *)this + 136) = &byte_55FB88;
  *((_DWORD *)this + 137) = 0;
  *((_DWORD *)this + 138) = 0;
  *((_DWORD *)this + 139) = 0;
  *((_DWORD *)this + 144) = 0;
  *((_DWORD *)this + 145) = 0;
  *((_DWORD *)this + 146) = 0;
  *((_DWORD *)this + 147) = 0;
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 117) = 1065353216;
  *((_DWORD *)this + 110) = 100;
  ++RichText::m_nInstanceCount;
  *((_DWORD *)this + 131) = 0;
  *((_DWORD *)this + 132) = 0;
  *((_DWORD *)this + 133) = 0;
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 115) = 0;
  *((_DWORD *)this + 116) = 0;
  *((_BYTE *)this + 437) = 80;
  *((_BYTE *)this + 438) = -1;
  *((_BYTE *)this + 436) = 80;
  *((_BYTE *)this + 439) = -1;
  *((_BYTE *)this + 430) = 0;
  *((_BYTE *)this + 429) = 0;
  *((_BYTE *)this + 428) = 0;
  *((_BYTE *)this + 431) = -1;
  *((_BYTE *)this + 540) = 0;
  *((_DWORD *)this + 119) = 0;
  *((_DWORD *)this + 120) = 0;
}


//======================================================================
// RichText::CreateClone(void)
// address: 0x001C7D7C   size: 0x1E (30 bytes)
//======================================================================
RichText *__fastcall RichText::CreateClone(RichText *this)
{
  RichText *v2; // r4

  v2 = (RichText *)operator new(0x250u);
  RichText::RichText(v2);
  RichText::CopyMembers(this, v2);
  return v2;
}


//======================================================================
// RichText::AddRenderText(char const*,Ogre::ColorQuad const&)
// address: 0x001C7D9C   size: 0x42 (66 bytes)
//======================================================================
int __fastcall RichText::AddRenderText(__int64 a1, _DWORD *a2)
{
  RichText *v2; // r6
  _DWORD v4[9]; // [sp+0h] [bp-38h] BYREF
  char *v5; // [sp+24h] [bp-14h] BYREF
  void *v6; // [sp+2Ch] [bp-Ch]
  int v7; // [sp+30h] [bp-8h]
  int v8; // [sp+34h] [bp-4h]

  v2 = (RichText *)a1;
  if ( HIDWORD(a1) != 0 )
  {
    v4[1] = 0;
    v4[2] = 0;
    v5 = &byte_55FB88;
    LODWORD(a1) = v4;
    v6 = nullptr;
    v7 = 0;
    v8 = 0;
    RRichTextBuilder::BuildText(a1, v2, a2);
    if ( v6 != nullptr )
      operator delete(v6);
    LODWORD(a1) = sub_3BDF80(&v5);
  }
  return a1;
}


//======================================================================
// RichText::SetPosition(float,float)
// address: 0x001C7DE4   size: 0x4A (74 bytes)
//======================================================================
__int64 __fastcall RichText::SetPosition(RichText *this, float a2, unsigned int a3)
{
  float v4; // r0
  __int64 v6; // [sp+0h] [bp-Ch]

  LODWORD(v6) = a3;
  *((float *)&v6 + 1) = a2 + (float)(*((float *)this + 133) - *((float *)this + 131));
  v4 = *(float *)&a3 + (float)(*((float *)this + 134) - *((float *)this + 132));
  *((float *)this + 131) = a2;
  *((_QWORD *)this + 66) = __PAIR64__(HIDWORD(v6), a3);
  *((float *)this + 134) = v4;
  return v6;
}


//======================================================================
// RichText::RenderFaces(Ogre::DrawRect *,int)
// address: 0x001C7E30   size: 0x102 (258 bytes)
//======================================================================
int __fastcall RichText::RenderFaces(int a1, int a2, int a3)
{
  float v5; // [sp+0h] [bp-54h]
  int v6; // [sp+4h] [bp-50h]
  int v7; // [sp+24h] [bp-30h]
  int v8; // [sp+2Ch] [bp-28h]
  float v9; // [sp+34h] [bp-20h]
  float v10; // [sp+38h] [bp-1Ch]
  float v11; // [sp+3Ch] [bp-18h]
  float v12; // [sp+40h] [bp-14h]
  float v14; // [sp+4Ch] [bp-8h]

  (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 96))(
    g_pDisplay,
    *(_DWORD *)(g_pFrameMgr + 252),
    0,
    0,
    0);
  v8 = 0;
  v7 = a2 + 24;
  while ( 1 )
  {
    v7 += 36;
    if ( v8 >= a3 )
      break;
    v9 = *(float *)a2;
    v11 = *(float *)(a2 + 16);
    v10 = *(float *)(a2 + 4);
    v12 = *(float *)(a2 + 20);
    v14 = *(float *)(a2 + 8) - *(float *)a2;
    v5 = *(float *)(a2 + 12) - v10;
    v6 = *(_DWORD *)(a2 + 32);
    a2 += 36;
    (*(void (__fastcall **)(int, float, float, _DWORD, _DWORD, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
      g_pDisplay,
      COERCE_FLOAT(LODWORD(v9)),
      COERCE_FLOAT(LODWORD(v10)),
      LODWORD(v14),
      LODWORD(v5),
      v6,
      (int)(float)(v11 * (float)*(unsigned int *)(g_pFrameMgr + 264)),
      (int)(float)(v12 * (float)*(unsigned int *)(g_pFrameMgr + 268)),
      (int)(float)((float)(*(float *)(v7 - 36) - v11) * (float)*(unsigned int *)(g_pFrameMgr + 264)),
      (int)(float)((float)(*(float *)(v7 - 32) - v12) * (float)*(unsigned int *)(g_pFrameMgr + 268)),
      0,
      0);
    ++v8;
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 100))(g_pDisplay);
}


//======================================================================
// RichText::RenderPictures(Ogre::DrawRect *,int)
// address: 0x001C7F3C   size: 0xD0 (208 bytes)
//======================================================================
int __fastcall RichText::RenderPictures(int a1, int a2, int a3)
{
  float v4; // r6
  int v5; // r3
  float v7; // [sp+0h] [bp-44h]
  int v8; // [sp+20h] [bp-24h]
  int i; // [sp+24h] [bp-20h]
  float v10; // [sp+28h] [bp-1Ch]
  float v11; // [sp+2Ch] [bp-18h]
  float v12; // [sp+30h] [bp-14h]
  float v14; // [sp+3Ch] [bp-8h]

  (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 96))(
    g_pDisplay,
    *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 300) + 8),
    0,
    0,
    0);
  v8 = a2 + 24;
  for ( i = 0; ; ++i )
  {
    v8 += 36;
    if ( i >= a3 )
      break;
    v11 = *(float *)(a2 + 4);
    v10 = *(float *)a2;
    v12 = *(float *)(a2 + 16);
    v14 = *(float *)(a2 + 8) - *(float *)a2;
    v4 = *(float *)(a2 + 20);
    v7 = *(float *)(a2 + 12) - v11;
    v5 = *(_DWORD *)(a2 + 32);
    a2 += 36;
    (*(void (__fastcall **)(int, float, float, _DWORD, _DWORD, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
      g_pDisplay,
      COERCE_FLOAT(LODWORD(v10)),
      COERCE_FLOAT(LODWORD(v11)),
      LODWORD(v14),
      LODWORD(v7),
      v5,
      (int)v12,
      (int)v4,
      (int)(float)(*(float *)(v8 - 36) - v12),
      (int)(float)(*(float *)(v8 - 32) - v4),
      0,
      0);
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 100))(g_pDisplay);
}


//======================================================================
// RichText::setTwoFaceInterval(float,float)
// address: 0x001C8014   size: 0xE (14 bytes)
//======================================================================
int __fastcall RichText::setTwoFaceInterval(int this, float a2, float a3)
{
  *(float *)(this + 476) = a2;
  *(float *)(this + 480) = a3;
  return this;
}


//======================================================================
// RichText::getLinkTextRect(char const*)
// address: 0x001C8022   size: 0xBA (186 bytes)
//======================================================================
char *__fastcall RichText::getLinkTextRect(RichText *this, const char *a2)
{
  char *v2; // r6
  int v4; // r3
  _DWORD *v5; // r7
  int v6; // r5
  float v7; // r7
  float v8; // r6
  _DWORD *v10; // r4
  float *v11; // [sp+0h] [bp-1Ch]
  _DWORD *v13; // [sp+8h] [bp-14h]
  char *v14; // [sp+Ch] [bp-10h]
  float v15; // [sp+10h] [bp-Ch] BYREF
  float v16; // [sp+14h] [bp-8h]

  v2 = *((char **)this + 111);
  v14 = (char *)this + 444;
  while ( v2 != v14 )
  {
    v4 = *((_DWORD *)v2 + 2);
    v5 = *(_DWORD **)(v4 + 16);
    v11 = (float *)v4;
    v13 = (_DWORD *)(v4 + 16);
    while ( v5 != v13 )
    {
      v6 = v5[2];
      if ( *(_DWORD *)(v6 + 4) == 0 && *(_BYTE *)(v6 + 36) != 0 && j_strcmp(a2, *(const char **)(v6 + 32)) == 0 )
      {
        v15 = *(float *)(v6 + 8);
        v16 = *(float *)(v6 + 12);
        RichText::initViewStartPoint((float *)this, &v15, v11);
        v7 = v15;
        *((float *)this + 144) = v15;
        v8 = v16;
        *((float *)this + 145) = v7 + (float)(*(float *)(v6 + 16) - *(float *)(v6 + 8));
        *((float *)this + 146) = v8;
        *((float *)this + 147) = v8 + (float)(*(float *)(v6 + 20) - *(float *)(v6 + 12));
        return (char *)this + 576;
      }
      v5 = (_DWORD *)*v5;
    }
    v2 = *(char **)v2;
  }
  v10 = (_DWORD *)((char *)this + 576);
  tagRect_ToLua::empty(v10);
  return (char *)v10;
}


//======================================================================
// RichText::OnClickOneRichObject(Ogre::InputEvent const&,RichTextObject const*)
// address: 0x001C80DC   size: 0xC6 (198 bytes)
//======================================================================
int __fastcall RichText::OnClickOneRichObject(RichText *this, const InputEvent *a2, const RichTextObject *a3)
{
  int v3; // r5
  XtInputCallbackProc ie_proc; // r1
  int v6; // r3
  int v7; // r2
  int v8; // r3

  v3 = *((_DWORD *)a3 + 1);
  if ( v3 == 0 )
  {
    if ( *((_BYTE *)a3 + 36) != 0 )
    {
      ie_proc = a2->ie_proc;
      v6 = *((_DWORD *)a3 + 8);
      v7 = *((_DWORD *)a3 + 10);
      if ( ie_proc == (XtInputCallbackProc)((char *)&dword_0 + 3) || ie_proc == (XtInputCallbackProc)&byte_6 )
        UIObject::CallScript(this, 4, "sss", v6, v7);
      return v3;
    }
    goto LABEL_14;
  }
  if ( v3 == 1 )
  {
    v3 = 0;
    UIObject::CallScript(this, 4, "i", *((_DWORD *)a3 + 10));
    return v3;
  }
  if ( v3 != 2 )
  {
LABEL_14:
    if ( a2->ie_proc == (XtInputCallbackProc)((char *)&dword_0 + 3) )
    {
      UIObject::CallScript(this, 4, "ss", "LeftButton", &unk_3FB8EA);
    }
    else if ( a2->ie_proc == (XtInputCallbackProc)&byte_6 )
    {
      UIObject::CallScript(this, 4, "ss", "RightButton", &unk_3FB8EA);
    }
    return *((unsigned __int8 *)this + 58);
  }
  v8 = *((_DWORD *)a3 + 11);
  v3 = 0;
  if ( a2->ie_proc == (XtInputCallbackProc)((char *)&dword_0 + 3) )
  {
    UIObject::CallScript(this, 4, "sss", v8, "LeftButton");
  }
  else if ( a2->ie_proc == (XtInputCallbackProc)&byte_6 )
  {
    UIObject::CallScript(this, 4, "sss", v8, "RightButton");
  }
  return v3;
}


//======================================================================
// RichText::OnClick(Ogre::InputEvent const&)
// address: 0x001C81E0   size: 0x11C (284 bytes)
//======================================================================
int __fastcall RichText::OnClick(RichText *this, const InputEvent *a2)
{
  char *v3; // r5
  float v4; // r0
  int v5; // r7
  char *Name; // r0
  _DWORD *i; // r6
  float v9; // r5
  int v10; // r5
  int ie_closure_high; // [sp+0h] [bp-1Ch]
  int v12; // [sp+0h] [bp-1Ch]
  float v13; // [sp+4h] [bp-18h]
  float *v14; // [sp+4h] [bp-18h]
  char *v15; // [sp+8h] [bp-14h]
  int ie_closure_low; // [sp+Ch] [bp-10h]

  ie_closure_low = SLOWORD(a2->ie_closure);
  ie_closure_high = SHIWORD(a2->ie_closure);
  v3 = *((char **)this + 111);
  v15 = (char *)this + 444;
  while ( v3 != v15 )
  {
    v13 = (float)*((int *)this + 16);
    v5 = *((_DWORD *)v3 + 2);
    v4 = (float)ie_closure_high + *((float *)this + 116);
    if ( (float)(v13 + *(float *)(v5 + 4)) < v4 && (float)(v13 + *(float *)(v5 + 12)) >= v4 )
    {
      Name = (char *)UIObject::GetName(this);
      if ( isPointInFrame(ie_closure_low, ie_closure_high, Name) != 0 )
      {
        for ( i = *(_DWORD **)(v5 + 16); i != (_DWORD *)(v5 + 16); i = (_DWORD *)*i )
        {
          v14 = (float *)i[2];
          v9 = (float)*((int *)this + 15);
          v12 = (int)(float)(v9 + v14[2]);
          v10 = (int)(float)(v9 + v14[4]);
          if ( *((_BYTE *)this + 540) != 0 )
          {
            v12 = (int)(float)((float)v12 + *(float *)v5);
            v10 = (int)(float)((float)v10 + *(float *)v5);
          }
          if ( v12 < ie_closure_low && v10 >= ie_closure_low )
          {
            if ( !UIObject::hasScriptsEvent(this, 4) )
              return *((unsigned __int8 *)this + 58);
            return RichText::OnClickOneRichObject(this, a2, (const RichTextObject *)v14);
          }
        }
        return *((unsigned __int8 *)this + 58);
      }
    }
    v3 = *(char **)v3;
  }
  return *((unsigned __int8 *)this + 58);
}


//======================================================================
// RichText::isMouseInLink(int,int)
// address: 0x001C82FC   size: 0xCE (206 bytes)
//======================================================================
int __fastcall RichText::isMouseInLink(RichText *this, int a2, int a3)
{
  char *v3; // r7
  int v5; // r5
  float v6; // r0
  int v7; // r5
  _DWORD *v9; // r4
  int v10; // r3
  float v11; // [sp+0h] [bp-1Ch]
  float v12; // [sp+0h] [bp-1Ch]
  char *v13; // [sp+8h] [bp-14h]
  _DWORD *v14; // [sp+Ch] [bp-10h]

  v3 = *((char **)this + 111);
  v13 = (char *)this + 444;
  while ( v3 != v13 )
  {
    v5 = *((_DWORD *)v3 + 2);
    v11 = (float)*((int *)this + 16);
    v6 = (float)a3 + *((float *)this + 116);
    if ( (float)(v11 + *(float *)(v5 + 4)) < v6 && (float)(v11 + *(float *)(v5 + 12)) >= v6 )
    {
      v9 = *(_DWORD **)(v5 + 16);
      v14 = (_DWORD *)(v5 + 16);
      while ( v9 != v14 )
      {
        v12 = (float)*((int *)this + 15);
        v7 = v9[2];
        if ( (float)(v12 + *(float *)(v7 + 8)) < (float)a2 && (float)(v12 + *(float *)(v7 + 16)) >= (float)a2 )
        {
          v10 = *(_DWORD *)(v7 + 4);
          if ( v10 != 0 )
          {
            if ( (unsigned int)(v10 - 1) <= 1 )
              return 1;
          }
          else if ( *(_BYTE *)(v7 + 36) != 0 )
          {
            return 1;
          }
        }
        v9 = (_DWORD *)*v9;
      }
    }
    v3 = *(char **)v3;
  }
  return 0;
}


//======================================================================
// RichText::OnMouseMoveInLink(Ogre::InputEvent const&)
// address: 0x001C83CC   size: 0x18E (398 bytes)
//======================================================================
int __fastcall RichText::OnMouseMoveInLink(RichText *this, const InputEvent *a2)
{
  __int16 ie_closure_high; // r1
  _DWORD *v3; // r2
  int v5; // r7
  float v6; // r6
  float v7; // r5
  char *Name; // r0
  int v9; // r1
  int v10; // r5
  _DWORD *i; // r6
  int result; // r0
  const char *v13; // r1
  FrameManager *v14; // r0
  int v15; // r3
  int v16; // [sp+8h] [bp-24h]
  float v17; // [sp+Ch] [bp-20h]
  _DWORD **v18; // [sp+10h] [bp-1Ch]
  int v19; // [sp+14h] [bp-18h]
  __int16 ie_closure; // [sp+1Ch] [bp-10h]
  __int16 v21; // [sp+20h] [bp-Ch]

  ie_closure = (__int16)a2->ie_closure;
  ie_closure_high = HIWORD(a2->ie_closure);
  *((_DWORD *)this + 108) = 0;
  v3 = *((_DWORD **)this + 111);
  v21 = ie_closure_high;
  while ( 1 )
  {
    v18 = (_DWORD **)v3;
    if ( v3 == (_DWORD *)((char *)this + 444) )
      break;
    v5 = v3[2];
    v6 = (float)*((int *)this + 16);
    v7 = (float)v21 + *((float *)this + 116);
    if ( (float)(v6 + *(float *)(v5 + 4)) < v7 && (float)(v6 + *(float *)(v5 + 12)) >= v7 )
    {
      Name = (char *)UIObject::GetName(this);
      if ( isPointInFrame(Name, v9) != 0 )
      {
        for ( i = *(_DWORD **)(v5 + 16); i != (_DWORD *)(v5 + 16); i = (_DWORD *)*i )
        {
          v10 = i[2];
          v19 = (int)(float)((float)*((int *)this + 15) + *(float *)(v10 + 8));
          v16 = (int)(float)((float)*((int *)this + 15) + *(float *)(v10 + 16));
          if ( *((_BYTE *)this + 540) != 0 )
          {
            v19 = (int)(float)((float)v19 + *(float *)v5);
            v16 = (int)(float)((float)v16 + *(float *)v5);
          }
          v17 = (float)ie_closure + *((float *)this + 115);
          if ( (float)v19 < v17 && (float)v16 >= v17 )
          {
            v15 = *(_DWORD *)(v10 + 4);
            if ( v15 != 0 )
            {
              if ( v15 == 1 )
              {
                *((_DWORD *)this + 108) = v10;
                return UIObject::CallScript(this, 10, "is", *(_DWORD *)(v10 + 40), "RTOT_FACE_ONENTER");
              }
            }
            else if ( *(_BYTE *)(v10 + 36) != 0 )
            {
              *((_DWORD *)this + 108) = v10;
              result = GetCurrentCursorLevel();
              if ( result == 2 )
                return result;
              v13 = "link";
              v14 = (FrameManager *)g_pFrameMgr;
              return FrameManager::setCursor(v14, v13);
            }
          }
        }
      }
    }
    v3 = *v18;
  }
  result = GetCurrentCursorLevel();
  if ( result == 1 )
  {
    v13 = "normal";
    v14 = (FrameManager *)g_pFrameMgr;
    return FrameManager::setCursor(v14, v13);
  }
  return result;
}


//======================================================================
// RichText::getFaceWidth(void)
// address: 0x001C8574   size: 0xE (14 bytes)
//======================================================================
int __fastcall RichText::getFaceWidth(RichText *this)
{
  return *(_DWORD *)(g_pFrameMgr + 256);
}


//======================================================================
// RichText::getFaceHeight(void)
// address: 0x001C8588   size: 0xE (14 bytes)
//======================================================================
int __fastcall RichText::getFaceHeight(RichText *this)
{
  return *(_DWORD *)(g_pFrameMgr + 260);
}


//======================================================================
// RichText::SetFaceTexture(char const*)
// address: 0x001C859C   size: 0x68 (104 bytes)
//======================================================================
int __fastcall RichText::SetFaceTexture(int this, char *a2)
{
  int v2; // r5
  int v4; // r4
  int v5; // [sp+Ch] [bp-8h]

  v2 = this;
  if ( a2 != nullptr && *a2 != 0 )
  {
    v4 = this + 544;
    this = sub_3BDD5C(this + 544, a2);
    if ( this != 0 )
    {
      sub_3BE508(v4, a2);
      v5 = *(_DWORD *)(v2 + 548);
      *(_DWORD *)(v2 + 548) = (*(int (__fastcall **)(int, char *, int, int, int, int))(*(_DWORD *)g_pDisplay + 72))(
                                g_pDisplay,
                                a2,
                                2,
                                v2 + 552,
                                v2 + 556,
                                1);
      return (*(int (__fastcall **)(int, int))(*(_DWORD *)g_pDisplay + 92))(g_pDisplay, v5);
    }
  }
  return this;
}


//======================================================================
// RichText::SetFaceTexUV(int,int,int,int)
// address: 0x001C8608   size: 0x1E (30 bytes)
//======================================================================
_DWORD *__fastcall RichText::SetFaceTexUV(_DWORD *this, int a2, int a3, int a4, int a5)
{
  *(this + 140) = a2;
  *(this + 141) = a3;
  *(this + 142) = a4;
  *(this + 143) = a5;
  return this;
}


//======================================================================
// RichText::SetFaceTexRelUV(float,float)
// address: 0x001C8626   size: 0x4A (74 bytes)
//======================================================================
int __fastcall RichText::SetFaceTexRelUV(RichText *this, float a2, float a3)
{
  int result; // r0

  *((_DWORD *)this + 140) = 0;
  *((_DWORD *)this + 142) = FloatToInt(a2 * (float)*((int *)this + 138));
  result = FloatToInt(a3 * (float)*((int *)this + 139));
  *((_DWORD *)this + 143) = result;
  return result;
}


//======================================================================
// RichText::resizeRichWidth(int)
// address: 0x001C8670   size: 0x12 (18 bytes)
//======================================================================
__int64 __fastcall RichText::resizeRichWidth(RichText *this, int a2)
{
  *((_DWORD *)this + 17) = *((_DWORD *)this + 15) + a2;
  return RichText::UpdateRichRect((int)this, (int *)this + 15);
}


//======================================================================
// RichText::resizeRichHeight(int)
// address: 0x001C8682   size: 0x12 (18 bytes)
//======================================================================
__int64 __fastcall RichText::resizeRichHeight(RichText *this, int a2)
{
  *((_DWORD *)this + 16) = *((_DWORD *)this + 18) - a2;
  return RichText::UpdateRichRect((int)this, (int *)this + 15);
}


//======================================================================
// RichText::SetAutoExtend(bool)
// address: 0x001C8694   size: 0x8 (8 bytes)
//======================================================================
int __fastcall RichText::SetAutoExtend(int this, bool a2)
{
  *(_BYTE *)(this + 472) = a2;
  return this;
}


//======================================================================
// RichText::SetLinkTextColor(int,int,int)
// address: 0x001C869C   size: 0x1E (30 bytes)
//======================================================================
_BYTE *__fastcall RichText::SetLinkTextColor(_BYTE *this, char a2, char a3, char a4)
{
  *(this + 436) = a4;
  *(this + 437) = a3;
  *(this + 438) = a2;
  *(this + 439) = -1;
  return this;
}


//======================================================================
// RichText::SetShadowColor(int,int,int)
// address: 0x001C86BA   size: 0x1E (30 bytes)
//======================================================================
_BYTE *__fastcall RichText::SetShadowColor(_BYTE *this, char a2, char a3, char a4)
{
  *(this + 428) = a4;
  *(this + 429) = a3;
  *(this + 430) = a2;
  *(this + 431) = -1;
  return this;
}


//======================================================================
// RichText::SetFontType(int)
// address: 0x001C86D8   size: 0x8 (8 bytes)
//======================================================================
int __fastcall RichText::SetFontType(int this, int a2)
{
  *(_DWORD *)(this + 412) = a2;
  return this;
}


//======================================================================
// RichText::SetDispPos(float)
// address: 0x001C86E0   size: 0x8 (8 bytes)
//======================================================================
int __fastcall RichText::SetDispPos(int this, float a2)
{
  *(float *)(this + 464) = a2;
  return this;
}


//======================================================================
// RichText::IncrDispPos(float)
// address: 0x001C86E8   size: 0x12 (18 bytes)
//======================================================================
float __fastcall RichText::IncrDispPos(RichText *this, float a2)
{
  float result; // r0

  result = *((float *)this + 116) + a2;
  *((float *)this + 116) = result;
  return result;
}


//======================================================================
// RichText::GetDispPos(void)
// address: 0x001C86FA   size: 0x8 (8 bytes)
//======================================================================
int __fastcall RichText::GetDispPos(RichText *this)
{
  return *((_DWORD *)this + 116);
}


//======================================================================
// RichText::SetDispPosX(float)
// address: 0x001C8702   size: 0x8 (8 bytes)
//======================================================================
int __fastcall RichText::SetDispPosX(int this, float a2)
{
  *(float *)(this + 460) = a2;
  return this;
}


//======================================================================
// RichText::GetDispPosX(void)
// address: 0x001C870A   size: 0x8 (8 bytes)
//======================================================================
int __fastcall RichText::GetDispPosX(RichText *this)
{
  return *((_DWORD *)this + 115);
}


//======================================================================
// RichText::GetStartDispPos(void)
// address: 0x001C8712   size: 0x2E (46 bytes)
//======================================================================
int __fastcall RichText::GetStartDispPos(RichText *this)
{
  _DWORD *v1; // r2
  int v2; // r2
  float v3; // r4

  v1 = *((_DWORD **)this + 111);
  if ( v1 == (_DWORD *)((char *)this + 444) )
  {
    v3 = *((float *)this + 116);
  }
  else
  {
    v2 = v1[2];
    v3 = *((float *)this + 116);
    if ( *(float *)(v2 + 4) < v3 )
      v3 = *(float *)(v2 + 4);
  }
  return LODWORD(v3);
}


//======================================================================
// RichText::GetEndDispPos(void)
// address: 0x001C8740   size: 0x4A (74 bytes)
//======================================================================
int __fastcall RichText::GetEndDispPos(RichText *this)
{
  float v1; // r4

  if ( *((RichText **)this + 111) == (RichText *)((char *)this + 444) )
  {
    v1 = *((float *)this + 116);
  }
  else
  {
    v1 = *((float *)this + 116);
    if ( (float)(*(float *)(*(_DWORD *)(*((_DWORD *)this + 112) + 8) + 12)
               - (float)(*((float *)this + 134) - *((float *)this + 132))) > v1 )
      v1 = *(float *)(*(_DWORD *)(*((_DWORD *)this + 112) + 8) + 12)
         - (float)(*((float *)this + 134) - *((float *)this + 132));
  }
  return LODWORD(v1);
}


//======================================================================
// RichText::ScrollUp(void)
// address: 0x001C878A   size: 0x54 (84 bytes)
//======================================================================
__int64 __fastcall RichText::ScrollUp(__int64 this)
{
  float v1; // r6
  int v2; // r4
  _DWORD *v3; // r5
  float v4; // r6
  float v5; // r7
  __int64 v7; // [sp+0h] [bp-Ch]

  v7 = this;
  v1 = *(float *)(this + 464);
  v2 = this;
  if ( v1 > COERCE_FLOAT(RichText::GetStartDispPos((RichText *)this)) )
  {
    v3 = *(_DWORD **)(v2 + 444);
    v4 = 0.0;
    HIDWORD(v7) = v2 + 444;
    while ( v3 != (_DWORD *)HIDWORD(v7) )
    {
      v5 = *(float *)(v3[2] + 4);
      if ( v5 >= *(float *)(v2 + 464) )
      {
        *(float *)(v2 + 464) = v4;
        return v7;
      }
      v3 = (_DWORD *)*v3;
      v4 = v5;
    }
  }
  return v7;
}


//======================================================================
// RichText::ScrollDown(void)
// address: 0x001C87DE   size: 0x6C (108 bytes)
//======================================================================
__int64 __fastcall RichText::ScrollDown(__int64 this)
{
  float v1; // r6
  int v2; // r4
  _DWORD *v3; // r5
  _BOOL4 v4; // r7
  int v5; // r3
  float v6; // r0
  __int64 v8; // [sp+0h] [bp-Ch]

  v8 = this;
  v1 = *(float *)(this + 464);
  v2 = this;
  if ( v1 < COERCE_FLOAT(RichText::GetEndDispPos((RichText *)this)) )
  {
    v3 = *(_DWORD **)(v2 + 444);
    v4 = false;
    HIDWORD(v8) = v2 + 444;
    while ( v3 != (_DWORD *)HIDWORD(v8) )
    {
      v5 = v3[2];
      v6 = *(float *)(v5 + 4);
      LODWORD(v8) = *(_DWORD *)(v5 + 12);
      if ( v4 )
      {
        *(float *)(v2 + 464) = v6;
        return v8;
      }
      if ( v6 <= *(float *)(v2 + 464) )
        v4 = *(float *)&v8 > *(float *)(v2 + 464);
      v3 = (_DWORD *)*v3;
    }
  }
  return v8;
}


//======================================================================
// RichText::ScrollFirst(void)
// address: 0x001C884A   size: 0x24 (36 bytes)
//======================================================================
int __fastcall RichText::ScrollFirst(RichText *this)
{
  float v1; // r6
  int result; // r0

  v1 = *((float *)this + 116);
  result = v1 == COERCE_FLOAT(RichText::GetStartDispPos(this));
  if ( result == 0 )
  {
    result = RichText::GetStartDispPos(this);
    *((_DWORD *)this + 116) = result;
  }
  return result;
}


//======================================================================
// RichText::ScrollEnd(void)
// address: 0x001C886E   size: 0x24 (36 bytes)
//======================================================================
int __fastcall RichText::ScrollEnd(RichText *this)
{
  float v1; // r6
  int result; // r0

  v1 = *((float *)this + 116);
  result = v1 == COERCE_FLOAT(RichText::GetEndDispPos(this));
  if ( result == 0 )
  {
    result = RichText::GetEndDispPos(this);
    *((_DWORD *)this + 116) = result;
  }
  return result;
}


//======================================================================
// RichText::GetTextLines(void)
// address: 0x001C8892   size: 0x1C (28 bytes)
//======================================================================
int __fastcall RichText::GetTextLines(RichText *this)
{
  char *v1; // r3
  char *v2; // r2
  int result; // r0

  v1 = *((char **)this + 111);
  v2 = (char *)this + 444;
  result = 0;
  while ( v1 != v2 )
  {
    v1 = *(char **)v1;
    ++result;
  }
  return result;
}


//======================================================================
// RichText::getLineRealWidth(int)
// address: 0x001C88AE   size: 0x46 (70 bytes)
//======================================================================
int __fastcall RichText::getLineRealWidth(RichText *this, int a2)
{
  char *v2; // r3
  int v3; // r2
  char *v4; // r0
  int v5; // r6
  int v6; // r4
  _DWORD *v7; // r5
  _DWORD *v8; // r6
  int v9; // r3

  v2 = *((char **)this + 111);
  v3 = 0;
  v4 = (char *)this + 444;
  while ( 1 )
  {
    if ( v2 == v4 )
      return 0;
    if ( v3 == a2 )
      break;
    v2 = *(char **)v2;
    ++v3;
  }
  v5 = *((_DWORD *)v2 + 2);
  v6 = 0;
  v7 = *(_DWORD **)(v5 + 16);
  v8 = (_DWORD *)(v5 + 16);
  while ( v7 != v8 )
  {
    v9 = v7[2];
    if ( v6 < (int)(float)(*(float *)(v9 + 16) + *(float *)(v9 + 8)) )
      v6 = (int)(float)(*(float *)(v9 + 16) + *(float *)(v9 + 8));
    v7 = (_DWORD *)*v7;
  }
  return v6;
}


//======================================================================
// RichText::getLineWidth(int)
// address: 0x001C88F4   size: 0x46 (70 bytes)
//======================================================================
int __fastcall RichText::getLineWidth(RichText *this, int a2)
{
  char *v2; // r3
  int v3; // r2
  char *v4; // r0
  float *v5; // r3
  float v6; // r0

  v2 = *((char **)this + 111);
  v3 = 0;
  v4 = (char *)this + 444;
  while ( 1 )
  {
    if ( v2 == v4 )
      return 0;
    if ( v3 == a2 )
      break;
    v2 = *(char **)v2;
    ++v3;
  }
  v5 = *((float **)v2 + 2);
  if ( (float)(*v5 - v5[2]) >= 0.0 )
    return (int)(float)(*v5 - v5[2]);
  else
    LODWORD(v6) = COERCE_INT(*v5 - v5[2]) + 0x80000000;
  return (int)v6;
}


//======================================================================
// RichText::GetLineWidth(int)
// address: 0x001C893A   size: 0x34 (52 bytes)
//======================================================================
int __fastcall RichText::GetLineWidth(RichText *this, int a2)
{
  _DWORD *v2; // r3
  int v3; // r2

  v2 = *((_DWORD **)this + 111);
  v3 = 0;
  while ( v2 != (_DWORD *)((char *)this + 444) )
  {
    if ( ++v3 == a2 )
      return (int)(float)(*(float *)(v2[2] + 8) - *(float *)v2[2]);
    v2 = (_DWORD *)*v2;
  }
  return 0;
}


//======================================================================
// RichText::GetLineHeight(int)
// address: 0x001C896E   size: 0x34 (52 bytes)
//======================================================================
int __fastcall RichText::GetLineHeight(RichText *this, int a2)
{
  _DWORD *v2; // r3
  int v3; // r2

  v2 = *((_DWORD **)this + 111);
  v3 = 0;
  while ( v2 != (_DWORD *)((char *)this + 444) )
  {
    if ( ++v3 == a2 )
      return (int)(float)(*(float *)(v2[2] + 12) - *(float *)(v2[2] + 4));
    v2 = (_DWORD *)*v2;
  }
  return 0;
}


//======================================================================
// RichText::GetTotalHeight(void)
// address: 0x001C89A4   size: 0x74 (116 bytes)
//======================================================================
int __fastcall RichText::GetTotalHeight(RichText *this)
{
  _DWORD *v1; // r2
  float v2; // r4
  float v3; // r0

  v1 = *((_DWORD **)this + 111);
  if ( v1 == (_DWORD *)((char *)this + 444) )
    return 0;
  v2 = (float)(*(float *)(*(_DWORD *)(*((_DWORD *)this + 112) + 8) + 12) - *(float *)(v1[2] + 4))
     + (float)((float)*((int *)this + 104) * (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr));
  if ( v2 >= 0.0 )
    v3 = (float)(*(float *)(*(_DWORD *)(*((_DWORD *)this + 112) + 8) + 12) - *(float *)(v1[2] + 4))
       + (float)((float)*((int *)this + 104) * (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr));
  else
    LODWORD(v3) = LODWORD(v2) + 0x80000000;
  return (int)j_ceil(v3);
}


//======================================================================
// RichText::GetViewLines(void)
// address: 0x001C8A1C   size: 0x5E (94 bytes)
//======================================================================
int __fastcall RichText::GetViewLines(RichText *this)
{
  char *v1; // r4
  int v3; // r6
  float v4; // r0
  float *v6; // [sp+0h] [bp-Ch]
  char *v7; // [sp+4h] [bp-8h]

  v1 = *((char **)this + 111);
  v7 = (char *)this + 444;
  v3 = 0;
  v6 = (float *)((char *)this + 524);
  while ( v1 != v7 )
  {
    v4 = *(float *)(*((_DWORD *)v1 + 2) + 4) - *((float *)this + 116);
    if ( v4 <= (float)(v6[3] - v6[1]) )
      v3 += v4 >= 0.0;
    v1 = *(char **)v1;
  }
  return v3;
}


//======================================================================
// RichText::GetAccurateViewLines(void)
// address: 0x001C8A7A   size: 0x68 (104 bytes)
//======================================================================
int __fastcall RichText::GetAccurateViewLines(RichText *this)
{
  _DWORD *v1; // r4
  int v2; // r6
  int v4; // [sp+4h] [bp-10h]

  v1 = *((_DWORD **)this + 111);
  v2 = 0;
  while ( v1 != (_DWORD *)((char *)this + 444) )
  {
    v4 = v1[2];
    if ( *(float *)(v4 + 4) >= *((float *)this + 116) )
    {
      if ( *(float *)(v4 + 12) > (float)(*((float *)this + 116)
                                       + (float)(*((float *)this + 134) - *((float *)this + 132))) )
        return v2;
      ++v2;
    }
    v1 = (_DWORD *)*v1;
  }
  return v2;
}


//======================================================================
// RichText::GetTextExtentWidth(char const*)
// address: 0x001C8AE4   size: 0x3E (62 bytes)
//======================================================================
int __fastcall RichText::GetTextExtentWidth(RichText *this, const char *a2)
{
  int UIFontByIndex; // r0
  float v5; // [sp+8h] [bp-Ch] BYREF
  _BYTE v6[8]; // [sp+Ch] [bp-8h] BYREF

  UIFontByIndex = FrameManager::getUIFontByIndex((FrameManager *)g_pFrameMgr, *((_DWORD *)this + 105));
  (*(void (__fastcall **)(int, _DWORD, const char *, float *, _BYTE *))(*(_DWORD *)g_pDisplay + 52))(
    g_pDisplay,
    *(_DWORD *)(UIFontByIndex + 20),
    a2,
    &v5,
    v6);
  return FloatToInt(v5);
}


//======================================================================
// RichText::GetTextExtentHeight(char const*)
// address: 0x001C8B2C   size: 0x3E (62 bytes)
//======================================================================
int __fastcall RichText::GetTextExtentHeight(RichText *this, const char *a2)
{
  int UIFontByIndex; // r0
  _BYTE v5[4]; // [sp+8h] [bp-Ch] BYREF
  float v6[2]; // [sp+Ch] [bp-8h] BYREF

  UIFontByIndex = FrameManager::getUIFontByIndex((FrameManager *)g_pFrameMgr, *((_DWORD *)this + 105));
  (*(void (__fastcall **)(int, _DWORD, const char *, _BYTE *, float *))(*(_DWORD *)g_pDisplay + 52))(
    g_pDisplay,
    *(_DWORD *)(UIFontByIndex + 20),
    a2,
    v5,
    v6);
  return FloatToInt(v6[0]);
}


//======================================================================
// RichText::setCursorNormal(void)
// address: 0x001C8B74   size: 0x1C (28 bytes)
//======================================================================
int __fastcall RichText::setCursorNormal(RichText *this)
{
  int result; // r0

  result = GetCurrentCursorLevel();
  if ( result == 1 )
    return FrameManager::setCursor((FrameManager *)g_pFrameMgr, "normal");
  return result;
}


//======================================================================
// RichText::calculateNormalTextColor(Ogre::ColorQuad &,RichTextText const*,unsigned int)
// address: 0x001C8B98   size: 0x72 (114 bytes)
//======================================================================
unsigned int __fastcall RichText::calculateNormalTextColor(unsigned int result, _BYTE *a2, int a3, unsigned int a4)
{
  unsigned int v5; // r5
  unsigned int v6; // r1
  signed int v7; // r0

  v5 = result;
  if ( *(_BYTE *)(a3 + 36) != 0 && *(_DWORD *)(result + 432) == a3 )
  {
    *a2 = -62;
    a2[1] = -127;
    a2[2] = 39;
    a2[3] = -1;
  }
  else
  {
    if ( *(_BYTE *)(a3 + 28) != 0 )
    {
      v6 = a4 % 0x7D0;
      if ( a4 % 0x7D0 > 0x3E7 )
        v6 = 1999 - v6;
      v7 = 350 * v6 / 0x3E8;
      if ( v7 > 255 )
        LOBYTE(v7) = -1;
      a2[3] = v7;
    }
    result = (unsigned int)(float)((float)(unsigned __int8)a2[3] * *(float *)(v5 + 468));
    a2[3] = result;
  }
  return result;
}


//======================================================================
// RichText::calculateNormalTextXViewport(RFPoint &,RFPoint &,float &)
// address: 0x001C8C14   size: 0x8E (142 bytes)
//======================================================================
float __fastcall RichText::calculateNormalTextXViewport(int a1, float *a2, float *a3, float *a4)
{
  float v4; // r7
  float v5; // r5
  float v6; // r6
  float result; // r0
  float v8; // [sp+4h] [bp-10h]

  v8 = *a2;
  v4 = *(float *)(a1 + 524);
  v5 = *a2 + *a4;
  if ( *a2 < v4 && (float)(*a2 + *a4) > v4 )
  {
    *a3 = v4 - v8;
    *a4 = *a4 - (float)(v4 - v8);
    *a2 = *(float *)(a1 + 524);
  }
  v6 = *(float *)(a1 + 532);
  LODWORD(result) = *a2 < v6;
  if ( *a2 < v6 )
  {
    LODWORD(result) = v5 > v6;
    if ( v5 > v6 )
    {
      result = *a4 - (float)(v5 - v6);
      *a4 = result;
    }
  }
  return result;
}


//======================================================================
// RichText::calculateNormalTextYViewport(RFPoint &,RFPoint &,float &)
// address: 0x001C8CA2   size: 0x8E (142 bytes)
//======================================================================
float __fastcall RichText::calculateNormalTextYViewport(int a1, int a2, int a3, float *a4)
{
  float v4; // r7
  float v5; // r5
  float v6; // r6
  float result; // r0
  float v8; // [sp+4h] [bp-10h]

  v8 = *(float *)(a2 + 4);
  v4 = *(float *)(a1 + 528);
  v5 = v8 + *a4;
  if ( v8 < v4 && (float)(v8 + *a4) > v4 )
  {
    *(float *)(a3 + 4) = v4 - v8;
    *a4 = *a4 - (float)(v4 - v8);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 528);
  }
  v6 = *(float *)(a1 + 536);
  LODWORD(result) = *(float *)(a2 + 4) < v6;
  if ( *(float *)(a2 + 4) < v6 )
  {
    LODWORD(result) = v5 > v6;
    if ( v5 > v6 )
    {
      result = *a4 - (float)(v5 - v6);
      *a4 = result;
    }
  }
  return result;
}


//======================================================================
// RichText::FinishDrawNormalText(RichTextText const*,RFPoint const&,Ogre::TRect<float> const&,unsigned int)
// address: 0x001C8D30   size: 0x154 (340 bytes)
//======================================================================
int __fastcall RichText::FinishDrawNormalText(unsigned int a1, int a2, _DWORD *a3, int a4, unsigned int a5)
{
  float v8; // r0
  int UIFontByIndex; // r3
  int result; // r0
  int v11; // r0
  int v12; // [sp+20h] [bp-3Ch]
  void (__fastcall *v13)(int); // [sp+28h] [bp-34h]
  float v15; // [sp+34h] [bp-28h]
  float v16; // [sp+38h] [bp-24h]
  int v17; // [sp+3Ch] [bp-20h]
  float v18[6]; // [sp+44h] [bp-18h] BYREF

  v18[0] = *(float *)(a2 + 24);
  RichText::calculateNormalTextColor(a1, v18, a2, a5);
  v17 = *(_DWORD *)(a1 + 288) << 28 >> 31;
  if ( (*(_DWORD *)(a1 + 288) & 8) != 0 )
  {
    v12 = *(_DWORD *)g_pDisplay;
    v13 = *(void (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 140);
    v15 = (float)*(int *)(a1 + 84);
    v16 = (float)*(int *)(a1 + 88);
    v8 = (float)*(int *)(a1 + 76);
    v18[2] = (float)*(int *)(a1 + 80);
    v18[1] = v8;
    v18[3] = v15;
    v18[4] = v16;
    v13(g_pDisplay);
  }
  if ( *(_BYTE *)(a2 + 36) != 0 )
  {
    UIFontByIndex = FrameManager::getUIFontByIndex((FrameManager *)g_pFrameMgr, *(_DWORD *)(a1 + 424));
    result = (*(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD, int, unsigned int, unsigned int, _DWORD, float *, int, _DWORD, unsigned int, int))(*(_DWORD *)g_pDisplay + 40))(
               g_pDisplay,
               *(_DWORD *)(UIFontByIndex + 20),
               *(_DWORD *)(a1 + 412),
               *(_DWORD *)(a2 + 32),
               a4,
               *a3 + 0x80000000,
               a3[1] + 0x80000000,
               0,
               v18,
               1065353216,
               0,
               a1 + 428,
               v12);
  }
  else
  {
    v11 = FrameManager::getUIFontByIndex((FrameManager *)g_pFrameMgr, *(_DWORD *)(a1 + 420));
    result = (*(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD, int, unsigned int, unsigned int, _DWORD, float *, _DWORD, _DWORD, unsigned int, int))(*(_DWORD *)g_pDisplay + 40))(
               g_pDisplay,
               *(_DWORD *)(v11 + 20),
               *(_DWORD *)(a1 + 412),
               *(_DWORD *)(a2 + 32),
               a4,
               *a3 + 0x80000000,
               a3[1] + 0x80000000,
               0,
               v18,
               *(float *)(v11 + 24) * *(float *)(a1 + 224),
               0,
               a1 + 428,
               v12);
  }
  if ( v17 != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 152))(g_pDisplay);
  return result;
}


//======================================================================
// RichText::DrawNormalText(RichTextText const*,Ogre::TRect<float> const&,unsigned int)
// address: 0x001C8E8C   size: 0xC2 (194 bytes)
//======================================================================
int __fastcall RichText::DrawNormalText(float *a1, float *a2, float *a3, unsigned int a4)
{
  int result; // r0
  float v7; // [sp+Ch] [bp-38h]
  float v9; // [sp+18h] [bp-2Ch] BYREF
  float v10; // [sp+1Ch] [bp-28h] BYREF
  float v11; // [sp+20h] [bp-24h] BYREF
  float v12; // [sp+24h] [bp-20h]
  float v13[2]; // [sp+28h] [bp-1Ch] BYREF
  float v14[5]; // [sp+30h] [bp-14h] BYREF

  v11 = a2[2];
  v12 = a2[3];
  RichText::initViewStartPoint(a1, &v11, a3);
  result = v11 < a1[133];
  if ( v11 < a1[133] )
  {
    v7 = a2[4] - a2[2];
    result = (float)(v11 + v7) > a1[131];
    if ( (float)(v11 + v7) > a1[131] )
    {
      v9 = a2[5] - a2[3];
      v10 = v7;
      v13[0] = 0.0;
      v13[1] = 0.0;
      RichText::calculateNormalTextXViewport((int)a1, &v11, v13, &v10);
      RichText::calculateNormalTextYViewport((int)a1, (int)&v11, (int)v13, &v9);
      v14[3] = (float)(v12 + v9) + 1.0;
      v14[0] = v11;
      v14[1] = v12;
      v14[2] = v11 + v10;
      return RichText::FinishDrawNormalText((unsigned int)a1, (int)a2, v13, (int)v14, a4);
    }
  }
  return result;
}


//======================================================================
// RichText::calculateOneFaceXViewportAndUVRect(RFPoint &,RFPoint &,RFSize &,RFSize &)
// address: 0x001C8F50   size: 0x106 (262 bytes)
//======================================================================
float __fastcall RichText::calculateOneFaceXViewportAndUVRect(int a1, float *a2, float *a3, float *a4, float *a5)
{
  float v5; // r6
  float v6; // r7
  float v7; // r6
  float result; // r0
  float v9; // [sp+8h] [bp-14h]

  v9 = *a2;
  v5 = *(float *)(a1 + 524);
  v6 = *a2 + (float)((float)*(int *)(g_pFrameMgr + 256) * (float)(*(float *)(g_pFrameMgr + 16) * *(float *)g_pFrameMgr));
  if ( *a2 < v5
    && (float)(*a2
             + (float)((float)*(int *)(g_pFrameMgr + 256) * (float)(*(float *)(g_pFrameMgr + 16) * *(float *)g_pFrameMgr))) > v5 )
  {
    *a4 = *a4 - (float)(v5 - v9);
    *a3 = *a3 + (float)((float)(v5 - v9) * *(float *)(g_pFrameMgr + 288));
    *a5 = *a5 - (float)((float)(v5 - v9) * *(float *)(g_pFrameMgr + 288));
    *a2 = *(float *)(a1 + 524);
  }
  v7 = *(float *)(a1 + 532);
  LODWORD(result) = *a2 < v7;
  if ( *a2 < *(float *)(a1 + 532) )
  {
    LODWORD(result) = v6 > v7;
    if ( v6 > v7 )
    {
      *a4 = *a4 - (float)(v6 - v7);
      result = *a5 - (float)((float)(v6 - v7) * *(float *)(g_pFrameMgr + 288));
      *a5 = result;
    }
  }
  return result;
}


//======================================================================
// RichText::calculateOneFaceYViewportAndUVRect(RFPoint &,RFPoint &,RFSize &,RFSize &)
// address: 0x001C905C   size: 0x100 (256 bytes)
//======================================================================
float __fastcall RichText::calculateOneFaceYViewportAndUVRect(int a1, int a2, int a3, int a4, int a5)
{
  float v5; // r6
  int v6; // r4
  float v7; // r7
  float v8; // r5
  float v9; // r6
  float result; // r0

  v5 = *(float *)(a2 + 4);
  v6 = g_pFrameMgr + 252;
  v7 = *(float *)(a1 + 528);
  v8 = v5 + (float)((float)*(int *)(g_pFrameMgr + 260) * (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr));
  if ( v5 < v7
    && (float)(v5
             + (float)((float)*(int *)(g_pFrameMgr + 260) * (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr))) > v7 )
  {
    *(float *)(a4 + 4) = *(float *)(a4 + 4) - (float)(v7 - v5);
    *(float *)(a3 + 4) = *(float *)(a3 + 4) + (float)((float)(v7 - v5) * *(float *)(v6 + 40));
    *(float *)(a5 + 4) = *(float *)(a5 + 4) - (float)((float)(v7 - v5) * *(float *)(v6 + 40));
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 528);
  }
  v9 = *(float *)(a1 + 536);
  LODWORD(result) = *(float *)(a2 + 4) < v9;
  if ( *(float *)(a2 + 4) < *(float *)(a1 + 536) )
  {
    LODWORD(result) = v8 > v9;
    if ( v8 > v9 )
    {
      *(float *)(a4 + 4) = *(float *)(a4 + 4) - (float)(v8 - v9);
      result = *(float *)(a5 + 4) - (float)((float)(v8 - v9) * *(float *)(v6 + 40));
      *(float *)(a5 + 4) = result;
    }
  }
  return result;
}


//======================================================================
// RichText::initOneFaceUVStartPoint(RFPoint &,RichTextFace *,unsigned int)
// address: 0x001C9160   size: 0x5A (90 bytes)
//======================================================================
__int64 __fastcall RichText::initOneFaceUVStartPoint(__int64 a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r4
  int v4; // r5
  __int64 v6; // [sp+0h] [bp-Ch]

  v6 = a1;
  v3 = a2[7];
  v4 = a2[6];
  if ( v3 != 1 )
    v4 += (unsigned int)(a3 - a2[9]) / a2[8] % v3;
  *((float *)&v6 + 1) = (float)(v4 / *(_DWORD *)(g_pFrameMgr + 280)) * *(float *)(g_pFrameMgr + 276);
  *(float *)HIDWORD(a1) = (float)(v4 % *(_DWORD *)(g_pFrameMgr + 280)) * *(float *)(g_pFrameMgr + 272);
  *(_DWORD *)(HIDWORD(a1) + 4) = HIDWORD(v6);
  return v6;
}


//======================================================================
// RichText::DrawFaceHighlightBackTex(RFPoint const&,RFSize const&,int &,Ogre::DrawRect *)
// address: 0x001C91C0   size: 0xD6 (214 bytes)
//======================================================================
float __fastcall RichText::DrawFaceHighlightBackTex(int *a1, float *a2, float *a3, _DWORD *a4, int a5)
{
  int v6; // r4
  float v7; // r7
  float v8; // r0
  float v9; // r0
  float result; // r0
  float v11; // [sp+4h] [bp-10h]
  float v12; // [sp+4h] [bp-10h]
  float v13; // [sp+4h] [bp-10h]
  float v14; // [sp+8h] [bp-Ch]
  float v15; // [sp+Ch] [bp-8h]
  float v16; // [sp+Ch] [bp-8h]

  v6 = a5 + 36 * *a4;
  v11 = *a2;
  v7 = a2[1];
  v15 = *a2 + *a3;
  v8 = v7 + a3[1];
  *(float *)(v6 + 4) = v7;
  *(float *)(v6 + 12) = v8;
  *(float *)v6 = v11;
  *(float *)(v6 + 8) = v15;
  v12 = (float)*(unsigned int *)(g_pFrameMgr + 264);
  v14 = (float)a1[140] / v12;
  v9 = (float)*(unsigned int *)(g_pFrameMgr + 268);
  v16 = (float)a1[141] / v9;
  v13 = v14 + (float)((float)a1[142] / v12);
  result = v16 + (float)((float)a1[143] / v9);
  *(float *)(v6 + 16) = v14;
  *(float *)(v6 + 28) = result;
  *(float *)(v6 + 20) = v16;
  *(float *)(v6 + 24) = v13;
  *(_BYTE *)(v6 + 34) = -1;
  *(_BYTE *)(v6 + 33) = -1;
  *(_BYTE *)(v6 + 32) = -1;
  *(_BYTE *)(v6 + 35) = -1;
  ++*a4;
  return result;
}


//======================================================================
// RichText::FinishDrawFace(RichTextFace *,RFPoint const&,RFPoint const&,RFSize const&,RFSize const&,int &,Ogre::DrawRect *)
// address: 0x001C929C   size: 0xE8 (232 bytes)
//======================================================================
float __fastcall RichText::FinishDrawFace(int a1, int a2, float *a3, float *a4, float *a5, float *a6, int *a7, int a8)
{
  int v10; // r5
  float v11; // r0
  float result; // r0
  int v13; // r2
  float v14; // [sp+Ch] [bp-18h]
  float v15; // [sp+Ch] [bp-18h]
  float v16; // [sp+10h] [bp-14h]
  float v17; // [sp+10h] [bp-14h]
  float v18; // [sp+14h] [bp-10h]

  v10 = a8 + 36 * *a7;
  v14 = *a3;
  v18 = *a3 + *a5;
  v16 = a3[1];
  *(float *)(v10 + 12) = v16 + a5[1];
  *(float *)v10 = v14;
  *(float *)(v10 + 4) = v16;
  *(float *)(v10 + 8) = v18;
  v15 = *a4;
  v11 = *a4 + *a6;
  v17 = a4[1];
  *(float *)(v10 + 28) = v17 + a6[1];
  *(float *)(v10 + 16) = v15;
  *(float *)(v10 + 20) = v17;
  *(float *)(v10 + 24) = v11;
  LODWORD(result) = (unsigned int)(float)(*(float *)(a1 + 468) * 255.0);
  *(_BYTE *)(v10 + 34) = -1;
  *(_BYTE *)(v10 + 33) = -1;
  *(_BYTE *)(v10 + 32) = -1;
  *(_BYTE *)(v10 + 35) = LOBYTE(result);
  v13 = *a7 + 1;
  *a7 = v13;
  if ( v13 == 200 )
  {
    result = COERCE_FLOAT(RichText::RenderFaces(a1, a8, 200));
    *a7 = 0;
  }
  if ( *(_DWORD *)(a1 + 432) == a2 && *(_DWORD *)(a1 + 548) != 0 )
    result = RichText::DrawFaceHighlightBackTex((int *)a1, a3, a5, a7, a8);
  if ( *a7 == 200 )
  {
    result = COERCE_FLOAT(RichText::RenderFaces(a1, a8, 200));
    *a7 = 0;
  }
  return result;
}


//======================================================================
// RichText::DrawFace(RichTextFace *,Ogre::TRect<float> const&,unsigned int,int &,Ogre::DrawRect *)
// address: 0x001C9388   size: 0x106 (262 bytes)
//======================================================================
float __fastcall RichText::DrawFace(float *a1, float *a2, float *a3, int a4, int *a5, int a6)
{
  float v7; // r1
  float v8; // r3
  float result; // r0
  float v11; // r6
  float v12; // r0
  int v13; // r1
  int v14; // r5
  float v16[2]; // [sp+30h] [bp-24h] BYREF
  float v17[2]; // [sp+38h] [bp-1Ch] BYREF
  float v18; // [sp+40h] [bp-14h] BYREF
  float v19; // [sp+44h] [bp-10h]
  int v20; // [sp+48h] [bp-Ch] BYREF
  int v21; // [sp+4Ch] [bp-8h]

  v17[0] = 0.0;
  v17[1] = 0.0;
  v18 = 0.0;
  v19 = 0.0;
  v20 = 0;
  v7 = a2[2];
  v21 = 0;
  v8 = a2[3];
  v16[0] = v7;
  v16[1] = v8;
  RichText::initViewStartPoint(a1, v16, a3);
  LODWORD(result) = v16[0] < a1[133];
  if ( v16[0] < a1[133] )
  {
    LODWORD(result) = (float)(v16[0]
                            + (float)((float)*(int *)(g_pFrameMgr + 256)
                                    * (float)(*(float *)(g_pFrameMgr + 16) * *(float *)g_pFrameMgr))) > a1[131];
    if ( (float)(v16[0]
               + (float)((float)*(int *)(g_pFrameMgr + 256)
                       * (float)(*(float *)(g_pFrameMgr + 16) * *(float *)g_pFrameMgr))) > a1[131] )
    {
      RichText::initOneFaceUVStartPoint(__SPAIR64__(v17, (unsigned int)a1), a2, a4);
      v11 = *(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr;
      v12 = (float)*(int *)(g_pFrameMgr + 256);
      v13 = *(_DWORD *)(g_pFrameMgr + 276);
      v14 = *(_DWORD *)(g_pFrameMgr + 272);
      v19 = (float)*(int *)(g_pFrameMgr + 260) * v11;
      v18 = v12 * v11;
      v21 = v13;
      v20 = v14;
      RichText::calculateOneFaceXViewportAndUVRect((int)a1, v16, v17, &v18, (float *)&v20);
      RichText::calculateOneFaceYViewportAndUVRect((int)a1, (int)v16, (int)v17, (int)&v18, (int)&v20);
      return RichText::FinishDrawFace((int)a1, (int)a2, v16, v17, &v18, (float *)&v20, a5, a6);
    }
  }
  return result;
}


//======================================================================
// RichText::initOnePictureUVStartPoint(RFPoint &,PictureData *,RichTextPicture *,unsigned int)
// address: 0x001C9494   size: 0x3E (62 bytes)
//======================================================================
float __fastcall RichText::initOnePictureUVStartPoint(int a1, float *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  unsigned int v5; // r6
  unsigned int v6; // r6
  float result; // r0

  v5 = a4[7];
  if ( v5 == 1 )
    v6 = 0;
  else
    v6 = (unsigned int)(a5 - a4[9]) / a4[8] % v5;
  result = (float)(int)(v6 * a3[6] + a3[4]);
  a2[1] = (float)(int)a3[5];
  *a2 = result;
  return result;
}


//======================================================================
// RichText::calculateOnePictureXViewportAndUVRect(RFPoint &,RFPoint &,RFSize &,RFSize &,PictureData const*,RPictureCodeMap *)
// address: 0x001C94D4   size: 0xD6 (214 bytes)
//======================================================================
float __fastcall RichText::calculateOnePictureXViewportAndUVRect(
        int a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        int a6)
{
  float v6; // r6
  float v7; // r7
  float v8; // r4
  float v9; // r5
  float result; // r0

  v6 = *a2;
  v7 = *(float *)(a1 + 524);
  v8 = *a2 + (float)((float)*(int *)(a6 + 24) * (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr));
  if ( *a2 < v7
    && (float)(*a2 + (float)((float)*(int *)(a6 + 24) * (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr))) > v7 )
  {
    *a4 = *a4 - (float)(v7 - v6);
    *a3 = *a3 + (float)(v7 - v6);
    *a5 = v7 - v6;
    *a2 = *(float *)(a1 + 524);
  }
  v9 = *(float *)(a1 + 532);
  LODWORD(result) = *a2 < v9;
  if ( *a2 < v9 )
  {
    LODWORD(result) = v8 > v9;
    if ( v8 > v9 )
    {
      *a4 = *a4 - (float)(v8 - v9);
      result = *a5 - (float)(v8 - v9);
      *a5 = result;
    }
  }
  return result;
}


//======================================================================
// RichText::calculateOnePictureYViewportAndUVRect(RFPoint &,RFPoint &,RFSize &,RFSize &,PictureData const*,RPictureCodeMap *)
// address: 0x001C95B0   size: 0xE0 (224 bytes)
//======================================================================
float __fastcall RichText::calculateOnePictureYViewportAndUVRect(int a1, int a2, int a3, int a4, int a5, int a6)
{
  float v6; // r6
  float v7; // r7
  float v8; // r4
  float v9; // r5
  float result; // r0

  v6 = *(float *)(a2 + 4);
  v7 = *(float *)(a1 + 528);
  v8 = v6 + (float)((float)*(int *)(a6 + 28) * (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr));
  if ( v6 < v7
    && (float)(v6 + (float)((float)*(int *)(a6 + 28) * (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr))) > v7 )
  {
    *(float *)(a4 + 4) = *(float *)(a4 + 4) - (float)(v7 - v6);
    *(float *)(a3 + 4) = *(float *)(a3 + 4) + (float)(v7 - v6);
    *(float *)(a5 + 4) = *(float *)(a5 + 4) - (float)(v7 - v6);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 528);
  }
  v9 = *(float *)(a1 + 536);
  LODWORD(result) = *(float *)(a2 + 4) < v9;
  if ( *(float *)(a2 + 4) < v9 )
  {
    LODWORD(result) = v8 > v9;
    if ( v8 > v9 )
    {
      *(float *)(a4 + 4) = *(float *)(a4 + 4) - (float)(v8 - v9);
      result = *(float *)(a5 + 4) - (float)(v8 - v9);
      *(float *)(a5 + 4) = result;
    }
  }
  return result;
}


//======================================================================
// RichText::FinishDrawPicture(RFPoint const&,RFPoint const&,RFSize const&,RFSize const&,int &,Ogre::DrawRect *)
// address: 0x001C9694   size: 0xA2 (162 bytes)
//======================================================================
int __fastcall RichText::FinishDrawPicture(int a1, float *a2, float *a3, float *a4, float *a5, int *a6, int a7)
{
  int v7; // r7
  float v8; // r5
  float v9; // r0
  float v10; // r6
  float v11; // r5
  float v12; // r0
  int result; // r0
  int v14; // r2
  float v15; // [sp+0h] [bp-14h]
  float v17; // [sp+Ch] [bp-8h]

  v7 = a7 + 36 * *a6;
  v15 = *a2;
  v8 = a2[1];
  v17 = *a2 + *a4;
  v9 = v8 + a4[1];
  *(float *)(v7 + 4) = v8;
  *(float *)v7 = v15;
  *(float *)(v7 + 8) = v17;
  *(float *)(v7 + 12) = v9;
  v10 = *a3;
  v11 = a3[1];
  v12 = v11 + a5[1];
  *(float *)(v7 + 24) = *a3 + *a5;
  *(float *)(v7 + 16) = v10;
  *(float *)(v7 + 20) = v11;
  *(float *)(v7 + 28) = v12;
  result = (unsigned int)(float)(*(float *)(a1 + 468) * 255.0);
  *(_BYTE *)(v7 + 34) = -1;
  *(_BYTE *)(v7 + 33) = -1;
  *(_BYTE *)(v7 + 32) = -1;
  *(_BYTE *)(v7 + 35) = result;
  v14 = *a6 + 1;
  *a6 = v14;
  if ( v14 == 200 )
  {
    result = RichText::RenderPictures(a1, a7, 200);
    *a6 = 0;
  }
  return result;
}


//======================================================================
// RichText::DrawPicture(RichTextPicture *,Ogre::TRect<float> const&,unsigned int,int &,Ogre::DrawRect *)
// address: 0x001C973C   size: 0x134 (308 bytes)
//======================================================================
int __fastcall RichText::DrawPicture(float *a1, float *a2, float *a3, int a4, int *a5, int a6)
{
  char *PictureData; // r0
  float v9; // r3
  char *v10; // r7
  int result; // r0
  float v12; // r5
  float v13; // r0
  float v14; // [sp+14h] [bp-48h]
  float v16; // [sp+28h] [bp-34h]
  float v17; // [sp+2Ch] [bp-30h]
  float v18; // [sp+30h] [bp-2Ch]
  float v20; // [sp+38h] [bp-24h] BYREF
  int v21; // [sp+3Ch] [bp-20h]
  float v22[2]; // [sp+40h] [bp-1Ch] BYREF
  float v23; // [sp+48h] [bp-14h] BYREF
  float v24; // [sp+4Ch] [bp-10h]
  float v25; // [sp+50h] [bp-Ch] BYREF
  float v26; // [sp+54h] [bp-8h]

  v20 = 0.0;
  v21 = 0;
  v22[0] = 0.0;
  v22[1] = 0.0;
  v23 = 0.0;
  v24 = 0.0;
  v25 = 0.0;
  v26 = 0.0;
  PictureData = RPictureCodeMap::GetPictureData(*(RPictureCodeMap **)(g_pFrameMgr + 300), *((_DWORD *)a2 + 10));
  v9 = a2[2];
  v10 = PictureData;
  v21 = *((_DWORD *)a2 + 3);
  v20 = v9;
  RichText::initViewStartPoint(a1, &v20, a3);
  v17 = *(float *)(g_pFrameMgr + 20);
  v18 = *(float *)g_pFrameMgr;
  result = v20 < a1[133];
  if ( v20 < a1[133] )
  {
    v16 = (float)*((int *)v10 + 6);
    result = (float)(v20 + (float)(v16 * (float)(v17 * v18))) > a1[131];
    if ( (float)(v20 + (float)(v16 * (float)(v17 * v18))) > a1[131] )
    {
      RichText::initOnePictureUVStartPoint((int)a1, v22, v10, a2, a4);
      v12 = (float)*((int *)v10 + 6);
      v14 = *(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr;
      v13 = (float)*((int *)v10 + 7);
      v23 = v12 * v14;
      v24 = v13 * v14;
      v25 = v12;
      v26 = v13;
      RichText::calculateOnePictureXViewportAndUVRect((int)a1, &v20, v22, &v23, &v25, (int)v10);
      RichText::calculateOnePictureYViewportAndUVRect((int)a1, (int)&v20, (int)v22, (int)&v23, (int)&v25, (int)v10);
      return RichText::FinishDrawPicture((int)a1, &v20, v22, &v23, &v25, a5, a6);
    }
  }
  return result;
}


//======================================================================
// RichText::Draw(void)
// address: 0x001C9874   size: 0xEE (238 bytes)
//======================================================================
float __fastcall RichText::Draw(RichText *this, __suseconds_t a2)
{
  RichText *v2; // r4
  float result; // r0
  _DWORD *v4; // r6
  int v5; // r5
  _DWORD *i; // r7
  int v7; // r1
  int v8; // r3
  unsigned int v9; // [sp+Ch] [bp-3858h]
  int v10; // [sp+18h] [bp-384Ch] BYREF
  int v11; // [sp+1Ch] [bp-3848h] BYREF
  _BYTE v12[7200]; // [sp+20h] [bp-3844h] BYREF
  _BYTE v13[7204]; // [sp+1C40h] [bp-1C24h] BYREF

  v2 = this;
  if ( *((_BYTE *)this + 336) != 0 )
    this = (RichText *)Frame::DrawBackDrop(this);
  v10 = 0;
  v11 = 0;
  result = COERCE_FLOAT(Ogre::Timer::getSystemTick(this, a2));
  v4 = *((_DWORD **)v2 + 111);
  v9 = LODWORD(result);
  while ( v4 != (_DWORD *)((char *)v2 + 444) )
  {
    v5 = v4[2];
    LODWORD(result) = *(float *)(v5 + 4) < *((float *)v2 + 116);
    if ( *(float *)(v5 + 4) >= *((float *)v2 + 116) )
    {
      LODWORD(result) = *(float *)(v5 + 12) > (float)(*((float *)v2 + 116)
                                                    + (float)(*((float *)v2 + 134) - *((float *)v2 + 132)));
      if ( *(float *)(v5 + 12) > (float)(*((float *)v2 + 116) + (float)(*((float *)v2 + 134) - *((float *)v2 + 132))) )
        break;
      for ( i = *(_DWORD **)(v5 + 16); i != (_DWORD *)(v5 + 16); i = (_DWORD *)*i )
      {
        v7 = i[2];
        v8 = *(_DWORD *)(v7 + 4);
        if ( v8 != 0 )
        {
          if ( v8 == 1 )
          {
            result = RichText::DrawFace((float *)v2, (float *)v7, (float *)v5, v9, &v10, (int)v12);
          }
          else if ( v8 == 2 )
          {
            result = COERCE_FLOAT(RichText::DrawPicture((float *)v2, (float *)v7, (float *)v5, v9, &v11, (int)v13));
          }
        }
        else
        {
          result = COERCE_FLOAT(RichText::DrawNormalText((float *)v2, (float *)v7, (float *)v5, v9));
        }
      }
    }
    v4 = (_DWORD *)*v4;
  }
  if ( v10 != 0 )
    result = COERCE_FLOAT(RichText::RenderFaces((int)v2, (int)v12, v10));
  if ( v11 != 0 )
    return COERCE_FLOAT(RichText::RenderPictures((int)v2, (int)v13, v11));
  return result;
}


//======================================================================
// RichText::Clear(void)
// address: 0x001C9A26   size: 0x54 (84 bytes)
//======================================================================
_DWORD *__fastcall RichText::Clear(RichText *this)
{
  int *i; // r4
  void *v3; // r6
  _DWORD *result; // r0

  for ( i = *((int **)this + 111); i != (int *)((char *)this + 444); i = (int *)*i )
  {
    v3 = (void *)i[2];
    if ( v3 != nullptr )
    {
      RichTextLine::~RichTextLine((RichTextLine *)i[2]);
      operator delete(v3);
    }
  }
  result = std::_List_base<RichTextLine *>::_M_clear((_DWORD **)i);
  *((_DWORD *)this + 111) = i;
  i[1] = (int)i;
  *((_DWORD *)this + 113) = 0;
  *((_DWORD *)this + 114) = 0;
  *((_DWORD *)this + 115) = 0;
  *((_DWORD *)this + 116) = 0;
  return result;
}


//======================================================================
// RichText::Resize(void)
// address: 0x001C9A7A   size: 0x82 (130 bytes)
//======================================================================
unsigned int __fastcall RichText::Resize(RichText *this)
{
  unsigned int i; // r5
  unsigned int result; // r0
  int v4; // r3
  __int64 v5; // r0
  unsigned int v6; // r2
  int v7; // r0
  _DWORD *v8; // [sp+0h] [bp-24h] BYREF
  int v9; // [sp+10h] [bp-14h] BYREF
  int v10; // [sp+14h] [bp-10h]
  int v11; // [sp+18h] [bp-Ch]
  int *v12; // [sp+1Ch] [bp-8h]

  RichText::Clear(this);
  for ( i = 0; ; ++i )
  {
    result = std::deque<tagTextHistory>::size((_DWORD *)this + 121);
    if ( i >= result )
      break;
    std::_Deque_iterator<tagTextHistory,tagTextHistory&,tagTextHistory*>::_Deque_iterator(&v9, (_DWORD *)this + 123);
    v4 = i + ((v9 - v10) >> 3);
    if ( (unsigned int)v4 > 0x3F )
    {
      v6 = v4 >> 6;
      if ( v4 <= 0 )
        v6 = ~((unsigned int)~v4 >> 6);
      v12 += v6;
      v7 = *v12 + 512;
      v10 = *v12;
      v11 = v7;
      v9 = v10 + 8 * (v4 - (v6 << 6));
    }
    else
    {
      v9 += 8 * i;
    }
    std::_Deque_iterator<tagTextHistory,tagTextHistory&,tagTextHistory*>::_Deque_iterator(&v8, &v9);
    LODWORD(v5) = this;
    HIDWORD(v5) = *v8;
    RichText::AddRenderText(v5, v8 + 1);
  }
  return result;
}


//======================================================================
// RichText::ReplacePartialText(char const*,char const*)
// address: 0x001C9AFC   size: 0x88 (136 bytes)
//======================================================================
unsigned int __fastcall RichText::ReplacePartialText(RichText *this, char *a2, char *a3)
{
  int v5; // r6
  int v6; // r5
  int v7; // r1
  size_t v10; // [sp+8h] [bp-2Ch]
  int v11; // [sp+10h] [bp-24h] BYREF
  int v12; // [sp+14h] [bp-20h]
  int v13; // [sp+18h] [bp-1Ch]
  int *v14; // [sp+1Ch] [bp-18h]
  _DWORD v15[5]; // [sp+20h] [bp-14h] BYREF

  v10 = j_strlen(a2);
  j_strlen(a3);
  std::_Deque_iterator<tagTextHistory,tagTextHistory&,tagTextHistory*>::_Deque_iterator(&v11, (_DWORD *)this + 123);
  std::_Deque_iterator<tagTextHistory,tagTextHistory&,tagTextHistory*>::_Deque_iterator(v15, (_DWORD *)this + 127);
  while ( 1 )
  {
    v5 = v11;
    if ( v11 == v15[0] )
      break;
    while ( 1 )
    {
      v6 = sub_3BD93C(v5, a2);
      if ( v6 == -1 )
        break;
      sub_3BEFA4(v5, v6, v10, a3);
    }
    v11 += 8;
    if ( v11 == v13 )
    {
      v7 = *++v14 + 512;
      v12 = *v14;
      v13 = v7;
      v11 = v12;
    }
  }
  return RichText::Resize(this);
}


//======================================================================
// RichText::resizeText(int,int)
// address: 0x001C9B84   size: 0x20 (32 bytes)
//======================================================================
unsigned int __fastcall RichText::resizeText(RichText *this, int a2, int a3)
{
  int v4; // r3

  v4 = *((_DWORD *)this + 18);
  *((_DWORD *)this + 17) = *((_DWORD *)this + 15) + a2;
  *((_DWORD *)this + 16) = v4 - a3;
  RichText::UpdateRichRect((int)this, (int *)this + 15);
  return RichText::Resize(this);
}


//======================================================================
// RichText::clearHistory(void)
// address: 0x001C9C5E   size: 0xC (12 bytes)
//======================================================================
int __fastcall RichText::clearHistory(RichText *this)
{
  return std::deque<tagTextHistory>::clear((_DWORD *)this + 121);
}


//======================================================================
// RichText::~RichText()
// address: 0x001C9C6C   size: 0xC6 (198 bytes)
//======================================================================
// Alternative name is '_ZN8RichTextD1Ev'
void __fastcall RichText::~RichText(RichText *this)
{
  RichTextLine **i; // r6
  RichTextLine *v3; // r5
  void **v4; // r7
  unsigned int v5; // r6
  void *v6; // r0
  _DWORD v7[4]; // [sp+8h] [bp-44h] BYREF
  _DWORD v8[4]; // [sp+18h] [bp-34h] BYREF
  int v9[4]; // [sp+28h] [bp-24h] BYREF
  int v10[5]; // [sp+38h] [bp-14h] BYREF

  *(_DWORD *)this = &off_4594D0;
  for ( i = *((RichTextLine ***)this + 111); i != (RichTextLine **)((char *)this + 444); i = (RichTextLine **)*i )
  {
    v3 = i[2];
    if ( v3 != nullptr )
    {
      RichTextLine::~RichTextLine(i[2]);
      operator delete(v3);
    }
  }
  std::_List_base<RichTextLine *>::_M_clear((_DWORD **)this + 111);
  *((_DWORD *)this + 111) = (char *)this + 444;
  *((_DWORD *)this + 112) = (char *)this + 444;
  sub_3BDF80((char *)this + 544);
  std::_Deque_iterator<tagTextHistory,tagTextHistory&,tagTextHistory*>::_Deque_iterator(v8, (_DWORD *)this + 123);
  std::_Deque_iterator<tagTextHistory,tagTextHistory&,tagTextHistory*>::_Deque_iterator(v7, (_DWORD *)this + 127);
  std::_Deque_iterator<tagTextHistory,tagTextHistory&,tagTextHistory*>::_Deque_iterator(v9, v8);
  std::_Deque_iterator<tagTextHistory,tagTextHistory&,tagTextHistory*>::_Deque_iterator(v10, v7);
  std::deque<tagTextHistory>::_M_destroy_data_aux((int)this + 484, v9, v10);
  if ( *((_DWORD *)this + 121) != 0 )
  {
    v4 = *((void ***)this + 126);
    v5 = *((_DWORD *)this + 130) + 4;
    while ( (unsigned int)v4 < v5 )
    {
      v6 = *v4++;
      operator delete(v6);
    }
    operator delete(*((void **)this + 121));
  }
  std::_List_base<RichTextLine *>::_M_clear((_DWORD **)this + 111);
  Frame::~Frame(this);
}


//======================================================================
// RichText::~RichText()
// address: 0x001C9D38   size: 0x12 (18 bytes)
//======================================================================
void __fastcall RichText::~RichText(RichText *this)
{
  RichText::~RichText(this);
  operator delete(this);
}


//======================================================================
// RichText::SetRenderText(char const*,Ogre::ColorQuad const&)
// address: 0x001C9E7C   size: 0x6C (108 bytes)
//======================================================================
__int64 __fastcall RichText::SetRenderText(__int64 a1, _DWORD *a2)
{
  __int64 v4; // r0
  __int64 v6; // [sp+0h] [bp-Ch] BYREF
  _DWORD *v7; // [sp+8h] [bp-4h]

  v6 = a1;
  v7 = a2;
  if ( HIDWORD(a1) != 0 )
  {
    RichText::Clear((RichText *)a1);
    RichText::clearHistory((RichText *)a1);
    (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)a1 + 28))(a1, 0);
    RichText::AddRenderText(a1, a2);
    if ( (unsigned int)std::deque<tagTextHistory>::size((_DWORD *)(a1 + 484)) >= *(_DWORD *)(a1 + 440) )
      std::deque<tagTextHistory>::pop_front(a1 + 484);
    LODWORD(v6) = &byte_55FB88;
    sub_3BE508((int)&v6, (char *)HIDWORD(a1));
    LODWORD(v4) = a1 + 484;
    HIDWORD(v4) = &v6;
    HIDWORD(v6) = *a2;
    std::deque<tagTextHistory>::push_back(v4);
    sub_3BDF80(&v6);
  }
  return v6;
}


//======================================================================
// RichText::SetText(char const*,int,int,int)
// address: 0x001C9EEC   size: 0x22 (34 bytes)
//======================================================================
__int64 __fastcall RichText::SetText(__int64 this, int a2, char a3, char a4)
{
  __int64 v5; // [sp+0h] [bp-Ch] BYREF
  int v6; // [sp+8h] [bp-4h]

  v5 = this;
  v6 = a2;
  if ( HIDWORD(this) != 0 )
  {
    BYTE4(v5) = a4;
    BYTE5(v5) = a3;
    BYTE6(v5) = a2;
    HIBYTE(v5) = -1;
    RichText::SetRenderText(this, (_DWORD *)&v5 + 1);
  }
  return v5;
}


//======================================================================
// RichText::AddText(char const*,int,int,int)
// address: 0x001C9F10   size: 0x9E (158 bytes)
//======================================================================
int __fastcall RichText::AddText(int this, char *a2, char a3, char a4, char a5)
{
  int v5; // r4
  int v8; // [sp+8h] [bp-1Ch]
  int v10; // [sp+14h] [bp-10h] BYREF
  char *v11; // [sp+18h] [bp-Ch] BYREF
  char v12; // [sp+1Ch] [bp-8h]
  char v13; // [sp+1Dh] [bp-7h]
  char v14; // [sp+1Eh] [bp-6h]
  char v15; // [sp+1Fh] [bp-5h]

  v5 = this;
  if ( a2 != nullptr )
  {
    v8 = this + 484;
    if ( (unsigned int)std::deque<tagTextHistory>::size((_DWORD *)(this + 484)) >= *(_DWORD *)(this + 440) )
      std::deque<tagTextHistory>::pop_front(v8);
    v11 = &byte_55FB88;
    sub_3BE508((int)&v11, a2);
    v12 = a5;
    v13 = a4;
    v14 = a3;
    v15 = -1;
    std::deque<tagTextHistory>::push_back(__SPAIR64__(&v11, v8));
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v5 + 28))(v5, 0);
    BYTE1(v10) = a4;
    BYTE2(v10) = a3;
    HIBYTE(v10) = -1;
    LOBYTE(v10) = a5;
    RichText::AddRenderText(__SPAIR64__((unsigned int)a2, v5), &v10);
    return sub_3BDF80(&v11);
  }
  return this;
}


//======================================================================
// RichText::CalAbsRectSelf(unsigned int)
// address: 0x001C9FB4   size: 0x30 (48 bytes)
//======================================================================
int __fastcall RichText::CalAbsRectSelf(RichText *this, unsigned int a2)
{
  int result; // r0

  LayoutFrame::CalAbsRectSelf(this, a2);
  result = Ogre::TRect<float>::isEmpty((float *)this + 131);
  if ( result == 0 )
    return RichText::SetPosition(this, (float)*((int *)this + 15), COERCE_UNSIGNED_INT((float)*((int *)this + 16)));
  return result;
}


//======================================================================
// RichText::UpdateSelf(float)
// address: 0x001C9FE4   size: 0x2E (46 bytes)
//======================================================================
int __fastcall RichText::UpdateSelf(double this)
{
  int v1; // r4
  int result; // r0

  v1 = LODWORD(this);
  if ( *(_BYTE *)(LODWORD(this) + 57) != 0 )
  {
    Frame::UpdateSelf(this);
  }
  else
  {
    result = Ogre::TRect<float>::isEmpty((float *)(LODWORD(this) + 524));
    if ( result == 0 )
      return result;
  }
  return RichText::UpdateRichRect(v1, (int *)(v1 + 60));
}


//======================================================================
// RichText::Save(TiXmlElement *)
// address: 0x001CA014   size: 0x34 (52 bytes)
//======================================================================
TiXmlElement *__fastcall RichText::Save(RichText *this, TiXmlElement *a2)
{
  TiXmlElement *v3; // r0
  int v4; // r2
  TiXmlElement *v5; // r4
  int v6; // r2

  v3 = Frame::Save(this, a2);
  v4 = *((_DWORD *)this + 104);
  v5 = v3;
  if ( v4 != 0 )
    TiXmlElement::SetAttribute(v3, "lineInterval", v4);
  v6 = *((_DWORD *)this + 110);
  if ( v6 != 100 )
    TiXmlElement::SetAttribute(v5, "maxlines", v6);
  return v5;
}


//======================================================================
// RichText::OnInputMessage(Ogre::InputEvent const&)
// address: 0x001CA050   size: 0x17E (382 bytes)
//======================================================================
int __fastcall RichText::OnInputMessage(RichText *this, const InputEvent *a2)
{
  int v5; // r7
  struct _InputEvent *ie_next; // r2
  struct _InputEvent *ie_oq; // r7
  size_t v8; // r7
  char *v9; // r7
  const void *ie_source; // r1
  XtInputMask ie_condition; // r5
  size_t v12; // r5
  size_t v14; // [sp+10h] [bp-34h]
  InputEvent v15; // [sp+1Ch] [bp-28h] BYREF
  char *v16; // [sp+38h] [bp-Ch]

  switch ( (unsigned int)a2->ie_proc )
  {
    case 0u:
      return 1;
    case 3u:
    case 6u:
      return RichText::OnClick(this, a2);
    case 5u:
      v5 = 1;
      if ( *((_BYTE *)this + 57) == 0 )
        return v5;
      if ( UIObject::hasScriptsEvent(this, 7) )
      {
        UIObject::CallScript(this, 7, "s", "LDoubleClick");
        return 0;
      }
      else
      {
        v15.ie_proc = a2->ie_proc;
        ie_next = a2->ie_next;
        ie_oq = a2->ie_oq;
        v15.ie_closure = a2->ie_closure;
        v15.ie_next = ie_next;
        v15.ie_oq = ie_oq;
        v15.app = a2->app;
        v8 = a2->ie_condition - a2->ie_source;
        v14 = v8;
        v15.ie_source = 0;
        v15.ie_condition = 0;
        v16 = nullptr;
        if ( v8 != 0 )
          v9 = (char *)operator new(v8);
        else
          v9 = nullptr;
        ie_source = (const void *)a2->ie_source;
        ie_condition = a2->ie_condition;
        v15.ie_source = (int)v9;
        v15.ie_condition = (XtInputMask)v9;
        v16 = &v9[v14];
        v12 = ie_condition - (_DWORD)ie_source;
        if ( v12 != 0 )
          j_memmove(v9, ie_source, v12);
        v15.ie_condition = (XtInputMask)&v9[v12];
        v15.ie_proc = (XtInputCallbackProc)(&dword_0 + 3);
        v5 = RichText::OnClick(this, &v15);
        if ( v15.ie_source != 0 )
          operator delete((void *)v15.ie_source);
      }
      return v5;
    case 9u:
      v5 = 1;
      if ( *((_BYTE *)this + 57) == 0 )
        return v5;
      RichText::OnMouseMoveInLink(this, a2);
      return 0;
    case 0xBu:
      if ( *((_BYTE *)this + 57) == 0 )
        return 0;
      if ( UIObject::hasScriptsEvent(this, 25) )
        UIObject::CallScript(this, 25, (const char *)&unk_3FB8EA);
      v5 = 0;
      *((_DWORD *)this + 108) = 0;
      if ( GetCurrentCursorLevel() != 1 )
        return 0;
      FrameManager::setCursor((FrameManager *)g_pFrameMgr, "normal");
      return v5;
    case 0xCu:
      if ( *((_BYTE *)this + 57) == 0 )
        return 0;
      if ( UIObject::hasScriptsEvent(this, 10) )
        UIObject::CallScript(this, 10, "is", 0, &unk_3FB8EA);
      v5 = 0;
      *((_DWORD *)this + 108) = 0;
      return v5;
    default:
      return Frame::OnInputMessage((char **)this, a2);
  }
}


//======================================================================
// RichText::FindFrameOnPoint(int,int,std::vector<Frame *,std::allocator<Frame *>> &)
// address: 0x001CA1F0   size: 0x56 (86 bytes)
//======================================================================
__int64 __fastcall RichText::FindFrameOnPoint(__int64 a1, int a2, unsigned int a3)
{
  _DWORD *v6; // r1
  _DWORD *v7; // r3
  __int64 v9; // [sp+0h] [bp-Ch] BYREF
  int v10; // [sp+8h] [bp-4h]

  v9 = a1;
  v10 = a2;
  if ( *(_BYTE *)(a1 + 57) != 0 )
  {
    if ( *(_BYTE *)(a1 + 58) != 0 && RichText::isMouseInLink((RichText *)a1, SHIDWORD(a1), a2) != 0 )
    {
      v6 = *(_DWORD **)(a3 + 4);
      v7 = *(_DWORD **)(a3 + 8);
      HIDWORD(v9) = a1;
      if ( v6 == v7 )
      {
        std::vector<Frame *>::_M_insert_aux(a3, v6, (int *)&v9 + 1);
      }
      else
      {
        if ( v6 != nullptr )
          *v6 = a1;
        *(_DWORD *)(a3 + 4) += 4;
      }
    }
    else
    {
      Frame::FindFrameOnPoint(a1, SHIDWORD(a1), a2, a3);
    }
  }
  return v9;
}

