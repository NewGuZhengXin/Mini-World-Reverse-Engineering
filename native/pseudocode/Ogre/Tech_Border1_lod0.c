// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Tech_Border1_lod0

//======================================================================
// Ogre::Tech_Border1_lod0::~Tech_Border1_lod0()
// address: 0x002609D4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17Tech_Border1_lod0D1Ev'
void __fastcall Ogre::Tech_Border1_lod0::~Tech_Border1_lod0(Ogre::Tech_Border1_lod0 *this)
{
  *(_DWORD *)this = &off_45AA90;
  Ogre::TechPassData::~TechPassData(this);
}


//======================================================================
// Ogre::Tech_Border1_lod0::~Tech_Border1_lod0()
// address: 0x002609F0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Tech_Border1_lod0::~Tech_Border1_lod0(Ogre::Tech_Border1_lod0 *this)
{
  Ogre::Tech_Border1_lod0::~Tech_Border1_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::Tech_Border1_lod0::init(Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x00261BFC   size: 0x5A (90 bytes)
//======================================================================
__int64 __fastcall Ogre::Tech_Border1_lod0::init(_DWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v7; // [sp+0h] [bp-Ch]

  LODWORD(v7) = a1;
  HIDWORD(v7) = a1 + 63;
  a1[78] = 2;
  a1[2] = sub_2617DC((Ogre::FixedString *)((char *)&dword_0 + 1), (Ogre::FixedString *)"border1_Main1", a2, a3);
  a1[3] = sub_2617DC((Ogre::FixedString *)((char *)&dword_0 + 2), (Ogre::FixedString *)"border1_Main1", a2, a3);
  a1[21] = sub_2617DC((Ogre::FixedString *)((char *)&dword_0 + 1), (Ogre::FixedString *)"border1_Main", a2, a3);
  a1[22] = sub_2617DC((Ogre::FixedString *)((char *)&dword_0 + 2), (Ogre::FixedString *)"border1_Main", a2, a3);
  *(_DWORD *)(HIDWORD(v7) + 64) = 0;
  return v7;
}

