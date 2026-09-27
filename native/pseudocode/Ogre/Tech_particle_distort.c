// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Tech_particle_distort

//======================================================================
// Ogre::Tech_particle_distort::~Tech_particle_distort()
// address: 0x00260AF4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre21Tech_particle_distortD1Ev'
void __fastcall Ogre::Tech_particle_distort::~Tech_particle_distort(Ogre::Tech_particle_distort *this)
{
  *(_DWORD *)this = &off_45AB50;
  Ogre::TechPassData::~TechPassData(this);
}


//======================================================================
// Ogre::Tech_particle_distort::~Tech_particle_distort()
// address: 0x00260B10   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Tech_particle_distort::~Tech_particle_distort(Ogre::Tech_particle_distort *this)
{
  Ogre::Tech_particle_distort::~Tech_particle_distort(this);
  operator delete(this);
}


//======================================================================
// Ogre::Tech_particle_distort::init(Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x00261D78   size: 0x74 (116 bytes)
//======================================================================
int __fastcall Ogre::Tech_particle_distort::init(int a1, _QWORD *a2, _BYTE *a3)
{
  int v4; // r0
  int v7; // r3
  int result; // r0

  v4 = 0;
  *(_BYTE *)(a1 + 323) = 0;
  *(_BYTE *)(a1 + 322) = 0;
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
  *(_DWORD *)(a1 + 8) = sub_2617DC(
                          (Ogre::FixedString *)((char *)&dword_0 + 1),
                          (Ogre::FixedString *)"particle_Main",
                          a2,
                          a3);
  result = sub_2617DC((Ogre::FixedString *)((char *)&dword_0 + 2), (Ogre::FixedString *)"particle_Distort", a2, a3);
  *(_DWORD *)(a1 + 12) = result;
  *(_DWORD *)(a1 + 316) = 0;
  return result;
}

