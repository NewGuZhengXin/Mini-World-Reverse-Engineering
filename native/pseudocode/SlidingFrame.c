// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: SlidingFrame

//======================================================================
// SlidingFrame::GetTypeName(void)
// address: 0x001A4B3C   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall SlidingFrame::GetTypeName(SlidingFrame *this)
{
  return "SlidingFrame";
}


//======================================================================
// SlidingFrame::SlidingFrame(void)
// address: 0x001A4BA0   size: 0xA4 (164 bytes)
//======================================================================
// Alternative name is '_ZN12SlidingFrameC2Ev'
void __fastcall SlidingFrame::SlidingFrame(SlidingFrame *this)
{
  Frame::Frame(this);
  *(_DWORD *)this = &off_458C88;
  j_memset((char *)this + 416, 0, 0x10u);
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 106) = (char *)this + 416;
  *((_DWORD *)this + 107) = (char *)this + 416;
  *((_BYTE *)this + 437) = 0;
  *((_BYTE *)this + 436) = 0;
  *((_DWORD *)this + 110) = 0;
  *((_DWORD *)this + 111) = 0;
  *((_DWORD *)this + 119) = 0;
  *((_DWORD *)this + 118) = 0;
  *((_DWORD *)this + 115) = 0;
  *((_DWORD *)this + 114) = 0;
  *((_DWORD *)this + 113) = 0;
  *((_DWORD *)this + 112) = 0;
  *((_DWORD *)this + 117) = 0;
  *((_DWORD *)this + 116) = 0;
  *((_DWORD *)this + 121) = 0;
  *((_DWORD *)this + 120) = 0;
  *((_DWORD *)this + 123) = 0;
  *((_DWORD *)this + 122) = 0;
  *((_BYTE *)this + 496) = 1;
  Frame::SetClipState(this, true);
}


//======================================================================
// SlidingFrame::setSlidingPlaneSize(int,int)
// address: 0x001A4C48   size: 0x44 (68 bytes)
//======================================================================
int __fastcall SlidingFrame::setSlidingPlaneSize(SlidingFrame *this, int a2, int a3)
{
  float v6; // r0
  int result; // r0

  v6 = COERCE_FLOAT(FrameManager::GetAllSelfScale((FrameManager *)g_pFrameMgr));
  *((_DWORD *)this + 118) = (int)(float)((float)a2 * v6);
  result = (int)(float)((float)a3 * v6);
  *((_DWORD *)this + 119) = result;
  return result;
}


//======================================================================
// SlidingFrame::getCanMoveTopDistance(void)
// address: 0x001A4C90   size: 0x22 (34 bytes)
//======================================================================
int __fastcall SlidingFrame::getCanMoveTopDistance(SlidingFrame *this)
{
  return (int)(float)((float)sub_1A4B74(*((_DWORD *)this + 111)) - *((float *)this + 115));
}


//======================================================================
// SlidingFrame::getCanMoveLeftDistance(void)
// address: 0x001A4CB2   size: 0x22 (34 bytes)
//======================================================================
int __fastcall SlidingFrame::getCanMoveLeftDistance(SlidingFrame *this)
{
  return (int)(float)((float)sub_1A4B48(*((_DWORD *)this + 110)) - *((float *)this + 114));
}


//======================================================================
// SlidingFrame::getCanMoveBottomDistance(void)
// address: 0x001A4CD4   size: 0x32 (50 bytes)
//======================================================================
int __fastcall SlidingFrame::getCanMoveBottomDistance(SlidingFrame *this)
{
  return (int)(float)((float)((float)*((int *)this + 119) + *((float *)this + 115))
                    - (float)(*((_DWORD *)this + 18) - *((_DWORD *)this + 16)));
}


//======================================================================
// SlidingFrame::getCanMoveRightDistance(void)
// address: 0x001A4D06   size: 0x32 (50 bytes)
//======================================================================
int __fastcall SlidingFrame::getCanMoveRightDistance(SlidingFrame *this)
{
  return (int)(float)((float)((float)*((int *)this + 118) + *((float *)this + 114))
                    - (float)(*((_DWORD *)this + 17) - *((_DWORD *)this + 15)));
}


//======================================================================
// SlidingFrame::setSlidingX(bool)
// address: 0x001A4D38   size: 0x8 (8 bytes)
//======================================================================
int __fastcall SlidingFrame::setSlidingX(int this, bool a2)
{
  *(_BYTE *)(this + 436) = a2;
  return this;
}


//======================================================================
// SlidingFrame::setSlidingY(bool)
// address: 0x001A4D40   size: 0x8 (8 bytes)
//======================================================================
int __fastcall SlidingFrame::setSlidingY(int this, bool a2)
{
  *(_BYTE *)(this + 437) = a2;
  return this;
}


//======================================================================
// SlidingFrame::setMovestartX(int)
// address: 0x001A4D48   size: 0x8 (8 bytes)
//======================================================================
int __fastcall SlidingFrame::setMovestartX(int this, int a2)
{
  *(_DWORD *)(this + 440) = a2;
  return this;
}


//======================================================================
// SlidingFrame::setMovestartY(int)
// address: 0x001A4D50   size: 0x8 (8 bytes)
//======================================================================
int __fastcall SlidingFrame::setMovestartY(int this, int a2)
{
  *(_DWORD *)(this + 444) = a2;
  return this;
}


//======================================================================
// SlidingFrame::setCurOffsetX(int)
// address: 0x001A4D58   size: 0x12 (18 bytes)
//======================================================================
float __fastcall SlidingFrame::setCurOffsetX(SlidingFrame *this, int a2)
{
  *((float *)this + 114) = (float)a2;
  return (float)a2;
}


//======================================================================
// SlidingFrame::setCurOffsety(int)
// address: 0x001A4D6A   size: 0x12 (18 bytes)
//======================================================================
float __fastcall SlidingFrame::setCurOffsety(SlidingFrame *this, int a2)
{
  *((float *)this + 115) = (float)a2;
  return (float)a2;
}


//======================================================================
// SlidingFrame::setDealMsg(bool)
// address: 0x001A4D7C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall SlidingFrame::setDealMsg(int this, bool a2)
{
  *(_BYTE *)(this + 496) = a2;
  return this;
}


//======================================================================
// SlidingFrame::CopyMembers(SlidingFrame*)
// address: 0x001A4D84   size: 0x42 (66 bytes)
//======================================================================
Frame *__fastcall SlidingFrame::CopyMembers(Frame *this, SlidingFrame *a2)
{
  Frame *v2; // r5
  const char *Name; // r0

  v2 = this;
  if ( a2 != nullptr )
  {
    Frame::CopyMembers(this, a2);
    *((_BYTE *)a2 + 436) = *((_BYTE *)v2 + 436);
    *((_BYTE *)a2 + 437) = *((_BYTE *)v2 + 437);
    *((_DWORD *)a2 + 110) = *((_DWORD *)v2 + 110);
    *((_DWORD *)a2 + 111) = *((_DWORD *)v2 + 111);
    Name = (const char *)UIObject::GetName(*((UIObject **)v2 + 122));
    this = (Frame *)Frame::GetChildFrame(a2, Name);
    *((_DWORD *)a2 + 122) = this;
  }
  return this;
}


//======================================================================
// SlidingFrame::CreateClone(void)
// address: 0x001A4DC6   size: 0x1E (30 bytes)
//======================================================================
SlidingFrame *__fastcall SlidingFrame::CreateClone(SlidingFrame *this)
{
  SlidingFrame *v2; // r4

  v2 = (SlidingFrame *)operator new(0x1F8u);
  SlidingFrame::SlidingFrame(v2);
  SlidingFrame::CopyMembers(this, v2);
  return v2;
}


//======================================================================
// SlidingFrame::doTick(void)
// address: 0x001A4DE4   size: 0x2C6 (710 bytes)
//======================================================================
float __fastcall SlidingFrame::doTick(SlidingFrame *this)
{
  float v2; // r0
  float v3; // r5
  float v4; // r0
  float v5; // r6
  float v6; // r0
  float v7; // r0
  float v8; // r5
  float result; // r0
  int v10; // r6
  float v11; // r6
  float v12; // r5
  float v13; // [sp+0h] [bp-34h]
  float v14; // [sp+4h] [bp-30h]
  float v15; // [sp+8h] [bp-2Ch]
  int v16; // [sp+Ch] [bp-28h]
  float v17; // [sp+10h] [bp-24h]
  float v18; // [sp+14h] [bp-20h]
  int v19; // [sp+18h] [bp-1Ch]
  int v20; // [sp+1Ch] [bp-18h]
  int v21; // [sp+24h] [bp-10h]
  float v22; // [sp+28h] [bp-Ch]
  int v23; // [sp+2Ch] [bp-8h]

  v2 = *((float *)this + 120) * 0.5;
  *((float *)this + 120) = v2;
  v3 = v2;
  v4 = *((float *)this + 121) * 0.5;
  *((float *)this + 121) = v4;
  v5 = v4;
  if ( v3 >= 0.0 )
    v6 = v3;
  else
    LODWORD(v6) = LODWORD(v3) + 0x80000000;
  if ( v6 < 0.5 )
    *((_DWORD *)this + 120) = 0;
  if ( v5 >= 0.0 )
    v7 = v5;
  else
    LODWORD(v7) = LODWORD(v5) + 0x80000000;
  if ( v7 < 0.5 )
    *((_DWORD *)this + 121) = 0;
  v8 = *((float *)this + 114);
  *((float *)this + 116) = v8;
  result = *((float *)this + 115);
  *((float *)this + 117) = result;
  v14 = result;
  if ( *((_DWORD *)this + 108) == 0 )
  {
    v10 = *((_DWORD *)this + 110);
    if ( v8 > (float)sub_1A4B48(v10) )
      *((float *)this + 120) = *((float *)this + 120) - (float)(v8 * 0.2);
    v19 = *((_DWORD *)this + 111);
    if ( v14 > (float)sub_1A4B74(v19) )
      *((float *)this + 121) = *((float *)this + 121) - (float)(v14 * 0.2);
    v20 = *((_DWORD *)this + 118);
    v17 = v8 + (float)v20;
    v23 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
    v15 = (float)v23;
    if ( v17 < (float)v23 )
      *((float *)this + 120) = *((float *)this + 120) + (float)((float)(v15 - v17) * 0.2);
    v21 = *((_DWORD *)this + 119);
    v22 = (float)v21;
    v18 = v14 + (float)v21;
    v16 = *((_DWORD *)this + 18) - *((_DWORD *)this + 16);
    v13 = (float)v16;
    if ( v18 < (float)v16 )
      *((float *)this + 121) = *((float *)this + 121) + (float)((float)(v13 - v18) * 0.2);
    if ( *((_BYTE *)this + 436) != 0 )
      *((float *)this + 114) = v8 + *((float *)this + 120);
    if ( *((_BYTE *)this + 437) != 0 )
      *((float *)this + 115) = v14 + *((float *)this + 121);
    v11 = (float)sub_1A4B48(v10);
    if ( v8 > v11 && *((float *)this + 114) <= v11 )
    {
      *((float *)this + 114) = v11;
      *((_DWORD *)this + 120) = 0;
    }
    v12 = (float)sub_1A4B74(v19);
    if ( v14 > v12 && *((float *)this + 115) <= v12 )
    {
      *((float *)this + 115) = v12;
      *((_DWORD *)this + 121) = 0;
    }
    if ( v17 < v15 && (float)((float)v20 + *((float *)this + 114)) >= v15 )
    {
      *((float *)this + 114) = (float)(v23 - v20);
      *((_DWORD *)this + 120) = 0;
    }
    LODWORD(result) = v18 < v13;
    if ( v18 < v13 )
    {
      LODWORD(result) = (float)(v22 + *((float *)this + 115)) >= v13;
      if ( (float)(v22 + *((float *)this + 115)) >= v13 )
      {
        result = (float)(v16 - v21);
        *((float *)this + 115) = result;
        *((_DWORD *)this + 121) = 0;
      }
    }
  }
  return result;
}


//======================================================================
// SlidingFrame::~SlidingFrame()
// address: 0x001A50D0   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN12SlidingFrameD1Ev'
void __fastcall SlidingFrame::~SlidingFrame(SlidingFrame *this)
{
  *(_DWORD *)this = &off_458C88;
  std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(
    (int)this + 412,
    *((_DWORD **)this + 105));
  Frame::~Frame(this);
}


//======================================================================
// SlidingFrame::~SlidingFrame()
// address: 0x001A50FC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall SlidingFrame::~SlidingFrame(SlidingFrame *this)
{
  SlidingFrame::~SlidingFrame(this);
  operator delete(this);
}


//======================================================================
// SlidingFrame::resetOffsetPos(void)
// address: 0x001A510E   size: 0x5C (92 bytes)
//======================================================================
void __fastcall SlidingFrame::resetOffsetPos(SlidingFrame *this)
{
  char *v2; // r5

  *((_DWORD *)this + 115) = 0;
  *((_DWORD *)this + 114) = 0;
  *((_DWORD *)this + 117) = 0;
  *((_DWORD *)this + 116) = 0;
  *((_DWORD *)this + 121) = 0;
  *((_DWORD *)this + 120) = 0;
  *((_DWORD *)this + 123) = 0;
  v2 = (char *)this + 412;
  std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(
    (int)this + 412,
    *((_DWORD **)this + 105));
  *((_DWORD *)this + 106) = (char *)this + 416;
  *((_DWORD *)this + 105) = 0;
  *((_DWORD *)this + 107) = (char *)this + 416;
  *((_DWORD *)v2 + 5) = 0;
}


//======================================================================
// SlidingFrame::Save(TiXmlElement *)
// address: 0x001A52C4   size: 0x5A (90 bytes)
//======================================================================
TiXmlNode *__fastcall SlidingFrame::Save(SlidingFrame *this, TiXmlElement *a2)
{
  TiXmlNode *v3; // r7
  TiXmlElement *v4; // r6
  unsigned int v5; // r4
  int v6; // r3
  int v7; // r0

  v3 = (TiXmlNode *)Frame::Save(this, a2);
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
// SlidingFrame::FindFrameOnPoint(int,int,std::vector<Frame *,std::allocator<Frame *>> &)
// address: 0x001A5324   size: 0x32 (50 bytes)
//======================================================================
int __fastcall SlidingFrame::FindFrameOnPoint(LayoutFrame **a1, int a2, int a3, int a4)
{
  int result; // r0

  result = LayoutFrame::PointInLayoutFrame((LayoutFrame *)a1, a2, a3);
  if ( result != 0 )
  {
    result = LayoutFrame::PointInLayoutFrame(a1[122], a2, a3);
    if ( result != 0 )
      return Frame::FindFrameOnPoint(a1, a2, a3, a4);
  }
  return result;
}


//======================================================================
// SlidingFrame::OnInputMessage(Ogre::InputEvent const&)
// address: 0x001A5358   size: 0x360 (864 bytes)
//======================================================================
int __fastcall SlidingFrame::OnInputMessage(SlidingFrame *this, const InputEvent *a2)
{
  struct _InputEvent *ie_next; // r2
  struct _InputEvent *ie_oq; // r3
  char *v5; // r3
  _DWORD *ie_closure; // r5
  char *v7; // r1
  char *v8; // r2
  char *v9; // r0
  float v10; // r4
  int v11; // r6
  int v12; // r6
  unsigned int v13; // r4
  float v14; // r6
  float v15; // r5
  float v16; // r4
  float v17; // r4
  int result; // r0
  float v19; // [sp+4h] [bp-20h]
  int v20; // [sp+4h] [bp-20h]
  float v21; // [sp+8h] [bp-1Ch]
  float v22; // [sp+8h] [bp-1Ch]
  float v23; // [sp+Ch] [bp-18h]
  int v24; // [sp+10h] [bp-14h]
  int v25; // [sp+14h] [bp-10h]
  _BYTE v26[12]; // [sp+18h] [bp-Ch] BYREF

  switch ( (unsigned int)a2->ie_proc )
  {
    case 0x10u:
      ie_next = a2->ie_next;
      ie_oq = a2->ie_oq;
      if ( (int)ie_next >= *((_DWORD *)this + 15)
        && (int)ie_next < *((_DWORD *)this + 17)
        && (int)ie_oq >= *((_DWORD *)this + 16)
        && (int)ie_oq < *((_DWORD *)this + 18)
        && *((_BYTE *)this + 496) != 0 )
      {
        std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_insert_unique(
          (int)v26,
          (_DWORD *)this + 103,
          &a2->ie_closure);
      }
      goto LABEL_58;
    case 0x11u:
    case 0x13u:
      if ( *((_BYTE *)this + 496) != 0 )
        std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::erase(
          (_DWORD *)this + 103,
          (int *)&a2->ie_closure);
      goto LABEL_58;
    case 0x12u:
      if ( *((_BYTE *)this + 496) != 0 )
      {
        v5 = *((char **)this + 105);
        ie_closure = a2->ie_closure;
        v7 = (char *)this + 416;
        v8 = (char *)this + 416;
        while ( v5 != nullptr )
        {
          if ( *((_DWORD *)v5 + 4) < *ie_closure )
          {
            v9 = *((char **)v5 + 3);
            v5 = v8;
          }
          else
          {
            v9 = *((char **)v5 + 2);
          }
          v8 = v5;
          v5 = v9;
        }
        if ( v8 != v7 && *ie_closure < *((_DWORD *)v8 + 4) )
          v8 = (char *)this + 416;
        if ( v8 != v7 )
        {
          if ( (int)ie_closure[4] <= 10 )
            v10 = 0.0;
          else
            v10 = (float)(int)ie_closure[ie_closure[21] + 9];
          if ( (int)ie_closure[5] <= 10 )
            v19 = 0.0;
          else
            v19 = (float)(int)ie_closure[ie_closure[21] + 13];
          v21 = *((float *)this + 114);
          if ( v21 > (float)sub_1A4B48(*((_DWORD *)this + 110)) && v10 > 0.0 )
            v10 = v10 * (float)(1.0 / (float)((float)(v21 * 0.05) + 1.0));
          v23 = *((float *)this + 115);
          if ( v23 > (float)sub_1A4B74(*((_DWORD *)this + 111)) && v19 > 0.0 )
            v19 = v19 * (float)(1.0 / (float)((float)(v23 * 0.05) + 1.0));
          v24 = (int)(float)(v21 + (float)*((int *)this + 118));
          v25 = (int)(float)(v23 + (float)*((int *)this + 119));
          v11 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
          if ( v24 < v11 && v10 < 0.0 )
            v10 = v10 * (float)(1.0 / (float)((float)((float)(v11 - v24) * 0.05) + 1.0));
          v12 = *((_DWORD *)this + 18) - *((_DWORD *)this + 16);
          if ( v25 < v12 && v19 < 0.0 )
            v19 = v19 * (float)(1.0 / (float)((float)((float)(v12 - v25) * 0.05) + 1.0));
          if ( *((_BYTE *)this + 436) != 0 )
            *((float *)this + 114) = v21 + v10;
          if ( *((_BYTE *)this + 437) != 0 )
            *((float *)this + 115) = v23 + v19;
          v13 = 0;
          v14 = 0.0;
          v20 = 0;
          v22 = 0.0;
          do
          {
            v22 = v22 + (float)(int)ie_closure[9];
            v14 = v14 + (float)(int)ie_closure[13];
            ++v20;
            v13 += ie_closure[17];
            ++ie_closure;
          }
          while ( v20 != 4 );
          if ( v13 == 0 )
            v13 = 1;
          v15 = (float)v13 / 1000.0;
          v16 = (float)(v22 / v15) * 0.1;
          if ( v16 < -10.0 )
          {
            v16 = -10.0;
          }
          else if ( v16 > 10.0 )
          {
            v16 = 10.0;
          }
          *((float *)this + 120) = *((float *)this + 120) + v16;
          v17 = (float)(v14 / v15) * 0.1;
          if ( v17 < -10.0 )
          {
            v17 = -10.0;
          }
          else if ( v17 > 10.0 )
          {
            v17 = 10.0;
          }
          *((float *)this + 121) = *((float *)this + 121) + v17;
        }
      }
LABEL_58:
      result = 1;
      break;
    default:
      result = Frame::OnInputMessage(this, a2);
      break;
  }
  return result;
}


//======================================================================
// SlidingFrame::UpdateSelf(float)
// address: 0x001A56CC   size: 0x154 (340 bytes)
//======================================================================
int __fastcall SlidingFrame::UpdateSelf(int this, float a2)
{
  int v2; // r4
  float v4; // r5
  float v5; // r6
  float v6; // r5
  int v7; // r6
  int v8; // [sp+8h] [bp-24h]
  int v9; // [sp+Ch] [bp-20h]
  char *Name; // [sp+10h] [bp-1Ch]
  float v11; // [sp+14h] [bp-18h]
  _DWORD v12[5]; // [sp+18h] [bp-14h] BYREF

  v2 = this;
  if ( *(_BYTE *)(this + 57) != 0 )
  {
    Frame::UpdateSelf((Frame *)this, a2);
    LayoutFrame::GetAbsRect(*(_DWORD *)(v2 + 488), v12);
    *(_DWORD *)(v2 + 472) = v12[2] - v12[0];
    *(_DWORD *)(v2 + 476) = v12[3] - v12[1];
    v4 = a2 + *(float *)(v2 + 492);
    if ( v4 >= 0.05 )
    {
      *(_DWORD *)(v2 + 492) = 0;
      SlidingFrame::doTick((SlidingFrame *)v2);
    }
    else
    {
      *(float *)(v2 + 492) = v4;
    }
    v5 = *(float *)(v2 + 492);
    v8 = (int)(float)(*(float *)(v2 + 464)
                    + (float)((float)((float)(*(float *)(v2 + 456) - *(float *)(v2 + 464)) * v5) / 0.05));
    this = (int)(float)(*(float *)(v2 + 468)
                      + (float)((float)((float)(*(float *)(v2 + 460) - *(float *)(v2 + 468)) * v5) / 0.05));
    v9 = this;
    if ( *(_DWORD *)(v2 + 448) != v8 || *(_DWORD *)(v2 + 452) != this )
    {
      v11 = 1.0 / (float)(*(float *)g_pFrameMgr * *(float *)(g_pFrameMgr + 16));
      v6 = 1.0 / (float)(*(float *)g_pFrameMgr * *(float *)(g_pFrameMgr + 20));
      v7 = *(_DWORD *)(v2 + 488);
      Name = (char *)UIObject::GetName((UIObject *)v2);
      this = LayoutFrame::SetPoint(v7, 0, Name, 0, (int)(float)((float)v8 * v11), (int)(float)((float)v9 * v6));
      *(_DWORD *)(v2 + 448) = v8;
      *(_DWORD *)(v2 + 452) = v9;
    }
  }
  return this;
}

