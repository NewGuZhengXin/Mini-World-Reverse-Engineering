// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Tech_general_water_lod0

//======================================================================
// Ogre::Tech_general_water_lod0::~Tech_general_water_lod0()
// address: 0x00260F14   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre23Tech_general_water_lod0D1Ev'
void __fastcall Ogre::Tech_general_water_lod0::~Tech_general_water_lod0(Ogre::Tech_general_water_lod0 *this)
{
  *(_DWORD *)this = &off_45AE30;
  Ogre::TechPassData::~TechPassData(this);
}


//======================================================================
// Ogre::Tech_general_water_lod0::~Tech_general_water_lod0()
// address: 0x00260F30   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Tech_general_water_lod0::~Tech_general_water_lod0(Ogre::Tech_general_water_lod0 *this)
{
  Ogre::Tech_general_water_lod0::~Tech_general_water_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::Tech_general_water_lod0::init(Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x002622A4   size: 0x5C (92 bytes)
//======================================================================
__int64 __fastcall Ogre::Tech_general_water_lod0::init(__int64 a1, _QWORD *a2)
{
  int v3; // r3
  int v4; // r4

  v3 = 0;
  v4 = a1;
  *(_BYTE *)(a1 + 320) = 0;
  do
  {
    if ( *((_BYTE *)a2 + v3) == 0 )
      break;
    if ( *((_BYTE *)a2 + v3) == 1 )
      *(_BYTE *)(a1 + 320) = *((_BYTE *)a2 + v3 + 4);
    ++v3;
  }
  while ( v3 != 4 );
  *(_DWORD *)(a1 + 312) = 1;
  *(_DWORD *)(a1 + 8) = sub_2617DC(
                          (Ogre::FixedString *)((char *)&dword_0 + 1),
                          (Ogre::FixedString *)"general_water_Main",
                          (_QWORD *)HIDWORD(a1),
                          a2);
  *(_DWORD *)(v4 + 12) = sub_2617DC(
                           (Ogre::FixedString *)((char *)&dword_0 + 2),
                           (Ogre::FixedString *)"general_water_Main",
                           (_QWORD *)HIDWORD(a1),
                           a2);
  *(_DWORD *)(v4 + 316) = *(unsigned __int8 *)(v4 + 320);
  return a1;
}

