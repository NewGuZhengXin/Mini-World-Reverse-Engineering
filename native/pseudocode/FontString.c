// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: FontString

//======================================================================
// FontString::GetTypeName(void)
// address: 0x001C710C   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall FontString::GetTypeName(FontString *this)
{
  return "FontString";
}


//======================================================================
// FontString::Draw(void)
// address: 0x001C7118   size: 0x240 (576 bytes)
//======================================================================
int __fastcall FontString::Draw(FontString *this)
{
  int result; // r0
  float v3; // r6
  int v4; // r0
  char *v5; // r0
  char *v6; // r1
  int UIFontByIndex; // r7
  float v8; // r0
  int v9; // r3
  float v10; // r0
  int v11; // [sp+34h] [bp-138h]
  float v12; // [sp+50h] [bp-11Ch] BYREF
  float v13; // [sp+54h] [bp-118h] BYREF
  float v14; // [sp+58h] [bp-114h]
  float v15; // [sp+5Ch] [bp-110h]
  float v16; // [sp+60h] [bp-10Ch]
  char v17[256]; // [sp+64h] [bp-108h] BYREF

  result = FrameManager::getUIFontByIndex((FrameManager *)g_pFrameMgr, *((_DWORD *)this + 57));
  v11 = result;
  if ( *(_DWORD *)(result + 20) != 0 )
  {
    if ( *((_BYTE *)this + 296) != 0 )
    {
      v3 = *((float *)this + 76);
      if ( (float)(*((float *)this + 75) * 1000.0) > v3 )
      {
        v5 = (char *)this + 244;
        v6 = "0";
      }
      else
      {
        v4 = FloatToInt((float)(v3 - (float)(*((float *)this + 75) * 1000.0)) / 1000.0);
        if ( (unsigned int)(v4 + 59) > 0x76 )
        {
          if ( (unsigned int)(v4 + 3599) > 0x1C1E )
            j_snprintf(v17, 0x100u, "%d h", v4 / 3600);
          else
            j_snprintf(v17, 0x100u, "%d m", v4 / 60);
        }
        else
        {
          j_snprintf(v17, 0x100u, "%d s", v4);
        }
        v5 = (char *)this + 244;
        v6 = v17;
      }
      sub_3BE508((int)v5, v6);
    }
    if ( *((_DWORD *)this + 66) == 0 )
      goto LABEL_18;
    v12 = 0.0;
    v13 = 0.0;
    UIFontByIndex = FrameManager::getUIFontByIndex((FrameManager *)g_pFrameMgr, *((_DWORD *)this + 57));
    (*(void (__fastcall **)(int, _DWORD, _DWORD, float *, float *))(*(_DWORD *)g_pDisplay + 52))(
      g_pDisplay,
      *(_DWORD *)(UIFontByIndex + 20),
      *((_DWORD *)this + 61),
      &v12,
      &v13);
    v8 = v12 * *(float *)(UIFontByIndex + 24);
    v9 = *((_DWORD *)this + 66);
    v12 = v8;
    if ( v9 == 1 )
    {
      v10 = (float)((float)(*((_DWORD *)this + 17) - *((_DWORD *)this + 15)) - v8) * 0.5;
    }
    else
    {
      if ( v9 != 2 )
      {
LABEL_18:
        v14 = (float)*((int *)this + 16);
        v13 = (float)*((int *)this + 15);
        v16 = (float)*((int *)this + 18);
        v15 = (float)*((int *)this + 17);
        (*(void (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 60))(g_pDisplay);
        (*(void (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 64))(
          g_pDisplay,
          *(_DWORD *)(v11 + 20),
          *((_DWORD *)this + 69));
        Ogre::UIRenderer::setTextDrawAngle(
          (Ogre::UIRenderer *)g_pDisplay,
          *(void **)(v11 + 20),
          v13,
          v14,
          *((float *)this + 82));
        (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, float *, float, float, _DWORD, char *, _DWORD, _DWORD, char *))(*(_DWORD *)g_pDisplay + 40))(
          g_pDisplay,
          *(_DWORD *)(v11 + 20),
          *((_DWORD *)this + 68),
          *((_DWORD *)this + 61),
          &v13,
          (float)*((int *)this + 70),
          (float)*((int *)this + 71),
          *((unsigned __int8 *)this + 288),
          (char *)this + 236,
          (float)(*((float *)this + 73) * *(float *)(v11 + 24)) * *((float *)this + 56),
          0,
          &byte_50FCF8);
        (*(void (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 64))(g_pDisplay);
        return Ogre::UIRenderer::setTextDrawAngle((Ogre::UIRenderer *)g_pDisplay, *(void **)(v11 + 20), v13, v14, 0.0);
      }
      v10 = (float)(*((_DWORD *)this + 17) - *((_DWORD *)this + 15)) - v8;
    }
    *((_DWORD *)this + 70) = FloatToInt(v10);
    goto LABEL_18;
  }
  return result;
}


//======================================================================
// FontString::~FontString()
// address: 0x001C73D4   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN10FontStringD1Ev'
void __fastcall FontString::~FontString(FontString *this)
{
  *(_DWORD *)this = &off_459450;
  FontInstance::~FontInstance((FontString *)((char *)this + 228));
  LayoutFrame::~LayoutFrame(this);
}


//======================================================================
// FontString::~FontString()
// address: 0x001C73F8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall FontString::~FontString(FontString *this)
{
  FontString::~FontString(this);
  operator delete(this);
}


//======================================================================
// FontString::FontString(void)
// address: 0x001C741C   size: 0x52 (82 bytes)
//======================================================================
// Alternative name is '_ZN10FontStringC2Ev'
void __fastcall FontString::FontString(FontString *this)
{
  LayoutFrame::LayoutFrame(this);
  FontInstance::FontInstance((FontString *)((char *)this + 228));
  *(_DWORD *)this = &off_459450;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  *((_BYTE *)this + 288) = 0;
  *((_DWORD *)this + 73) = 1065353216;
  *((_BYTE *)this + 296) = 0;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 75) = 0;
  *((_BYTE *)this + 308) = 0;
  *((_BYTE *)this + 309) = 0;
  *((_DWORD *)this + 80) = 0;
  *((_DWORD *)this + 81) = 0;
  *((_DWORD *)this + 82) = 0;
}


//======================================================================
// FontString::CopyMembers(FontString*)
// address: 0x001C7474   size: 0xA6 (166 bytes)
//======================================================================
UIObject *__fastcall FontString::CopyMembers(UIObject *this, FontString *a2)
{
  UIObject *v2; // r5

  v2 = this;
  if ( a2 != nullptr )
  {
    LayoutFrame::CopyMembers(this, a2);
    *((_DWORD *)a2 + 57) = *((_DWORD *)v2 + 57);
    sub_3BEBBC((char *)a2 + 232);
    *((_DWORD *)a2 + 59) = *((_DWORD *)v2 + 59);
    *((_DWORD *)a2 + 60) = *((_DWORD *)v2 + 60);
    sub_3BEBBC((char *)a2 + 244);
    *((_DWORD *)a2 + 62) = *((_DWORD *)v2 + 62);
    *((_DWORD *)a2 + 63) = *((_DWORD *)v2 + 63);
    *((_BYTE *)a2 + 256) = *((_BYTE *)v2 + 256);
    *((_BYTE *)a2 + 257) = *((_BYTE *)v2 + 257);
    *((_DWORD *)a2 + 65) = *((_DWORD *)v2 + 65);
    *((_DWORD *)a2 + 66) = *((_DWORD *)v2 + 66);
    *((_DWORD *)a2 + 67) = *((_DWORD *)v2 + 67);
    *((_DWORD *)a2 + 68) = *((_DWORD *)v2 + 68);
    *((_DWORD *)a2 + 69) = *((_DWORD *)v2 + 69);
    *((_DWORD *)a2 + 70) = *((_DWORD *)v2 + 70);
    *((_DWORD *)a2 + 71) = *((_DWORD *)v2 + 71);
    *((_BYTE *)a2 + 288) = *((_BYTE *)v2 + 288);
    *((_DWORD *)a2 + 73) = *((_DWORD *)v2 + 73);
    this = (UIObject *)*((unsigned __int8 *)v2 + 296);
    *((_BYTE *)a2 + 296) = (_BYTE)this;
    *((_DWORD *)a2 + 75) = *((_DWORD *)v2 + 75);
    *((_DWORD *)a2 + 76) = *((_DWORD *)v2 + 76);
    *((_DWORD *)a2 + 82) = *((_DWORD *)v2 + 82);
  }
  return this;
}


//======================================================================
// FontString::CreateClone(void)
// address: 0x001C751A   size: 0x1E (30 bytes)
//======================================================================
FontString *__fastcall FontString::CreateClone(FontString *this)
{
  FontString *v2; // r4

  v2 = (FontString *)operator new(0x150u);
  FontString::FontString(v2);
  FontString::CopyMembers(this, v2);
  return v2;
}


//======================================================================
// FontString::SetScrollNumber(unsigned int,unsigned int,float)
// address: 0x001C7538   size: 0x16 (22 bytes)
//======================================================================
int __fastcall FontString::SetScrollNumber(int this, unsigned int a2, unsigned int a3, float a4)
{
  *(_DWORD *)(this + 316) = a3;
  *(float *)(this + 320) = a4;
  *(_DWORD *)(this + 312) = a2;
  *(_BYTE *)(this + 308) = 1;
  return this;
}


//======================================================================
// FontString::SetScrollNumberWithUint(unsigned int,unsigned int,float)
// address: 0x001C754E   size: 0x10 (16 bytes)
//======================================================================
int __fastcall FontString::SetScrollNumberWithUint(FontString *this, unsigned int a2, unsigned int a3, float a4)
{
  *((_BYTE *)this + 309) = 1;
  return FontString::SetScrollNumber((int)this, a2, a3, a4);
}


//======================================================================
// FontString::GetTextExtentWidth(char const*)
// address: 0x001C7560   size: 0x3C (60 bytes)
//======================================================================
int __fastcall FontString::GetTextExtentWidth(FontString *this, const char *a2)
{
  int UIFontByIndex; // r0
  float v5; // [sp+8h] [bp-Ch] BYREF
  _BYTE v6[8]; // [sp+Ch] [bp-8h] BYREF

  UIFontByIndex = FrameManager::getUIFontByIndex((FrameManager *)g_pFrameMgr, *((_DWORD *)this + 57));
  (*(void (__fastcall **)(int, _DWORD, const char *, float *, _BYTE *))(*(_DWORD *)g_pDisplay + 52))(
    g_pDisplay,
    *(_DWORD *)(UIFontByIndex + 20),
    a2,
    &v5,
    v6);
  return FloatToInt(v5);
}


//======================================================================
// FontString::SetText(char const*)
// address: 0x001C75A4   size: 0xE (14 bytes)
//======================================================================
int __fastcall FontString::SetText(int this, char *a2)
{
  if ( a2 != nullptr )
    return sub_3BE508(this + 244, a2);
  return this;
}


//======================================================================
// FontString::UpdateSelf(float)
// address: 0x001C778C   size: 0x42 (66 bytes)
//======================================================================
float __fastcall FontString::UpdateSelf(float this, float a2)
{
  int v2; // r4

  v2 = LODWORD(this);
  if ( *(_BYTE *)(LODWORD(this) + 57) != 0 )
  {
    this = COERCE_FLOAT((*(int (__fastcall **)(float))(*(_DWORD *)LODWORD(this) + 52))(COERCE_FLOAT(LODWORD(this))));
    if ( *(_BYTE *)(v2 + 296) != 0 )
    {
      this = *(float *)(v2 + 300) + a2;
      *(float *)(v2 + 300) = this;
    }
    if ( *(_BYTE *)(v2 + 308) != 0 )
      return COERCE_FLOAT(sub_1C75B4(v2, a2));
  }
  return this;
}


//======================================================================
// FontString::GetText(void)
// address: 0x001C77CE   size: 0x6 (6 bytes)
//======================================================================
int __fastcall FontString::GetText(FontString *this)
{
  return *((_DWORD *)this + 61);
}


//======================================================================
// FontString::SetTextColor(int,int,int)
// address: 0x001C77D4   size: 0x18 (24 bytes)
//======================================================================
_BYTE *__fastcall FontString::SetTextColor(FontString *this, char a2, char a3, char a4)
{
  _BYTE *result; // r0

  *((_BYTE *)this + 236) = a4;
  *((_BYTE *)this + 237) = a3;
  *((_BYTE *)this + 238) = a2;
  result = (char *)this + 239;
  *result = -1;
  return result;
}


//======================================================================
// FontString::SetBufferTimer(float,float)
// address: 0x001C77EC   size: 0x12 (18 bytes)
//======================================================================
float *__fastcall FontString::SetBufferTimer(FontString *this, float a2, float a3)
{
  float *result; // r0

  *((_BYTE *)this + 296) = 1;
  result = (float *)((char *)this + 252);
  result[12] = a2;
  result[13] = a3;
  return result;
}


//======================================================================
// FontString::SetBlendAlpha(float)
// address: 0x001C7800   size: 0x16 (22 bytes)
//======================================================================
int __fastcall FontString::SetBlendAlpha(FontString *this, float a2)
{
  int result; // r0

  result = FloatToInt(a2 * 255.0);
  *((_BYTE *)this + 239) = result;
  return result;
}


//======================================================================
// FontString::GetBlendAlpha(void)
// address: 0x001C781C   size: 0x16 (22 bytes)
//======================================================================
float __fastcall FontString::GetBlendAlpha(FontString *this)
{
  return (float)(*((_BYTE *)this + 239) / 0xFFu);
}


//======================================================================
// FontString::Save(TiXmlElement *)
// address: 0x001C7834   size: 0xF4 (244 bytes)
//======================================================================
TiXmlElement *__fastcall FontString::Save(const char **this, TiXmlElement *a2)
{
  TiXmlElement *v3; // r0
  TiXmlElement *v4; // r4
  int v5; // r3
  TiXmlElement *v6; // r0
  const char *v7; // r2
  int v8; // r3
  const char *v9; // r2
  TiXmlElement *v10; // r6

  v3 = (TiXmlElement *)LayoutFrame::Save((LayoutFrame *)this, a2);
  v4 = v3;
  if ( *((_DWORD *)*(this + 58) - 3) != 0 )
    TiXmlElement::SetAttribute(v3, "fonttype", *(this + 58));
  v5 = (int)*(this + 68);
  if ( v5 != 0 )
  {
    if ( v5 == 1 )
    {
      v6 = v4;
      v7 = "shadow";
    }
    else
    {
      if ( v5 != 2 )
        goto LABEL_9;
      v6 = v4;
      v7 = "border";
    }
    TiXmlElement::SetAttribute(v6, "fontStyle", v7);
  }
LABEL_9:
  if ( *((_BYTE *)this + 288) != 0 )
    TiXmlElement::SetAttribute(v4, "autowrap", "true");
  v8 = (int)*(this + 66);
  if ( v8 != 0 )
  {
    if ( v8 == 1 )
      v9 = "CENTER";
    else
      v9 = "RIGHT";
    TiXmlElement::SetAttribute(v4, "justifyH", v9);
  }
  if ( *((_DWORD *)*(this + 61) - 3) != 0 )
    TiXmlElement::SetAttribute(v4, "text", *(this + 61));
  if ( *(this + 59) != (const char *)-3618616 )
  {
    v10 = (TiXmlElement *)operator new(0x50u);
    TiXmlElement::TiXmlElement(v10, "Color");
    TiXmlNode::LinkEndChild(v4, v10);
    TiXmlElement::SetAttribute(v10, (const char *)aRgb, *((unsigned __int8 *)this + 238));
    TiXmlElement::SetAttribute(v10, (const char *)&aRgb[1], *((unsigned __int8 *)this + 237));
    TiXmlElement::SetAttribute(v10, (const char *)&aRgb[2], *((unsigned __int8 *)this + 236));
  }
  return v4;
}

