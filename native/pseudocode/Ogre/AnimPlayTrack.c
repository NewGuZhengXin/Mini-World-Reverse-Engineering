// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::AnimPlayTrack

//======================================================================
// Ogre::AnimPlayTrack::update(unsigned int)
// address: 0x00192728   size: 0xE2 (226 bytes)
//======================================================================
unsigned int __fastcall Ogre::AnimPlayTrack::update(Ogre::AnimPlayTrack *this, unsigned int a2)
{
  int v3; // r5
  unsigned int result; // r0
  int v5; // r7
  unsigned int v6; // r6
  unsigned int v7; // r5
  int v8; // r3
  int v9; // r3
  int v10; // r3
  float v11; // [sp+4h] [bp-10h]
  float v12; // [sp+8h] [bp-Ch]

  v3 = *((_DWORD *)this + 6);
  *(float *)&result = (float)a2;
  v5 = *((_DWORD *)this + 7);
  v6 = *((_DWORD *)this + 8);
  v11 = (float)a2;
  if ( v5 == v6 )
  {
    v7 = *((_DWORD *)this + 7);
  }
  else
  {
    result = (unsigned int)(float)(*(float *)&result * *((float *)this + 11));
    v7 = result + v3;
    if ( v7 >= v6 )
    {
      v8 = *((_DWORD *)this + 9);
      if ( v8 != 0 )
      {
        if ( v8 == 1 )
          *((_DWORD *)this + 4) = 3;
        else
          *((_DWORD *)this + 11) = 0;
        v7 = v6;
      }
      else
      {
        result = (v7 - v5) / (v6 - v5);
        v7 = (v7 - v5) % (v6 - v5) + v5;
      }
    }
  }
  v9 = *((_DWORD *)this + 4);
  if ( v9 != 1 )
  {
    if ( v9 != 3 )
      goto LABEL_22;
    v12 = *((float *)this + 13);
    result = v12 == 0.0;
    if ( v12 == 0.0 )
    {
      *((_DWORD *)this + 5) = 0;
      v10 = 0;
    }
    else
    {
      result = (float)(*((float *)this + 5) - (float)((float)(v11 / 1000.0) / v12)) <= 0.0;
      if ( (float)(*((float *)this + 5) - (float)((float)(v11 / 1000.0) / v12)) > 0.0 )
      {
        *((float *)this + 5) = *((float *)this + 5) - (float)((float)(v11 / 1000.0) / v12);
        goto LABEL_22;
      }
      v10 = 0;
      *((_DWORD *)this + 5) = 0;
    }
LABEL_21:
    *((_DWORD *)this + 4) = v10;
    goto LABEL_22;
  }
  result = *((float *)this + 12) == 0.0;
  if ( *((float *)this + 12) == 0.0
    || (result = (float)((float)((float)(v11 / 1000.0) / *((float *)this + 12)) + *((float *)this + 5)) >= 1.0) != 0 )
  {
    *((_DWORD *)this + 5) = 1065353216;
    v10 = 2;
    goto LABEL_21;
  }
  *((float *)this + 5) = (float)((float)(v11 / 1000.0) / *((float *)this + 12)) + *((float *)this + 5);
LABEL_22:
  *((_DWORD *)this + 6) = v7;
  return result;
}


//======================================================================
// Ogre::AnimPlayTrack::resetUpdate(unsigned int)
// address: 0x00192810   size: 0xC (12 bytes)
//======================================================================
unsigned int __fastcall Ogre::AnimPlayTrack::resetUpdate(Ogre::AnimPlayTrack *this, unsigned int a2)
{
  *((_DWORD *)this + 6) = *((_DWORD *)this + 7);
  return Ogre::AnimPlayTrack::update(this, a2);
}

