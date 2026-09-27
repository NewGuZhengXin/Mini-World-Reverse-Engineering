// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: LayoutFrame

//======================================================================
// LayoutFrame::GetTypeName(void)
// address: 0x001C0F10   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall LayoutFrame::GetTypeName(LayoutFrame *this)
{
  return "LayoutFrame";
}


//======================================================================
// LayoutFrame::resizeRect(int,int)
// address: 0x001C0F1C   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall LayoutFrame::resizeRect(_DWORD *this, int a2, int a3)
{
  int v3; // r3

  v3 = *(this + 18);
  *(this + 17) = *(this + 15) + a2;
  *(this + 16) = v3 - a3;
  return this;
}


//======================================================================
// LayoutFrame::UpdateSelf(float)
// address: 0x001C0F2A   size: 0x2 (2 bytes)
//======================================================================
void __fastcall LayoutFrame::UpdateSelf(LayoutFrame *this, float a2)
{
  ;
}


//======================================================================
// LayoutFrame::Draw(void)
// address: 0x001C0F2C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall LayoutFrame::Draw(LayoutFrame *this)
{
  ;
}


//======================================================================
// LayoutFrame::SetSelfScale(float)
// address: 0x001C0F2E   size: 0x6 (6 bytes)
//======================================================================
float *__fastcall LayoutFrame::SetSelfScale(LayoutFrame *this, float a2)
{
  float *result; // r0

  result = (float *)((char *)this + 224);
  *result = a2;
  return result;
}


//======================================================================
// LayoutFrame::AdjustFrameByViewPoint(void)
// address: 0x001C0F34   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall LayoutFrame::AdjustFrameByViewPoint(_DWORD *this)
{
  int v1; // r2
  int v2; // r4
  int v3; // r3

  v1 = *(this + 24);
  v2 = *(this + 15);
  *(this + 16) += v1;
  v3 = *(this + 23);
  *(this + 15) = v2 + v3;
  *(this + 18) += v1;
  *(this + 17) += v3;
  *(this + 23) = 0;
  *(this + 24) = 0;
  return this;
}


//======================================================================
// LayoutFrame::setAbsRect(float,float,float,float)
// address: 0x001C0F5A   size: 0x2A (42 bytes)
//======================================================================
int __fastcall LayoutFrame::setAbsRect(LayoutFrame *this, float a2, float a3, float a4, float a5)
{
  int result; // r0

  *((_DWORD *)this + 15) = FloatToInt(a2);
  *((_DWORD *)this + 16) = FloatToInt(a3);
  *((_DWORD *)this + 17) = FloatToInt(a4);
  result = FloatToInt(a5);
  *((_DWORD *)this + 18) = result;
  return result;
}


//======================================================================
// LayoutFrame::ReplaceSpecialName(void)
// address: 0x001C104C   size: 0x22 (34 bytes)
//======================================================================
char *__fastcall LayoutFrame::ReplaceSpecialName(LayoutFrame *this)
{
  sub_1C0FE8((int)this + 8, *((_DWORD *)this + 27));
  sub_1C0FE8((int)this + 132, *((_DWORD *)this + 27));
  sub_1C0FE8((int)this + 156, *((_DWORD *)this + 27));
  return (char *)this + 156;
}


//======================================================================
// LayoutFrame::LayoutFrame(void)
// address: 0x001C10C0   size: 0x150 (336 bytes)
//======================================================================
// Alternative name is '_ZN11LayoutFrameC1Ev'
void __fastcall LayoutFrame::LayoutFrame(LayoutFrame *this)
{
  char *v1; // r7
  int v3; // r2
  int v4; // r0
  int v5; // r3
  _DWORD v6[7]; // [sp+18h] [bp-1Ch] BYREF

  v1 = (char *)this + 20;
  *((_DWORD *)this + 2) = &byte_55FB88;
  *((_DWORD *)this + 3) = &byte_55FB88;
  *(_DWORD *)this = &off_458E50;
  *((_BYTE *)this + 4) = 0;
  j_memset((char *)this + 20, 0, 0x10u);
  *((_DWORD *)this + 7) = v1;
  *((_DWORD *)this + 8) = v1;
  *((_DWORD *)this + 10) = 1;
  *(_DWORD *)this = &off_4591B0;
  *((_DWORD *)this + 9) = 0;
  *((_BYTE *)this + 57) = 1;
  *((_DWORD *)this + 27) = 0;
  LayoutDim::LayoutDim((LayoutFrame *)((char *)this + 112));
  LayoutAnchor::LayoutAnchor((LayoutFrame *)((char *)this + 124));
  LayoutAnchor::LayoutAnchor((LayoutFrame *)((char *)this + 148));
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 55) = &byte_55FB88;
  LayoutDim::LayoutDim((LayoutDim *)v6);
  *((_WORD *)this + 56) = v6[0];
  v3 = v6[2];
  *((_DWORD *)this + 29) = v6[1];
  *((_DWORD *)this + 30) = v3;
  LayoutDim::~LayoutDim((LayoutDim *)v6);
  *((_DWORD *)this + 11) = 4;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  sub_3BE508((int)this + 12, (char *)&unk_3FB8EA);
  *((_BYTE *)this + 56) = 0;
  *((_BYTE *)this + 58) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 26) = 0;
  LayoutAnchor::LayoutAnchor((LayoutAnchor *)v6);
  v4 = LayoutAnchor::operator=((int)this + 148, (int)v6);
  LayoutAnchor::operator=((int)this + 124, v4);
  LayoutAnchor::~LayoutAnchor((LayoutAnchor *)v6);
  *((_DWORD *)this + 43) = 0;
  LayoutDim::LayoutDim((LayoutDim *)v6);
  *((_WORD *)this + 56) = v6[0];
  v5 = v6[1];
  *((_DWORD *)this + 30) = v6[2];
  *((_DWORD *)this + 29) = v5;
  LayoutDim::~LayoutDim((LayoutDim *)v6);
  *((_DWORD *)this + 47) = 0;
  sub_3BE508((int)this + 220, (char *)&unk_3FB8EA);
  *((_DWORD *)this + 56) = 1065353216;
  *((_BYTE *)this + 100) = 1;
  j_memset((char *)this + 192, 0, 0x1Cu);
}


//======================================================================
// LayoutFrame::CopyMembers(LayoutFrame*)
// address: 0x001C1220   size: 0xAC (172 bytes)
//======================================================================
UIObject *__fastcall LayoutFrame::CopyMembers(UIObject *this, LayoutFrame *a2)
{
  UIObject *v2; // r5
  int v4; // r2
  int v5; // r1
  int v6; // r6

  v2 = this;
  if ( a2 != nullptr )
  {
    UIObject::CopyMembers(this, a2);
    *((_DWORD *)a2 + 11) = *((_DWORD *)v2 + 11);
    v4 = *((_DWORD *)v2 + 13);
    *((_DWORD *)a2 + 12) = *((_DWORD *)v2 + 12);
    *((_DWORD *)a2 + 13) = v4;
    sub_3BEBBC((char *)a2 + 12);
    *((_BYTE *)a2 + 56) = *((_BYTE *)v2 + 56);
    *((_BYTE *)a2 + 57) = *((_BYTE *)v2 + 57);
    *((_BYTE *)a2 + 58) = *((_BYTE *)v2 + 58);
    v5 = *((_DWORD *)v2 + 16);
    v6 = *((_DWORD *)v2 + 17);
    *((_DWORD *)a2 + 15) = *((_DWORD *)v2 + 15);
    *((_DWORD *)a2 + 16) = v5;
    *((_DWORD *)a2 + 17) = v6;
    *((_DWORD *)a2 + 18) = *((_DWORD *)v2 + 18);
    *((_DWORD *)a2 + 26) = *((_DWORD *)v2 + 26);
    *((_DWORD *)a2 + 27) = *((_DWORD *)v2 + 27);
    LayoutAnchor::operator=((int)a2 + 124, (int)v2 + 124);
    LayoutAnchor::operator=((int)a2 + 148, (int)v2 + 148);
    *((_DWORD *)a2 + 43) = *((_DWORD *)v2 + 43);
    *((_BYTE *)a2 + 112) = *((_BYTE *)v2 + 112);
    *((_BYTE *)a2 + 113) = *((_BYTE *)v2 + 113);
    *((_DWORD *)a2 + 29) = *((_DWORD *)v2 + 29);
    this = *((UIObject **)v2 + 30);
    *((_DWORD *)a2 + 30) = this;
    *((_DWORD *)a2 + 47) = *((_DWORD *)v2 + 47);
  }
  return this;
}


//======================================================================
// LayoutFrame::CreateClone(void)
// address: 0x001C12CC   size: 0x1C (28 bytes)
//======================================================================
LayoutFrame *__fastcall LayoutFrame::CreateClone(LayoutFrame *this)
{
  LayoutFrame *v2; // r4

  v2 = (LayoutFrame *)operator new(0xE8u);
  LayoutFrame::LayoutFrame(v2);
  LayoutFrame::CopyMembers(this, v2);
  return v2;
}


//======================================================================
// LayoutFrame::Name2FP(char const*)
// address: 0x001C12E8   size: 0x26 (38 bytes)
//======================================================================
int __fastcall LayoutFrame::Name2FP(LayoutFrame *this, const char *a2)
{
  int i; // r4

  for ( i = 0; i != 9; ++i )
  {
    if ( j_strcasecmp((const char *)this, off_451E80[i]) == 0 )
      return i;
  }
  return 0;
}


//======================================================================
// LayoutFrame::FP2Name(FRAMEPOINT_T)
// address: 0x001C1314   size: 0xA (10 bytes)
//======================================================================
char *__fastcall LayoutFrame::FP2Name(int a1)
{
  return off_451E80[a1];
}


//======================================================================
// LayoutFrame::Save(TiXmlElement *)
// address: 0x001C1324   size: 0x248 (584 bytes)
//======================================================================
int __fastcall LayoutFrame::Save(LayoutFrame *this, TiXmlElement *a2)
{
  const char *Name; // r0
  int result; // r0
  const char *v6; // r7
  TiXmlElement *v7; // r5
  UIObject *v8; // r0
  const char *v9; // r0
  const char *v10; // r6
  TiXmlElement *v11; // r7
  TiXmlElement *v12; // r6
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  TiXmlElement *v17; // r7
  TiXmlElement *v18; // r6
  char *v19; // r0
  UIObject *v20; // r0
  const char *v21; // r0
  TiXmlElement *v22; // r0
  const char *v23; // r2
  char *v24; // r0
  LayoutDim *v25; // r7
  TiXmlElement *v26; // r6
  const char *v27; // r3
  const char *v28; // r4
  float v29; // r0
  float v30; // r0
  TiXmlNode *v31; // [sp+4h] [bp-8h]
  TiXmlNode *v32; // [sp+4h] [bp-8h]
  TiXmlNode *v33; // [sp+4h] [bp-8h]

  Name = (const char *)UIObject::GetName(this);
  result = j_strcmp(Name, (const char *)dword_50FC38);
  if ( result != 0 )
  {
    v6 = (const char *)(*(int (__fastcall **)(LayoutFrame *))(*(_DWORD *)this + 4))(this);
    v7 = (TiXmlElement *)operator new(0x50u);
    TiXmlElement::TiXmlElement(v7, v6);
    TiXmlNode::LinkEndChild(a2, v7);
    if ( *(_DWORD *)(*((_DWORD *)this + 2) - 12) != 0 )
      TiXmlElement::SetAttribute(v7, "name", *((const char **)this + 2));
    if ( *(_DWORD *)(*((_DWORD *)this + 3) - 12) != 0 )
      TiXmlElement::SetAttribute(v7, "inherits", *((const char **)this + 3));
    if ( *((_BYTE *)this + 57) == 0 )
      TiXmlElement::SetAttribute(v7, "hidden", "true");
    v8 = *((UIObject **)this + 27);
    if ( v8 != nullptr )
    {
      v9 = (const char *)UIObject::GetName(v8);
      v10 = (const char *)dword_50FC38;
      if ( j_strcmp(v9, (const char *)dword_50FC38) == 0 )
        TiXmlElement::SetAttribute(v7, "parent", v10);
    }
    v11 = (TiXmlElement *)operator new(0x50u);
    TiXmlElement::TiXmlElement(v11, "Size");
    TiXmlNode::LinkEndChild(v7, v11);
    v12 = (TiXmlElement *)operator new(0x50u);
    TiXmlElement::TiXmlElement(v12, "AbsDimension");
    TiXmlNode::LinkEndChild(v11, v12);
    v13 = LayoutDim::GetX((LayoutFrame *)((char *)this + 112));
    v14 = FloatToInt(*(float *)&v13);
    TiXmlElement::SetAttribute(v12, "x", v14);
    v15 = LayoutDim::GetY((LayoutFrame *)((char *)this + 112));
    v16 = FloatToInt(*(float *)&v15);
    TiXmlElement::SetAttribute(v12, "y", v16);
    v17 = (TiXmlElement *)operator new(0x50u);
    TiXmlElement::TiXmlElement(v17, "Anchors");
    TiXmlNode::LinkEndChild(v7, v17);
    v18 = (TiXmlElement *)operator new(0x50u);
    TiXmlElement::TiXmlElement(v18, "Anchor");
    TiXmlNode::LinkEndChild(v17, v18);
    v19 = LayoutFrame::FP2Name(*((_DWORD *)this + 31));
    TiXmlElement::SetAttribute(v18, "point", v19);
    v31 = *((TiXmlNode **)this + 33);
    if ( *((_DWORD *)v31 - 3) != 0 )
    {
      v20 = *((UIObject **)this + 27);
      if ( v20 != nullptr )
      {
        v21 = (const char *)UIObject::GetName(v20);
        if ( j_strcmp((const char *)v31, v21) == 0 )
        {
          v22 = v18;
          v23 = "$parent";
        }
        else
        {
          v23 = *((const char **)this + 33);
          v22 = v18;
        }
      }
      else
      {
        v23 = *((const char **)this + 33);
        v22 = v18;
      }
      TiXmlElement::SetAttribute(v22, "relativeTo", v23);
      v24 = LayoutFrame::FP2Name(*((_DWORD *)this + 32));
      TiXmlElement::SetAttribute(v18, "relativePoint", v24);
    }
    v25 = (LayoutFrame *)((char *)this + 136);
    if ( COERCE_FLOAT(LayoutDim::GetX((LayoutFrame *)((char *)this + 136))) != 0.0
      || COERCE_FLOAT(LayoutDim::GetY((LayoutFrame *)((char *)this + 136))) != 0.0 )
    {
      v32 = (TiXmlNode *)operator new(0x50u);
      TiXmlElement::TiXmlElement(v32, "Offset");
      TiXmlNode::LinkEndChild(v18, v32);
      v26 = (TiXmlElement *)operator new(0x50u);
      TiXmlElement::TiXmlElement(v26, "Dimension");
      TiXmlNode::LinkEndChild(v32, v26);
      if ( *(_BYTE *)v25 != 0 )
        v27 = "rel_x";
      else
        v27 = "abs_x";
      v33 = (TiXmlNode *)v27;
      if ( *((_BYTE *)this + 137) != 0 )
        v28 = "rel_y";
      else
        v28 = "abs_y";
      v29 = COERCE_FLOAT(LayoutDim::GetX(v25));
      TiXmlElement::SetAttribute(v26, (const char *)v33, (int)v29);
      v30 = COERCE_FLOAT(LayoutDim::GetY(v25));
      TiXmlElement::SetAttribute(v26, v28, (int)v30);
    }
    return (int)v7;
  }
  return result;
}


//======================================================================
// LayoutFrame::SetFrameStrata(FRAMESTRATA_T)
// address: 0x001C15D0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall LayoutFrame::SetFrameStrata(int result, int a2)
{
  *(_DWORD *)(result + 44) = a2;
  return result;
}


//======================================================================
// LayoutFrame::GetFrameStrata(void)
// address: 0x001C15D4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall LayoutFrame::GetFrameStrata(LayoutFrame *this)
{
  return *((_DWORD *)this + 11);
}


//======================================================================
// LayoutFrame::SetLayOutSize(LayoutDim)
// address: 0x001C15D8   size: 0x48 (72 bytes)
//======================================================================
__int64 __fastcall LayoutFrame::SetLayOutSize(unsigned int a1, int a2)
{
  unsigned int v3; // r6
  __int64 result; // r0
  int v5; // r3
  __int64 v6; // r0

  *(_BYTE *)(a1 + 112) = *(_BYTE *)a2;
  *(_BYTE *)(a1 + 113) = *(_BYTE *)(a2 + 1);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 4);
  v3 = 0;
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 8);
  result = FrameManager::AddReCalFrame(__SPAIR64__(a1, g_pFrameMgr));
  while ( 1 )
  {
    v5 = *(_DWORD *)(a1 + 176);
    if ( v3 >= (*(_DWORD *)(a1 + 180) - v5) >> 2 )
      break;
    HIDWORD(v6) = *(_DWORD *)(4 * v3 + v5);
    LODWORD(v6) = g_pFrameMgr;
    result = FrameManager::AddReCalFrame(v6);
    ++v3;
  }
  return result;
}


//======================================================================
// LayoutFrame::SetSizeNoRecal(int,int)
// address: 0x001C1624   size: 0x60 (96 bytes)
//======================================================================
void __fastcall LayoutFrame::SetSizeNoRecal(LayoutFrame *this, int a2, int a3)
{
  char v6; // r2
  float v7[4]; // [sp+4h] [bp-10h] BYREF

  LayoutDim::LayoutDim((LayoutDim *)v7);
  LayoutDim::SetAbsDim((LayoutDim *)v7, a2, a3);
  if ( *((unsigned __int16 *)this + 56) != LOWORD(v7[0])
    || *((float *)this + 29) != v7[1]
    || *((float *)this + 30) != v7[2] )
  {
    v6 = BYTE1(v7[0]);
    *((_BYTE *)this + 112) = LOBYTE(v7[0]);
    *((_BYTE *)this + 113) = v6;
    *((float *)this + 29) = v7[1];
    *((float *)this + 30) = v7[2];
  }
  LayoutDim::~LayoutDim((LayoutDim *)v7);
}


//======================================================================
// LayoutFrame::SetSize(int,int)
// address: 0x001C1684   size: 0x40 (64 bytes)
//======================================================================
void __fastcall LayoutFrame::SetSize(LayoutFrame *this, int a2, int a3)
{
  _DWORD v6[3]; // [sp+0h] [bp-1Ch] BYREF
  _DWORD v7[4]; // [sp+Ch] [bp-10h] BYREF

  LayoutDim::LayoutDim((LayoutDim *)v6);
  LayoutDim::SetAbsDim((LayoutDim *)v6, a2, a3);
  qmemcpy(v7, v6, 12);
  LayoutFrame::SetLayOutSize((unsigned int)this, (int)v7);
  LayoutDim::~LayoutDim((LayoutDim *)v7);
  LayoutDim::~LayoutDim((LayoutDim *)v6);
}


//======================================================================
// LayoutFrame::GetTextExtentWidth(char const*)
// address: 0x001C16C4   size: 0x30 (48 bytes)
//======================================================================
int __fastcall LayoutFrame::GetTextExtentWidth(LayoutFrame *this, const char *a2, float a3, int a4)
{
  float v5; // [sp+8h] [bp-8h] BYREF
  int v6; // [sp+Ch] [bp-4h] BYREF

  v5 = a3;
  v6 = a4;
  (*(void (__fastcall **)(int, _DWORD, const char *, float *, int *, const char *))(*(_DWORD *)g_pDisplay + 52))(
    g_pDisplay,
    *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 144) + 52),
    a2,
    &v5,
    &v6,
    a2);
  return FloatToInt(v5);
}


//======================================================================
// LayoutFrame::GetTextExtentHeight(char const*)
// address: 0x001C16FC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall LayoutFrame::GetTextExtentHeight(LayoutFrame *this, const char *a2, int a3, float a4)
{
  int v5; // [sp+8h] [bp-8h] BYREF
  float v6; // [sp+Ch] [bp-4h] BYREF

  v5 = a3;
  v6 = a4;
  (*(void (__fastcall **)(int, _DWORD, const char *, int *, float *, const char *))(*(_DWORD *)g_pDisplay + 52))(
    g_pDisplay,
    *(_DWORD *)(*(_DWORD *)(g_pFrameMgr + 144) + 52),
    a2,
    &v5,
    &v6,
    a2);
  return FloatToInt(v6);
}


//======================================================================
// LayoutFrame::SetWidth(int)
// address: 0x001C1734   size: 0x42 (66 bytes)
//======================================================================
void __fastcall LayoutFrame::SetWidth(LayoutFrame *this, unsigned int a2)
{
  unsigned int v4; // r0
  _DWORD v5[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v6[3]; // [sp+Ch] [bp-Ch] BYREF

  v4 = (unsigned int)COERCE_FLOAT(LayoutDim::GetY((LayoutFrame *)((char *)this + 112)));
  LayoutDim::LayoutDim((LayoutDim *)v5, a2, v4);
  v6[0] = v5[0];
  v6[1] = v5[1];
  v6[2] = v5[2];
  LayoutFrame::SetLayOutSize((unsigned int)this, (int)v6);
  LayoutDim::~LayoutDim((LayoutDim *)v6);
  LayoutDim::~LayoutDim((LayoutDim *)v5);
}


//======================================================================
// LayoutFrame::GetWidth(void)
// address: 0x001C1776   size: 0xE (14 bytes)
//======================================================================
int __fastcall LayoutFrame::GetWidth(LayoutFrame *this)
{
  return (int)COERCE_FLOAT(LayoutDim::GetX((LayoutFrame *)((char *)this + 112)));
}


//======================================================================
// LayoutFrame::SetHeight(int)
// address: 0x001C1784   size: 0x42 (66 bytes)
//======================================================================
void __fastcall LayoutFrame::SetHeight(LayoutFrame *this, unsigned int a2)
{
  unsigned int v4; // r0
  _DWORD v5[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v6[3]; // [sp+Ch] [bp-Ch] BYREF

  v4 = (unsigned int)COERCE_FLOAT(LayoutDim::GetX((LayoutFrame *)((char *)this + 112)));
  LayoutDim::LayoutDim((LayoutDim *)v5, v4, a2);
  v6[0] = v5[0];
  v6[1] = v5[1];
  v6[2] = v5[2];
  LayoutFrame::SetLayOutSize((unsigned int)this, (int)v6);
  LayoutDim::~LayoutDim((LayoutDim *)v6);
  LayoutDim::~LayoutDim((LayoutDim *)v5);
}


//======================================================================
// LayoutFrame::GetHeight(void)
// address: 0x001C17C6   size: 0xE (14 bytes)
//======================================================================
int __fastcall LayoutFrame::GetHeight(LayoutFrame *this)
{
  return (int)COERCE_FLOAT(LayoutDim::GetY((LayoutFrame *)((char *)this + 112)));
}


//======================================================================
// LayoutFrame::MoveUp(float)
// address: 0x001C17D4   size: 0x62 (98 bytes)
//======================================================================
__int64 __fastcall LayoutFrame::MoveUp(LayoutFrame *this, float a2)
{
  LayoutDim *v2; // r4
  LayoutDim *v4; // r6
  float v5; // r7
  float v6; // r5
  int v7; // r0
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = this;
  v2 = (LayoutFrame *)((char *)this + 136);
  v4 = this;
  v5 = COERCE_FLOAT(LayoutDim::GetY((LayoutFrame *)((char *)this + 136))) + a2;
  HIDWORD(v9) = (int)COERCE_FLOAT(LayoutDim::GetX(v2));
  v4 = (LayoutDim *)((char *)v4 + 160);
  LayoutDim::SetAbsDim(v2, SHIDWORD(v9), (int)v5);
  v6 = COERCE_FLOAT(LayoutDim::GetY(v4)) + a2;
  v7 = (int)COERCE_FLOAT(LayoutDim::GetX(v4));
  LayoutDim::SetAbsDim(v4, v7, (int)v6);
  return v9;
}


//======================================================================
// LayoutFrame::GetSize(void)
// address: 0x001C1836   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall LayoutFrame::GetSize(_DWORD *this, _DWORD *a2)
{
  *this = a2[28];
  *(this + 1) = a2[29];
  *(this + 2) = a2[30];
  return this;
}


//======================================================================
// LayoutFrame::GetLeft(void)
// address: 0x001C1844   size: 0x4 (4 bytes)
//======================================================================
int __fastcall LayoutFrame::GetLeft(LayoutFrame *this)
{
  return *((_DWORD *)this + 15);
}


//======================================================================
// LayoutFrame::GetRight(void)
// address: 0x001C1848   size: 0x4 (4 bytes)
//======================================================================
int __fastcall LayoutFrame::GetRight(LayoutFrame *this)
{
  return *((_DWORD *)this + 17);
}


//======================================================================
// LayoutFrame::GetTop(void)
// address: 0x001C184C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall LayoutFrame::GetTop(LayoutFrame *this)
{
  return *((_DWORD *)this + 16);
}


//======================================================================
// LayoutFrame::GetBottom(void)
// address: 0x001C1850   size: 0x4 (4 bytes)
//======================================================================
int __fastcall LayoutFrame::GetBottom(LayoutFrame *this)
{
  return *((_DWORD *)this + 18);
}


//======================================================================
// LayoutFrame::GetRealHeight(void)
// address: 0x001C1854   size: 0x8 (8 bytes)
//======================================================================
int __fastcall LayoutFrame::GetRealHeight(LayoutFrame *this)
{
  return *((_DWORD *)this + 18) - *((_DWORD *)this + 16);
}


//======================================================================
// LayoutFrame::GetRealWidth(void)
// address: 0x001C185C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall LayoutFrame::GetRealWidth(LayoutFrame *this)
{
  return *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
}


//======================================================================
// LayoutFrame::GetRealLeft(void)
// address: 0x001C1864   size: 0x28 (40 bytes)
//======================================================================
int __fastcall LayoutFrame::GetRealLeft(LayoutFrame *this)
{
  return FloatToInt((float)*((int *)this + 15) / (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr));
}


//======================================================================
// LayoutFrame::GetRealRight(void)
// address: 0x001C1890   size: 0x28 (40 bytes)
//======================================================================
int __fastcall LayoutFrame::GetRealRight(LayoutFrame *this)
{
  return FloatToInt((float)*((int *)this + 17) / (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr));
}


//======================================================================
// LayoutFrame::GetRealTop(void)
// address: 0x001C18BC   size: 0x28 (40 bytes)
//======================================================================
int __fastcall LayoutFrame::GetRealTop(LayoutFrame *this)
{
  return FloatToInt((float)*((int *)this + 16) / (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr));
}


//======================================================================
// LayoutFrame::GetRealBottom(void)
// address: 0x001C18E8   size: 0x28 (40 bytes)
//======================================================================
int __fastcall LayoutFrame::GetRealBottom(LayoutFrame *this)
{
  return FloatToInt((float)*((int *)this + 18) / (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr));
}


//======================================================================
// LayoutFrame::extendRect(int,int)
// address: 0x001C1914   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall LayoutFrame::extendRect(_DWORD *this, int a2, int a3)
{
  int v3; // r3

  v3 = *(this + 16);
  *(this + 17) = *(this + 15) + a2;
  *(this + 18) = v3 + a3;
  return this;
}


//======================================================================
// LayoutFrame::GetParentFrame(void)
// address: 0x001C1922   size: 0x4 (4 bytes)
//======================================================================
int __fastcall LayoutFrame::GetParentFrame(LayoutFrame *this)
{
  return *((_DWORD *)this + 27);
}


//======================================================================
// LayoutFrame::GetParent(void)
// address: 0x001C1926   size: 0xE (14 bytes)
//======================================================================
UIObject *__fastcall LayoutFrame::GetParent(LayoutFrame *this)
{
  UIObject *result; // r0

  result = *((UIObject **)this + 27);
  if ( result != nullptr )
    return (UIObject *)UIObject::GetName(result);
  return result;
}


//======================================================================
// LayoutFrame::AddAnchor(LayoutAnchor const&)
// address: 0x001C1934   size: 0x1A (26 bytes)
//======================================================================
int __fastcall LayoutFrame::AddAnchor(LayoutFrame *this, const LayoutAnchor *a2)
{
  int v2; // r3

  v2 = *((_DWORD *)this + 43);
  *((_DWORD *)this + 43) = v2 + 1;
  return LayoutAnchor::operator=((int)this + 24 * v2 + 124, (int)a2);
}


//======================================================================
// LayoutFrame::Show(void)
// address: 0x001C1950   size: 0x70 (112 bytes)
//======================================================================
const char *__fastcall LayoutFrame::Show(LayoutFrame *this)
{
  const char *v2; // r0
  const char *result; // r0
  const char *v4; // r0

  *((_BYTE *)this + 57) = 1;
  if ( UIObject::hasScriptsEvent(this, 37) )
    UIObject::CallScript(this, 37, (const char *)&unk_3FB8EA);
  if ( *((_DWORD *)this + 11) == 6 )
    Frame::AddLevelRecursive(this, 1);
  v2 = (const char *)(*(int (__fastcall **)(LayoutFrame *))(*(_DWORD *)this + 4))(this);
  if ( j_strcmp(v2, "WebBrowerFrame") == 0
    || (v4 = (const char *)(*(int (__fastcall **)(LayoutFrame *))(*(_DWORD *)this + 4))(this),
        (result = (const char *)j_strcmp(v4, "Frame")) == nullptr) )
  {
    result = *((const char **)this + 98);
    if ( *((_DWORD *)result - 3) != 0 )
      return (const char *)playUISound(result);
  }
  return result;
}


//======================================================================
// LayoutFrame::Hide(void)
// address: 0x001C19CC   size: 0x66 (102 bytes)
//======================================================================
int __fastcall LayoutFrame::Hide(LayoutFrame *this)
{
  const char *v2; // r0
  int result; // r0
  const char *v4; // r0

  *((_BYTE *)this + 57) = 0;
  if ( UIObject::hasScriptsEvent(this, 17) )
    UIObject::CallScript(this, 17, (const char *)&unk_3FB8EA);
  v2 = (const char *)(*(int (__fastcall **)(LayoutFrame *))(*(_DWORD *)this + 4))(this);
  result = j_strcmp(v2, "WebBrowerFrame");
  if ( result == 0
    || (v4 = (const char *)(*(int (__fastcall **)(LayoutFrame *))(*(_DWORD *)this + 4))(this),
        (result = j_strcmp(v4, "Frame")) == 0) )
  {
    if ( *(_DWORD *)(*((_DWORD *)this + 98) - 12) != 0 )
      return playUISound(*((const char **)this + 99));
  }
  return result;
}


//======================================================================
// LayoutFrame::DrawShow(bool)
// address: 0x001C1A40   size: 0x12 (18 bytes)
//======================================================================
bool *__fastcall LayoutFrame::DrawShow(LayoutFrame *this, int a2)
{
  bool *result; // r0

  result = (bool *)this + 57;
  *result = a2 != 0;
  return result;
}


//======================================================================
// LayoutFrame::IsShown(void)
// address: 0x001C1A52   size: 0x18 (24 bytes)
//======================================================================
int __fastcall LayoutFrame::IsShown(LayoutFrame *this)
{
  LayoutFrame *v2; // r0
  int result; // r0

  v2 = *((LayoutFrame **)this + 27);
  if ( v2 == nullptr )
    return *((unsigned __int8 *)this + 57);
  result = LayoutFrame::IsShown(v2);
  if ( result != 0 )
    return *((unsigned __int8 *)this + 57);
  return result;
}


//======================================================================
// LayoutFrame::Active(void)
// address: 0x001C1A6A   size: 0x1C (28 bytes)
//======================================================================
char *__fastcall LayoutFrame::Active(LayoutFrame *this)
{
  char *result; // r0

  result = (char *)LayoutFrame::IsShown(this);
  if ( result != nullptr && *((_DWORD *)this + 11) == 6 )
    return Frame::AddLevelRecursive(this, 1);
  return result;
}


//======================================================================
// LayoutFrame::GetAnchorOffsetX(void)
// address: 0x001C1A86   size: 0xA (10 bytes)
//======================================================================
int __fastcall LayoutFrame::GetAnchorOffsetX(LayoutFrame *this)
{
  return LayoutDim::GetX((LayoutFrame *)((char *)this + 136));
}


//======================================================================
// LayoutFrame::GetAnchorOffsetY(void)
// address: 0x001C1A90   size: 0xA (10 bytes)
//======================================================================
int __fastcall LayoutFrame::GetAnchorOffsetY(LayoutFrame *this)
{
  return LayoutDim::GetY((LayoutFrame *)((char *)this + 136));
}


//======================================================================
// LayoutFrame::onAnchorChanged(void)
// address: 0x001C1A9C   size: 0x32 (50 bytes)
//======================================================================
int __fastcall LayoutFrame::onAnchorChanged(LayoutFrame *this)
{
  unsigned int v2; // r4
  int result; // r0
  int v4; // r3

  v2 = 0;
  for ( result = FrameManager::AddReCalFrame(__SPAIR64__((unsigned int)this, g_pFrameMgr));
        ;
        result = LayoutFrame::onAnchorChanged(*(LayoutFrame **)(4 * v2++ + v4)) )
  {
    v4 = *((_DWORD *)this + 44);
    if ( v2 >= (*((_DWORD *)this + 45) - v4) >> 2 )
      break;
  }
  return result;
}


//======================================================================
// LayoutFrame::SetViewStartPoint(int,int)
// address: 0x001C1AD4   size: 0x6 (6 bytes)
//======================================================================
int __fastcall LayoutFrame::SetViewStartPoint(int this, int a2, int a3)
{
  *(_DWORD *)(this + 92) = a2;
  *(_DWORD *)(this + 96) = a3;
  return this;
}


//======================================================================
// LayoutFrame::IncreaseViewStartPoint(int,int)
// address: 0x001C1ADA   size: 0xE (14 bytes)
//======================================================================
int __fastcall LayoutFrame::IncreaseViewStartPoint(int this, int a2, int a3)
{
  int v3; // r3

  v3 = *(_DWORD *)(this + 96);
  *(_DWORD *)(this + 92) += a2;
  *(_DWORD *)(this + 96) = v3 + a3;
  return this;
}


//======================================================================
// LayoutFrame::GetFramePoint(FRAMEPOINT_T,int &,int &)
// address: 0x001C1AE8   size: 0x70 (112 bytes)
//======================================================================
__int64 __fastcall LayoutFrame::GetFramePoint(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // r5
  int v5; // r7
  int v6; // r6
  int v7; // r4
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = a1;
  v4 = a1[15];
  HIDWORD(v9) = a1[17];
  v5 = HIDWORD(v9) - v4;
  v6 = a1[18] - a1[16];
  switch ( a2 )
  {
    case 0:
      goto LABEL_5;
    case 1:
      *a3 = HIDWORD(v9);
      goto LABEL_6;
    case 2:
      goto LABEL_8;
    case 3:
      *a3 = HIDWORD(v9);
      goto LABEL_9;
    case 4:
      v4 += v5 / 2;
LABEL_5:
      *a3 = v4;
LABEL_6:
      v7 = a1[16];
      goto LABEL_10;
    case 5:
      v4 += v5 / 2;
LABEL_8:
      *a3 = v4;
LABEL_9:
      v7 = a1[18];
LABEL_10:
      *a4 = v7;
      return v9;
    case 6:
      goto LABEL_13;
    case 7:
      *a3 = HIDWORD(v9);
      goto LABEL_14;
    case 8:
      v4 += v5 / 2;
LABEL_13:
      *a3 = v4;
LABEL_14:
      *a4 = a1[16] + v6 / 2;
      break;
    default:
      return v9;
  }
  return v9;
}


//======================================================================
// LayoutFrame::GetAbsRect(Ogre::TRect<int> &)
// address: 0x001C1BDC   size: 0x1E4 (484 bytes)
//======================================================================
int __fastcall LayoutFrame::GetAbsRect(int a1, int *a2)
{
  LayoutDim *v3; // r7
  _DWORD *v4; // r3
  int v6; // r0
  int v7; // r0
  int v8; // r7
  unsigned int v9; // r6
  int v10; // r0
  int v11; // r2
  int v12; // r3
  int v13; // r5
  int v14; // r5
  int v15; // r7
  int result; // r0
  int v17; // [sp+8h] [bp-1Ch]
  int v18; // [sp+10h] [bp-14h] BYREF
  int v19; // [sp+14h] [bp-10h] BYREF
  int v20; // [sp+18h] [bp-Ch] BYREF
  int v21; // [sp+1Ch] [bp-8h] BYREF

  v3 = (LayoutDim *)(a1 + 112);
  v4 = *(_DWORD **)(a1 + 108);
  v20 = 0;
  v21 = 0;
  sub_1C1B58(&v18, &v19, a1 + 124, v4);
  v6 = LayoutDim::GetX(v3);
  v17 = sub_1C0F84(*(float *)&v6, *(unsigned __int8 *)v3, 1, *(_DWORD **)(a1 + 108));
  v7 = LayoutDim::GetY(v3);
  v8 = sub_1C0F84(*(float *)&v7, *(unsigned __int8 *)(a1 + 113), 0, *(_DWORD **)(a1 + 108));
  v9 = 9;
  if ( *(_DWORD *)(a1 + 172) == 2 )
  {
    v9 = *(_DWORD *)(a1 + 148);
    sub_1C1B58(&v20, &v21, a1 + 148, *(_DWORD **)(a1 + 108));
  }
  v10 = *(_DWORD *)(a1 + 124);
  v11 = v18;
  v12 = v19;
  if ( (v10 & 0xFFFFFFFD) != 0 && v10 != 6 )
  {
    if ( (v10 & 0xFFFFFFFD) == 1 || v10 == 7 )
    {
      if ( (v9 & 0xFFFFFFFD) != 0 && v9 != 6 )
      {
        if ( v9 - 4 <= 1 || v9 == 8 )
          v17 = 2 * (v18 - v20);
        goto LABEL_30;
      }
      v13 = v18 - v20;
    }
    else
    {
      if ( (unsigned int)(v10 - 4) > 1 && v10 != 8 )
        goto LABEL_30;
      if ( (v9 & 0xFFFFFFFD) == 1 || v9 == 7 )
      {
        v14 = v20 - v18;
      }
      else
      {
        if ( (v9 & 0xFFFFFFFD) != 0 && v9 != 6 )
          goto LABEL_30;
        v14 = v18 - v20;
      }
      v13 = 2 * v14;
    }
    v17 = v13;
    goto LABEL_30;
  }
  if ( (v9 & 0xFFFFFFFD) == 1 || v9 == 7 )
  {
    v17 = v20 - v18;
  }
  else if ( v9 - 4 <= 1 || v9 == 8 )
  {
    v17 = 2 * (v20 - v18);
  }
  if ( v10 == 0 )
  {
LABEL_32:
    if ( v9 - 2 <= 1 || v9 == 5 )
    {
      v8 = v21 - v19;
      goto LABEL_52;
    }
    if ( v9 - 6 <= 2 )
    {
      v15 = v21 - v19;
LABEL_51:
      v8 = 2 * v15;
      goto LABEL_52;
    }
    goto LABEL_52;
  }
LABEL_30:
  if ( v10 == 4 || v10 == 1 )
    goto LABEL_32;
  if ( (unsigned int)(v10 - 2) <= 1 || v10 == 5 )
  {
    if ( v9 <= 1 || v9 == 4 )
    {
      v8 = v19 - v21;
      goto LABEL_52;
    }
    if ( v9 - 6 > 2 )
      goto LABEL_52;
LABEL_50:
    v15 = v19 - v21;
    goto LABEL_51;
  }
  if ( (unsigned int)(v10 - 6) <= 2 )
  {
    if ( v9 - 2 <= 1 || v9 == 5 )
    {
      v15 = v21 - v19;
      goto LABEL_51;
    }
    if ( v9 <= 1 || v9 == 4 )
      goto LABEL_50;
  }
LABEL_52:
  switch ( v10 )
  {
    case 0:
      goto LABEL_56;
    case 1:
      v11 = v18 - v17;
      goto LABEL_56;
    case 2:
      goto LABEL_58;
    case 3:
      v11 = v18 - v17;
      goto LABEL_58;
    case 4:
      v11 = v18 - v17 / 2;
LABEL_56:
      *a2 = v11;
      goto LABEL_62;
    case 5:
      v11 = v18 - v17 / 2;
LABEL_58:
      *a2 = v11;
      v12 -= v8;
      goto LABEL_62;
    case 6:
      goto LABEL_61;
    case 7:
      v11 = v18 - v17;
      goto LABEL_61;
    case 8:
      v11 = v18 - v17 / 2;
LABEL_61:
      *a2 = v11;
      v12 -= v8 / 2;
LABEL_62:
      a2[1] = v12;
      break;
    default:
      break;
  }
  result = a2[1];
  a2[2] = *a2 + v17;
  a2[3] = result + v8;
  return result;
}


//======================================================================
// LayoutFrame::CalAbsRectSelf(unsigned int)
// address: 0x001C1DC0   size: 0x60 (96 bytes)
//======================================================================
__int64 __fastcall LayoutFrame::CalAbsRectSelf(LayoutFrame *this, unsigned int a2)
{
  char *v3; // r5
  int v5; // r7
  _DWORD *LayoutFrame; // r0
  __int64 v8; // [sp+0h] [bp-Ch]

  LODWORD(v8) = this;
  v3 = (char *)this + 132;
  *((_DWORD *)this + 26) = a2;
  v5 = 0;
  HIDWORD(v8) = (char *)this + 132;
  while ( v5 < *((_DWORD *)this + 43) )
  {
    if ( *(_DWORD *)(*(_DWORD *)(HIDWORD(v8) + v3 - (char *)this - 132) - 12) != 0 )
    {
      LayoutFrame = (_DWORD *)FrameManager::FindLayoutFrame(g_pFrameMgr);
      if ( LayoutFrame != nullptr && LayoutFrame[26] != a2 )
        (*(void (__fastcall **)(_DWORD *, unsigned int))(*LayoutFrame + 24))(LayoutFrame, a2);
    }
    ++v5;
    v3 += 24;
  }
  LayoutFrame::GetAbsRect((int)this, (int *)this + 15);
  return v8;
}


//======================================================================
// LayoutFrame::PointInLayoutFrame(int,int)
// address: 0x001C1E24   size: 0x28 (40 bytes)
//======================================================================
bool __fastcall LayoutFrame::PointInLayoutFrame(LayoutFrame *this, int a2, int a3)
{
  int v4; // r4
  _BOOL4 result; // r0

  v4 = *((_DWORD *)this + 15);
  result = false;
  if ( v4 < a2 && a2 < *((_DWORD *)this + 17) && *((_DWORD *)this + 16) < a3 )
    return a3 < *((_DWORD *)this + 18);
  return result;
}


//======================================================================
// LayoutFrame::GetClientID(void)
// address: 0x001C1E4C   size: 0x6 (6 bytes)
//======================================================================
int __fastcall LayoutFrame::GetClientID(LayoutFrame *this)
{
  return *((_DWORD *)this + 47);
}


//======================================================================
// LayoutFrame::SetClientID(int)
// address: 0x001C1E52   size: 0x6 (6 bytes)
//======================================================================
_DWORD *__fastcall LayoutFrame::SetClientID(LayoutFrame *this, int a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)((char *)this + 188);
  *result = a2;
  return result;
}


//======================================================================
// LayoutFrame::SetClientUserData(int,int)
// address: 0x001C1E58   size: 0x8 (8 bytes)
//======================================================================
int __fastcall LayoutFrame::SetClientUserData(int this, int a2, int a3)
{
  *(_DWORD *)(4 * (a2 + 48) + this) = a3;
  return this;
}


//======================================================================
// LayoutFrame::GetClientUserData(int)
// address: 0x001C1E60   size: 0x8 (8 bytes)
//======================================================================
int __fastcall LayoutFrame::GetClientUserData(LayoutFrame *this, int a2)
{
  return *((_DWORD *)this + a2 + 48);
}


//======================================================================
// LayoutFrame::SetClientString(char const*)
// address: 0x001C1E68   size: 0xA (10 bytes)
//======================================================================
int __fastcall LayoutFrame::SetClientString(LayoutFrame *this, char *a2)
{
  return sub_3BE508((int)this + 220, a2);
}


//======================================================================
// LayoutFrame::GetClientString(void)
// address: 0x001C1E72   size: 0x6 (6 bytes)
//======================================================================
int __fastcall LayoutFrame::GetClientString(LayoutFrame *this)
{
  return *((_DWORD *)this + 55);
}


//======================================================================
// LayoutFrame::getFrameDrawLevel(void)
// address: 0x001C1E78   size: 0x4 (4 bytes)
//======================================================================
int __fastcall LayoutFrame::getFrameDrawLevel(LayoutFrame *this)
{
  return *((_DWORD *)this + 12);
}


//======================================================================
// LayoutFrame::setInputTransparent(bool)
// address: 0x001C1E7C   size: 0x6 (6 bytes)
//======================================================================
_BYTE *__fastcall LayoutFrame::setInputTransparent(LayoutFrame *this, bool a2)
{
  _BYTE *result; // r0

  result = (char *)this + 58;
  *result = a2;
  return result;
}


//======================================================================
// LayoutFrame::SetFrameDraw(bool)
// address: 0x001C1E82   size: 0x6 (6 bytes)
//======================================================================
_BYTE *__fastcall LayoutFrame::SetFrameDraw(LayoutFrame *this, bool a2)
{
  _BYTE *result; // r0

  result = (char *)this + 100;
  *result = a2;
  return result;
}


//======================================================================
// LayoutFrame::MoveFrameAbsrect(int,int)
// address: 0x001C1E88   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall LayoutFrame::MoveFrameAbsrect(_DWORD *this, int a2, int a3)
{
  int v3; // r4
  int v4; // r1

  *(this + 15) += a2;
  v3 = *(this + 16);
  *(this + 17) += a2;
  v4 = *(this + 18);
  *(this + 16) = v3 + a3;
  *(this + 18) = v4 + a3;
  return this;
}


//======================================================================
// LayoutFrame::getFrameSizeX(void)
// address: 0x001C1EA4   size: 0x34 (52 bytes)
//======================================================================
float __fastcall LayoutFrame::getFrameSizeX(LayoutFrame *this)
{
  LayoutDim *v2; // r0

  v2 = (LayoutFrame *)((char *)this + 112);
  if ( *(_BYTE *)v2 != 0 && *((_DWORD *)this + 27) != 0 )
    return COERCE_FLOAT(LayoutDim::GetX(v2))
         * (float)(*(_DWORD *)(*((_DWORD *)this + 27) + 68) - *(_DWORD *)(*((_DWORD *)this + 27) + 60));
  else
    return COERCE_FLOAT(LayoutDim::GetX(v2));
}


//======================================================================
// LayoutFrame::getFrameSizeY(void)
// address: 0x001C1ED8   size: 0x38 (56 bytes)
//======================================================================
float __fastcall LayoutFrame::getFrameSizeY(LayoutFrame *this)
{
  int v1; // r3
  LayoutDim *v3; // r0

  v1 = *((unsigned __int8 *)this + 113);
  v3 = (LayoutFrame *)((char *)this + 112);
  if ( v1 != 0 && *((_DWORD *)this + 27) != 0 )
    return COERCE_FLOAT(LayoutDim::GetY(v3))
         * (float)(*(_DWORD *)(*((_DWORD *)this + 27) + 72) - *(_DWORD *)(*((_DWORD *)this + 27) + 64));
  else
    return COERCE_FLOAT(LayoutDim::GetY(v3));
}


//======================================================================
// LayoutFrame::~LayoutFrame()
// address: 0x001C1F10   size: 0x4A (74 bytes)
//======================================================================
// Alternative name is '_ZN11LayoutFrameD1Ev'
void __fastcall LayoutFrame::~LayoutFrame(LayoutFrame *this)
{
  void *v2; // r0
  LayoutAnchor *i; // r5

  *(_DWORD *)this = &off_4591B0;
  sub_3BDF80((char *)this + 220);
  v2 = *((void **)this + 44);
  if ( v2 != nullptr )
    operator delete(v2);
  for ( i = (LayoutFrame *)((char *)this + 172); i != (LayoutFrame *)((char *)this + 124); LayoutAnchor::~LayoutAnchor(i) )
    i = (LayoutAnchor *)((char *)i - 24);
  LayoutDim::~LayoutDim((LayoutFrame *)((char *)this + 112));
  UIObject::~UIObject(this);
}


//======================================================================
// LayoutFrame::~LayoutFrame()
// address: 0x001C1F60   size: 0x12 (18 bytes)
//======================================================================
void __fastcall LayoutFrame::~LayoutFrame(LayoutFrame *this)
{
  LayoutFrame::~LayoutFrame(this);
  operator delete(this);
}


//======================================================================
// LayoutFrame::removeRelFrames(LayoutFrame*)
// address: 0x001C1F72   size: 0x22 (34 bytes)
//======================================================================
int *__fastcall LayoutFrame::removeRelFrames(LayoutFrame *this, LayoutFrame *a2)
{
  char *v2; // r4
  int *result; // r0
  int *v4; // r2
  int v5; // r1

  v2 = (char *)this + 176;
  result = (int *)((char *)this + 180);
  v4 = *(int **)v2;
  v5 = *result;
  if ( *(_DWORD *)v2 != *result )
  {
    result = v4 + 1;
    if ( v4 + 1 != (int *)v5 )
      result = (int *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<LayoutFrame *>(
                        result,
                        v5,
                        v4);
    *((_DWORD *)v2 + 1) -= 4;
  }
  return result;
}


//======================================================================
// LayoutFrame::AddRelFrame(LayoutFrame*)
// address: 0x001C1F94   size: 0x9A (154 bytes)
//======================================================================
__int64 __fastcall LayoutFrame::AddRelFrame(__int64 this)
{
  int v1; // r4
  int v2; // r3
  int v3; // r2
  int v4; // r5
  __int64 v5; // r0
  _DWORD *v6; // r3
  int v7; // r5
  __int64 v9; // [sp+0h] [bp-8h] BYREF

  v9 = this;
  v1 = this + 176;
  v2 = *(_DWORD *)(this + 176);
  LODWORD(this) = *(_DWORD *)(this + 180);
  v3 = HIDWORD(this);
  v4 = ((int)this - v2) >> 4;
  HIDWORD(v5) = v2;
  while ( 1 )
  {
    v6 = (_DWORD *)HIDWORD(v5);
    if ( v4 <= 0 )
      break;
    if ( *(_DWORD *)HIDWORD(v5) == v3 )
      goto LABEL_21;
    if ( *(_DWORD *)(HIDWORD(v5) + 4) == v3 )
    {
      HIDWORD(v5) += 4;
      goto LABEL_21;
    }
    if ( *(_DWORD *)(HIDWORD(v5) + 8) == v3 )
    {
      HIDWORD(v5) += 8;
      goto LABEL_21;
    }
    HIDWORD(v5) += 16;
    if ( *(_DWORD *)(HIDWORD(v5) - 4) == v3 )
    {
      HIDWORD(v5) = v6 + 3;
      goto LABEL_21;
    }
    --v4;
  }
  v7 = ((int)v5 - HIDWORD(v5)) >> 2;
  if ( v7 != 2 )
  {
    if ( v7 != 3 )
    {
      HIDWORD(v5) = v5;
      if ( v7 != 1 )
        goto LABEL_22;
LABEL_19:
      HIDWORD(v5) = v5;
      if ( *v6 != v3 )
        goto LABEL_22;
      goto LABEL_20;
    }
    if ( *(_DWORD *)HIDWORD(v5) == v3 )
      goto LABEL_21;
    v6 = (_DWORD *)(HIDWORD(v5) + 4);
  }
  if ( *v6 != v3 )
  {
    ++v6;
    goto LABEL_19;
  }
LABEL_20:
  HIDWORD(v5) = v6;
LABEL_21:
  if ( HIDWORD(v5) != (_DWORD)v5 )
    return v9;
LABEL_22:
  if ( HIDWORD(v5) == *(_DWORD *)(v1 + 8) )
  {
    LODWORD(v5) = v1;
    std::vector<LayoutFrame *>::_M_insert_aux(v5, (_DWORD *)&v9 + 1);
  }
  else
  {
    if ( HIDWORD(v5) != 0 )
      *(_DWORD *)HIDWORD(v5) = v3;
    *(_DWORD *)(v1 + 4) += 4;
  }
  return v9;
}


//======================================================================
// LayoutFrame::SetPoint(FRAMEPOINT_T,char const*,FRAMEPOINT_T,int,int)
// address: 0x001C2030   size: 0x9C (156 bytes)
//======================================================================
void __fastcall LayoutFrame::SetPoint(const char **a1, int a2, char *a3, int a4, int a5, int a6)
{
  char *v6; // r6
  int v7; // r7
  LayoutFrame *LayoutFrame; // r0
  int v9; // r5
  int v10; // r5
  unsigned __int16 v14[8]; // [sp+14h] [bp-10h] BYREF

  v6 = a3;
  if ( a3 == nullptr )
    v6 = (char *)dword_50FC38;
  v7 = (int)(a1 + 33);
  if ( j_strcmp(a1[33], v6) != 0 )
  {
    LayoutFrame = (LayoutFrame *)FrameManager::FindLayoutFrame(g_pFrameMgr);
    if ( LayoutFrame != nullptr )
      LayoutFrame::removeRelFrames(LayoutFrame, (LayoutFrame *)a1);
    v9 = g_pFrameMgr;
    sub_3BF0BC((int)v14, v6);
    v10 = FrameManager::FindLayoutFrame(v9);
    sub_3BDF80(v14);
    if ( v10 != 0 )
      LayoutFrame::AddRelFrame(__SPAIR64__((unsigned int)a1, v10));
    sub_3BE508(v7, v6);
  }
  LayoutDim::LayoutDim((LayoutDim *)v14);
  LayoutDim::SetAbsDim((LayoutDim *)v14, a5, a6);
  LayoutAnchor::SetPoint((int)(a1 + 31), a2, a4, v14);
  LayoutFrame::onAnchorChanged((LayoutFrame *)a1);
  LayoutDim::~LayoutDim((LayoutDim *)v14);
}


//======================================================================
// LayoutFrame::SetPoint(char const*,char const*,char const*,int,int)
// address: 0x001C20D4   size: 0x2C (44 bytes)
//======================================================================
int __fastcall LayoutFrame::SetPoint(const char **this, LayoutFrame *a2, char *a3, LayoutFrame *a4, int a5, int a6)
{
  int v9; // r5
  const char *v10; // r1
  int v11; // r0
  int v13; // [sp+0h] [bp-Ch]

  v9 = LayoutFrame::Name2FP(a2, (const char *)a2);
  v11 = LayoutFrame::Name2FP(a4, v10);
  LayoutFrame::SetPoint(this, v9, a3, v11, a5, a6);
  return v13;
}


//======================================================================
// LayoutFrame::PostInit(void)
// address: 0x001C2100   size: 0x34 (52 bytes)
//======================================================================
int __fastcall LayoutFrame::PostInit(LayoutFrame *this)
{
  __int64 v2; // r0
  __int64 v3; // r0

  LODWORD(v2) = FrameManager::FindLayoutFrame(g_pFrameMgr);
  if ( (_DWORD)v2 != 0 )
  {
    HIDWORD(v2) = this;
    LayoutFrame::AddRelFrame(v2);
  }
  LODWORD(v3) = FrameManager::FindLayoutFrame(g_pFrameMgr);
  if ( (_DWORD)v3 != 0 )
  {
    HIDWORD(v3) = this;
    LODWORD(v3) = LayoutFrame::AddRelFrame(v3);
  }
  return v3;
}

