// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RFontCommonImpl

//======================================================================
// Ogre::RFontCommonImpl::JustBeforeRender(void)
// address: 0x0014E834   size: 0x1C (28 bytes)
//======================================================================
int __fastcall Ogre::RFontCommonImpl::JustBeforeRender(int this)
{
  int v1; // r4

  v1 = this;
  if ( *(_DWORD *)(this + 104) != 0 )
  {
    this = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 96) + 40))(*(_DWORD *)(this + 96), 0, 0);
    *(_DWORD *)(v1 + 104) = 0;
  }
  return this;
}


//======================================================================
// Ogre::RFontCommonImpl::IsSameness(int,int,char const*,Ogre::ECharacterCoding,unsigned int)
// address: 0x0014E850   size: 0x32 (50 bytes)
//======================================================================
bool __fastcall Ogre::RFontCommonImpl::IsSameness(_DWORD *a1, int a2, int a3, char *a4, int a5, int a6)
{
  int v7; // r5
  _BOOL4 result; // r0

  v7 = a1[5];
  result = false;
  if ( v7 == a2 && a1[6] == a3 + 1 && a1[2] == a5 && a1[3] == a6 )
    return sub_3BDD5C((int)(a1 + 1), a4) == 0;
  return result;
}


//======================================================================
// Ogre::RFontCommonImpl::UseCacheCell(Ogre::CacheUseLinkNode *)
// address: 0x0014E882   size: 0x46 (70 bytes)
//======================================================================
int __fastcall Ogre::RFontCommonImpl::UseCacheCell(int a1, int a2)
{
  _DWORD *v2; // r2
  int v3; // r3
  int result; // r0
  int v5; // r1

  v2 = (_DWORD *)(a1 + 148);
  v3 = *(_DWORD *)(a1 + 148);
  result = a1 + 152;
  if ( v3 == a2 )
  {
    v5 = *(_DWORD *)(v3 + 12);
    *v2 = v5;
    *(_DWORD *)(v5 + 8) = 0;
    *(_DWORD *)(*(_DWORD *)result + 12) = v3;
    *(_DWORD *)(v3 + 8) = *(_DWORD *)result;
    *(_DWORD *)result = v3;
    *(_DWORD *)(v3 + 12) = 0;
  }
  else if ( *(_DWORD *)result != a2 )
  {
    *(_DWORD *)(*(_DWORD *)(a2 + 8) + 12) = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(*(_DWORD *)(a2 + 12) + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(*(_DWORD *)result + 12) = a2;
    *(_DWORD *)(a2 + 8) = *(_DWORD *)result;
    *(_DWORD *)result = a2;
    *(_DWORD *)(a2 + 12) = 0;
  }
  return result;
}


//======================================================================
// Ogre::RFontCommonImpl::CreateTexture(void)
// address: 0x0014E8C8   size: 0xE0 (224 bytes)
//======================================================================
int __fastcall Ogre::RFontCommonImpl::CreateTexture(Ogre::RFontCommonImpl *this)
{
  int v2; // r6
  int v4; // r6
  int v5; // r0
  char *v6; // r5
  int v7; // r1
  int v8; // r5
  int v9; // r0
  _BYTE v10[4]; // [sp+14h] [bp-Ch] BYREF
  size_t v11; // [sp+18h] [bp-8h]
  _DWORD v12[7]; // [sp+20h] [bp+0h] BYREF
  char s[256]; // [sp+3Ch] [bp+1Ch] BYREF

  j_memset(v12, 0, sizeof(v12));
  v12[1] = 256;
  v12[2] = 256;
  v12[4] = 1;
  v12[5] = 3;
  v2 = operator new(0x48u);
  Ogre::TextureData::TextureData(v2, v12, 0);
  *((_DWORD *)this + 24) = v2;
  if ( v2 == 0 )
    return 0;
  j_sprintf(s, "FontCommon:%x", v2);
  v4 = 0;
  v5 = (*(int (__fastcall **)(_DWORD, char *, _DWORD, int, _DWORD, _DWORD))(**((_DWORD **)this + 4) + 76))(
         *((_DWORD *)this + 4),
         s,
         *((_DWORD *)this + 24),
         2,
         0,
         0);
  *((_DWORD *)this + 25) = v5;
  if ( v5 == 0 )
    return 0;
  v6 = (char *)(*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _BYTE *))(**((_DWORD **)this + 24) + 36))(
                 *((_DWORD *)this + 24),
                 0,
                 0,
                 0,
                 v10);
  if ( v6 == nullptr )
    return 0;
  while ( v4 < *((_DWORD *)this + 15) )
  {
    j_memset(v6, 0, v11);
    ++v4;
    v6 += v11;
  }
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 24) + 40))(*((_DWORD *)this + 24), 0, 0);
  v7 = *((_DWORD *)this + 6);
  v8 = *((_DWORD *)this + 14) / (*((_DWORD *)this + 5) + 1);
  *((_DWORD *)this + 28) = v8;
  v9 = *((_DWORD *)this + 15) / (v7 + 1);
  *((_DWORD *)this + 29) = v9;
  *((_DWORD *)this + 10) = v8 * v9;
  return 1;
}


//======================================================================
// Ogre::RFontCommonImpl::Init(Ogre::UIRenderer *,int,int,char const*,Ogre::ECharacterCoding,unsigned int)
// address: 0x0014E9B0   size: 0x136 (310 bytes)
//======================================================================
_DWORD *__fastcall Ogre::RFontCommonImpl::Init(int a1, int a2, int a3, int a4, char *a5, int a6, unsigned int a7)
{
  _DWORD *result; // r0
  int v11; // r7
  unsigned int v12; // r0
  unsigned int v13; // r0
  int *v14; // r1
  int v15; // r12
  int v16; // r0
  int v17; // r2
  int v18; // r2
  _DWORD *v19; // r0
  int **v20; // r3
  Ogre::FontGlyphMapFreeType *v21; // r5
  int v22; // r2

  if ( a2 != 0 )
  {
    *(_DWORD *)(a1 + 16) = a2;
    sub_3BE508(a1 + 4, a5);
    *(_DWORD *)(a1 + 8) = a6;
    *(_DWORD *)(a1 + 12) = a7;
    if ( a5 != nullptr )
    {
      v11 = a4 + 1;
      *(float *)(a1 + 28) = (float)a3;
      *(_DWORD *)(a1 + 20) = a3;
      *(_DWORD *)(a1 + 24) = v11;
      *(float *)(a1 + 32) = (float)v11;
      if ( Ogre::RFontCommonImpl::CreateTexture((Ogre::RFontCommonImpl *)a1) != 0 )
      {
        v12 = *(_DWORD *)(a1 + 40);
        if ( v12 > 0x7F00000 )
          v13 = -1;
        else
          v13 = 16 * v12;
        result = (_DWORD *)operator new[](v13);
        v14 = (int *)(a1 + 144);
        *(_DWORD *)(a1 + 144) = result;
        if ( result != nullptr )
        {
          *result = 0;
          *(_DWORD *)(*v14 + 4) = 0;
          *(_DWORD *)(*v14 + 8) = 0;
          *(_DWORD *)(*v14 + 12) = *v14 + 16;
          v15 = *(_DWORD *)(a1 + 40) - 1;
          *(_DWORD *)(*v14 + 16 * v15) = v15;
          *(_DWORD *)(*v14 + 16 * v15 + 4) = 0;
          *(_DWORD *)(*v14 + 16 * v15 + 8) = *v14 + 16 * v15 - 16;
          *(_DWORD *)(*v14 + 16 * v15 + 12) = 0;
          v16 = 1;
          while ( v16 < v15 )
          {
            v17 = 16 * v16;
            *(_DWORD *)(*v14 + v17) = v16++;
            *(_DWORD *)(*v14 + v17 + 4) = 0;
            *(_DWORD *)(*v14 + v17 + 8) = *v14 + v17 - 16;
            *(_DWORD *)(*v14 + v17 + 12) = *v14 + v17 + 16;
          }
          v18 = *v14;
          *(_DWORD *)(a1 + 148) = *v14;
          *(_DWORD *)(a1 + 152) = v18 + 16 * v15;
          if ( a6 == 1 )
          {
            v19 = (_DWORD *)operator new(4u);
            v20 = `vtable for'Ogre::CharacterCodingUtf8;
          }
          else
          {
            if ( a6 != 0 )
            {
LABEL_17:
              v21 = (Ogre::FontGlyphMapFreeType *)operator new(0x428u);
              Ogre::FontGlyphMapFreeType::FontGlyphMapFreeType(v21);
              v22 = *(_DWORD *)(a1 + 24);
              *(_DWORD *)(a1 + 68) = v21;
              return (_DWORD *)Ogre::FontGlyphMapFreeType::Init(
                                 v21,
                                 *(_DWORD *)(a1 + 20),
                                 v22 - 1,
                                 (Ogre::FontGlyphMapFreeType *)a5,
                                 a7);
            }
            v19 = (_DWORD *)operator new(4u);
            v20 = `vtable for'Ogre::CharacterCodingGbk;
          }
          *v19 = *v20 + 2;
          *(_DWORD *)(a1 + 64) = v19;
          goto LABEL_17;
        }
        return result;
      }
    }
  }
  return nullptr;
}


//======================================================================
// Ogre::RFontCommonImpl::UpdateTexture(unsigned char const*,int)
// address: 0x0014EAF4   size: 0xDA (218 bytes)
//======================================================================
int __fastcall Ogre::RFontCommonImpl::UpdateTexture(Ogre::RFontCommonImpl *this, const unsigned __int8 *a2, int a3)
{
  int result; // r0
  int v7; // r5
  int v8; // r0
  int v9; // r2
  int v10; // r1
  int v11; // r6
  int i; // r3
  int v13; // r1
  int v14; // r6
  int j; // r3
  int v16; // [sp+Ch] [bp-18h]
  int v17; // [sp+18h] [bp-Ch]

  result = *((_DWORD *)this + 24);
  if ( result != 0 )
  {
    if ( *((_DWORD *)this + 26) == 0 )
    {
      result = (*(int (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)result + 36))(result, 0, 0);
      *((_DWORD *)this + 26) = result;
      *((_DWORD *)this + 27) = v17;
    }
    if ( *((_DWORD *)this + 26) != 0 )
    {
      v16 = (*((_DWORD *)this + 5) + 1) * (a3 % *((_DWORD *)this + 28));
      v7 = (*((_DWORD *)this + 6) + 1) * (a3 / *((_DWORD *)this + 28));
      v8 = (*(int (__fastcall **)(_DWORD, const unsigned __int8 *))(**((_DWORD **)this + 16) + 32))(
             *((_DWORD *)this + 16),
             a2);
      result = (*(int (__fastcall **)(_DWORD, int))(**((_DWORD **)this + 17) + 12))(*((_DWORD *)this + 17), v8);
      v9 = v7;
      if ( *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 64) == 1 )
      {
        while ( v9 - v7 < *((_DWORD *)this + 6) )
        {
          v10 = result + (v9 - v7) * *((_DWORD *)this + 5);
          v11 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27) * v9 + v16;
          for ( i = 0; i < *((_DWORD *)this + 5); ++i )
            *(_BYTE *)(v11 + i) = *(_BYTE *)(v10 + i);
          ++v9;
        }
      }
      else
      {
        while ( v9 - v7 < *((_DWORD *)this + 6) )
        {
          v13 = result + (v9 - v7) * *((_DWORD *)this + 5);
          v14 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27) * v9 + v16;
          for ( j = 0; j < *((_DWORD *)this + 5); ++j )
            *(_BYTE *)(v14 + j) = *(_BYTE *)(v13 + j);
          ++v9;
        }
      }
    }
  }
  return result;
}


//======================================================================
// Ogre::RFontCommonImpl::~RFontCommonImpl()
// address: 0x0014EBF4   size: 0x96 (150 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15RFontCommonImplD1Ev'
void __fastcall Ogre::RFontCommonImpl::~RFontCommonImpl(Ogre::RFontCommonImpl *this)
{
  _DWORD *v2; // r0
  int v3; // r3
  void *v4; // r0
  int v5; // r0
  int v6; // r0

  *(_DWORD *)this = &off_456140;
  if ( *((_DWORD *)this + 25) != 0 && *((_DWORD *)this + 26) != 0 )
  {
    (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 24) + 40))(*((_DWORD *)this + 24), 0, 0);
    *((_DWORD *)this + 26) = 0;
  }
  if ( *((_DWORD *)this + 25) != 0 )
  {
    (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 4) + 92))(*((_DWORD *)this + 4));
    *((_DWORD *)this + 25) = 0;
  }
  v2 = *((_DWORD **)this + 24);
  if ( v2 != nullptr )
  {
    v3 = v2[1] - 1;
    v2[1] = v3;
    if ( v3 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v2 + 24))(v2);
    *((_DWORD *)this + 24) = 0;
  }
  v4 = *((void **)this + 36);
  if ( v4 != nullptr )
  {
    operator delete[](v4);
    *((_DWORD *)this + 36) = 0;
  }
  v5 = *((_DWORD *)this + 16);
  if ( v5 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
  v6 = *((_DWORD *)this + 17);
  if ( v6 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::_M_erase(
    (int)this + 120,
    *((_DWORD **)this + 32));
  Ogre::RFontBase::~RFontBase(this);
}


//======================================================================
// Ogre::RFontCommonImpl::~RFontCommonImpl()
// address: 0x0014EC90   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::RFontCommonImpl::~RFontCommonImpl(Ogre::RFontCommonImpl *this)
{
  Ogre::RFontCommonImpl::~RFontCommonImpl(this);
  operator delete(this);
}


//======================================================================
// Ogre::RFontCommonImpl::TextureMap(unsigned char const*,void *&,Ogre::TRect<float> &)
// address: 0x0014EE1C   size: 0x13C (316 bytes)
//======================================================================
float __fastcall Ogre::RFontCommonImpl::TextureMap(int a1, const unsigned __int8 *a2, _DWORD *a3, float *a4)
{
  unsigned int v6; // r0
  _DWORD *v7; // r3
  _DWORD *v8; // r2
  _DWORD *v9; // r5
  int v10; // r5
  int *v11; // r6
  int v12; // r1
  int *v13; // r0
  float v14; // r7
  float v15; // r6
  float v16; // r0
  float result; // r0
  float v18; // [sp+4h] [bp-28h]
  float v20; // [sp+Ch] [bp-20h]
  float v22; // [sp+14h] [bp-18h]
  unsigned int v23; // [sp+1Ch] [bp-10h] BYREF
  float v24; // [sp+20h] [bp-Ch] BYREF
  _BYTE v25[8]; // [sp+24h] [bp-8h] BYREF

  v6 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 64) + 36))(*(_DWORD *)(a1 + 64));
  v7 = *(_DWORD **)(a1 + 128);
  v23 = v6;
  v8 = (_DWORD *)(a1 + 124);
  while ( v7 != nullptr )
  {
    if ( v7[4] < v6 )
    {
      v9 = (_DWORD *)v7[3];
      v7 = v8;
    }
    else
    {
      v9 = (_DWORD *)v7[2];
    }
    v8 = v7;
    v7 = v9;
  }
  if ( v8 == (_DWORD *)(a1 + 124) || v6 < v8[4] || (v10 = v8[5]) == -1 )
  {
    v11 = (int *)(a1 + 148);
    v12 = *(_DWORD *)(a1 + 148);
    if ( *(_DWORD *)(v12 + 4) != 0 )
      *(_DWORD *)std::map<unsigned int,int>::operator[]((_DWORD *)(a1 + 120), (unsigned int *)(v12 + 4)) = -1;
    *(_DWORD *)(*v11 + 4) = v23;
    v13 = (int *)std::map<unsigned int,int>::operator[]((_DWORD *)(a1 + 120), &v23);
    v10 = *(_DWORD *)*v11;
    *v13 = v10;
    Ogre::RFontCommonImpl::UseCacheCell(a1, *v11);
    Ogre::RFontCommonImpl::UpdateTexture((Ogre::RFontCommonImpl *)a1, a2, v10);
  }
  else
  {
    Ogre::RFontCommonImpl::UseCacheCell(a1, *(_DWORD *)(a1 + 144) + 16 * v10);
  }
  v18 = (float)((*(_DWORD *)(a1 + 20) + 1) * (v10 % *(_DWORD *)(a1 + 112)));
  v20 = (float)(v10 / *(_DWORD *)(a1 + 112) * (*(_DWORD *)(a1 + 24) + 1));
  (*(void (__fastcall **)(int, const unsigned __int8 *, float *, _BYTE *))(*(_DWORD *)a1 + 40))(a1, a2, &v24, v25);
  v14 = v18 + v24;
  v22 = v20 + (float)*(int *)(a1 + 24);
  v15 = (float)*(int *)(a1 + 56);
  v16 = (float)*(int *)(a1 + 60);
  *a3 = *(_DWORD *)(a1 + 100);
  *a4 = v18 / v15;
  a4[1] = v20 / v16;
  a4[2] = v14 / v15;
  result = v22 / v16;
  a4[3] = result;
  return result;
}

