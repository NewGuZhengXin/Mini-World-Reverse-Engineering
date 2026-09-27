// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Button

//======================================================================
// Button::GetTypeName(void)
// address: 0x001CCD8C   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall Button::GetTypeName(Button *this)
{
  return "Button";
}


//======================================================================
// Button::Init(void)
// address: 0x001CCD98   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Button::Init(Button *this)
{
  ;
}


//======================================================================
// Button::OnBeginDrag(unsigned int,int,int)
// address: 0x001CCDD6   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Button::OnBeginDrag(Button *this, unsigned int a2, int a3, int a4)
{
  ;
}


//======================================================================
// Button::~Button()
// address: 0x001CCDD8   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN6ButtonD1Ev'
void __fastcall Button::~Button(Button *this)
{
  *(_DWORD *)this = &off_459630;
  sub_3BDF80((char *)this + 512);
  sub_3BDF80((char *)this + 436);
  Frame::~Frame(this);
}


//======================================================================
// Button::~Button()
// address: 0x001CCE08   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Button::~Button(Button *this)
{
  Button::~Button(this);
  operator delete(this);
}


//======================================================================
// Button::Button(void)
// address: 0x001CCE50   size: 0xAE (174 bytes)
//======================================================================
// Alternative name is '_ZN6ButtonC2Ev'
void __fastcall Button::Button(Button *this)
{
  int v2; // r6
  int v3; // r7

  Frame::Frame(this);
  *(_DWORD *)this = &off_459630;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 109) = &byte_55FB88;
  *((_DWORD *)this + 110) = 0;
  *((_BYTE *)this + 473) = 0;
  *((_DWORD *)this + 128) = &byte_55FB88;
  *((_DWORD *)this + 76) = 3;
  *((_BYTE *)this + 460) = 0;
  *((_BYTE *)this + 472) = 0;
  *((_DWORD *)this + 116) = 0;
  *((_DWORD *)this + 117) = 0;
  *((_BYTE *)this + 496) = 0;
  *((_DWORD *)this + 126) = 0;
  *((_DWORD *)this + 125) = 0;
  v2 = *((_DWORD *)this + 16);
  v3 = *((_DWORD *)this + 17);
  *((_DWORD *)this + 111) = *((_DWORD *)this + 15);
  *((_DWORD *)this + 112) = v2;
  *((_DWORD *)this + 113) = v3;
  *((_DWORD *)this + 114) = *((_DWORD *)this + 18);
  *((_DWORD *)this + 73) = 128;
  *((_DWORD *)this + 119) = 0;
  *((_DWORD *)this + 120) = 0;
  *((_DWORD *)this + 122) = 0;
  *((_DWORD *)this + 121) = 0;
  j_memset((char *)this + 412, 0, 0x14u);
}


//======================================================================
// Button::CopyMembers(Button*)
// address: 0x001CCF08   size: 0xB0 (176 bytes)
//======================================================================
LayoutFrame *__fastcall Button::CopyMembers(LayoutFrame *this, Button *a2)
{
  int v2; // r5
  int i; // r6
  int DrawRegionIndex; // r0
  char *v6; // r3
  int v7; // r2
  _DWORD *v8; // r3
  int v9; // r0

  v2 = (int)this;
  if ( a2 != nullptr )
  {
    Frame::CopyMembers(this, a2);
    for ( i = 0; i != 20; i += 4 )
    {
      DrawRegionIndex = Frame::findDrawRegionIndex(v2, *(_DWORD *)(v2 + i + 412));
      v6 = (char *)a2 + i;
      if ( DrawRegionIndex < 0 )
      {
        v8 = v6 + 412;
        v7 = 0;
      }
      else
      {
        v7 = *(_DWORD *)(8 * DrawRegionIndex + *((_DWORD *)a2 + 57));
        v8 = v6 + 412;
      }
      *v8 = v7;
    }
    v9 = Frame::findDrawRegionIndex(v2, *(_DWORD *)(v2 + 440));
    if ( v9 < 0 )
      *((_DWORD *)a2 + 110) = 0;
    else
      *((_DWORD *)a2 + 110) = *(_DWORD *)(8 * v9 + *((_DWORD *)a2 + 57));
    *((_BYTE *)a2 + 460) = *(_BYTE *)(v2 + 460);
    *((_DWORD *)a2 + 116) = *(_DWORD *)(v2 + 464);
    *((_DWORD *)a2 + 117) = *(_DWORD *)(v2 + 468);
    *((_BYTE *)a2 + 496) = *(_BYTE *)(v2 + 496);
    *((_DWORD *)a2 + 125) = *(_DWORD *)(v2 + 500);
    *((_DWORD *)a2 + 126) = *(_DWORD *)(v2 + 504);
    this = (LayoutFrame *)sub_3BEBBC((char *)a2 + 512);
    *((_DWORD *)a2 + 119) = *(_DWORD *)(v2 + 476);
    *((_DWORD *)a2 + 120) = *(_DWORD *)(v2 + 480);
  }
  return this;
}


//======================================================================
// Button::CreateClone(void)
// address: 0x001CCFB8   size: 0x1E (30 bytes)
//======================================================================
Button *__fastcall Button::CreateClone(Button *this)
{
  Button *v2; // r4

  v2 = (Button *)operator new(0x208u);
  Button::Button(v2);
  Button::CopyMembers(this, v2);
  return v2;
}


//======================================================================
// Button::ReplaceStateRegion(int,Texture *)
// address: 0x001CCFD6   size: 0x4E (78 bytes)
//======================================================================
_DWORD *__fastcall Button::ReplaceStateRegion(__int64 this, Texture *a2)
{
  int v2; // r6
  int v3; // r5
  int DrawRegionIndex; // r7
  _DWORD *result; // r0
  int v7; // r3

  v2 = this + 4 * HIDWORD(this);
  HIDWORD(this) = *(_DWORD *)(v2 + 412);
  v3 = this;
  if ( HIDWORD(this) != 0 )
  {
    DrawRegionIndex = Frame::findDrawRegionIndex(this, SHIDWORD(this));
    result = *(_DWORD **)(v2 + 412);
    v7 = result[10] - 1;
    result[10] = v7;
    if ( v7 == 0 )
      result = (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*result + 12))(result);
    ++*((_DWORD *)a2 + 10);
    *(_DWORD *)(8 * DrawRegionIndex + *(_DWORD *)(v3 + 228)) = a2;
  }
  else
  {
    HIDWORD(this) = 2;
    result = (_DWORD *)Frame::AddTexture(this, a2);
  }
  *(_DWORD *)(v2 + 412) = a2;
  return result;
}


//======================================================================
// Button::GetStateRegion(int)
// address: 0x001CD024   size: 0xA (10 bytes)
//======================================================================
int __fastcall Button::GetStateRegion(Button *this, int a2)
{
  return *((_DWORD *)this + a2 + 103);
}


//======================================================================
// Button::SetText(char const*)
// address: 0x001CD02E   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Button::SetText(Button *this, char *a2)
{
  int result; // r0

  result = *((_DWORD *)this + 110);
  if ( result != 0 && a2 != nullptr )
    return FontString::SetText(result, a2);
  return result;
}


//======================================================================
// Button::GetText(void)
// address: 0x001CD044   size: 0x18 (24 bytes)
//======================================================================
void *__fastcall Button::GetText(Button *this)
{
  FontString *v1; // r0

  v1 = *((FontString **)this + 110);
  if ( v1 != nullptr )
    return (void *)FontString::GetText(v1);
  else
    return &unk_3FB8EA;
}


//======================================================================
// Button::SetTextColor(int,int,int)
// address: 0x001CD060   size: 0x12 (18 bytes)
//======================================================================
FontString *__fastcall Button::SetTextColor(Button *this, char a2, char a3, char a4)
{
  FontString *result; // r0

  result = *((FontString **)this + 110);
  if ( result != nullptr )
    return (FontString *)FontString::SetTextColor(result, a2, a3, a4);
  return result;
}


//======================================================================
// Button::IsCooldown(void)
// address: 0x001CD072   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Button::IsCooldown(Button *this)
{
  return *((unsigned __int8 *)this + 460);
}


//======================================================================
// Button::SetCooldownTimer(float,float,bool,bool)
// address: 0x001CD07A   size: 0x3E (62 bytes)
//======================================================================
const char *__fastcall Button::SetCooldownTimer(const char *this, float a2, float a3, int a4, bool a5)
{
  *((_BYTE *)this + 460) = a4;
  if ( a4 != 0 )
  {
    *((float *)this + 116) = a2;
    *((float *)this + 117) = a3;
    *((_BYTE *)this + 472) = a5;
    if ( *((_DWORD *)this + 108) != 0 && *(this + 473) != 0 )
      return LayoutFrame::Show(*((LayoutFrame **)this + 108));
  }
  return this;
}


//======================================================================
// Button::SetIntonateTimer(float,float)
// address: 0x001CD0B8   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Button::SetIntonateTimer(int this, float a2, float a3)
{
  *(_BYTE *)(this + 496) = 1;
  *(float *)(this + 500) = a2;
  *(float *)(this + 504) = a3;
  return this;
}


//======================================================================
// Button::OnMouseDown(int,int,int,int,int)
// address: 0x001CD0D0   size: 0x80 (128 bytes)
//======================================================================
int __fastcall Button::OnMouseDown(Button *this, int a2, char a3, int a4, int a5, int a6)
{
  char *v6; // r6
  int v8; // r5
  _BYTE v12[8]; // [sp+1Ch] [bp-10h] BYREF

  v6 = (char *)this + 252;
  v8 = *((_DWORD *)this + 73) & 8;
  if ( v8 != 0 )
    return 1;
  sub_1CCD9A(v12, a3);
  *((_DWORD *)v6 + 10) |= 2u;
  *((_DWORD *)this + 121) = a4;
  *((_DWORD *)this + 122) = a5;
  *((_DWORD *)this + 123) = 0;
  if ( !UIObject::hasScriptsEvent(this, 28) )
    return 1;
  UIObject::CallScript(this, 28, "is", a2, v12);
  return v8;
}


//======================================================================
// Button::SwapCooldownMembers(Button*)
// address: 0x001CD158   size: 0x86 (134 bytes)
//======================================================================
int __fastcall Button::SwapCooldownMembers(int this, Button *a2)
{
  char v2; // r2
  int v3; // r2
  int v4; // r2
  int v5; // r2
  _DWORD *v6; // r1
  int v7; // r4
  int v8; // r7
  int v9; // [sp+4h] [bp-10h]
  int v10; // [sp+8h] [bp-Ch]
  int v11; // [sp+Ch] [bp-8h]

  if ( a2 != nullptr )
  {
    v2 = *((_BYTE *)a2 + 460);
    *((_BYTE *)a2 + 460) = *(_BYTE *)(this + 460);
    *(_BYTE *)(this + 460) = v2;
    v3 = *((_DWORD *)a2 + 116);
    *((_DWORD *)a2 + 116) = *(_DWORD *)(this + 464);
    *(_DWORD *)(this + 464) = v3;
    v4 = *((_DWORD *)a2 + 117);
    *((_DWORD *)a2 + 117) = *(_DWORD *)(this + 468);
    *(_DWORD *)(this + 468) = v4;
    LOBYTE(v4) = *((_BYTE *)a2 + 473);
    *((_BYTE *)a2 + 473) = *(_BYTE *)(this + 473);
    *(_BYTE *)(this + 473) = v4;
    v5 = *((_DWORD *)a2 + 111);
    v9 = *((_DWORD *)a2 + 112);
    v10 = *((_DWORD *)a2 + 113);
    v11 = *((_DWORD *)a2 + 114);
    v6 = (_DWORD *)((char *)a2 + 444);
    v7 = *(_DWORD *)(this + 448);
    v8 = *(_DWORD *)(this + 452);
    *v6 = *(_DWORD *)(this + 444);
    v6[1] = v7;
    v6[2] = v8;
    v6[3] = *(_DWORD *)(this + 456);
    *(_DWORD *)(this + 444) = v5;
    *(_DWORD *)(this + 448) = v9;
    *(_DWORD *)(this + 452) = v10;
    *(_DWORD *)(this + 456) = v11;
  }
  return this;
}


//======================================================================
// Button::CopyCooldownMembers(Button*)
// address: 0x001CD1DE   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall Button::CopyCooldownMembers(_DWORD *this, Button *a2)
{
  char v2; // r2
  _DWORD *v3; // r1
  _DWORD *v4; // r0
  int v5; // r3
  int v6; // r4

  if ( a2 != nullptr )
  {
    *((_BYTE *)this + 460) = *((_BYTE *)a2 + 460);
    *(this + 116) = *((_DWORD *)a2 + 116);
    *(this + 117) = *((_DWORD *)a2 + 117);
    v2 = *((_BYTE *)a2 + 473);
    v3 = (_DWORD *)((char *)a2 + 444);
    *((_BYTE *)this + 473) = v2;
    v4 = this + 111;
    v5 = v3[1];
    v6 = v3[2];
    *v4 = *v3;
    v4[1] = v5;
    v4[2] = v6;
    this = v4 + 3;
    *this = v3[3];
  }
  return this;
}


//======================================================================
// Button::SetCooldownTextureRect(int,int,int,int)
// address: 0x001CD216   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall Button::SetCooldownTextureRect(Button *this, int a2, int a3, int a4, int a5)
{
  _DWORD *result; // r0

  *((_DWORD *)this + 111) = a2;
  result = (_DWORD *)((char *)this + 444);
  result[2] = a4;
  result[1] = a3;
  result[3] = a5;
  return result;
}


//======================================================================
// Button::ShowStateRegion(int)
// address: 0x001CD22C   size: 0x46 (70 bytes)
//======================================================================
bool *__fastcall Button::ShowStateRegion(Button *this, int a2)
{
  int i; // r5
  LayoutFrame *v5; // r0
  bool *result; // r0

  for ( i = 0; i != 20; i += 4 )
  {
    v5 = *(LayoutFrame **)((char *)this + i + 412);
    if ( v5 != nullptr )
      LayoutFrame::DrawShow(v5, 0);
  }
  result = *((bool **)this + (*((_DWORD *)this + a2 + 103) != 0 ? a2 + 102 : 102) + 1);
  if ( result != nullptr )
    return LayoutFrame::DrawShow((LayoutFrame *)result, 1);
  return result;
}


//======================================================================
// Button::DrawCooldownBaseTriangle(Ogre::Vector2 *,int,float,float)
// address: 0x001CD274   size: 0x7CC (1996 bytes)
//======================================================================
float __fastcall Button::DrawCooldownBaseTriangle(float this, Ogre::Vector2 *a2, int a3, float a4, float a5)
{
  int *v5; // r4
  int v6; // r0
  int v7; // r6
  float v8; // r7
  float *v9; // r5
  float v10; // r6
  float v11; // r0
  float v12; // r1

  v5 = (int *)LODWORD(this);
  if ( a2 != nullptr )
  {
    v6 = *(_DWORD *)(LODWORD(this) + 452);
    if ( v6 != 0 && (v7 = v5[114]) != 0 )
    {
      a4 = (float)v6;
      a5 = (float)v7;
      v8 = *(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr;
    }
    else
    {
      v8 = 1.0;
    }
    LODWORD(this) = a3 - 2;
    switch ( a3 )
    {
      case 2:
        *((float *)a2 + 36) = (float)v5[15] + (float)((float)((float)v5[111] + a4) * v8);
        *((float *)a2 + 37) = (float)v5[16] + (float)((float)v5[112] * v8);
        *((float *)a2 + 38) = (float)v5[15] + (float)((float)((float)v5[111] + (float)(a4 * 0.5)) * v8);
        *((float *)a2 + 39) = (float)v5[16] + (float)((float)((float)v5[112] + (float)(a5 * 0.5)) * v8);
        v9 = (float *)((char *)a2 + 160);
        *((float *)a2 + 40) = (float)v5[15] + (float)((float)((float)v5[111] + a4) * v8);
        v10 = (float)v5[16];
        v11 = (float)v5[112];
        v12 = a5 * 0.5;
        goto LABEL_9;
      case 3:
        *((float *)a2 + 30) = (float)v5[15] + (float)((float)((float)v5[111] + a4) * v8);
        *((float *)a2 + 31) = (float)v5[16] + (float)((float)((float)v5[112] + (float)(a5 * 0.5)) * v8);
        *((float *)a2 + 32) = (float)v5[15] + (float)((float)((float)v5[111] + (float)(a4 * 0.5)) * v8);
        *((float *)a2 + 33) = (float)v5[16] + (float)((float)((float)v5[112] + (float)(a5 * 0.5)) * v8);
        v9 = (float *)((char *)a2 + 136);
        *((float *)a2 + 34) = (float)v5[15] + (float)((float)((float)v5[111] + a4) * v8);
        v10 = (float)v5[16];
        v11 = (float)v5[112];
        v12 = a5;
LABEL_9:
        this = v10 + (float)((float)(v11 + v12) * v8);
        v9[1] = this;
        break;
      case 4:
        *((float *)a2 + 24) = (float)v5[15] + (float)((float)((float)v5[111] + a4) * v8);
        *((float *)a2 + 25) = (float)v5[16] + (float)((float)((float)v5[112] + a5) * v8);
        *((float *)a2 + 26) = (float)v5[15] + (float)((float)((float)v5[111] + (float)(a4 * 0.5)) * v8);
        *((float *)a2 + 27) = (float)v5[16] + (float)((float)((float)v5[112] + (float)(a5 * 0.5)) * v8);
        *((float *)a2 + 28) = (float)v5[15] + (float)((float)((float)v5[111] + (float)(a4 * 0.5)) * v8);
        this = (float)v5[16] + (float)((float)((float)v5[112] + a5) * v8);
        *((float *)a2 + 29) = this;
        break;
      case 5:
        *((float *)a2 + 18) = (float)v5[15] + (float)((float)((float)v5[111] + (float)(a4 * 0.5)) * v8);
        *((float *)a2 + 19) = (float)v5[16] + (float)((float)((float)v5[112] + a5) * v8);
        *((float *)a2 + 20) = (float)v5[15] + (float)((float)((float)v5[111] + (float)(a4 * 0.5)) * v8);
        *((float *)a2 + 21) = (float)v5[16] + (float)((float)((float)v5[112] + (float)(a5 * 0.5)) * v8);
        *((float *)a2 + 22) = (float)v5[15] + (float)((float)v5[111] * v8);
        this = (float)v5[16] + (float)((float)((float)v5[112] + a5) * v8);
        *((float *)a2 + 23) = this;
        break;
      case 6:
        *((float *)a2 + 12) = (float)v5[15] + (float)((float)v5[111] * v8);
        *((float *)a2 + 13) = (float)v5[16] + (float)((float)((float)v5[112] + a5) * v8);
        *((float *)a2 + 14) = (float)v5[15] + (float)((float)((float)v5[111] + (float)(a4 * 0.5)) * v8);
        *((float *)a2 + 15) = (float)v5[16] + (float)((float)((float)v5[112] + (float)(a5 * 0.5)) * v8);
        *((float *)a2 + 16) = (float)v5[15] + (float)((float)v5[111] * v8);
        this = (float)v5[16] + (float)((float)((float)v5[112] + (float)(a5 * 0.5)) * v8);
        *((float *)a2 + 17) = this;
        break;
      case 7:
        *((float *)a2 + 6) = (float)v5[15] + (float)((float)v5[111] * v8);
        *((float *)a2 + 7) = (float)v5[16] + (float)((float)((float)v5[112] + (float)(a5 * 0.5)) * v8);
        *((float *)a2 + 8) = (float)v5[15] + (float)((float)((float)v5[111] + (float)(a4 * 0.5)) * v8);
        *((float *)a2 + 9) = (float)v5[16] + (float)((float)((float)v5[112] + (float)(a5 * 0.5)) * v8);
        *((float *)a2 + 10) = (float)v5[15] + (float)((float)v5[111] * v8);
        this = (float)v5[16] + (float)((float)v5[112] * v8);
        *((float *)a2 + 11) = this;
        break;
      case 8:
        *(float *)a2 = (float)v5[15] + (float)((float)v5[111] * v8);
        *((float *)a2 + 1) = (float)v5[16] + (float)((float)v5[112] * v8);
        *((float *)a2 + 2) = (float)v5[15] + (float)((float)((float)v5[111] + (float)(a4 * 0.5)) * v8);
        *((float *)a2 + 3) = (float)v5[16] + (float)((float)((float)v5[112] + (float)(a5 * 0.5)) * v8);
        *((float *)a2 + 4) = (float)v5[15] + (float)((float)((float)v5[111] + (float)(a4 * 0.5)) * v8);
        this = (float)v5[16] + (float)((float)v5[112] * v8);
        *((float *)a2 + 5) = this;
        break;
      default:
        return this;
    }
  }
  return this;
}


//======================================================================
// Button::DrawCooldownLastTriangle(Ogre::Vector2 *,int,float,float,float)
// address: 0x001CDA40   size: 0x9C8 (2504 bytes)
//======================================================================
int __fastcall Button::DrawCooldownLastTriangle(Button *this, Ogre::Vector2 *a2, int a3, float a4, float a5, Ogre *a6)
{
  int *v6; // r6
  int v8; // r0
  int v9; // r5
  float v10; // r7
  int v11; // r0
  float v12; // r1
  float *v13; // r4
  float v14; // r5
  float v15; // r0
  float v16; // r1
  float v17; // r0
  float v18; // r1
  float v19; // r0
  float v20; // r5
  float v21; // r1
  float v22; // r1
  float v24; // r1
  float v25; // r1
  float v26; // r1
  float v27; // r1
  float v30; // [sp+4h] [bp-18h]
  float v31; // [sp+4h] [bp-18h]
  float v32; // [sp+10h] [bp-Ch]
  float v33; // [sp+10h] [bp-Ch]
  float v34; // [sp+10h] [bp-Ch]
  float v35; // [sp+10h] [bp-Ch]
  float v36; // [sp+10h] [bp-Ch]
  float v37; // [sp+14h] [bp-8h]
  float v38; // [sp+14h] [bp-8h]

  v6 = (int *)this;
  if ( a2 == nullptr )
    this = (Button *)((int (*)(void))sub_1CE408)();
  v8 = *((_DWORD *)this + 113);
  if ( v8 != 0 && (v9 = v6[114]) != 0 )
  {
    a4 = (float)v8;
    a5 = (float)v9;
    v10 = *(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr;
  }
  else
  {
    v10 = 1.0;
  }
  v11 = a3 - 1;
  if ( (unsigned int)(a3 - 1) > 7 )
    v11 = ((int (*)(void))sub_1CE408)();
  switch ( v11 )
  {
    case 0:
      v36 = (float)v6[111] + (float)(a4 * 0.5);
      *(float *)a2 = (float)v6[15]
                   + (float)((float)(v36
                                   - (float)((float)(a5 * 0.5) * Ogre::Tan(COERCE_OGRE_(360.0 - *(float *)&a6), v27)))
                           * v10);
      *((float *)a2 + 1) = (float)v6[16] + (float)((float)v6[112] * v10);
      *((float *)a2 + 2) = (float)v6[15] + (float)((float)((float)v6[111] + (float)(a4 * 0.5)) * v10);
      *((float *)a2 + 3) = (float)v6[16] + (float)((float)((float)v6[112] + (float)(a5 * 0.5)) * v10);
      *((float *)a2 + 4) = (float)v6[15] + (float)((float)((float)v6[111] + (float)(a4 * 0.5)) * v10);
      v19 = (float)v6[16] + (float)((float)v6[112] * v10);
      *((float *)a2 + 5) = v19;
      return sub_1CE408(LODWORD(v19));
    case 1:
      *((float *)a2 + 6) = (float)v6[15] + (float)((float)v6[111] * v10);
      v35 = (float)v6[112] + (float)(a5 * 0.5);
      *((float *)a2 + 7) = (float)v6[16]
                         + (float)((float)(v35
                                         - (float)((float)(a4 * 0.5)
                                                 * Ogre::Tan(COERCE_OGRE_(*(float *)&a6 - 270.0), v26)))
                                 * v10);
      *((float *)a2 + 8) = (float)v6[15] + (float)((float)((float)v6[111] + (float)(a4 * 0.5)) * v10);
      *((float *)a2 + 9) = (float)v6[16] + (float)((float)((float)v6[112] + (float)(a5 * 0.5)) * v10);
      *((float *)a2 + 10) = (float)v6[15] + (float)((float)v6[111] * v10);
      v19 = (float)v6[16] + (float)((float)v6[112] * v10);
      *((float *)a2 + 11) = v19;
      return sub_1CE408(LODWORD(v19));
    case 2:
      *((float *)a2 + 12) = (float)v6[15] + (float)((float)v6[111] * v10);
      v34 = (float)v6[112] + (float)(a5 * 0.5);
      v31 = a4 * 0.5;
      *((float *)a2 + 13) = (float)v6[16]
                          + (float)((float)(v34 + (float)(v31 * Ogre::Tan(COERCE_OGRE_(270.0 - *(float *)&a6), v25)))
                                  * v10);
      *((float *)a2 + 14) = (float)v6[15] + (float)((float)((float)v6[111] + v31) * v10);
      *((float *)a2 + 15) = (float)v6[16] + (float)((float)((float)v6[112] + (float)(a5 * 0.5)) * v10);
      *((float *)a2 + 16) = (float)v6[15] + (float)((float)v6[111] * v10);
      v19 = (float)v6[16] + (float)((float)((float)v6[112] + (float)(a5 * 0.5)) * v10);
      *((float *)a2 + 17) = v19;
      return sub_1CE408(LODWORD(v19));
    case 3:
      v30 = a4 * 0.5;
      v33 = (float)v6[111] + v30;
      *((float *)a2 + 18) = (float)v6[15]
                          + (float)((float)(v33
                                          - (float)((float)(a5 * 0.5)
                                                  * Ogre::Tan(COERCE_OGRE_(*(float *)&a6 - 180.0), v24)))
                                  * v10);
      *((float *)a2 + 19) = (float)v6[16] + (float)((float)((float)v6[112] + a5) * v10);
      *((float *)a2 + 20) = (float)v6[15] + (float)((float)((float)v6[111] + v30) * v10);
      *((float *)a2 + 21) = (float)v6[16] + (float)((float)((float)v6[112] + (float)(a5 * 0.5)) * v10);
      *((float *)a2 + 22) = (float)v6[15] + (float)((float)v6[111] * v10);
      v19 = (float)v6[16] + (float)((float)((float)v6[112] + a5) * v10);
      *((float *)a2 + 23) = v19;
      return sub_1CE408(LODWORD(v19));
    case 4:
      v32 = (float)v6[111] + (float)(a4 * 0.5);
      *((float *)a2 + 24) = (float)v6[15]
                          + (float)((float)(v32
                                          + (float)((float)(a5 * 0.5)
                                                  * Ogre::Tan(COERCE_OGRE_(180.0 - *(float *)&a6), v22)))
                                  * v10);
      *((float *)a2 + 25) = (float)v6[16] + (float)((float)((float)v6[112] + a5) * v10);
      *((float *)a2 + 26) = (float)v6[15] + (float)((float)((float)v6[111] + (float)(a4 * 0.5)) * v10);
      *((float *)a2 + 27) = (float)v6[16] + (float)((float)((float)v6[112] + (float)(a5 * 0.5)) * v10);
      *((float *)a2 + 29) = (float)v6[16] + (float)((float)((float)v6[112] + a5) * v10);
      v19 = (float)v6[15] + (float)((float)((float)v6[111] + (float)(a4 * 0.5)) * v10);
      *((float *)a2 + 28) = v19;
      return sub_1CE408(LODWORD(v19));
    case 5:
      *((float *)a2 + 30) = (float)v6[15] + (float)((float)((float)v6[111] + a4) * v10);
      v20 = (float)v6[112] + (float)(a5 * 0.5);
      *((float *)a2 + 31) = (float)v6[16]
                          + (float)((float)(v20
                                          + (float)((float)(a4 * 0.5)
                                                  * Ogre::Tan(COERCE_OGRE_(*(float *)&a6 - 90.0), v21)))
                                  * v10);
      *((float *)a2 + 32) = (float)v6[15] + (float)((float)((float)v6[111] + (float)(a4 * 0.5)) * v10);
      *((float *)a2 + 33) = (float)v6[16] + (float)((float)((float)v6[112] + (float)(a5 * 0.5)) * v10);
      v13 = (float *)((char *)a2 + 136);
      *((float *)a2 + 34) = (float)v6[15] + (float)((float)((float)v6[111] + a4) * v10);
      v14 = (float)v6[16];
      v17 = (float)v6[112];
      v18 = a5;
      goto LABEL_12;
    case 6:
      *((float *)a2 + 36) = (float)v6[15] + (float)((float)((float)v6[111] + a4) * v10);
      v38 = (float)v6[112] + (float)(a5 * 0.5);
      *((float *)a2 + 37) = (float)v6[16]
                          + (float)((float)(v38
                                          - (float)((float)(a4 * 0.5)
                                                  * Ogre::Tan(COERCE_OGRE_(90.0 - *(float *)&a6), v16)))
                                  * v10);
      *((float *)a2 + 38) = (float)v6[15] + (float)((float)((float)v6[111] + (float)(a4 * 0.5)) * v10);
      *((float *)a2 + 39) = (float)v6[16] + (float)((float)((float)v6[112] + (float)(a5 * 0.5)) * v10);
      v13 = (float *)((char *)a2 + 160);
      *((float *)a2 + 40) = (float)v6[15] + (float)((float)((float)v6[111] + a4) * v10);
      v14 = (float)v6[16];
      v17 = (float)v6[112];
      v18 = a5 * 0.5;
LABEL_12:
      v15 = v17 + v18;
      goto LABEL_13;
    case 7:
      v37 = (float)v6[111] + (float)(a4 * 0.5);
      *((float *)a2 + 42) = (float)v6[15]
                          + (float)((float)(v37 + (float)((float)(a5 * 0.5) * Ogre::Tan(a6, v12))) * v10);
      *((float *)a2 + 43) = (float)v6[16] + (float)((float)v6[112] * v10);
      *((float *)a2 + 44) = (float)v6[15] + (float)((float)((float)v6[111] + (float)(a4 * 0.5)) * v10);
      *((float *)a2 + 45) = (float)v6[16] + (float)((float)((float)v6[112] + (float)(a5 * 0.5)) * v10);
      v13 = (float *)((char *)a2 + 184);
      *((float *)a2 + 46) = (float)v6[15] + (float)((float)((float)v6[111] + a4) * v10);
      v14 = (float)v6[16];
      v15 = (float)v6[112];
LABEL_13:
      v19 = v14 + (float)(v15 * v10);
      v13[1] = v19;
      return sub_1CE408(LODWORD(v19));
  }
}


//======================================================================
// Button::DrawCooldown(void)
// address: 0x001CE414   size: 0xFC (252 bytes)
//======================================================================
void __fastcall Button::DrawCooldown(Button *this)
{
  float v2; // r0
  float v3; // r6
  unsigned int v4; // r0
  int v5; // r7
  Ogre::Vector2 *i; // r5
  int v7; // r0
  int v8; // r6
  void (__fastcall *v9)(int, int); // r7
  int v10; // r0
  int v11; // [sp+10h] [bp-14h]
  int v12; // [sp+14h] [bp-10h]
  int v13; // [sp+18h] [bp-Ch]

  v2 = (float)(*((float *)this + 116) / *((float *)this + 117)) * 360.0;
  v3 = v2;
  if ( *((_BYTE *)this + 472) != 0 )
    v3 = 360.0 - v2;
  v11 = 8 - (int)(float)(v3 / 45.0);
  if ( (unsigned int)(3 * v11) > 0xFE00000 )
    v4 = -1;
  else
    v4 = 24 * (8 - (int)(float)(v3 / 45.0));
  v5 = 8;
  for ( i = (Ogre::Vector2 *)operator new[](v4);
        ;
        Button::DrawCooldownBaseTriangle(*(float *)&this, i, v5--, (float)v7, (float)(v12 - v13)) )
  {
    v12 = *((_DWORD *)this + 18);
    v7 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
    v13 = *((_DWORD *)this + 16);
    if ( v5 <= (int)(float)(v3 / 45.0) + 1 )
      break;
  }
  Button::DrawCooldownLastTriangle(this, i, v11, (float)v7, (float)(v12 - v13), (Ogre *)LODWORD(v3));
  v8 = g_pDisplay;
  v9 = *(void (__fastcall **)(int, int))(*(_DWORD *)g_pDisplay + 96);
  v10 = (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 84))(g_pDisplay);
  v9(v8, v10);
  (*(void (__fastcall **)(int, Ogre::Vector2 *, int, int))(*(_DWORD *)g_pDisplay + 128))(
    g_pDisplay,
    i,
    v11,
    -1778384896);
  (*(void (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 100))(g_pDisplay);
  operator delete(i);
}


//======================================================================
// Button::DrawFadeBaseTriangle(Ogre::Vector2 *,int,float,float)
// address: 0x001CE51C   size: 0x79E (1950 bytes)
//======================================================================
float __fastcall Button::DrawFadeBaseTriangle(float this, Ogre::Vector2 *a2, int a3, float a4, float a5)
{
  int *v5; // r4
  int v6; // r0
  int v7; // r7
  float v8; // r7
  float *v9; // r5
  float v10; // r6
  float v11; // r0
  float v13; // [sp+0h] [bp-14h]

  v5 = (int *)LODWORD(this);
  if ( a2 != nullptr )
  {
    v6 = *(_DWORD *)(LODWORD(this) + 452);
    if ( v6 != 0 && (v7 = v5[114]) != 0 )
    {
      a4 = (float)v6;
      a5 = (float)v7;
      v8 = *(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr;
    }
    else
    {
      v8 = 1.0;
    }
    LODWORD(this) = a3 - 1;
    switch ( a3 )
    {
      case 1:
        *(float *)a2 = (float)v5[15] + (float)((float)((float)v5[111] + (float)(a4 * 0.5)) * v8);
        *((float *)a2 + 1) = (float)v5[16] + (float)((float)v5[112] * v8);
        *((float *)a2 + 2) = (float)v5[15] + (float)((float)((float)v5[111] + (float)(a4 * 0.5)) * v8);
        *((float *)a2 + 3) = (float)v5[16] + (float)((float)((float)v5[112] + (float)(a5 * 0.5)) * v8);
        *((float *)a2 + 4) = (float)v5[15] + (float)((float)((float)v5[111] + a4) * v8);
        this = (float)v5[16] + (float)((float)v5[112] * v8);
        *((float *)a2 + 5) = this;
        break;
      case 2:
        *((float *)a2 + 6) = (float)v5[15] + (float)((float)((float)v5[111] + a4) * v8);
        *((float *)a2 + 7) = (float)v5[16] + (float)((float)v5[112] * v8);
        *((float *)a2 + 8) = (float)v5[15] + (float)((float)((float)v5[111] + (float)(a4 * 0.5)) * v8);
        *((float *)a2 + 9) = (float)v5[16] + (float)((float)((float)v5[112] + (float)(a5 * 0.5)) * v8);
        *((float *)a2 + 10) = (float)v5[15] + (float)((float)((float)v5[111] + a4) * v8);
        this = (float)v5[16] + (float)((float)((float)v5[112] + (float)(a5 * 0.5)) * v8);
        *((float *)a2 + 11) = this;
        break;
      case 3:
        *((float *)a2 + 12) = (float)v5[15] + (float)((float)((float)v5[111] + a4) * v8);
        *((float *)a2 + 13) = (float)v5[16] + (float)((float)((float)v5[112] + (float)(a5 * 0.5)) * v8);
        *((float *)a2 + 14) = (float)v5[15] + (float)((float)((float)v5[111] + (float)(a4 * 0.5)) * v8);
        *((float *)a2 + 15) = (float)v5[16] + (float)((float)((float)v5[112] + (float)(a5 * 0.5)) * v8);
        *((float *)a2 + 16) = (float)v5[15] + (float)((float)((float)v5[111] + a4) * v8);
        this = (float)v5[16] + (float)((float)((float)v5[112] + a5) * v8);
        *((float *)a2 + 17) = this;
        break;
      case 4:
        *((float *)a2 + 18) = (float)v5[15] + (float)((float)((float)v5[111] + a4) * v8);
        *((float *)a2 + 19) = (float)v5[16] + (float)((float)((float)v5[112] + a5) * v8);
        v13 = a4 * 0.5;
        *((float *)a2 + 20) = (float)v5[15] + (float)((float)((float)v5[111] + v13) * v8);
        *((float *)a2 + 21) = (float)v5[16] + (float)((float)((float)v5[112] + (float)(a5 * 0.5)) * v8);
        *((float *)a2 + 22) = (float)v5[15] + (float)((float)((float)v5[111] + v13) * v8);
        this = (float)v5[16] + (float)((float)((float)v5[112] + a5) * v8);
        *((float *)a2 + 23) = this;
        break;
      case 5:
        *((float *)a2 + 24) = (float)v5[15] + (float)((float)((float)v5[111] + (float)(a4 * 0.5)) * v8);
        *((float *)a2 + 25) = (float)v5[16] + (float)((float)((float)v5[112] + a5) * v8);
        *((float *)a2 + 26) = (float)v5[15] + (float)((float)((float)v5[111] + (float)(a4 * 0.5)) * v8);
        *((float *)a2 + 27) = (float)v5[16] + (float)((float)((float)v5[112] + (float)(a5 * 0.5)) * v8);
        *((float *)a2 + 28) = (float)v5[15] + (float)((float)v5[111] * v8);
        this = (float)v5[16] + (float)((float)((float)v5[112] + a5) * v8);
        *((float *)a2 + 29) = this;
        break;
      case 6:
        *((float *)a2 + 30) = (float)v5[15] + (float)((float)v5[111] * v8);
        *((float *)a2 + 31) = (float)v5[16] + (float)((float)((float)v5[112] + a5) * v8);
        *((float *)a2 + 32) = (float)v5[15] + (float)((float)((float)v5[111] + (float)(a4 * 0.5)) * v8);
        *((float *)a2 + 33) = (float)v5[16] + (float)((float)((float)v5[112] + (float)(a5 * 0.5)) * v8);
        v9 = (float *)((char *)a2 + 136);
        *((float *)a2 + 34) = (float)v5[15] + (float)((float)v5[111] * v8);
        v10 = (float)v5[16];
        v11 = (float)v5[112] + (float)(a5 * 0.5);
        goto LABEL_14;
      case 7:
        *((float *)a2 + 36) = (float)v5[15] + (float)((float)v5[111] * v8);
        *((float *)a2 + 37) = (float)v5[16] + (float)((float)((float)v5[112] + (float)(a5 * 0.5)) * v8);
        *((float *)a2 + 38) = (float)v5[15] + (float)((float)((float)v5[111] + (float)(a4 * 0.5)) * v8);
        v9 = (float *)((char *)a2 + 160);
        *((float *)a2 + 39) = (float)v5[16] + (float)((float)((float)v5[112] + (float)(a5 * 0.5)) * v8);
        *((float *)a2 + 40) = (float)v5[15] + (float)((float)v5[111] * v8);
        v10 = (float)v5[16];
        v11 = (float)v5[112];
LABEL_14:
        this = v10 + (float)(v11 * v8);
        v9[1] = this;
        break;
      default:
        return this;
    }
  }
  return this;
}


//======================================================================
// Button::DrawFadeLastTriangle(Ogre::Vector2 *,int,float,float,float)
// address: 0x001CECBC   size: 0x9C8 (2504 bytes)
//======================================================================
int __fastcall Button::DrawFadeLastTriangle(Button *this, Ogre::Vector2 *a2, int a3, float a4, float a5, Ogre *a6)
{
  int *v6; // r6
  int v8; // r0
  int v9; // r5
  float v10; // r7
  int v11; // r0
  float v12; // r1
  float v13; // r1
  float v14; // r0
  float v15; // r4
  float v16; // r1
  float v18; // r1
  float v19; // r5
  float v20; // r1
  float *v21; // r4
  float v22; // r1
  float v23; // r5
  Ogre *v24; // r0
  float v25; // r0
  float v26; // r1
  float v27; // r0
  float v28; // r1
  float v29; // r1
  float v31; // [sp+4h] [bp-18h]
  float v33; // [sp+8h] [bp-14h]
  float v34; // [sp+Ch] [bp-10h]
  float v35; // [sp+14h] [bp-8h]

  v6 = (int *)this;
  if ( a2 == nullptr )
    this = (Button *)((int (*)(void))sub_1CF684)();
  v8 = *((_DWORD *)this + 113);
  if ( v8 != 0 && (v9 = v6[114]) != 0 )
  {
    a4 = (float)v8;
    a5 = (float)v9;
    v10 = *(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr;
  }
  else
  {
    v10 = 1.0;
  }
  v11 = a3 - 1;
  if ( (unsigned int)(a3 - 1) > 7 )
    v11 = ((int (*)(void))sub_1CF684)();
  switch ( v11 )
  {
    case 0:
      *(float *)a2 = (float)v6[15] + (float)((float)((float)v6[111] + (float)(a4 * 0.5)) * v10);
      *((float *)a2 + 1) = (float)v6[16] + (float)((float)v6[112] * v10);
      *((float *)a2 + 2) = (float)v6[15] + (float)((float)((float)v6[111] + (float)(a4 * 0.5)) * v10);
      *((float *)a2 + 3) = (float)v6[16] + (float)((float)((float)v6[112] + (float)(a5 * 0.5)) * v10);
      v34 = (float)v6[111] + (float)(a4 * 0.5);
      a4 = Ogre::Tan(a6, v12);
      *((float *)a2 + 4) = (float)v6[15] + (float)((float)(v34 + (float)((float)(a5 * 0.5) * a4)) * v10);
      *((float *)a2 + 5) = (float)v6[16] + (float)((float)v6[112] * v10);
      ((void (*)(void))sub_1CF684)();
      goto LABEL_11;
    case 1:
LABEL_11:
      *((float *)a2 + 6) = (float)v6[15] + (float)((float)((float)v6[111] + a4) * v10);
      *((float *)a2 + 7) = (float)v6[16] + (float)((float)v6[112] * v10);
      *((float *)a2 + 8) = (float)v6[15] + (float)((float)((float)v6[111] + (float)(a4 * 0.5)) * v10);
      *((float *)a2 + 9) = (float)v6[16] + (float)((float)((float)v6[112] + (float)(a5 * 0.5)) * v10);
      *((float *)a2 + 10) = (float)v6[15] + (float)((float)((float)v6[111] + a4) * v10);
      v14 = (float)v6[16]
          + (float)((float)((float)v6[112]
                          + (float)((float)(a4 * 0.5) * Ogre::Tan(COERCE_OGRE_(*(float *)&a6 - 45.0), v13)))
                  * v10);
      *((float *)a2 + 11) = v14;
      return sub_1CF684(LODWORD(v14));
    case 2:
      *((float *)a2 + 12) = (float)v6[15] + (float)((float)((float)v6[111] + a4) * v10);
      *((float *)a2 + 13) = (float)v6[16] + (float)((float)((float)v6[112] + (float)(a5 * 0.5)) * v10);
      *((float *)a2 + 14) = (float)v6[15] + (float)((float)((float)v6[111] + (float)(a4 * 0.5)) * v10);
      *((float *)a2 + 15) = (float)v6[16] + (float)((float)((float)v6[112] + (float)(a5 * 0.5)) * v10);
      *((float *)a2 + 16) = (float)v6[15] + (float)((float)((float)v6[111] + a4) * v10);
      v15 = (float)v6[112] + (float)(a5 * 0.5);
      v14 = (float)v6[16]
          + (float)((float)(v15 + (float)((float)(a4 * 0.5) * Ogre::Tan(COERCE_OGRE_(*(float *)&a6 - 90.0), v16))) * v10);
      *((float *)a2 + 17) = v14;
      return sub_1CF684(LODWORD(v14));
    case 3:
      *((float *)a2 + 18) = (float)v6[15] + (float)((float)((float)v6[111] + a4) * v10);
      *((float *)a2 + 19) = (float)v6[16] + (float)((float)((float)v6[112] + a5) * v10);
      *((float *)a2 + 20) = (float)v6[15] + (float)((float)((float)v6[111] + (float)(a4 * 0.5)) * v10);
      *((float *)a2 + 21) = (float)v6[16] + (float)((float)((float)v6[112] + (float)(a5 * 0.5)) * v10);
      v35 = (float)v6[111] + a4;
      *((float *)a2 + 22) = (float)v6[15]
                          + (float)((float)(v35
                                          - (float)((float)(a5 * 0.5)
                                                  * Ogre::Tan(COERCE_OGRE_(*(float *)&a6 - 135.0), v18)))
                                  * v10);
      v14 = (float)v6[16] + (float)((float)((float)v6[112] + a5) * v10);
      *((float *)a2 + 23) = v14;
      return sub_1CF684(LODWORD(v14));
    case 4:
      *((float *)a2 + 24) = (float)v6[15] + (float)((float)((float)v6[111] + (float)(a4 * 0.5)) * v10);
      *((float *)a2 + 25) = (float)v6[16] + (float)((float)((float)v6[112] + a5) * v10);
      *((float *)a2 + 26) = (float)v6[15] + (float)((float)((float)v6[111] + (float)(a4 * 0.5)) * v10);
      *((float *)a2 + 27) = (float)v6[16] + (float)((float)((float)v6[112] + (float)(a5 * 0.5)) * v10);
      v19 = (float)v6[111] + (float)(a4 * 0.5);
      *((float *)a2 + 28) = (float)v6[15]
                          + (float)((float)(v19
                                          - (float)((float)(a5 * 0.5)
                                                  * Ogre::Tan(COERCE_OGRE_(*(float *)&a6 - 180.0), v20)))
                                  * v10);
      v14 = (float)v6[16] + (float)((float)((float)v6[112] + a5) * v10);
      *((float *)a2 + 29) = v14;
      return sub_1CF684(LODWORD(v14));
    case 5:
      *((float *)a2 + 30) = (float)v6[15] + (float)((float)v6[111] * v10);
      *((float *)a2 + 31) = (float)v6[16] + (float)((float)((float)v6[112] + a5) * v10);
      v33 = a4 * 0.5;
      *((float *)a2 + 32) = (float)v6[15] + (float)((float)((float)v6[111] + v33) * v10);
      *((float *)a2 + 33) = (float)v6[16] + (float)((float)((float)v6[112] + (float)(a5 * 0.5)) * v10);
      v21 = (float *)((char *)a2 + 136);
      *((float *)a2 + 34) = (float)v6[15] + (float)((float)v6[111] * v10);
      v22 = 225.0;
      v23 = (float)v6[112] + a5;
      v24 = a6;
      goto LABEL_18;
    case 6:
      *((float *)a2 + 36) = (float)v6[15] + (float)((float)v6[111] * v10);
      *((float *)a2 + 37) = (float)v6[16] + (float)((float)((float)v6[112] + (float)(a5 * 0.5)) * v10);
      v33 = a4 * 0.5;
      *((float *)a2 + 38) = (float)v6[15] + (float)((float)((float)v6[111] + v33) * v10);
      *((float *)a2 + 39) = (float)v6[16] + (float)((float)((float)v6[112] + (float)(a5 * 0.5)) * v10);
      v21 = (float *)((char *)a2 + 160);
      *((float *)a2 + 40) = (float)v6[15] + (float)((float)v6[111] * v10);
      v22 = 270.0;
      v23 = (float)v6[112] + (float)(a5 * 0.5);
      v24 = a6;
LABEL_18:
      v25 = *(float *)&v24 - v22;
      v31 = Ogre::Tan((Ogre *)LODWORD(v25), v26);
      v27 = (float)v6[16];
      v28 = (float)(v23 - (float)(v33 * v31)) * v10;
      break;
    case 7:
      *((float *)a2 + 42) = (float)v6[15] + (float)((float)v6[111] * v10);
      *((float *)a2 + 43) = (float)v6[16] + (float)((float)v6[112] * v10);
      *((float *)a2 + 44) = (float)v6[15] + (float)((float)((float)v6[111] + (float)(a4 * 0.5)) * v10);
      *((float *)a2 + 45) = (float)v6[16] + (float)((float)((float)v6[112] + (float)(a5 * 0.5)) * v10);
      v21 = (float *)((char *)a2 + 184);
      *((float *)a2 + 46) = (float)v6[15]
                          + (float)((float)((float)v6[111]
                                          + (float)((float)(a5 * 0.5)
                                                  * Ogre::Tan(COERCE_OGRE_(*(float *)&a6 - 315.0), v29)))
                                  * v10);
      v27 = (float)v6[16];
      v28 = (float)v6[112] * v10;
      break;
  }
  v14 = v27 + v28;
  v21[1] = v14;
  return sub_1CF684(LODWORD(v14));
}


//======================================================================
// Button::DrawFade(void)
// address: 0x001CF68C   size: 0xEC (236 bytes)
//======================================================================
void __fastcall Button::DrawFade(Button *this)
{
  int v2; // r5
  unsigned int v3; // r0
  int v4; // r7
  Ogre::Vector2 *i; // r6
  int v6; // r0
  int v7; // r7
  int v8; // r1
  Ogre *v9; // [sp+8h] [bp-14h]
  Ogre *v10; // [sp+8h] [bp-14h]
  int v11; // [sp+Ch] [bp-10h]
  int v12; // [sp+10h] [bp-Ch]

  *(float *)&v9 = (float)(*((float *)this + 116) / *((float *)this + 117)) * 360.0;
  v2 = (int)j_ceil((float)(*(float *)&v9 / 45.0));
  if ( v2 != 0 )
  {
    if ( (unsigned int)(3 * v2) > 0xFE00000 )
      v3 = -1;
    else
      v3 = 24 * v2;
    v4 = 1;
    for ( i = (Ogre::Vector2 *)operator new[](v3);
          ;
          Button::DrawFadeBaseTriangle(*(float *)&this, i, v4++, (float)v6, (float)(v11 - v12)) )
    {
      v11 = *((_DWORD *)this + 18);
      v6 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
      v12 = *((_DWORD *)this + 16);
      if ( v4 >= v2 )
        break;
    }
    Button::DrawFadeLastTriangle(this, i, v2, (float)v6, (float)(v11 - v12), v9);
    v7 = g_pDisplay;
    v10 = *(Ogre **)(*(_DWORD *)g_pDisplay + 96);
    v8 = (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 84))(g_pDisplay);
    ((void (__fastcall *)(int, int))v10)(v7, v8);
    (*(void (__fastcall **)(int, Ogre::Vector2 *, int, int))(*(_DWORD *)g_pDisplay + 128))(
      g_pDisplay,
      i,
      v2,
      -1778384896);
    (*(void (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 100))(g_pDisplay);
    operator delete(i);
  }
}


//======================================================================
// Button::SetPushedState(void)
// address: 0x001CF784   size: 0xC (12 bytes)
//======================================================================
char *__fastcall Button::SetPushedState(Button *this)
{
  char *result; // r0

  result = (char *)this + 252;
  *((_DWORD *)result + 10) |= 2u;
  return result;
}


//======================================================================
// Button::GetPushedState(void)
// address: 0x001CF790   size: 0xA (10 bytes)
//======================================================================
int __fastcall Button::GetPushedState(Button *this)
{
  return *((_DWORD *)this + 73) << 30 >> 31;
}


//======================================================================
// Button::Disable(void)
// address: 0x001CF79A   size: 0x12 (18 bytes)
//======================================================================
char *__fastcall Button::Disable(Button *this)
{
  char *result; // r0

  result = (char *)this + 252;
  *((_DWORD *)result + 10) = *((_DWORD *)result + 10) & 0xFFFFFFF6 | 8;
  return result;
}


//======================================================================
// Button::Enable(void)
// address: 0x001CF7AC   size: 0xC (12 bytes)
//======================================================================
char *__fastcall Button::Enable(Button *this)
{
  char *result; // r0

  result = (char *)this + 252;
  *((_DWORD *)result + 10) &= ~8u;
  return result;
}


//======================================================================
// Button::IsEnable(void)
// address: 0x001CF7B8   size: 0xC (12 bytes)
//======================================================================
bool __fastcall Button::IsEnable(Button *this)
{
  return (*((_DWORD *)this + 73) & 8) == 0;
}


//======================================================================
// Button::Highlight(void)
// address: 0x001CF7C4   size: 0xC (12 bytes)
//======================================================================
char *__fastcall Button::Highlight(Button *this)
{
  char *result; // r0

  result = (char *)this + 252;
  *((_DWORD *)result + 10) |= 1u;
  return result;
}


//======================================================================
// Button::DisHighlight(void)
// address: 0x001CF7D0   size: 0xC (12 bytes)
//======================================================================
char *__fastcall Button::DisHighlight(Button *this)
{
  char *result; // r0

  result = (char *)this + 252;
  *((_DWORD *)result + 10) &= ~1u;
  return result;
}


//======================================================================
// Button::IsHighlight(void)
// address: 0x001CF7DC   size: 0xA (10 bytes)
//======================================================================
int __fastcall Button::IsHighlight(Button *this)
{
  return *((_DWORD *)this + 73) & 1;
}


//======================================================================
// Button::Checked(void)
// address: 0x001CF7E6   size: 0xC (12 bytes)
//======================================================================
char *__fastcall Button::Checked(Button *this)
{
  char *result; // r0

  result = (char *)this + 252;
  *((_DWORD *)result + 10) |= 0x10u;
  return result;
}


//======================================================================
// Button::DisChecked(void)
// address: 0x001CF7F2   size: 0xC (12 bytes)
//======================================================================
char *__fastcall Button::DisChecked(Button *this)
{
  char *result; // r0

  result = (char *)this + 252;
  *((_DWORD *)result + 10) &= ~0x10u;
  return result;
}


//======================================================================
// Button::SetChecked(bool)
// address: 0x001CF7FE   size: 0x12 (18 bytes)
//======================================================================
char *__fastcall Button::SetChecked(Button *this, int a2)
{
  if ( a2 != 0 )
    return Button::Checked(this);
  else
    return Button::DisChecked(this);
}


//======================================================================
// Button::IsChecked(void)
// address: 0x001CF810   size: 0xA (10 bytes)
//======================================================================
int __fastcall Button::IsChecked(Button *this)
{
  return *((_DWORD *)this + 73) << 27 >> 31;
}


//======================================================================
// Button::OnMouseUp(int,int,int,int,int)
// address: 0x001CF81C   size: 0x122 (290 bytes)
//======================================================================
int __fastcall Button::OnMouseUp(Button *this, int a2, char a3, int a4, int a5, int a6)
{
  int v7; // r2
  int v9; // r5
  const char *v10; // r0
  int v11; // r3
  _BYTE v15[8]; // [sp+1Ch] [bp-10h] BYREF

  v7 = *((_DWORD *)this + 73);
  v9 = v7 & 8;
  if ( (v7 & 8) != 0 || (v7 & 2) == 0 )
    return 1;
  *((_DWORD *)this + 73) = v7 & 0xFFFFFFFD;
  v10 = *((const char **)this + 109);
  if ( *((_DWORD *)v10 - 3) != 0 )
    playUISound(v10);
  if ( LayoutFrame::IsShown(this) == 0 )
    Button::DisHighlight(this);
  v11 = *((_DWORD *)this + 119);
  if ( v11 <= 0
    || ((a4 - *((_DWORD *)this + 121) + ((a4 - *((_DWORD *)this + 121)) >> 31)) ^ ((a4 - *((_DWORD *)this + 121)) >> 31)) < v11
    && ((a5 - *((_DWORD *)this + 122) + ((a5 - *((_DWORD *)this + 122)) >> 31)) ^ ((a5 - *((_DWORD *)this + 122)) >> 31)) < v11 )
  {
    sub_1CCD9A(v15, a3);
    if ( UIObject::hasScriptsEvent(this, 29) )
      UIObject::CallScript(this, 29, "is", a2, v15);
    if ( (*((float *)this + 120) == 0.0 || *((float *)this + 123) < *((float *)this + 120))
      && UIObject::hasScriptsEvent(this, 4) )
    {
      UIObject::CallScript(this, 4, "is", a2, v15);
    }
    if ( Button::GetStateRegion(this, 4) != 0 )
    {
      if ( Button::IsChecked(this) != 0 )
        Button::DisChecked(this);
      else
        Button::Checked(this);
    }
  }
  return v9;
}


//======================================================================
// Button::GetAngle(void)
// address: 0x001CF94C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Button::GetAngle(Button *this)
{
  return *((_DWORD *)this + 127);
}


//======================================================================
// Button::SetAngle(float)
// address: 0x001CF954   size: 0x48 (72 bytes)
//======================================================================
__int64 __fastcall Button::SetAngle(__int64 this)
{
  _DWORD *v1; // r6
  unsigned int i; // r4
  int v3; // r3
  const char *v4; // r0
  __int64 v6; // [sp+0h] [bp-Ch]

  v6 = this;
  v1 = (_DWORD *)this;
  *(_DWORD *)(this + 508) = HIDWORD(this);
  for ( i = 0; ; ++i )
  {
    v3 = v1[57];
    if ( i >= (v1[58] - v3) >> 3 )
      break;
    v4 = (const char *)(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v3 + 8 * i) + 4))(*(_DWORD *)(v3 + 8 * i));
    if ( j_strcmp(v4, "Texture") == 0 )
    {
      HIDWORD(v6) = v1[127];
      Texture::SetAngle(*(Texture **)(v1[57] + 8 * i), *((float *)&v6 + 1));
    }
  }
  return v6;
}


//======================================================================
// Button::ClearPushState(void)
// address: 0x001CF9A0   size: 0xC (12 bytes)
//======================================================================
char *__fastcall Button::ClearPushState(Button *this)
{
  char *result; // r0

  result = (char *)this + 252;
  *((_DWORD *)result + 10) &= ~2u;
  return result;
}


//======================================================================
// Button::OnInputMessage(Ogre::InputEvent const&)
// address: 0x001CF9AC   size: 0x1FE (510 bytes)
//======================================================================
int __fastcall Button::OnInputMessage(Button *this, const InputEvent *a2)
{
  char *v3; // r1
  int v4; // r2
  int v6; // r6
  int v7; // r0
  int v8; // r3
  int v9; // r0
  int v10; // r0
  int v11; // r7
  int v12; // r0
  int v14; // [sp+8h] [bp-1Ch]
  _BYTE v15[8]; // [sp+14h] [bp-10h] BYREF

  v3 = (char *)this + 252;
  v4 = *((_DWORD *)this + 73);
  v6 = v4 & 8;
  if ( (v4 & 8) != 0 )
    return 0;
  switch ( (unsigned int)a2->ie_proc )
  {
    case 3u:
      v7 = Button::OnMouseDown(
             this,
             1,
             (char)a2->ie_next,
             SLOWORD(a2->ie_closure),
             SHIWORD(a2->ie_closure),
             (int)a2->ie_oq);
      goto LABEL_32;
    case 4u:
      v7 = Button::OnMouseUp(
             this,
             1,
             (char)a2->ie_next,
             SLOWORD(a2->ie_closure),
             SHIWORD(a2->ie_closure),
             (int)a2->ie_oq);
      goto LABEL_32;
    case 5u:
      if ( *((_BYTE *)this + 57) == 0 || !UIObject::hasScriptsEvent(this, 7) )
        goto LABEL_33;
      UIObject::CallScript(this, 7, "s", "LDoubleClick");
      break;
    case 6u:
      v7 = Button::OnMouseDown(
             this,
             2,
             (char)a2->ie_next,
             SLOWORD(a2->ie_closure),
             SHIWORD(a2->ie_closure),
             (int)a2->ie_oq);
      goto LABEL_32;
    case 7u:
      v7 = Button::OnMouseUp(
             this,
             2,
             (char)a2->ie_next,
             SLOWORD(a2->ie_closure),
             SHIWORD(a2->ie_closure),
             (int)a2->ie_oq);
      goto LABEL_32;
    case 9u:
      v8 = *((_DWORD *)this + 119);
      if ( v8 > 0 && (v4 & 2) != 0 )
      {
        v9 = SLOWORD(a2->ie_closure) - *((_DWORD *)this + 121);
        if ( ((v9 + (v9 >> 31)) ^ (v9 >> 31)) > v8
          || (((v10 = SHIWORD(a2->ie_closure) - *((_DWORD *)this + 122)) + (v10 >> 31)) ^ (v10 >> 31)) > v8 )
        {
          *((_DWORD *)v3 + 10) = v4 & 0xFFFFFFFD;
          if ( UIObject::hasScriptsEvent(this, 29) )
            UIObject::CallScript(this, 29, (const char *)&unk_3FB8EA);
        }
      }
      if ( !UIObject::hasScriptsEvent(this, 31) )
        return 0;
      UIObject::CallScript(this, 31, (const char *)&unk_3FB8EA);
      return v6;
    case 0xBu:
      if ( (v4 & 2) != 0 && UIObject::hasScriptsEvent(this, 29) )
        UIObject::CallScript(this, 29, (const char *)&unk_3FB8EA);
      Button::DisHighlight(this);
      Button::ClearPushState(this);
      v11 = 0;
      v14 = (*((_DWORD *)this + 78) - *((_DWORD *)this + 77)) >> 2;
      while ( v11 != v14 )
      {
        v12 = *(_DWORD *)(4 * v11++ + *((_DWORD *)this + 77));
        (*(void (__fastcall **)(int, const InputEvent *))(*(_DWORD *)v12 + 64))(v12, a2);
      }
      if ( !UIObject::hasScriptsEvent(this, 25) )
        return 0;
      UIObject::CallScript(this, 25, (const char *)&unk_3FB8EA);
      return v6;
    case 0xCu:
      Button::Highlight(this);
      if ( !UIObject::hasScriptsEvent(this, 10) )
        return 0;
      sub_1CCD9A(v15, (char)a2->ie_next);
      UIObject::CallScript(this, 10, "s", v15);
      return v6;
    case 0x10u:
LABEL_33:
      v6 = 1;
      break;
    default:
      v7 = Frame::OnInputMessage((char **)this, a2);
LABEL_32:
      v6 = v7;
      break;
  }
  return v6;
}


//======================================================================
// Button::UpdateSelf(float)
// address: 0x001CFBCC   size: 0xCE (206 bytes)
//======================================================================
int __fastcall Button::UpdateSelf(double this)
{
  double v1; // r4
  float v2; // r3
  int v3; // r3
  Button *v4; // r0
  int v5; // r1

  v1 = this;
  if ( *(_BYTE *)(LODWORD(this) + 57) != 0 )
  {
    Frame::UpdateSelf(this);
    if ( (*(_DWORD *)(LODWORD(v1) + 292) & 2) != 0 )
    {
      v2 = *(float *)(LODWORD(v1) + 492);
      *(float *)(LODWORD(v1) + 492) = v2 + *((float *)&v1 + 1);
      if ( COERCE_INT(v2 / 0.1) != COERCE_INT((float)(v2 + *((float *)&v1 + 1)) / 0.1) )
        UIObject::CallScript((UIObject *)LODWORD(v1), 51, "f", v2, (float)(v2 + *((float *)&v1 + 1)));
    }
    v3 = *(_DWORD *)(LODWORD(v1) + 292);
    if ( (v3 & 0x10) != 0 )
    {
      v4 = (Button *)LODWORD(v1);
      v5 = 4;
    }
    else if ( (v3 & 8) != 0 )
    {
      v4 = (Button *)LODWORD(v1);
      v5 = 3;
    }
    else
    {
      v5 = 2;
      if ( (v3 & 2) != 0 )
      {
        v4 = (Button *)LODWORD(v1);
        v5 = 1;
      }
      else
      {
        v4 = (Button *)LODWORD(v1);
        if ( (v3 & 1) == 0 )
          v5 = 0;
      }
    }
    LODWORD(this) = Button::ShowStateRegion(v4, v5);
    if ( *(_BYTE *)(LODWORD(v1) + 460) != 0 )
    {
      *(float *)&this = *(float *)(LODWORD(v1) + 464) + *((float *)&v1 + 1);
      *(_DWORD *)(LODWORD(v1) + 464) = LODWORD(this);
    }
    if ( *(_BYTE *)(LODWORD(v1) + 496) != 0 )
    {
      *(float *)&this = *(float *)(LODWORD(v1) + 500) + *((float *)&v1 + 1);
      *(_DWORD *)(LODWORD(v1) + 500) = LODWORD(this);
    }
  }
  return LODWORD(this);
}


//======================================================================
// Button::Draw(void)
// address: 0x001CFCA4   size: 0x106 (262 bytes)
//======================================================================
void __fastcall Button::Draw(Button *this)
{
  bool v2; // r5
  LayoutFrame *v3; // r0
  float v4; // r7
  float v5; // r0
  int v6; // r7
  float v7; // r0
  unsigned int v8; // r0
  float v9; // [sp+4h] [bp-20h]
  _DWORD v10[3]; // [sp+8h] [bp-1Ch] BYREF
  _DWORD v11[4]; // [sp+14h] [bp-10h] BYREF

  Frame::Draw(this);
  if ( *((_BYTE *)this + 460) != 0 )
  {
    v2 = *((float *)this + 116) < *((float *)this + 117);
    if ( *((float *)this + 116) >= *((float *)this + 117) )
    {
      *((_BYTE *)this + 460) = 0;
      v3 = *((LayoutFrame **)this + 108);
      if ( v3 != nullptr && *((_BYTE *)this + 473) != 0 )
      {
        LayoutFrame::Hide(v3);
        *((_BYTE *)this + 473) = v2;
      }
    }
    else if ( *((_BYTE *)this + 472) != 0 )
    {
      Button::DrawFade(this);
    }
    else
    {
      Button::DrawCooldown(this);
    }
  }
  if ( *((_BYTE *)this + 496) != 0 )
  {
    LayoutFrame::GetSize(v10, *((_DWORD **)this + 103));
    v9 = *((float *)this + 126);
    if ( *((float *)this + 125) > v9 )
    {
      *((_BYTE *)this + 496) = 0;
      v4 = 1.0;
    }
    else
    {
      v4 = *((float *)this + 125) / v9;
    }
    LayoutFrame::GetSize(v11, this);
    v5 = v4 * COERCE_FLOAT(LayoutDim::GetX((LayoutDim *)v11));
    v6 = FloatToInt(v5);
    v7 = COERCE_FLOAT(LayoutDim::GetY((LayoutDim *)v10));
    LayoutDim::SetAbsDim((LayoutDim *)v10, v6, (int)v7);
    LayoutDim::~LayoutDim((LayoutDim *)v11);
    v8 = *((_DWORD *)this + 103);
    qmemcpy(v11, v10, 12);
    LayoutFrame::SetLayOutSize(v8, (int)v11);
    LayoutDim::~LayoutDim((LayoutDim *)v11);
    LayoutDim::~LayoutDim((LayoutDim *)v10);
  }
}


//======================================================================
// Button::Save(TiXmlElement *)
// address: 0x001CFDAC   size: 0x50 (80 bytes)
//======================================================================
TiXmlElement *__fastcall Button::Save(Button *this, TiXmlElement *a2)
{
  int v3; // r4
  TiXmlElement *v4; // r5
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0

  v3 = 0;
  v4 = Frame::Save(this, a2);
  do
  {
    v5 = *(_DWORD *)((char *)this + v3 + 412);
    if ( v5 != 0 )
    {
      v6 = (*(int (__fastcall **)(int, TiXmlElement *))(*(_DWORD *)v5 + 36))(v5, v4);
      TiXmlString::operator=((TiXmlString *)(v6 + 32), "NormalTexture");
    }
    v3 += 4;
  }
  while ( v3 != 20 );
  v7 = *((_DWORD *)this + 110);
  if ( v7 != 0 )
  {
    v8 = (*(int (__fastcall **)(int, TiXmlElement *))(*(_DWORD *)v7 + 36))(v7, v4);
    TiXmlString::operator=((TiXmlString *)(v8 + 32), "FontString");
  }
  return v4;
}

