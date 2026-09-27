// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::PixelBox

//======================================================================
// Ogre::PixelBox::getSliceSkip(void)const
// address: 0x001443B0   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Ogre::PixelBox::getSliceSkip(Ogre::PixelBox *this)
{
  return *((_DWORD *)this + 9) - (*((_DWORD *)this + 4) - *((_DWORD *)this + 1)) * *((_DWORD *)this + 8);
}


//======================================================================
// Ogre::PixelBox::isConsecutive(void)const
// address: 0x001443C0   size: 0x24 (36 bytes)
//======================================================================
int __fastcall Ogre::PixelBox::isConsecutive(Ogre::PixelBox *this)
{
  int v2; // r1
  int v3; // r2
  int result; // r0

  v2 = *((_DWORD *)this + 3) - *(_DWORD *)this;
  v3 = *((_DWORD *)this + 8);
  result = 0;
  if ( v3 == v2 )
    return v3 * (*((_DWORD *)this + 4) - *((_DWORD *)this + 1))
         - *((_DWORD *)this + 9)
         + (*((_DWORD *)this + 9) == v3 * (*((_DWORD *)this + 4) - *((_DWORD *)this + 1)))
         + *((_DWORD *)this + 9)
         - v3 * (*((_DWORD *)this + 4) - *((_DWORD *)this + 1));
  return result;
}


//======================================================================
// Ogre::PixelBox::getConsecutiveSize(void)const
// address: 0x00144648   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Ogre::PixelBox::getConsecutiveSize(Ogre::PixelBox *this)
{
  return Ogre::PixelUtil::getMemorySize(
           *((_DWORD *)this + 3) - *(_DWORD *)this,
           *((_DWORD *)this + 4) - *((_DWORD *)this + 1),
           *((_DWORD *)this + 5) - *((_DWORD *)this + 2),
           *((_DWORD *)this + 7));
}


//======================================================================
// Ogre::PixelBox::getSubVolume(Ogre::TBox<int> const&)const
// address: 0x00144666   size: 0xE0 (224 bytes)
//======================================================================
_DWORD *__fastcall Ogre::PixelBox::getSubVolume(_DWORD *a1, int *a2, _DWORD *a3)
{
  int v6; // r2
  int *v7; // r4
  int v8; // r5
  int v9; // r7
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r5
  int v14; // r7
  int NumElemBytes; // r0
  int v16; // r1
  int v18; // [sp+8h] [bp-3Ch]
  int v19; // [sp+Ch] [bp-38h]
  int v20; // [sp+20h] [bp-24h]
  int v21; // [sp+28h] [bp-1Ch]
  int v22; // [sp+2Ch] [bp-18h]
  int v23; // [sp+30h] [bp-14h]
  int v24; // [sp+34h] [bp-10h]
  int v25; // [sp+3Ch] [bp-8h]

  if ( Ogre::PixelUtil::isCompressed(a2[7]) != 0
    && *a3 == *a2
    && a3[1] == a2[1]
    && a3[2] == a2[2]
    && a3[3] == a2[3]
    && a3[4] == a2[4]
    && a3[5] == a2[5] )
  {
    v6 = *a2;
    v8 = a2[1];
    v9 = a2[2];
    v7 = a2 + 3;
    *a1 = v6;
    a1[1] = v8;
    a1[2] = v9;
    v10 = *v7;
    v11 = v7[1];
    v12 = v7[2];
    v7 += 3;
    a1[3] = v10;
    a1[4] = v11;
    a1[5] = v12;
    v13 = v7[1];
    v14 = v7[2];
    a1[6] = *v7;
    a1[7] = v13;
    a1[8] = v14;
    a1[9] = v7[3];
  }
  else
  {
    NumElemBytes = Ogre::PixelUtil::getNumElemBytes(a2[7]);
    v18 = a2[8];
    v19 = a3[1];
    v20 = a3[2];
    v22 = a3[5];
    v16 = a3[3];
    v21 = a3[4];
    v23 = a2[6] + ((v20 - a2[2]) * a2[9] + (v19 - a2[1]) * v18 + *a3 - *a2) * NumElemBytes;
    v24 = a2[7];
    v25 = a2[9];
    *a1 = *a3;
    a1[1] = v19;
    a1[2] = v20;
    a1[3] = v16;
    a1[4] = v21;
    a1[5] = v22;
    a1[6] = v23;
    a1[7] = v24;
    a1[8] = v18;
    a1[9] = v25;
  }
  return a1;
}


//======================================================================
// Ogre::PixelBox::getRowSkip(void)const
// address: 0x0015051E   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::PixelBox::getRowSkip(Ogre::PixelBox *this)
{
  return *((_DWORD *)this + 8) - (*((_DWORD *)this + 3) - *(_DWORD *)this);
}

