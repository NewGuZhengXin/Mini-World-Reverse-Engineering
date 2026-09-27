// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RFontBase

//======================================================================
// Ogre::RFontBase::GetFontSize(int &,int &)
// address: 0x0014DC94   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::RFontBase::GetFontSize(Ogre::RFontBase *this, int *a2, int *a3)
{
  int result; // r0

  *a2 = *((_DWORD *)this + 5);
  result = *((_DWORD *)this + 6);
  *a3 = result;
  return result;
}


//======================================================================
// Ogre::RFontBase::GetCharSize(float &,float &)
// address: 0x0014DC9E   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::RFontBase::GetCharSize(Ogre::RFontBase *this, float *a2, float *a3)
{
  int result; // r0

  *a2 = *((float *)this + 7);
  result = *((_DWORD *)this + 8);
  *(_DWORD *)a3 = result;
  return result;
}


//======================================================================
// Ogre::RFontBase::SetCharSize(int,int)
// address: 0x0014DCA8   size: 0x18 (24 bytes)
//======================================================================
float __fastcall Ogre::RFontBase::SetCharSize(Ogre::RFontBase *this, int a2, int a3)
{
  *((float *)this + 7) = (float)a2;
  *((float *)this + 8) = (float)a3;
  return (float)a3;
}


//======================================================================
// Ogre::RFontBase::GetLineInterval(float &)
// address: 0x0014DCC0   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::RFontBase::GetLineInterval(Ogre::RFontBase *this, float *a2)
{
  int result; // r0

  result = *((_DWORD *)this + 9);
  *(_DWORD *)a2 = result;
  return result;
}


//======================================================================
// Ogre::RFontBase::SetLineInterval(float)
// address: 0x0014DCC6   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::RFontBase::SetLineInterval(int this, float a2)
{
  *(float *)(this + 36) = a2;
  return this;
}


//======================================================================
// Ogre::RFontBase::SetDrawAngle(float,float,float)
// address: 0x0014DCCA   size: 0x8 (8 bytes)
//======================================================================
float *__fastcall Ogre::RFontBase::SetDrawAngle(float *this, float a2, float a3, float a4)
{
  *(this + 12) = a2;
  *(this + 13) = a3;
  *(this + 11) = a4;
  return this;
}


//======================================================================
// Ogre::RFontBase::Init(Ogre::UIRenderer *,int,int,char const*,Ogre::ECharacterCoding,unsigned int)
// address: 0x0014DD00   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Ogre::RFontBase::Init(_DWORD *a1, int a2, int a3, int a4, char *a5, int a6, int a7)
{
  if ( a2 == 0 )
    return 0;
  a1[4] = a2;
  sub_3BE508((int)(a1 + 1), a5);
  a1[2] = a6;
  a1[3] = a7;
  return 1;
}


//======================================================================
// Ogre::RFontBase::~RFontBase()
// address: 0x0014DD94   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9RFontBaseD1Ev'
void __fastcall Ogre::RFontBase::~RFontBase(Ogre::RFontBase *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_4588A0;
  v2 = *((void **)this + 21);
  if ( v2 != nullptr )
    operator delete(v2);
  sub_3BDF80((char *)this + 4);
  *(_DWORD *)this = &off_455FC8;
}


//======================================================================
// Ogre::RFontBase::~RFontBase()
// address: 0x0014DDC8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::RFontBase::~RFontBase(Ogre::RFontBase *this)
{
  Ogre::RFontBase::~RFontBase(this);
  operator delete(this);
}


//======================================================================
// Ogre::RFontBase::RFontBase(void)
// address: 0x001637F4   size: 0x86 (134 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9RFontBaseC1Ev'
Ogre::RFontBase *__fastcall Ogre::RFontBase::RFontBase(Ogre::RFontBase *this)
{
  int v2; // r2
  _BYTE v4[36]; // [sp+8h] [bp-4Ch] BYREF
  int v5[10]; // [sp+2Ch] [bp-28h] BYREF

  *(_DWORD *)this = &off_4588A0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 1) = &byte_55FB88;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  v2 = Ogre::RFontBase::m_nInstanceCount;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  Ogre::RFontBase::m_nInstanceCount = v2 + 1;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 2) = 1;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 11) = 0;
  j_memset(v4, 0, sizeof(v4));
  qmemcpy(v5, v4, 36);
  std::vector<Ogre::DrawRect>::_M_fill_insert((int)this + 84, nullptr, 0x800u, v5);
  return this;
}


//======================================================================
// Ogre::RFontBase::GetCharSize(unsigned char const*,float &,float &)
// address: 0x001989F2   size: 0x28 (40 bytes)
//======================================================================
float __fastcall Ogre::RFontBase::GetCharSize(Ogre::RFontBase *this, const unsigned __int8 *a2, float *a3, float *a4)
{
  int v7; // r0
  float result; // r0

  v7 = (*(int (__fastcall **)(_DWORD, const unsigned __int8 *))(**((_DWORD **)this + 16) + 32))(
         *((_DWORD *)this + 16),
         a2);
  (*(void (__fastcall **)(_DWORD, int, float *, float *))(**((_DWORD **)this + 17) + 8))(
    *((_DWORD *)this + 17),
    v7,
    a3,
    a4);
  result = (float)*((int *)this + 6);
  *a4 = result;
  return result;
}


//======================================================================
// Ogre::RFontBase::GetCharExtent(unsigned char const*,float &,float &)
// address: 0x00198A1A   size: 0x3E (62 bytes)
//======================================================================
float __fastcall Ogre::RFontBase::GetCharExtent(Ogre::RFontBase *this, const unsigned __int8 *a2, float *a3, float *a4)
{
  float result; // r0

  (*(void (__fastcall **)(Ogre::RFontBase *, const unsigned __int8 *, float *, float *))(*(_DWORD *)this + 40))(
    this,
    a2,
    a3,
    a4);
  *a3 = (float)(*a3 / (float)*((int *)this + 5)) * *((float *)this + 7);
  result = (float)(*a4 / (float)*((int *)this + 6)) * *((float *)this + 8);
  *a4 = result;
  return result;
}


//======================================================================
// Ogre::RFontBase::GetTextExtent(char const*,float &,float &,bool)
// address: 0x00198A58   size: 0xC2 (194 bytes)
//======================================================================
bool __fastcall Ogre::RFontBase::GetTextExtent(_BOOL4 this, const char *a2, float *a3, float *a4, bool a5)
{
  int v5; // r6
  const char *v6; // r5
  float v8; // r4
  int v9; // r3
  int v10; // r0
  int v11; // [sp+4h] [bp-28h]
  int v13; // [sp+10h] [bp-1Ch]
  int v14; // [sp+18h] [bp-14h] BYREF
  float v15; // [sp+1Ch] [bp-10h] BYREF
  _BYTE v16[4]; // [sp+20h] [bp-Ch] BYREF
  int v17; // [sp+24h] [bp-8h] BYREF

  v5 = this;
  v6 = a2;
  if ( a2 != nullptr )
  {
    v8 = 0.0;
    v9 = 0;
    *a4 = 0.0;
    *a3 = 0.0;
LABEL_3:
    v11 = v9;
    while ( 1 )
    {
      v6 += (*(int (__fastcall **)(_DWORD, const char *, int *, bool))(**(_DWORD **)(v5 + 64) + 20))(
              *(_DWORD *)(v5 + 64),
              v6,
              &v14,
              a5);
      if ( v14 == 3 )
        break;
      if ( v14 == 2 )
      {
        if ( v8 > *a3 )
          *a3 = v8;
        v11 = 0;
        v8 = 0.0;
      }
      else if ( v14 == 0 )
      {
        v10 = *(_DWORD *)(v5 + 64);
        v17 = 0;
        v13 = (*(int (__fastcall **)(int, const char *))(*(_DWORD *)v10 + 12))(v10, v6);
        (*(void (__fastcall **)(int, int *, float *, _BYTE *))(*(_DWORD *)v5 + 36))(v5, &v17, &v15, v16);
        v6 += v13;
        v8 = v8 + v15;
        if ( v11 == 0 )
          *a4 = *a4 + (float)(*(float *)(v5 + 32) + *(float *)(v5 + 36));
        v9 = 1;
        goto LABEL_3;
      }
    }
    this = v8 > *a3;
    if ( v8 > *a3 )
      *a3 = v8;
  }
  return this;
}


//======================================================================
// Ogre::RFontBase::GetTextExtentFitInWidth(char const*,float,float &,int &,bool)
// address: 0x00198B1A   size: 0x8C (140 bytes)
//======================================================================
int __fastcall Ogre::RFontBase::GetTextExtentFitInWidth(
        int this,
        const char *a2,
        float a3,
        float *a4,
        int *a5,
        bool a6)
{
  _DWORD **v6; // r5
  const char *v7; // r4
  _DWORD *v8; // r0
  int v9; // r6
  int v12; // [sp+10h] [bp-14h] BYREF
  float v13; // [sp+14h] [bp-10h] BYREF
  _BYTE v14[4]; // [sp+18h] [bp-Ch] BYREF
  _DWORD v15[2]; // [sp+1Ch] [bp-8h] BYREF

  v6 = (_DWORD **)this;
  v7 = a2;
  if ( a2 != nullptr )
  {
    *a4 = 0.0;
    *a5 = 0;
    while ( 1 )
    {
      this = (*(int (__fastcall **)(_DWORD *, const char *, int *, bool))(*v6[16] + 20))(v6[16], v7, &v12, a6);
      v7 += this;
      if ( v12 == 3 )
        break;
      if ( v12 == 0 )
      {
        v8 = v6[16];
        v15[0] = 0;
        v9 = (*(int (__fastcall **)(_DWORD *, const char *, _DWORD *))(*v8 + 12))(v8, v7, v15);
        ((void (__fastcall *)(_DWORD **, _DWORD *, float *, _BYTE *))(*v6)[9])(v6, v15, &v13, v14);
        v7 += v9;
        this = (float)(*a4 + v13) > a3;
        if ( (float)(*a4 + v13) > a3 )
          return this;
        *a4 = *a4 + v13;
        *a5 += v9;
      }
    }
  }
  return this;
}


//======================================================================
// Ogre::RFontBase::DoRenderOneShadowCharacter(float,float,float,float,Ogre::TRect<float> const&,Ogre::ColorQuad const&)
// address: 0x00198BA6   size: 0x5E (94 bytes)
//======================================================================
unsigned __int64 __fastcall Ogre::RFontBase::DoRenderOneShadowCharacter(
        unsigned int a1,
        float a2,
        float a3,
        float a4,
        float a5,
        _DWORD *a6,
        _DWORD *a7)
{
  int v7; // r4
  int v8; // r1
  int v9; // r6

  v7 = *(_DWORD *)(a1 + 84) + 36 * *(_DWORD *)(a1 + 72);
  *(float *)v7 = a2 + 1.0;
  *(float *)(v7 + 4) = a3 + 1.0;
  *(float *)(v7 + 8) = (float)(a2 + 1.0) + a4;
  *(float *)(v7 + 12) = (float)(a3 + 1.0) + a5;
  v8 = a6[1];
  v9 = a6[2];
  *(_DWORD *)(v7 + 16) = *a6;
  *(_DWORD *)(v7 + 20) = v8;
  *(_DWORD *)(v7 + 24) = v9;
  *(_DWORD *)(v7 + 28) = a6[3];
  *(_DWORD *)(v7 + 32) = *a7;
  ++*(_DWORD *)(a1 + 72);
  return __PAIR64__(LODWORD(a4), a1);
}


//======================================================================
// Ogre::RFontBase::MinDisToNewLine(char const*,bool)
// address: 0x00198C04   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall Ogre::RFontBase::MinDisToNewLine(Ogre::RFontBase *this, const char *a2, bool a3)
{
  const char *v4; // r5
  int v6; // r0
  float v7; // r6
  int v8; // [sp+4h] [bp-18h]
  int v9; // [sp+8h] [bp-14h] BYREF
  float v10; // [sp+Ch] [bp-10h] BYREF
  _BYTE v11[4]; // [sp+10h] [bp-Ch] BYREF
  _DWORD v12[2]; // [sp+14h] [bp-8h] BYREF

  v4 = a2;
  if ( a2 == nullptr )
    return 0;
  (*(void (__fastcall **)(_DWORD, const char *, int *, bool))(**((_DWORD **)this + 16) + 20))(
    *((_DWORD *)this + 16),
    a2,
    &v9,
    a3);
  if ( v9 != 0 )
    return 0;
  v6 = *((_DWORD *)this + 16);
  v12[0] = 0;
  (*(void (__fastcall **)(int, const char *, _DWORD *))(*(_DWORD *)v6 + 12))(v6, v4, v12);
  if ( (*(int (__fastcall **)(_DWORD, _DWORD *))(**((_DWORD **)this + 16) + 24))(*((_DWORD *)this + 16), v12) != 0 )
  {
    v7 = 0.0;
    do
    {
      v8 = (*(int (__fastcall **)(_DWORD, const char *, _DWORD *))(**((_DWORD **)this + 16) + 12))(
             *((_DWORD *)this + 16),
             v4,
             v12);
      if ( (*(int (__fastcall **)(_DWORD, _DWORD *))(**((_DWORD **)this + 16) + 24))(*((_DWORD *)this + 16), v12) == 0 )
        break;
      (*(void (__fastcall **)(Ogre::RFontBase *, _DWORD *, float *, _BYTE *))(*(_DWORD *)this + 36))(
        this,
        v12,
        &v10,
        v11);
      v7 = v7 + v10;
      v4 += v8;
    }
    while ( (*(int (__fastcall **)(_DWORD, _DWORD *))(**((_DWORD **)this + 16) + 28))(*((_DWORD *)this + 16), v12) == 0 );
    return LODWORD(v7);
  }
  else
  {
    (*(void (__fastcall **)(Ogre::RFontBase *, _DWORD *, float *, _BYTE *))(*(_DWORD *)this + 36))(this, v12, &v10, v11);
    return LODWORD(v10);
  }
}


//======================================================================
// Ogre::RFontBase::OnParseTransferCharacter(char const*&,Ogre::ColorQuad &,bool &,int &,Ogre::ColorQuad const&)
// address: 0x00198CA8   size: 0x106 (262 bytes)
//======================================================================
int __fastcall Ogre::RFontBase::OnParseTransferCharacter(
        int a1,
        int *a2,
        _BYTE *a3,
        _BYTE *a4,
        Ogre::Timer *a5,
        _DWORD *a6)
{
  int result; // r0
  unsigned int v8; // r2
  int v9; // r2
  int v10; // r5
  int v11; // r2
  signed int v12; // r1

  result = (int)a5;
  v8 = *(unsigned __int8 *)*a2;
  if ( v8 == 82 )
  {
    a3[2] = -1;
    a3[1] = 100;
    goto LABEL_16;
  }
  if ( v8 <= 0x52 )
  {
    if ( v8 != 71 )
    {
      if ( v8 != 75 )
      {
        if ( v8 != 66 )
          goto LABEL_28;
        a3[2] = 0;
        a3[1] = 0x80;
LABEL_20:
        *a3 = -1;
        goto LABEL_17;
      }
      a3[2] = 0;
      a3[1] = 0;
      *a3 = 0;
LABEL_17:
      a3[3] = -1;
LABEL_26:
      v11 = *a2 + 1;
      goto LABEL_27;
    }
    *(_WORD *)(a3 + 1) = 255;
LABEL_16:
    *a3 = 0;
    goto LABEL_17;
  }
  if ( v8 == 89 )
  {
    a3[2] = -1;
    a3[1] = -1;
    goto LABEL_16;
  }
  if ( v8 <= 0x59 )
  {
    if ( *(_BYTE *)*a2 != 87 )
      goto LABEL_28;
    a3[2] = -1;
    a3[1] = -1;
    goto LABEL_20;
  }
  if ( v8 == 98 )
  {
    v9 = 1;
    *a4 = 1;
    v10 = *(unsigned __int8 *)(*a2 + 1);
    if ( v10 != 49 )
    {
      if ( v10 != 50 )
      {
        *(_DWORD *)a5 = 1;
        goto LABEL_26;
      }
      v9 = 2;
    }
    *(_DWORD *)a5 = v9;
    v11 = *a2 + 2;
LABEL_27:
    *a2 = v11;
    goto LABEL_28;
  }
  if ( *(_BYTE *)*a2 == 110 )
  {
    *(_DWORD *)a3 = *a6;
    ++*a2;
    *a4 = 0;
  }
LABEL_28:
  if ( *a4 != 0 )
  {
    if ( *(_DWORD *)a5 == 1 )
    {
      v12 = Ogre::Timer::getSystemTick(a5, (__suseconds_t)a2) % 0x4B0u;
      if ( v12 > 599 )
        v12 = 1199 - v12;
      result = 320 * v12 / 600;
      if ( result > 255 )
        result = 255;
      a3[3] = result;
    }
    else
    {
      result = Ogre::Timer::getSystemTick(a5, (__suseconds_t)a2) / 0x258u;
      if ( (result & 1) != 0 )
      {
        a3[2] = 0;
        a3[1] = 0;
        *a3 = 0;
        a3[3] = 0;
      }
    }
  }
  return result;
}


//======================================================================
// Ogre::RFontBase::RenderText(float)
// address: 0x00198DB8   size: 0x194 (404 bytes)
//======================================================================
int __fastcall Ogre::RFontBase::RenderText(Ogre::RFontBase *this, float a2)
{
  int v4; // r7
  double v5; // r4
  float v6; // r0
  float v7; // r0
  int result; // r0
  float v9; // [sp+20h] [bp-2Ch]
  int i; // [sp+24h] [bp-28h]
  float v11; // [sp+28h] [bp-24h]
  float v12; // [sp+2Ch] [bp-20h]
  float v13; // [sp+2Ch] [bp-20h]
  float v14; // [sp+30h] [bp-1Ch]
  float v15; // [sp+30h] [bp-1Ch]
  float v16; // [sp+34h] [bp-18h]
  float v17; // [sp+38h] [bp-14h]
  int v18; // [sp+3Ch] [bp-10h]
  float v19; // [sp+44h] [bp-8h]

  (*(void (__fastcall **)(Ogre::RFontBase *))(*(_DWORD *)this + 60))(this);
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, int))(**((_DWORD **)this + 4) + 96))(
    *((_DWORD *)this + 4),
    *((_DWORD *)this + 20),
    0,
    LODWORD(a2),
    2);
  for ( i = 0; ; ++i )
  {
    v18 = *((_DWORD *)this + 4);
    if ( i >= *((_DWORD *)this + 18) )
      break;
    v4 = *((_DWORD *)this + 21) + 36 * i;
    v9 = *(float *)v4;
    v11 = *(float *)(v4 + 4);
    v19 = *((float *)this + 11);
    if ( v19 == 0.0 )
    {
      v15 = *(float *)(v4 + 4);
      v13 = *(float *)v4;
    }
    else
    {
      v12 = *((float *)this + 12);
      v17 = v9 - v12;
      v5 = (float)(v19 * 0.017453);
      v6 = j_cos(v5);
      v16 = v6;
      v14 = *((float *)this + 13);
      v7 = j_sin(v5);
      v13 = (float)(v12 + (float)((float)(v9 - v12) * v16)) - (float)((float)(v11 - v14) * v7);
      v15 = (float)(v14 + (float)(v17 * v7)) + (float)((float)(v11 - v14) * v16);
    }
    (*(void (__fastcall **)(int, float, float, _DWORD, _DWORD, _DWORD, int, int, int, int, _DWORD, float))(*(_DWORD *)v18 + 112))(
      v18,
      COERCE_FLOAT(LODWORD(v13)),
      COERCE_FLOAT(LODWORD(v15)),
      *(float *)(v4 + 8) - v9,
      *(float *)(v4 + 12) - v11,
      *(_DWORD *)(v4 + 32),
      (int)(float)(*(float *)(v4 + 16) * (float)*((int *)this + 14)),
      (int)(float)(*(float *)(v4 + 20) * (float)*((int *)this + 15)),
      (int)(float)((float)(*(float *)(v4 + 24) - *(float *)(v4 + 16)) * (float)*((int *)this + 14)),
      (int)(float)((float)(*(float *)(v4 + 28) - *(float *)(v4 + 20)) * (float)*((int *)this + 15)),
      0,
      COERCE_FLOAT(LODWORD(v19)));
  }
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 100))(v18);
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 18) = 0;
  return result;
}


//======================================================================
// Ogre::RFontBase::ValidateMaxCharactersToRender(void *,float)
// address: 0x00198F50   size: 0x28 (40 bytes)
//======================================================================
int __fastcall Ogre::RFontBase::ValidateMaxCharactersToRender(Ogre::RFontBase *this, void *a2, float a3)
{
  int result; // r0

  if ( *((_DWORD *)this + 19) >= *((_DWORD *)this + 10)
    || (result = *((_DWORD *)this + 18)) > 2039
    || *((void **)this + 20) != a2 )
  {
    result = Ogre::RFontBase::RenderText(this, a3);
    *((_DWORD *)this + 19) = 0;
  }
  return result;
}


//======================================================================
// Ogre::RFontBase::DoRenderOneCharacter(char const*&,float &,float,void *,unsigned int,float,float,Ogre::TRect<float> const&,Ogre::ColorQuad const&,Ogre::ColorQuad const&,float,int)
// address: 0x00198F7C   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall Ogre::RFontBase::DoRenderOneCharacter(
        _DWORD *a1,
        _DWORD *a2,
        float *a3,
        float a4,
        void *a5,
        int a6,
        int a7,
        int a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        float a12,
        int a13)
{
  _DWORD *v13; // r4
  void *v15; // r1
  float v17; // r0
  int v18; // r5
  int v19; // r1
  int v20; // r3
  void *v23; // [sp+1Ch] [bp-8h]

  v13 = a1;
  v15 = a5;
  v23 = (void *)a1[20];
  if ( v23 == a5 )
  {
    if ( (unsigned int)(a6 - 1) <= 1 )
      Ogre::RFontBase::DoRenderOneShadowCharacter((unsigned int)a1, *a3, a4, *(float *)&a7, *(float *)&a8, a9, a10);
    v17 = *a3;
    v18 = v13[21] + 36 * v13[18];
    *(float *)(v18 + 4) = a4;
    *(float *)v18 = v17;
    *(float *)(v18 + 8) = v17 + *(float *)&a7;
    *(float *)(v18 + 12) = a4 + *(float *)&a8;
    v19 = a9[1];
    v20 = a9[2];
    *(_DWORD *)(v18 + 16) = *a9;
    *(_DWORD *)(v18 + 20) = v19;
    *(_DWORD *)(v18 + 24) = v20;
    *(_DWORD *)(v18 + 28) = a9[3];
    *(_DWORD *)(v18 + 32) = *a11;
    ++v13[18];
    ++v13[19];
    *a2 += a13;
    v15 = v23;
    *a3 = *a3 + *(float *)&a7;
    a1 = v13;
  }
  return Ogre::RFontBase::ValidateMaxCharactersToRender((Ogre::RFontBase *)a1, v15, a12);
}


//======================================================================
// Ogre::RFontBase::OnParseNormalCharacter(float &,float,char const*&,Ogre::ColorQuad &,float,unsigned int,Ogre::ColorQuad const&,float)
// address: 0x00199020   size: 0xBC (188 bytes)
//======================================================================
int __fastcall Ogre::RFontBase::OnParseNormalCharacter(
        _DWORD *a1,
        float *a2,
        float a3,
        _DWORD *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9)
{
  int v11; // r0
  void *v12; // r7
  int v13; // r6
  int v14; // r0
  int v16; // [sp+2Ch] [bp-20h]
  float v19; // [sp+38h] [bp-14h] BYREF
  float v20; // [sp+3Ch] [bp-10h] BYREF
  void *v21; // [sp+40h] [bp-Ch] BYREF
  _DWORD v22[2]; // [sp+44h] [bp-8h] BYREF

  v19 = 0.0;
  v20 = 0.0;
  v21 = nullptr;
  if ( (dword_4C6EA0 & 1) == 0 && _cxa_guard_acquire(&dword_4C6EA0) != 0 )
    _cxa_guard_release(&dword_4C6EA0);
  v11 = a1[16];
  v22[0] = 0;
  v16 = (*(int (__fastcall **)(int, _DWORD, _DWORD *))(*(_DWORD *)v11 + 12))(v11, *a4, v22);
  (*(void (__fastcall **)(_DWORD *, _DWORD *, float *, float *))(*a1 + 36))(a1, v22, &v19, &v20);
  (*(void (__fastcall **)(_DWORD *, _DWORD *, void **, _DWORD *))(*a1 + 64))(a1, v22, &v21, dword_4C6EA4);
  v12 = v21;
  if ( a1[20] == 0 )
    a1[20] = v21;
  v19 = *(float *)&a6 * v19;
  *(float *)&v13 = v19;
  v20 = *(float *)&a6 * v20;
  *(float *)&v14 = v20;
  *(_BYTE *)(a5 + 3) = *(_BYTE *)(a8 + 3);
  return Ogre::RFontBase::DoRenderOneCharacter(
           a1,
           a4,
           a2,
           a3,
           v12,
           a7,
           v13,
           v14,
           dword_4C6EA4,
           (_DWORD *)a5,
           (_DWORD *)a8,
           a9,
           v16);
}


//======================================================================
// Ogre::RFontBase::OnParseOneCharacter(char const*&,float &,float &,Ogre::ColorQuad &,Ogre::ColorQuad &,bool &,int &,float,Ogre::EControlCode,float,unsigned int,float,Ogre::ColorQuad const&)
// address: 0x001990E8   size: 0x7C (124 bytes)
//======================================================================
int __fastcall Ogre::RFontBase::OnParseOneCharacter(
        int a1,
        int *a2,
        float *a3,
        float *a4,
        int a5,
        _BYTE *a6,
        _BYTE *a7,
        Ogre::Timer *a8,
        int a9,
        int a10,
        int a11,
        int a12,
        float a13,
        _DWORD *a14)
{
  switch ( a10 )
  {
    case 3:
      return 0;
    case 2:
      *(_DWORD *)a3 = a9;
      *a4 = *a4 + (float)((float)(*(float *)(a1 + 32) + *(float *)(a1 + 36)) * *(float *)&a11);
      break;
    case 4:
      Ogre::RFontBase::OnParseTransferCharacter(a1, a2, a6, a7, a8, a14);
      break;
    case 0:
      Ogre::RFontBase::OnParseNormalCharacter((_DWORD *)a1, a3, *a4, a2, a5, a11, a12, (int)a6, a13);
      break;
    default:
      break;
  }
  return 1;
}


//======================================================================
// Ogre::RFontBase::TextOutM(char const*,float,float,Ogre::ColorQuad const&,unsigned int,bool,float,float,Ogre::ColorQuad const&)
// address: 0x00199164   size: 0x8A (138 bytes)
//======================================================================
Ogre::RFontBase *__fastcall Ogre::RFontBase::TextOutM(
        Ogre::RFontBase *result,
        int a2,
        int a3,
        int a4,
        int *a5,
        int a6,
        unsigned __int8 a7,
        int a8,
        float a9,
        int *a10)
{
  Ogre::RFontBase *v11; // r4
  int v12; // r3
  int v13; // r2
  int v14; // r0
  char v15; // [sp+2Bh] [bp-21h] BYREF
  int v16; // [sp+2Ch] [bp-20h] BYREF
  int v17; // [sp+30h] [bp-1Ch] BYREF
  int v18; // [sp+34h] [bp-18h] BYREF
  int v19; // [sp+38h] [bp-14h] BYREF
  int v20; // [sp+3Ch] [bp-10h] BYREF
  int v21; // [sp+40h] [bp-Ch] BYREF
  int v22; // [sp+44h] [bp-8h] BYREF

  v11 = result;
  if ( a2 != 0 )
  {
    v17 = 5;
    v19 = a4;
    *((_DWORD *)result + 19) = 0;
    v15 = 0;
    v20 = 1;
    v12 = *a10;
    v13 = *a5;
    v16 = a2;
    v18 = a3;
    v21 = v13;
    v22 = v12;
    do
    {
      v14 = (*(int (__fastcall **)(_DWORD *, int, int *, _DWORD))(**((_DWORD **)v11 + 16) + 20))(
              *((_DWORD **)v11 + 16),
              v16,
              &v17,
              a7);
      v16 += v14;
    }
    while ( Ogre::RFontBase::OnParseOneCharacter(
              (int)v11,
              &v16,
              (float *)&v18,
              (float *)&v19,
              (int)&v22,
              &v21,
              &v15,
              (Ogre::Timer *)&v20,
              a3,
              v17,
              a8,
              a6,
              a9,
              a5) != 0 );
    return (Ogre::RFontBase *)Ogre::RFontBase::RenderText(v11, a9);
  }
  return result;
}


//======================================================================
// Ogre::RFontBase::TextOutRect(char const*,Ogre::TRect<float> const&,float,float,bool,Ogre::ColorQuad const&,unsigned int,bool,float,Ogre::ColorQuad const&)
// address: 0x001991F0   size: 0x552 (1362 bytes)
//======================================================================
int __fastcall Ogre::RFontBase::TextOutRect(
        int result,
        unsigned __int8 *a2,
        float *a3,
        float a4,
        float a5,
        char a6,
        char *a7,
        int a8,
        bool a9,
        float a10,
        int *a11)
{
  unsigned int v11; // r6
  unsigned __int8 *v12; // r7
  float v13; // r0
  char v14; // r5
  int v15; // r4
  Ogre::Timer *v16; // r0
  __suseconds_t v17; // r1
  float v18; // r0
  int v19; // r0
  int v20; // r0
  float v21; // r4
  float v22; // r4
  int v23; // r3
  int v24; // r4
  float v25; // r2
  float v26; // r3
  unsigned int v27; // r3
  int v28; // r3
  signed int v29; // r1
  int v30; // r0
  float v31; // [sp+10h] [bp-B4h]
  float v32; // [sp+14h] [bp-B0h]
  float v33; // [sp+18h] [bp-ACh]
  char v34; // [sp+1Ch] [bp-A8h]
  float v35; // [sp+20h] [bp-A4h]
  float v36; // [sp+24h] [bp-A0h]
  float v37; // [sp+24h] [bp-A0h]
  float v38; // [sp+28h] [bp-9Ch]
  char v39; // [sp+2Ch] [bp-98h]
  float v40; // [sp+30h] [bp-94h]
  char v41; // [sp+34h] [bp-90h]
  float v42; // [sp+3Ch] [bp-88h]
  float v43; // [sp+40h] [bp-84h]
  int i; // [sp+48h] [bp-7Ch]
  float v45; // [sp+4Ch] [bp-78h]
  int v46; // [sp+50h] [bp-74h]
  int v47; // [sp+54h] [bp-70h]
  float v48; // [sp+58h] [bp-6Ch]
  float v49; // [sp+60h] [bp-64h]
  float v50; // [sp+64h] [bp-60h]
  float v51; // [sp+68h] [bp-5Ch]
  int v52; // [sp+6Ch] [bp-58h]
  float v54; // [sp+84h] [bp-40h]
  float v55; // [sp+88h] [bp-3Ch]
  int v56; // [sp+90h] [bp-34h] BYREF
  int v57; // [sp+94h] [bp-30h] BYREF
  float v58; // [sp+98h] [bp-2Ch] BYREF
  float v59; // [sp+9Ch] [bp-28h] BYREF
  int v60; // [sp+A0h] [bp-24h] BYREF
  float v61; // [sp+A4h] [bp-20h] BYREF
  float v62; // [sp+A8h] [bp-1Ch]
  float v63; // [sp+ACh] [bp-18h]
  float v64; // [sp+B0h] [bp-14h]
  _DWORD v65[2]; // [sp+B4h] [bp-10h] BYREF

  v11 = result;
  v12 = a2;
  if ( a2 != nullptr )
  {
    v42 = a3[2];
    v48 = a3[3];
    v38 = (float)(int)*a3;
    v13 = (float)(int)a3[1];
    v45 = v13;
    v57 = *a11;
    v43 = v13;
    v33 = v38;
    v14 = a7[3];
    v47 = 0;
    v41 = *a7;
    v39 = a7[1];
    v34 = a7[2];
    v46 = 1;
LABEL_3:
    v15 = 0;
LABEL_4:
    for ( i = v15; ; i = 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v16 = (Ogre::Timer *)(*(int (__fastcall **)(_DWORD, unsigned __int8 *, int *, bool))(**(_DWORD **)(v11 + 64)
                                                                                             + 20))(
                                 *(_DWORD *)(v11 + 64),
                                 v12,
                                 &v56,
                                 a9);
          v12 = (unsigned __int8 *)v16 + (_DWORD)v12;
          if ( v56 == 3 )
            return Ogre::RFontBase::RenderText((Ogre::RFontBase *)v11, 0.0);
          if ( v56 == 2 )
          {
            v43 = v43 + (float)((float)(*(float *)(v11 + 32) + *(float *)(v11 + 36)) * a10);
            goto LABEL_18;
          }
          if ( v56 == 4 )
            break;
          if ( v56 == 0 )
          {
            if ( a6 == 0 )
              goto LABEL_20;
            v18 = COERCE_FLOAT(Ogre::RFontBase::MinDisToNewLine((Ogre::RFontBase *)v11, (const char *)v12, a9));
            if ( v18 > (float)(v42 - v38) )
              v42 = v38 + v18;
            if ( (float)(v18 + v33) > v42 )
            {
              v43 = v43 + (float)((float)(*(float *)(v11 + 32) + *(float *)(v11 + 36)) * a10);
              v19 = (*(int (__fastcall **)(_DWORD, unsigned __int8 *))(**(_DWORD **)(v11 + 64) + 8))(
                      *(_DWORD *)(v11 + 64),
                      v12);
              if ( v19 == 0 )
              {
                v33 = v38;
                goto LABEL_20;
              }
              v12 += v19;
LABEL_18:
              v33 = v38;
            }
            else
            {
LABEL_20:
              v20 = *(_DWORD *)(v11 + 64);
              v65[0] = 0;
              v65[1] = 0;
              v52 = (*(int (__fastcall **)(int, unsigned __int8 *, _DWORD *))(*(_DWORD *)v20 + 12))(v20, v12, v65);
              (*(void (__fastcall **)(unsigned int, _DWORD *, float *, float *))(*(_DWORD *)v11 + 36))(
                v11,
                v65,
                &v58,
                &v59);
              v58 = a10 * v58;
              v36 = a10 * v59;
              v59 = a10 * v59;
              if ( a6 != 0 )
              {
                v40 = v33 + v58;
                v31 = v33;
              }
              else
              {
                v31 = v33 + a4;
                v40 = (float)(v33 + v58) + a4;
              }
              v32 = v43 + a5;
              if ( (float)(v43 + a5) < v48
                && (v37 = (float)(v43 + v36) + a5) > v45
                && (a6 != 0 || v31 < v42 && v40 > v38) )
              {
                v21 = v37 - v32;
                if ( v32 >= v45 )
                {
                  v50 = 0.0;
                }
                else
                {
                  v50 = (float)(v45 - v32) / (float)(v37 - v32);
                  v32 = v45;
                }
                if ( v37 <= v48 )
                {
                  v51 = 0.0;
                }
                else
                {
                  v51 = (float)(v37 - v48) / v21;
                  v37 = v48;
                }
                if ( a6 != 0 )
                {
                  v35 = 0.0;
                  v49 = 0.0;
                }
                else
                {
                  v22 = v40 - v31;
                  if ( v31 >= v38 )
                  {
                    v49 = 0.0;
                  }
                  else
                  {
                    v49 = (float)(v38 - v31) / (float)(v40 - v31);
                    v31 = v38;
                  }
                  if ( v40 <= v42 )
                  {
                    v35 = 0.0;
                  }
                  else
                  {
                    v35 = (float)(v40 - v42) / v22;
                    v40 = v42;
                  }
                }
                (*(void (__fastcall **)(unsigned int, _DWORD *, int *, float *))(*(_DWORD *)v11 + 64))(
                  v11,
                  v65,
                  &v60,
                  &v61);
                v23 = v60;
                if ( *(_DWORD *)(v11 + 80) == 0 )
                  *(_DWORD *)(v11 + 80) = v60;
                if ( *(_DWORD *)(v11 + 80) == v23 )
                {
                  v54 = v63 - v61;
                  v55 = v64 - v62;
                  v62 = v62 + (float)(v50 * (float)(v64 - v62));
                  v64 = v64 - (float)(v51 * v55);
                  v61 = v61 + (float)(v49 * (float)(v63 - v61));
                  v63 = v63 - (float)(v35 * v54);
                  HIBYTE(v57) = v14;
                  if ( a8 == 1 || a8 == 2 )
                    Ogre::RFontBase::DoRenderOneShadowCharacter(v11, v31, v32, v40 - v31, v37 - v32, &v61, &v57);
                  v24 = *(_DWORD *)(v11 + 84) + 36 * *(_DWORD *)(v11 + 72);
                  *(float *)v24 = v31;
                  *(float *)(v24 + 4) = v32;
                  *(float *)(v24 + 8) = v31 + (float)(v40 - v31);
                  *(float *)(v24 + 12) = v32 + (float)(v37 - v32);
                  v25 = v62;
                  v26 = v63;
                  *(float *)(v24 + 16) = v61;
                  *(float *)(v24 + 20) = v25;
                  *(float *)(v24 + 24) = v26;
                  *(float *)(v24 + 28) = v64;
                  *(_BYTE *)(v24 + 32) = v41;
                  *(_BYTE *)(v24 + 33) = v39;
                  *(_BYTE *)(v24 + 34) = v34;
                  *(_BYTE *)(v24 + 35) = v14;
                  ++*(_DWORD *)(v11 + 72);
                  ++v47;
                  v33 = v33 + v58;
                  v12 += v52;
                }
                if ( v47 >= *(_DWORD *)(v11 + 40) || *(int *)(v11 + 72) > 2047 || *(_DWORD *)(v11 + 80) != v60 )
                  Ogre::RFontBase::RenderText((Ogre::RFontBase *)v11, 0.0);
              }
              else
              {
                v12 += v52;
                v33 = v33 + v58;
              }
            }
          }
        }
        v27 = *v12;
        if ( v27 == 82 )
        {
          v14 = -1;
          ++v12;
          v34 = -1;
          goto LABEL_71;
        }
        if ( v27 > 0x52 )
          break;
        switch ( v27 )
        {
          case 'G':
            v14 = -1;
            ++v12;
            v34 = 0;
            v39 = -1;
            goto LABEL_69;
          case 'K':
            ++v12;
            v14 = -1;
            v34 = 0;
LABEL_71:
            v39 = 0;
LABEL_69:
            v41 = 0;
            break;
          case 'B':
            v34 = 0;
            ++v12;
            v14 = -1;
            v39 = 0x80;
LABEL_73:
            v41 = -1;
            break;
          default:
            break;
        }
LABEL_80:
        if ( i != 0 )
        {
          if ( v46 == 1 )
            goto LABEL_82;
          goto LABEL_87;
        }
      }
      if ( v27 == 89 )
      {
        v14 = -1;
        ++v12;
        v34 = -1;
        v39 = -1;
        goto LABEL_69;
      }
      if ( v27 <= 0x59 )
      {
        if ( *v12 == 87 )
        {
          v14 = -1;
          ++v12;
          v34 = -1;
          v39 = -1;
          goto LABEL_73;
        }
        goto LABEL_80;
      }
      if ( v27 != 98 )
      {
        if ( *v12 == 110 )
        {
          ++v12;
          v41 = *a7;
          v39 = a7[1];
          v34 = a7[2];
          v14 = a7[3];
          goto LABEL_3;
        }
        goto LABEL_80;
      }
      v28 = v12[1];
      if ( v28 == 49 )
      {
        v12 += 2;
LABEL_79:
        v46 = 1;
LABEL_82:
        v29 = Ogre::Timer::getSystemTick(v16, v17) % 0x4B0u;
        if ( v29 > 599 )
          v29 = 1199 - v29;
        v30 = 320 * v29 / 600;
        if ( v30 > 255 )
          LOBYTE(v30) = -1;
        v14 = v30;
        v15 = 1;
        goto LABEL_4;
      }
      if ( v28 != 50 )
      {
        ++v12;
        goto LABEL_79;
      }
      v12 += 2;
      v46 = 2;
LABEL_87:
      if ( ((Ogre::Timer::getSystemTick(v16, v17) / 0x258u) & 1) != 0 )
      {
        v14 = 0;
        v34 = 0;
        v39 = 0;
        v41 = 0;
      }
    }
  }
  return result;
}


//======================================================================
// Ogre::RFontBase::DoRenderOneCharacterOnLimitRect(float &,char const*&,Ogre::ColorQuad &,Ogre::ColorQuad const&,unsigned int,unsigned char *,int,float)
// address: 0x00199750   size: 0x190 (400 bytes)
//======================================================================
int __fastcall Ogre::RFontBase::DoRenderOneCharacterOnLimitRect(
        Ogre::RFontBase *a1,
        float *a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9)
{
  void *v10; // r3
  int v11; // r6
  float v12; // r7
  float v13; // r0
  int v14; // r1
  int v15; // r5
  float v17; // [sp+1Ch] [bp-28h]
  float v21; // [sp+30h] [bp-14h]
  float v22; // [sp+34h] [bp-10h]
  void *v23; // [sp+3Ch] [bp-8h] BYREF

  if ( (dword_4C6EB4 & 1) == 0 && _cxa_guard_acquire(&dword_4C6EB4) != 0 )
    _cxa_guard_release(&dword_4C6EB4);
  v23 = nullptr;
  (*(void (__fastcall **)(Ogre::RFontBase *, int, void **, int *))(*(_DWORD *)a1 + 64))(a1, a7, &v23, &dword_4C6EB8);
  v10 = v23;
  if ( *((_DWORD *)a1 + 20) == 0 )
    *((_DWORD *)a1 + 20) = v23;
  if ( *((void **)a1 + 20) == v10 )
  {
    v21 = *(float *)&dword_4C6EC0 - *(float *)&dword_4C6EB8;
    v22 = *(float *)&dword_4C6EC4 - *(float *)&dword_4C6EBC;
    *(float *)&dword_4C6EBC = *(float *)&dword_4C6EBC
                            + (float)((float)(*(float *)&dword_4C6EC4 - *(float *)&dword_4C6EBC)
                                    * *(float *)&dword_4C6EE0);
    *(float *)&dword_4C6EC4 = *(float *)&dword_4C6EC4 - (float)(v22 * *(float *)&dword_4C6EE8);
    *(float *)&dword_4C6EB8 = *(float *)&dword_4C6EB8
                            + (float)((float)(*(float *)&dword_4C6EC0 - *(float *)&dword_4C6EB8)
                                    * *(float *)&Ogre::RFontBase::ms_curParseTextOffsetScreenRect);
    *(float *)&dword_4C6EC0 = *(float *)&dword_4C6EC0 - (float)(v21 * *(float *)&dword_4C6EE4);
    *(_BYTE *)(a4 + 3) = *(_BYTE *)(a5 + 3);
    if ( (unsigned int)(a6 - 1) <= 1 )
      Ogre::RFontBase::DoRenderOneShadowCharacter(
        (unsigned int)a1,
        *(float *)&Ogre::RFontBase::ms_curParseTextNoClipScreenRect,
        *(float *)&dword_4C6EF0,
        *(float *)&dword_4C6EF4 - *(float *)&Ogre::RFontBase::ms_curParseTextNoClipScreenRect,
        *(float *)&dword_4C6EF8 - *(float *)&dword_4C6EF0,
        &dword_4C6EB8,
        (_DWORD *)a4);
    v11 = *((_DWORD *)a1 + 21) + 36 * *((_DWORD *)a1 + 18);
    v12 = *(float *)&dword_4C6EF0;
    v17 = *(float *)&Ogre::RFontBase::ms_curParseTextNoClipScreenRect
        + (float)(*(float *)&dword_4C6EF4 - *(float *)&Ogre::RFontBase::ms_curParseTextNoClipScreenRect);
    v13 = *(float *)&dword_4C6EF8 - *(float *)&dword_4C6EF0;
    *(_DWORD *)v11 = Ogre::RFontBase::ms_curParseTextNoClipScreenRect;
    *(float *)(v11 + 12) = v12 + v13;
    *(float *)(v11 + 8) = v17;
    *(float *)(v11 + 4) = v12;
    v14 = dword_4C6EBC;
    v15 = dword_4C6EC0;
    *(_DWORD *)(v11 + 16) = dword_4C6EB8;
    *(_DWORD *)(v11 + 20) = v14;
    *(_DWORD *)(v11 + 24) = v15;
    *(_DWORD *)(v11 + 28) = dword_4C6EC4;
    *(_DWORD *)(v11 + 32) = *(_DWORD *)a5;
    ++*((_DWORD *)a1 + 18);
    ++*((_DWORD *)a1 + 19);
    *a3 += a8;
    *a2 = *a2 + a9;
  }
  return Ogre::RFontBase::ValidateMaxCharactersToRender(a1, v23, 0.0);
}


//======================================================================
// Ogre::RFontBase::CalculateNoClipAndOffsetScreenRect(Ogre::TRect<float> const&,bool)
// address: 0x001998F8   size: 0xD6 (214 bytes)
//======================================================================
int __fastcall Ogre::RFontBase::CalculateNoClipAndOffsetScreenRect(int a1, float *a2, int a3)
{
  int result; // r0
  float v4; // [sp+0h] [bp-14h]
  float v5; // [sp+4h] [bp-10h]
  float v6; // [sp+8h] [bp-Ch]
  float v7; // [sp+8h] [bp-Ch]

  Ogre::RFontBase::ms_curParseTextOffsetScreenRect = 0;
  dword_4C6EE0 = 0;
  dword_4C6EE4 = 0;
  dword_4C6EE8 = 0;
  v6 = *(float *)&dword_4C6EF8 - *(float *)&dword_4C6EF0;
  v5 = a2[1];
  if ( *(float *)&dword_4C6EF0 < v5 )
  {
    *(float *)&dword_4C6EE0 = (float)(v5 - *(float *)&dword_4C6EF0) / v6;
    dword_4C6EF0 = *((_DWORD *)a2 + 1);
  }
  v4 = a2[3];
  result = *(float *)&dword_4C6EF8 > v4;
  if ( *(float *)&dword_4C6EF8 > v4 )
  {
    *(float *)&result = (float)(*(float *)&dword_4C6EF8 - v4) / v6;
    dword_4C6EE8 = result;
    dword_4C6EF8 = *((_DWORD *)a2 + 3);
  }
  if ( a3 == 0 )
  {
    v7 = *(float *)&dword_4C6EF4 - *(float *)&Ogre::RFontBase::ms_curParseTextNoClipScreenRect;
    if ( *(float *)&Ogre::RFontBase::ms_curParseTextNoClipScreenRect < *a2 )
    {
      *(float *)&Ogre::RFontBase::ms_curParseTextOffsetScreenRect = (float)(*a2
                                                                          - *(float *)&Ogre::RFontBase::ms_curParseTextNoClipScreenRect)
                                                                  / v7;
      Ogre::RFontBase::ms_curParseTextNoClipScreenRect = *(_DWORD *)a2;
    }
    result = *(float *)&dword_4C6EF4 > a2[2];
    if ( *(float *)&dword_4C6EF4 > a2[2] )
    {
      *(float *)&result = (float)(*(float *)&dword_4C6EF4 - a2[2]) / v7;
      dword_4C6EE4 = result;
      dword_4C6EF4 = *((_DWORD *)a2 + 2);
    }
  }
  return result;
}


//======================================================================
// Ogre::RFontBase::PrepareRenderOneCharacterOnLimitRect(float &,int &,float &,float &,Ogre::TRect<float> &,char const*&,unsigned char *,float,bool,bool,float,float)
// address: 0x001999D8   size: 0x184 (388 bytes)
//======================================================================
int __fastcall Ogre::RFontBase::PrepareRenderOneCharacterOnLimitRect(
        int a1,
        float *a2,
        int *a3,
        float *a4,
        float *a5,
        float *a6,
        const char **a7,
        int a8,
        float a9,
        unsigned __int8 a10,
        bool a11,
        float a12,
        float a13)
{
  float v14; // r0
  float v15; // r4
  int v16; // r0
  int v17; // r0
  float v18; // r1
  float v19; // r5
  float v20; // r0
  float v22; // [sp+0h] [bp-2Ch]
  float v23; // [sp+0h] [bp-2Ch]
  float v24; // [sp+4h] [bp-28h]
  float v28[2]; // [sp+24h] [bp-8h] BYREF

  if ( a10 != 0 )
  {
    v14 = COERCE_FLOAT(Ogre::RFontBase::MinDisToNewLine((Ogre::RFontBase *)a1, *a7, a11));
    v15 = *a6;
    if ( v14 > (float)(a6[2] - *a6) )
      a6[2] = v15 + v14;
    if ( (float)(v14 + *a4) > a6[2] )
    {
      *a4 = v15;
      *a5 = *a5 + (float)((float)(*(float *)(a1 + 32) + *(float *)(a1 + 36)) * a9);
      v16 = (*(int (__fastcall **)(_DWORD, const char *))(**(_DWORD **)(a1 + 64) + 8))(*(_DWORD *)(a1 + 64), *a7);
      if ( v16 != 0 )
      {
        *a7 += v16;
        return 0;
      }
    }
  }
  v17 = (*(int (__fastcall **)(_DWORD, const char *, int))(**(_DWORD **)(a1 + 64) + 12))(*(_DWORD *)(a1 + 64), *a7, a8);
  v28[0] = 0.0;
  *a3 = v17;
  (*(void (__fastcall **)(int, int, float *, float *))(*(_DWORD *)a1 + 36))(a1, a8, a2, v28);
  v18 = v28[0];
  v19 = a9 * *a2;
  *a2 = v19;
  v22 = a9 * v18;
  v28[0] = a9 * v18;
  v20 = *a4;
  v24 = *a5;
  if ( a10 == 0 )
    v20 = v20 + a12;
  Ogre::RFontBase::ms_curParseTextNoClipScreenRect = LODWORD(v20);
  *(float *)&dword_4C6EF4 = v20 + v19;
  *(float *)&dword_4C6EF0 = v24 + a13;
  *(float *)&dword_4C6EF8 = (float)(v24 + a13) + v22;
  v23 = (float)(v24 + a13) + v22;
  if ( (float)(v24 + a13) >= a6[3] || v23 <= a6[1] || a10 == 0 && (v20 >= a6[2] || (float)(v20 + v19) <= *a6) )
  {
    *a7 += *a3;
    *a4 = *a4 + *a2;
    return 0;
  }
  Ogre::RFontBase::CalculateNoClipAndOffsetScreenRect(a1, a6, a10);
  return 1;
}


//======================================================================
// Ogre::RFontBase::OnParseOneCharacterOnLimitRect(Ogre::TRect<float> &,char const*&,float &,float &,Ogre::ColorQuad &,Ogre::ColorQuad &,bool &,int &,float,float,Ogre::EControlCode,float,unsigned int,Ogre::ColorQuad const&,bool,bool)
// address: 0x00199B60   size: 0xF2 (242 bytes)
//======================================================================
int __fastcall Ogre::RFontBase::OnParseOneCharacterOnLimitRect(
        float *a1,
        float *a2,
        int *a3,
        float *a4,
        float *a5,
        int a6,
        _BYTE *a7,
        _BYTE *a8,
        Ogre::Timer *a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        _DWORD *a15,
        char a16,
        char a17)
{
  int v19; // r4
  float v22; // [sp+4Ch] [bp-18h] BYREF
  int v23; // [sp+50h] [bp-14h] BYREF
  _DWORD v24[2]; // [sp+54h] [bp-10h] BYREF

  switch ( a12 )
  {
    case 3:
      return 0;
    case 2:
      *a4 = *a2;
      *a5 = *a5 + (float)((float)(a1[8] + a1[9]) * *(float *)&a13);
      return 1;
    case 4:
      Ogre::RFontBase::OnParseTransferCharacter((int)a1, a3, a7, a8, a9, a15);
      return 1;
    default:
      break;
  }
  if ( a12 != 0 )
    return 1;
  v22 = 0.0;
  v23 = 0;
  v24[0] = 0;
  v24[1] = 0;
  v19 = 1;
  if ( Ogre::RFontBase::PrepareRenderOneCharacterOnLimitRect(
         (int)a1,
         &v22,
         &v23,
         a4,
         a5,
         a2,
         (const char **)a3,
         (int)v24,
         *(float *)&a13,
         a16,
         a17,
         *(float *)&a10,
         *(float *)&a11) != 0 )
    Ogre::RFontBase::DoRenderOneCharacterOnLimitRect(
      (Ogre::RFontBase *)a1,
      a4,
      a3,
      a6,
      (int)a7,
      a14,
      (int)v24,
      v23,
      v22);
  return v19;
}

