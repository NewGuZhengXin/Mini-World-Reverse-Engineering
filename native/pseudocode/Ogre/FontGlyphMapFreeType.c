// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::FontGlyphMapFreeType

//======================================================================
// Ogre::FontGlyphMapFreeType::~FontGlyphMapFreeType()
// address: 0x00154A7C   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre20FontGlyphMapFreeTypeD1Ev'
void __fastcall Ogre::FontGlyphMapFreeType::~FontGlyphMapFreeType(Ogre::FontGlyphMapFreeType *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_456490;
  v2 = *((void **)this + 265);
  if ( v2 != nullptr )
    operator delete[](v2);
  *(_DWORD *)this = &off_456040;
}


//======================================================================
// Ogre::FontGlyphMapFreeType::~FontGlyphMapFreeType()
// address: 0x00154AB0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::FontGlyphMapFreeType::~FontGlyphMapFreeType(Ogre::FontGlyphMapFreeType *this)
{
  Ogre::FontGlyphMapFreeType::~FontGlyphMapFreeType(this);
  operator delete(this);
}


//======================================================================
// Ogre::FontGlyphMapFreeType::GetCharSize(unsigned short,float &,float &)
// address: 0x00154AC2   size: 0x2A (42 bytes)
//======================================================================
float __fastcall Ogre::FontGlyphMapFreeType::GetCharSize(
        Ogre::FontGlyphMapFreeType *this,
        unsigned int a2,
        float *a3,
        float *a4)
{
  float result; // r0

  if ( a2 > 0xFF )
    *a3 = (float)*((int *)this + 5);
  else
    *a3 = *((float *)this + a2 + 9);
  result = (float)*((int *)this + 6);
  *a4 = result;
  return result;
}


//======================================================================
// Ogre::FontGlyphMapFreeType::InitFreeType(void)
// address: 0x00154B10   size: 0x12 (18 bytes)
//======================================================================
bool __fastcall Ogre::FontGlyphMapFreeType::InitFreeType(Ogre::FontGlyphMapFreeType *this)
{
  return FT_Init_FreeType(&Ogre::FontGlyphMapFreeType::m_pkFTLibrary) == 0;
}


//======================================================================
// Ogre::FontGlyphMapFreeType::TerminateFreeType(void)
// address: 0x00154B28   size: 0x44 (68 bytes)
//======================================================================
int __fastcall Ogre::FontGlyphMapFreeType::TerminateFreeType(Ogre::FontGlyphMapFreeType *this)
{
  unsigned int i; // r5
  int v2; // r6
  int v3; // r0

  for ( i = 0; i < -1431655765 * ((dword_472764 - Ogre::FontGlyphMapFreeType::m_vecFontFaces) >> 2); ++i )
  {
    v2 = Ogre::FontGlyphMapFreeType::m_vecFontFaces + 12 * i;
    FT_Done_Face(*(_DWORD *)(v2 + 4));
    v3 = *(_DWORD *)(v2 + 8);
    if ( v3 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  }
  return FT_Done_FreeType(Ogre::FontGlyphMapFreeType::m_pkFTLibrary);
}


//======================================================================
// Ogre::FontGlyphMapFreeType::FontGlyphMapFreeType(void)
// address: 0x00154B78   size: 0x30 (48 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre20FontGlyphMapFreeTypeC2Ev'
Ogre::FontGlyphMapFreeType *__fastcall Ogre::FontGlyphMapFreeType::FontGlyphMapFreeType(
        Ogre::FontGlyphMapFreeType *this)
{
  *(_DWORD *)this = &off_456490;
  *((_DWORD *)this + 265) = 0;
  *((_BYTE *)this + 16) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 7) = 0;
  j_memset((char *)this + 36, 0, 0x400u);
  return this;
}


//======================================================================
// Ogre::FontGlyphMapFreeType::LoadCharGlyph(unsigned short)
// address: 0x00154BB0   size: 0x2A (42 bytes)
//======================================================================
int __fastcall Ogre::FontGlyphMapFreeType::LoadCharGlyph(Ogre::FontGlyphMapFreeType *this, int a2)
{
  int result; // r0

  FT_Set_Pixel_Sizes(*((_DWORD *)this + 8), *((_DWORD *)this + 5), *((_DWORD *)this + 6));
  result = FT_Load_Char(*((_DWORD *)this + 8), a2, 65540);
  if ( result != 0 )
    return FT_Load_Char(*((_DWORD *)this + 8), a2, 0);
  return result;
}


//======================================================================
// Ogre::FontGlyphMapFreeType::GetCharBitmap(unsigned short)
// address: 0x00154BE0   size: 0x19C (412 bytes)
//======================================================================
int __fastcall Ogre::FontGlyphMapFreeType::GetCharBitmap(void **this, unsigned __int16 a2)
{
  int v3; // r2
  int v4; // r6
  int v5; // r5
  int v6; // r3
  int v7; // r2
  int v8; // r1
  int i; // r7
  int v10; // r12
  int v11; // r1
  int j; // r1
  int v13; // r1
  signed int m; // r3
  char *v15; // r5
  _BYTE *v16; // r7
  int k; // r0
  char v18; // r6
  const char *v19; // r1
  int v20; // r0
  _BYTE *n; // r2
  _BYTE *v23; // [sp+0h] [bp-1Ch]
  int v24; // [sp+14h] [bp-8h]

  Ogre::FontGlyphMapFreeType::LoadCharGlyph((Ogre::FontGlyphMapFreeType *)this, a2);
  v3 = *((_DWORD *)*(this + 8) + 21);
  v4 = (int)*(this + 1) - *(_DWORD *)(v3 + 36) / 64;
  v24 = v4 + 1;
  v5 = *(_DWORD *)(v3 + 32);
  j_memset(*(this + 265), 0, (_DWORD)*(this + 7) * (_DWORD)*(this + 5));
  v6 = *((_DWORD *)*(this + 8) + 21);
  if ( *(_DWORD *)(v6 + 76) >= (int)*(this + 7) )
    v24 &= (v4 | v24) >> 31;
  v7 = 0;
  if ( *(_DWORD *)(v6 + 80) < (int)*(this + 5) )
    v7 = (v5 / 64) & (~(v5 / 64) >> 31);
  v8 = *(unsigned __int8 *)(v6 + 94);
  if ( v8 == 1 )
  {
    for ( i = v24; i - v24 < *(_DWORD *)(v6 + 76); ++i )
    {
      if ( i >= 0 && i < (int)*(this + 7) )
      {
        v10 = *(_DWORD *)(v6 + 88) + (i - v24) * *(_DWORD *)(v6 + 84);
        v11 = v7;
        v23 = (char *)*(this + 265) + (_DWORD)*(this + 5) * i + v7;
        while ( v11 - v7 < *(_DWORD *)(v6 + 80) )
        {
          if ( v11 >= 0 && v11 < (int)*(this + 5) )
          {
            if ( ((128 >> ((v11 - v7) & 7)) & *(unsigned __int8 *)(v10 + (v11 - v7) / 8)) != 0 )
              *v23 = -1;
            else
              *v23 = 0;
            ++v23;
          }
          ++v11;
        }
      }
    }
  }
  else if ( v8 == 2 )
  {
    for ( j = v24; j - v24 < *(_DWORD *)(v6 + 76); ++j )
    {
      if ( j >= 0 && j < (int)*(this + 7) )
      {
        v15 = (char *)(*(_DWORD *)(v6 + 88) + (j - v24) * *(_DWORD *)(v6 + 84));
        v16 = (char *)*(this + 265) + (_DWORD)*(this + 5) * j + v7;
        for ( k = v7; k - v7 < *(_DWORD *)(v6 + 80); ++k )
        {
          if ( k >= 0 && k < (int)*(this + 5) )
          {
            v18 = *v15++;
            *v16++ = v18;
          }
        }
      }
    }
  }
  if ( *((_BYTE *)this + 16) != 0 )
  {
    v13 = (_BYTE *)*(this + 1) - (_BYTE *)*(this + 2);
    for ( m = v13; m - v13 < (int)*(this + 3); ++m )
    {
      if ( m >= (int)*(this + 7) )
      {
        Ogre::LogSetCurParam(
          (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreFontGlyphMapFreeType.cpp",
          (const char *)&dword_E0 + 2,
          4,
          m);
        Ogre::LogMessage((Ogre *)&unk_3FC356, v19);
        return (int)*(this + 265);
      }
      v20 = (int)*(this + 265) + (_DWORD)*(this + 5) * m;
      for ( n = (_BYTE *)v20; (int)&n[-v20] < (int)*(this + 5); ++n )
        *n = -1;
    }
  }
  return (int)*(this + 265);
}


//======================================================================
// Ogre::FontGlyphMapFreeType::CreateFontFace(char const*)
// address: 0x00154EF4   size: 0xE0 (224 bytes)
//======================================================================
int __fastcall Ogre::FontGlyphMapFreeType::CreateFontFace(Ogre::FontGlyphMapFreeType *this, const char *a2)
{
  int v3; // r4
  unsigned int i; // r6
  int v5; // r0
  int v6; // r4
  int v7; // r0
  int v8; // r4
  int v10; // [sp+8h] [bp-1Ch]
  int v11; // [sp+Ch] [bp-18h]
  int v12; // [sp+10h] [bp-14h] BYREF
  char *v13; // [sp+14h] [bp-10h] BYREF
  int v14; // [sp+18h] [bp-Ch]
  int v15; // [sp+1Ch] [bp-8h]

  v3 = Ogre::FontGlyphMapFreeType::m_pkFTLibrary;
  if ( Ogre::FontGlyphMapFreeType::m_pkFTLibrary != 0 )
  {
    for ( i = 0; i < -1431655765 * ((dword_472764 - Ogre::FontGlyphMapFreeType::m_vecFontFaces) >> 2); ++i )
    {
      if ( sub_3BDD5C(Ogre::FontGlyphMapFreeType::m_vecFontFaces + 12 * i, (char *)this) == 0 )
        return *(_DWORD *)(Ogre::FontGlyphMapFreeType::m_vecFontFaces + 12 * i + 4);
    }
    v12 = 0;
    v5 = Ogre::FileManager::openFile(
           (Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton,
           (const char *)this,
           true);
    v6 = v5;
    if ( v5 != 0 )
    {
      v10 = Ogre::FontGlyphMapFreeType::m_pkFTLibrary;
      v11 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 56))(v5);
      v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 48))(v6);
      FT_New_Memory_Face(v10, v11, v7, 0, &v12);
    }
    v13 = &byte_55FB88;
    sub_3BE508((int)&v13, (char *)this);
    v15 = v6;
    v8 = dword_472764;
    v14 = v12;
    if ( dword_472764 == dword_472768 )
    {
      std::vector<Ogre::FontGlyphMapFreeType::FontFaceInfo>::_M_insert_aux(
        (char **)&Ogre::FontGlyphMapFreeType::m_vecFontFaces,
        (char *)dword_472764,
        (int)&v13);
    }
    else
    {
      if ( dword_472764 != 0 )
      {
        sub_3BEB1C(dword_472764, &v13);
        *(_DWORD *)(v8 + 4) = v14;
        *(_DWORD *)(v8 + 8) = v15;
      }
      dword_472764 += 12;
    }
    v3 = v12;
    sub_3BDF80(&v13);
  }
  return v3;
}


//======================================================================
// Ogre::FontGlyphMapFreeType::Init(int,int,char const*,unsigned int)
// address: 0x00154FE8   size: 0xE0 (224 bytes)
//======================================================================
int __fastcall Ogre::FontGlyphMapFreeType::Init(
        Ogre::FontGlyphMapFreeType *this,
        const char *a2,
        int a3,
        Ogre::FontGlyphMapFreeType *a4,
        char a5)
{
  int result; // r0
  int v7; // r5
  __int16 v8; // r6
  float v9; // r0
  int v10; // r0
  int v11; // r5
  float *v12; // r6

  result = Ogre::FontGlyphMapFreeType::CreateFontFace(a4, a2);
  v7 = result;
  *((_DWORD *)this + 8) = result;
  if ( result != 0 )
  {
    v8 = *(_WORD *)(result + 70);
    v9 = (float)a3 / (float)(v8 - *(__int16 *)(result + 72));
    *((_DWORD *)this + 1) = (int)(float)((float)v8 * v9);
    *((_DWORD *)this + 2) = (int)(float)((float)*(__int16 *)(v7 + 80) * v9);
    v10 = (int)(float)((float)*(__int16 *)(v7 + 82) * v9);
    if ( v10 <= 0 )
      *((_DWORD *)this + 3) = 1;
    else
      *((_DWORD *)this + 3) = v10;
    v11 = 0;
    *((_DWORD *)this + 5) = a2;
    *((_DWORD *)this + 6) = a3;
    *((_BYTE *)this + 16) = (a5 & 2) != 0;
    *((_DWORD *)this + 7) = a3 + 1;
    *((_DWORD *)this + 265) = operator new[]((a3 + 1) * (_DWORD)a2);
    do
    {
      Ogre::FontGlyphMapFreeType::LoadCharGlyph(this, (unsigned __int16)v11);
      v12 = (float *)((char *)this + 4 * v11++);
      v12[9] = (float)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 8) + 84) + 40) / 64);
    }
    while ( v11 != 256 );
    return 1;
  }
  return result;
}

