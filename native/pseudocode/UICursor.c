// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: UICursor

//======================================================================
// UICursor::UICursor(void)
// address: 0x001B9A94   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN8UICursorC2Ev'
void __fastcall UICursor::UICursor(UICursor *this)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  Ogre::Singleton<UICursor>::ms_Singleton = (int)this;
  *(_DWORD *)this = 0;
  LayoutAnchor::LayoutAnchor((UICursor *)((char *)this + 16));
  *((_BYTE *)this + 40) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = -1;
}


//======================================================================
// UICursor::~UICursor()
// address: 0x001B9ACC   size: 0x50 (80 bytes)
//======================================================================
// Alternative name is '_ZN8UICursorD2Ev'
void __fastcall UICursor::~UICursor(UICursor *this)
{
  unsigned int i; // r5
  int v3; // r1

  for ( i = 0; i < -1431655765 * ((*((_DWORD *)this + 1) - *(_DWORD *)this) >> 5); ++i )
  {
    v3 = *(_DWORD *)(*(_DWORD *)this + 96 * i + 64);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)g_pDisplay + 92))(g_pDisplay, v3);
  }
  LayoutAnchor::~LayoutAnchor((UICursor *)((char *)this + 16));
  if ( *(_DWORD *)this != 0 )
    operator delete(*(void **)this);
  Ogre::Singleton<UICursor>::ms_Singleton = 0;
}


//======================================================================
// UICursor::getCursor(void)
// address: 0x001B9B28   size: 0x22 (34 bytes)
//======================================================================
void *__fastcall UICursor::getCursor(UICursor *this)
{
  unsigned int v1; // r2

  v1 = *((_DWORD *)this + 14);
  if ( v1 >= -1431655765 * ((*((_DWORD *)this + 1) - *(_DWORD *)this) >> 5) )
    return &unk_3FB8EA;
  else
    return (void *)(*(_DWORD *)this + 96 * v1);
}


//======================================================================
// UICursor::updateCursor(void)
// address: 0x001B9B54   size: 0x82 (130 bytes)
//======================================================================
int __fastcall UICursor::updateCursor(UICursor *this)
{
  int v2; // r3
  unsigned int v3; // r2
  int v4; // r1
  int result; // r0
  _DWORD *v6; // r4
  int v7; // [sp+14h] [bp-18h]
  int v8; // [sp+1Ch] [bp-10h]

  v2 = *(_DWORD *)this;
  v3 = *((_DWORD *)this + 14);
  v4 = *((_DWORD *)this + 1) - *(_DWORD *)this;
  result = -1431655765;
  if ( v3 < -1431655765 * (v4 >> 5) )
  {
    v6 = (_DWORD *)(v2 + 96 * v3);
    v7 = v6[18] / v6[21];
    v8 = v6[19] / v6[20];
    return (*(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD, int, int, int, int))(*(_DWORD *)g_pDisplay + 156))(
             g_pDisplay,
             v6[16],
             v6[22],
             v6[23],
             *((_DWORD *)this + 16) % v6[21] * v7,
             *((_DWORD *)this + 16) / v6[21] * v8,
             v7,
             v8);
  }
  return result;
}


//======================================================================
// UICursor::setCursor(char const*)
// address: 0x001B9BE0   size: 0x4E (78 bytes)
//======================================================================
__int64 __fastcall UICursor::setCursor(__int64 this)
{
  int v1; // r5
  int v3; // r6
  int v4; // r3
  __int64 v6; // [sp+0h] [bp-Ch]

  v6 = this;
  v1 = *(unsigned __int8 *)(this + 40);
  if ( *(_BYTE *)(this + 40) == 0 )
  {
    v3 = *(_DWORD *)this;
    v4 = *(_DWORD *)(this + 4);
    if ( *(_DWORD *)this != v4 )
    {
      HIDWORD(v6) = -1431655765 * ((v4 - v3) >> 5);
      while ( v1 != HIDWORD(v6) )
      {
        if ( j_strcmp((const char *)(v3 + 96 * v1), (const char *)HIDWORD(this)) == 0 )
        {
          *(_DWORD *)(this + 60) = 0;
          *(_DWORD *)(this + 64) = 0;
          *(_DWORD *)(this + 56) = v1;
          UICursor::updateCursor((UICursor *)this);
          return v6;
        }
        ++v1;
      }
    }
  }
  return v6;
}


//======================================================================
// UICursor::update(float)
// address: 0x001B9C34   size: 0x74 (116 bytes)
//======================================================================
UICursor *__fastcall UICursor::update(UICursor *this, float a2)
{
  int v2; // r3
  unsigned int v4; // r2
  signed int v5; // r0
  int v6; // r1
  int v7; // r0
  UICursor *v9; // [sp+0h] [bp-Ch]

  v9 = this;
  v2 = *(_DWORD *)this;
  v4 = *((_DWORD *)this + 14);
  if ( v4 < -1431655765 * ((*((_DWORD *)this + 1) - *(_DWORD *)this) >> 5) )
  {
    v5 = (unsigned int)(float)(a2 * 1000.0) + *((_DWORD *)this + 15);
    *((_DWORD *)this + 15) = v5;
    v6 = v5 / *(_DWORD *)(v2 + 96 * v4 + 68) % (*(_DWORD *)(v2 + 96 * v4 + 84) * *(_DWORD *)(v2 + 96 * v4 + 80));
    if ( v6 != *((_DWORD *)this + 16) )
    {
      *((_DWORD *)this + 16) = v6;
      UICursor::updateCursor(this);
    }
    v7 = *((_DWORD *)this + 3);
    if ( v7 != 0 )
      LayoutFrame::SetPoint(
        v7,
        0,
        nullptr,
        0,
        UICursor::m_Pos + *((_DWORD *)this + 11),
        dword_50FA38 + *((_DWORD *)this + 12));
  }
  return v9;
}


//======================================================================
// UICursor::IsShown(void)
// address: 0x001B9CB4   size: 0xA (10 bytes)
//======================================================================
int __fastcall UICursor::IsShown(UICursor *this)
{
  return (unsigned __int8)UICursor::m_bShow;
}


//======================================================================
// UICursor::EndDrag(char const*)
// address: 0x001B9CC4   size: 0x7C (124 bytes)
//======================================================================
int __fastcall UICursor::EndDrag(int this, const char *a2)
{
  _BYTE *v2; // r6
  int v3; // r4
  float v5; // r7
  float v6; // r0
  const char *Name; // r0
  int v8; // [sp+8h] [bp-14h]
  int v9; // [sp+Ch] [bp-10h]
  int v10; // [sp+10h] [bp-Ch]
  char *v11; // [sp+14h] [bp-8h]

  v2 = (_BYTE *)(this + 40);
  v3 = this;
  if ( *(_BYTE *)(this + 40) != 0 )
  {
    if ( a2 == nullptr
      || (Name = (const char *)UIObject::GetName(*(UIObject **)(this + 12)), (this = j_strcmp(a2, Name)) == 0) )
    {
      *v2 = 0;
      LayoutFrame::Hide(*(LayoutFrame **)(v3 + 12));
      v8 = *(_DWORD *)(v3 + 12);
      v9 = *(_DWORD *)(v3 + 16);
      v11 = *(char **)(v3 + 24);
      v10 = *(_DWORD *)(v3 + 20);
      v5 = COERCE_FLOAT(LayoutDim::GetX((LayoutDim *)(v3 + 28)));
      v6 = COERCE_FLOAT(LayoutDim::GetY((LayoutDim *)(v3 + 28)));
      this = LayoutFrame::SetPoint(v8, v9, v11, v10, (int)v5, (int)v6);
      *(_DWORD *)(v3 + 12) = 0;
      *(_DWORD *)(v3 + 52) = 0;
    }
  }
  return this;
}


//======================================================================
// UICursor::BeginDrag(char const*,int,int,int)
// address: 0x001B9D40   size: 0xAE (174 bytes)
//======================================================================
int __fastcall UICursor::BeginDrag(UICursor *this, char *a2, int a3, int a4, int a5)
{
  int result; // r0
  int LayoutFrame; // r7
  int v10; // r3
  int v11; // r7
  int v12; // r0
  int v13; // [sp+0h] [bp-1Ch]
  int v14; // [sp+4h] [bp-18h]
  int v15; // [sp+8h] [bp-14h]
  _BYTE v17[8]; // [sp+14h] [bp-8h] BYREF

  result = a5;
  if ( a5 >= *((_DWORD *)this + 13) )
  {
    UICursor::EndDrag((int)this, nullptr);
    v15 = g_pFrameMgr;
    sub_3BF0BC((int)v17, a2);
    LayoutFrame = FrameManager::FindLayoutFrame(v15);
    result = sub_3BDF80(v17);
    if ( LayoutFrame != 0 )
    {
      *((_BYTE *)this + 40) = 1;
      *((_DWORD *)this + 3) = LayoutFrame;
      *((_DWORD *)this + 11) = a3;
      *((_DWORD *)this + 13) = a5;
      *((_DWORD *)this + 12) = a4;
      *((_DWORD *)this + 4) = *(_DWORD *)(LayoutFrame + 124);
      v10 = *(_DWORD *)(LayoutFrame + 128);
      v11 = LayoutFrame + 136;
      *((_DWORD *)this + 5) = v10;
      sub_3BEBBC((char *)this + 24);
      *((_BYTE *)this + 28) = *(_BYTE *)v11;
      *((_BYTE *)this + 29) = *(_BYTE *)(v11 + 1);
      *((_DWORD *)this + 8) = *(_DWORD *)(v11 + 4);
      v13 = UICursor::m_Pos + *((_DWORD *)this + 11);
      v12 = *((_DWORD *)this + 3);
      v14 = dword_50FA38 + *((_DWORD *)this + 12);
      *((_DWORD *)this + 9) = *(_DWORD *)(v11 + 8);
      LayoutFrame::SetPoint(v12, 0, nullptr, 0, v13, v14);
      return LayoutFrame::Show(*((LayoutFrame **)this + 3));
    }
  }
  return result;
}


//======================================================================
// UICursor::IsInDragState(void)
// address: 0x001B9DF8   size: 0x6 (6 bytes)
//======================================================================
int __fastcall UICursor::IsInDragState(UICursor *this)
{
  return *((unsigned __int8 *)this + 40);
}


//======================================================================
// UICursor::addCursor(char const*,char const*,int,int,int,int,int)
// address: 0x001B9F34   size: 0x8A (138 bytes)
//======================================================================
void __fastcall UICursor::addCursor(
        UICursor *this,
        const char *a2,
        const char *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v10; // r0
  void *v11; // r1
  char v13[96]; // [sp+14h] [bp-68h] BYREF

  j_strncpy(v13, a3, 0x40u);
  v10 = (*(int (__fastcall **)(int, const char *, int, char *, char *, _DWORD))(*(_DWORD *)g_pDisplay + 72))(
          g_pDisplay,
          a2,
          2,
          &v13[72],
          &v13[76],
          0);
  v11 = *((void **)this + 1);
  *(_DWORD *)&v13[64] = v10;
  *(_DWORD *)&v13[68] = a4;
  *(_DWORD *)&v13[80] = a5;
  *(_DWORD *)&v13[84] = a6;
  *(_DWORD *)&v13[88] = a7;
  *(_DWORD *)&v13[92] = a8;
  if ( v11 == *((void **)this + 2) )
  {
    std::vector<UICursor::CursorDesc>::_M_insert_aux((int)this, v11, v13);
  }
  else
  {
    if ( v11 != nullptr )
      j_memcpy(v11, v13, 0x60u);
    *((_DWORD *)this + 1) += 96;
  }
}

