// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: DrawLineFrame

//======================================================================
// DrawLineFrame::GetTypeName(void)
// address: 0x001B78B4   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall DrawLineFrame::GetTypeName(DrawLineFrame *this)
{
  return "DrawLineFrame";
}


//======================================================================
// DrawLineFrame::UpdateSelf(float)
// address: 0x001B78C0   size: 0x2 (2 bytes)
//======================================================================
void __fastcall DrawLineFrame::UpdateSelf(DrawLineFrame *this, float a2)
{
  ;
}


//======================================================================
// DrawLineFrame::~DrawLineFrame()
// address: 0x001B78C4   size: 0x76 (118 bytes)
//======================================================================
// Alternative name is '_ZN13DrawLineFrameD1Ev'
void __fastcall DrawLineFrame::~DrawLineFrame(DrawLineFrame *this)
{
  void **v2; // r5
  void **v3; // r6
  unsigned int v4; // r7
  void *v5; // r0
  _DWORD v6[4]; // [sp+0h] [bp-24h] BYREF
  _DWORD v7[5]; // [sp+10h] [bp-14h] BYREF

  *(_DWORD *)this = &off_458E98;
  *((_BYTE *)this + 230) = -1;
  *((_BYTE *)this + 229) = -1;
  *((_BYTE *)this + 228) = -1;
  *((_BYTE *)this + 231) = -1;
  v2 = (void **)((char *)this + 252);
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)g_pDisplay + 92))(g_pDisplay, *((_DWORD *)this + 58));
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(
    v7,
    (_DWORD *)this + 65);
  std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(
    v6,
    (_DWORD *)this + 69);
  if ( *v2 != nullptr )
  {
    v3 = *((void ***)this + 68);
    v4 = *((_DWORD *)this + 72) + 4;
    while ( (unsigned int)v3 < v4 )
    {
      v5 = *v3++;
      operator delete(v5);
    }
    operator delete(*v2);
  }
  LayoutFrame::~LayoutFrame(this);
}


//======================================================================
// DrawLineFrame::~DrawLineFrame()
// address: 0x001B7944   size: 0x12 (18 bytes)
//======================================================================
void __fastcall DrawLineFrame::~DrawLineFrame(DrawLineFrame *this)
{
  DrawLineFrame::~DrawLineFrame(this);
  operator delete(this);
}


//======================================================================
// DrawLineFrame::Draw(void)
// address: 0x001B7958   size: 0x126 (294 bytes)
//======================================================================
void __fastcall DrawLineFrame::Draw(Draw *this)
{
  int v2; // r6
  int v3; // [sp+20h] [bp-3Ch]
  int v4; // [sp+24h] [bp-38h]
  int v5; // [sp+2Ch] [bp-30h]
  int v6; // [sp+30h] [bp-2Ch]
  void (__fastcall *v7)(int, float, float, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+34h] [bp-28h]
  int v8[4]; // [sp+38h] [bp-24h] BYREF
  _DWORD v9[5]; // [sp+48h] [bp-14h] BYREF

  if ( *((_DWORD *)this + 69) != *((_DWORD *)this + 65) )
  {
    v5 = *((_DWORD *)this + 15);
    v6 = *((_DWORD *)this + 16);
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)g_pDisplay + 96))(g_pDisplay, *((_DWORD *)this + 58));
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(
      v8,
      (_DWORD *)this + 65);
    std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::_Deque_iterator(
      v9,
      (_DWORD *)this + 69);
    while ( v8[0] != v9[0] )
    {
      v4 = g_pDisplay;
      v7 = *(void (__fastcall **)(int, float, float, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112);
      v3 = FloatToInt((float)*(int *)v8[0] * (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr));
      v2 = FloatToInt((float)*(int *)(v8[0] + 4) * (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr));
      ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v7)(
        v4,
        (float)(v3 + v5 - 6),
        (float)(v2 + v6 - 6),
        (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr) * 12.0,
        (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr) * 12.0,
        *((_DWORD *)this + 57),
        *((_DWORD *)this + 59),
        *((_DWORD *)this + 60),
        *((_DWORD *)this + 61),
        *((_DWORD *)this + 62),
        0,
        0);
      std::_Deque_iterator<Ogre::TVector2<int>,Ogre::TVector2<int>&,Ogre::TVector2<int>*>::operator++(v8);
    }
    (*(void (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 100))(g_pDisplay);
  }
}


//======================================================================
// DrawLineFrame::CopyMembers(DrawLineFrame*)
// address: 0x001B7BAC   size: 0x6C (108 bytes)
//======================================================================
LayoutFrame *__fastcall DrawLineFrame::CopyMembers(LayoutFrame *this, DrawLineFrame *a2)
{
  LayoutFrame *v2; // r5

  v2 = this;
  if ( a2 != nullptr )
  {
    LayoutFrame::CopyMembers(this, a2);
    *((_DWORD *)a2 + 57) = *((_DWORD *)v2 + 57);
    std::deque<Ogre::TVector2<int>>::operator=((int)a2 + 252, (int)v2 + 252);
    *((_DWORD *)a2 + 58) = *((_DWORD *)v2 + 58);
    this = (LayoutFrame *)(*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 88))(g_pDisplay);
    *((_DWORD *)a2 + 59) = *((_DWORD *)v2 + 59);
    *((_DWORD *)a2 + 60) = *((_DWORD *)v2 + 60);
    *((_DWORD *)a2 + 61) = *((_DWORD *)v2 + 61);
    *((_DWORD *)a2 + 62) = *((_DWORD *)v2 + 62);
  }
  return this;
}


//======================================================================
// DrawLineFrame::CreateClone(void)
// address: 0x001B7C1C   size: 0xF0 (240 bytes)
//======================================================================
int __fastcall DrawLineFrame::CreateClone(DrawLineFrame *this)
{
  int v1; // r4
  int v2; // r0
  int v3; // r6
  _DWORD *v4; // r6
  _DWORD *v5; // r2
  _DWORD *v6; // r3
  int v7; // r1
  _DWORD *v8; // r3
  int v9; // r1
  _DWORD *v10; // r3
  _DWORD *v11; // r1

  v1 = operator new(0x128u);
  LayoutFrame::LayoutFrame((LayoutFrame *)v1);
  *(_DWORD *)v1 = &off_458E98;
  *(_BYTE *)(v1 + 228) = -1;
  *(_BYTE *)(v1 + 229) = -1;
  *(_BYTE *)(v1 + 230) = -1;
  *(_BYTE *)(v1 + 231) = -1;
  *(_DWORD *)(v1 + 232) = 0;
  *(_DWORD *)(v1 + 252) = 0;
  *(_DWORD *)(v1 + 260) = 0;
  *(_DWORD *)(v1 + 264) = 0;
  *(_DWORD *)(v1 + 268) = 0;
  *(_DWORD *)(v1 + 272) = 0;
  *(_DWORD *)(v1 + 276) = 0;
  *(_DWORD *)(v1 + 280) = 0;
  *(_DWORD *)(v1 + 284) = 0;
  *(_DWORD *)(v1 + 288) = 0;
  *(_DWORD *)(v1 + 256) = 8;
  v2 = operator new(0x20u);
  v3 = *(_DWORD *)(v1 + 256);
  *(_DWORD *)(v1 + 252) = v2;
  v4 = (_DWORD *)(v2 + 4 * ((unsigned int)(v3 - 1) >> 1));
  *v4 = operator new(0x200u);
  *(_DWORD *)(v1 + 272) = v4;
  v5 = (_DWORD *)*v4;
  *(_DWORD *)(v1 + 268) = *v4 + 512;
  *(_DWORD *)(v1 + 264) = v5;
  *(_DWORD *)(v1 + 288) = v4;
  v6 = (_DWORD *)*v4;
  v7 = *v4 + 512;
  *(_DWORD *)(v1 + 280) = *v4;
  *(_DWORD *)(v1 + 284) = v7;
  *(_DWORD *)(v1 + 260) = v5;
  *(_DWORD *)(v1 + 276) = v6;
  while ( (unsigned int)v4 < *(_DWORD *)(v1 + 288) )
  {
    v8 = (_DWORD *)*v4;
    v9 = *v4 + 512;
    while ( v8 != (_DWORD *)v9 )
    {
      if ( v8 != nullptr )
      {
        *v8 = 0;
        v8[1] = 0;
      }
      v8 += 2;
    }
    ++v4;
  }
  v10 = *(_DWORD **)(v1 + 280);
  v11 = *(_DWORD **)(v1 + 276);
  while ( v10 != v11 )
  {
    if ( v10 != nullptr )
    {
      *v10 = 0;
      v10[1] = 0;
    }
    v10 += 2;
  }
  *(_DWORD *)(v1 + 236) = 0;
  *(_DWORD *)(v1 + 240) = 0;
  *(_DWORD *)(v1 + 244) = 0;
  *(_DWORD *)(v1 + 248) = 0;
  DrawLineFrame::CopyMembers(this, (DrawLineFrame *)v1);
  return v1;
}


//======================================================================
// DrawLineFrame::AddPoint(int,int)
// address: 0x001B7D10   size: 0x60 (96 bytes)
//======================================================================
unsigned __int64 __fastcall DrawLineFrame::AddPoint(DrawLineFrame *this, int a2, unsigned int a3)
{
  char *v3; // r4
  _DWORD *v4; // r3
  int v7; // r3
  int v8; // r7
  _DWORD *v9; // r3
  _DWORD *v10; // r5
  int *v11; // r2
  int v12; // r2
  unsigned __int64 v14; // [sp+0h] [bp-Ch]

  v14 = __PAIR64__(a3, (unsigned int)this);
  v3 = (char *)this + 252;
  v4 = *((_DWORD **)this + 69);
  if ( v4 == (_DWORD *)(*((_DWORD *)this + 71) - 8) )
  {
    std::deque<Ogre::TVector2<int>>::_M_reserve_map_at_back((_DWORD *)this + 63, 1u);
    v8 = *((_DWORD *)v3 + 9);
    *(_DWORD *)(v8 + 4) = operator new(0x200u);
    v9 = *((_DWORD **)v3 + 6);
    if ( v9 != nullptr )
    {
      *v9 = a2;
      v9[1] = HIDWORD(v14);
    }
    v10 = (_DWORD *)((char *)this + 276);
    v11 = (int *)(*((_DWORD *)v3 + 9) + 4);
    v10[3] = v11;
    v7 = *v11;
    v12 = *v11 + 512;
    v10[1] = v7;
    v10[2] = v12;
  }
  else
  {
    if ( v4 != nullptr )
    {
      *v4 = a2;
      v4[1] = a3;
    }
    v7 = *((_DWORD *)this + 69) + 8;
  }
  *((_DWORD *)v3 + 6) = v7;
  return v14;
}

