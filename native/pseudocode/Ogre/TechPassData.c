// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::TechPassData

//======================================================================
// Ogre::TechPassData::~TechPassData()
// address: 0x00159164   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12TechPassDataD1Ev'
void __fastcall Ogre::TechPassData::~TechPassData(Ogre::TechPassData *this)
{
  *(_DWORD *)this = &off_4566F0;
}


//======================================================================
// Ogre::TechPassData::~TechPassData()
// address: 0x001591F4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::TechPassData::~TechPassData(Ogre::TechPassData *this)
{
  Ogre::TechPassData::~TechPassData(this);
  operator delete(this);
}


//======================================================================
// Ogre::TechPassData::TechPassData(void)
// address: 0x00159248   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12TechPassDataC1Ev'
Ogre::TechPassData *__fastcall Ogre::TechPassData::TechPassData(Ogre::TechPassData *this)
{
  *(_DWORD *)this = &off_4566F0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 78) = 0;
  *((_DWORD *)this + 79) = 0;
  j_memset((char *)this + 8, 0, 0x130u);
  return this;
}


//======================================================================
// Ogre::TechPassData::isEqual(Ogre::TechPassData*)
// address: 0x00159274   size: 0x46 (70 bytes)
//======================================================================
int __fastcall Ogre::TechPassData::isEqual(Ogre::TechPassData *this, Ogre::TechPassData *a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r5
  int v5; // r4

  v2 = 0;
  if ( *((_DWORD *)this + 79) == *((_DWORD *)a2 + 79) )
  {
    v3 = *((_DWORD *)this + 78);
    if ( v3 == *((_DWORD *)a2 + 78) )
    {
      while ( 1 )
      {
        if ( v2 == v3 )
          return 1;
        if ( *((_DWORD *)this + 2) != *((_DWORD *)a2 + 2) )
          break;
        v4 = *((_DWORD *)this + 3);
        v5 = *((_DWORD *)a2 + 3);
        this = (Ogre::TechPassData *)((char *)this + 76);
        a2 = (Ogre::TechPassData *)((char *)a2 + 76);
        if ( v4 != v5 )
          break;
        ++v2;
      }
      return 0;
    }
  }
  return v2;
}


//======================================================================
// Ogre::TechPassData::textureName2Usage(Ogre::FixedString const&)
// address: 0x001592BC   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Ogre::TechPassData::textureName2Usage(Ogre::TechPassData *this, Ogre::FixedString **a2, int a3)
{
  return Ogre::ShaderMacroManager::registerParam(
           (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton,
           a2,
           a3)
       + 1000;
}

