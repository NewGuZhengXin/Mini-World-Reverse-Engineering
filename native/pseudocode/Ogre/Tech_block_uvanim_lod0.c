// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Tech_block_uvanim_lod0

//======================================================================
// Ogre::Tech_block_uvanim_lod0::~Tech_block_uvanim_lod0()
// address: 0x00260734   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre22Tech_block_uvanim_lod0D1Ev'
void __fastcall Ogre::Tech_block_uvanim_lod0::~Tech_block_uvanim_lod0(Ogre::Tech_block_uvanim_lod0 *this)
{
  *(_DWORD *)this = &off_45A8F0;
  Ogre::TechPassData::~TechPassData(this);
}


//======================================================================
// Ogre::Tech_block_uvanim_lod0::~Tech_block_uvanim_lod0()
// address: 0x00260750   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Tech_block_uvanim_lod0::~Tech_block_uvanim_lod0(Ogre::Tech_block_uvanim_lod0 *this)
{
  Ogre::Tech_block_uvanim_lod0::~Tech_block_uvanim_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::Tech_block_uvanim_lod0::init(Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x002619AC   size: 0x7E (126 bytes)
//======================================================================
int __fastcall Ogre::Tech_block_uvanim_lod0::init(int a1, _QWORD *a2, _BYTE *a3)
{
  int v5; // r3
  int v7; // r6
  int v8; // r2
  int result; // r0
  char v10; // r2
  int v11; // r1

  v5 = 0;
  *(_BYTE *)(a1 + 328) = 0;
  *(_BYTE *)(a1 + 329) = 0;
  v7 = a1 + 252;
  do
  {
    v8 = (unsigned __int8)a3[v5];
    if ( a3[v5] == 0 )
      break;
    if ( v8 == *(_DWORD *)(a1 + 320) )
    {
      v10 = a3[v5 + 4];
      v11 = 328;
LABEL_8:
      *(_BYTE *)(a1 + v11) = v10;
      goto LABEL_9;
    }
    if ( v8 == *(_DWORD *)(a1 + 324) )
    {
      v10 = a3[v5 + 4];
      v11 = 329;
      goto LABEL_8;
    }
LABEL_9:
    ++v5;
  }
  while ( v5 != 4 );
  *(_DWORD *)(a1 + 312) = 1;
  *(_DWORD *)(a1 + 8) = sub_2617DC(
                          (Ogre::FixedString *)((char *)&dword_0 + 1),
                          (Ogre::FixedString *)"block_uvanim_Main",
                          a2,
                          a3);
  result = sub_2617DC((Ogre::FixedString *)((char *)&dword_0 + 2), (Ogre::FixedString *)"block_Main", a2, a3);
  *(_DWORD *)(a1 + 12) = result;
  *(_DWORD *)(v7 + 64) = (*(unsigned __int8 *)(a1 + 329) << 8) | *(unsigned __int8 *)(a1 + 328);
  return result;
}


//======================================================================
// Ogre::Tech_block_uvanim_lod0::Tech_block_uvanim_lod0(void)
// address: 0x002634AC   size: 0x5A (90 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre22Tech_block_uvanim_lod0C1Ev'
Ogre::Tech_block_uvanim_lod0 *__fastcall Ogre::Tech_block_uvanim_lod0::Tech_block_uvanim_lod0(
        Ogre::Tech_block_uvanim_lod0 *this,
        Ogre::FixedString *a2,
        Ogre::FixedString *a3)
{
  Ogre::ShaderMacroManager *v4; // r7
  int v5; // r2
  void *v6; // r1
  Ogre::ShaderMacroManager *v7; // r5
  int v8; // r2
  void *v9; // r1
  Ogre::FixedString *v11[2]; // [sp+4h] [bp-8h] BYREF

  v11[0] = a2;
  v11[1] = a3;
  Ogre::TechPassData::TechPassData(this);
  *(_DWORD *)this = &off_45A8F0;
  v4 = (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v11, (Ogre::FixedString *)"BLEND_MODE", v5);
  *((_DWORD *)this + 80) = Ogre::ShaderMacroManager::registerMacro(v4, v11);
  Ogre::FixedString::~FixedString(v11, v6);
  v7 = (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v11, (Ogre::FixedString *)"DOUBLE_SIDE", v8);
  *((_DWORD *)this + 81) = Ogre::ShaderMacroManager::registerMacro(v7, v11);
  Ogre::FixedString::~FixedString(v11, v9);
  return this;
}

