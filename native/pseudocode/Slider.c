// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Slider

//======================================================================
// Slider::GetTypeName(void)
// address: 0x001A5828   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall Slider::GetTypeName(Slider *this)
{
  return "Slider";
}


//======================================================================
// Slider::~Slider()
// address: 0x001A5834   size: 0x38 (56 bytes)
//======================================================================
// Alternative name is '_ZN6SliderD1Ev'
void __fastcall Slider::~Slider(Slider *this)
{
  _DWORD *v2; // r0
  int v3; // r3

  *(_DWORD *)this = &off_458D00;
  v2 = *((_DWORD **)this + 103);
  if ( v2 != nullptr )
  {
    v3 = v2[10] - 1;
    v2[10] = v3;
    if ( v3 == 0 )
      (*(void (__fastcall **)(_DWORD *))(*v2 + 12))(v2);
    *((_DWORD *)this + 103) = 0;
  }
  Frame::~Frame(this);
}


//======================================================================
// Slider::~Slider()
// address: 0x001A5870   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Slider::~Slider(Slider *this)
{
  Slider::~Slider(this);
  operator delete(this);
}


//======================================================================
// Slider::Slider(void)
// address: 0x001A5884   size: 0x4A (74 bytes)
//======================================================================
// Alternative name is '_ZN6SliderC2Ev'
void __fastcall Slider::Slider(Slider *this)
{
  Frame::Frame(this);
  *(_DWORD *)this = &off_458D00;
  *((_DWORD *)this + 103) = 0;
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 105) = 0;
  *((_DWORD *)this + 106) = 0;
  *((_DWORD *)this + 107) = 1065353216;
  *((_DWORD *)this + 108) = 1;
  *((_DWORD *)this + 109) = 0;
}


//======================================================================
// Slider::CopyMembers(Slider*)
// address: 0x001A58D4   size: 0x50 (80 bytes)
//======================================================================
Frame *__fastcall Slider::CopyMembers(Frame *this, Slider *a2)
{
  Frame *v2; // r5

  v2 = this;
  if ( a2 != nullptr )
  {
    Frame::CopyMembers(this, a2);
    this = *((Frame **)v2 + 103);
    if ( this != nullptr )
    {
      this = (Frame *)(**(int (__fastcall ***)(Frame *))this)(this);
      *((_DWORD *)a2 + 103) = this;
    }
    *((_DWORD *)a2 + 104) = *((_DWORD *)v2 + 104);
    *((_DWORD *)a2 + 105) = *((_DWORD *)v2 + 105);
    *((_DWORD *)a2 + 106) = *((_DWORD *)v2 + 106);
    *((_DWORD *)a2 + 107) = *((_DWORD *)v2 + 107);
    *((_DWORD *)a2 + 108) = *((_DWORD *)v2 + 108);
    *((_DWORD *)a2 + 109) = *((_DWORD *)v2 + 109);
  }
  return this;
}


//======================================================================
// Slider::CreateClone(void)
// address: 0x001A5924   size: 0x1E (30 bytes)
//======================================================================
Slider *__fastcall Slider::CreateClone(Slider *this)
{
  Slider *v2; // r4

  v2 = (Slider *)operator new(0x1C0u);
  Slider::Slider(v2);
  Slider::CopyMembers(this, v2);
  return v2;
}


//======================================================================
// Slider::SetThumbTexture(std::string,Ogre::BlendMode)
// address: 0x001A5942   size: 0x1C (28 bytes)
//======================================================================
int __fastcall Slider::SetThumbTexture(int a1, const char **a2, int a3)
{
  Texture::SetTexture(*(Texture **)(a1 + 412), *a2);
  return Texture::SetBlendMode(*(_DWORD *)(a1 + 412), a3);
}


//======================================================================
// Slider::SetValue(float)
// address: 0x001A595E   size: 0x34 (52 bytes)
//======================================================================
bool __fastcall Slider::SetValue(Slider *this, float a2)
{
  float v3; // r7
  _BOOL4 result; // r0

  *((float *)this + 106) = a2;
  v3 = *((float *)this + 105);
  result = a2 > v3;
  if ( a2 > v3 || (v3 = *((float *)this + 104), result = a2 < v3) )
    *((float *)this + 106) = v3;
  return result;
}


//======================================================================
// Slider::GetValue(void)
// address: 0x001A5992   size: 0x24 (36 bytes)
//======================================================================
float __fastcall Slider::GetValue(Slider *this)
{
  return (float)(int)FloatToInt(*((float *)this + 106) / *((float *)this + 107)) * *((float *)this + 107);
}


//======================================================================
// Slider::GetLastValue(void)
// address: 0x001A59B6   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Slider::GetLastValue(Slider *this)
{
  return *((_DWORD *)this + 109);
}


//======================================================================
// Slider::SetMinValue(float)
// address: 0x001A59BE   size: 0x22 (34 bytes)
//======================================================================
bool __fastcall Slider::SetMinValue(Slider *this, float a2)
{
  float v3; // r6
  _BOOL4 result; // r0

  *((float *)this + 104) = a2;
  v3 = *((float *)this + 105);
  result = v3 > a2;
  if ( v3 <= a2 )
    v3 = a2;
  *((float *)this + 105) = v3;
  return result;
}


//======================================================================
// Slider::GetMinValue(void)
// address: 0x001A59E0   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Slider::GetMinValue(Slider *this)
{
  return *((_DWORD *)this + 104);
}


//======================================================================
// Slider::SetMaxValue(float)
// address: 0x001A59E8   size: 0x22 (34 bytes)
//======================================================================
bool __fastcall Slider::SetMaxValue(Slider *this, float a2)
{
  float v3; // r6
  _BOOL4 result; // r0

  *((float *)this + 105) = a2;
  v3 = *((float *)this + 104);
  result = v3 < a2;
  if ( v3 >= a2 )
    v3 = a2;
  *((float *)this + 104) = v3;
  return result;
}


//======================================================================
// Slider::GetMaxValue(void)
// address: 0x001A5A0A   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Slider::GetMaxValue(Slider *this)
{
  return *((_DWORD *)this + 105);
}


//======================================================================
// Slider::SetValueStep(float)
// address: 0x001A5A12   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Slider::SetValueStep(int this, float a2)
{
  *(float *)(this + 428) = a2;
  return this;
}


//======================================================================
// Slider::GetValueStep(void)
// address: 0x001A5A1A   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Slider::GetValueStep(Slider *this)
{
  return *((_DWORD *)this + 107);
}


//======================================================================
// Slider::Draw(void)
// address: 0x001A5A24   size: 0x11A (282 bytes)
//======================================================================
int __fastcall Slider::Draw(LayoutDim **this)
{
  float v2; // r7
  float v3; // r7
  LayoutFrame *v4; // r5
  float v5; // r7
  LayoutFrame *v6; // r5
  int v7; // r0
  int v9; // [sp+0h] [bp-2Ch]
  LayoutDim *v10; // [sp+8h] [bp-24h]
  LayoutDim *v11; // [sp+8h] [bp-24h]
  float v12; // [sp+Ch] [bp-20h]
  float v13; // [sp+Ch] [bp-20h]
  _BYTE v14[12]; // [sp+10h] [bp-1Ch] BYREF
  _BYTE v15[16]; // [sp+1Ch] [bp-10h] BYREF

  Frame::Draw((Frame *)this);
  if ( *((float *)this + 106) >= *((float *)this + 105) )
    v2 = 1.0;
  else
    v2 = (float)(*((float *)this + 106) - *((float *)this + 104))
       / (float)(*((float *)this + 105) - *((float *)this + 104));
  if ( *(this + 108) == (LayoutDim *)((char *)&dword_0 + 1) )
  {
    LayoutFrame::GetSize((LayoutFrame *)v14);
    v12 = COERCE_FLOAT(LayoutDim::GetX((LayoutDim *)v14));
    LayoutFrame::GetSize((LayoutFrame *)v15);
    v3 = v2 * (float)(v12 - COERCE_FLOAT(LayoutDim::GetX((LayoutDim *)v15)));
    LayoutDim::~LayoutDim((LayoutDim *)v15);
    LayoutDim::~LayoutDim((LayoutDim *)v14);
    v4 = *(this + 103);
    v10 = *(this + 2);
    v9 = FloatToInt(v3);
    LayoutFrame::SetPoint(v4, (LayoutFrame *)"left", (const char *)v10, "left", v9, 0);
  }
  else
  {
    LayoutFrame::GetSize((LayoutFrame *)v14);
    v13 = COERCE_FLOAT(LayoutDim::GetY((LayoutDim *)v14));
    LayoutFrame::GetSize((LayoutFrame *)v15);
    v5 = v2 * (float)(v13 - COERCE_FLOAT(LayoutDim::GetY((LayoutDim *)v15)));
    LayoutDim::~LayoutDim((LayoutDim *)v15);
    LayoutDim::~LayoutDim((LayoutDim *)v14);
    v6 = *(this + 103);
    v11 = *(this + 2);
    v7 = FloatToInt(v5);
    LayoutFrame::SetPoint(v6, (LayoutFrame *)"top", (const char *)v11, "top", 0, v7);
  }
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*(this + 103) + 32))(*(this + 103));
}


//======================================================================
// Slider::Save(TiXmlElement *)
// address: 0x001A5B48   size: 0x84 (132 bytes)
//======================================================================
TiXmlElement *__fastcall Slider::Save(Slider *this, TiXmlElement *a2)
{
  TiXmlElement *v3; // r0
  TiXmlElement *v4; // r4

  v3 = (TiXmlElement *)Frame::Save(this, a2);
  v4 = v3;
  if ( *((_DWORD *)this + 108) != 1 )
    TiXmlElement::SetAttribute(v3, "orientation", "VERTICAL");
  TiXmlElement::SetDoubleAttribute(v4, "minValue", *((float *)this + 104));
  TiXmlElement::SetDoubleAttribute(v4, "maxValue", *((float *)this + 105));
  TiXmlElement::SetDoubleAttribute(v4, "valueStep", *((float *)this + 107));
  TiXmlElement::SetDoubleAttribute(v4, "defaultValue", *((float *)this + 106));
  return v4;
}


//======================================================================
// Slider::OnInputMessage(Ogre::InputEvent const&)
// address: 0x001A5BE4   size: 0x2B8 (696 bytes)
//======================================================================
int __fastcall Slider::OnInputMessage(Slider *this, const InputEvent *a2)
{
  int v4; // r5
  int v5; // r6
  float v6; // r7
  int v7; // r3
  float v8; // r5
  float v9; // r0
  int result; // r0
  int v11; // r5
  int v12; // r6
  float v13; // r7
  int v14; // r3
  float v15; // r5
  float v16; // r0
  int v17; // r2
  int v18; // r6
  _DWORD *v19; // r3
  int ie_closure_low; // r0
  int ie_closure_high; // r2
  int v22; // r6
  float v23; // r7
  _BOOL4 v24; // r0
  int v25; // r2
  float v26; // r5

  switch ( (unsigned int)a2->ie_proc )
  {
    case 3u:
      *((_DWORD *)this + 73) |= 2u;
      *((float *)this + 110) = (float)SHIWORD(a2->ie_closure);
      v18 = *((_DWORD *)this + 108);
      if ( v18 == 1 )
        *((float *)this + 110) = (float)SLOWORD(a2->ie_closure);
      v19 = *((_DWORD **)this + 103);
      ie_closure_low = SLOWORD(a2->ie_closure);
      if ( ie_closure_low > v19[15] && ie_closure_low < v19[17] )
      {
        ie_closure_high = SHIWORD(a2->ie_closure);
        if ( ie_closure_high > v19[16] && ie_closure_high < v19[18] )
          goto LABEL_11;
      }
      if ( v18 == 1 )
      {
        v22 = *((_DWORD *)this + 15);
        v23 = (float)(ie_closure_low - v22);
        v24 = v23 < 0.0;
        v25 = *((_DWORD *)this + 17);
      }
      else
      {
        v22 = *((_DWORD *)this + 16);
        v23 = (float)(SHIWORD(a2->ie_closure) - v22);
        v24 = v23 < 0.0;
        v25 = *((_DWORD *)this + 18);
      }
      if ( v24 )
      {
        v26 = 0.0;
      }
      else
      {
        v26 = (float)(v25 - v22);
        if ( v23 <= v26 )
          v26 = v23;
      }
      if ( v25 - v22 <= 0 )
        goto LABEL_11;
      v16 = (float)(v26 / (float)(v25 - v22)) * (float)(*((float *)this + 105) - *((float *)this + 104));
      goto LABEL_37;
    case 4u:
      v17 = *((_DWORD *)this + 73);
      if ( (v17 & 2) != 0 )
      {
        *((_DWORD *)this + 73) = v17 & 0xFFFFFFFD;
        if ( UIObject::hasScriptsEvent(this, 29) != 0 )
          goto LABEL_42;
      }
      goto LABEL_11;
    case 9u:
      if ( (*((_DWORD *)this + 73) & 2) != 0 )
      {
        if ( *((_DWORD *)this + 108) == 1 )
        {
          v4 = SLOWORD(a2->ie_closure);
          if ( *((float *)this + 110) != (float)v4 )
          {
            v5 = *((_DWORD *)this + 17);
            v6 = (float)(v5 - v4);
            v7 = *((_DWORD *)this + 15);
            if ( v6 < 0.0 )
            {
              v8 = 0.0;
            }
            else
            {
              v8 = (float)(v5 - v7);
              if ( v6 <= v8 )
                v8 = v6;
            }
            if ( v5 - v7 > 0 )
            {
              v9 = (float)((float)(v8 / (float)(v5 - v7)) * (float)(*((float *)this + 104) - *((float *)this + 105)))
                 + *((float *)this + 105);
              *((float *)this + 106) = v9;
              *((float *)this + 106) = (float)(int)FloatToInt(v9 / *((float *)this + 107)) * *((float *)this + 107);
            }
          }
        }
        else
        {
          v11 = SHIWORD(a2->ie_closure);
          if ( *((float *)this + 110) != (float)v11 )
          {
            v12 = *((_DWORD *)this + 18);
            v13 = (float)(v12 - v11);
            v14 = *((_DWORD *)this + 16);
            if ( v13 < 0.0 )
            {
              v15 = 0.0;
            }
            else
            {
              v15 = (float)(v12 - v14);
              if ( v13 <= v15 )
                v15 = v13;
            }
            if ( v12 - v14 > 0 )
            {
              v16 = (float)((float)(v15 / (float)(v12 - v14)) * (float)(*((float *)this + 104) - *((float *)this + 105)))
                  + *((float *)this + 105);
LABEL_37:
              *((float *)this + 106) = v16;
            }
          }
        }
      }
      goto LABEL_11;
    case 0xAu:
      if ( UIObject::hasScriptsEvent(this, 30) != 0 )
        UIObject::CallScript(this, 30, "i", (int)*(float *)&a2->ie_closure);
      goto LABEL_11;
    case 0xBu:
      if ( (*((_DWORD *)this + 73) & 2) != 0 && UIObject::hasScriptsEvent(this, 29) != 0 )
LABEL_42:
        UIObject::CallScript(this, 29, (const char *)&unk_3FB8EA);
LABEL_11:
      result = 0;
      break;
    default:
      result = Frame::OnInputMessage(this, a2);
      break;
  }
  return result;
}


//======================================================================
// Slider::UpdateSelf(float)
// address: 0x001A5EA8   size: 0x82 (130 bytes)
//======================================================================
__int64 __fastcall Slider::UpdateSelf(__int64 this)
{
  float *v1; // r4
  float v2; // r7
  int v3; // r0
  __int64 v5; // [sp+0h] [bp-Ch]

  v5 = this;
  v1 = (float *)this;
  if ( *(_BYTE *)(this + 57) != 0 )
  {
    Frame::UpdateSelf((Frame *)this, *((float *)&this + 1));
    v2 = (float)(int)FloatToInt(v1[106] / v1[107]);
    *((float *)&v5 + 1) = v1[109];
    if ( *((float *)&v5 + 1) != (float)((float)(int)FloatToInt(v2) * v1[107])
      && UIObject::hasScriptsEvent((UIObject *)v1, 45) != 0 )
    {
      v3 = FloatToInt(v1[109]);
      UIObject::CallScript((UIObject *)v1, 45, "i", v3);
      v1[109] = (float)(int)FloatToInt(v2) * v1[107];
    }
  }
  return v5;
}

