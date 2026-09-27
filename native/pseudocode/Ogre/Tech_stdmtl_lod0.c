// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Tech_stdmtl_lod0

//======================================================================
// Ogre::Tech_stdmtl_lod0::~Tech_stdmtl_lod0()
// address: 0x00260D94   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16Tech_stdmtl_lod0D1Ev'
void __fastcall Ogre::Tech_stdmtl_lod0::~Tech_stdmtl_lod0(Ogre::Tech_stdmtl_lod0 *this)
{
  *(_DWORD *)this = &off_45AD30;
  Ogre::TechPassData::~TechPassData(this);
}


//======================================================================
// Ogre::Tech_stdmtl_lod0::~Tech_stdmtl_lod0()
// address: 0x00260DB0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Tech_stdmtl_lod0::~Tech_stdmtl_lod0(Ogre::Tech_stdmtl_lod0 *this)
{
  Ogre::Tech_stdmtl_lod0::~Tech_stdmtl_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::Tech_stdmtl_lod0::init(Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x00262084   size: 0xEE (238 bytes)
//======================================================================
__int64 __fastcall Ogre::Tech_stdmtl_lod0::init(__int64 a1, _BYTE *a2)
{
  int v2; // r3
  int v3; // r4
  int v5; // r2
  char v6; // r2
  int v7; // r1
  int v8; // r1
  __int64 v10; // [sp+0h] [bp-Ch]

  v10 = a1;
  v2 = 0;
  v3 = a1;
  *(_BYTE *)(a1 + 339) = 0;
  *(_BYTE *)(a1 + 338) = 0;
  *(_BYTE *)(a1 + 337) = 0;
  *(_BYTE *)(a1 + 336) = 0;
  do
  {
    v5 = (unsigned __int8)a2[v2];
    if ( a2[v2] == 0 )
      break;
    if ( v5 == *(_DWORD *)(a1 + 320) )
    {
      v6 = a2[v2 + 4];
      v7 = 168;
      goto LABEL_11;
    }
    if ( v5 == *(_DWORD *)(a1 + 324) )
    {
      v6 = a2[v2 + 4];
      v8 = 82;
      goto LABEL_14;
    }
    if ( v5 == *(_DWORD *)(a1 + 328) )
    {
      v6 = a2[v2 + 4];
      v7 = 169;
LABEL_11:
      HIDWORD(a1) = 2 * v7;
LABEL_15:
      *(_BYTE *)(a1 + HIDWORD(a1)) = v6;
      goto LABEL_16;
    }
    if ( v5 == *(_DWORD *)(a1 + 332) )
    {
      v6 = a2[v2 + 4];
      v8 = 84;
LABEL_14:
      HIDWORD(a1) = v8 + 255;
      goto LABEL_15;
    }
LABEL_16:
    ++v2;
  }
  while ( v2 != 4 );
  *(_DWORD *)(a1 + 312) = 1;
  if ( *(unsigned __int8 *)(HIDWORD(v10) + 2) >> 7 != 0 && *(unsigned __int8 *)(a1 + 336) <= 1u )
  {
    *(_BYTE *)(a1 + 336) = 2;
    *(_DWORD *)(a1 + 312) = 2;
  }
  *(_DWORD *)(a1 + 8) = sub_2617DC(
                          (Ogre::FixedString *)((char *)&dword_0 + 1),
                          (Ogre::FixedString *)"stdmtl_Main",
                          (_QWORD *)HIDWORD(v10),
                          a2);
  *(_DWORD *)(v3 + 12) = sub_2617DC(
                           (Ogre::FixedString *)((char *)&dword_0 + 2),
                           (Ogre::FixedString *)"stdmtl_Main",
                           (_QWORD *)HIDWORD(v10),
                           a2);
  if ( *(_DWORD *)(v3 + 312) == 2 )
    j_memcpy((void *)(v3 + 84), (const void *)(v3 + 8), 0x4Cu);
  *(_DWORD *)(v3 + 316) = (*(unsigned __int8 *)(v3 + 338) << 16)
                        | (*(unsigned __int8 *)(v3 + 337) << 8)
                        | *(unsigned __int8 *)(v3 + 336)
                        | (*(unsigned __int8 *)(v3 + 339) << 24);
  return v10;
}


//======================================================================
// Ogre::Tech_stdmtl_lod0::Tech_stdmtl_lod0(void)
// address: 0x002636AC   size: 0x9A (154 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16Tech_stdmtl_lod0C1Ev'
Ogre::Tech_stdmtl_lod0 *__fastcall Ogre::Tech_stdmtl_lod0::Tech_stdmtl_lod0(Ogre::Tech_stdmtl_lod0 *this)
{
  Ogre::ShaderMacroManager *v2; // r7
  int v3; // r2
  void *v4; // r1
  int v5; // r2
  void *v6; // r1
  int v7; // r2
  void *v8; // r1
  Ogre::ShaderMacroManager *v9; // r5
  int v10; // r2
  void *v11; // r1
  Ogre::ShaderMacroManager *v13; // [sp+4h] [bp-10h]
  Ogre::ShaderMacroManager *v14; // [sp+4h] [bp-10h]
  Ogre::FixedString *v15[2]; // [sp+Ch] [bp-8h] BYREF

  Ogre::TechPassData::TechPassData(this);
  *(_DWORD *)this = &off_45AD30;
  v2 = (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v15, (Ogre::FixedString *)"BLEND_MODE", v3);
  *((_DWORD *)this + 80) = Ogre::ShaderMacroManager::registerMacro(v2, v15);
  Ogre::FixedString::~FixedString(v15, v4);
  v13 = (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v15, (Ogre::FixedString *)"DOUBLE_SIDE", v5);
  *((_DWORD *)this + 81) = Ogre::ShaderMacroManager::registerMacro(v13, v15);
  Ogre::FixedString::~FixedString(v15, v6);
  v14 = (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v15, (Ogre::FixedString *)"USE_SELFILLUM_TEX", v7);
  *((_DWORD *)this + 82) = Ogre::ShaderMacroManager::registerMacro(v14, v15);
  Ogre::FixedString::~FixedString(v15, v8);
  v9 = (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v15, (Ogre::FixedString *)"OVERLAY_MODE", v10);
  *((_DWORD *)this + 83) = Ogre::ShaderMacroManager::registerMacro(v9, v15);
  Ogre::FixedString::~FixedString(v15, v11);
  return this;
}

