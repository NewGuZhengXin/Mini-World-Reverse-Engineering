// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: LineFrame

//======================================================================
// LineFrame::GetTypeName(void)
// address: 0x001C6C00   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall LineFrame::GetTypeName(LineFrame *this)
{
  return "LineFrame";
}


//======================================================================
// LineFrame::~LineFrame()
// address: 0x001C6C0C   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN9LineFrameD1Ev'
void __fastcall LineFrame::~LineFrame(LineFrame *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_4593C0;
  v2 = *((void **)this + 104);
  if ( v2 != nullptr )
    operator delete(v2);
  Frame::~Frame(this);
}


//======================================================================
// LineFrame::~LineFrame()
// address: 0x001C6C38   size: 0x12 (18 bytes)
//======================================================================
void __fastcall LineFrame::~LineFrame(LineFrame *this)
{
  LineFrame::~LineFrame(this);
  operator delete(this);
}


//======================================================================
// LineFrame::LineFrame(void)
// address: 0x001C6C4C   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN9LineFrameC2Ev'
void __fastcall LineFrame::LineFrame(LineFrame *this)
{
  Frame::Frame(this);
  *(_DWORD *)this = &off_4593C0;
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 105) = 0;
  *((_DWORD *)this + 106) = 0;
  *((_DWORD *)this + 103) = 0;
}


//======================================================================
// LineFrame::CopyMembers(LineFrame*)
// address: 0x001C6C80   size: 0xC (12 bytes)
//======================================================================
LayoutFrame *__fastcall LineFrame::CopyMembers(LayoutFrame *this, LineFrame *a2)
{
  if ( a2 != nullptr )
    return Frame::CopyMembers(this, a2);
  return this;
}


//======================================================================
// LineFrame::CreateClone(void)
// address: 0x001C6C8C   size: 0x1E (30 bytes)
//======================================================================
LineFrame *__fastcall LineFrame::CreateClone(LineFrame *this)
{
  LineFrame *v2; // r4

  v2 = (LineFrame *)operator new(0x1B0u);
  LineFrame::LineFrame(v2);
  LineFrame::CopyMembers(this, v2);
  return v2;
}


//======================================================================
// LineFrame::clearLine(void)
// address: 0x001C6CAA   size: 0xE (14 bytes)
//======================================================================
int __fastcall LineFrame::clearLine(int this)
{
  *(_DWORD *)(this + 420) = *(_DWORD *)(this + 416);
  return this;
}


//======================================================================
// LineFrame::DrawLine(void)
// address: 0x001C6CB8   size: 0x22C (556 bytes)
//======================================================================
int __fastcall LineFrame::DrawLine(LineFrame *this)
{
  float v1; // r0
  int v2; // r2
  int *v3; // r3
  int v4; // r5
  int v5; // r4
  float v6; // r0
  int v7; // r6
  float v8; // r7
  float v9; // r0
  float v10; // r4
  float v11; // r5
  float v14; // [sp+10h] [bp-2Ch]
  float v15; // [sp+14h] [bp-28h]
  unsigned int v16; // [sp+18h] [bp-24h]
  float v17; // [sp+1Ch] [bp-20h]
  int v18; // [sp+20h] [bp-1Ch]
  float v19; // [sp+24h] [bp-18h]
  float v20; // [sp+28h] [bp-14h]
  int v21; // [sp+2Ch] [bp-10h]
  float v22; // [sp+30h] [bp-Ch]
  int v23; // [sp+34h] [bp-8h]

  (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 96))(g_pDisplay, 0, 0, 0, 0);
  v14 = *(float *)g_pFrameMgr * *(float *)(g_pFrameMgr + 16);
  v1 = *(float *)g_pFrameMgr * *(float *)(g_pFrameMgr + 20);
  *(_DWORD *)(g_pDisplay + 824) = 1082130432;
  v19 = v1;
  v17 = (float)*((int *)this + 15) / v14;
  v16 = 0;
  v20 = (float)*((int *)this + 16) / v1;
  while ( 1 )
  {
    v2 = *((_DWORD *)this + 104);
    if ( v16 >= -858993459 * ((*((_DWORD *)this + 105) - v2) >> 2) )
      break;
    v3 = (int *)(v2 + 20 * v16);
    v4 = *v3;
    v5 = v3[1];
    v21 = v3[3];
    v18 = v3[4];
    v23 = v3[2] - 1;
    if ( v5 == v21 )
    {
      v6 = (float)(*((_DWORD *)this + 103) * v5) + v20;
      (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)g_pDisplay + 116))(
        g_pDisplay,
        (float)((float)(*((_DWORD *)this + 103) * v4) + v17) * v14,
        (float)(v6 - (float)(*((_DWORD *)this + 103) / 2)) * v19,
        (float)((float)(*((_DWORD *)this + 103) * v23) + v17) * v14,
        (float)(v6 - (float)(*((_DWORD *)this + 103) / 2)) * v19,
        v18);
    }
    else
    {
      v7 = *((_DWORD *)this + 103);
      v22 = (float)(v7 * v4) + v17;
      v8 = (float)(v7 / 2);
      v9 = (float)((float)((float)(v7 * v5) + v20) - v8) * v19;
      v10 = v9;
      v15 = (float)(v22 + v8) * v14;
      (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)g_pDisplay + 116))(
        g_pDisplay,
        v22 * v14,
        LODWORD(v9),
        LODWORD(v15),
        LODWORD(v9),
        v18);
      v11 = (float)((float)((float)(*((_DWORD *)this + 103) * v21) + v20) - (float)(*((_DWORD *)this + 103) / 2)) * v19;
      (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)g_pDisplay + 116))(
        g_pDisplay,
        LODWORD(v15),
        LODWORD(v10),
        LODWORD(v15),
        LODWORD(v11),
        v18);
      (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)g_pDisplay + 116))(
        g_pDisplay,
        LODWORD(v15),
        LODWORD(v11),
        (float)((float)(*((_DWORD *)this + 103) * v23) + v17) * v14,
        LODWORD(v11),
        v18);
    }
    ++v16;
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 100))(g_pDisplay);
}


//======================================================================
// LineFrame::AddLine(int,int,int,int,int,int,int)
// address: 0x001C706C   size: 0x54 (84 bytes)
//======================================================================
void __fastcall LineFrame::AddLine(LineFrame *this, int a2, int a3, int a4, int a5, char a6, char a7, char a8)
{
  int *v8; // r0
  int v9; // r1
  int v10; // r5
  int v11; // r6
  int v12; // r4
  int v13; // [sp+4h] [bp-14h] BYREF
  int v14; // [sp+8h] [bp-10h]
  int v15; // [sp+Ch] [bp-Ch]
  int v16; // [sp+10h] [bp-8h]
  int v17; // [sp+14h] [bp-4h]

  v14 = a3;
  v13 = a2;
  v15 = a4;
  LOBYTE(v17) = a8;
  BYTE1(v17) = a7;
  v8 = (int *)((char *)this + 416);
  v16 = a5;
  BYTE2(v17) = a6;
  HIBYTE(v17) = -1;
  v9 = v8[1];
  if ( v9 == v8[2] )
  {
    std::vector<LineInfo>::_M_insert_aux(v8, (char *)v9, &v13);
  }
  else
  {
    if ( v9 != 0 )
    {
      v10 = v14;
      v11 = v15;
      *(_DWORD *)v9 = v13;
      *(_DWORD *)(v9 + 4) = v10;
      *(_DWORD *)(v9 + 8) = v11;
      v12 = v17;
      *(_DWORD *)(v9 + 12) = v16;
      *(_DWORD *)(v9 + 16) = v12;
    }
    v8[1] += 20;
  }
}


//======================================================================
// LineFrame::Draw(void)
// address: 0x001C70C0   size: 0x44 (68 bytes)
//======================================================================
int __fastcall LineFrame::Draw(LineFrame *this)
{
  char *v2; // r5
  int result; // r0

  v2 = (char *)this + 252;
  Frame::Draw(this);
  if ( (*((_DWORD *)v2 + 9) & 8) != 0 )
    (*(void (__fastcall **)(int, char *))(*(_DWORD *)g_pDisplay + 144))(g_pDisplay, (char *)this + 76);
  result = LineFrame::DrawLine(this);
  if ( (*((_DWORD *)v2 + 9) & 8) != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 152))(g_pDisplay);
  return result;
}

