// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ScrollFrame

//======================================================================
// ScrollFrame::GetTypeName(void)
// address: 0x001C612C   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall ScrollFrame::GetTypeName(ScrollFrame *this)
{
  return "ScrollFrame";
}


//======================================================================
// ScrollFrame::AdjustFrameByViewPoint(void)
// address: 0x001C6138   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall ScrollFrame::AdjustFrameByViewPoint(_DWORD *this)
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
// ScrollFrame::~ScrollFrame()
// address: 0x001C6160   size: 0x38 (56 bytes)
//======================================================================
// Alternative name is '_ZN11ScrollFrameD1Ev'
void __fastcall ScrollFrame::~ScrollFrame(ScrollFrame *this)
{
  _DWORD *v2; // r0
  int v3; // r3

  *(_DWORD *)this = &off_459348;
  v2 = *((_DWORD **)this + 104);
  if ( v2 != nullptr )
  {
    v3 = v2[10] - 1;
    v2[10] = v3;
    if ( v3 == 0 )
      (*(void (__fastcall **)(_DWORD *))(*v2 + 12))(v2);
    *((_DWORD *)this + 104) = 0;
  }
  Frame::~Frame(this);
}


//======================================================================
// ScrollFrame::~ScrollFrame()
// address: 0x001C619C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ScrollFrame::~ScrollFrame(ScrollFrame *this)
{
  ScrollFrame::~ScrollFrame(this);
  operator delete(this);
}


//======================================================================
// ScrollFrame::ScrollFrame(void)
// address: 0x001C61B0   size: 0x80 (128 bytes)
//======================================================================
// Alternative name is '_ZN11ScrollFrameC2Ev'
void __fastcall ScrollFrame::ScrollFrame(ScrollFrame *this)
{
  Frame::Frame(this);
  *(_DWORD *)this = &off_459348;
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 109) = 0;
  *((_DWORD *)this + 111) = 0;
  *((_DWORD *)this + 112) = 0;
  *((_DWORD *)this + 110) = 0;
  *((_DWORD *)this + 113) = 0;
  *((_DWORD *)this + 114) = 0;
  *((_DWORD *)this + 103) = 1;
  *((_DWORD *)this + 116) = 0;
  *((_BYTE *)this + 468) = 0;
  *((_BYTE *)this + 476) = 0;
  *((_DWORD *)this + 105) = 0;
  *((_DWORD *)this + 107) = 0;
  *((_DWORD *)this + 106) = 0;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 118) = 0;
  Frame::SetClipState(this, 1);
}


//======================================================================
// ScrollFrame::CopyMembers(ScrollFrame*)
// address: 0x001C6234   size: 0xC (12 bytes)
//======================================================================
LayoutFrame *__fastcall ScrollFrame::CopyMembers(LayoutFrame *this, ScrollFrame *a2)
{
  if ( a2 != nullptr )
    return Frame::CopyMembers(this, a2);
  return this;
}


//======================================================================
// ScrollFrame::CreateClone(void)
// address: 0x001C6240   size: 0x1E (30 bytes)
//======================================================================
ScrollFrame *__fastcall ScrollFrame::CreateClone(ScrollFrame *this)
{
  ScrollFrame *v2; // r4

  v2 = (ScrollFrame *)operator new(0x1E0u);
  ScrollFrame::ScrollFrame(v2);
  ScrollFrame::CopyMembers(this, v2);
  return v2;
}


//======================================================================
// ScrollFrame::CanDraw(Ogre::TRect<int> const&)
// address: 0x001C6260   size: 0x62 (98 bytes)
//======================================================================
bool __fastcall ScrollFrame::CanDraw(int a1, int *a2)
{
  int v3; // r6
  float *v4; // r0

  v3 = 0;
  v4 = (float *)(*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 148))(g_pDisplay);
  if ( (float)a2[3] > v4[1] && (float)a2[1] < v4[3] && (float)*a2 < v4[2] )
    return (float)a2[2] > *v4;
  return v3;
}


//======================================================================
// ScrollFrame::CalVerticalScrollRange(void)
// address: 0x001C62C8   size: 0x10A (266 bytes)
//======================================================================
int __fastcall ScrollFrame::CalVerticalScrollRange(ScrollFrame *this)
{
  float v1; // r5
  int v3; // r6
  float v4; // r5
  float v5; // r6
  int v6; // r0
  int result; // r0
  int v8; // [sp+0h] [bp-14h]
  float v9; // [sp+4h] [bp-10h]
  float v10; // [sp+8h] [bp-Ch]
  int v11; // [sp+Ch] [bp-8h]

  v1 = 0.0;
  v11 = (*((_DWORD *)this + 78) - *((_DWORD *)this + 77)) >> 2;
  v8 = 0;
  v9 = 0.0;
  while ( v8 < v11 )
  {
    v3 = *(_DWORD *)(4 * v8 + *((_DWORD *)this + 77));
    if ( LayoutFrame::IsShown((LayoutFrame *)v3) != 0 )
    {
      if ( v9 > COERCE_FLOAT(LayoutDim::GetY((LayoutDim *)(v3 + 136))) )
        v9 = COERCE_FLOAT(LayoutDim::GetY((LayoutDim *)(v3 + 136)));
      v10 = COERCE_FLOAT(LayoutDim::GetY((LayoutDim *)(v3 + 136)));
      if ( v1 < (float)(v10 + (float)LayoutFrame::GetHeight((LayoutFrame *)v3)) )
      {
        v4 = COERCE_FLOAT(LayoutDim::GetY((LayoutDim *)(v3 + 136)));
        v1 = v4 + (float)LayoutFrame::GetHeight((LayoutFrame *)v3);
      }
    }
    ++v8;
  }
  v5 = (float)((((int)(float)(v1 - v9) + ((int)(float)(v1 - v9) >> 31)) ^ ((int)(float)(v1 - v9) >> 31))
             - LayoutFrame::GetHeight(this));
  if ( v5 < 0.0 )
    v6 = 0;
  else
    v6 = (int)j_ceil((float)(v5 / (float)*((int *)this + 103)));
  *((_DWORD *)this + 109) = v6;
  result = v6 * *((_DWORD *)this + 103);
  *((_DWORD *)this + 105) = result;
  return result;
}


//======================================================================
// ScrollFrame::CalHorizonalScrollRange(void)
// address: 0x001C63D2   size: 0x10A (266 bytes)
//======================================================================
int __fastcall ScrollFrame::CalHorizonalScrollRange(ScrollFrame *this)
{
  float v1; // r5
  int v3; // r6
  float v4; // r5
  float v5; // r6
  int v6; // r0
  int result; // r0
  int v8; // [sp+0h] [bp-14h]
  float v9; // [sp+4h] [bp-10h]
  float v10; // [sp+8h] [bp-Ch]
  int v11; // [sp+Ch] [bp-8h]

  v1 = 0.0;
  v11 = (*((_DWORD *)this + 78) - *((_DWORD *)this + 77)) >> 2;
  v8 = 0;
  v9 = 0.0;
  while ( v8 < v11 )
  {
    v3 = *(_DWORD *)(4 * v8 + *((_DWORD *)this + 77));
    if ( LayoutFrame::IsShown((LayoutFrame *)v3) != 0 )
    {
      if ( v9 > COERCE_FLOAT(LayoutDim::GetX((LayoutDim *)(v3 + 136))) )
        v9 = COERCE_FLOAT(LayoutDim::GetX((LayoutDim *)(v3 + 136)));
      v10 = COERCE_FLOAT(LayoutDim::GetX((LayoutDim *)(v3 + 136)));
      if ( v1 < (float)(v10 + (float)LayoutFrame::GetWidth((LayoutFrame *)v3)) )
      {
        v4 = COERCE_FLOAT(LayoutDim::GetX((LayoutDim *)(v3 + 136)));
        v1 = v4 + (float)LayoutFrame::GetWidth((LayoutFrame *)v3);
      }
    }
    ++v8;
  }
  v5 = (float)((((int)(float)(v1 - v9) + ((int)(float)(v1 - v9) >> 31)) ^ ((int)(float)(v1 - v9) >> 31))
             - LayoutFrame::GetWidth(this));
  if ( v5 < 0.0 )
    v6 = 0;
  else
    v6 = (int)j_ceil((float)(v5 / (float)*((int *)this + 103)));
  *((_DWORD *)this + 111) = v6;
  result = v6 * *((_DWORD *)this + 103);
  *((_DWORD *)this + 107) = result;
  return result;
}


//======================================================================
// ScrollFrame::SetValueStep(int)
// address: 0x001C64DC   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ScrollFrame::SetValueStep(int this, int a2)
{
  *(_DWORD *)(this + 412) = a2;
  return this;
}


//======================================================================
// ScrollFrame::GetValueStep(void)
// address: 0x001C64E4   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ScrollFrame::GetValueStep(ScrollFrame *this)
{
  return *((_DWORD *)this + 103);
}


//======================================================================
// ScrollFrame::GetVerticalOffset(void)
// address: 0x001C64EC   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ScrollFrame::GetVerticalOffset(ScrollFrame *this)
{
  return *((_DWORD *)this + 110);
}


//======================================================================
// ScrollFrame::SetVerticalScrollRange(int)
// address: 0x001C64F4   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ScrollFrame::SetVerticalScrollRange(int this, int a2)
{
  *(_DWORD *)(this + 436) = a2;
  return this;
}


//======================================================================
// ScrollFrame::GetVerticalScrollRange(void)
// address: 0x001C64FC   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ScrollFrame::GetVerticalScrollRange(ScrollFrame *this)
{
  return *((_DWORD *)this + 109);
}


//======================================================================
// ScrollFrame::GetHorizonalOffset(void)
// address: 0x001C6504   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ScrollFrame::GetHorizonalOffset(ScrollFrame *this)
{
  return *((_DWORD *)this + 112);
}


//======================================================================
// ScrollFrame::SetHorizonalScrollRange(int)
// address: 0x001C650C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ScrollFrame::SetHorizonalScrollRange(int this, int a2)
{
  *(_DWORD *)(this + 428) = a2;
  return this;
}


//======================================================================
// ScrollFrame::GetHorizonalScrollRange(void)
// address: 0x001C6514   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ScrollFrame::GetHorizonalScrollRange(ScrollFrame *this)
{
  return *((_DWORD *)this + 107);
}


//======================================================================
// ScrollFrame::ClampHorizonalScroll(float)
// address: 0x001C651C   size: 0x82 (130 bytes)
//======================================================================
int __fastcall ScrollFrame::ClampHorizonalScroll(ScrollFrame *this, float a2)
{
  float v3; // r5
  int v4; // r0
  int v5; // r6
  int v6; // r5
  int v7; // r3
  int result; // r0

  v3 = (float)(((int)a2 + ((int)a2 >> 31)) ^ ((int)a2 >> 31));
  v4 = (int)(float)((float)FloatToInt(v3) * (float)(a2 / v3));
  v5 = *((_DWORD *)this + 103);
  v6 = *((_DWORD *)this + 108);
  v7 = *((_DWORD *)this + 107);
  if ( v5 * v4 + v6 > v7 )
    v4 = (v7 - v6) / v5;
  if ( v5 * v4 + v6 < 0 )
    v4 = -v6 / v5;
  *((_DWORD *)this + 115) = v4;
  *((_DWORD *)this + 108) = v6 + v5 * v4;
  result = *((_DWORD *)this + 112) + v4;
  *((_DWORD *)this + 112) = result;
  return result;
}


//======================================================================
// ScrollFrame::ClampVerticalScroll(float)
// address: 0x001C659E   size: 0x82 (130 bytes)
//======================================================================
int __fastcall ScrollFrame::ClampVerticalScroll(ScrollFrame *this, float a2)
{
  float v3; // r5
  int v4; // r0
  int v5; // r6
  int v6; // r5
  int v7; // r3
  int result; // r0

  v3 = (float)(((int)a2 + ((int)a2 >> 31)) ^ ((int)a2 >> 31));
  v4 = (int)(float)((float)FloatToInt(v3) * (float)(a2 / v3));
  v5 = *((_DWORD *)this + 103);
  v6 = *((_DWORD *)this + 106);
  v7 = *((_DWORD *)this + 105);
  if ( v5 * v4 + v6 > v7 )
    v4 = (v7 - v6) / v5;
  if ( v5 * v4 + v6 < 0 )
    v4 = -v6 / v5;
  *((_DWORD *)this + 116) = v4;
  *((_DWORD *)this + 106) = v6 + v5 * v4;
  result = *((_DWORD *)this + 110) + v4;
  *((_DWORD *)this + 110) = result;
  return result;
}


//======================================================================
// ScrollFrame::IncreaseScrollChildRect(float,float)
// address: 0x001C6620   size: 0xCC (204 bytes)
//======================================================================
int __fastcall ScrollFrame::IncreaseScrollChildRect(ScrollFrame *this, float a2, float a3)
{
  int result; // r0
  int v6; // r7
  int v7; // r2
  int v8; // r5
  float v9; // r0
  int v10; // [sp+14h] [bp-20h]
  int v11; // [sp+18h] [bp-1Ch]
  int v12; // [sp+1Ch] [bp-18h]
  int v13; // [sp+20h] [bp-14h]
  char *v14; // [sp+24h] [bp-10h]
  _DWORD v15[2]; // [sp+2Ch] [bp-8h] BYREF

  ScrollFrame::ClampHorizonalScroll(this, a2);
  result = ScrollFrame::ClampVerticalScroll(this, a3);
  v6 = 0;
  v13 = (*((_DWORD *)this + 78) - *((_DWORD *)this + 77)) >> 2;
  while ( v6 != v13 )
  {
    v7 = 4 * v6++;
    v8 = *(_DWORD *)(v7 + *((_DWORD *)this + 77));
    v11 = *(_DWORD *)(v8 + 124);
    LayoutAnchor::GetRelFrame((LayoutAnchor *)v15, v8 + 124);
    v14 = (char *)v15[0];
    v12 = *(_DWORD *)(v8 + 128);
    v10 = (int)(float)(COERCE_FLOAT(LayoutDim::GetX((LayoutDim *)(v8 + 136)))
                     + (float)(-*((_DWORD *)this + 115) * *((_DWORD *)this + 103)));
    v9 = COERCE_FLOAT(LayoutDim::GetY((LayoutDim *)(v8 + 136)));
    LayoutFrame::SetPoint(
      (const char **)v8,
      v11,
      v14,
      v12,
      v10,
      (int)(float)(v9 + (float)(-*((_DWORD *)this + 116) * *((_DWORD *)this + 103))));
    result = sub_3BDF80(v15);
  }
  return result;
}


//======================================================================
// ScrollFrame::SetScrollChildRect(float,float)
// address: 0x001C66EC   size: 0x3A (58 bytes)
//======================================================================
int __fastcall ScrollFrame::SetScrollChildRect(ScrollFrame *this, float a2, float a3)
{
  return ScrollFrame::IncreaseScrollChildRect(this, a2 - (float)*((int *)this + 112), a3 - (float)*((int *)this + 110));
}


//======================================================================
// ScrollFrame::SetVerticalScroll(float)
// address: 0x001C6726   size: 0xC (12 bytes)
//======================================================================
int __fastcall ScrollFrame::SetVerticalScroll(ScrollFrame *this, float a2)
{
  return ScrollFrame::SetScrollChildRect(this, 0.0, a2);
}


//======================================================================
// ScrollFrame::SetHorizonalScroll(float)
// address: 0x001C6732   size: 0xA (10 bytes)
//======================================================================
int __fastcall ScrollFrame::SetHorizonalScroll(ScrollFrame *this, float a2)
{
  return ScrollFrame::SetScrollChildRect(this, a2, 0.0);
}


//======================================================================
// ScrollFrame::IncreaseVerticalScroll(float)
// address: 0x001C673C   size: 0xC (12 bytes)
//======================================================================
int __fastcall ScrollFrame::IncreaseVerticalScroll(ScrollFrame *this, float a2)
{
  return ScrollFrame::IncreaseScrollChildRect(this, 0.0, a2);
}


//======================================================================
// ScrollFrame::IncreaseHorizonalScroll(float)
// address: 0x001C6748   size: 0xA (10 bytes)
//======================================================================
int __fastcall ScrollFrame::IncreaseHorizonalScroll(ScrollFrame *this, float a2)
{
  return ScrollFrame::IncreaseScrollChildRect(this, a2, 0.0);
}


//======================================================================
// ScrollFrame::AdjustChildren(void)
// address: 0x001C67C4   size: 0xE0 (224 bytes)
//======================================================================
int __fastcall ScrollFrame::AdjustChildren(ScrollFrame *this)
{
  int i; // r7
  int v3; // r5
  int v4; // r3
  int v5; // r2
  int v6; // r1
  __int64 v7; // r0
  int result; // r0
  int v9; // [sp+8h] [bp-1Ch]
  int v10; // [sp+Ch] [bp-18h]
  char *Name; // [sp+10h] [bp-14h]
  int v12; // [sp+14h] [bp-10h]
  int v13; // [sp+18h] [bp-Ch] BYREF
  int v14; // [sp+1Ch] [bp-8h] BYREF

  v12 = (*((_DWORD *)this + 78) - *((_DWORD *)this + 77)) >> 2;
  for ( i = 0; i < v12; ++i )
  {
    v3 = *(_DWORD *)(4 * i + *((_DWORD *)this + 77));
    v4 = *((_DWORD *)this + 15);
    v5 = *(_DWORD *)(v3 + 60);
    v6 = *(_DWORD *)(v3 + 64);
    v13 = v3;
    v9 = v5 - v4;
    v10 = v6 - *((_DWORD *)this + 16);
    Name = (char *)UIObject::GetName(this);
    LayoutFrame::SetPoint(
      (const char **)v3,
      (LayoutFrame *)"topleft",
      Name,
      (LayoutFrame *)"topleft",
      (int)(float)((float)v9 / (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr)),
      (int)(float)((float)v10 / (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr)));
    if ( *((_DWORD **)this + 45) == std::__find<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,Frame *>(
                                      *((_DWORD **)this + 44),
                                      *((_DWORD *)this + 45),
                                      &v13) )
    {
      LODWORD(v7) = (char *)this + 176;
      HIDWORD(v7) = &v14;
      v14 = v13;
      std::vector<LayoutFrame *>::push_back(v7);
    }
  }
  ScrollFrame::CalVerticalScrollRange(this);
  result = ScrollFrame::CalHorizonalScrollRange(this);
  *((_BYTE *)this + 468) = 1;
  *((_DWORD *)this + 118) = (*((_DWORD *)this + 78) - *((_DWORD *)this + 77)) >> 2;
  return result;
}


//======================================================================
// ScrollFrame::reCalChildrenAbs(void)
// address: 0x001C68AC   size: 0x64 (100 bytes)
//======================================================================
_DWORD *__fastcall ScrollFrame::reCalChildrenAbs(_DWORD *this)
{
  _DWORD *v1; // r4
  int i; // r5
  __int64 v3; // r0
  int v4; // [sp+4h] [bp-10h]
  int v5; // [sp+8h] [bp-Ch] BYREF
  int v6; // [sp+Ch] [bp-8h] BYREF

  v1 = this;
  v4 = (*(this + 78) - *(this + 77)) >> 2;
  for ( i = 0; i < v4; ++i )
  {
    v5 = *(_DWORD *)(4 * i + v1[77]);
    this = std::__find<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,Frame *>(
             (_DWORD *)v1[44],
             v1[45],
             &v5);
    if ( (_DWORD *)v1[45] == this )
    {
      LODWORD(v3) = v1 + 44;
      HIDWORD(v3) = &v6;
      v6 = v5;
      this = (_DWORD *)std::vector<LayoutFrame *>::push_back(v3);
    }
  }
  *((_BYTE *)v1 + 476) = 0;
  return this;
}


//======================================================================
// ScrollFrame::Draw(void)
// address: 0x001C6910   size: 0xCA (202 bytes)
//======================================================================
int __fastcall ScrollFrame::Draw(ScrollFrame *this)
{
  int v2; // r6
  int result; // r0
  int v4; // r0
  int v5; // [sp+0h] [bp-1Ch]

  Frame::Draw(this);
  if ( (*((_DWORD *)this + 72) & 8) != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 140))(g_pDisplay);
  v2 = 0;
  v5 = (*((_DWORD *)this + 78) - *((_DWORD *)this + 77)) >> 2;
  while ( v2 != v5 )
  {
    if ( ScrollFrame::CanDraw((int)this, (int *)(*(_DWORD *)(*((_DWORD *)this + 77) + 4 * v2) + 60))
      && LayoutFrame::IsShown(*(LayoutFrame **)(*((_DWORD *)this + 77) + 4 * v2)) != 0 )
    {
      v4 = *(_DWORD *)(*((_DWORD *)this + 77) + 4 * v2);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 32))(v4);
    }
    ++v2;
  }
  result = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 104) + 32))(*((_DWORD *)this + 104));
  if ( (*((_DWORD *)this + 72) & 8) != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 152))(g_pDisplay);
  return result;
}


//======================================================================
// ScrollFrame::Save(TiXmlElement *)
// address: 0x001C69E4   size: 0x5A (90 bytes)
//======================================================================
TiXmlNode *__fastcall ScrollFrame::Save(ScrollFrame *this, TiXmlElement *a2)
{
  TiXmlNode *v3; // r7
  TiXmlElement *v4; // r6
  unsigned int v5; // r4
  int v6; // r3
  int v7; // r0

  v3 = Frame::Save(this, a2);
  if ( *((_DWORD *)this + 77) != *((_DWORD *)this + 78) )
  {
    v4 = (TiXmlElement *)operator new(0x50u);
    v5 = 0;
    TiXmlElement::TiXmlElement(v4, "ScrollChild");
    TiXmlNode::LinkEndChild(v3, v4);
    while ( 1 )
    {
      v6 = *((_DWORD *)this + 77);
      if ( v5 >= (*((_DWORD *)this + 78) - v6) >> 2 )
        break;
      v7 = *(_DWORD *)(4 * v5++ + v6);
      (*(void (__fastcall **)(int, TiXmlElement *))(*(_DWORD *)v7 + 36))(v7, v4);
    }
  }
  return v3;
}


//======================================================================
// ScrollFrame::FindFrameOnPoint(int,int,std::vector<Frame *,std::allocator<Frame *>> &)
// address: 0x001C6A44   size: 0x20 (32 bytes)
//======================================================================
unsigned int __fastcall ScrollFrame::FindFrameOnPoint(LayoutFrame *a1, int a2, int a3, unsigned int a4)
{
  unsigned int result; // r0

  result = LayoutFrame::PointInLayoutFrame(a1, a2, a3);
  if ( result != 0 )
    return Frame::FindFrameOnPoint((unsigned int)a1, a2, a3, a4);
  return result;
}


//======================================================================
// ScrollFrame::CalAbsRectSelf(unsigned int)
// address: 0x001C6A64   size: 0x12 (18 bytes)
//======================================================================
int __fastcall ScrollFrame::CalAbsRectSelf(ScrollFrame *this, unsigned int a2)
{
  int result; // r0

  result = Frame::CalAbsRectSelf(this, a2);
  *((_BYTE *)this + 476) = 1;
  return result;
}


//======================================================================
// ScrollFrame::OnInputMessage(Ogre::InputEvent const&)
// address: 0x001C6A78   size: 0x6A (106 bytes)
//======================================================================
int __fastcall ScrollFrame::OnInputMessage(ScrollFrame *this, const InputEvent *a2)
{
  XtInputCallbackProc ie_proc; // r5
  int v5; // r2
  int v6; // r0

  ie_proc = a2->ie_proc;
  if ( a2->ie_proc == (XtInputCallbackProc)&byte_4 )
  {
    v5 = *((_DWORD *)this + 73);
    if ( (v5 & 2) != 0 )
    {
      *((_DWORD *)this + 73) = v5 & 0xFFFFFFFD;
      if ( UIObject::hasScriptsEvent(this, 4) )
        UIObject::CallScript(this, 4, (const char *)&unk_3FB8EA);
    }
    return 0;
  }
  if ( ie_proc == (XtInputCallbackProc)&byte_9[1] )
  {
    v6 = *((_DWORD *)this + 27);
    if ( v6 != 0 )
      return (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 64))(v6);
    else
      return 1;
  }
  else
  {
    if ( ie_proc == (XtInputCallbackProc)((char *)&dword_0 + 3) )
    {
      if ( *((_BYTE *)this + 57) != 0 )
        *((_DWORD *)this + 73) |= 2u;
      return 0;
    }
    return Frame::OnInputMessage((char **)this, a2);
  }
}


//======================================================================
// ScrollFrame::UpdateSelf(float)
// address: 0x001C6AE8   size: 0x108 (264 bytes)
//======================================================================
int __fastcall ScrollFrame::UpdateSelf(double this)
{
  int v1; // r4

  v1 = LODWORD(this);
  if ( *(_BYTE *)(LODWORD(this) + 57) != 0 )
  {
    LODWORD(this) = Frame::UpdateSelf(this);
    if ( *(_BYTE *)(v1 + 468) == 0 || *(_DWORD *)(v1 + 472) != (*(_DWORD *)(v1 + 312) - *(_DWORD *)(v1 + 308)) >> 2 )
      LODWORD(this) = ScrollFrame::AdjustChildren((ScrollFrame *)v1);
    if ( *(_BYTE *)(v1 + 476) != 0 )
      LODWORD(this) = ScrollFrame::reCalChildrenAbs((_DWORD *)v1);
    if ( *(_DWORD *)(v1 + 464) != 0 )
    {
      LODWORD(this) = UIObject::hasScriptsEvent((UIObject *)v1, 46);
      if ( LODWORD(this) != 0 )
      {
        LODWORD(this) = UIObject::CallScript((UIObject *)v1, 46, "i", *(_DWORD *)(v1 + 464));
        *(_DWORD *)(v1 + 464) = 0;
      }
    }
    if ( *(_DWORD *)(v1 + 460) != 0 )
    {
      LODWORD(this) = UIObject::hasScriptsEvent((UIObject *)v1, 18);
      if ( LODWORD(this) != 0 )
      {
        LODWORD(this) = UIObject::CallScript((UIObject *)v1, 18, "i", *(_DWORD *)(v1 + 460));
        *(_DWORD *)(v1 + 460) = 0;
      }
    }
    if ( *(_DWORD *)(v1 + 456) != *(_DWORD *)(v1 + 444) )
    {
      LODWORD(this) = UIObject::hasScriptsEvent((UIObject *)v1, 36);
      if ( LODWORD(this) != 0 )
        LODWORD(this) = UIObject::CallScript((UIObject *)v1, 36, "i", *(_DWORD *)(v1 + 444));
      *(_DWORD *)(v1 + 456) = *(_DWORD *)(v1 + 444);
    }
    if ( *(_DWORD *)(v1 + 452) != *(_DWORD *)(v1 + 436) )
    {
      LODWORD(this) = UIObject::hasScriptsEvent((UIObject *)v1, 36);
      if ( LODWORD(this) != 0 )
        LODWORD(this) = UIObject::CallScript((UIObject *)v1, 36, "i", *(_DWORD *)(v1 + 436));
      *(_DWORD *)(v1 + 452) = *(_DWORD *)(v1 + 436);
    }
  }
  return LODWORD(this);
}

