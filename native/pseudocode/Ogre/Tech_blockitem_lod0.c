// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Tech_blockitem_lod0

//======================================================================
// Ogre::Tech_blockitem_lod0::~Tech_blockitem_lod0()
// address: 0x00260794   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre19Tech_blockitem_lod0D1Ev'
void __fastcall Ogre::Tech_blockitem_lod0::~Tech_blockitem_lod0(Ogre::Tech_blockitem_lod0 *this)
{
  *(_DWORD *)this = &off_45A930;
  Ogre::TechPassData::~TechPassData(this);
}


//======================================================================
// Ogre::Tech_blockitem_lod0::~Tech_blockitem_lod0()
// address: 0x002607B0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Tech_blockitem_lod0::~Tech_blockitem_lod0(Ogre::Tech_blockitem_lod0 *this)
{
  Ogre::Tech_blockitem_lod0::~Tech_blockitem_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::Tech_blockitem_lod0::init(Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x00261A34   size: 0x5E (94 bytes)
//======================================================================
__int64 __fastcall Ogre::Tech_blockitem_lod0::init(__int64 a1, _BYTE *a2)
{
  int v3; // r3
  int v4; // r4
  int v5; // r6

  v3 = 0;
  v4 = a1;
  *(_BYTE *)(a1 + 324) = 0;
  v5 = a1 + 252;
  do
  {
    if ( a2[v3] == 0 )
      break;
    if ( (unsigned __int8)a2[v3] == *(_DWORD *)(a1 + 320) )
      *(_BYTE *)(a1 + 324) = a2[v3 + 4];
    ++v3;
  }
  while ( v3 != 4 );
  *(_DWORD *)(a1 + 312) = 1;
  *(_DWORD *)(a1 + 8) = sub_2617DC(
                          (Ogre::FixedString *)((char *)&dword_0 + 1),
                          (Ogre::FixedString *)"blockitem_Main",
                          (_QWORD *)HIDWORD(a1),
                          a2);
  *(_DWORD *)(v4 + 12) = sub_2617DC(
                           (Ogre::FixedString *)((char *)&dword_0 + 2),
                           (Ogre::FixedString *)"blockitem_Main",
                           (_QWORD *)HIDWORD(a1),
                           a2);
  *(_DWORD *)(v5 + 64) = *(unsigned __int8 *)(v4 + 324);
  return a1;
}


//======================================================================
// Ogre::Tech_blockitem_lod0::Tech_blockitem_lod0(void)
// address: 0x0026353C   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre19Tech_blockitem_lod0C1Ev'
Ogre::Tech_blockitem_lod0 *__fastcall Ogre::Tech_blockitem_lod0::Tech_blockitem_lod0(
        Ogre::Tech_blockitem_lod0 *this,
        Ogre::FixedString *a2)
{
  Ogre::ShaderMacroManager *v3; // r6
  int v4; // r2
  void *v5; // r1
  Ogre::FixedString *v7; // [sp+4h] [bp-4h] BYREF

  v7 = a2;
  Ogre::TechPassData::TechPassData(this);
  *(_DWORD *)this = &off_45A930;
  v3 = (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v7, (Ogre::FixedString *)"BLEND_MODE", v4);
  *((_DWORD *)this + 80) = Ogre::ShaderMacroManager::registerMacro(v3, &v7);
  Ogre::FixedString::~FixedString(&v7, v5);
  return this;
}

