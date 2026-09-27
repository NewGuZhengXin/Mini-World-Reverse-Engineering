// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::SamplerDefine

//======================================================================
// Ogre::SamplerDefine::SamplerDefine(Ogre::SamplerDefine const&)
// address: 0x00165716   size: 0x5C (92 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13SamplerDefineC1ERKS0_'
Ogre::FixedString **__fastcall Ogre::SamplerDefine::SamplerDefine(Ogre::FixedString **a1, Ogre::FixedString **a2)
{
  Ogre::FixedString *v3; // r0
  Ogre::FixedString **v4; // r5
  Ogre::FixedString *v5; // r1
  Ogre::FixedString *v6; // r6
  Ogre::FixedString *v7; // r1
  Ogre::FixedString *v8; // r6
  Ogre::FixedString *v9; // r1
  Ogre::FixedString *v10; // r6
  Ogre::FixedString *v11; // r1
  Ogre::FixedString *v12; // r6
  Ogre::FixedString *v13; // r2
  Ogre::FixedString *v15; // r2
  Ogre::FixedString *v16; // r6

  v3 = *a2;
  v4 = a2;
  *a1 = *a2;
  Ogre::FixedString::addRef(v3, a2);
  a1[1] = v4[1];
  v5 = v4[3];
  v6 = v4[4];
  a1[2] = v4[2];
  a1[3] = v5;
  a1[4] = v6;
  a1[5] = v4[5];
  v7 = v4[7];
  v8 = v4[8];
  a1[6] = v4[6];
  a1[7] = v7;
  a1[8] = v8;
  a1[9] = v4[9];
  v9 = v4[11];
  v10 = v4[12];
  a1[10] = v4[10];
  a1[11] = v9;
  a1[12] = v10;
  a1[13] = v4[13];
  v11 = v4[15];
  v12 = v4[16];
  a1[14] = v4[14];
  a1[15] = v11;
  a1[16] = v12;
  v13 = v4[17];
  v4 += 18;
  a1[17] = v13;
  v15 = v4[1];
  v16 = v4[2];
  a1[18] = *v4;
  a1[19] = v15;
  a1[20] = v16;
  a1[21] = v4[3];
  return a1;
}


//======================================================================
// Ogre::SamplerDefine::operator=(Ogre::SamplerDefine const&)
// address: 0x00165772   size: 0x58 (88 bytes)
//======================================================================
_DWORD *__fastcall Ogre::SamplerDefine::operator=(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r5
  int v4; // r1
  int v5; // r6
  int v6; // r1
  int v7; // r6
  int v8; // r1
  int v9; // r6
  int v10; // r1
  int v11; // r6
  int v12; // r2
  int v14; // r2
  int v15; // r6

  v2 = a2;
  Ogre::FixedString::operator=(a1, a2);
  a1[1] = v2[1];
  v4 = v2[3];
  v5 = v2[4];
  a1[2] = v2[2];
  a1[3] = v4;
  a1[4] = v5;
  a1[5] = v2[5];
  v6 = v2[7];
  v7 = v2[8];
  a1[6] = v2[6];
  a1[7] = v6;
  a1[8] = v7;
  a1[9] = v2[9];
  v8 = v2[11];
  v9 = v2[12];
  a1[10] = v2[10];
  a1[11] = v8;
  a1[12] = v9;
  a1[13] = v2[13];
  v10 = v2[15];
  v11 = v2[16];
  a1[14] = v2[14];
  a1[15] = v10;
  a1[16] = v11;
  v12 = v2[17];
  v2 += 18;
  a1[17] = v12;
  v14 = v2[1];
  v15 = v2[2];
  a1[18] = *v2;
  a1[19] = v14;
  a1[20] = v15;
  a1[21] = v2[3];
  return a1;
}

