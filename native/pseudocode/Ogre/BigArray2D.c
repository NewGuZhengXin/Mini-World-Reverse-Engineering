// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BigArray2D

//======================================================================
// Ogre::BigArray2D<unsigned char>::Smooth(unsigned char *,unsigned char *,int,int)
// address: 0x001916E8   size: 0xAA (170 bytes)
//======================================================================
int __fastcall Ogre::BigArray2D<unsigned char>::Smooth(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v5; // r6
  int v6; // r4
  int v7; // r3
  int i; // r3
  int v9; // r5
  int v10; // r4
  int v11; // [sp+8h] [bp-1Ch]
  int v12; // [sp+Ch] [bp-18h]
  int v15; // [sp+18h] [bp-Ch]

  v15 = a4 - 1;
  result = 0;
  v5 = 0;
  while ( v5 < a4 )
  {
    v6 = v5 - 1;
    if ( v5 - 1 < 0 )
      v6 = v15;
    if ( ++v5 >= a4 )
      v7 = 0;
    else
      v7 = v5;
    v12 = a3 * v6;
    v11 = a3 * v7;
    for ( i = 0; i < a3; ++i )
    {
      v9 = i - 1;
      if ( i == 0 )
        v9 = a3 - 1;
      v10 = i + 1;
      if ( i + 1 >= a3 )
        v10 = 0;
      *(_BYTE *)(a1 + result + i) = ((*(unsigned __int8 *)(a2 + v10 + v11)
                                    + *(unsigned __int8 *)(a2 + v9 + v12)
                                    + *(unsigned __int8 *)(a2 + v10 + v12)
                                    + *(unsigned __int8 *)(a2 + v9 + v11)) >> 4)
                                  + ((*(unsigned __int8 *)(a2 + v9 + result)
                                    + *(unsigned __int8 *)(a2 + v10 + result)
                                    + *(unsigned __int8 *)(a2 + v12 + i)
                                    + *(unsigned __int8 *)(a2 + v11 + i)) >> 3)
                                  + (*(_BYTE *)(a2 + result + i) >> 2);
    }
    result += a3;
  }
  return result;
}

