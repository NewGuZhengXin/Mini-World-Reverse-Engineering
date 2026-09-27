// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Texture

//======================================================================
// Texture::GetTypeName(void)
// address: 0x001CAD3C   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall Texture::GetTypeName(Texture *this)
{
  return "Texture";
}


//======================================================================
// Texture::~Texture()
// address: 0x001CAD48   size: 0x4A (74 bytes)
//======================================================================
// Alternative name is '_ZN7TextureD1Ev'
void __fastcall Texture::~Texture(Texture *this)
{
  *(_DWORD *)this = &off_4595E0;
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)g_pDisplay + 92))(g_pDisplay, *((_DWORD *)this + 57));
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)g_pDisplay + 92))(g_pDisplay, *((_DWORD *)this + 58));
  sub_3BDF80((char *)this + 244);
  sub_3BDF80((char *)this + 240);
  LayoutFrame::~LayoutFrame(this);
}


//======================================================================
// Texture::~Texture()
// address: 0x001CAD9C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Texture::~Texture(Texture *this)
{
  Texture::~Texture(this);
  operator delete(this);
}


//======================================================================
// Texture::Texture(void)
// address: 0x001CADD4   size: 0x114 (276 bytes)
//======================================================================
// Alternative name is '_ZN7TextureC2Ev'
void __fastcall Texture::Texture(Texture *this)
{
  LayoutFrame::LayoutFrame(this);
  *(_DWORD *)this = &off_4595E0;
  *((_DWORD *)this + 60) = &byte_55FB88;
  *((_DWORD *)this + 61) = &byte_55FB88;
  TextureUV::TextureUV((Texture *)((char *)this + 348));
  TextureUV::TextureUV((Texture *)((char *)this + 368));
  TextureUV::TextureUV((Texture *)((char *)this + 388));
  TextureUV::TextureUV((Texture *)((char *)this + 408));
  TextureUV::TextureUV((Texture *)((char *)this + 428));
  TextureUV::TextureUV((Texture *)((char *)this + 448));
  TextureUV::TextureUV((Texture *)((char *)this + 468));
  TextureUV::TextureUV((Texture *)((char *)this + 488));
  TextureUV::TextureUV((Texture *)((char *)this + 508));
  *((_DWORD *)this + 57) = 0;
  *((_DWORD *)this + 58) = 0;
  *((_BYTE *)this + 310) = 0;
  *((_BYTE *)this + 309) = 0;
  *((_BYTE *)this + 308) = 0;
  *((_DWORD *)this + 69) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 71) = 0;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 139) = 0;
  *((_DWORD *)this + 138) = 0;
  *((_DWORD *)this + 67) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 59) = 2;
  *((_BYTE *)this + 248) = -1;
  *((_BYTE *)this + 249) = -1;
  *((_BYTE *)this + 250) = -1;
  *((_BYTE *)this + 251) = -1;
  *((_DWORD *)this + 63) = 0;
  *((_DWORD *)this + 132) = 0;
  *((_DWORD *)this + 133) = 0;
  *((_DWORD *)this + 82) = 0;
  *((_DWORD *)this + 83) = 0;
  *((_DWORD *)this + 84) = 0;
  *((_DWORD *)this + 85) = 0;
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 135) = 0;
  *((_BYTE *)this + 544) = 0;
  *((_DWORD *)this + 137) = 0;
  *((_DWORD *)this + 140) = 0;
}


//======================================================================
// Texture::CopyMembers(Texture*)
// address: 0x001CAEF0   size: 0x142 (322 bytes)
//======================================================================
UIObject *__fastcall Texture::CopyMembers(UIObject *this, Texture *a2)
{
  UIObject *v2; // r5
  int v4; // r1
  int v5; // r6

  v2 = this;
  if ( a2 != nullptr )
  {
    LayoutFrame::CopyMembers(this, a2);
    *((_DWORD *)a2 + 57) = UIObject::AssignHUIRes(v2, *((void **)v2 + 57));
    *((_DWORD *)a2 + 59) = *((_DWORD *)v2 + 59);
    sub_3BEBBC((char *)a2 + 240);
    *((_DWORD *)a2 + 62) = *((_DWORD *)v2 + 62);
    *((_DWORD *)a2 + 63) = *((_DWORD *)v2 + 63);
    *((_DWORD *)a2 + 64) = *((_DWORD *)v2 + 64);
    *((_DWORD *)a2 + 65) = *((_DWORD *)v2 + 65);
    *((_DWORD *)a2 + 66) = *((_DWORD *)v2 + 66);
    *((_DWORD *)a2 + 67) = *((_DWORD *)v2 + 67);
    *((_DWORD *)a2 + 76) = *((_DWORD *)v2 + 76);
    *((_BYTE *)a2 + 308) = *((_BYTE *)v2 + 308);
    *((_BYTE *)a2 + 309) = *((_BYTE *)v2 + 309);
    *((_DWORD *)a2 + 138) = *((_DWORD *)v2 + 138);
    *((_DWORD *)a2 + 68) = *((_DWORD *)v2 + 68);
    *((_DWORD *)a2 + 69) = *((_DWORD *)v2 + 69);
    *((_DWORD *)a2 + 70) = *((_DWORD *)v2 + 70);
    *((_DWORD *)a2 + 71) = *((_DWORD *)v2 + 71);
    *((_DWORD *)a2 + 139) = *((_DWORD *)v2 + 139);
    *((_DWORD *)a2 + 82) = *((_DWORD *)v2 + 82);
    v4 = *((_DWORD *)v2 + 84);
    v5 = *((_DWORD *)v2 + 85);
    *((_DWORD *)a2 + 83) = *((_DWORD *)v2 + 83);
    *((_DWORD *)a2 + 84) = v4;
    *((_DWORD *)a2 + 85) = v5;
    *((_DWORD *)a2 + 86) = *((_DWORD *)v2 + 86);
    TextureUV::set((_DWORD *)a2 + 87, (UIObject *)((char *)v2 + 348));
    TextureUV::set((_DWORD *)a2 + 92, (UIObject *)((char *)v2 + 368));
    TextureUV::set((_DWORD *)a2 + 97, (UIObject *)((char *)v2 + 388));
    TextureUV::set((_DWORD *)a2 + 102, (UIObject *)((char *)v2 + 408));
    TextureUV::set((_DWORD *)a2 + 107, (UIObject *)((char *)v2 + 428));
    TextureUV::set((_DWORD *)a2 + 112, (UIObject *)((char *)v2 + 448));
    TextureUV::set((_DWORD *)a2 + 117, (UIObject *)((char *)v2 + 468));
    TextureUV::set((_DWORD *)a2 + 122, (UIObject *)((char *)v2 + 488));
    TextureUV::set((_DWORD *)a2 + 127, (UIObject *)((char *)v2 + 508));
    *((_DWORD *)a2 + 132) = *((_DWORD *)v2 + 132);
    *((_DWORD *)a2 + 133) = *((_DWORD *)v2 + 133);
    this = *((UIObject **)v2 + 134);
    *((_DWORD *)a2 + 134) = this;
    *((_DWORD *)a2 + 135) = *((_DWORD *)v2 + 135);
    *((_BYTE *)a2 + 544) = *((_BYTE *)v2 + 544);
    *((_DWORD *)a2 + 137) = *((_DWORD *)v2 + 137);
  }
  return this;
}


//======================================================================
// Texture::CreateClone(void)
// address: 0x001CB032   size: 0x1E (30 bytes)
//======================================================================
Texture *__fastcall Texture::CreateClone(Texture *this)
{
  Texture *v2; // r4

  v2 = (Texture *)operator new(0x238u);
  Texture::Texture(v2);
  Texture::CopyMembers(this, v2);
  return v2;
}


//======================================================================
// Texture::SetBlendMode(Ogre::BlendMode)
// address: 0x001CB050   size: 0x6 (6 bytes)
//======================================================================
_DWORD *__fastcall Texture::SetBlendMode(int a1, int a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)(a1 + 236);
  *result = a2;
  return result;
}


//======================================================================
// Texture::SetUVAnimation(int,bool)
// address: 0x001CB056   size: 0x26 (38 bytes)
//======================================================================
int __fastcall Texture::SetUVAnimation(int this, int a2, bool a3)
{
  *(_BYTE *)(this + 308) = 1;
  *(_BYTE *)(this + 57) = 1;
  *(_BYTE *)(this + 309) = a3;
  *(_DWORD *)(this + 552) = a2;
  *(_DWORD *)(this + 556) = 0;
  return this;
}


//======================================================================
// Texture::SetTextureHuires(void *)
// address: 0x001CB07C   size: 0x3E (62 bytes)
//======================================================================
int __fastcall Texture::SetTextureHuires(Texture *this, void *a2)
{
  if ( a2 != nullptr )
    (*(void (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 88))(g_pDisplay);
  if ( *((_DWORD *)this + 57) != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 92))(g_pDisplay);
  *((_DWORD *)this + 57) = a2;
  return sub_3BE508((int)this + 240, (char *)&unk_3FB8EA);
}


//======================================================================
// Texture::GetTextureHuires(void)
// address: 0x001CB0C8   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Texture::GetTextureHuires(Texture *this)
{
  return *((_DWORD *)this + 57);
}


//======================================================================
// Texture::SetColor(int,int,int)
// address: 0x001CB0CE   size: 0x18 (24 bytes)
//======================================================================
_BYTE *__fastcall Texture::SetColor(Texture *this, char a2, char a3, char a4)
{
  _BYTE *result; // r0

  *((_BYTE *)this + 248) = a4;
  *((_BYTE *)this + 249) = a3;
  *((_BYTE *)this + 250) = a2;
  result = (char *)this + 251;
  *result = -1;
  return result;
}


//======================================================================
// Texture::SetGray(bool)
// address: 0x001CB0E6   size: 0x18 (24 bytes)
//======================================================================
unsigned int *__fastcall Texture::SetGray(Texture *this, int a2)
{
  unsigned int *result; // r0
  unsigned int v3; // r2
  unsigned int v4; // r3

  result = (unsigned int *)((char *)this + 252);
  v3 = *result;
  if ( a2 != 0 )
    v4 = v3 | 1;
  else
    v4 = v3 & 0xFFFFFFFE;
  *result = v4;
  return result;
}


//======================================================================
// Texture::IsGray(void)
// address: 0x001CB0FE   size: 0xA (10 bytes)
//======================================================================
int __fastcall Texture::IsGray(Texture *this)
{
  return *((_DWORD *)this + 63) & 1;
}


//======================================================================
// Texture::SetOverlay(bool)
// address: 0x001CB108   size: 0x18 (24 bytes)
//======================================================================
unsigned int *__fastcall Texture::SetOverlay(Texture *this, int a2)
{
  unsigned int *result; // r0
  unsigned int v3; // r2
  unsigned int v4; // r3

  result = (unsigned int *)((char *)this + 252);
  v3 = *result;
  if ( a2 != 0 )
    v4 = v3 | 8;
  else
    v4 = v3 & 0xFFFFFFF7;
  *result = v4;
  return result;
}


//======================================================================
// Texture::SetTexture(char const*)
// address: 0x001CB120   size: 0xFC (252 bytes)
//======================================================================
int __fastcall Texture::SetTexture(Texture *this, char *a2)
{
  int *v4; // r4
  int result; // r0
  char *v6; // r5
  char *v7; // r4
  int v8; // [sp+Ch] [bp-8h]

  if ( a2 != nullptr && *a2 != 0 )
  {
    v6 = (char *)this + 240;
    result = sub_3BDD5C((int)this + 240, a2);
    if ( result != 0 )
    {
      sub_3BE508((int)v6, a2);
      v8 = *((_DWORD *)this + 57);
      *((_DWORD *)this + 57) = (*(int (__fastcall **)(int, char *, int, char *, char *, int))(*(_DWORD *)g_pDisplay + 72))(
                                 g_pDisplay,
                                 a2,
                                 2,
                                 (char *)this + 256,
                                 (char *)this + 260,
                                 1);
      v7 = (char *)this + 252;
      (*(void (__fastcall **)(int, int))(*(_DWORD *)g_pDisplay + 92))(g_pDisplay, v8);
      if ( *((float *)v7 + 9) != 0.0
        || *((float *)v7 + 10) != 0.0
        || *((float *)v7 + 11) != 0.0
        || (result = *((float *)v7 + 12) == 0.0, *((float *)v7 + 12) != 0.0) )
      {
        *((_DWORD *)v7 + 5) = FloatToInt(*((float *)v7 + 9) * (float)*((int *)v7 + 1));
        *((_DWORD *)v7 + 6) = FloatToInt((float)*((int *)v7 + 2) * *((float *)v7 + 10));
        *((_DWORD *)v7 + 7) = FloatToInt((float)*((int *)v7 + 1) * *((float *)v7 + 11));
        result = FloatToInt((float)*((int *)v7 + 2) * *((float *)v7 + 12));
        *((_DWORD *)v7 + 8) = result;
      }
    }
  }
  else
  {
    v4 = (int *)((char *)this + 228);
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)g_pDisplay + 92))(g_pDisplay, *((_DWORD *)this + 57));
    result = (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 84))(g_pDisplay);
    *v4 = result;
  }
  return result;
}


//======================================================================
// Texture::SetTexture(Ogre::Resource *)
// address: 0x001CB224   size: 0xD2 (210 bytes)
//======================================================================
__int64 __fastcall Texture::SetTexture(__int64 this)
{
  _DWORD *v1; // r6
  int v2; // r7
  int v3; // r4
  __int64 v5; // [sp+0h] [bp-Ch]

  v5 = this;
  v1 = (_DWORD *)(this + 228);
  if ( HIDWORD(this) != 0 )
  {
    v2 = *v1;
    LODWORD(v5) = this + 256;
    HIDWORD(v5) = this + 260;
    v3 = this + 252;
    *v1 = (*(int (__fastcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)g_pDisplay + 76))(
            g_pDisplay,
            *(_DWORD *)(HIDWORD(this) + 8),
            HIDWORD(this),
            2);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)g_pDisplay + 92))(g_pDisplay, v2);
    if ( *(float *)(v3 + 36) != 0.0
      || *(float *)(v3 + 40) != 0.0
      || *(float *)(v3 + 44) != 0.0
      || *(float *)(v3 + 48) != 0.0 )
    {
      *(_DWORD *)(v3 + 20) = FloatToInt(*(float *)(v3 + 36) * (float)*(int *)(v3 + 4));
      *(_DWORD *)(v3 + 24) = FloatToInt((float)*(int *)(v3 + 8) * *(float *)(v3 + 40));
      *(_DWORD *)(v3 + 28) = FloatToInt((float)*(int *)(v3 + 4) * *(float *)(v3 + 44));
      *(_DWORD *)(v3 + 32) = FloatToInt((float)*(int *)(v3 + 8) * *(float *)(v3 + 48));
    }
  }
  else
  {
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)g_pDisplay + 92))(g_pDisplay, *v1);
    *v1 = (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 84))(g_pDisplay);
  }
  return v5;
}


//======================================================================
// Texture::GetTexture(void)
// address: 0x001CB2FC   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Texture::GetTexture(Texture *this)
{
  return *((_DWORD *)this + 60);
}


//======================================================================
// Texture::SetAngle(float)
// address: 0x001CB302   size: 0x6 (6 bytes)
//======================================================================
float *__fastcall Texture::SetAngle(Texture *this, float a2)
{
  float *result; // r0

  result = (float *)((char *)this + 252);
  result[13] = a2;
  return result;
}


//======================================================================
// Texture::GetAngle(void)
// address: 0x001CB308   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Texture::GetAngle(Texture *this)
{
  return *((_DWORD *)this + 76);
}


//======================================================================
// Texture::SetTexUV(int,int,int,int)
// address: 0x001CB30E   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall Texture::SetTexUV(Texture *this, int a2, int a3, int a4, int a5)
{
  _DWORD *result; // r0

  result = (_DWORD *)((char *)this + 252);
  result[7] = a4;
  result[5] = a2;
  result[6] = a3;
  result[8] = a5;
  result[12] = 0;
  result[11] = 0;
  result[10] = 0;
  result[9] = 0;
  return result;
}


//======================================================================
// Texture::SetTexRelUV(float,float,float,float)
// address: 0x001CB326   size: 0x66 (102 bytes)
//======================================================================
int __fastcall Texture::SetTexRelUV(Texture *this, float a2, float a3, float a4, float a5)
{
  int *v5; // r4
  int result; // r0

  v5 = (int *)((char *)this + 252);
  *((float *)this + 73) = a3;
  *((float *)this + 74) = a4;
  *((float *)this + 75) = a4;
  *((float *)this + 72) = a2;
  *((_DWORD *)this + 68) = FloatToInt(a2 * (float)*((int *)this + 64));
  v5[6] = FloatToInt(a3 * (float)v5[2]);
  v5[7] = FloatToInt(a4 * (float)v5[1]);
  result = FloatToInt(a4 * (float)v5[2]);
  v5[8] = result;
  return result;
}


//======================================================================
// Texture::SetTexRelUV(float,float)
// address: 0x001CB38C   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Texture::SetTexRelUV(Texture *this, float a2, float a3)
{
  int v4; // [sp+0h] [bp-Ch]

  Texture::SetTexRelUV(this, 0.0, 0.0, a2, a3);
  return v4;
}


//======================================================================
// Texture::getRelWidth(void)
// address: 0x001CB39E   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Texture::getRelWidth(Texture *this)
{
  return *((_DWORD *)this + 64);
}


//======================================================================
// Texture::getRelHeight(void)
// address: 0x001CB3A4   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Texture::getRelHeight(Texture *this)
{
  return *((_DWORD *)this + 65);
}


//======================================================================
// Texture::SetBlendAlpha(float)
// address: 0x001CB3AC   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Texture::SetBlendAlpha(Texture *this, float a2)
{
  int result; // r0

  result = FloatToInt(a2 * 255.0);
  *((_BYTE *)this + 251) = result;
  return result;
}


//======================================================================
// Texture::GetBlendAlpha(void)
// address: 0x001CB3C8   size: 0x12 (18 bytes)
//======================================================================
float __fastcall Texture::GetBlendAlpha(Texture *this)
{
  return (float)*((unsigned __int8 *)this + 251) / 255.0;
}


//======================================================================
// Texture::UpdateSelf(float)
// address: 0x001CB3E0   size: 0x1E8 (488 bytes)
//======================================================================
__int64 __fastcall Texture::UpdateSelf(Texture *this, float a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r7
  int v7; // r0
  float v8; // r5
  float v9; // r5
  int RelWidth; // r7
  int v11; // r7
  float v12; // r0
  float v13; // r1
  int v14; // r7
  double v15; // r6
  float v16; // r0
  __int64 v18; // [sp+0h] [bp-Ch]
  int v19; // [sp+0h] [bp-Ch]
  int v20; // [sp+0h] [bp-Ch]

  LODWORD(v18) = this;
  HIDWORD(v18) = (char *)this + 57;
  if ( *((_BYTE *)this + 57) != 0 )
  {
    (*(void (__fastcall **)(Texture *))(*(_DWORD *)this + 52))(this);
    if ( *((_BYTE *)this + 308) != 0 && *((_DWORD *)this + 57) != 0 )
    {
      v4 = (int)(float)(a2 * 1000.0) + *((_DWORD *)this + 139);
      *((_DWORD *)this + 139) = v4;
      v19 = *((_DWORD *)this + 138);
      v5 = *((_DWORD *)this + 66) * v19 * *((_DWORD *)this + 67);
      if ( v4 > v5 )
      {
        *((_DWORD *)this + 139) = v4 % v5;
        if ( *((_BYTE *)this + 309) == 0 )
        {
          *(_BYTE *)HIDWORD(v18) = 0;
          *((_BYTE *)this + 308) = 0;
        }
      }
      v6 = *((_DWORD *)this + 139) / v19;
      v7 = FloatToInt((float)*((int *)this + 64));
      v20 = *((_DWORD *)this + 67);
      HIDWORD(v18) = v7 / v20;
      *((_DWORD *)this + 68) = v6 % v20 * (v7 / v20);
      LODWORD(v18) = FloatToInt((float)*((int *)this + 65)) / *((_DWORD *)this + 66);
      *((_DWORD *)this + 69) = v6 / *((_DWORD *)this + 67) * v18;
      *((_DWORD *)this + 70) = FloatToInt((float)*((int *)this + 64)) / *((_DWORD *)this + 67);
      *((_DWORD *)this + 71) = FloatToInt((float)*((int *)this + 65)) / *((_DWORD *)this + 66);
    }
    if ( *((_BYTE *)this + 544) != 0 && *((_DWORD *)this + 57) != 0 )
    {
      v8 = a2 * *((float *)this + 137);
      v9 = Texture::GetBlendAlpha(this) - v8;
      if ( v9 <= 0.0 )
      {
        *((_BYTE *)this + 310) = 0;
        v9 = 1.0;
      }
      Texture::SetBlendAlpha(this, v9);
      if ( *((_BYTE *)this + 310) != 0 )
      {
        RelWidth = Texture::getRelWidth(this);
        LODWORD(v18) = Texture::getRelHeight(this);
        v11 = (int)(float)((float)((float)RelWidth * v9) * 3.0);
        v12 = (float)(int)v18 * v9;
        v13 = 3.0;
      }
      else
      {
        v14 = Texture::getRelWidth(this);
        LODWORD(v18) = Texture::getRelHeight(this);
        v11 = (int)(float)((float)v14 * v9);
        v12 = (float)(int)v18;
        v13 = v9;
      }
      LayoutFrame::SetSize(this, v11, (int)(float)(v12 * v13));
    }
    v15 = (float)((float)(a2 * 0.3) + *((float *)this + 140));
    v16 = v15 - j_floor(v15);
    *((float *)this + 140) = v16;
  }
  return v18;
}


//======================================================================
// Texture::setMask(char const*)
// address: 0x001CB5D4   size: 0x58 (88 bytes)
//======================================================================
int __fastcall Texture::setMask(int this, char *a2)
{
  int v2; // r6
  int v4; // r4
  int *v5; // r6
  int v6; // r7
  _BYTE v7[4]; // [sp+8h] [bp-Ch] BYREF
  _BYTE v8[8]; // [sp+Ch] [bp-8h] BYREF

  v2 = this;
  if ( a2 != nullptr && *a2 != 0 )
  {
    v4 = this + 244;
    this = sub_3BDD5C(this + 244, a2);
    if ( this != 0 )
    {
      sub_3BE508(v4, a2);
      v5 = (int *)(v2 + 232);
      v6 = *v5;
      *v5 = (*(int (__fastcall **)(int, char *, int, _BYTE *, _BYTE *, int))(*(_DWORD *)g_pDisplay + 72))(
              g_pDisplay,
              a2,
              2,
              v7,
              v8,
              1);
      return (*(int (__fastcall **)(int, int))(*(_DWORD *)g_pDisplay + 92))(g_pDisplay, v6);
    }
  }
  return this;
}


//======================================================================
// Texture::setMask(Ogre::Resource *)
// address: 0x001CB630   size: 0x36 (54 bytes)
//======================================================================
int __fastcall Texture::setMask(Texture *this, Ogre::Resource *a2)
{
  int v2; // r6
  _BYTE v4[4]; // [sp+8h] [bp-Ch] BYREF
  _BYTE v5[8]; // [sp+Ch] [bp-8h] BYREF

  v2 = *((_DWORD *)this + 58);
  *((_DWORD *)this + 58) = (*(int (__fastcall **)(int, _DWORD, Ogre::Resource *, int, _BYTE *, _BYTE *))(*(_DWORD *)g_pDisplay + 76))(
                             g_pDisplay,
                             *((_DWORD *)a2 + 2),
                             a2,
                             2,
                             v4,
                             v5);
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)g_pDisplay + 92))(g_pDisplay, v2);
}


//======================================================================
// Texture::AddDrawRect(float,float,float,float,unsigned int,TextureUV)
// address: 0x001CB66C   size: 0x2D6 (726 bytes)
//======================================================================
int __fastcall Texture::AddDrawRect(
        int a1,
        float a2,
        float a3,
        float a4,
        float a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int result; // r0
  int v13; // r5
  int v14; // r4
  int v15; // r4
  int v16; // r4
  int i; // [sp+28h] [bp-4Ch]
  int m; // [sp+28h] [bp-4Ch]
  int k; // [sp+28h] [bp-4Ch]
  int j; // [sp+34h] [bp-40h]
  float v23; // [sp+40h] [bp-34h]
  float v24; // [sp+48h] [bp-2Ch]
  int v25; // [sp+4Ch] [bp-28h]
  int v26; // [sp+50h] [bp-24h]
  int v27; // [sp+54h] [bp-20h]
  float v28; // [sp+58h] [bp-1Ch]
  float v29; // [sp+5Ch] [bp-18h]
  int v30; // [sp+60h] [bp-14h]

  if ( a11 != 0 )
    return (*(int (__fastcall **)(int, float, float, float, float, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
             g_pDisplay,
             COERCE_FLOAT(LODWORD(a2)),
             COERCE_FLOAT(LODWORD(a3)),
             COERCE_FLOAT(LODWORD(a4)),
             COERCE_FLOAT(LODWORD(a5)),
             a6,
             a7,
             a8,
             a9,
             a10,
             *(_DWORD *)(a1 + 540),
             0);
  v23 = (float)a9;
  if ( a4 <= (float)a9 && a5 <= (float)a10 )
    return (*(int (__fastcall **)(int, float, float, float, float, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
             g_pDisplay,
             COERCE_FLOAT(LODWORD(a2)),
             COERCE_FLOAT(LODWORD(a3)),
             COERCE_FLOAT(LODWORD(a4)),
             COERCE_FLOAT(LODWORD(a5)),
             a6,
             a7,
             a8,
             a9,
             a10,
             *(_DWORD *)(a1 + 540),
             0);
  v27 = (int)(float)(a4 / v23);
  v28 = (float)(a9 * v27);
  v26 = FloatToInt(a4 - v28);
  v24 = (float)a10;
  v25 = (int)(float)(a5 / (float)a10);
  v29 = (float)(a10 * v25);
  result = FloatToInt(a5 - v29);
  v13 = 0;
  v30 = result;
  for ( i = 0; i < v27; ++i )
  {
    v14 = 0;
    for ( j = 0; j < v25; ++j )
    {
      result = (*(int (__fastcall **)(int, _DWORD, _DWORD, float, float, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
                 g_pDisplay,
                 a2 + (float)v13,
                 a3 + (float)v14,
                 COERCE_FLOAT(LODWORD(v23)),
                 COERCE_FLOAT(LODWORD(v24)),
                 a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 *(_DWORD *)(a1 + 540),
                 0);
      v14 += a10;
    }
    v13 += a9;
  }
  if ( v26 > 0 )
  {
    v16 = 0;
    for ( k = 0; k < v25; ++k )
    {
      result = (*(int (__fastcall **)(int, _DWORD, _DWORD, float, float, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
                 g_pDisplay,
                 a2 + v28,
                 a3 + (float)v16,
                 (float)v26,
                 COERCE_FLOAT(LODWORD(v24)),
                 a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 *(_DWORD *)(a1 + 540),
                 0);
      v16 += a10;
    }
  }
  if ( v30 > 0 )
  {
    v15 = 0;
    for ( m = 0; ; ++m )
    {
      v15 += a9;
      if ( m >= v27 )
        break;
      result = (*(int (__fastcall **)(int, _DWORD, _DWORD, float, float, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
                 g_pDisplay,
                 a2 + (float)(v15 - a9),
                 a3 + v29,
                 COERCE_FLOAT(LODWORD(v23)),
                 (float)v30,
                 a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 *(_DWORD *)(a1 + 540),
                 0);
    }
    if ( v26 > 0 )
      return (*(int (__fastcall **)(int, _DWORD, _DWORD, float, float, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
               g_pDisplay,
               a2 + v28,
               a3 + v29,
               (float)v26,
               (float)v30,
               a6,
               a7,
               a8,
               a9,
               a10,
               *(_DWORD *)(a1 + 540),
               0);
  }
  return result;
}


//======================================================================
// Texture::DrawAsBackDrop(void)
// address: 0x001CB94C   size: 0x33C (828 bytes)
//======================================================================
int __fastcall Texture::DrawAsBackDrop(Texture *this)
{
  int *v1; // r5
  int v3; // r1
  int v4; // r2
  int v5; // r7
  int v6; // r0
  float v7; // r0
  int v8; // r7
  int v9; // r2
  float v10; // r12
  int *v11; // r2
  int *v12; // r1
  int v13; // r3
  int v14; // r7
  int v15; // r7
  int v16; // r0
  float v17; // r12
  int *v18; // r3
  int *v19; // r1
  int v20; // r2
  int v21; // r7
  int v22; // r7
  int v23; // r7
  int v24; // r1
  int *v25; // r3
  int v26; // r1
  int *v27; // r2
  int v28; // r7
  int v29; // r7
  int v30; // r7
  int v31; // r1
  int v32; // r2
  int *v33; // r3
  int v34; // r1
  int *v35; // r2
  int v36; // r7
  int v37; // r7
  int v38; // r7
  int v39; // r0
  int v40; // r2
  int *v41; // r3
  int v42; // r1
  int *v43; // r2
  int v44; // r7
  int v45; // r7
  int v46; // r0
  float v47; // r12
  int *v48; // r3
  int *v49; // r1
  int v50; // r2
  int v51; // r7
  int v52; // r7
  int v53; // r7
  int v54; // r2
  float v55; // r12
  int *v56; // r2
  int *v57; // r1
  int v58; // r3
  int v59; // r7
  int v60; // r7
  int v61; // r0
  float v62; // r5
  int *v63; // r3
  float v64; // r2
  int *v65; // r1
  int v66; // r6
  int v67; // r7
  int v68; // r6
  float v70; // [sp+0h] [bp-64h]
  float v71; // [sp+0h] [bp-64h]
  float v72; // [sp+0h] [bp-64h]
  float v73; // [sp+0h] [bp-64h]
  float v74; // [sp+0h] [bp-64h]
  float v75; // [sp+0h] [bp-64h]
  float v76; // [sp+0h] [bp-64h]
  float v77; // [sp+0h] [bp-64h]
  int v78; // [sp+4h] [bp-60h]
  int v79; // [sp+4h] [bp-60h]
  int v80; // [sp+4h] [bp-60h]
  int v81; // [sp+4h] [bp-60h]
  int v82; // [sp+4h] [bp-60h]
  int v83; // [sp+4h] [bp-60h]
  int v84; // [sp+4h] [bp-60h]
  int v85; // [sp+4h] [bp-60h]
  int v86; // [sp+4h] [bp-60h]
  int v87[7]; // [sp+8h] [bp-5Ch] BYREF
  float v88; // [sp+24h] [bp-40h]
  float v89; // [sp+28h] [bp-3Ch]
  int *v90; // [sp+2Ch] [bp-38h]
  int *v91; // [sp+30h] [bp-34h]
  float v92; // [sp+34h] [bp-30h]
  float v93; // [sp+38h] [bp-2Ch]
  float v94; // [sp+3Ch] [bp-28h]
  float v95; // [sp+40h] [bp-24h]
  int *v96; // [sp+44h] [bp-20h]
  int v97; // [sp+4Ch] [bp-18h] BYREF
  int v98; // [sp+50h] [bp-14h]
  int v99; // [sp+54h] [bp-10h]
  int v100; // [sp+58h] [bp-Ch]
  int v101; // [sp+5Ch] [bp-8h]

  v1 = (int *)((char *)this + 252);
  v93 = COERCE_FLOAT(FloatToInt((float)*((int *)this + 82) * (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr)));
  v3 = *((_DWORD *)this + 57);
  v4 = *v1;
  v96 = &g_pDisplay;
  (*(void (__fastcall **)(int, int, _DWORD, _DWORD, int))(*(_DWORD *)g_pDisplay + 96))(g_pDisplay, v3, 0, 0, v4);
  v90 = &v97;
  TextureUV::TextureUV((TextureUV *)&v97);
  v5 = v1[5];
  v6 = v1[6];
  v99 = v1[19];
  v100 = v99;
  v98 = v6;
  v97 = v5 + 4 * v99;
  v88 = (float)SLODWORD(v93);
  v89 = (float)*((int *)this + 15);
  v7 = (float)*((int *)this + 16);
  v78 = *((_DWORD *)this + 62);
  v91 = v87;
  Texture::AddDrawRect((int)this, v89, v7, v88, v88, v78, v97, v98, v99, v99, v101);
  v8 = *((_DWORD *)this + 15);
  v97 = v1[5] + 2 * v1[19];
  v93 = (float)(2 * LODWORD(v93));
  v92 = (float)v8 + v88;
  v9 = *((_DWORD *)this + 17);
  v94 = (float)*((int *)this + 16);
  v10 = (float)(v9 - v8) - v93;
  v11 = v91;
  v70 = v88;
  v79 = *((_DWORD *)this + 62);
  v13 = v90[1];
  v14 = v90[2];
  v12 = v90 + 3;
  *v91 = *v90;
  v11[1] = v13;
  v11[2] = v14;
  v11 += 3;
  v15 = v12[1];
  *v11 = *v12;
  v11[1] = v15;
  Texture::AddDrawRect((int)this, v92, v94, v10, v70, v79, v87[0], v87[1], v87[2], v87[3], v87[4]);
  v16 = *((_DWORD *)this + 17);
  v97 = v1[5] + 5 * v1[19];
  v89 = (float)v16 - v88;
  v17 = (float)*((int *)this + 16);
  v18 = v91;
  v71 = v88;
  v80 = *((_DWORD *)this + 62);
  v20 = v90[1];
  v21 = v90[2];
  v19 = v90 + 3;
  *v91 = *v90;
  v18[1] = v20;
  v18[2] = v21;
  v18 += 3;
  v22 = v19[1];
  *v18 = *v19;
  v18[1] = v22;
  Texture::AddDrawRect((int)this, v89, v17, v88, v71, v80, v87[0], v87[1], v87[2], v87[3], v87[4]);
  v23 = *((_DWORD *)this + 16);
  v97 = v1[5];
  v92 = (float)*((int *)this + 15);
  v24 = *((_DWORD *)this + 18);
  v94 = (float)v23 + v88;
  v72 = (float)(v24 - v23) - v93;
  v25 = v91;
  v81 = *((_DWORD *)this + 62);
  v26 = v90[1];
  v28 = v90[2];
  v27 = v90 + 3;
  *v91 = *v90;
  v25[1] = v26;
  v25[2] = v28;
  v25 += 3;
  v29 = v27[1];
  *v25 = *v27;
  v25[1] = v29;
  Texture::AddDrawRect((int)this, v92, v94, v88, v72, v81, v87[0], v87[1], v87[2], v87[3], v87[4]);
  v30 = *((_DWORD *)this + 15);
  v97 = v1[5] + 8 * v1[19];
  v92 = *((float *)this + 16);
  v94 = (float)v30 + v88;
  v31 = *((_DWORD *)this + 17);
  v95 = (float)SLODWORD(v92) + v88;
  v32 = *((_DWORD *)this + 18);
  v89 = (float)(v31 - v30) - v93;
  v73 = (float)(v32 - LODWORD(v92)) - v93;
  v33 = v91;
  v82 = *((_DWORD *)this + 62);
  v34 = v90[1];
  v36 = v90[2];
  v35 = v90 + 3;
  *v91 = *v90;
  v33[1] = v34;
  v33[2] = v36;
  v33 += 3;
  v37 = v35[1];
  *v33 = *v35;
  v33[1] = v37;
  Texture::AddDrawRect((int)this, v94, v95, v89, v73, v82, v87[0], v87[1], v87[2], v87[3], v87[4]);
  v38 = *((_DWORD *)this + 16);
  v39 = *((_DWORD *)this + 17);
  v97 = v1[5] + v1[19];
  v92 = (float)v39 - v88;
  v40 = *((_DWORD *)this + 18);
  v94 = (float)v38 + v88;
  v74 = (float)(v40 - v38) - v93;
  v83 = *((_DWORD *)this + 62);
  v41 = v91;
  v42 = v90[1];
  v44 = v90[2];
  v43 = v90 + 3;
  *v91 = *v90;
  v41[1] = v42;
  v41[2] = v44;
  v41 += 3;
  v45 = v43[1];
  *v41 = *v43;
  v41[1] = v45;
  Texture::AddDrawRect((int)this, v92, v94, v88, v74, v83, v87[0], v87[1], v87[2], v87[3], v87[4]);
  v46 = *((_DWORD *)this + 15);
  v97 = v1[5] + 6 * v1[19];
  v89 = (float)v46;
  v47 = (float)*((int *)this + 18) - v88;
  v48 = v91;
  v75 = v88;
  v84 = *((_DWORD *)this + 62);
  v50 = v90[1];
  v51 = v90[2];
  v49 = v90 + 3;
  *v91 = *v90;
  v48[1] = v50;
  v48[2] = v51;
  v48 += 3;
  v52 = v49[1];
  *v48 = *v49;
  v48[1] = v52;
  Texture::AddDrawRect((int)this, v89, v47, v88, v75, v84, v87[0], v87[1], v87[2], v87[3], v87[4]);
  v53 = *((_DWORD *)this + 15);
  v97 = v1[5] + 3 * v1[19];
  v92 = (float)v53 + v88;
  v54 = *((_DWORD *)this + 17);
  v94 = (float)*((int *)this + 18) - v88;
  v55 = (float)(v54 - v53) - v93;
  v56 = v91;
  v76 = v88;
  v85 = *((_DWORD *)this + 62);
  v58 = v90[1];
  v59 = v90[2];
  v57 = v90 + 3;
  *v91 = *v90;
  v56[1] = v58;
  v56[2] = v59;
  v56 += 3;
  v60 = v57[1];
  *v56 = *v57;
  v56[1] = v60;
  Texture::AddDrawRect((int)this, v92, v94, v55, v76, v85, v87[0], v87[1], v87[2], v87[3], v87[4]);
  v61 = *((_DWORD *)this + 17);
  v97 = v1[5] + 7 * v1[19];
  v62 = (float)v61 - v88;
  v63 = v91;
  v77 = v88;
  v64 = (float)*((int *)this + 18) - v88;
  v86 = *((_DWORD *)this + 62);
  v66 = v90[1];
  v67 = v90[2];
  v65 = v90 + 3;
  *v91 = *v90;
  v63[1] = v66;
  v63[2] = v67;
  v63 += 3;
  v68 = v65[1];
  *v63 = *v65;
  v63[1] = v68;
  Texture::AddDrawRect((int)this, v62, v64, v88, v77, v86, v87[0], v87[1], v87[2], v87[3], v87[4]);
  return (*(int (__fastcall **)(int))(*(_DWORD *)*v96 + 100))(*v96);
}


//======================================================================
// Texture::DrawAsNineSquare(void)
// address: 0x001CBC90   size: 0x396 (918 bytes)
//======================================================================
int __fastcall Texture::DrawAsNineSquare(Texture *this)
{
  int v1; // r5
  int v3; // r1
  int v4; // r2
  int v5; // r0
  int v6; // r6
  int v7; // r4
  float v8; // r4
  int v9; // r6
  float v10; // r4
  float v11; // r1
  float v12; // r2
  int v13; // r5
  int v14; // r6
  int v15; // r6
  float v16; // r4
  float v17; // r12
  int v18; // r6
  int v19; // r1
  float v20; // r4
  int *v21; // r1
  float v22; // r2
  int v23; // r5
  int v24; // r6
  int v25; // r5
  int v26; // r6
  int v27; // r2
  int v28; // r5
  int v29; // r3
  int v30; // r5
  float v31; // r4
  float v32; // r12
  int v33; // r6
  float v34; // r4
  float v35; // r1
  float v36; // r2
  int v37; // r5
  int v38; // r6
  int v39; // r6
  float v40; // r4
  float v41; // r0
  int v42; // r5
  int v43; // r6
  float v45; // r2
  int v46; // r4
  int v47; // r5
  float v48; // [sp+0h] [bp-44h]
  float v49; // [sp+0h] [bp-44h]
  float v50; // [sp+0h] [bp-44h]
  int v51; // [sp+4h] [bp-40h]
  int v52; // [sp+4h] [bp-40h]
  int v53; // [sp+4h] [bp-40h]
  int v54; // [sp+4h] [bp-40h]
  int v55; // [sp+4h] [bp-40h]
  int v56; // [sp+4h] [bp-40h]
  int v57; // [sp+4h] [bp-40h]
  int v58; // [sp+4h] [bp-40h]
  int v59; // [sp+8h] [bp-3Ch] BYREF
  int v60; // [sp+Ch] [bp-38h]
  int v61; // [sp+10h] [bp-34h]
  int v62; // [sp+14h] [bp-30h]
  int v63; // [sp+18h] [bp-2Ch]
  int *v64; // [sp+20h] [bp-24h]
  float v65; // [sp+24h] [bp-20h]
  float v66; // [sp+28h] [bp-1Ch]
  int v67; // [sp+2Ch] [bp-18h]
  float v68; // [sp+30h] [bp-14h]
  float v69; // [sp+34h] [bp-10h]
  float v70; // [sp+38h] [bp-Ch]
  int *v71; // [sp+3Ch] [bp-8h]

  v1 = *((_DWORD *)this + 132);
  v3 = *((_DWORD *)this + 57);
  v4 = *((_DWORD *)this + 63);
  v67 = *((int *)this + 133);
  (*(void (__fastcall **)(int, int, _DWORD, _DWORD, int))(*(_DWORD *)g_pDisplay + 96))(g_pDisplay, v3, 0, 0, v4);
  v5 = *((_DWORD *)this + 17);
  v65 = *((float *)this + 15);
  v66 = (float)(v5 - LODWORD(v65));
  v71 = &g_pDisplay;
  if ( (float)(v66 - (float)(2 * v1)) <= 0.0 )
    v1 = (v5 - LODWORD(v65)) / 2;
  v6 = *((_DWORD *)this + 16);
  v7 = *((_DWORD *)this + 18) - v6;
  v70 = (float)(2 * v1);
  if ( (float)((float)v7 - v70) <= 0.0 )
    v67 = v7 / 2;
  v66 = (float)v1;
  v68 = (float)v67;
  v8 = (float)SLODWORD(v65);
  v51 = *((_DWORD *)this + 62);
  v65 = COERCE_FLOAT(&v59);
  Texture::AddDrawRect(
    (int)this,
    v8,
    (float)v6,
    (float)v1,
    (float)v67,
    v51,
    *((_DWORD *)this + 87),
    *((_DWORD *)this + 88),
    *((_DWORD *)this + 89),
    *((_DWORD *)this + 90),
    *((_DWORD *)this + 91));
  v9 = *((_DWORD *)this + 15);
  v10 = (float)(*((_DWORD *)this + 17) - v9) - v70;
  if ( v10 > 0.0 )
  {
    v69 = (float)v9 + v66;
    v11 = v65;
    v12 = (float)*((int *)this + 16);
    v48 = v68;
    v52 = *((_DWORD *)this + 62);
    v13 = *((_DWORD *)this + 93);
    v14 = *((_DWORD *)this + 94);
    *(_DWORD *)LODWORD(v65) = *((_DWORD *)this + 92);
    *(_DWORD *)(LODWORD(v11) + 4) = v13;
    *(_DWORD *)(LODWORD(v11) + 8) = v14;
    LODWORD(v11) += 12;
    v15 = *((_DWORD *)this + 96);
    *(_DWORD *)LODWORD(v11) = *((_DWORD *)this + 95);
    *(_DWORD *)(LODWORD(v11) + 4) = v15;
    Texture::AddDrawRect((int)this, v69, v12, v10, v48, v52, v59, v60, v61, v62, v63);
  }
  v16 = (float)*((int *)this + 17) - v66;
  v17 = (float)*((int *)this + 16);
  v53 = *((_DWORD *)this + 62);
  v64 = &v59;
  Texture::AddDrawRect(
    (int)this,
    v16,
    v17,
    v66,
    v68,
    v53,
    *((_DWORD *)this + 97),
    *((_DWORD *)this + 98),
    *((_DWORD *)this + 99),
    *((_DWORD *)this + 100),
    *((_DWORD *)this + 101));
  v18 = *((_DWORD *)this + 16);
  v19 = *((_DWORD *)this + 18);
  v65 = (float)(2 * v67);
  v20 = (float)(v19 - v18) - v65;
  if ( v20 > 0.0 )
  {
    *(float *)&v67 = (float)*((int *)this + 15);
    v21 = v64;
    v54 = *((_DWORD *)this + 62);
    v22 = (float)v18 + v68;
    v23 = *((_DWORD *)this + 103);
    v24 = *((_DWORD *)this + 104);
    *v64 = *((_DWORD *)this + 102);
    v21[1] = v23;
    v21[2] = v24;
    v21 += 3;
    v25 = *((_DWORD *)this + 106);
    *v21 = *((_DWORD *)this + 105);
    v21[1] = v25;
    Texture::AddDrawRect((int)this, *(float *)&v67, v22, v66, v20, v54, v59, v60, v61, v62, v63);
  }
  v26 = *((_DWORD *)this + 15);
  *(float *)&v67 = (float)(*((_DWORD *)this + 17) - v26) - v70;
  if ( *(float *)&v67 > 0.0 )
  {
    v27 = *((_DWORD *)this + 18);
    v28 = *((_DWORD *)this + 16);
    if ( (float)((float)(v27 - v28) - v65) > 0.0 )
    {
      v50 = (float)(v27 - v28) - v65;
      v45 = (float)v28 + v68;
      v58 = *((_DWORD *)this + 62);
      v46 = *((_DWORD *)this + 108);
      v47 = *((_DWORD *)this + 109);
      v59 = *((_DWORD *)this + 107);
      v61 = v47;
      Texture::AddDrawRect(
        (int)this,
        (float)v26 + v66,
        v45,
        *(float *)&v67,
        v50,
        v58,
        v59,
        v46,
        v47,
        *((_DWORD *)this + 110),
        *((_DWORD *)this + 111));
    }
  }
  v29 = *((_DWORD *)this + 18);
  v30 = *((_DWORD *)this + 16);
  if ( (float)((float)(v29 - v30) - v65) > 0.0 )
    Texture::AddDrawRect(
      (int)this,
      (float)*((int *)this + 17) - v66,
      (float)v30 + v68,
      v66,
      (float)(v29 - v30) - v65,
      *((_DWORD *)this + 62),
      *((_DWORD *)this + 112),
      *((_DWORD *)this + 113),
      *((_DWORD *)this + 114),
      *((_DWORD *)this + 115),
      *((_DWORD *)this + 116));
  v31 = (float)*((int *)this + 15);
  v32 = (float)*((int *)this + 18) - v68;
  v55 = *((_DWORD *)this + 62);
  v65 = COERCE_FLOAT(&v59);
  Texture::AddDrawRect(
    (int)this,
    v31,
    v32,
    v66,
    v68,
    v55,
    *((_DWORD *)this + 117),
    *((_DWORD *)this + 118),
    *((_DWORD *)this + 119),
    *((_DWORD *)this + 120),
    *((_DWORD *)this + 121));
  v33 = *((_DWORD *)this + 15);
  v34 = (float)(*((_DWORD *)this + 17) - v33) - v70;
  if ( v34 > 0.0 )
  {
    *(float *)&v67 = (float)v33 + v66;
    v35 = v65;
    v36 = (float)*((int *)this + 18) - v68;
    v49 = v68;
    v56 = *((_DWORD *)this + 62);
    v37 = *((_DWORD *)this + 123);
    v38 = *((_DWORD *)this + 124);
    *(_DWORD *)LODWORD(v65) = *((_DWORD *)this + 122);
    *(_DWORD *)(LODWORD(v35) + 4) = v37;
    *(_DWORD *)(LODWORD(v35) + 8) = v38;
    LODWORD(v35) += 12;
    v39 = *((_DWORD *)this + 126);
    *(_DWORD *)LODWORD(v35) = *((_DWORD *)this + 125);
    *(_DWORD *)(LODWORD(v35) + 4) = v39;
    Texture::AddDrawRect((int)this, *(float *)&v67, v36, v34, v49, v56, v59, v60, v61, v62, v63);
  }
  v40 = (float)*((int *)this + 17) - v66;
  v41 = (float)*((int *)this + 18);
  v57 = *((_DWORD *)this + 62);
  v42 = *((_DWORD *)this + 128);
  v43 = *((_DWORD *)this + 129);
  v59 = *((_DWORD *)this + 127);
  v61 = v43;
  Texture::AddDrawRect(
    (int)this,
    v40,
    v41 - v68,
    v66,
    v68,
    v57,
    v59,
    v42,
    v43,
    *((_DWORD *)this + 130),
    *((_DWORD *)this + 131));
  return (*(int (__fastcall **)(int))(*(_DWORD *)*v71 + 100))(*v71);
}


//======================================================================
// Texture::DrawAsCenter(void)
// address: 0x001CC02C   size: 0x4F0 (1264 bytes)
//======================================================================
int __fastcall Texture::DrawAsCenter(Texture *this)
{
  float v2; // r5
  int result; // r0
  int v4; // r6
  float v5; // r7
  _DWORD *v6; // r5
  int v7; // r0
  int v8; // r7
  int v9; // r6
  float v10; // r7
  int v11; // r5
  int v12; // [sp+10h] [bp-5Ch]
  int v13; // [sp+34h] [bp-38h]
  int v14; // [sp+34h] [bp-38h]
  int v15; // [sp+34h] [bp-38h]
  int v16; // [sp+38h] [bp-34h]
  void (__fastcall *v17)(int, _DWORD, _DWORD, _DWORD, float, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+3Ch] [bp-30h]
  int v18; // [sp+3Ch] [bp-30h]
  int v19; // [sp+3Ch] [bp-30h]
  void (__fastcall *v20)(int, _DWORD, float, _DWORD, float, int, int, int, int, _DWORD, _DWORD, _DWORD); // [sp+3Ch] [bp-30h]
  int v21; // [sp+40h] [bp-2Ch]
  int v22; // [sp+40h] [bp-2Ch]
  int v23; // [sp+44h] [bp-28h]
  int v24; // [sp+48h] [bp-24h]
  float v25; // [sp+50h] [bp-1Ch]
  int v26; // [sp+50h] [bp-1Ch]
  float v27; // [sp+54h] [bp-18h]
  int v28; // [sp+54h] [bp-18h]
  int v29; // [sp+58h] [bp-14h]
  float v30; // [sp+5Ch] [bp-10h]

  v2 = *(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr;
  v16 = FloatToInt((float)*((int *)this + 104) * v2);
  v23 = FloatToInt((float)*((int *)this + 109) * v2);
  result = FloatToInt((float)*((int *)this + 114) * v2);
  v24 = result;
  if ( v23 != 0 )
  {
    v13 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
    (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 96))(
      g_pDisplay,
      *((_DWORD *)this + 57),
      0,
      0,
      *((_DWORD *)this + 63));
    if ( v13 >= v16 )
    {
      v4 = g_pDisplay;
      v17 = *(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, float, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112);
      v25 = (float)*((int *)this + 15);
      v27 = (float)*((int *)this + 16);
      v5 = (float)FloatToInt((float)*((int *)this + 104) * v2);
      v6 = (_DWORD *)((char *)this + 248);
      ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v17)(
        v4,
        LODWORD(v25),
        LODWORD(v27),
        LODWORD(v5),
        (float)(*((_DWORD *)this + 18) - *((_DWORD *)this + 16)),
        *((_DWORD *)this + 62),
        *((_DWORD *)this + 102),
        *((_DWORD *)this + 103),
        *((_DWORD *)this + 104),
        *((_DWORD *)this + 105),
        *((_DWORD *)this + 135),
        0);
      v7 = v13 - v16;
      v14 = *((_DWORD *)this + 16);
      v18 = *((_DWORD *)this + 18);
      if ( v7 >= v24 )
      {
        v8 = *((_DWORD *)this + 111);
        v9 = v7 - v24;
        if ( v8 != 0 )
        {
          (*(void (__fastcall **)(int, _DWORD, float, float, float, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
            g_pDisplay,
            (float)*((int *)this + 15) + (float)v16,
            (float)v14,
            (float)v9,
            (float)(v18 - v14),
            *v6,
            *((_DWORD *)this + 107),
            *((_DWORD *)this + 108),
            *((_DWORD *)this + 109),
            *((_DWORD *)this + 110),
            *((_DWORD *)this + 135),
            0);
        }
        else
        {
          v19 = 0;
          v21 = v9 % v23;
          while ( 1 )
          {
            v15 = *((_DWORD *)this + 16);
            v29 = *((_DWORD *)this + 18);
            if ( v19 >= v9 / v23 )
              break;
            (*(void (__fastcall **)(int, _DWORD, float, float, float, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
              g_pDisplay,
              (float)((float)*((int *)this + 15) + (float)v16) + (float)v8,
              (float)v15,
              (float)v23,
              (float)(v29 - v15),
              *((_DWORD *)this + 62),
              *((_DWORD *)this + 107),
              *((_DWORD *)this + 108),
              *((_DWORD *)this + 109),
              *((_DWORD *)this + 110),
              *((_DWORD *)this + 135),
              0);
            v8 += v23;
            ++v19;
          }
          if ( v21 > 0 )
          {
            v10 = (float)v21;
            v11 = g_pDisplay;
            v20 = *(void (__fastcall **)(int, _DWORD, float, _DWORD, float, int, int, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112);
            v30 = (float)((float)*((int *)this + 15) + (float)v16) + (float)(v23 * (v9 / v23));
            v26 = *((_DWORD *)this + 62);
            v28 = *((_DWORD *)this + 107);
            v22 = *((_DWORD *)this + 108);
            v12 = FloatToInt((float)*((int *)this + 109) * (float)(v10 / (float)v23));
            ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v20)(
              v11,
              LODWORD(v30),
              (float)v15,
              LODWORD(v10),
              (float)(v29 - v15),
              v26,
              v28,
              v22,
              v12,
              *((_DWORD *)this + 110),
              *((_DWORD *)this + 135),
              0);
          }
        }
        (*(void (__fastcall **)(int, _DWORD, float, float, float, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
          g_pDisplay,
          (float)*((int *)this + 17) - (float)v24,
          (float)*((int *)this + 16),
          (float)v24,
          (float)(*((_DWORD *)this + 18) - *((_DWORD *)this + 16)),
          *((_DWORD *)this + 62),
          *((_DWORD *)this + 112),
          *((_DWORD *)this + 113),
          *((_DWORD *)this + 114),
          *((_DWORD *)this + 115),
          *((_DWORD *)this + 135),
          0);
      }
      else
      {
        (*(void (__fastcall **)(int, _DWORD, float, float, float, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
          g_pDisplay,
          (float)*((int *)this + 15) + (float)v16,
          (float)v14,
          (float)v7,
          (float)(v18 - v14),
          *v6,
          *((_DWORD *)this + 112),
          *((_DWORD *)this + 113),
          (int)(float)((float)*((int *)this + 114) * (float)((float)v7 / (float)v24)),
          *((_DWORD *)this + 115),
          *((_DWORD *)this + 135),
          0);
      }
    }
    else
    {
      (*(void (__fastcall **)(int, float, float, float, float, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
        g_pDisplay,
        (float)*((int *)this + 15),
        (float)*((int *)this + 16),
        (float)v13,
        (float)(*((_DWORD *)this + 18) - *((_DWORD *)this + 16)),
        *((_DWORD *)this + 62),
        *((_DWORD *)this + 102),
        *((_DWORD *)this + 103),
        (int)(float)((float)*((int *)this + 104) * (float)((float)v13 / (float)v16)),
        *((_DWORD *)this + 105),
        *((_DWORD *)this + 135),
        0);
    }
    return (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 100))(g_pDisplay);
  }
  return result;
}


//======================================================================
// Texture::DrawAsHeight(void)
// address: 0x001CC520   size: 0x4C2 (1218 bytes)
//======================================================================
int __fastcall Texture::DrawAsHeight(Texture *this)
{
  float v2; // r5
  int v3; // r6
  int result; // r0
  int v5; // r5
  float v6; // r7
  float v7; // r0
  float v8; // r0
  int v9; // r7
  int v10; // r5
  int v11; // [sp+48h] [bp-34h]
  int v12; // [sp+4Ch] [bp-30h]
  int v13; // [sp+4Ch] [bp-30h]
  int v14; // [sp+50h] [bp-2Ch]
  double v15; // [sp+50h] [bp-2Ch]
  int v16; // [sp+58h] [bp-24h]
  float v17; // [sp+58h] [bp-24h]
  float v18; // [sp+58h] [bp-24h]
  int v19; // [sp+5Ch] [bp-20h]
  float i; // [sp+5Ch] [bp-20h]
  int v21; // [sp+68h] [bp-14h]
  int v22; // [sp+6Ch] [bp-10h]
  int v23; // [sp+74h] [bp-8h]

  v2 = *(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr;
  v3 = FloatToInt((float)*((int *)this + 95) * v2);
  v14 = FloatToInt((float)*((int *)this + 110) * v2);
  result = FloatToInt((float)*((int *)this + 125) * v2);
  v21 = result;
  if ( v14 != 0 )
  {
    v16 = *((_DWORD *)this + 18) - *((_DWORD *)this + 16);
    (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 96))(
      g_pDisplay,
      *((_DWORD *)this + 57),
      0,
      0,
      *((_DWORD *)this + 63));
    v19 = *((_DWORD *)this + 17);
    v12 = *((_DWORD *)this + 92);
    v5 = *((_DWORD *)this + 15);
    v22 = *((_DWORD *)this + 93);
    v23 = *((_DWORD *)this + 94);
    if ( v16 <= v3 + v21 )
    {
      v6 = (float)v16;
      v15 = (float)v16;
      v7 = v15 / ((double)v3 + (double)v3);
      v17 = v7;
      (*(void (__fastcall **)(int, float, float, float, _DWORD, _DWORD, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
        g_pDisplay,
        (float)v5,
        (float)*((int *)this + 16),
        (float)(v19 - v5),
        v6 * 0.5,
        *((_DWORD *)this + 62),
        v12,
        v22,
        v23,
        (int)(float)((float)*((int *)this + 95) * v7),
        *((_DWORD *)this + 135),
        0);
      v8 = (float)*((int *)this + 16) + v15 * 0.5;
      (*(void (__fastcall **)(int, float, _DWORD, float, _DWORD, _DWORD, _DWORD, int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
        g_pDisplay,
        (float)*((int *)this + 15),
        LODWORD(v8),
        (float)(*((_DWORD *)this + 17) - *((_DWORD *)this + 15)),
        v6 * 0.5,
        *((_DWORD *)this + 62),
        *((_DWORD *)this + 122),
        (int)(float)((float)*((int *)this + 123) + (float)((float)*((int *)this + 125) * (float)(1.0 - v17))),
        *((_DWORD *)this + 124),
        (int)(float)((float)*((int *)this + 125) * v17),
        *((_DWORD *)this + 135),
        0);
    }
    else
    {
      v11 = v16 - v3 - v21;
      v18 = (float)v3;
      (*(void (__fastcall **)(int, float, float, float, float, _DWORD, int, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
        g_pDisplay,
        (float)v5,
        (float)*((int *)this + 16),
        (float)(v19 - v5),
        (float)v3,
        *((_DWORD *)this + 62),
        v12,
        v22,
        v23,
        *((_DWORD *)this + 95),
        *((_DWORD *)this + 135),
        0);
      if ( *((_DWORD *)this + 111) != 0 )
      {
        (*(void (__fastcall **)(int, float, _DWORD, float, float, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
          g_pDisplay,
          (float)*((int *)this + 15),
          (float)*((int *)this + 16) + v18,
          (float)(*((_DWORD *)this + 17) - *((_DWORD *)this + 15)),
          (float)v11,
          *((_DWORD *)this + 62),
          *((_DWORD *)this + 107),
          *((_DWORD *)this + 108),
          *((_DWORD *)this + 109),
          *((_DWORD *)this + 110),
          *((_DWORD *)this + 135),
          0);
      }
      else
      {
        v9 = 0;
        for ( i = (float)v14; ; v18 = v18 + i )
        {
          v10 = *((_DWORD *)this + 15);
          v13 = *((_DWORD *)this + 17);
          if ( v9 >= v11 / v14 )
            break;
          ++v9;
          (*(void (__fastcall **)(int, float, _DWORD, float, float, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
            g_pDisplay,
            (float)v10,
            (float)*((int *)this + 16) + v18,
            (float)(v13 - v10),
            COERCE_FLOAT(LODWORD(i)),
            *((_DWORD *)this + 62),
            *((_DWORD *)this + 107),
            *((_DWORD *)this + 108),
            *((_DWORD *)this + 109),
            *((_DWORD *)this + 110),
            *((_DWORD *)this + 135),
            0);
        }
        (*(void (__fastcall **)(int, float, _DWORD, float, float, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
          g_pDisplay,
          (float)v10,
          (float)*((int *)this + 16) + v18,
          (float)(v13 - v10),
          (float)(v11 % v14),
          *((_DWORD *)this + 62),
          *((_DWORD *)this + 107),
          *((_DWORD *)this + 108),
          *((_DWORD *)this + 109),
          (int)(float)((float)*((int *)this + 110) * (float)((float)(v11 % v14) / i)),
          *((_DWORD *)this + 135),
          0);
      }
      (*(void (__fastcall **)(int, float, _DWORD, float, float, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)g_pDisplay + 112))(
        g_pDisplay,
        (float)*((int *)this + 15),
        (float)*((int *)this + 18) - (float)v21,
        (float)(*((_DWORD *)this + 17) - *((_DWORD *)this + 15)),
        (float)v21,
        *((_DWORD *)this + 62),
        *((_DWORD *)this + 122),
        *((_DWORD *)this + 123),
        *((_DWORD *)this + 124),
        *((_DWORD *)this + 125),
        *((_DWORD *)this + 135),
        0);
    }
    return (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 100))(g_pDisplay);
  }
  return result;
}


//======================================================================
// Texture::Draw(void)
// address: 0x001CC9E8   size: 0x12C (300 bytes)
//======================================================================
int __fastcall Texture::Draw(int this)
{
  _DWORD *v1; // r6
  int v2; // r1
  int *v3; // r4
  _DWORD *v4; // r2

  v1 = (_DWORD *)(this + 228);
  v2 = *(_DWORD *)(this + 228);
  v3 = (int *)this;
  if ( v2 != 0 )
  {
    (*(void (__fastcall **)(int, int, _DWORD))(*(_DWORD *)g_pDisplay + 80))(g_pDisplay, v2, *(_DWORD *)(this + 236));
    this = v3[134];
    switch ( this )
    {
      case 0:
        (*(void (__fastcall **)(int, _DWORD, int, _DWORD, int))(*(_DWORD *)g_pDisplay + 96))(
          g_pDisplay,
          *v1,
          v3[58],
          0,
          v3[63]);
        if ( (v3[63] & 8) != 0 )
        {
          v4 = (_DWORD *)g_pDisplay;
          *(_DWORD *)(g_pDisplay + 640) = v3[140];
          v4[161] = 0;
          v4[162] = 1056964608;
          v4 += 162;
          v4[1] = 1045220557;
          v4[2] = 1061997773;
          v4[3] = 1065353216;
        }
        (*(void (__fastcall **)(int, float, float, float, float, int, int, int, int, int, int, int))(*(_DWORD *)g_pDisplay + 112))(
          g_pDisplay,
          (float)v3[15],
          (float)v3[16],
          (float)(v3[17] - v3[15]),
          (float)(v3[18] - v3[16]),
          v3[62],
          v3[68],
          v3[69],
          v3[70],
          v3[71],
          v3[135],
          v3[76]);
        this = (*(int (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 100))(g_pDisplay);
        break;
      case 1:
        if ( v3[82] > 0 )
          this = Texture::DrawAsBackDrop((Texture *)v3);
        break;
      case 2:
        this = Texture::DrawAsNineSquare((Texture *)v3);
        break;
      case 3:
        this = Texture::DrawAsCenter((Texture *)v3);
        break;
      case 4:
        this = Texture::DrawAsHeight((Texture *)v3);
        break;
      default:
        return this;
    }
  }
  return this;
}


//======================================================================
// Texture::SetTextureTemplate(std::string)
// address: 0x001CCB20   size: 0x16C (364 bytes)
//======================================================================
__int64 __fastcall Texture::SetTextureTemplate(__int64 a1)
{
  int v1; // r5
  int v2; // r4
  int TemplateObject; // r4
  const char *v4; // r0
  int v5; // r1
  int v6; // r6
  __int64 v8; // [sp+0h] [bp-8h] BYREF

  v8 = a1;
  v1 = a1;
  v2 = g_pFrameMgr;
  sub_3BEB1C((char *)&v8 + 4, HIDWORD(a1));
  TemplateObject = FrameManager::getTemplateObject(v2);
  sub_3BDF80((char *)&v8 + 4);
  if ( TemplateObject != 0 )
  {
    v4 = (const char *)(*(int (__fastcall **)(int))(*(_DWORD *)TemplateObject + 4))(TemplateObject);
    if ( j_strcmp(v4, "Texture") == 0 )
    {
      (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)g_pDisplay + 92))(g_pDisplay, *(_DWORD *)(v1 + 228));
      *(_DWORD *)(v1 + 228) = UIObject::AssignHUIRes((UIObject *)v1, *(void **)(TemplateObject + 228));
      *(_DWORD *)(v1 + 236) = *(_DWORD *)(TemplateObject + 236);
      sub_3BEBBC(v1 + 240);
      *(_DWORD *)(v1 + 248) = *(_DWORD *)(TemplateObject + 248);
      *(_DWORD *)(v1 + 252) = *(_DWORD *)(TemplateObject + 252);
      *(_DWORD *)(v1 + 256) = *(_DWORD *)(TemplateObject + 256);
      *(_DWORD *)(v1 + 260) = *(_DWORD *)(TemplateObject + 260);
      *(_DWORD *)(v1 + 264) = *(_DWORD *)(TemplateObject + 264);
      *(_DWORD *)(v1 + 268) = *(_DWORD *)(TemplateObject + 268);
      *(_DWORD *)(v1 + 304) = *(_DWORD *)(TemplateObject + 304);
      *(_BYTE *)(v1 + 308) = *(_BYTE *)(TemplateObject + 308);
      *(_BYTE *)(v1 + 309) = *(_BYTE *)(TemplateObject + 309);
      *(_DWORD *)(v1 + 552) = *(_DWORD *)(TemplateObject + 552);
      *(_DWORD *)(v1 + 272) = *(_DWORD *)(TemplateObject + 272);
      *(_DWORD *)(v1 + 276) = *(_DWORD *)(TemplateObject + 276);
      *(_DWORD *)(v1 + 280) = *(_DWORD *)(TemplateObject + 280);
      *(_DWORD *)(v1 + 284) = *(_DWORD *)(TemplateObject + 284);
      *(_DWORD *)(v1 + 556) = *(_DWORD *)(TemplateObject + 556);
      *(_DWORD *)(v1 + 328) = *(_DWORD *)(TemplateObject + 328);
      *(_DWORD *)(v1 + 536) = *(_DWORD *)(TemplateObject + 536);
      *(_DWORD *)(v1 + 528) = *(_DWORD *)(TemplateObject + 528);
      *(_DWORD *)(v1 + 532) = *(_DWORD *)(TemplateObject + 532);
      v5 = *(_DWORD *)(TemplateObject + 336);
      v6 = *(_DWORD *)(TemplateObject + 340);
      *(_DWORD *)(v1 + 332) = *(_DWORD *)(TemplateObject + 332);
      *(_DWORD *)(v1 + 336) = v5;
      *(_DWORD *)(v1 + 340) = v6;
      *(_DWORD *)(v1 + 344) = *(_DWORD *)(TemplateObject + 344);
      TextureUV::set((_DWORD *)(v1 + 348), (TextureUV *)(TemplateObject + 348));
      TextureUV::set((_DWORD *)(v1 + 368), (TextureUV *)(TemplateObject + 368));
      TextureUV::set((_DWORD *)(v1 + 388), (TextureUV *)(TemplateObject + 388));
      TextureUV::set((_DWORD *)(v1 + 408), (TextureUV *)(TemplateObject + 408));
      TextureUV::set((_DWORD *)(v1 + 428), (TextureUV *)(TemplateObject + 428));
      TextureUV::set((_DWORD *)(v1 + 448), (TextureUV *)(TemplateObject + 448));
      TextureUV::set((_DWORD *)(v1 + 468), (TextureUV *)(TemplateObject + 468));
      TextureUV::set((_DWORD *)(v1 + 488), (TextureUV *)(TemplateObject + 488));
      TextureUV::set((_DWORD *)(v1 + 508), (TextureUV *)(TemplateObject + 508));
    }
  }
  return v8;
}


//======================================================================
// Texture::ChangeTextureTemplate(char const*)
// address: 0x001CCC98   size: 0x1E (30 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Texture::ChangeTextureTemplate(Texture *this, char *a2, int a3)
{
  _DWORD v4[2]; // [sp+4h] [bp-8h] BYREF

  v4[1] = a3;
  sub_3BF0BC((int)v4, a2);
  Texture::SetTextureTemplate(__SPAIR64__(v4, (unsigned int)this));
  sub_3BDF80(v4);
}


//======================================================================
// Texture::setUvType(int)
// address: 0x001CCCB6   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Texture::setUvType(int this, int a2)
{
  *(_DWORD *)(this + 540) = a2;
  return this;
}


//======================================================================
// Texture::StopUVAnim(void)
// address: 0x001CCCBE   size: 0x10 (16 bytes)
//======================================================================
bool *__fastcall Texture::StopUVAnim(Texture *this)
{
  *((_BYTE *)this + 308) = 0;
  return LayoutFrame::DrawShow(this, 0);
}


//======================================================================
// Texture::StartAlphaAmin(float)
// address: 0x001CCCCE   size: 0x2A (42 bytes)
//======================================================================
int __fastcall Texture::StartAlphaAmin(Texture *this, float a2)
{
  int result; // r0

  result = Texture::SetBlendAlpha(this, 1.0);
  *((_BYTE *)this + 544) = 1;
  *((_BYTE *)this + 57) = 1;
  *((_BYTE *)this + 310) = 1;
  *((float *)this + 137) = a2;
  return result;
}


//======================================================================
// Texture::StopAlphaAmin(void)
// address: 0x001CCCF8   size: 0xA (10 bytes)
//======================================================================
int __fastcall Texture::StopAlphaAmin(int this)
{
  *(_BYTE *)(this + 544) = 0;
  return this;
}


//======================================================================
// Texture::Save(TiXmlElement *)
// address: 0x001CCD04   size: 0x74 (116 bytes)
//======================================================================
TiXmlNode *__fastcall Texture::Save(const char **this, TiXmlElement *a2)
{
  TiXmlElement *v3; // r0
  TiXmlNode *v4; // r6
  TiXmlElement *v5; // r4

  v3 = (TiXmlElement *)LayoutFrame::Save((LayoutFrame *)this, a2);
  v4 = v3;
  if ( v3 != nullptr )
  {
    if ( *((_DWORD *)*(this + 60) - 3) != 0 )
      TiXmlElement::SetAttribute(v3, "file", *(this + 60));
    if ( *(this + 62) != (const char *)-1 )
    {
      v5 = (TiXmlElement *)operator new(0x50u);
      TiXmlElement::TiXmlElement(v5, "Color");
      TiXmlNode::LinkEndChild(v4, v5);
      TiXmlElement::SetAttribute(v5, (const char *)aRgb, *((unsigned __int8 *)this + 250));
      TiXmlElement::SetAttribute(v5, (const char *)&aRgb[1], *((unsigned __int8 *)this + 249));
      TiXmlElement::SetAttribute(v5, (const char *)&aRgb[2], *((unsigned __int8 *)this + 248));
    }
  }
  return v4;
}

