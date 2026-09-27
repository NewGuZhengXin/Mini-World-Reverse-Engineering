// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Tech_Uvanim_lod0

//======================================================================
// Ogre::Tech_Uvanim_lod0::~Tech_Uvanim_lod0()
// address: 0x00260B54   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16Tech_Uvanim_lod0D1Ev'
void __fastcall Ogre::Tech_Uvanim_lod0::~Tech_Uvanim_lod0(Ogre::Tech_Uvanim_lod0 *this)
{
  *(_DWORD *)this = &off_45ABB0;
  Ogre::TechPassData::~TechPassData(this);
}


//======================================================================
// Ogre::Tech_Uvanim_lod0::~Tech_Uvanim_lod0()
// address: 0x00260B70   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Tech_Uvanim_lod0::~Tech_Uvanim_lod0(Ogre::Tech_Uvanim_lod0 *this)
{
  Ogre::Tech_Uvanim_lod0::~Tech_Uvanim_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::Tech_Uvanim_lod0::init(Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x00261DF4   size: 0xA8 (168 bytes)
//======================================================================
__int64 __fastcall Ogre::Tech_Uvanim_lod0::init(_DWORD *a1, int a2, _BYTE *a3)
{
  _DWORD *v3; // r4
  int v4; // r3
  int v8; // r2
  __int64 v10; // [sp+0h] [bp-Ch]

  LODWORD(v10) = a1;
  v3 = a1 + 63;
  v4 = 0;
  a1[83] = 0;
  a1[82] = 0;
  a1[81] = 0;
  a1[80] = 0;
  do
  {
    v8 = (unsigned __int8)a3[v4];
    if ( a3[v4] == 0 )
      break;
    switch ( v8 )
    {
      case 1:
        a1[80] = (unsigned __int8)a3[v4 + 4];
        break;
      case 2:
        a1[81] = (unsigned __int8)a3[v4 + 4];
        break;
      case 3:
        a1[82] = (unsigned __int8)a3[v4 + 4];
        break;
      case 4:
        a1[83] = (unsigned __int8)a3[v4 + 4];
        break;
      default:
        break;
    }
    ++v4;
  }
  while ( v4 != 4 );
  if ( *(unsigned __int8 *)(a2 + 2) >> 7 != 0 && (int)a1[80] <= 1 )
    a1[80] = 2;
  HIDWORD(v10) = "uvanim_Main";
  a1[78] = 1;
  a1[2] = sub_2617DC((Ogre::FixedString *)((char *)&dword_0 + 1), (Ogre::FixedString *)"uvanim_Main", (_QWORD *)a2, a3);
  a1[3] = sub_2617DC((Ogre::FixedString *)((char *)&dword_0 + 2), (Ogre::FixedString *)"uvanim_Main", (_QWORD *)a2, a3);
  v3[16] = (v3[19] << 12) | (v3[18] << 8) | v3[17] | (v3[20] << 16) | (*(unsigned __int8 *)(a2 + 2) >> 7 << 20);
  return v10;
}

