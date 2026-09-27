// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::LinearResampler_Byte

//======================================================================
// Ogre::LinearResampler_Byte<1u>::scale(Ogre::PixelBox const&,Ogre::PixelBox const&)
// address: 0x00151C64   size: 0x17A (378 bytes)
//======================================================================
__int64 __fastcall Ogre::LinearResampler_Byte<1u>::scale(
        Ogre::LinearResampler *this,
        const Ogre::PixelBox **a2,
        const Ogre::PixelBox *a3)
{
  unsigned __int64 v5; // r0
  __int64 result; // r0
  unsigned __int64 i; // r6
  unsigned int v8; // r2
  unsigned int v9; // r3
  unsigned int v10; // r6
  unsigned int v11; // r2
  int v12; // r2
  unsigned int v13; // r6
  unsigned int v14; // r2
  unsigned int v15; // r7
  unsigned int v16; // r2
  int v17; // r3
  unsigned int v18; // r7
  int v19; // r6
  int v20; // r1
  const Ogre::PixelBox *v21; // r6
  int v22; // r2
  int v23; // [sp+4h] [bp-40h]
  const Ogre::PixelBox *v24; // [sp+8h] [bp-3Ch]
  int v25; // [sp+Ch] [bp-38h]
  unsigned __int64 v26; // [sp+10h] [bp-34h]
  unsigned __int64 v27; // [sp+18h] [bp-2Ch]
  const Ogre::PixelBox *v28; // [sp+20h] [bp-24h]
  int v29; // [sp+24h] [bp-20h]
  int v30; // [sp+28h] [bp-1Ch]
  unsigned __int8 *v31; // [sp+2Ch] [bp-18h]
  unsigned int v32; // [sp+30h] [bp-14h]
  unsigned __int8 *v33; // [sp+38h] [bp-Ch]
  int v34; // [sp+3Ch] [bp-8h]

  if ( *((_DWORD *)this + 5) - *((_DWORD *)this + 2) > 1 )
    return Ogre::LinearResampler::scale(this, (const Ogre::PixelBox *)a2, a3);
  a3 = a2[5];
  if ( a3 - a2[2] > 1 )
    return Ogre::LinearResampler::scale(this, (const Ogre::PixelBox *)a2, a3);
  v25 = *((_DWORD *)this + 6);
  v28 = a2[6];
  v24 = a2[1];
  HIDWORD(v5) = (*((_DWORD *)this + 4) - *((_DWORD *)this + 1)) << 16;
  LODWORD(v5) = 0;
  v26 = v5 / (a2[4] - v24);
  result = -1;
  for ( i = v26 >> 1; ; i = v27 )
  {
    v27 = i + result;
    if ( (int)v24 >= (int)a2[4] )
      break;
    v8 = 0;
    v9 = HIDWORD(v27) >> 4;
    if ( HIDWORD(v27) >> 4 > 0x800 )
      v8 = v9 - 2048;
    v10 = v8 << 20;
    v11 = v8 >> 12;
    v29 = *((_DWORD *)this + 8) * v11;
    v12 = v11 + 1;
    v13 = v10 >> 20;
    if ( v12 > *((_DWORD *)this + 4) - *((_DWORD *)this + 1) - 1 )
      v12 = *((_DWORD *)this + 4) - *((_DWORD *)this + 1) - 1;
    v30 = *((_DWORD *)this + 8) * v12;
    v14 = 0;
    if ( v9 > 0x800 )
      v14 = v9 - 2048;
    v15 = v14 << 20;
    v16 = v14 >> 12;
    v15 >>= 20;
    v17 = v15 * v13;
    v31 = (unsigned __int8 *)(v25 + v29 + v16);
    v18 = v15 << 12;
    v19 = v13 << 12;
    v20 = v16 + 1;
    v32 = 0x1000000 - v18 + v17 - v19;
    v34 = v19 - v17;
    v21 = v28;
    v33 = (unsigned __int8 *)(v25 + v30 + v16);
    v23 = *a2 - v28;
    while ( (int)((char *)v21 + v23) < (int)a2[3] )
    {
      v22 = v20;
      if ( v20 > *((_DWORD *)this + 3) - *(_DWORD *)this - 1 )
        v22 = *((_DWORD *)this + 3) - *(_DWORD *)this - 1;
      *(_BYTE *)v21 = (*v31 * v32
                     + *(unsigned __int8 *)(v25 + v29 + v22) * (v18 - v17)
                     + 0x800000
                     + *(unsigned __int8 *)(v25 + v30 + v22) * v17
                     + *v33 * v34) >> 24;
      v21 = (const Ogre::PixelBox *)((char *)v21 + 1);
    }
    v28 = (const Ogre::PixelBox *)((char *)v21 + Ogre::PixelBox::getRowSkip((Ogre::PixelBox *)a2));
    result = v26;
    v24 = (const Ogre::PixelBox *)((char *)v24 + 1);
  }
  return result;
}


//======================================================================
// Ogre::LinearResampler_Byte<2u>::scale(Ogre::PixelBox const&,Ogre::PixelBox const&)
// address: 0x00151DE4   size: 0x198 (408 bytes)
//======================================================================
__int64 __fastcall Ogre::LinearResampler_Byte<2u>::scale(
        Ogre::LinearResampler *this,
        const Ogre::PixelBox **a2,
        const Ogre::PixelBox *a3)
{
  unsigned __int64 v5; // r0
  __int64 result; // r0
  unsigned __int64 i; // r6
  unsigned int v8; // r3
  unsigned int v9; // r2
  unsigned int v10; // r0
  unsigned int v11; // r3
  int v12; // r12
  int v13; // r3
  unsigned int v14; // r0
  const Ogre::PixelBox *v15; // r1
  unsigned int v16; // r3
  unsigned int v17; // r6
  unsigned int v18; // r3
  int v19; // r2
  unsigned int v20; // r6
  int v21; // r0
  int v22; // r7
  int j; // r3
  const Ogre::PixelBox *v24; // [sp+Ch] [bp-40h]
  unsigned __int64 v25; // [sp+10h] [bp-3Ch]
  const Ogre::PixelBox *v26; // [sp+18h] [bp-34h]
  int v27; // [sp+1Ch] [bp-30h]
  unsigned __int64 v28; // [sp+20h] [bp-2Ch]
  int v29; // [sp+2Ch] [bp-20h]
  int v30; // [sp+30h] [bp-1Ch]
  int v31; // [sp+34h] [bp-18h]
  int v32; // [sp+40h] [bp-Ch]

  if ( *((_DWORD *)this + 5) - *((_DWORD *)this + 2) > 1 )
    return Ogre::LinearResampler::scale(this, (const Ogre::PixelBox *)a2, a3);
  a3 = a2[5];
  if ( a3 - a2[2] > 1 )
    return Ogre::LinearResampler::scale(this, (const Ogre::PixelBox *)a2, a3);
  v29 = *((_DWORD *)this + 6);
  v24 = a2[6];
  v26 = a2[1];
  HIDWORD(v5) = (*((_DWORD *)this + 4) - *((_DWORD *)this + 1)) << 16;
  LODWORD(v5) = 0;
  v25 = v5 / (a2[4] - v26);
  result = -1;
  for ( i = v25 >> 1; ; i = v28 )
  {
    v28 = i + result;
    if ( (int)v26 >= (int)a2[4] )
      break;
    v8 = 0;
    v9 = HIDWORD(v28) >> 4;
    if ( HIDWORD(v28) >> 4 > 0x800 )
      v8 = v9 - 2048;
    v10 = v8 << 20;
    v11 = v8 >> 12;
    v12 = *((_DWORD *)this + 8) * v11;
    v13 = v11 + 1;
    v14 = v10 >> 20;
    if ( v13 > *((_DWORD *)this + 4) - *((_DWORD *)this + 1) - 1 )
      v13 = *((_DWORD *)this + 4) - *((_DWORD *)this + 1) - 1;
    v27 = *((_DWORD *)this + 8) * v13;
    v15 = *a2;
    v16 = 0;
    if ( v9 > 0x800 )
      v16 = v9 - 2048;
    v17 = v16 << 20;
    v18 = v16 >> 12;
    v17 >>= 20;
    v30 = v18 + 1;
    v19 = v17 * v14;
    v31 = 2 * (v12 + v18);
    v20 = v17 << 12;
    v21 = v14 << 12;
    v32 = 2 * (v27 + v18);
    while ( (int)v15 < (int)a2[3] )
    {
      v22 = v30;
      if ( v30 > *((_DWORD *)this + 3) - *(_DWORD *)this - 1 )
        v22 = *((_DWORD *)this + 3) - *(_DWORD *)this - 1;
      for ( j = 0; j != 2; ++j )
        *((_BYTE *)v24 + j) = (*(unsigned __int8 *)(v29 + v31 + j) * (0x1000000 - v20 + v19 - v21)
                             + *(unsigned __int8 *)(v29 + 2 * (v22 + v12) + j) * (v20 - v19)
                             + 0x800000
                             + *(unsigned __int8 *)(v29 + 2 * (v22 + v27) + j) * v19
                             + *(unsigned __int8 *)(v29 + v32 + j) * (v21 - v19)) >> 24;
      v24 = (const Ogre::PixelBox *)((char *)v24 + 2);
      v15 = (const Ogre::PixelBox *)((char *)v15 + 1);
    }
    v24 = (const Ogre::PixelBox *)((char *)v24 + 2 * Ogre::PixelBox::getRowSkip((Ogre::PixelBox *)a2));
    v26 = (const Ogre::PixelBox *)((char *)v26 + 1);
    result = v25;
  }
  return result;
}


//======================================================================
// Ogre::LinearResampler_Byte<3u>::scale(Ogre::PixelBox const&,Ogre::PixelBox const&)
// address: 0x00151F80   size: 0x1B0 (432 bytes)
//======================================================================
__int64 __fastcall Ogre::LinearResampler_Byte<3u>::scale(
        Ogre::LinearResampler *this,
        const Ogre::PixelBox **a2,
        const Ogre::PixelBox *a3)
{
  unsigned __int64 v5; // r0
  __int64 result; // r0
  unsigned __int64 i; // r6
  unsigned int v8; // r3
  unsigned int v9; // r2
  unsigned int v10; // r0
  unsigned int v11; // r3
  int v12; // r12
  int v13; // r3
  const Ogre::PixelBox *v14; // r1
  unsigned int v15; // r3
  unsigned int v16; // r6
  unsigned int v17; // r3
  int v18; // r2
  unsigned int v19; // r6
  int v20; // r7
  int j; // r3
  const Ogre::PixelBox *v22; // [sp+Ch] [bp-40h]
  unsigned __int64 v23; // [sp+10h] [bp-3Ch]
  const Ogre::PixelBox *v24; // [sp+18h] [bp-34h]
  int v25; // [sp+1Ch] [bp-30h]
  unsigned __int64 v26; // [sp+20h] [bp-2Ch]
  unsigned int v27; // [sp+28h] [bp-24h]
  int v28; // [sp+2Ch] [bp-20h]
  int v29; // [sp+30h] [bp-1Ch]
  int v30; // [sp+34h] [bp-18h]
  int v31; // [sp+40h] [bp-Ch]

  if ( *((_DWORD *)this + 5) - *((_DWORD *)this + 2) > 1 )
    return Ogre::LinearResampler::scale(this, (const Ogre::PixelBox *)a2, a3);
  a3 = a2[5];
  if ( a3 - a2[2] > 1 )
    return Ogre::LinearResampler::scale(this, (const Ogre::PixelBox *)a2, a3);
  v28 = *((_DWORD *)this + 6);
  v22 = a2[6];
  v24 = a2[1];
  HIDWORD(v5) = (*((_DWORD *)this + 4) - *((_DWORD *)this + 1)) << 16;
  LODWORD(v5) = 0;
  v23 = v5 / (a2[4] - v24);
  result = -1;
  for ( i = v23 >> 1; ; i = v26 )
  {
    v26 = i + result;
    if ( (int)v24 >= (int)a2[4] )
      break;
    v8 = 0;
    v9 = HIDWORD(v26) >> 4;
    if ( HIDWORD(v26) >> 4 > 0x800 )
      v8 = v9 - 2048;
    v10 = v8 << 20;
    v11 = v8 >> 12;
    v12 = *((_DWORD *)this + 8) * v11;
    v27 = v10 >> 20;
    v13 = v11 + 1;
    if ( v13 > *((_DWORD *)this + 4) - *((_DWORD *)this + 1) - 1 )
      v13 = *((_DWORD *)this + 4) - *((_DWORD *)this + 1) - 1;
    v25 = *((_DWORD *)this + 8) * v13;
    v14 = *a2;
    v15 = 0;
    if ( v9 > 0x800 )
      v15 = v9 - 2048;
    v16 = v15 << 20;
    v17 = v15 >> 12;
    v16 >>= 20;
    v29 = v17 + 1;
    v18 = v16 * v27;
    v30 = 3 * (v12 + v17);
    v19 = v16 << 12;
    v31 = 3 * (v25 + v17);
    while ( (int)v14 < (int)a2[3] )
    {
      v20 = v29;
      if ( v29 > *((_DWORD *)this + 3) - *(_DWORD *)this - 1 )
        v20 = *((_DWORD *)this + 3) - *(_DWORD *)this - 1;
      for ( j = 0; j != 3; ++j )
        *((_BYTE *)v22 + j) = (*(unsigned __int8 *)(v28 + v30 + j) * (0x1000000 - v19 + v18 - (v27 << 12))
                             + *(unsigned __int8 *)(v28 + 3 * (v20 + v12) + j) * (v19 - v18)
                             + 0x800000
                             + *(unsigned __int8 *)(v28 + 3 * (v20 + v25) + j) * v18
                             + *(unsigned __int8 *)(v28 + v31 + j) * ((v27 << 12) - v18)) >> 24;
      v22 = (const Ogre::PixelBox *)((char *)v22 + 3);
      v14 = (const Ogre::PixelBox *)((char *)v14 + 1);
    }
    v22 = (const Ogre::PixelBox *)((char *)v22 + 3 * Ogre::PixelBox::getRowSkip((Ogre::PixelBox *)a2));
    v24 = (const Ogre::PixelBox *)((char *)v24 + 1);
    result = v23;
  }
  return result;
}


//======================================================================
// Ogre::LinearResampler_Byte<4u>::scale(Ogre::PixelBox const&,Ogre::PixelBox const&)
// address: 0x00152134   size: 0x198 (408 bytes)
//======================================================================
__int64 __fastcall Ogre::LinearResampler_Byte<4u>::scale(
        Ogre::LinearResampler *this,
        const Ogre::PixelBox **a2,
        const Ogre::PixelBox *a3)
{
  unsigned __int64 v5; // r0
  __int64 result; // r0
  unsigned __int64 i; // r6
  unsigned int v8; // r3
  unsigned int v9; // r2
  unsigned int v10; // r0
  unsigned int v11; // r3
  int v12; // r12
  int v13; // r3
  unsigned int v14; // r0
  const Ogre::PixelBox *v15; // r1
  unsigned int v16; // r3
  unsigned int v17; // r6
  unsigned int v18; // r3
  int v19; // r2
  unsigned int v20; // r6
  int v21; // r0
  int v22; // r7
  int j; // r3
  const Ogre::PixelBox *v24; // [sp+Ch] [bp-40h]
  unsigned __int64 v25; // [sp+10h] [bp-3Ch]
  const Ogre::PixelBox *v26; // [sp+18h] [bp-34h]
  int v27; // [sp+1Ch] [bp-30h]
  unsigned __int64 v28; // [sp+20h] [bp-2Ch]
  int v29; // [sp+2Ch] [bp-20h]
  int v30; // [sp+30h] [bp-1Ch]
  int v31; // [sp+34h] [bp-18h]
  int v32; // [sp+40h] [bp-Ch]

  if ( *((_DWORD *)this + 5) - *((_DWORD *)this + 2) > 1 )
    return Ogre::LinearResampler::scale(this, (const Ogre::PixelBox *)a2, a3);
  a3 = a2[5];
  if ( a3 - a2[2] > 1 )
    return Ogre::LinearResampler::scale(this, (const Ogre::PixelBox *)a2, a3);
  v29 = *((_DWORD *)this + 6);
  v24 = a2[6];
  v26 = a2[1];
  HIDWORD(v5) = (*((_DWORD *)this + 4) - *((_DWORD *)this + 1)) << 16;
  LODWORD(v5) = 0;
  v25 = v5 / (a2[4] - v26);
  result = -1;
  for ( i = v25 >> 1; ; i = v28 )
  {
    v28 = i + result;
    if ( (int)v26 >= (int)a2[4] )
      break;
    v8 = 0;
    v9 = HIDWORD(v28) >> 4;
    if ( HIDWORD(v28) >> 4 > 0x800 )
      v8 = v9 - 2048;
    v10 = v8 << 20;
    v11 = v8 >> 12;
    v12 = *((_DWORD *)this + 8) * v11;
    v13 = v11 + 1;
    v14 = v10 >> 20;
    if ( v13 > *((_DWORD *)this + 4) - *((_DWORD *)this + 1) - 1 )
      v13 = *((_DWORD *)this + 4) - *((_DWORD *)this + 1) - 1;
    v27 = *((_DWORD *)this + 8) * v13;
    v15 = *a2;
    v16 = 0;
    if ( v9 > 0x800 )
      v16 = v9 - 2048;
    v17 = v16 << 20;
    v18 = v16 >> 12;
    v17 >>= 20;
    v30 = v18 + 1;
    v19 = v17 * v14;
    v31 = 4 * (v12 + v18);
    v20 = v17 << 12;
    v21 = v14 << 12;
    v32 = 4 * (v27 + v18);
    while ( (int)v15 < (int)a2[3] )
    {
      v22 = v30;
      if ( v30 > *((_DWORD *)this + 3) - *(_DWORD *)this - 1 )
        v22 = *((_DWORD *)this + 3) - *(_DWORD *)this - 1;
      for ( j = 0; j != 4; ++j )
        *((_BYTE *)v24 + j) = (*(unsigned __int8 *)(v29 + v31 + j) * (0x1000000 - v20 + v19 - v21)
                             + *(unsigned __int8 *)(v29 + 4 * (v22 + v12) + j) * (v20 - v19)
                             + 0x800000
                             + *(unsigned __int8 *)(v29 + 4 * (v22 + v27) + j) * v19
                             + *(unsigned __int8 *)(v29 + v32 + j) * (v21 - v19)) >> 24;
      v24 = (const Ogre::PixelBox *)((char *)v24 + 4);
      v15 = (const Ogre::PixelBox *)((char *)v15 + 1);
    }
    v24 = (const Ogre::PixelBox *)((char *)v24 + 4 * Ogre::PixelBox::getRowSkip((Ogre::PixelBox *)a2));
    v26 = (const Ogre::PixelBox *)((char *)v26 + 1);
    result = v25;
  }
  return result;
}

