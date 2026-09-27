// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Tech_cloth_shadowgen

//======================================================================
// Ogre::Tech_cloth_shadowgen::~Tech_cloth_shadowgen()
// address: 0x00260D34   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre20Tech_cloth_shadowgenD1Ev'
void __fastcall Ogre::Tech_cloth_shadowgen::~Tech_cloth_shadowgen(Ogre::Tech_cloth_shadowgen *this)
{
  *(_DWORD *)this = &off_45ACD0;
  Ogre::TechPassData::~TechPassData(this);
}


//======================================================================
// Ogre::Tech_cloth_shadowgen::~Tech_cloth_shadowgen()
// address: 0x00260D50   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Tech_cloth_shadowgen::~Tech_cloth_shadowgen(Ogre::Tech_cloth_shadowgen *this)
{
  Ogre::Tech_cloth_shadowgen::~Tech_cloth_shadowgen(this);
  operator delete(this);
}


//======================================================================
// Ogre::Tech_cloth_shadowgen::init(Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x00262024   size: 0x5C (92 bytes)
//======================================================================
__int64 __fastcall Ogre::Tech_cloth_shadowgen::init(__int64 a1, _QWORD *a2)
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
    if ( *((_BYTE *)a2 + v3) == 2 )
      *(_BYTE *)(a1 + 320) = *((_BYTE *)a2 + v3 + 4);
    ++v3;
  }
  while ( v3 != 4 );
  *(_DWORD *)(a1 + 312) = 1;
  *(_DWORD *)(a1 + 8) = sub_2617DC(
                          (Ogre::FixedString *)((char *)&dword_0 + 1),
                          (Ogre::FixedString *)"cloth_ShadowGen",
                          (_QWORD *)HIDWORD(a1),
                          a2);
  *(_DWORD *)(v4 + 12) = sub_2617DC(
                           (Ogre::FixedString *)((char *)&dword_0 + 2),
                           (Ogre::FixedString *)"cloth_ShadowGen",
                           (_QWORD *)HIDWORD(a1),
                           a2);
  *(_DWORD *)(v4 + 316) = *(unsigned __int8 *)(v4 + 320);
  return a1;
}

