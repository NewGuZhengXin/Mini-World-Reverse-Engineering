// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Tech_distort_lod0

//======================================================================
// Ogre::Tech_distort_lod0::~Tech_distort_lod0()
// address: 0x00261274   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17Tech_distort_lod0D1Ev'
void __fastcall Ogre::Tech_distort_lod0::~Tech_distort_lod0(Ogre::Tech_distort_lod0 *this)
{
  *(_DWORD *)this = &off_45B070;
  Ogre::TechPassData::~TechPassData(this);
}


//======================================================================
// Ogre::Tech_distort_lod0::~Tech_distort_lod0()
// address: 0x00261290   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Tech_distort_lod0::~Tech_distort_lod0(Ogre::Tech_distort_lod0 *this)
{
  Ogre::Tech_distort_lod0::~Tech_distort_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::Tech_distort_lod0::init(Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x00262550   size: 0x26 (38 bytes)
//======================================================================
int __fastcall Ogre::Tech_distort_lod0::init(_DWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // r5
  int result; // r0

  v3 = a1 + 63;
  a1[78] = 1;
  a1[2] = 0;
  result = sub_2617DC((Ogre::FixedString *)((char *)&dword_0 + 2), (Ogre::FixedString *)"distort_Main", a2, a3);
  a1[3] = result;
  v3[16] = 0;
  return result;
}

