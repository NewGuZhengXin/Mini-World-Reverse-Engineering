// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Tech_plant_lod0

//======================================================================
// Ogre::Tech_plant_lod0::~Tech_plant_lod0()
// address: 0x00260FD4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15Tech_plant_lod0D1Ev'
void __fastcall Ogre::Tech_plant_lod0::~Tech_plant_lod0(Ogre::Tech_plant_lod0 *this)
{
  *(_DWORD *)this = &off_45AEB0;
  Ogre::TechPassData::~TechPassData(this);
}


//======================================================================
// Ogre::Tech_plant_lod0::~Tech_plant_lod0()
// address: 0x00260FF0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Tech_plant_lod0::~Tech_plant_lod0(Ogre::Tech_plant_lod0 *this)
{
  Ogre::Tech_plant_lod0::~Tech_plant_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::Tech_plant_lod0::init(Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x0026233C   size: 0x34 (52 bytes)
//======================================================================
unsigned __int64 __fastcall Ogre::Tech_plant_lod0::init(_DWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _DWORD *v5; // r5
  unsigned __int64 v7; // [sp+0h] [bp-Ch]

  v7 = __PAIR64__((unsigned int)a3, (unsigned int)a1);
  v5 = a1 + 63;
  a1[78] = 1;
  a1[2] = sub_2617DC((Ogre::FixedString *)((char *)&dword_0 + 1), (Ogre::FixedString *)"plant_Main", a2, a3);
  a1[3] = sub_2617DC(
            (Ogre::FixedString *)((char *)&dword_0 + 2),
            (Ogre::FixedString *)"plant_Main",
            a2,
            (_QWORD *)HIDWORD(v7));
  v5[16] = 0;
  return v7;
}

