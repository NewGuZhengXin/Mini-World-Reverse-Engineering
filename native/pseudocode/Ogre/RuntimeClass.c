// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RuntimeClass

//======================================================================
// Ogre::RuntimeClass::RuntimeClass(char const*,Ogre::RuntimeClass const*,int,Ogre::BaseObject * (*)(void))
// address: 0x00186118   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12RuntimeClassC2EPKcPKS0_iPFPNS_10BaseObjectEvE'
_DWORD *__fastcall Ogre::RuntimeClass::RuntimeClass(_DWORD *result, int a2, int a3, int a4, int a5)
{
  int v5; // r2

  result[2] = a4;
  result[1] = a3;
  *result = a2;
  result[3] = a5;
  v5 = dword_4BB6C8;
  dword_4BB6C8 = (int)result;
  result[4] = v5;
  return result;
}


//======================================================================
// Ogre::RuntimeClass::fromName(char const*)
// address: 0x00186134   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Ogre::RuntimeClass::fromName(Ogre::RuntimeClass *this, const char *a2)
{
  int i; // r4

  for ( i = dword_4BB6C8; i != 0 && j_strcmp(*(const char **)i, (const char *)this) != 0; i = *(_DWORD *)(i + 16) )
    ;
  return i;
}

