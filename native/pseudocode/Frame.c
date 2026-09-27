// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Frame

//======================================================================
// Frame::GetTypeName(void)
// address: 0x001B9FC8   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall Frame::GetTypeName(Frame *this)
{
  return "Frame";
}


//======================================================================
// Frame::OnBeginDrag(unsigned int,int,int)
// address: 0x001B9FD4   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Frame::OnBeginDrag(Frame *this, unsigned int a2, int a3, int a4)
{
  ;
}


//======================================================================
// Frame::onGainFocus(void)
// address: 0x001B9FD8   size: 0x1C (28 bytes)
//======================================================================
int __fastcall Frame::onGainFocus(Frame *this)
{
  int result; // r0

  result = UIObject::hasScriptsEvent(this, 15);
  if ( result != 0 )
    return UIObject::CallScript(this, 15, (const char *)&unk_3FB8EA);
  return result;
}


//======================================================================
// Frame::onLostFocus(void)
// address: 0x001B9FF8   size: 0x1C (28 bytes)
//======================================================================
int __fastcall Frame::onLostFocus(Frame *this)
{
  int result; // r0

  result = UIObject::hasScriptsEvent(this, 16);
  if ( result != 0 )
    return UIObject::CallScript(this, 16, (const char *)&unk_3FB8EA);
  return result;
}


//======================================================================
// Frame::SetSelfScale(float)
// address: 0x001BA018   size: 0x64 (100 bytes)
//======================================================================
float *__fastcall Frame::SetSelfScale(float *this, float a2)
{
  float *v2; // r4
  const char *v4; // r0
  int *v5; // r7
  int *i; // r5
  int v7; // r0
  _DWORD *v8; // r4
  int *v9; // r5
  int *j; // r4
  int v11; // r0

  v2 = this;
  if ( *((_DWORD *)this + 27) == 0 )
  {
    v4 = (const char *)(*(int (__fastcall **)(float *))(*(_DWORD *)this + 4))(this);
    this = (float *)j_strcmp(v4, "Frame");
    if ( this == nullptr )
      this = (float *)FrameManager::AddReCalFrame(__SPAIR64__((unsigned int)v2, g_pFrameMgr));
  }
  v2[56] = a2;
  v5 = *((int **)v2 + 58);
  for ( i = *((int **)v2 + 57); i != v5; i += 2 )
  {
    v7 = *i;
    this = (float *)(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v7 + 48))(v7, LODWORD(a2));
  }
  v8 = v2 + 63;
  v9 = (int *)v8[15];
  for ( j = (int *)v8[14]; j != v9; ++j )
  {
    v11 = *j;
    this = (float *)(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v11 + 48))(v11, LODWORD(a2));
  }
  return this;
}


//======================================================================
// Frame::SetViewStartPointRecursive(int,int)
// address: 0x001BA084   size: 0x5A (90 bytes)
//======================================================================
int __fastcall Frame::SetViewStartPointRecursive(Frame *this, int a2, int a3)
{
  int result; // r0
  unsigned int i; // r4
  int v8; // r3
  unsigned int j; // r4
  int v10; // r3
  int v11; // r0

  result = LayoutFrame::SetViewStartPoint(this, a2, a3);
  for ( i = 0; ; ++i )
  {
    v8 = *((_DWORD *)this + 57);
    if ( i >= (*((_DWORD *)this + 58) - v8) >> 3 )
      break;
    result = LayoutFrame::SetViewStartPoint(*(LayoutFrame **)(8 * i + v8), a2, a3);
  }
  for ( j = 0; ; ++j )
  {
    v10 = *((_DWORD *)this + 77);
    if ( j >= (*((_DWORD *)this + 78) - v10) >> 2 )
      break;
    v11 = *(_DWORD *)(4 * j + v10);
    result = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v11 + 84))(v11, a2, a3);
  }
  return result;
}


//======================================================================
// Frame::ProcessMouseWheel(void)
// address: 0x001BA0E0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall Frame::ProcessMouseWheel(Frame *this)
{
  _BOOL4 hasScriptsEvent; // r0
  int v3; // r3
  int v4; // r4
  int v5; // r6
  int v6; // r0
  const char *v7; // r0

  hasScriptsEvent = UIObject::hasScriptsEvent(this, 30);
  v3 = 1;
  if ( !hasScriptsEvent )
  {
    v4 = 0;
    v5 = (*((_DWORD *)this + 78) - *((_DWORD *)this + 77)) >> 2;
    while ( 1 )
    {
      if ( v4 == v5 )
        return 0;
      v6 = *(_DWORD *)(4 * v4 + *((_DWORD *)this + 77));
      v7 = (const char *)(*(int (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
      if ( j_strcmp(v7, "Slider") == 0 )
        break;
      ++v4;
    }
    return 1;
  }
  return v3;
}


//======================================================================
// Frame::UpdateSelf(float)
// address: 0x001BA138   size: 0xFA (250 bytes)
//======================================================================
__int64 __fastcall Frame::UpdateSelf(double this)
{
  float v2; // r0
  float v3; // r7
  unsigned int i; // r6
  int v5; // r3
  int v6; // r0
  unsigned int j; // r6
  int v8; // r3
  float *v9; // r6
  int v10; // r2
  _DWORD *v11; // r3
  _DWORD *v12; // r4
  int v13; // r1
  int v14; // r2
  double v16; // [sp+0h] [bp-Ch]

  v16 = this;
  if ( *(_BYTE *)(LODWORD(this) + 57) != 0 )
  {
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)LODWORD(this) + 52))(LODWORD(this));
    if ( UIObject::hasScriptsEvent((UIObject *)LODWORD(this), 43) )
    {
      v2 = *((float *)&this + 1) + *(float *)(LODWORD(this) + 372);
      v3 = *(float *)(LODWORD(this) + 368);
      *(float *)(LODWORD(this) + 372) = v2;
      if ( v2 >= v3 )
      {
        v16 = v3;
        UIObject::CallScript((UIObject *)LODWORD(this), 43, "f");
        *(_DWORD *)(LODWORD(this) + 372) = 0;
      }
    }
    for ( i = 0; ; ++i )
    {
      v5 = *(_DWORD *)(LODWORD(this) + 228);
      if ( i >= (*(_DWORD *)(LODWORD(this) + 232) - v5) >> 3 )
        break;
      v6 = *(_DWORD *)(8 * i + v5);
      (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v6 + 28))(v6, HIDWORD(this));
    }
    for ( j = 0; ; ++j )
    {
      v8 = *(_DWORD *)(LODWORD(this) + 308);
      if ( j >= (*(_DWORD *)(LODWORD(this) + 312) - v8) >> 2 )
        break;
      if ( *(_BYTE *)(*(_DWORD *)(4 * j + v8) + 57) != 0 )
        (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(4 * j + v8) + 28))(
          *(_DWORD *)(4 * j + v8),
          HIDWORD(this));
    }
    v9 = (float *)(LODWORD(this) + 252);
    if ( (*(_DWORD *)(LODWORD(this) + 288) & 8) != 0 )
    {
      v10 = *(_DWORD *)(LODWORD(this) + 108);
      if ( v10 != 0
        && ((*(_DWORD *)(v10 + 288) & 8) != 0
         || *(_DWORD *)(LODWORD(this) + 88) - *(_DWORD *)(LODWORD(this) + 80) == *(_DWORD *)(LODWORD(this) + 72)
                                                                               - *(_DWORD *)(LODWORD(this) + 64)) )
      {
        return *(_QWORD *)&v16;
      }
      v11 = (_DWORD *)(LODWORD(this) + 76);
      v12 = (_DWORD *)(LODWORD(this) + 60);
      v13 = v12[1];
      v14 = v12[2];
      *v11 = *v12;
      v11[1] = v13;
      v11[2] = v14;
      v11[3] = v12[3];
    }
    if ( v9[1] != 0.0 )
      *v9 = *v9 + *((float *)&this + 1);
  }
  return *(_QWORD *)&v16;
}


//======================================================================
// Frame::transferEventToNextFrame(int,int)
// address: 0x001BA25C   size: 0x94 (148 bytes)
//======================================================================
UIObject *__fastcall Frame::transferEventToNextFrame(Frame *this, int a2, int a3)
{
  int v4; // r1
  int v5; // r2
  UIObject **v6; // r4
  UIObject *v7; // r0
  const char *Name; // r7
  const char *v9; // r0
  UIObject **v10; // r4
  UIObject *UIClientFrame; // r4
  const char *v12; // r7
  const char *Parent; // r0
  UIObject **v15; // [sp+8h] [bp-1Ch]
  UIObject **v16; // [sp+Ch] [bp-18h]
  UIObject **v17; // [sp+14h] [bp-10h] BYREF
  UIObject **v18; // [sp+18h] [bp-Ch]
  int v19; // [sp+1Ch] [bp-8h]

  v18 = nullptr;
  v19 = 0;
  v17 = nullptr;
  FrameManager::FindUIObjectOnPoint(g_pFrameMgr, (char **)&v17, a2, a3, 0);
  v6 = v17;
  v15 = v18;
  while ( 1 )
  {
    v16 = v6;
    if ( v6 == v15 )
      break;
    v7 = *v6++;
    Name = (const char *)UIObject::GetName(v7);
    v9 = (const char *)UIObject::GetName(this);
    if ( j_strcmp(Name, v9) == 0 )
    {
      v10 = v16;
      while ( 1 )
      {
        if ( ++v10 == v15 )
          goto LABEL_7;
        if ( *((_BYTE *)*v10 + 58) == 0 )
        {
          v12 = (const char *)UIObject::GetName(*v10);
          Parent = (const char *)LayoutFrame::GetParent(this);
          if ( j_strcmp(v12, Parent) != 0 )
          {
            UIClientFrame = *v10;
            goto LABEL_10;
          }
        }
      }
    }
  }
LABEL_7:
  UIClientFrame = (UIObject *)FrameManager::GetUIClientFrame((FrameManager *)g_pFrameMgr, v4, v5);
LABEL_10:
  sub_1BA238(v17);
  return UIClientFrame;
}


//======================================================================
// Frame::~Frame()
// address: 0x001BA2F4   size: 0xC6 (198 bytes)
//======================================================================
// Alternative name is '_ZN5FrameD1Ev'
void __fastcall Frame::~Frame(Frame *this)
{
  unsigned int v2; // r5
  int v3; // r3
  unsigned int i; // r5
  void **v5; // r6
  int v6; // r3

  v2 = 0;
  *(_DWORD *)this = &off_458FD8;
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 77);
    if ( v2 >= (*((_DWORD *)this + 78) - v3) >> 2 )
      break;
    UIObject::release(*(_DWORD **)(4 * v2++ + v3));
  }
  for ( i = 0; ; ++i )
  {
    v5 = (void **)((char *)this + 228);
    v6 = *((_DWORD *)this + 57);
    if ( i >= (*((_DWORD *)this + 58) - v6) >> 3 )
      break;
    UIObject::release(*(_DWORD **)(8 * i + v6));
  }
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)g_pDisplay + 92))(g_pDisplay, *((_DWORD *)this + 95));
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)g_pDisplay + 92))(g_pDisplay, *((_DWORD *)this + 94));
  sub_3BDF80((char *)this + 400);
  sub_3BDF80((char *)this + 396);
  sub_3BDF80((char *)this + 392);
  sub_3BDF80((char *)this + 388);
  sub_3BDF80((char *)this + 384);
  sub_1BA238(*((void **)this + 77));
  LayoutDim::~LayoutDim((Frame *)((char *)this + 260));
  if ( *v5 != nullptr )
    operator delete(*v5);
  LayoutFrame::~LayoutFrame(this);
}


//======================================================================
// Frame::~Frame()
// address: 0x001BA3C4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Frame::~Frame(Frame *this)
{
  Frame::~Frame(this);
  operator delete(this);
}


//======================================================================
// Frame::Frame(void)
// address: 0x001BA3D8   size: 0x114 (276 bytes)
//======================================================================
// Alternative name is '_ZN5FrameC2Ev'
void __fastcall Frame::Frame(Frame *this)
{
  LayoutFrame::LayoutFrame(this);
  *(_DWORD *)this = &off_458FD8;
  *((_DWORD *)this + 57) = 0;
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 59) = 0;
  LayoutDim::LayoutDim((Frame *)((char *)this + 260));
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 78) = 0;
  *((_DWORD *)this + 79) = 0;
  *((_DWORD *)this + 96) = &byte_55FB88;
  *((_DWORD *)this + 97) = &byte_55FB88;
  *((_DWORD *)this + 98) = &byte_55FB88;
  *((_DWORD *)this + 99) = &byte_55FB88;
  *((_DWORD *)this + 100) = &byte_55FB88;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 58) = *((_DWORD *)this + 57);
  *((_BYTE *)this + 244) = 0;
  *((_BYTE *)this + 245) = 0;
  *((_BYTE *)this + 246) = 0;
  *((_BYTE *)this + 247) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_BYTE *)this + 249) = 0;
  *((_DWORD *)this + 60) = 1065353216;
  *((_DWORD *)this + 73) = 128;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 102) = 0;
  *((_DWORD *)this + 101) = 0;
  *((_DWORD *)this + 74) = -1;
  *((_BYTE *)this + 300) = 0;
  *((_DWORD *)this + 80) = 0;
  *((_DWORD *)this + 81) = 0;
  *((_BYTE *)this + 328) = -1;
  *((_BYTE *)this + 329) = -1;
  *((_BYTE *)this + 330) = -1;
  *((_BYTE *)this + 331) = -1;
  *((_BYTE *)this + 332) = -1;
  *((_BYTE *)this + 333) = -1;
  *((_BYTE *)this + 334) = -1;
  *((_BYTE *)this + 335) = -1;
  *((_BYTE *)this + 336) = 0;
  *((_DWORD *)this + 85) = 0;
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 87) = 0;
  *((_DWORD *)this + 88) = 0;
  *((_BYTE *)this + 356) = 0;
  *((_DWORD *)this + 92) = 1050253722;
  *((_DWORD *)this + 90) = 1056964608;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 91) = 0;
  *((_DWORD *)this + 93) = 0;
  *((_DWORD *)this + 95) = 0;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 63) = 0;
  *((_DWORD *)this + 64) = 0;
  sub_3BE508((int)this + 400, (char *)&unk_3FB8EA);
}


//======================================================================
// Frame::SetFrameLevel(int)
// address: 0x001BA4FC   size: 0x6 (6 bytes)
//======================================================================
char *__fastcall Frame::SetFrameLevel(Frame *this, int a2)
{
  char *result; // r0

  result = (char *)this + 252;
  *((_DWORD *)result + 11) = a2;
  return result;
}


//======================================================================
// Frame::GetFrameLevel(void)
// address: 0x001BA502   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Frame::GetFrameLevel(Frame *this)
{
  return *((_DWORD *)this + 74);
}


//======================================================================
// Frame::ShowUIPanel(void)
// address: 0x001BA508   size: 0x28 (40 bytes)
//======================================================================
char *__fastcall Frame::ShowUIPanel(Frame *this)
{
  unsigned int v2; // r3
  char *result; // r0
  int v4; // r2
  int v5; // r2

  LayoutFrame::Show(this);
  v2 = 0;
  result = (char *)this + 308;
  while ( 1 )
  {
    v4 = *((_DWORD *)this + 77);
    if ( v2 >= (*((_DWORD *)this + 78) - v4) >> 2 )
      break;
    v5 = *(_DWORD *)(4 * v2++ + v4);
    *(_DWORD *)(v5 + 108) = this;
  }
  return result;
}


//======================================================================
// Frame::HideUIPanel(void)
// address: 0x001BA530   size: 0x28 (40 bytes)
//======================================================================
char *__fastcall Frame::HideUIPanel(Frame *this)
{
  unsigned int v2; // r3
  char *result; // r0
  int v4; // r2
  int v5; // r2

  LayoutFrame::Hide(this);
  v2 = 0;
  result = (char *)this + 308;
  while ( 1 )
  {
    v4 = *((_DWORD *)this + 77);
    if ( v2 >= (*((_DWORD *)this + 78) - v4) >> 2 )
      break;
    v5 = *(_DWORD *)(4 * v2++ + v4);
    *(_DWORD *)(v5 + 108) = this;
  }
  return result;
}


//======================================================================
// Frame::InitFrameStrata(void)
// address: 0x001BA558   size: 0x48 (72 bytes)
//======================================================================
int __fastcall Frame::InitFrameStrata(int this)
{
  int v1; // r4
  int v2; // r3
  int v3; // r3
  unsigned int i; // r5
  int v5; // r3
  int v6; // r2
  int v7; // r3

  v1 = this;
  if ( *(_DWORD *)(this + 44) == 0 )
  {
    v2 = *(_DWORD *)(this + 108);
    if ( v2 != 0 )
      v3 = *(_DWORD *)(v2 + 44);
    else
      v3 = 1;
    *(_DWORD *)(this + 44) = v3;
  }
  for ( i = 0; ; ++i )
  {
    v5 = *(_DWORD *)(v1 + 308);
    if ( i >= (*(_DWORD *)(v1 + 312) - v5) >> 2 )
      break;
    v6 = 4 * i;
    v7 = *(_DWORD *)(v5 + 4 * i);
    *(_DWORD *)(v7 + 108) = v1;
    this = Frame::InitFrameStrata(*(Frame **)(*(_DWORD *)(v1 + 308) + v6));
  }
  return this;
}


//======================================================================
// Frame::DrawBackDrop(void)
// address: 0x001BA5A0   size: 0x67E (1662 bytes)
//======================================================================
int __fastcall Frame::DrawBackDrop(Frame *this)
{
  int *v2; // r5
  float v3; // r4
  float v4; // r0
  float v5; // r0
  int result; // r0
  int v7; // r6
  int v8; // [sp+20h] [bp-3Ch]
  float v9; // [sp+20h] [bp-3Ch]
  int j; // [sp+20h] [bp-3Ch]
  int v11; // [sp+24h] [bp-38h]
  float v12; // [sp+24h] [bp-38h]
  int v13; // [sp+28h] [bp-34h]
  int v14; // [sp+2Ch] [bp-30h]
  int v15; // [sp+2Ch] [bp-30h]
  int i; // [sp+30h] [bp-2Ch]
  float v17; // [sp+30h] [bp-2Ch]
  int v18; // [sp+30h] [bp-2Ch]
  float v19; // [sp+30h] [bp-2Ch]
  int v20; // [sp+34h] [bp-28h]
  int v21; // [sp+34h] [bp-28h]
  float v22; // [sp+34h] [bp-28h]
  int v23; // [sp+3Ch] [bp-20h]
  float v24; // [sp+3Ch] [bp-20h]
  int v25; // [sp+44h] [bp-18h]
  int v26; // [sp+48h] [bp-14h]

  v2 = (int *)((char *)this + 252);
  v3 = (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr) * *((float *)this + 56);
  v11 = 1;
  if ( FloatToInt((float)*((int *)this + 80) * v3) != 0 )
    v11 = FloatToInt((float)v2[17] * v3);
  v4 = COERCE_FLOAT(LayoutFrame::getFrameSizeX(this)) * v3;
  v13 = FloatToInt(v4);
  v5 = COERCE_FLOAT(LayoutFrame::getFrameSizeY(this)) * v3;
  result = FloatToInt(v5);
  v8 = result;
  v20 = 2 * v11;
  if ( v13 > 2 * v11 && result > 2 * v11 )
  {
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)g_pDisplay + 96))(g_pDisplay, *((_DWORD *)this + 95));
    v14 = *((_DWORD *)this + 15);
    v7 = *((_DWORD *)this + 16);
    (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
      g_pDisplay,
      (float)v14 + (float)((float)*((int *)this + 85) * v3),
      (float)v7 + (float)((float)*((int *)this + 86) * v3),
      (float)((float)(*((_DWORD *)this + 17) - v14) - (float)((float)*((int *)this + 85) * v3))
    - (float)((float)*((int *)this + 87) * v3),
      (float)((float)(*((_DWORD *)this + 18) - v7) - (float)((float)*((int *)this + 86) * v3))
    - (float)((float)*((int *)this + 88) * v3),
      *((_DWORD *)this + 82),
      0,
      0,
      *((_DWORD *)this + 17) - v14,
      *((_DWORD *)this + 18) - v7,
      0,
      0);
    result = (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 100))(g_pDisplay);
  }
  if ( *((_DWORD *)this + 94) != 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 96))(g_pDisplay);
    if ( v8 > v20 )
    {
      v25 = v8 / v11;
      v23 = v11 * (v8 / v11);
      v26 = v8 % v11;
      v15 = v11;
      for ( i = 1; i < v25 - 1; ++i )
      {
        v9 = (float)v11;
        (*(void (__fastcall **)(int, float, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
          g_pDisplay,
          (float)*((int *)this + 15),
          (float)*((int *)this + 16) + (float)v15,
          LODWORD(v9),
          LODWORD(v9),
          *((_DWORD *)this + 83),
          0,
          0,
          *((_DWORD *)this + 80),
          *((_DWORD *)this + 80),
          0,
          0);
        (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
          g_pDisplay,
          (float)*((int *)this + 17) - (float)v11,
          (float)*((int *)this + 16) + (float)v15,
          LODWORD(v9),
          LODWORD(v9),
          *((_DWORD *)this + 83),
          *((_DWORD *)this + 80),
          0,
          *((_DWORD *)this + 80),
          *((_DWORD *)this + 80),
          0,
          0);
        v15 += v11;
      }
      if ( v26 > 0 )
      {
        v17 = (float)(v23 - v11);
        v24 = (float)v23;
        (*(void (__fastcall **)(int, float, _DWORD, float, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
          g_pDisplay,
          (float)*((int *)this + 15),
          (float)*((int *)this + 16) + v17,
          (float)v11,
          (float)((float)*((int *)this + 18) - (float)*((int *)this + 16)) - v24,
          *((_DWORD *)this + 83),
          0,
          0,
          *((_DWORD *)this + 80),
          *((_DWORD *)this + 80),
          0,
          0);
        (*(void (__fastcall **)(int, _DWORD, _DWORD, float, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
          g_pDisplay,
          (float)*((int *)this + 17) - (float)v11,
          (float)*((int *)this + 16) + v17,
          (float)v11,
          (float)((float)*((int *)this + 18) - (float)*((int *)this + 16)) - v24,
          *((_DWORD *)this + 83),
          *((_DWORD *)this + 80),
          0,
          *((_DWORD *)this + 80),
          *((_DWORD *)this + 80),
          0,
          0);
      }
    }
    if ( v13 > v20 )
    {
      v21 = v11 * (v13 / v11);
      v18 = v11;
      for ( j = 1; j < v13 / v11 - 1; ++j )
      {
        (*(void (__fastcall **)(int, _DWORD, float, float, float, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
          g_pDisplay,
          (float)*((int *)this + 15) + (float)v18,
          (float)*((int *)this + 16),
          (float)v11,
          (float)v11,
          *((_DWORD *)this + 83),
          2 * *((_DWORD *)this + 80),
          0,
          *((_DWORD *)this + 80),
          *((_DWORD *)this + 80),
          0,
          0);
        (*(void (__fastcall **)(int, _DWORD, _DWORD, float, float, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
          g_pDisplay,
          (float)*((int *)this + 15) + (float)v18,
          (float)*((int *)this + 18) - (float)v11,
          (float)v11,
          (float)v11,
          *((_DWORD *)this + 83),
          3 * *((_DWORD *)this + 80),
          0,
          *((_DWORD *)this + 80),
          *((_DWORD *)this + 80),
          0,
          0);
        v18 += v11;
      }
      if ( v13 % v11 > 0 )
      {
        v19 = (float)(v21 - v11);
        v22 = (float)v21;
        (*(void (__fastcall **)(int, _DWORD, float, _DWORD, float, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
          g_pDisplay,
          (float)*((int *)this + 15) + v19,
          (float)*((int *)this + 16),
          (float)((float)*((int *)this + 17) - (float)*((int *)this + 15)) - v22,
          (float)v11,
          *((_DWORD *)this + 83),
          2 * *((_DWORD *)this + 80),
          0,
          *((_DWORD *)this + 80),
          *((_DWORD *)this + 80),
          0,
          0);
        (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, float, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
          g_pDisplay,
          (float)*((int *)this + 15) + v19,
          (float)*((int *)this + 18) - (float)v11,
          (float)((float)*((int *)this + 17) - (float)*((int *)this + 15)) - v22,
          (float)v11,
          *((_DWORD *)this + 83),
          3 * *((_DWORD *)this + 80),
          0,
          *((_DWORD *)this + 80),
          *((_DWORD *)this + 80),
          0,
          0);
      }
    }
    v12 = (float)v11;
    (*(void (__fastcall **)(int, float, float, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
      g_pDisplay,
      (float)*((int *)this + 15),
      (float)*((int *)this + 16),
      LODWORD(v12),
      LODWORD(v12),
      *((_DWORD *)this + 83),
      4 * *((_DWORD *)this + 80),
      0,
      *((_DWORD *)this + 80),
      *((_DWORD *)this + 80),
      0,
      0);
    (*(void (__fastcall **)(int, _DWORD, float, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
      g_pDisplay,
      (float)*((int *)this + 17) - v12,
      (float)*((int *)this + 16),
      LODWORD(v12),
      LODWORD(v12),
      *((_DWORD *)this + 83),
      5 * *((_DWORD *)this + 80),
      0,
      *((_DWORD *)this + 80),
      *((_DWORD *)this + 80),
      0,
      0);
    (*(void (__fastcall **)(int, float, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
      g_pDisplay,
      (float)*((int *)this + 15),
      (float)*((int *)this + 18) - v12,
      LODWORD(v12),
      LODWORD(v12),
      *((_DWORD *)this + 83),
      6 * *((_DWORD *)this + 80),
      0,
      *((_DWORD *)this + 80),
      *((_DWORD *)this + 80),
      0,
      0);
    (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
      g_pDisplay,
      (float)*((int *)this + 17) - v12,
      (float)*((int *)this + 18) - v12,
      LODWORD(v12),
      LODWORD(v12),
      *((_DWORD *)this + 83),
      7 * *((_DWORD *)this + 80),
      0,
      *((_DWORD *)this + 80),
      *((_DWORD *)this + 80),
      0,
      0);
    return (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 100))(g_pDisplay);
  }
  return result;
}


//======================================================================
// Frame::DrawDebugBarEdge(void)
// address: 0x001BAC20   size: 0xA2 (162 bytes)
//======================================================================
int __fastcall Frame::DrawDebugBarEdge(Frame *this)
{
  _DWORD *v2; // r0
  size_t v3; // r2
  int result; // r0

  v2 = *((_DWORD **)this + 2);
  v3 = *(v2 - 3);
  if ( v3 != *(_DWORD *)(dword_50FA40 - 12) || (result = j_memcmp(v2, (const void *)dword_50FA40, v3)) != 0 )
  {
    (*(void (__fastcall **)(int, float, float, float, float, int))(*(_DWORD *)g_pDisplay + 124))(
      g_pDisplay,
      (float)*((int *)this + 15),
      (float)*((int *)this + 16),
      (float)(*((_DWORD *)this + 17) - *((_DWORD *)this + 15)),
      (float)(*((_DWORD *)this + 18) - *((_DWORD *)this + 16)),
      -1);
    return (*(int (__fastcall **)(int, float, float, int, int, int))(*(_DWORD *)g_pDisplay + 124))(
             g_pDisplay,
             (float)(*((_DWORD *)this + 15) - 2),
             (float)(*((_DWORD *)this + 16) - 2),
             1082130432,
             1082130432,
             -65536);
  }
  return result;
}


//======================================================================
// Frame::Draw(void)
// address: 0x001BACD0   size: 0x20A (522 bytes)
//======================================================================
int __fastcall Frame::Draw(Frame *this)
{
  char *v1; // r4
  float v3; // r5
  int result; // r0
  int v5; // r7
  float v6; // r5
  float v7; // r0
  int *v8; // r5
  int v9; // r3
  int **v10; // r7
  int *v11; // r4
  int v12; // r3
  int v13; // r1
  int v14; // [sp+8h] [bp-1Ch]
  unsigned int i; // [sp+8h] [bp-1Ch]
  LayoutFrame *v16; // [sp+Ch] [bp-18h]
  float *v17; // [sp+Ch] [bp-18h]
  char *v18; // [sp+14h] [bp-10h]
  float v19; // [sp+18h] [bp-Ch]
  char *v20; // [sp+1Ch] [bp-8h]

  v1 = (char *)this + 252;
  if ( (*((_DWORD *)this + 72) & 8) != 0 )
    (*(void (__fastcall **)(int, char *))(*(_DWORD *)g_pDisplay + 144))(g_pDisplay, (char *)this + 76);
  if ( *((_BYTE *)this + 336) != 0 )
    Frame::DrawBackDrop(this);
  v3 = *((float *)v1 + 1);
  result = v3 == 0.0;
  if ( v3 != 0.0 )
  {
    switch ( *((_DWORD *)v1 + 7) )
    {
      case 4:
        v14 = 0;
        v5 = -*((_DWORD *)v1 + 6);
        break;
      case 5:
        v5 = *((_DWORD *)v1 + 6);
        v14 = 0;
        break;
      case 6:
        v14 = -*((_DWORD *)v1 + 5);
        goto LABEL_11;
      case 7:
        v14 = *((_DWORD *)v1 + 5);
LABEL_11:
        v5 = 0;
        break;
      default:
        v5 = 0;
        v14 = 0;
        break;
    }
    if ( *(float *)v1 >= v3 )
    {
      *((_DWORD *)v1 + 1) = 0;
      *(_DWORD *)v1 = 0;
      if ( UIObject::hasScriptsEvent(this, 50) )
        UIObject::CallScript(this, 50, (const char *)&unk_3FB8EA);
      v6 = 1.0;
    }
    else
    {
      v6 = *(float *)v1 / v3;
    }
    v16 = (LayoutFrame *)LayoutFrame::FP2Name(*((_DWORD *)this + 31));
    v20 = *((char **)this + 33);
    v18 = (char *)LayoutFrame::FP2Name(*((_DWORD *)this + 32));
    v19 = COERCE_FLOAT(LayoutDim::GetX((Frame *)((char *)this + 260)));
    v7 = COERCE_FLOAT(LayoutDim::GetY((Frame *)((char *)this + 260)));
    result = LayoutFrame::SetPoint(
               this,
               v16,
               v20,
               v18,
               (int)(float)(v19 + (float)((float)v14 * v6)),
               (int)(float)(v7 + (float)((float)v5 * v6)));
  }
  v8 = nullptr;
  do
  {
    for ( i = 0; ; ++i )
    {
      v9 = *((_DWORD *)this + 57);
      if ( i >= (*((_DWORD *)this + 58) - v9) >> 3 )
        break;
      v10 = (int **)(v9 + 8 * i);
      if ( v10[1] == v8 )
      {
        v11 = *v10;
        if ( *((_BYTE *)*v10 + 57) != 0 )
        {
          v12 = *((_DWORD *)this + 72);
          v13 = v12 << 28;
          if ( (v12 & 8) == 0
            || (v17 = (float *)(*(int (__fastcall **)(int, int))(*(_DWORD *)g_pDisplay + 148))(g_pDisplay, v13),
                result = (float)v11[18] <= v17[1],
                (float)v11[18] > v17[1])
            && (result = (float)v11[16] >= v17[3], (float)v11[16] < v17[3])
            && (result = (float)v11[15] >= v17[2], (float)v11[15] < v17[2])
            && (result = (float)v11[17] <= *v17, (float)v11[17] > *v17) )
          {
            result = (*(int (__fastcall **)(int *, int))(**v10 + 32))(*v10, v13);
          }
        }
      }
    }
    v8 = (int *)((char *)v8 + 1);
  }
  while ( v8 != (int *)&byte_5 );
  if ( *(_DWORD *)(g_pFrameMgr + 304) == 1 )
    result = Frame::DrawDebugBarEdge(this);
  if ( (*((_DWORD *)this + 72) & 8) != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 152))(g_pDisplay);
  return result;
}


//======================================================================
// Frame::MoveFrame(char const*,float,int,int)
// address: 0x001BAEEC   size: 0x66 (102 bytes)
//======================================================================
unsigned __int64 __fastcall Frame::MoveFrame(Frame *this, LayoutFrame *a2, float a3, unsigned int a4, int a5)
{
  const char *v8; // r1
  int v9; // r0
  float v10; // r7
  float v11; // r0
  unsigned __int64 v13; // [sp+0h] [bp-Ch]

  v13 = __PAIR64__(a4, (unsigned int)this);
  if ( a2 != nullptr && a3 != 0.0 )
  {
    v9 = LayoutFrame::Name2FP(a2, v8);
    *((_DWORD *)this + 68) = HIDWORD(v13);
    *((_DWORD *)this + 63) = 0;
    *((_DWORD *)this + 70) = v9;
    *((float *)this + 64) = a3;
    *((_DWORD *)this + 69) = a5;
    v10 = COERCE_FLOAT(LayoutDim::GetX((Frame *)((char *)this + 136)));
    v11 = COERCE_FLOAT(LayoutDim::GetY((Frame *)((char *)this + 136)));
    LayoutDim::SetAbsDim((Frame *)((char *)this + 260), (int)v10, (int)v11);
  }
  return v13;
}


//======================================================================
// Frame::EndMoveFrame(void)
// address: 0x001BAF52   size: 0xA (10 bytes)
//======================================================================
_DWORD *__fastcall Frame::EndMoveFrame(Frame *this)
{
  _DWORD *result; // r0

  result = (_DWORD *)((char *)this + 252);
  result[1] = 0;
  *result = 0;
  return result;
}


//======================================================================
// Frame::SetBackDropBorderTex(char const*)
// address: 0x001BAF5C   size: 0x3A (58 bytes)
//======================================================================
int __fastcall Frame::SetBackDropBorderTex(Frame *this, const char *a2)
{
  int v2; // r7

  v2 = *((_DWORD *)this + 95);
  *((_DWORD *)this + 95) = (*(int (__fastcall **)(int, const char *, int, _DWORD, _DWORD, int))(*(_DWORD *)g_pDisplay
                                                                                              + 72))(
                             g_pDisplay,
                             a2,
                             2,
                             0,
                             0,
                             1);
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)g_pDisplay + 92))(g_pDisplay, v2);
}


//======================================================================
// Frame::SetBackDropEdgeTex(char const*)
// address: 0x001BAF9C   size: 0x2E (46 bytes)
//======================================================================
__int64 __fastcall Frame::SetBackDropEdgeTex(Frame *this, const char *a2)
{
  int v2; // r6

  v2 = *((_DWORD *)this + 94);
  *((_DWORD *)this + 94) = (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 72))(g_pDisplay);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)g_pDisplay + 92))(g_pDisplay, v2);
  return 0x100000000LL;
}


//======================================================================
// Frame::SetBackDropAttr(int,int,int,int,int)
// address: 0x001BAFD0   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall Frame::SetBackDropAttr(Frame *this, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *result; // r0

  result = (_DWORD *)((char *)this + 252);
  result[24] = a4;
  result[17] = a2;
  result[22] = a3;
  result[23] = a5;
  result[25] = a6;
  return result;
}


//======================================================================
// Frame::OnKeyDown(Ogre::InputEvent const&)
// address: 0x001BAFE2   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Frame::OnKeyDown(Frame *this, const InputEvent *a2)
{
  return 1;
}


//======================================================================
// Frame::OnChar(Ogre::InputEvent const&)
// address: 0x001BAFE8   size: 0x9C (156 bytes)
//======================================================================
int __fastcall Frame::OnChar(Frame *this, const InputEvent *a2)
{
  int v3; // r3
  int v4; // r1
  int v5; // r2
  UIObject *UIClientFrame; // r0
  int v7; // r1
  int v8; // r2
  UIObject *v9; // r0
  int v11; // r1
  int v12; // r2
  UIObject *v14; // r0

  v3 = *(unsigned __int8 *)a2->ie_closure;
  switch ( v3 )
  {
    case 13:
      if ( !UIObject::hasScriptsEvent(this, 11) )
      {
        UIClientFrame = (UIObject *)FrameManager::GetUIClientFrame((FrameManager *)g_pFrameMgr, v4, v5);
        UIObject::CallScript(UIClientFrame, 11, (const char *)&unk_3FB8EA);
        return 1;
      }
      UIObject::CallScript(this, 11, (const char *)&unk_3FB8EA);
      return 0;
    case 27:
      if ( !UIObject::hasScriptsEvent(this, 13) )
      {
        v9 = (UIObject *)FrameManager::GetUIClientFrame((FrameManager *)g_pFrameMgr, v7, v8);
        UIObject::CallScript(v9, 13, (const char *)&unk_3FB8EA);
        return 1;
      }
      UIObject::CallScript(this, 13, (const char *)&unk_3FB8EA);
      return 0;
    case 9:
      if ( UIObject::hasScriptsEvent(this, 40) )
      {
        UIObject::CallScript(this, 40, (const char *)&unk_3FB8EA);
        return 0;
      }
      v14 = (UIObject *)FrameManager::GetUIClientFrame((FrameManager *)g_pFrameMgr, v11, v12);
      UIObject::CallScript(v14, 40, (const char *)&unk_3FB8EA);
      break;
    default:
      break;
  }
  return 1;
}


//======================================================================
// Frame::OnInputMessage(Ogre::InputEvent const&)
// address: 0x001BB0A4   size: 0x2EA (746 bytes)
//======================================================================
int __fastcall Frame::OnInputMessage(char **this, const InputEvent *a2)
{
  int result; // r0
  __int16 ie_closure; // r5
  int v6; // r1
  float v7; // r6
  double v8; // r0
  char *v9; // r5
  double v10; // r0
  int v11; // r2
  int v12; // r5
  int v13; // r0
  const char *v14; // r0
  int v15; // r5
  int v16; // r6
  int v17; // r0
  float v18; // [sp+8h] [bp-44h]
  char *v19; // [sp+14h] [bp-38h]
  int v20; // [sp+14h] [bp-38h]
  __int16 ie_closure_high; // [sp+18h] [bp-34h]
  double v22; // [sp+18h] [bp-34h]
  double v23; // [sp+20h] [bp-2Ch]
  float v24; // [sp+28h] [bp-24h]
  int v25; // [sp+28h] [bp-24h]
  LayoutFrame *v26; // [sp+2Ch] [bp-20h]
  char *v27; // [sp+30h] [bp-1Ch]
  char *v28; // [sp+34h] [bp-18h]
  _DWORD v29[5]; // [sp+38h] [bp-14h] BYREF

  switch ( (unsigned int)a2->ie_proc )
  {
    case 0u:
      return Frame::OnChar((Frame *)this, a2);
    case 1u:
      return Frame::OnKeyDown((Frame *)this, a2);
    case 3u:
      if ( *((_BYTE *)this + 57) == 0 )
        goto LABEL_29;
      if ( LayoutFrame::PointInLayoutFrame((LayoutFrame *)this, SLOWORD(a2->ie_closure), SHIWORD(a2->ie_closure)) != 0 )
        *(this + 73) = (char *)((unsigned int)*(this + 73) | 2);
      *(this + 101) = (char *)SLOWORD(a2->ie_closure);
      *(this + 102) = (char *)SHIWORD(a2->ie_closure);
      if ( UIObject::hasScriptsEvent((UIObject *)this, 4) )
        UIObject::CallScript((UIObject *)this, 4, "s", "LeftButton");
      goto LABEL_20;
    case 4u:
      v11 = (int)*(this + 73);
      if ( (v11 & 2) != 0 )
        *(this + 73) = (char *)(v11 & 0xFFFFFFFD);
      goto LABEL_20;
    case 5u:
      if ( *((_BYTE *)this + 57) == 0 )
        goto LABEL_29;
      if ( UIObject::hasScriptsEvent((UIObject *)this, 7) )
        UIObject::CallScript((UIObject *)this, 7, "s", "LDoubleClick");
LABEL_20:
      result = 0;
      break;
    case 9u:
      ie_closure = (__int16)a2->ie_closure;
      ie_closure_high = HIWORD(a2->ie_closure);
      if ( *((_BYTE *)this + 57) != 0 )
      {
        v6 = (int)*(this + 73);
        *(this + 73) = (char *)(v6 & 2);
        if ( (v6 & 2) != 0 && *((_BYTE *)this + 244) != 0 )
        {
          LayoutFrame::GetAbsRect(this, v29);
          v26 = (LayoutFrame *)LayoutFrame::FP2Name(*(this + 31));
          v28 = *(this + 33);
          v27 = (char *)LayoutFrame::FP2Name(*(this + 32));
          v24 = COERCE_FLOAT(LayoutDim::GetX((LayoutDim *)(this + 34)));
          v7 = *(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr;
          v19 = (char *)ie_closure;
          v23 = j_ceil((float)((float)ie_closure / v7));
          v8 = j_ceil((float)((float)(int)*(this + 101) / v7));
          v25 = (int)((float)(v24 + (float)(int)&(*(this + 15))[-v29[0]]) + v23 - v8);
          LODWORD(v23) = LayoutDim::GetY((LayoutDim *)(this + 34));
          v18 = *(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr;
          v9 = (char *)ie_closure_high;
          v22 = j_ceil((float)((float)ie_closure_high / v18));
          v10 = j_ceil((float)((float)(int)*(this + 102) / v18));
          LayoutFrame::SetPoint(
            (LayoutFrame *)this,
            v26,
            v28,
            v27,
            v25,
            (int)((float)(*(float *)&v23 + (float)(int)&(*(this + 16))[-v29[1]]) + v22 - v10));
          FrameManager::UpdateChangedFrames((FrameManager *)g_pFrameMgr);
          *(this + 101) = v19;
          *(this + 102) = v9;
        }
      }
      goto LABEL_29;
    case 0xAu:
      if ( UIObject::hasScriptsEvent((UIObject *)this, 30) )
      {
        UIObject::CallScript((UIObject *)this, 30, "i", (int)*(float *)&a2->ie_closure);
      }
      else
      {
        v12 = 0;
        v20 = (*(this + 78) - *(this + 77)) >> 2;
        while ( v12 != v20 )
        {
          v13 = *(_DWORD *)&(*(this + 77))[4 * v12];
          v14 = (const char *)(*(int (__fastcall **)(int))(*(_DWORD *)v13 + 4))(v13);
          if ( j_strcmp(v14, "Slider") == 0 )
            (*(void (__fastcall **)(_DWORD, const InputEvent *))(**(_DWORD **)&(*(this + 77))[4 * v12] + 64))(
              *(_DWORD *)&(*(this + 77))[4 * v12],
              a2);
          ++v12;
        }
      }
      goto LABEL_20;
    case 0xBu:
      v15 = 0;
      v16 = (*(this + 78) - *(this + 77)) >> 2;
      while ( v15 != v16 )
      {
        v17 = *(_DWORD *)&(*(this + 77))[4 * v15++];
        (*(void (__fastcall **)(int, const InputEvent *))(*(_DWORD *)v17 + 64))(v17, a2);
      }
      goto LABEL_29;
    default:
LABEL_29:
      result = 1;
      break;
  }
  return result;
}


//======================================================================
// Frame::RegisterToFrameMgr(FrameManager *)
// address: 0x001BB3AC   size: 0x56 (86 bytes)
//======================================================================
_DWORD *__fastcall Frame::RegisterToFrameMgr(Frame *this, FrameManager *a2)
{
  _DWORD *result; // r0
  unsigned int i; // r4
  int v6; // r3
  unsigned int j; // r4
  int v8; // r3

  result = FrameManager::RegisterObject(a2, this);
  for ( i = 0; ; ++i )
  {
    v6 = *((_DWORD *)this + 77);
    if ( i >= (*((_DWORD *)this + 78) - v6) >> 2 )
      break;
    result = (_DWORD *)Frame::RegisterToFrameMgr(*(Frame **)(4 * i + v6), a2);
  }
  for ( j = 0; ; ++j )
  {
    v8 = *((_DWORD *)this + 57);
    if ( j >= (*((_DWORD *)this + 58) - v8) >> 3 )
      break;
    result = FrameManager::RegisterObject(a2, *(UIObject **)(8 * j + v8));
  }
  return result;
}


//======================================================================
// Frame::GetChildFrame(char const*)
// address: 0x001BB402   size: 0x40 (64 bytes)
//======================================================================
int __fastcall Frame::GetChildFrame(Frame *this, const char *a2)
{
  unsigned int i; // r4
  int v5; // r3
  const char *Name; // r0

  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)this + 77);
    if ( i >= (*((_DWORD *)this + 78) - v5) >> 2 )
      break;
    Name = (const char *)UIObject::GetName(*(UIObject **)(v5 + 4 * i));
    if ( j_strcmp(Name, a2) == 0 )
      return *(_DWORD *)(*((_DWORD *)this + 77) + 4 * i);
  }
  return 0;
}


//======================================================================
// Frame::GetNumRegions(void)
// address: 0x001BB442   size: 0xC (12 bytes)
//======================================================================
int __fastcall Frame::GetNumRegions(Frame *this)
{
  return (*((_DWORD *)this + 58) - *((_DWORD *)this + 57)) >> 3;
}


//======================================================================
// Frame::GetFrameBottom(void)
// address: 0x001BB44E   size: 0x6A (106 bytes)
//======================================================================
int __fastcall Frame::GetFrameBottom(Frame *this)
{
  int v1; // r2
  int v3; // r4
  int v4; // r3
  int v5; // r0
  unsigned int i; // r5
  int v7; // r3
  int FrameBottom; // r0

  v1 = *((_DWORD *)this + 57);
  v3 = *((_DWORD *)this + 18);
  v4 = 0;
  v5 = (*((_DWORD *)this + 58) - v1) >> 3;
  while ( v4 != v5 )
  {
    if ( *(_BYTE *)(*(_DWORD *)(v1 + 8 * v4) + 57) != 0 && v3 < *(_DWORD *)(*(_DWORD *)(v1 + 8 * v4) + 72) )
      v3 = *(_DWORD *)(*(_DWORD *)(v1 + 8 * v4) + 72);
    ++v4;
  }
  for ( i = 0; ; ++i )
  {
    v7 = *((_DWORD *)this + 77);
    if ( i >= (*((_DWORD *)this + 78) - v7) >> 2 )
      break;
    if ( *(_BYTE *)(*(_DWORD *)(4 * i + v7) + 57) != 0 )
    {
      FrameBottom = Frame::GetFrameBottom(*(Frame **)(4 * i + v7));
      if ( v3 < FrameBottom )
        v3 = FrameBottom;
    }
  }
  return v3;
}


//======================================================================
// Frame::GetFrameTop(void)
// address: 0x001BB4B8   size: 0x6A (106 bytes)
//======================================================================
int __fastcall Frame::GetFrameTop(Frame *this)
{
  int v1; // r2
  int v3; // r4
  int v4; // r3
  int v5; // r0
  unsigned int i; // r5
  int v7; // r3
  int FrameBottom; // r0

  v1 = *((_DWORD *)this + 57);
  v3 = *((_DWORD *)this + 16);
  v4 = 0;
  v5 = (*((_DWORD *)this + 58) - v1) >> 3;
  while ( v4 != v5 )
  {
    if ( *(_BYTE *)(*(_DWORD *)(v1 + 8 * v4) + 57) != 0 && v3 > *(_DWORD *)(*(_DWORD *)(v1 + 8 * v4) + 64) )
      v3 = *(_DWORD *)(*(_DWORD *)(v1 + 8 * v4) + 64);
    ++v4;
  }
  for ( i = 0; ; ++i )
  {
    v7 = *((_DWORD *)this + 77);
    if ( i >= (*((_DWORD *)this + 78) - v7) >> 2 )
      break;
    if ( *(_BYTE *)(*(_DWORD *)(4 * i + v7) + 57) != 0 )
    {
      FrameBottom = Frame::GetFrameBottom(*(Frame **)(4 * i + v7));
      if ( v3 > FrameBottom )
        v3 = FrameBottom;
    }
  }
  return v3;
}


//======================================================================
// Frame::UpdateHiddenFrameRecursive(void)
// address: 0x001BB524   size: 0xB0 (176 bytes)
//======================================================================
int __fastcall Frame::UpdateHiddenFrameRecursive(int this)
{
  unsigned int v1; // r5
  _DWORD *v2; // r4
  int v3; // r3
  int v4; // r3
  unsigned int i; // r7
  int v6; // r3
  const char *v7; // r0

  v1 = 0;
  v2 = (_DWORD *)this;
  if ( *(_BYTE *)(this + 57) != 0 )
  {
    while ( 1 )
    {
      v3 = v2[57];
      if ( v1 >= (v2[58] - v3) >> 3 )
        break;
      this = *(_DWORD *)(8 * v1 + v3);
      v4 = *(_DWORD *)(this + 96);
      if ( v4 + *(_DWORD *)(this + 64) < v2[16] || v4 + *(_DWORD *)(this + 72) > v2[18] )
        this = LayoutFrame::Hide((LayoutFrame *)this);
      ++v1;
    }
    for ( i = 0; ; ++i )
    {
      v6 = v2[77];
      if ( i >= (v2[78] - v6) >> 2 )
        break;
      v7 = (const char *)(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v6 + 4 * i) + 4))(*(_DWORD *)(v6 + 4 * i));
      this = j_strcmp(v7, "Slider");
      if ( this != 0 )
      {
        Frame::GetFrameTop(*(Frame **)(v2[77] + 4 * i));
        Frame::GetFrameBottom(*(Frame **)(v2[77] + 4 * i));
        if ( Frame::GetFrameTop(*(Frame **)(v2[77] + 4 * i)) < v2[16]
          || (this = Frame::GetFrameBottom(*(Frame **)(v2[77] + 4 * i))) > v2[18] )
        {
          this = Frame::UpdateHiddenFrameRecursive(*(Frame **)(v2[77] + 4 * i));
        }
      }
    }
  }
  return this;
}


//======================================================================
// Frame::IncreaseViewStartPointRecursive(int,int)
// address: 0x001BB5D8   size: 0x58 (88 bytes)
//======================================================================
int __fastcall Frame::IncreaseViewStartPointRecursive(Frame *this, int a2, int a3)
{
  int result; // r0
  unsigned int i; // r4
  int v8; // r3
  unsigned int j; // r4
  int v10; // r3

  result = LayoutFrame::IncreaseViewStartPoint(this, a2, a3);
  for ( i = 0; ; ++i )
  {
    v8 = *((_DWORD *)this + 57);
    if ( i >= (*((_DWORD *)this + 58) - v8) >> 3 )
      break;
    result = LayoutFrame::IncreaseViewStartPoint(*(LayoutFrame **)(8 * i + v8), a2, a3);
  }
  for ( j = 0; ; ++j )
  {
    v10 = *((_DWORD *)this + 77);
    if ( j >= (*((_DWORD *)this + 78) - v10) >> 2 )
      break;
    result = Frame::IncreaseViewStartPointRecursive(*(Frame **)(4 * j + v10), a2, a3);
  }
  return result;
}


//======================================================================
// Frame::MoveFrameRecursive(int,int)
// address: 0x001BB630   size: 0x58 (88 bytes)
//======================================================================
int __fastcall Frame::MoveFrameRecursive(Frame *this, int a2, int a3)
{
  int result; // r0
  unsigned int i; // r4
  int v8; // r3
  unsigned int j; // r4
  int v10; // r3

  result = LayoutFrame::MoveFrameAbsrect(this, a2, a3);
  for ( i = 0; ; ++i )
  {
    v8 = *((_DWORD *)this + 57);
    if ( i >= (*((_DWORD *)this + 58) - v8) >> 3 )
      break;
    result = LayoutFrame::MoveFrameAbsrect(*(LayoutFrame **)(8 * i + v8), a2, a3);
  }
  for ( j = 0; ; ++j )
  {
    v10 = *((_DWORD *)this + 77);
    if ( j >= (*((_DWORD *)this + 78) - v10) >> 2 )
      break;
    result = Frame::MoveFrameRecursive(*(Frame **)(4 * j + v10), a2, a3);
  }
  return result;
}


//======================================================================
// Frame::FillChildren(int)
// address: 0x001BB688   size: 0x64 (100 bytes)
//======================================================================
__int64 __fastcall Frame::FillChildren(__int64 this)
{
  _DWORD *v1; // r5
  unsigned int i; // r4
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r6
  int v6; // r7
  unsigned int v7; // r1
  int v8; // r0

  v1 = (_DWORD *)this;
  for ( i = 0; ; ++i )
  {
    v3 = v1[77];
    if ( i >= (v1[78] - v3) >> 2 )
      break;
    if ( (v1[72] & 8) != 0 )
    {
      v4 = (_DWORD *)(*(_DWORD *)(v3 + 4 * i) + 76);
      v5 = v1[20];
      v6 = v1[21];
      *v4 = v1[19];
      v4[1] = v5;
      v4[2] = v6;
      v4[3] = v1[22];
      *(_DWORD *)(*(_DWORD *)(v1[77] + 4 * i) + 288) |= 8u;
    }
    v7 = i;
    v8 = *(_DWORD *)(4 * i + v1[77]);
    (*(void (__fastcall **)(int, unsigned int, _DWORD))(*(_DWORD *)v8 + 56))(v8, v7, HIDWORD(this));
  }
  return this;
}


//======================================================================
// Frame::FillDrawItems(int,int)
// address: 0x001BB6F0   size: 0x82 (130 bytes)
//======================================================================
unsigned int __fastcall Frame::FillDrawItems(unsigned int this, int a2, unsigned int a3)
{
  unsigned __int64 v3; // r4
  __int64 v4; // r2
  int v5; // r1

  v3 = __PAIR64__(a3, this);
  if ( *(_BYTE *)(this + 100) != 0 && *(_BYTE *)(this + 57) != 0 )
  {
    *(_QWORD *)(this + 48) = -1;
    HIDWORD(v4) = *(unsigned __int8 *)(this + 300);
    if ( *(_BYTE *)(this + 300) != 0 )
    {
      v4 = 0x7FFF000000000000LL;
    }
    else
    {
      LODWORD(v4) = *(_DWORD *)(this + 296);
      if ( (_DWORD)v4 != -1 )
      {
        LODWORD(v4) = (_DWORD)v4 << 16;
        *(_DWORD *)(this + 52) = v4;
        *(_DWORD *)(this + 48) = HIDWORD(v4);
LABEL_10:
        FrameManager::AddDrawItems((FrameManager *)g_pFrameMgr, (Frame *)v3, v4);
        return Frame::FillChildren(v3 + 0x100000000LL);
      }
      v4 = (__int64)(a2 + 1) << (4 * (12 - BYTE4(v3)));
      v5 = *(_DWORD *)(v3 + 108);
      if ( v5 != 0 )
        v4 += *(_QWORD *)(v5 + 48);
    }
    *(_QWORD *)(v3 + 48) = v4;
    goto LABEL_10;
  }
  return this;
}


//======================================================================
// Frame::AddLevelRecursive(int)
// address: 0x001BB788   size: 0x14 (20 bytes)
//======================================================================
char *__fastcall Frame::AddLevelRecursive(Frame *this, int a2)
{
  char *result; // r0
  int v3; // r3

  result = (char *)this + 252;
  v3 = *(_DWORD *)(g_pFrameMgr + 24) + 1;
  *(_DWORD *)(g_pFrameMgr + 24) = v3;
  *((_DWORD *)result + 11) = v3;
  return result;
}


//======================================================================
// Frame::AddHitRect(LayoutRect const&)
// address: 0x001BB7A0   size: 0x2 (2 bytes)
//======================================================================
void Frame::AddHitRect()
{
  ;
}


//======================================================================
// Frame::MoveTo(void)
// address: 0x001BB7A2   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Frame::MoveTo(Frame *this)
{
  ;
}


//======================================================================
// Frame::DisableDrawLayer(DRAWLAYER_T)
// address: 0x001BB7A4   size: 0x2 (2 bytes)
//======================================================================
void Frame::DisableDrawLayer()
{
  ;
}


//======================================================================
// Frame::EnableDrawLayer(DRAWLAYER_T)
// address: 0x001BB7A6   size: 0x2 (2 bytes)
//======================================================================
void Frame::EnableDrawLayer()
{
  ;
}


//======================================================================
// Frame::SetClipState(bool)
// address: 0x001BB7A8   size: 0x18 (24 bytes)
//======================================================================
char *__fastcall Frame::SetClipState(Frame *this, int a2)
{
  char *result; // r0
  int v3; // r2
  unsigned int v4; // r3

  result = (char *)this + 252;
  v3 = *((_DWORD *)result + 9);
  if ( a2 != 0 )
    v4 = v3 | 8;
  else
    v4 = v3 & 0xFFFFFFF7;
  *((_DWORD *)result + 9) = v4;
  return result;
}


//======================================================================
// Frame::SetBlendAlpha(float)
// address: 0x001BB7C0   size: 0x48 (72 bytes)
//======================================================================
__int64 __fastcall Frame::SetBlendAlpha(Frame *this, float a2)
{
  unsigned int i; // r4
  int v4; // r3
  const char *v5; // r0
  int v6; // r0
  int v7; // r3
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = this;
  HIDWORD(v9) = this;
  for ( i = 0; ; ++i )
  {
    v4 = *(_DWORD *)(HIDWORD(v9) + 228);
    if ( i >= (*(_DWORD *)(HIDWORD(v9) + 232) - v4) >> 3 )
      break;
    v5 = (const char *)(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v4 + 8 * i) + 4))(*(_DWORD *)(v4 + 8 * i));
    v6 = j_strcmp(v5, "Texture");
    v7 = *(_DWORD *)(HIDWORD(v9) + 228);
    if ( v6 != 0 )
      FontString::SetBlendAlpha(*(FontString **)(v7 + 8 * i), a2);
    else
      Texture::SetBlendAlpha(*(Texture **)(v7 + 8 * i), a2);
  }
  return v9;
}


//======================================================================
// Frame::setUpdateTime(float)
// address: 0x001BB80C   size: 0x6 (6 bytes)
//======================================================================
float *__fastcall Frame::setUpdateTime(Frame *this, float a2)
{
  float *result; // r0

  result = (float *)((char *)this + 252);
  result[29] = a2;
  return result;
}


//======================================================================
// Frame::GetBackDropBlendAlpha(void)
// address: 0x001BB814   size: 0x14 (20 bytes)
//======================================================================
float __fastcall Frame::GetBackDropBlendAlpha(Frame *this)
{
  return (float)*((unsigned __int8 *)this + 331) / 255.0;
}


//======================================================================
// Frame::SetBackDropBlendAlpha(float)
// address: 0x001BB82C   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Frame::SetBackDropBlendAlpha(Frame *this, float a2)
{
  int result; // r0

  result = FloatToInt(a2 * 255.0);
  *((_BYTE *)this + 331) = result;
  *((_BYTE *)this + 335) = result;
  return result;
}


//======================================================================
// Frame::SetBackDropColor(unsigned int,unsigned int,unsigned int,unsigned int)
// address: 0x001BB854   size: 0x1E (30 bytes)
//======================================================================
_BYTE *__fastcall Frame::SetBackDropColor(_BYTE *this, char a2, char a3, char a4, char a5)
{
  *(this + 328) = a4;
  *(this + 329) = a3;
  *(this + 330) = a2;
  *(this + 331) = a5;
  return this;
}


//======================================================================
// Frame::setModalFrame(char const*)
// address: 0x001BB872   size: 0xC (12 bytes)
//======================================================================
int __fastcall Frame::setModalFrame(Frame *this, char *a2)
{
  return sub_3BE508((int)this + 400, a2);
}


//======================================================================
// Frame::findDrawRegion(char const*)
// address: 0x001BB87E   size: 0x38 (56 bytes)
//======================================================================
UIObject *__fastcall Frame::findDrawRegion(Frame *this, const char *a2)
{
  unsigned int i; // r4
  int v5; // r3
  UIObject *v6; // r5
  const char *Name; // r0

  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)this + 57);
    if ( i >= (*((_DWORD *)this + 58) - v5) >> 3 )
      return nullptr;
    v6 = *(UIObject **)(8 * i + v5);
    Name = (const char *)UIObject::GetName(v6);
    if ( j_strcmp(Name, a2) == 0 )
      break;
  }
  return v6;
}


//======================================================================
// Frame::findDrawRegionIndex(LayoutFrame *)
// address: 0x001BB8B6   size: 0x24 (36 bytes)
//======================================================================
int __fastcall Frame::findDrawRegionIndex(int a1, int a2)
{
  int *v2; // r0
  int v3; // r3
  int v4; // r2
  int result; // r0
  int v6; // r2

  v2 = (int *)(a1 + 228);
  v3 = *v2;
  v4 = v2[1];
  result = 0;
  v6 = (v4 - v3) >> 3;
  while ( result != v6 )
  {
    if ( *(_DWORD *)(v3 + 8 * result) == a2 )
      return result;
    ++result;
  }
  return -1;
}


//======================================================================
// Frame::AddChildFrame(Frame*)
// address: 0x001BB9C2   size: 0x2C (44 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Frame::AddChildFrame(Frame *this, Frame *a2)
{
  int v3; // r2
  int v4; // [sp+4h] [bp-4h] BYREF

  if ( a2 != nullptr )
  {
    v3 = *((_DWORD *)a2 + 10);
    *((_DWORD *)a2 + 27) = this;
    *((_DWORD *)a2 + 10) = v3 + 1;
    (*(void (__fastcall **)(Frame *, _DWORD))(*(_DWORD *)a2 + 48))(a2, *((_DWORD *)this + 56));
    std::vector<Frame *>::push_back((unsigned int)this + 308, &v4);
  }
}


//======================================================================
// Frame::FindFrameOnPoint(int,int,std::vector<Frame*,std::allocator<Frame*>> &)
// address: 0x001BB9EE   size: 0x66 (102 bytes)
//======================================================================
unsigned int __fastcall Frame::FindFrameOnPoint(unsigned int result, int a2, int a3, unsigned int a4)
{
  _DWORD *v4; // r4
  int v7; // r5
  int v9; // [sp+4h] [bp-10h]
  _DWORD *v10; // [sp+Ch] [bp-8h] BYREF

  v4 = (_DWORD *)result;
  if ( *(_BYTE *)(result + 57) != 0 )
  {
    if ( *(_BYTE *)(result + 58) == 0 )
    {
      result = LayoutFrame::PointInLayoutFrame((LayoutFrame *)result, a2, a3);
      if ( result != 0 )
      {
        v10 = v4;
        result = std::vector<Frame *>::push_back(a4, (int *)&v10);
      }
    }
    v7 = v4[78];
    v9 = v4[77];
    while ( v7 != v9 )
    {
      result = *(_DWORD *)(v7 - 4);
      if ( v4[11] <= *(_DWORD *)(result + 44) )
        result = (*(int (__fastcall **)(unsigned int, int, int, unsigned int))(*(_DWORD *)result + 88))(
                   result,
                   a2,
                   a3,
                   a4);
      v7 -= 4;
    }
  }
  return result;
}


//======================================================================
// Frame::RegisterEvent(char const*)
// address: 0x001BBBF0   size: 0xB6 (182 bytes)
//======================================================================
void __fastcall Frame::RegisterEvent(Frame *this, char *a2)
{
  int v2; // r5
  void *v3; // r6
  int v4; // r3
  _DWORD *v5; // r0
  Frame *v8; // [sp+18h] [bp-14h] BYREF
  int v9[4]; // [sp+1Ch] [bp-10h] BYREF

  if ( a2 != nullptr )
  {
    sub_3BF0BC((int)v9, a2);
    v2 = dword_50F800;
    v3 = &unk_50F7FC;
    while ( v2 != 0 )
    {
      if ( std::operator<<char>() != 0 )
      {
        v4 = *(_DWORD *)(v2 + 12);
        v2 = (int)v3;
      }
      else
      {
        v4 = *(_DWORD *)(v2 + 8);
      }
      v3 = (void *)v2;
      v2 = v4;
    }
    if ( v3 != &unk_50F7FC && std::operator<<char>() != 0 )
      v3 = &unk_50F7FC;
    sub_3BDF80(v9);
    if ( v3 == &unk_50F7FC )
    {
      memset(v9, 0, 12);
      v8 = this;
      std::vector<Frame *>::push_back((unsigned int)v9, (int *)&v8);
      sub_3BF0BC((int)&v8, a2);
      v5 = std::map<std::string,stEventFrameArray>::operator[](&EventMap, (int)&v8);
      std::vector<Frame *>::operator=((int)v5, (int)v9);
      sub_3BDF80(&v8);
      sub_1BA238((void *)v9[0]);
    }
    else
    {
      v9[0] = (int)this;
      std::vector<Frame *>::push_back((unsigned int)v3 + 20, v9);
    }
  }
}


//======================================================================
// Frame::AddFontString(DRAWLAYER_T,FontString *)
// address: 0x001BBE78   size: 0x2E (46 bytes)
//======================================================================
__int64 __fastcall Frame::AddFontString(__int64 a1, _DWORD *a2)
{
  int v2; // r4
  int v3; // r3
  int v4; // r3
  int v5; // r1
  __int64 v6; // r0
  __int64 v8; // [sp+0h] [bp-Ch] BYREF
  _DWORD *v9; // [sp+8h] [bp-4h]

  v8 = a1;
  v9 = a2;
  v2 = a1;
  if ( a2 != nullptr )
  {
    v3 = a2[10];
    HIDWORD(v8) = HIDWORD(a1);
    a2[10] = v3 + 1;
    v4 = *a2;
    a2[27] = a1;
    v5 = *(_DWORD *)(a1 + 224);
    LODWORD(v8) = a2;
    (*(void (__fastcall **)(_DWORD *, int))(v4 + 48))(a2, v5);
    LODWORD(v6) = v2 + 228;
    HIDWORD(v6) = &v8;
    std::vector<Frame::DrawObj>::push_back(v6);
  }
  return v8;
}


//======================================================================
// Frame::AddTexture(DRAWLAYER_T,Texture *)
// address: 0x001BBEA6   size: 0x2E (46 bytes)
//======================================================================
__int64 __fastcall Frame::AddTexture(__int64 a1, _DWORD *a2)
{
  int v2; // r4
  int v3; // r3
  int v4; // r3
  int v5; // r1
  __int64 v6; // r0
  __int64 v8; // [sp+0h] [bp-Ch] BYREF
  _DWORD *v9; // [sp+8h] [bp-4h]

  v8 = a1;
  v9 = a2;
  v2 = a1;
  if ( a2 != nullptr )
  {
    v3 = a2[10];
    HIDWORD(v8) = HIDWORD(a1);
    a2[10] = v3 + 1;
    v4 = *a2;
    a2[27] = a1;
    v5 = *(_DWORD *)(a1 + 224);
    LODWORD(v8) = a2;
    (*(void (__fastcall **)(_DWORD *, int))(v4 + 48))(a2, v5);
    LODWORD(v6) = v2 + 228;
    HIDWORD(v6) = &v8;
    std::vector<Frame::DrawObj>::push_back(v6);
  }
  return v8;
}


//======================================================================
// Frame::AddModelView(DRAWLAYER_T,ModelView *)
// address: 0x001BBED4   size: 0x2E (46 bytes)
//======================================================================
__int64 __fastcall Frame::AddModelView(__int64 a1, _DWORD *a2)
{
  int v2; // r4
  int v3; // r3
  int v4; // r3
  int v5; // r1
  __int64 v6; // r0
  __int64 v8; // [sp+0h] [bp-Ch] BYREF
  _DWORD *v9; // [sp+8h] [bp-4h]

  v8 = a1;
  v9 = a2;
  v2 = a1;
  if ( a2 != nullptr )
  {
    v3 = a2[10];
    HIDWORD(v8) = HIDWORD(a1);
    a2[10] = v3 + 1;
    v4 = *a2;
    a2[27] = a1;
    v5 = *(_DWORD *)(a1 + 224);
    LODWORD(v8) = a2;
    (*(void (__fastcall **)(_DWORD *, int))(v4 + 48))(a2, v5);
    LODWORD(v6) = v2 + 228;
    HIDWORD(v6) = &v8;
    std::vector<Frame::DrawObj>::push_back(v6);
  }
  return v8;
}


//======================================================================
// Frame::AddLineFrame(DRAWLAYER_T,DrawLineFrame *)
// address: 0x001BBF02   size: 0x2E (46 bytes)
//======================================================================
__int64 __fastcall Frame::AddLineFrame(__int64 a1, _DWORD *a2)
{
  int v2; // r4
  int v3; // r3
  int v4; // r3
  int v5; // r1
  __int64 v6; // r0
  __int64 v8; // [sp+0h] [bp-Ch] BYREF
  _DWORD *v9; // [sp+8h] [bp-4h]

  v8 = a1;
  v9 = a2;
  v2 = a1;
  if ( a2 != nullptr )
  {
    v3 = a2[10];
    HIDWORD(v8) = HIDWORD(a1);
    a2[10] = v3 + 1;
    v4 = *a2;
    a2[27] = a1;
    v5 = *(_DWORD *)(a1 + 224);
    LODWORD(v8) = a2;
    (*(void (__fastcall **)(_DWORD *, int))(v4 + 48))(a2, v5);
    LODWORD(v6) = v2 + 228;
    HIDWORD(v6) = &v8;
    std::vector<Frame::DrawObj>::push_back(v6);
  }
  return v8;
}


//======================================================================
// Frame::CopyMembers(Frame*)
// address: 0x001BC054   size: 0x224 (548 bytes)
//======================================================================
LayoutFrame *__fastcall Frame::CopyMembers(LayoutFrame *this, Frame *a2)
{
  LayoutFrame *v2; // r7
  int v4; // r3
  int v5; // r4
  char *v6; // r1
  unsigned int v7; // r3
  unsigned int v8; // r2
  unsigned int i; // r6
  int v10; // r3
  _DWORD *v11; // r4
  LayoutFrame **v12; // r4
  int v13; // r0
  int v14; // r3
  unsigned int v15; // r3
  int v16; // r12
  unsigned int v17; // r2
  unsigned int j; // r6
  int v19; // r3
  int (__fastcall ***v20)(_DWORD); // r0
  int v21; // r1
  int v22; // r2
  int v23; // [sp+10h] [bp-24h]
  int v24; // [sp+14h] [bp-20h]
  _DWORD *v25; // [sp+18h] [bp-1Ch]
  _DWORD *v26; // [sp+1Ch] [bp-18h]
  void *v27; // [sp+24h] [bp-10h] BYREF
  _DWORD v28[3]; // [sp+28h] [bp-Ch] BYREF

  v2 = this;
  if ( a2 != nullptr )
  {
    LayoutFrame::CopyMembers(this, a2);
    v4 = *((_DWORD *)v2 + 58) - *((_DWORD *)v2 + 57);
    v5 = *((_DWORD *)a2 + 57);
    v6 = *((char **)a2 + 58);
    v28[0] = 0;
    v28[1] = 0;
    v7 = v4 >> 3;
    v8 = (int)&v6[-v5] >> 3;
    if ( v7 <= v8 )
    {
      if ( v7 < v8 )
        *((_DWORD *)a2 + 58) = v5 + 8 * v7;
    }
    else
    {
      std::vector<Frame::DrawObj>::_M_fill_insert((void **)a2 + 57, v6, v7 - v8, v28);
    }
    for ( i = 0; ; ++i )
    {
      v10 = *((_DWORD *)v2 + 57);
      if ( i >= (*((_DWORD *)v2 + 58) - v10) >> 3 )
        break;
      v11 = (_DWORD *)((char *)a2 + 228);
      v23 = 8 * i;
      v25 = (_DWORD *)(*((_DWORD *)a2 + 57) + 8 * i);
      *v25 = (***(int (__fastcall ****)(_DWORD))(v10 + 8 * i))(*(_DWORD *)(v10 + 8 * i));
      *(_DWORD *)(*(_DWORD *)(*v11 + v23) + 108) = a2;
      *(_DWORD *)(*v11 + v23 + 4) = *(_DWORD *)(*((_DWORD *)v2 + 57) + v23 + 4);
    }
    *((_DWORD *)a2 + 60) = *((_DWORD *)v2 + 60);
    *((_BYTE *)a2 + 244) = *((_BYTE *)v2 + 244);
    *((_BYTE *)a2 + 245) = *((_BYTE *)v2 + 245);
    *((_BYTE *)a2 + 246) = *((_BYTE *)v2 + 246);
    *((_BYTE *)a2 + 247) = *((_BYTE *)v2 + 247);
    *((_BYTE *)a2 + 248) = *((_BYTE *)v2 + 248);
    *((_BYTE *)a2 + 249) = *((_BYTE *)v2 + 249);
    v12 = (LayoutFrame **)((char *)v2 + 252);
    *((_DWORD *)a2 + 71) = *((_DWORD *)v2 + 71);
    *((_DWORD *)a2 + 72) = *((_DWORD *)v2 + 72);
    *((_DWORD *)a2 + 73) = *((_DWORD *)v2 + 73);
    *((_DWORD *)a2 + 74) = *((_DWORD *)v2 + 74);
    *((_BYTE *)a2 + 300) = *((_BYTE *)v2 + 300);
    *((_BYTE *)a2 + 58) = *((_BYTE *)v2 + 58);
    sub_3BEBBC((char *)a2 + 400);
    *((_DWORD *)a2 + 76) = *((_DWORD *)v2 + 76);
    v13 = *((_DWORD *)v2 + 77);
    v14 = *((_DWORD *)v2 + 78);
    v27 = nullptr;
    v15 = (v14 - v13) >> 2;
    v16 = *((_DWORD *)a2 + 77);
    v17 = (*((_DWORD *)a2 + 78) - v16) >> 2;
    if ( v15 <= v17 )
    {
      if ( v15 < v17 )
        *((_DWORD *)a2 + 78) = 4 * v15 + v16;
    }
    else
    {
      std::vector<Frame *>::_M_fill_insert((void **)a2 + 77, *((char **)a2 + 78), v15 - v17, &v27);
    }
    for ( j = 0; ; ++j )
    {
      v19 = *((_DWORD *)v2 + 77);
      if ( j >= (*((_DWORD *)v2 + 78) - v19) >> 2 )
        break;
      v24 = 4 * j;
      v26 = (_DWORD *)(*((_DWORD *)a2 + 77) + 4 * j);
      v20 = *(int (__fastcall ****)(_DWORD))(v19 + 4 * j);
      *v26 = (**v20)(v20);
      *(_DWORD *)(*(_DWORD *)(*((_DWORD *)a2 + 77) + v24) + 108) = a2;
    }
    *((_DWORD *)a2 + 80) = *((_DWORD *)v2 + 80);
    *((_DWORD *)a2 + 81) = *((_DWORD *)v2 + 81);
    *((_DWORD *)a2 + 82) = *((_DWORD *)v2 + 82);
    *((_DWORD *)a2 + 83) = *((_DWORD *)v2 + 83);
    *((_BYTE *)a2 + 336) = *((_BYTE *)v2 + 336);
    v21 = *((_DWORD *)v2 + 86);
    v22 = *((_DWORD *)v2 + 87);
    *((_DWORD *)a2 + 85) = *((_DWORD *)v2 + 85);
    *((_DWORD *)a2 + 86) = v21;
    *((_DWORD *)a2 + 87) = v22;
    *((_DWORD *)a2 + 88) = *((_DWORD *)v2 + 88);
    *((_DWORD *)a2 + 94) = UIObject::AssignHUIRes(v2, *((void **)v2 + 94));
    *((_DWORD *)a2 + 95) = UIObject::AssignHUIRes(v2, *((void **)v2 + 95));
    sub_3BEBBC((char *)a2 + 384);
    sub_3BEBBC((char *)a2 + 388);
    this = *v12;
    *((_DWORD *)a2 + 63) = *v12;
    *((_DWORD *)a2 + 64) = *((_DWORD *)v2 + 64);
  }
  return this;
}


//======================================================================
// Frame::CreateClone(void)
// address: 0x001BC278   size: 0x1E (30 bytes)
//======================================================================
Frame *__fastcall Frame::CreateClone(Frame *this)
{
  Frame *v2; // r4

  v2 = (Frame *)operator new(0x1A0u);
  Frame::Frame(v2);
  Frame::CopyMembers(this, v2);
  return v2;
}


//======================================================================
// Frame::ReplaceSpecialName(void)
// address: 0x001BC296   size: 0x50 (80 bytes)
//======================================================================
int __fastcall Frame::ReplaceSpecialName(Frame *this)
{
  int result; // r0
  unsigned int i; // r4
  int v4; // r3
  int v5; // r0
  unsigned int j; // r4
  int v7; // r3
  int v8; // r0

  result = LayoutFrame::ReplaceSpecialName(this);
  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 57);
    if ( i >= (*((_DWORD *)this + 58) - v4) >> 3 )
      break;
    v5 = *(_DWORD *)(8 * i + v4);
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 20))(v5);
  }
  for ( j = 0; ; ++j )
  {
    v7 = *((_DWORD *)this + 77);
    if ( j >= (*((_DWORD *)this + 78) - v7) >> 2 )
      break;
    v8 = *(_DWORD *)(4 * j + v7);
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 20))(v8);
  }
  return result;
}


//======================================================================
// Frame::PostInit(void)
// address: 0x001BC2E6   size: 0x50 (80 bytes)
//======================================================================
int __fastcall Frame::PostInit(Frame *this)
{
  int result; // r0
  unsigned int i; // r4
  int v4; // r3
  int v5; // r0
  unsigned int j; // r4
  int v7; // r3
  int v8; // r0

  result = LayoutFrame::PostInit(this);
  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 57);
    if ( i >= (*((_DWORD *)this + 58) - v4) >> 3 )
      break;
    v5 = *(_DWORD *)(8 * i + v4);
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 16))(v5);
  }
  for ( j = 0; ; ++j )
  {
    v7 = *((_DWORD *)this + 77);
    if ( j >= (*((_DWORD *)this + 78) - v7) >> 2 )
      break;
    v8 = *(_DWORD *)(4 * j + v7);
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 16))(v8);
  }
  return result;
}


//======================================================================
// Frame::Save(TiXmlElement *)
// address: 0x001BC338   size: 0x648 (1608 bytes)
//======================================================================
TiXmlElement *__fastcall Frame::Save(Frame *this, TiXmlElement *a2)
{
  TiXmlElement *v3; // r0
  int v4; // r3
  int v5; // r2
  const char *v6; // r2
  TiXmlElement *v7; // r4
  TiXmlElement *v8; // r5
  TiXmlElement *v9; // r6
  TiXmlElement *v10; // r6
  TiXmlElement *v11; // r6
  TiXmlElement *v12; // r4
  int v13; // r2
  unsigned int v14; // r5
  int v15; // r4
  int v16; // r3
  char *Name; // r0
  int v18; // r2
  int i; // r3
  char *v20; // r0
  int v21; // r3
  int v22; // r4
  const char *v23; // r0
  TiXmlElement *v24; // r5
  unsigned int v25; // r4
  int v26; // r3
  int v27; // r0
  unsigned int v28; // r6
  _DWORD *v29; // r3
  char *ScriptEventName; // r4
  char *v31; // r6
  char *v32; // r4
  char *v33; // r3
  int v34; // r3
  const char *v35; // r5
  _BYTE *v36; // r4
  size_t v37; // r0
  char *v38; // r5
  int v39; // r0
  int v40; // r0
  _BOOL4 v41; // r6
  int v42; // r0
  TiXmlElement *v44; // [sp+0h] [bp-3Ch]
  char *v45; // [sp+0h] [bp-3Ch]
  TiXmlElement *v46; // [sp+0h] [bp-3Ch]
  TiXmlElement *v47; // [sp+0h] [bp-3Ch]
  const char *v48; // [sp+4h] [bp-38h]
  char *v49; // [sp+4h] [bp-38h]
  TiXmlNode *v50; // [sp+8h] [bp-34h]
  TiXmlNode *v51; // [sp+8h] [bp-34h]
  TiXmlElement *v52; // [sp+Ch] [bp-30h]
  TiXmlNode *v53; // [sp+10h] [bp-2Ch]
  char *v54; // [sp+14h] [bp-28h]
  TiXmlNode *v55; // [sp+1Ch] [bp-20h]
  char *v56; // [sp+24h] [bp-18h] BYREF
  char *v57; // [sp+28h] [bp-14h] BYREF
  char v58[4]; // [sp+2Ch] [bp-10h] BYREF
  char *v59; // [sp+30h] [bp-Ch] BYREF
  char *v60; // [sp+34h] [bp-8h]

  v3 = (TiXmlElement *)LayoutFrame::Save(this, a2);
  v52 = v3;
  if ( v3 != nullptr )
  {
    v4 = *((_DWORD *)this + 11);
    if ( v4 != 0 )
    {
      v5 = *((_DWORD *)this + 27);
      if ( v5 == 0 )
      {
        v6 = off_451E40[v4];
        goto LABEL_7;
      }
      if ( v4 != *(_DWORD *)(v5 + 44) )
      {
        v6 = off_451E40[v4];
LABEL_7:
        TiXmlElement::SetAttribute(v3, "frameStrata", v6);
      }
    }
    if ( *((_BYTE *)this + 244) != 0 )
      TiXmlElement::SetAttribute(v52, "moveable", "true");
    if ( *((_BYTE *)this + 246) != 0 )
      TiXmlElement::SetAttribute(v52, "enableMouse", "true");
    if ( *((_BYTE *)this + 247) != 0 )
      TiXmlElement::SetAttribute(v52, "enableKeyboard", "true");
    if ( *((_BYTE *)this + 248) != 0 )
      TiXmlElement::SetAttribute(v52, "clampedToScreen", "true");
    if ( *((_BYTE *)this + 249) != 0 )
      TiXmlElement::SetAttribute(v52, "protected", "true");
    if ( *((_BYTE *)this + 300) != 0 )
      TiXmlElement::SetAttribute(v52, "toplevel", "true");
    if ( *(_DWORD *)(*((_DWORD *)this + 96) - 12) != 0 )
    {
      v7 = (TiXmlElement *)operator new(0x50u);
      TiXmlElement::TiXmlElement(v7, "Backdrop");
      TiXmlNode::LinkEndChild(v52, v7);
      TiXmlElement::SetAttribute(v7, "edgeFile", *((const char **)this + 96));
      if ( *(_DWORD *)(*((_DWORD *)this + 97) - 12) != 0 )
        TiXmlElement::SetAttribute(v7, "bgFile", *((const char **)this + 97));
      TiXmlElement::SetAttribute(v7, "tile", "true");
      v8 = (TiXmlElement *)operator new(0x50u);
      TiXmlElement::TiXmlElement(v8, "EdgeSize");
      TiXmlNode::LinkEndChild(v7, v8);
      v9 = (TiXmlElement *)operator new(0x50u);
      TiXmlElement::TiXmlElement(v9, "AbsValue");
      TiXmlNode::LinkEndChild(v8, v9);
      TiXmlElement::SetAttribute(v9, "val", *((_DWORD *)this + 80));
      v44 = (TiXmlElement *)operator new(0x50u);
      TiXmlElement::TiXmlElement(v44, "TileSize");
      TiXmlNode::LinkEndChild(v7, v44);
      v10 = (TiXmlElement *)operator new(0x50u);
      TiXmlElement::TiXmlElement(v10, "AbsValue");
      TiXmlNode::LinkEndChild(v44, v10);
      TiXmlElement::SetAttribute(v10, "val", *((_DWORD *)this + 81));
      v11 = (TiXmlElement *)operator new(0x50u);
      TiXmlElement::TiXmlElement(v11, "BackgroundInsets");
      TiXmlNode::LinkEndChild(v7, v11);
      v12 = (TiXmlElement *)operator new(0x50u);
      TiXmlElement::TiXmlElement(v12, "AbsInset");
      TiXmlNode::LinkEndChild(v11, v12);
      TiXmlElement::SetAttribute(v12, "left", *((_DWORD *)this + 85));
      TiXmlElement::SetAttribute(v12, "right", *((_DWORD *)this + 87));
      TiXmlElement::SetAttribute(v12, "top", *((_DWORD *)this + 86));
      TiXmlElement::SetAttribute(v12, "bottom", *((_DWORD *)this + 88));
    }
    v13 = *((_DWORD *)this + 47);
    if ( v13 != 0 )
      TiXmlElement::SetAttribute(v52, "id", v13);
    if ( (*((_DWORD *)this + 58) - *((_DWORD *)this + 57)) >> 3 != 0 )
    {
      v14 = 0;
      v15 = 1;
      while ( 1 )
      {
        v16 = *((_DWORD *)this + 57);
        if ( v14 >= (*((_DWORD *)this + 58) - v16) >> 3 )
          break;
        Name = (char *)UIObject::GetName(*(UIObject **)(8 * v14 + v16));
        sub_3BF0BC((int)&v59, Name);
        v45 = v59;
        if ( j_strstr(v59, "NormalRegion") == nullptr )
          v15 &= -(j_strstr(v45, "OverlayRegion") != nullptr);
        sub_3BDF80(&v59);
        ++v14;
      }
      if ( v15 == 0 )
      {
        v50 = (TiXmlNode *)operator new(0x50u);
        TiXmlElement::TiXmlElement(v50, "Layers");
        TiXmlNode::LinkEndChild(v52, v50);
        do
        {
          v18 = *((_DWORD *)this + 57);
          for ( i = 0; ; ++i )
          {
            if ( i == (*((_DWORD *)this + 58) - v18) >> 3 )
              goto LABEL_42;
            if ( *(_DWORD *)(v18 + 8 * i + 4) == v15 )
              break;
          }
          v46 = (TiXmlElement *)operator new(0x50u);
          v28 = 0;
          TiXmlElement::TiXmlElement(v46, "Layer");
          TiXmlNode::LinkEndChild(v50, v46);
          TiXmlElement::SetAttribute(v46, "level", off_451E68[v15]);
          while ( 1 )
          {
            v21 = *((_DWORD *)this + 57);
            if ( v28 >= (*((_DWORD *)this + 58) - v21) >> 3 )
              break;
            v20 = (char *)UIObject::GetName(*(UIObject **)(v21 + 8 * v28));
            sub_3BF0BC((int)&v59, v20);
            v48 = v59;
            if ( j_strstr(v59, "NormalRegion") == nullptr && j_strstr(v48, "OverlayRegion") == nullptr )
            {
              v29 = (_DWORD *)(*((_DWORD *)this + 57) + 8 * v28);
              if ( v29[1] == v15 )
                (*(void (__fastcall **)(_DWORD, TiXmlElement *))(*(_DWORD *)*v29 + 36))(*v29, v46);
            }
            sub_3BDF80(&v59);
            ++v28;
          }
LABEL_42:
          ++v15;
        }
        while ( v15 != 5 );
      }
    }
    if ( (*((_DWORD *)this + 78) - *((_DWORD *)this + 77)) >> 2 != 0 )
    {
      v23 = (const char *)(*(int (__fastcall **)(Frame *))(*(_DWORD *)this + 4))(this);
      if ( j_strcmp(v23, "ScrollFrame") != 0 )
      {
        v24 = (TiXmlElement *)operator new(0x50u);
        v25 = 0;
        TiXmlElement::TiXmlElement(v24, "Frames");
        TiXmlNode::LinkEndChild(v52, v24);
        while ( 1 )
        {
          v26 = *((_DWORD *)this + 77);
          if ( v25 >= (*((_DWORD *)this + 78) - v26) >> 2 )
            break;
          v27 = *(_DWORD *)(4 * v25++ + v26);
          (*(void (__fastcall **)(int, TiXmlElement *))(*(_DWORD *)v27 + 36))(v27, v24);
        }
      }
    }
    v22 = 0;
    while ( !UIObject::hasScriptsEvent(this, v22) )
    {
      if ( ++v22 == 52 )
        return v52;
    }
    v53 = (TiXmlNode *)operator new(0x50u);
    TiXmlElement::TiXmlElement(v53, "Scripts");
    TiXmlNode::LinkEndChild(v52, v53);
    v47 = nullptr;
    while ( !UIObject::hasScriptsEvent(this, (int)v47) )
    {
LABEL_69:
      v47 = (TiXmlElement *)((char *)v47 + 1);
      if ( v47 == (TiXmlElement *)&dword_34 )
        return v52;
    }
    ScriptEventName = GetScriptEventName((int)v47);
    v55 = (TiXmlNode *)operator new(0x50u);
    TiXmlElement::TiXmlElement(v55, ScriptEventName);
    TiXmlNode::LinkEndChild(v53, v55);
    v31 = *((char **)this + 6);
    v51 = (Frame *)((char *)this + 20);
    v32 = (char *)this + 20;
    while ( v31 != nullptr )
    {
      if ( *((_DWORD *)v31 + 4) < (int)v47 )
      {
        v33 = *((char **)v31 + 3);
        v31 = v32;
      }
      else
      {
        v33 = *((char **)v31 + 2);
      }
      v32 = v31;
      v31 = v33;
    }
    if ( v32 != (char *)v51 && (int)v47 >= *((_DWORD *)v32 + 4) )
    {
LABEL_68:
      v35 = *((const char **)v32 + 5);
      v36 = (_BYTE *)operator new(0x30u);
      TiXmlNode::TiXmlNode(v36, 4);
      *(_DWORD *)v36 = &off_4599A0;
      v37 = j_strlen(v35);
      TiXmlString::assign((TiXmlString *)(v36 + 32), v35, v37);
      v36[44] = 0;
      TiXmlNode::LinkEndChild(v55, (TiXmlNode *)v36);
      goto LABEL_69;
    }
    v56 = &byte_55FB88;
    v57 = (char *)v47;
    sub_3BEB1C(v58, &v56);
    v54 = (char *)this + 16;
    if ( v32 == (char *)v51 )
    {
      if ( *((_DWORD *)this + 9) != 0 )
      {
        v38 = *((char **)this + 8);
        if ( *((_DWORD *)v38 + 4) < (int)v57 )
          goto LABEL_87;
      }
    }
    else
    {
      v34 = *((_DWORD *)v32 + 4);
      v49 = v57;
      if ( (int)v57 >= v34 )
      {
        if ( v34 >= (int)v57 )
        {
LABEL_67:
          sub_3BDF80(v58);
          sub_3BDF80(&v56);
          goto LABEL_68;
        }
        if ( v32 != *((char **)this + 8) )
        {
          v40 = sub_391DDC(v32);
          if ( (int)v49 >= *(_DWORD *)(v40 + 16) )
          {
            std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_get_insert_unique_pos(
              (int *)&v59,
              (int)v54,
              &v57);
            v31 = v59;
            v32 = v60;
          }
          else if ( *((_DWORD *)v32 + 3) != 0 )
          {
            v32 = (char *)v40;
            v31 = (char *)v40;
          }
        }
        v38 = v32;
        v32 = v31;
LABEL_85:
        if ( v38 == nullptr )
          goto LABEL_67;
        v41 = true;
        if ( v32 != nullptr )
        {
LABEL_90:
          v42 = operator new(0x18u);
          v32 = (char *)v42;
          if ( v42 != -16 )
          {
            *(_DWORD *)(v42 + 16) = v57;
            sub_3BEB1C(v42 + 20, v58);
          }
          sub_391E64(v41, v32, v38, v51);
          ++*((_DWORD *)this + 9);
          goto LABEL_67;
        }
LABEL_87:
        v41 = v38 == (char *)v51 || (int)v57 < *((_DWORD *)v38 + 4);
        goto LABEL_90;
      }
      if ( v32 == *((char **)this + 7) )
      {
        v38 = v32;
        goto LABEL_85;
      }
      v39 = sub_391E44(v32);
      v38 = (char *)v39;
      if ( *(_DWORD *)(v39 + 16) < (int)v49 )
      {
        if ( *(_DWORD *)(v39 + 12) != 0 )
          v38 = v32;
        else
          v32 = nullptr;
        goto LABEL_85;
      }
    }
    std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_get_insert_unique_pos(
      (int *)&v59,
      (int)v54,
      &v57);
    v32 = v59;
    v38 = v60;
    goto LABEL_85;
  }
  return v52;
}


//======================================================================
// Frame::CalAbsRectSelf(unsigned int)
// address: 0x001BC99C   size: 0x56 (86 bytes)
//======================================================================
int __fastcall Frame::CalAbsRectSelf(Frame *this, unsigned int a2)
{
  int result; // r0
  unsigned int i; // r4
  int v6; // r3
  int v7; // r0
  unsigned int j; // r4
  int v9; // r3
  int v10; // r0

  result = LayoutFrame::CalAbsRectSelf(this, a2);
  for ( i = 0; ; ++i )
  {
    v6 = *((_DWORD *)this + 57);
    if ( i >= (*((_DWORD *)this + 58) - v6) >> 3 )
      break;
    v7 = *(_DWORD *)(8 * i + v6);
    result = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)v7 + 24))(v7, a2);
  }
  for ( j = 0; ; ++j )
  {
    v9 = *((_DWORD *)this + 77);
    if ( j >= (*((_DWORD *)this + 78) - v9) >> 2 )
      break;
    v10 = *(_DWORD *)(4 * j + v9);
    result = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)v10 + 24))(v10, a2);
  }
  return result;
}

