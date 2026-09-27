// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Tech_Particle_lod0

//======================================================================
// Ogre::Tech_Particle_lod0::~Tech_Particle_lod0()
// address: 0x00260A94   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18Tech_Particle_lod0D1Ev'
void __fastcall Ogre::Tech_Particle_lod0::~Tech_Particle_lod0(Ogre::Tech_Particle_lod0 *this)
{
  *(_DWORD *)this = &off_45AB30;
  Ogre::TechPassData::~TechPassData(this);
}


//======================================================================
// Ogre::Tech_Particle_lod0::~Tech_Particle_lod0()
// address: 0x00260AB0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Tech_Particle_lod0::~Tech_Particle_lod0(Ogre::Tech_Particle_lod0 *this)
{
  Ogre::Tech_Particle_lod0::~Tech_Particle_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::Tech_Particle_lod0::init(Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x00261CD4   size: 0x9E (158 bytes)
//======================================================================
__int64 __fastcall Ogre::Tech_Particle_lod0::init(__int64 a1, _BYTE *a2)
{
  int v2; // r3
  int v3; // r4
  int v5; // r2
  char v7; // r2
  __int64 v8; // [sp+0h] [bp-Ch]

  v8 = a1;
  v2 = 0;
  v3 = a1;
  *(_BYTE *)(a1 + 331) = 0;
  *(_BYTE *)(a1 + 330) = 0;
  *(_BYTE *)(a1 + 329) = 0;
  *(_BYTE *)(a1 + 328) = 0;
  do
  {
    v5 = (unsigned __int8)a2[v2];
    if ( a2[v2] == 0 )
      break;
    if ( v5 == *(_DWORD *)(a1 + 320) )
    {
      v7 = a2[v2 + 4];
      HIDWORD(a1) = 328;
LABEL_8:
      *(_BYTE *)(a1 + HIDWORD(a1)) = v7;
      goto LABEL_9;
    }
    if ( v5 == *(_DWORD *)(a1 + 324) )
    {
      v7 = a2[v2 + 4];
      HIDWORD(a1) = 329;
      goto LABEL_8;
    }
LABEL_9:
    ++v2;
  }
  while ( v2 != 4 );
  *(_DWORD *)(a1 + 312) = 1;
  *(_DWORD *)(a1 + 8) = sub_2617DC(
                          (Ogre::FixedString *)((char *)&dword_0 + 1),
                          (Ogre::FixedString *)"particle_Main",
                          (_QWORD *)HIDWORD(v8),
                          a2);
  *(_DWORD *)(v3 + 12) = sub_2617DC(
                           (Ogre::FixedString *)((char *)&dword_0 + 2),
                           (Ogre::FixedString *)"particle_Main",
                           (_QWORD *)HIDWORD(v8),
                           a2);
  *(_DWORD *)(v3 + 316) = (*(unsigned __int8 *)(v3 + 330) << 16)
                        | (*(unsigned __int8 *)(v3 + 329) << 8)
                        | *(unsigned __int8 *)(v3 + 328)
                        | (*(unsigned __int8 *)(v3 + 331) << 24);
  return v8;
}


//======================================================================
// Ogre::Tech_Particle_lod0::Tech_Particle_lod0(void)
// address: 0x0026361C   size: 0x5A (90 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18Tech_Particle_lod0C1Ev'
Ogre::Tech_Particle_lod0 *__fastcall Ogre::Tech_Particle_lod0::Tech_Particle_lod0(
        Ogre::Tech_Particle_lod0 *this,
        Ogre::FixedString *a2,
        Ogre::FixedString *a3)
{
  Ogre::ShaderMacroManager *v4; // r7
  int v5; // r2
  void *v6; // r1
  Ogre::ShaderMacroManager *v7; // r5
  int v8; // r2
  void *v9; // r1
  Ogre::FixedString *v11[2]; // [sp+4h] [bp-8h] BYREF

  v11[0] = a2;
  v11[1] = a3;
  Ogre::TechPassData::TechPassData(this);
  *(_DWORD *)this = &off_45AB30;
  v4 = (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v11, (Ogre::FixedString *)"BLEND_MODE", v5);
  *((_DWORD *)this + 80) = Ogre::ShaderMacroManager::registerMacro(v4, v11);
  Ogre::FixedString::~FixedString(v11, v6);
  v7 = (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v11, (Ogre::FixedString *)"MASK_TEXTURE", v8);
  *((_DWORD *)this + 81) = Ogre::ShaderMacroManager::registerMacro(v7, v11);
  Ogre::FixedString::~FixedString(v11, v9);
  return this;
}

