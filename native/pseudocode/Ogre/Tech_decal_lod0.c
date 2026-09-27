// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Tech_decal_lod0

//======================================================================
// Ogre::Tech_decal_lod0::~Tech_decal_lod0()
// address: 0x00261154   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15Tech_decal_lod0D1Ev'
void __fastcall Ogre::Tech_decal_lod0::~Tech_decal_lod0(Ogre::Tech_decal_lod0 *this)
{
  *(_DWORD *)this = &off_45AFB0;
  Ogre::TechPassData::~TechPassData(this);
}


//======================================================================
// Ogre::Tech_decal_lod0::~Tech_decal_lod0()
// address: 0x00261170   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Tech_decal_lod0::~Tech_decal_lod0(Ogre::Tech_decal_lod0 *this)
{
  Ogre::Tech_decal_lod0::~Tech_decal_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::Tech_decal_lod0::init(Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x00262478   size: 0x5E (94 bytes)
//======================================================================
int __fastcall Ogre::Tech_decal_lod0::init(int a1, _QWORD *a2, _BYTE *a3)
{
  int v4; // r2
  int v7; // r1
  int result; // r0

  v4 = 0;
  *(_BYTE *)(a1 + 321) = 0;
  *(_BYTE *)(a1 + 320) = 0;
  do
  {
    v7 = (unsigned __int8)a3[v4];
    if ( a3[v4] == 0 )
      break;
    if ( v7 == 1 )
    {
      *(_BYTE *)(a1 + 320) = a3[v4 + 4];
    }
    else if ( v7 == 2 )
    {
      *(_BYTE *)(a1 + 321) = a3[v4 + 4];
    }
    ++v4;
  }
  while ( v4 != 4 );
  *(_DWORD *)(a1 + 312) = 1;
  result = sub_2617DC((Ogre::FixedString *)((char *)&dword_0 + 1), (Ogre::FixedString *)"decal_Main", a2, a3);
  *(_DWORD *)(a1 + 8) = result;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 316) = (*(unsigned __int8 *)(a1 + 321) << 8) | *(unsigned __int8 *)(a1 + 320);
  return result;
}

