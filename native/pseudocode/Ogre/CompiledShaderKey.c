// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::CompiledShaderKey

//======================================================================
// Ogre::CompiledShaderKey::CompiledShaderKey(Ogre::CompiledShaderKey const&)
// address: 0x0015970C   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17CompiledShaderKeyC1ERKS0_'
int __fastcall Ogre::CompiledShaderKey::CompiledShaderKey(int a1, int a2)
{
  void *v4; // r1
  Ogre::FixedString *v5; // r0

  *(_OWORD *)a1 = *(_OWORD *)a2;
  v5 = *(Ogre::FixedString **)(a2 + 16);
  *(_DWORD *)(a1 + 16) = v5;
  Ogre::FixedString::addRef(v5, v4);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  return a1;
}

