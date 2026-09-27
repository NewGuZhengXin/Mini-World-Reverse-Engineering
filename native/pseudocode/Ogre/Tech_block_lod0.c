// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Tech_block_lod0

//======================================================================
// Ogre::Tech_block_lod0::~Tech_block_lod0()
// address: 0x00260674   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15Tech_block_lod0D1Ev'
void __fastcall Ogre::Tech_block_lod0::~Tech_block_lod0(Ogre::Tech_block_lod0 *this)
{
  *(_DWORD *)this = &off_45A870;
  Ogre::TechPassData::~TechPassData(this);
}


//======================================================================
// Ogre::Tech_block_lod0::~Tech_block_lod0()
// address: 0x00260690   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Tech_block_lod0::~Tech_block_lod0(Ogre::Tech_block_lod0 *this)
{
  Ogre::Tech_block_lod0::~Tech_block_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::Tech_block_lod0::init(Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x002618A8   size: 0x9C (156 bytes)
//======================================================================
__int64 __fastcall Ogre::Tech_block_lod0::init(__int64 a1, _BYTE *a2)
{
  int v2; // r4
  int v4; // r3
  int v5; // r2
  char v7; // r2
  int v8; // r1
  __int64 v9; // [sp+0h] [bp-Ch]

  v9 = a1;
  v2 = a1;
  v4 = 0;
  *(_BYTE *)(a1 + 332) = 0;
  *(_BYTE *)(a1 + 333) = 0;
  *(_BYTE *)(a1 + 334) = 0;
  do
  {
    v5 = (unsigned __int8)a2[v4];
    if ( a2[v4] == 0 )
      break;
    if ( v5 == *(_DWORD *)(a1 + 320) )
    {
      v7 = a2[v4 + 4];
      v8 = 166;
      goto LABEL_10;
    }
    if ( v5 == *(_DWORD *)(a1 + 324) )
    {
      v7 = a2[v4 + 4];
      HIDWORD(a1) = 333;
      goto LABEL_11;
    }
    if ( v5 == *(_DWORD *)(a1 + 328) )
    {
      v7 = a2[v4 + 4];
      v8 = 167;
LABEL_10:
      HIDWORD(a1) = 2 * v8;
LABEL_11:
      *(_BYTE *)(a1 + HIDWORD(a1)) = v7;
    }
    ++v4;
  }
  while ( v4 != 4 );
  *(_DWORD *)(a1 + 312) = 1;
  *(_DWORD *)(a1 + 8) = sub_2617DC(
                          (Ogre::FixedString *)((char *)&dword_0 + 1),
                          (Ogre::FixedString *)"block_Main",
                          (_QWORD *)HIDWORD(v9),
                          a2);
  *(_DWORD *)(v2 + 12) = sub_2617DC(
                           (Ogre::FixedString *)((char *)&dword_0 + 2),
                           (Ogre::FixedString *)"block_Main",
                           (_QWORD *)HIDWORD(v9),
                           a2);
  *(_DWORD *)(v2 + 316) = (*(unsigned __int8 *)(v2 + 334) << 16)
                        | (*(unsigned __int8 *)(v2 + 333) << 8)
                        | *(unsigned __int8 *)(v2 + 332);
  return v9;
}


//======================================================================
// Ogre::Tech_block_lod0::Tech_block_lod0(void)
// address: 0x00263388   size: 0x7C (124 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15Tech_block_lod0C1Ev'
Ogre::Tech_block_lod0 *__fastcall Ogre::Tech_block_lod0::Tech_block_lod0(Ogre::Tech_block_lod0 *this)
{
  Ogre::ShaderMacroManager *v2; // r7
  int v3; // r2
  void *v4; // r1
  int v5; // r2
  void *v6; // r1
  Ogre::ShaderMacroManager *v7; // r5
  int v8; // r2
  void *v9; // r1
  Ogre::ShaderMacroManager *v11; // [sp+4h] [bp-10h]
  Ogre::FixedString *v12[2]; // [sp+Ch] [bp-8h] BYREF

  Ogre::TechPassData::TechPassData(this);
  *(_DWORD *)this = &off_45A870;
  v2 = (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v12, (Ogre::FixedString *)"BLEND_MODE", v3);
  *((_DWORD *)this + 80) = Ogre::ShaderMacroManager::registerMacro(v2, v12);
  Ogre::FixedString::~FixedString(v12, v4);
  v11 = (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v12, (Ogre::FixedString *)"DOUBLE_SIDE", v5);
  *((_DWORD *)this + 81) = Ogre::ShaderMacroManager::registerMacro(v11, v12);
  Ogre::FixedString::~FixedString(v12, v6);
  v7 = (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v12, (Ogre::FixedString *)"OVERLAY", v8);
  *((_DWORD *)this + 82) = Ogre::ShaderMacroManager::registerMacro(v7, v12);
  Ogre::FixedString::~FixedString(v12, v9);
  return this;
}

