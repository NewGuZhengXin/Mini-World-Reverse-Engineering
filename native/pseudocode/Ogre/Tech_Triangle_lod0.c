// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Tech_Triangle_lod0

//======================================================================
// Ogre::Tech_Triangle_lod0::~Tech_Triangle_lod0()
// address: 0x00261454   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18Tech_Triangle_lod0D1Ev'
void __fastcall Ogre::Tech_Triangle_lod0::~Tech_Triangle_lod0(Ogre::Tech_Triangle_lod0 *this)
{
  *(_DWORD *)this = &off_45B1B0;
  Ogre::TechPassData::~TechPassData(this);
}


//======================================================================
// Ogre::Tech_Triangle_lod0::~Tech_Triangle_lod0()
// address: 0x00261470   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Tech_Triangle_lod0::~Tech_Triangle_lod0(Ogre::Tech_Triangle_lod0 *this)
{
  Ogre::Tech_Triangle_lod0::~Tech_Triangle_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::Tech_Triangle_lod0::init(Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x0026272C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall Ogre::Tech_Triangle_lod0::init(_DWORD *a1, _QWORD *a2, _QWORD *a3)
{
  int result; // r0

  a1[78] = 1;
  a1[2] = sub_2617DC((Ogre::FixedString *)((char *)&dword_0 + 1), (Ogre::FixedString *)"triangle_Main", a2, a3);
  result = sub_2617DC((Ogre::FixedString *)((char *)&dword_0 + 2), (Ogre::FixedString *)"triangle_Main", a2, a3);
  a1[3] = result;
  return result;
}

