// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::WorldPos

//======================================================================
// Ogre::WorldPos::WorldPos(Ogre::Vector3 const&)
// address: 0x00146CB8   size: 0x34 (52 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre8WorldPosC1ERKNS_7Vector3E'
_DWORD *__fastcall Ogre::WorldPos::WorldPos(_DWORD *this, const Ogre::Vector3 *a2)
{
  *this = (int)(float)(*(float *)a2 * 10.0);
  *(this + 1) = (int)(float)(*((float *)a2 + 1) * 10.0);
  *(this + 2) = (int)(float)(*((float *)a2 + 2) * 10.0);
  return this;
}


//======================================================================
// Ogre::WorldPos::toVector3(void)const
// address: 0x0015A720   size: 0x5E (94 bytes)
//======================================================================
Ogre::WorldPos *__fastcall Ogre::WorldPos::toVector3(Ogre::WorldPos *this, _DWORD *a2)
{
  float v3; // r0
  float v4; // r7
  float v5; // r0
  float v6; // r0
  float v8; // [sp+4h] [bp-8h]

  v3 = (double)(a2[1] - dword_4C6B7C) / 10.0;
  v4 = v3;
  v5 = (double)(a2[2] - dword_4C6B80) / 10.0;
  v8 = v5;
  v6 = (double)(*a2 - Ogre::WorldPos::m_Origin) / 10.0;
  *(float *)this = v6;
  *((float *)this + 1) = v4;
  *((float *)this + 2) = v8;
  return this;
}


//======================================================================
// Ogre::WorldPos::operator+=(Ogre::Vector3 const&)
// address: 0x0029F3DC   size: 0x40 (64 bytes)
//======================================================================
_DWORD *__fastcall Ogre::WorldPos::operator+=(_DWORD *result, float *a2)
{
  *result += (int)(float)(*a2 * 10.0);
  result[1] += (int)(float)(a2[1] * 10.0);
  result[2] += (int)(float)(a2[2] * 10.0);
  return result;
}

