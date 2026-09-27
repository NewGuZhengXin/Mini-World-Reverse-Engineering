// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Tech_bloom_lod0

//======================================================================
// Ogre::Tech_bloom_lod0::~Tech_bloom_lod0()
// address: 0x002612D4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15Tech_bloom_lod0D1Ev'
void __fastcall Ogre::Tech_bloom_lod0::~Tech_bloom_lod0(Ogre::Tech_bloom_lod0 *this)
{
  *(_DWORD *)this = &off_45B0B0;
  Ogre::TechPassData::~TechPassData(this);
}


//======================================================================
// Ogre::Tech_bloom_lod0::~Tech_bloom_lod0()
// address: 0x002612F0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Tech_bloom_lod0::~Tech_bloom_lod0(Ogre::Tech_bloom_lod0 *this)
{
  Ogre::Tech_bloom_lod0::~Tech_bloom_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::Tech_bloom_lod0::init(Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x0026257C   size: 0x82 (130 bytes)
//======================================================================
int __fastcall Ogre::Tech_bloom_lod0::init(int a1, _QWORD *a2, _BYTE *a3)
{
  int v4; // r2
  int v7; // r5
  int result; // r0
  char *v9; // r1

  v4 = 0;
  *(_BYTE *)(a1 + 324) = 0;
  v7 = a1 + 252;
  do
  {
    if ( a3[v4] == 0 )
      break;
    if ( (unsigned __int8)a3[v4] == *(_DWORD *)(a1 + 320) )
      *(_BYTE *)(a1 + 324) = a3[v4 + 4];
    ++v4;
  }
  while ( v4 != 4 );
  *(_DWORD *)(a1 + 312) = 1;
  *(_DWORD *)(a1 + 8) = 0;
  result = *(unsigned __int8 *)(a1 + 324);
  if ( *(_BYTE *)(a1 + 324) == 0 )
  {
    v9 = "bloom_DownScenePS";
LABEL_17:
    result = sub_2617DC((Ogre::FixedString *)((char *)&dword_0 + 2), (Ogre::FixedString *)v9, a2, a3);
    *(_DWORD *)(a1 + 12) = result;
    goto LABEL_18;
  }
  switch ( result )
  {
    case 1:
      v9 = "bloom_BrightPS";
      goto LABEL_17;
    case 2:
      v9 = "bloom_BloomPS1";
      goto LABEL_17;
    case 3:
      v9 = "bloom_BloomPS2";
      goto LABEL_17;
    case 4:
      v9 = "bloom_FinalPSBloom";
      goto LABEL_17;
    default:
      break;
  }
LABEL_18:
  *(_DWORD *)(v7 + 60) = 1;
  *(_DWORD *)(v7 + 64) = *(unsigned __int8 *)(a1 + 324);
  return result;
}


//======================================================================
// Ogre::Tech_bloom_lod0::Tech_bloom_lod0(void)
// address: 0x00263838   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15Tech_bloom_lod0C1Ev'
Ogre::Tech_bloom_lod0 *__fastcall Ogre::Tech_bloom_lod0::Tech_bloom_lod0(
        Ogre::Tech_bloom_lod0 *this,
        Ogre::FixedString *a2)
{
  Ogre::ShaderMacroManager *v3; // r6
  int v4; // r2
  void *v5; // r1
  Ogre::FixedString *v7; // [sp+4h] [bp-4h] BYREF

  v7 = a2;
  Ogre::TechPassData::TechPassData(this);
  *(_DWORD *)this = &off_45B0B0;
  v3 = (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v7, (Ogre::FixedString *)"BLOOM_PASS", v4);
  *((_DWORD *)this + 80) = Ogre::ShaderMacroManager::registerMacro(v3, &v7);
  Ogre::FixedString::~FixedString(&v7, v5);
  return this;
}

