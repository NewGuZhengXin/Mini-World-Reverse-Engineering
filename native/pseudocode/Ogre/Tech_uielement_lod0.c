// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Tech_uielement_lod0

//======================================================================
// Ogre::Tech_uielement_lod0::~Tech_uielement_lod0()
// address: 0x00261034   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre19Tech_uielement_lod0D1Ev'
void __fastcall Ogre::Tech_uielement_lod0::~Tech_uielement_lod0(Ogre::Tech_uielement_lod0 *this)
{
  *(_DWORD *)this = &off_45AEF0;
  Ogre::TechPassData::~TechPassData(this);
}


//======================================================================
// Ogre::Tech_uielement_lod0::~Tech_uielement_lod0()
// address: 0x00261050   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Tech_uielement_lod0::~Tech_uielement_lod0(Ogre::Tech_uielement_lod0 *this)
{
  Ogre::Tech_uielement_lod0::~Tech_uielement_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::Tech_uielement_lod0::init(Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x00262374   size: 0x90 (144 bytes)
//======================================================================
__int64 __fastcall Ogre::Tech_uielement_lod0::init(__int64 a1, _BYTE *a2)
{
  int v2; // r3
  int v4; // r4
  _DWORD *v5; // r6
  int v6; // r2
  char v8; // r2
  int v9; // r0

  v2 = 0;
  *(_BYTE *)(a1 + 333) = 0;
  v4 = a1;
  *(_BYTE *)(a1 + 332) = 0;
  v5 = (_DWORD *)(a1 + 252);
  do
  {
    v6 = (unsigned __int8)a2[v2];
    if ( a2[v2] == 0 )
      break;
    if ( v6 == v5[17] )
    {
      v8 = a2[v2 + 4];
      v9 = 332;
    }
    else
    {
      if ( v6 != v5[18] )
      {
        if ( v6 == v5[19] )
          *(_BYTE *)(v4 + 334) = a2[v2 + 4];
        goto LABEL_11;
      }
      v8 = a2[v2 + 4];
      v9 = 333;
    }
    *(_BYTE *)(v4 + v9) = v8;
LABEL_11:
    ++v2;
  }
  while ( v2 != 4 );
  v5[15] = 1;
  *(_DWORD *)(v4 + 8) = sub_2617DC(
                          (Ogre::FixedString *)((char *)&dword_0 + 1),
                          (Ogre::FixedString *)"ui_element_Main",
                          (_QWORD *)HIDWORD(a1),
                          a2);
  *(_DWORD *)(v4 + 12) = sub_2617DC(
                           (Ogre::FixedString *)((char *)&dword_0 + 2),
                           (Ogre::FixedString *)"ui_element_Main",
                           (_QWORD *)HIDWORD(a1),
                           a2);
  v5[16] = (*(unsigned __int8 *)(v4 + 333) << 8) | *(unsigned __int8 *)(v4 + 332);
  return a1;
}


//======================================================================
// Ogre::Tech_uielement_lod0::Tech_uielement_lod0(void)
// address: 0x00263784   size: 0x7C (124 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre19Tech_uielement_lod0C1Ev'
Ogre::Tech_uielement_lod0 *__fastcall Ogre::Tech_uielement_lod0::Tech_uielement_lod0(Ogre::Tech_uielement_lod0 *this)
{
  Ogre::ShaderMacroManager *v2; // r7
  int v3; // r2
  void *v4; // r1
  int v5; // r2
  void *v6; // r1
  Ogre::ShaderMacroManager *v7; // r5
  int v8; // r2
  void *v9; // r1
  Ogre::ShaderMacroManager *v11; // [sp+4h] [bp-10h]
  Ogre::FixedString *v12[2]; // [sp+Ch] [bp-8h] BYREF

  Ogre::TechPassData::TechPassData(this);
  *(_DWORD *)this = &off_45AEF0;
  v2 = (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v12, (Ogre::FixedString *)"BLEND_MODE", v3);
  *((_DWORD *)this + 80) = Ogre::ShaderMacroManager::registerMacro(v2, v12);
  Ogre::FixedString::~FixedString(v12, v4);
  v11 = (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v12, (Ogre::FixedString *)"MASK_TEXTURE", v5);
  *((_DWORD *)this + 81) = Ogre::ShaderMacroManager::registerMacro(v11, v12);
  Ogre::FixedString::~FixedString(v12, v6);
  v7 = (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v12, (Ogre::FixedString *)"RGB_MOD", v8);
  *((_DWORD *)this + 82) = Ogre::ShaderMacroManager::registerMacro(v7, v12);
  Ogre::FixedString::~FixedString(v12, v9);
  return this;
}

