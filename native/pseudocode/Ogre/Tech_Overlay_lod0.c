// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Tech_Overlay_lod0

//======================================================================
// Ogre::Tech_Overlay_lod0::~Tech_Overlay_lod0()
// address: 0x00260A34   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17Tech_Overlay_lod0D1Ev'
void __fastcall Ogre::Tech_Overlay_lod0::~Tech_Overlay_lod0(Ogre::Tech_Overlay_lod0 *this)
{
  *(_DWORD *)this = &off_45AAF0;
  Ogre::TechPassData::~TechPassData(this);
}


//======================================================================
// Ogre::Tech_Overlay_lod0::~Tech_Overlay_lod0()
// address: 0x00260A50   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Tech_Overlay_lod0::~Tech_Overlay_lod0(Ogre::Tech_Overlay_lod0 *this)
{
  Ogre::Tech_Overlay_lod0::~Tech_Overlay_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::Tech_Overlay_lod0::init(Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x00261C60   size: 0x6E (110 bytes)
//======================================================================
__int64 __fastcall Ogre::Tech_Overlay_lod0::init(int a1, int a2, _QWORD *a3)
{
  int v4; // r3
  __int64 v8; // [sp+0h] [bp-Ch]

  LODWORD(v8) = a1;
  v4 = 0;
  *(_BYTE *)(a1 + 320) = 0;
  do
  {
    if ( *((_BYTE *)a3 + v4) == 0 )
      break;
    if ( *((_BYTE *)a3 + v4) == 1 )
      *(_BYTE *)(a1 + 320) = *((_BYTE *)a3 + v4 + 4);
    ++v4;
  }
  while ( v4 != 4 );
  if ( *(unsigned __int8 *)(a2 + 2) >> 7 != 0 )
    *(_BYTE *)(a1 + 320) = 2;
  *(_DWORD *)(a1 + 312) = 1;
  HIDWORD(v8) = "overlay_Main";
  *(_DWORD *)(a1 + 8) = sub_2617DC(
                          (Ogre::FixedString *)((char *)&dword_0 + 1),
                          (Ogre::FixedString *)"overlay_Main",
                          (_QWORD *)a2,
                          a3);
  *(_DWORD *)(a1 + 12) = sub_2617DC(
                           (Ogre::FixedString *)((char *)&dword_0 + 2),
                           (Ogre::FixedString *)"overlay_Main",
                           (_QWORD *)a2,
                           a3);
  *(_DWORD *)(a1 + 316) = *(unsigned __int8 *)(a1 + 320);
  return v8;
}

