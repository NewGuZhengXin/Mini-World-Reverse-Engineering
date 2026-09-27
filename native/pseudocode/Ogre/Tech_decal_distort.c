// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Tech_decal_distort

//======================================================================
// Ogre::Tech_decal_distort::~Tech_decal_distort()
// address: 0x002611B4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18Tech_decal_distortD1Ev'
void __fastcall Ogre::Tech_decal_distort::~Tech_decal_distort(Ogre::Tech_decal_distort *this)
{
  *(_DWORD *)this = &off_45AFD0;
  Ogre::TechPassData::~TechPassData(this);
}


//======================================================================
// Ogre::Tech_decal_distort::~Tech_decal_distort()
// address: 0x002611D0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Tech_decal_distort::~Tech_decal_distort(Ogre::Tech_decal_distort *this)
{
  Ogre::Tech_decal_distort::~Tech_decal_distort(this);
  operator delete(this);
}


//======================================================================
// Ogre::Tech_decal_distort::init(Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x002624DC   size: 0x34 (52 bytes)
//======================================================================
int __fastcall Ogre::Tech_decal_distort::init(_DWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _DWORD *v6; // r5
  int result; // r0

  v6 = a1 + 63;
  a1[78] = 1;
  a1[2] = sub_2617DC((Ogre::FixedString *)((char *)&dword_0 + 1), (Ogre::FixedString *)"decal_Main", a2, a3);
  result = sub_2617DC((Ogre::FixedString *)((char *)&dword_0 + 2), (Ogre::FixedString *)"decal_Distort", a2, a3);
  a1[3] = result;
  v6[16] = 0;
  return result;
}

