// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: IconBar

//======================================================================
// IconBar::GetTypeName(void)
// address: 0x001CA4B4   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall IconBar::GetTypeName(IconBar *this)
{
  return "IconBar";
}


//======================================================================
// IconBar::~IconBar()
// address: 0x001CA4C0   size: 0x48 (72 bytes)
//======================================================================
// Alternative name is '_ZN7IconBarD1Ev'
void __fastcall IconBar::~IconBar(IconBar *this)
{
  void *v2; // r0
  void *v3; // r0

  *(_DWORD *)this = &off_459568;
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)g_pDisplay + 92))(g_pDisplay, *((_DWORD *)this + 103));
  v2 = *((void **)this + 107);
  if ( v2 != nullptr )
    operator delete(v2);
  v3 = *((void **)this + 104);
  if ( v3 != nullptr )
    operator delete(v3);
  Frame::~Frame(this);
}


//======================================================================
// IconBar::~IconBar()
// address: 0x001CA510   size: 0x12 (18 bytes)
//======================================================================
void __fastcall IconBar::~IconBar(IconBar *this)
{
  IconBar::~IconBar(this);
  operator delete(this);
}


//======================================================================
// IconBar::IconBar(void)
// address: 0x001CA524   size: 0x6A (106 bytes)
//======================================================================
// Alternative name is '_ZN7IconBarC2Ev'
void __fastcall IconBar::IconBar(IconBar *this)
{
  Frame::Frame(this);
  *(_DWORD *)this = &off_459568;
  *((_DWORD *)this + 103) = 0;
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 105) = 0;
  *((_DWORD *)this + 106) = 0;
  *((_DWORD *)this + 107) = 0;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 109) = 0;
  *((_DWORD *)this + 118) = 0;
  *((_DWORD *)this + 117) = 1065353216;
  *((_DWORD *)this + 110) = -1;
  *((_DWORD *)this + 115) = -1;
  j_memset((char *)this + 444, 0, 0x10u);
}


//======================================================================
// IconBar::drawIcon(int,int)
// address: 0x001CA594   size: 0xB2 (178 bytes)
//======================================================================
int __fastcall IconBar::drawIcon(IconBar *this, int a2, int a3)
{
  int v3; // r6
  _DWORD *v4; // r5
  int v6; // [sp+24h] [bp-18h]
  int v7; // [sp+28h] [bp-14h]
  int v8; // [sp+2Ch] [bp-10h]

  v8 = *((_DWORD *)this + 15);
  v6 = *((_DWORD *)this + 18) - *((_DWORD *)this + 16);
  v3 = (*((_DWORD *)this + 17) - v8) / *((_DWORD *)this + 116);
  v7 = *((_DWORD *)this + 16);
  v4 = (_DWORD *)(*((_DWORD *)this + 104) + 16 * a3);
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)g_pDisplay + 96))(g_pDisplay, *((_DWORD *)this + 103));
  (*(void (__fastcall **)(int, float, float, float, float, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
    g_pDisplay,
    (float)(v8 + a2 * v3),
    (float)v7,
    (float)v3,
    (float)v6,
    -1,
    *v4,
    v4[1],
    v4[2],
    v4[3],
    0,
    0);
  return (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 100))(g_pDisplay);
}


//======================================================================
// IconBar::SetBackgroundIcon(int)
// address: 0x001CA64C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall IconBar::SetBackgroundIcon(int this, int a2)
{
  *(_DWORD *)(this + 440) = a2;
  return this;
}


//======================================================================
// IconBar::SetCurValue(float,bool)
// address: 0x001CA654   size: 0xDA (218 bytes)
//======================================================================
__int64 __fastcall IconBar::SetCurValue(IconBar *this, float a2, int a3)
{
  int v4; // r5
  int v5; // r6
  int v6; // r3
  int v7; // r2
  int v8; // r0
  int v9; // r3
  float v10; // r0
  int v11; // r0
  int v12; // r3
  int *v13; // r1
  int v14; // r0
  int v15; // r3
  int v16; // r2
  __int64 v18; // [sp+0h] [bp-Ch]

  *((float *)this + 117) = a2;
  HIDWORD(v18) = a3;
  *(float *)&v18 = a2 * (float)*((int *)this + 116);
  v4 = 0;
  v5 = (int)*(float *)&v18;
  while ( 1 )
  {
    v6 = *((_DWORD *)this + 116);
    if ( v4 >= v6 )
      return v18;
    v7 = *((_DWORD *)this + 118);
    if ( v7 != 0 )
    {
      if ( v7 == 1 )
      {
        v9 = v6 - 1 - v4;
        if ( v9 < v5 )
        {
LABEL_12:
          v10 = 1.0;
          goto LABEL_14;
        }
        if ( v9 == v5 )
        {
          v8 = (int)*(float *)&v18;
LABEL_11:
          v10 = *(float *)&v18 - (float)v8;
          goto LABEL_14;
        }
      }
    }
    else
    {
      if ( v4 < v5 )
        goto LABEL_12;
      v8 = v4;
      if ( v4 == v5 )
        goto LABEL_11;
    }
    v10 = 0.0;
LABEL_14:
    v11 = (int)j_ceil((float)(v10 * 4.0));
    v12 = 8 * v4;
    if ( v11 > 0 )
    {
      if ( v11 > 4 )
        v11 = 4;
      *(_DWORD *)(*((_DWORD *)this + 107) + 8 * v4) = *((_DWORD *)this + v11 + 110);
      v15 = *((_DWORD *)this + 107) + v12;
      v16 = -1082130432;
      goto LABEL_22;
    }
    v13 = (int *)(*((_DWORD *)this + 107) + v12);
    if ( *v13 >= 0 )
    {
      v14 = *((_DWORD *)this + 115);
      if ( v14 >= 0 && HIDWORD(v18) == 0 )
      {
        *v13 = v14;
        v15 = *((_DWORD *)this + 107) + v12;
        v16 = 1050253722;
LABEL_22:
        *(_DWORD *)(v15 + 4) = v16;
        goto LABEL_23;
      }
    }
    *v13 = -1;
LABEL_23:
    ++v4;
  }
}


//======================================================================
// IconBar::CopyMembers(IconBar*)
// address: 0x001CA8A8   size: 0x6A (106 bytes)
//======================================================================
LayoutFrame *__fastcall IconBar::CopyMembers(LayoutFrame *this, IconBar *a2)
{
  LayoutFrame *v2; // r4

  v2 = this;
  if ( a2 != nullptr )
  {
    Frame::CopyMembers(this, a2);
    *((_DWORD *)a2 + 103) = UIObject::AssignHUIRes(v2, *((void **)v2 + 103));
    std::vector<IconBarIcon>::operator=((int)a2 + 416, (int)v2 + 416);
    *((_DWORD *)a2 + 110) = *((_DWORD *)v2 + 110);
    *(_OWORD *)((char *)a2 + 444) = *(_OWORD *)((char *)v2 + 444);
    *((_DWORD *)a2 + 116) = *((_DWORD *)v2 + 116);
    *((_DWORD *)a2 + 117) = *((_DWORD *)v2 + 117);
    *((_DWORD *)a2 + 118) = *((_DWORD *)v2 + 118);
    *((_DWORD *)a2 + 115) = *((_DWORD *)v2 + 115);
    return (LayoutFrame *)std::vector<IconRenderInfo>::operator=((int)a2 + 428, (int)v2 + 428);
  }
  return this;
}


//======================================================================
// IconBar::CreateClone(void)
// address: 0x001CA912   size: 0x1E (30 bytes)
//======================================================================
IconBar *__fastcall IconBar::CreateClone(IconBar *this)
{
  IconBar *v2; // r4

  v2 = (IconBar *)operator new(0x1E0u);
  IconBar::IconBar(v2);
  IconBar::CopyMembers(this, v2);
  return v2;
}


//======================================================================
// IconBar::setIconNumber(int)
// address: 0x001CAA74   size: 0x46 (70 bytes)
//======================================================================
__int64 __fastcall IconBar::setIconNumber(IconBar *this, unsigned int a2, int a3)
{
  char *v4; // r0
  int v5; // r5
  unsigned int v6; // r2
  __int64 v8; // [sp+0h] [bp-Ch] BYREF
  int v9; // [sp+8h] [bp-4h]

  v9 = a3;
  *((_DWORD *)this + 116) = a2;
  v8 = 0xFFFFFFFFLL;
  v4 = (char *)this + 428;
  v5 = *((_DWORD *)this + 107);
  v6 = (*((_DWORD *)v4 + 1) - v5) >> 3;
  if ( a2 <= v6 )
  {
    if ( a2 < v6 )
      *((_DWORD *)this + 108) = v5 + 8 * a2;
  }
  else
  {
    std::vector<IconRenderInfo>::_M_fill_insert((int)v4, *((char **)v4 + 1), a2 - v6, &v8);
  }
  return v8;
}


//======================================================================
// IconBar::AddIcon(int,int,int,int,int)
// address: 0x001CAC18   size: 0x72 (114 bytes)
//======================================================================
void __fastcall IconBar::AddIcon(IconBar *this, unsigned int a2, int a3, int a4, int a5, int a6)
{
  char *v6; // r2
  int v9; // r0
  char *v10; // r1
  int v11; // r12
  unsigned int v12; // r2
  unsigned int v13; // r3
  int v14; // r6
  _DWORD v17[5]; // [sp+8h] [bp-14h] BYREF

  v6 = (char *)this + 416;
  v9 = *((_DWORD *)this + 104);
  v10 = *((char **)v6 + 1);
  v11 = (int)v6;
  v12 = (int)&v10[-v9] >> 4;
  if ( v12 <= a2 )
  {
    v13 = a2 + 1;
    memset(v17, 0, 16);
    if ( a2 + 1 <= v12 )
    {
      if ( v13 < v12 )
        *((_DWORD *)this + 105) = v9 + 16 * v13;
    }
    else
    {
      std::vector<IconBarIcon>::_M_fill_insert(v11, v10, v13 - v12, v17);
    }
  }
  v14 = 16 * a2;
  *(_DWORD *)(*((_DWORD *)this + 104) + v14) = a3;
  *(_DWORD *)(*((_DWORD *)this + 104) + v14 + 4) = a4;
  *(_DWORD *)(*((_DWORD *)this + 104) + v14 + 8) = a5;
  *(_DWORD *)(*((_DWORD *)this + 104) + v14 + 12) = a6;
}


//======================================================================
// IconBar::Draw(void)
// address: 0x001CAC8A   size: 0x46 (70 bytes)
//======================================================================
int __fastcall IconBar::Draw(IconBar *this)
{
  int result; // r0
  unsigned int i; // r5
  int v4; // r2
  int v5; // r2

  result = Frame::Draw(this);
  for ( i = 0; i < (*((_DWORD *)this + 108) - *((_DWORD *)this + 107)) >> 3; ++i )
  {
    v4 = *((_DWORD *)this + 110);
    if ( v4 >= 0 )
      result = IconBar::drawIcon(this, i, v4);
    v5 = *(_DWORD *)(8 * i + *((_DWORD *)this + 107));
    if ( v5 >= 0 )
      result = IconBar::drawIcon(this, i, v5);
  }
  return result;
}


//======================================================================
// IconBar::UpdateSelf(float)
// address: 0x001CACD0   size: 0x6A (106 bytes)
//======================================================================
int __fastcall IconBar::UpdateSelf(double this)
{
  int result; // r0
  unsigned int i; // r5
  int v4; // r3
  int v5; // r3
  float v6; // r6
  int v7; // r6

  result = Frame::UpdateSelf(this);
  for ( i = 0; ; ++i )
  {
    v4 = *(_DWORD *)(LODWORD(this) + 428);
    if ( i >= (*(_DWORD *)(LODWORD(this) + 432) - v4) >> 3 )
      break;
    v5 = v4 + 8 * i;
    v6 = *(float *)(v5 + 4);
    result = v6 >= 0.0;
    if ( v6 >= 0.0 )
    {
      *(float *)(v5 + 4) = v6 - *((float *)&this + 1);
      v7 = *(_DWORD *)(LODWORD(this) + 428) + 8 * i;
      result = *(float *)(v7 + 4) <= 0.0;
      if ( *(float *)(v7 + 4) <= 0.0 )
        *(_DWORD *)v7 = -1;
    }
  }
  return result;
}

