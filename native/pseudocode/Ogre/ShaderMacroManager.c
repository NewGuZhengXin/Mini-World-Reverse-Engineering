// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ShaderMacroManager

//======================================================================
// Ogre::ShaderMacroManager::getMacroName(int)
// address: 0x0015433E   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::ShaderMacroManager::getMacroName(Ogre::ShaderMacroManager *this, int a2)
{
  return *(_DWORD *)(4 * a2 + *((_DWORD *)this + 6));
}


//======================================================================
// Ogre::ShaderMacroManager::getParamName(int)
// address: 0x00154346   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::ShaderMacroManager::getParamName(Ogre::ShaderMacroManager *this, int a2)
{
  return *(_DWORD *)(4 * a2 + *((_DWORD *)this + 15));
}


//======================================================================
// Ogre::ShaderMacroManager::getEnvParamName(int)
// address: 0x00154350   size: 0xA (10 bytes)
//======================================================================
char *__fastcall Ogre::ShaderMacroManager::getEnvParamName(Ogre::ShaderMacroManager *this, int a2)
{
  return off_451C40[a2];
}


//======================================================================
// Ogre::ShaderMacroManager::getEnvParamUsageByName(char const*)
// address: 0x00154360   size: 0x28 (40 bytes)
//======================================================================
int __fastcall Ogre::ShaderMacroManager::getEnvParamUsageByName(Ogre::ShaderMacroManager *this, const char *a2)
{
  int v3; // r4

  v3 = 0;
  while ( j_strcmp(a2, off_451C40[v3]) != 0 )
  {
    if ( ++v3 == 54 )
      return -1;
  }
  return v3;
}


//======================================================================
// Ogre::ShaderMacroManager::registerMacro(Ogre::FixedString const&)
// address: 0x001549A2   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Ogre::ShaderMacroManager::registerMacro(Ogre::ShaderMacroManager *this, Ogre::FixedString **a2)
{
  _DWORD *v4; // r0
  __int64 v6; // r0
  int v7; // r6
  Ogre::FixedString *v8; // [sp+4h] [bp-4h] BYREF

  v8 = (Ogre::FixedString *)a2;
  v4 = std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,int>,std::_Select1st<std::pair<Ogre::FixedString const,int>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,int>>>::find(
         (int)this,
         a2);
  if ( v4 != (_DWORD *)((char *)this + 4) )
    return v4[5];
  LODWORD(v6) = (char *)this + 24;
  HIDWORD(v6) = &v8;
  v7 = *((_DWORD *)this + 5);
  v8 = *a2;
  std::vector<char const*>::push_back(v6);
  *std::map<Ogre::FixedString,int>::operator[](this, a2) = v7;
  return v7;
}


//======================================================================
// Ogre::ShaderMacroManager::ShaderMacroManager(void)
// address: 0x001549D4   size: 0x60 (96 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18ShaderMacroManagerC1Ev'
Ogre::ShaderMacroManager *__fastcall Ogre::ShaderMacroManager::ShaderMacroManager(
        Ogre::ShaderMacroManager *this,
        int a2,
        Ogre::FixedString *a3)
{
  char *v3; // r6
  int v5; // r2
  void *v6; // r1
  Ogre::FixedString *v8[2]; // [sp+4h] [bp-8h] BYREF

  v8[1] = a3;
  v3 = (char *)this + 4;
  Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton = (int)this;
  j_memset((char *)this + 4, 0, 0x10u);
  *((_DWORD *)this + 3) = v3;
  *((_DWORD *)this + 4) = v3;
  v3 += 36;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  j_memset(v3, 0, 0x10u);
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 12) = v3;
  *((_DWORD *)this + 13) = v3;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  v8[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                 (Ogre::FixedString *)"NOT---USED",
                                 (const char *)0xFFFFFFFF,
                                 v5);
  Ogre::ShaderMacroManager::registerMacro(this, v8);
  Ogre::FixedString::release(v8[0], v6);
  return this;
}


//======================================================================
// Ogre::ShaderMacroManager::registerParam(Ogre::FixedString const&)
// address: 0x00154A3C   size: 0x40 (64 bytes)
//======================================================================
int __fastcall Ogre::ShaderMacroManager::registerParam(Ogre::ShaderMacroManager *this, Ogre::FixedString **a2, int a3)
{
  _DWORD *v3; // r7
  _DWORD *v6; // r0
  int v7; // r5
  __int64 v8; // r0
  _DWORD v10[2]; // [sp+4h] [bp-8h] BYREF

  v10[0] = a2;
  v10[1] = a3;
  v3 = (_DWORD *)((char *)this + 36);
  v6 = std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,int>,std::_Select1st<std::pair<Ogre::FixedString const,int>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,int>>>::find(
         (int)this + 36,
         a2);
  if ( v6 != (_DWORD *)((char *)this + 40) )
    return v6[5];
  LODWORD(v8) = (char *)this + 60;
  HIDWORD(v8) = v10;
  v7 = (*((_DWORD *)this + 16) - *((_DWORD *)this + 15)) >> 2;
  v10[0] = *a2;
  std::vector<char const*>::push_back(v8);
  *std::map<Ogre::FixedString,int>::operator[](v3, a2) = v7;
  return v7;
}

