// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Tech_Back0_lod0

//======================================================================
// Ogre::Tech_Back0_lod0::~Tech_Back0_lod0()
// address: 0x002608B4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15Tech_Back0_lod0D1Ev'
void __fastcall Ogre::Tech_Back0_lod0::~Tech_Back0_lod0(Ogre::Tech_Back0_lod0 *this)
{
  *(_DWORD *)this = &off_45A9F0;
  Ogre::TechPassData::~TechPassData(this);
}


//======================================================================
// Ogre::Tech_Back0_lod0::~Tech_Back0_lod0()
// address: 0x002608D0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Tech_Back0_lod0::~Tech_Back0_lod0(Ogre::Tech_Back0_lod0 *this)
{
  Ogre::Tech_Back0_lod0::~Tech_Back0_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::Tech_Back0_lod0::init(Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x00261B04   size: 0x82 (130 bytes)
//======================================================================
__int64 __fastcall Ogre::Tech_Back0_lod0::init(int a1, int a2, _BYTE *a3)
{
  int v4; // r3
  int v7; // r7
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = a1;
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
  if ( *(unsigned __int8 *)(a2 + 2) >> 7 != 0 && *(unsigned __int8 *)(a1 + 324) <= 1u )
    *(_BYTE *)(a1 + 324) = 2;
  *(_DWORD *)(a1 + 312) = 1;
  HIDWORD(v9) = "back0_Main";
  *(_DWORD *)(a1 + 8) = sub_2617DC(
                          (Ogre::FixedString *)((char *)&dword_0 + 1),
                          (Ogre::FixedString *)"back0_Main",
                          (_QWORD *)a2,
                          a3);
  *(_DWORD *)(a1 + 12) = sub_2617DC(
                           (Ogre::FixedString *)((char *)&dword_0 + 2),
                           (Ogre::FixedString *)"back0_Main",
                           (_QWORD *)a2,
                           a3);
  *(_DWORD *)(v7 + 64) = (*(unsigned __int8 *)(a2 + 2) >> 7 << 8) | *(unsigned __int8 *)(a1 + 324);
  return v9;
}


//======================================================================
// Ogre::Tech_Back0_lod0::Tech_Back0_lod0(void)
// address: 0x002635AC   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15Tech_Back0_lod0C1Ev'
Ogre::Tech_Back0_lod0 *__fastcall Ogre::Tech_Back0_lod0::Tech_Back0_lod0(
        Ogre::Tech_Back0_lod0 *this,
        Ogre::FixedString *a2)
{
  Ogre::ShaderMacroManager *v3; // r6
  int v4; // r2
  void *v5; // r1
  Ogre::FixedString *v7; // [sp+4h] [bp-4h] BYREF

  v7 = a2;
  Ogre::TechPassData::TechPassData(this);
  *(_DWORD *)this = &off_45A9F0;
  v3 = (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v7, (Ogre::FixedString *)"BLEND_MODE", v4);
  *((_DWORD *)this + 80) = Ogre::ShaderMacroManager::registerMacro(v3, &v7);
  Ogre::FixedString::~FixedString(&v7, v5);
  return this;
}

