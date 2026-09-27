// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ProgressBar

//======================================================================
// ProgressBar::GetTypeName(void)
// address: 0x001A4890   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall ProgressBar::GetTypeName(ProgressBar *this)
{
  return "ProgressBar";
}


//======================================================================
// ProgressBar::Save(TiXmlElement *)
// address: 0x001A489C   size: 0x4 (4 bytes)
//======================================================================
int ProgressBar::Save()
{
  return 0;
}


//======================================================================
// ProgressBar::~ProgressBar()
// address: 0x001A48A0   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN11ProgressBarD1Ev'
void __fastcall ProgressBar::~ProgressBar(ProgressBar *this)
{
  *(_DWORD *)this = &off_458C10;
  sub_3BDF80((char *)this + 412);
  Frame::~Frame(this);
}


//======================================================================
// ProgressBar::~ProgressBar()
// address: 0x001A48C8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ProgressBar::~ProgressBar(ProgressBar *this)
{
  ProgressBar::~ProgressBar(this);
  operator delete(this);
}


//======================================================================
// ProgressBar::ProgressBar(void)
// address: 0x001A48DC   size: 0x50 (80 bytes)
//======================================================================
// Alternative name is '_ZN11ProgressBarC2Ev'
void __fastcall ProgressBar::ProgressBar(ProgressBar *this)
{
  Frame::Frame(this);
  *(_DWORD *)this = &off_458C10;
  *((_DWORD *)this + 103) = &byte_55FB88;
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 105) = 0;
  *((_DWORD *)this + 106) = 1;
  *((_DWORD *)this + 107) = -1;
  *((_DWORD *)this + 108) = -1;
  *((_DWORD *)this + 109) = -1;
  *((_DWORD *)this + 110) = -1;
}


//======================================================================
// ProgressBar::CopyMembers(ProgressBar*)
// address: 0x001A4934   size: 0x22 (34 bytes)
//======================================================================
Frame *__fastcall ProgressBar::CopyMembers(Frame *this, ProgressBar *a2)
{
  Frame *v2; // r5

  v2 = this;
  if ( a2 != nullptr )
  {
    Frame::CopyMembers(this, a2);
    this = (Frame *)sub_3BEBBC((char *)a2 + 412);
    *((_DWORD *)a2 + 105) = *((_DWORD *)v2 + 105);
  }
  return this;
}


//======================================================================
// ProgressBar::CreateClone(void)
// address: 0x001A4956   size: 0x1E (30 bytes)
//======================================================================
ProgressBar *__fastcall ProgressBar::CreateClone(ProgressBar *this)
{
  ProgressBar *v2; // r4

  v2 = (ProgressBar *)operator new(0x1C0u);
  ProgressBar::ProgressBar(v2);
  ProgressBar::CopyMembers(this, v2);
  return v2;
}


//======================================================================
// ProgressBar::SetValue(float)
// address: 0x001A4974   size: 0x38 (56 bytes)
//======================================================================
__int64 __fastcall ProgressBar::SetValue(double this)
{
  float *v1; // r4
  double v3; // [sp+0h] [bp-Ch]

  v3 = this;
  v1 = (float *)LODWORD(this);
  LODWORD(this) = *(_DWORD *)(LODWORD(this) + 420);
  v1[105] = *((float *)&this + 1);
  if ( *(float *)&this != *((float *)&this + 1) && UIObject::hasScriptsEvent((UIObject *)v1, 45) != 0 )
  {
    v3 = v1[105];
    UIObject::CallScript((UIObject *)v1, 45, "f");
  }
  return *(_QWORD *)&v3;
}


//======================================================================
// ProgressBar::GetValue(void)
// address: 0x001A49B0   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ProgressBar::GetValue(ProgressBar *this)
{
  return *((_DWORD *)this + 105);
}


//======================================================================
// ProgressBar::Draw(void)
// address: 0x001A49B8   size: 0x172 (370 bytes)
//======================================================================
int __fastcall ProgressBar::Draw(ProgressBar *this)
{
  int v2; // r1
  int v3; // r7
  int v4; // r0
  int v5; // r2
  int Top; // r7
  float v7; // r5
  int v9; // [sp+8h] [bp-24h]
  int Right; // [sp+Ch] [bp-20h]
  int Left; // [sp+10h] [bp-1Ch]
  int v12; // [sp+14h] [bp-18h]
  int v13; // [sp+18h] [bp-14h]
  int Bottom; // [sp+1Ch] [bp-10h]
  int v15; // [sp+20h] [bp-Ch]

  (*(void (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 104) + 24))(
    *((_DWORD *)this + 104),
    *((_DWORD *)this + 26));
  if ( *((int *)this + 110) < 0 )
  {
    v2 = *(_DWORD *)(*((_DWORD *)this + 104) + 272);
    v3 = *(_DWORD *)(*((_DWORD *)this + 104) + 284);
    v4 = v2 + *(_DWORD *)(*((_DWORD *)this + 104) + 280);
    v5 = *(_DWORD *)(*((_DWORD *)this + 104) + 276);
    *((_DWORD *)this + 107) = v2;
    *((_DWORD *)this + 108) = v5;
    *((_DWORD *)this + 109) = v4;
    *((_DWORD *)this + 110) = v5 + v3;
  }
  Left = LayoutFrame::GetLeft(*((LayoutFrame **)this + 104));
  Top = LayoutFrame::GetTop(*((LayoutFrame **)this + 104));
  Right = LayoutFrame::GetRight(*((LayoutFrame **)this + 104));
  Bottom = LayoutFrame::GetBottom(*((LayoutFrame **)this + 104));
  v9 = *((_DWORD *)this + 108);
  v12 = *((_DWORD *)this + 107);
  v13 = *((_DWORD *)this + 109);
  v15 = *((_DWORD *)this + 110);
  v7 = *((float *)this + 105);
  if ( v7 < 0.0 )
  {
    v7 = 0.0;
  }
  else if ( v7 > 1.0 )
  {
    v7 = 1.0;
  }
  if ( *((_DWORD *)this + 106) == 1 )
  {
    Right = Left + (int)(float)((float)(Right - Left) * v7);
    v13 = v12 + (int)(float)((float)(v13 - v12) * v7);
  }
  else
  {
    Top = Bottom - (int)(float)(v7 * (float)(Bottom - Top));
    v9 = v15 - (int)(float)(v7 * (float)(v15 - v9));
  }
  (*(void (__fastcall **)(_DWORD, float, float, float, float))(**((_DWORD **)this + 104) + 40))(
    *((_DWORD *)this + 104),
    (float)Left,
    (float)Top,
    (float)Right,
    (float)Bottom);
  Texture::SetTexUV(*((Texture **)this + 104), v12, v9, v13 - v12, v15 - v9);
  return Frame::Draw(this);
}


//======================================================================
// ProgressBar::UpdateSelf(float)
// address: 0x001A4B2A   size: 0x12 (18 bytes)
//======================================================================
Frame *__fastcall ProgressBar::UpdateSelf(Frame *this, float a2)
{
  if ( *((_BYTE *)this + 57) != 0 )
    return (Frame *)Frame::UpdateSelf(this, a2);
  return this;
}

