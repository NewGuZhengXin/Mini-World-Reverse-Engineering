// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::LinearResampler

//======================================================================
// Ogre::LinearResampler::scale(Ogre::PixelBox const&,Ogre::PixelBox const&)
// address: 0x00150594   size: 0x4E8 (1256 bytes)
//======================================================================
__int64 __fastcall Ogre::LinearResampler::scale(
        Ogre::LinearResampler *this,
        const Ogre::PixelBox *a2,
        const Ogre::PixelBox *a3)
{
  unsigned __int64 v5; // r0
  __int64 result; // r0
  unsigned int v7; // r0
  int v8; // r6
  int v9; // r1
  __int64 v10; // kr00_8
  unsigned int v11; // r0
  int v12; // r6
  int v13; // r1
  __int64 v14; // kr08_8
  unsigned int v15; // r0
  int v16; // r6
  int v17; // r5
  int v18; // r3
  int v19; // r1
  int v20; // r2
  int v21; // r1
  float v22; // [sp+4h] [bp-218h]
  float v23; // [sp+8h] [bp-214h]
  unsigned int v24; // [sp+10h] [bp-20Ch]
  int NumElemBytes; // [sp+14h] [bp-208h]
  int v26; // [sp+18h] [bp-204h]
  int v27; // [sp+24h] [bp-1F8h]
  int v28; // [sp+38h] [bp-1E4h]
  int v29; // [sp+3Ch] [bp-1E0h]
  unsigned int v30; // [sp+40h] [bp-1DCh]
  float v31; // [sp+44h] [bp-1D8h]
  __int64 v32; // [sp+48h] [bp-1D4h]
  unsigned int v33; // [sp+50h] [bp-1CCh]
  int v34; // [sp+54h] [bp-1C8h]
  unsigned __int64 v35; // [sp+68h] [bp-1B4h]
  unsigned __int64 v36; // [sp+70h] [bp-1ACh]
  unsigned __int64 v37; // [sp+78h] [bp-1A4h]
  float v38; // [sp+80h] [bp-19Ch]
  int v39; // [sp+84h] [bp-198h]
  int v40; // [sp+88h] [bp-194h]
  int v41; // [sp+8Ch] [bp-190h]
  float v42; // [sp+90h] [bp-18Ch]
  float v43; // [sp+94h] [bp-188h]
  float v44[4]; // [sp+A8h] [bp-174h] BYREF
  float v45[4]; // [sp+B8h] [bp-164h] BYREF
  float v46[4]; // [sp+C8h] [bp-154h] BYREF
  float v47[4]; // [sp+D8h] [bp-144h] BYREF
  float v48[4]; // [sp+E8h] [bp-134h] BYREF
  float v49[4]; // [sp+F8h] [bp-124h] BYREF
  float v50[4]; // [sp+108h] [bp-114h] BYREF
  float v51[4]; // [sp+118h] [bp-104h] BYREF
  float v52[4]; // [sp+128h] [bp-F4h] BYREF
  float v53[4]; // [sp+138h] [bp-E4h] BYREF
  float v54[4]; // [sp+148h] [bp-D4h] BYREF
  float v55[4]; // [sp+158h] [bp-C4h] BYREF
  float v56[4]; // [sp+168h] [bp-B4h] BYREF
  float v57[4]; // [sp+178h] [bp-A4h] BYREF
  float v58[4]; // [sp+188h] [bp-94h] BYREF
  float v59[4]; // [sp+198h] [bp-84h] BYREF
  float v60[4]; // [sp+1A8h] [bp-74h] BYREF
  float v61[4]; // [sp+1B8h] [bp-64h] BYREF
  float v62[4]; // [sp+1C8h] [bp-54h] BYREF
  float v63[4]; // [sp+1D8h] [bp-44h] BYREF
  float v64[4]; // [sp+1E8h] [bp-34h] BYREF
  float v65[4]; // [sp+1F8h] [bp-24h] BYREF
  float v66[5]; // [sp+208h] [bp-14h] BYREF

  NumElemBytes = Ogre::PixelUtil::getNumElemBytes(*((_DWORD *)this + 7));
  v41 = Ogre::PixelUtil::getNumElemBytes(*((_DWORD *)a2 + 7));
  v26 = *((_DWORD *)this + 6);
  HIDWORD(v5) = (*((_DWORD *)this + 3) - *(_DWORD *)this) << 16;
  LODWORD(v5) = 0;
  v27 = *((_DWORD *)a2 + 6);
  v35 = v5 / (*((_DWORD *)a2 + 3) - *(_DWORD *)a2);
  HIDWORD(v5) = (*((_DWORD *)this + 4) - *((_DWORD *)this + 1)) << 16;
  LODWORD(v5) = 0;
  v36 = v5 / (*((_DWORD *)a2 + 4) - *((_DWORD *)a2 + 1));
  v34 = *((_DWORD *)a2 + 2);
  HIDWORD(v5) = (*((_DWORD *)this + 5) - *((_DWORD *)this + 2)) << 16;
  LODWORD(v5) = 0;
  v37 = v5 / (*((_DWORD *)a2 + 5) - v34);
  result = -1;
  v32 = (v37 >> 1) - 1;
  while ( v34 < *((_DWORD *)a2 + 5) )
  {
    v7 = 0;
    if ( HIDWORD(v32) > 0x8000 )
      v7 = HIDWORD(v32) - 0x8000;
    v8 = *((_DWORD *)this + 5);
    v9 = *((_DWORD *)this + 2);
    v30 = HIWORD(v7);
    v29 = HIWORD(v7) + 1;
    if ( v29 > v8 - v9 - 1 )
      v29 = v8 - v9 - 1;
    v31 = (float)(unsigned __int16)v7 * 0.000015259;
    v39 = *((_DWORD *)a2 + 1);
    v10 = (v36 >> 1) - 1;
    while ( v39 < *((_DWORD *)a2 + 4) )
    {
      v11 = 0;
      if ( HIDWORD(v10) > 0x8000 )
        v11 = HIDWORD(v10) - 0x8000;
      v12 = *((_DWORD *)this + 4);
      v13 = *((_DWORD *)this + 1);
      v33 = HIWORD(v11);
      v28 = HIWORD(v11) + 1;
      if ( v28 > v12 - v13 - 1 )
        v28 = v12 - v13 - 1;
      v42 = (float)(unsigned __int16)v11 * 0.000015259;
      v40 = *(_DWORD *)a2;
      v14 = (v35 >> 1) - 1;
      while ( v40 < *((_DWORD *)a2 + 3) )
      {
        v15 = 0;
        if ( HIDWORD(v14) > 0x8000 )
          v15 = HIDWORD(v14) - 0x8000;
        v16 = *((_DWORD *)this + 3);
        v24 = HIWORD(v15);
        v17 = HIWORD(v15) + 1;
        if ( v17 > v16 - *(_DWORD *)this - 1 )
          v17 = v16 - *(_DWORD *)this - 1;
        v43 = (float)(unsigned __int16)v15 * 0.000015259;
        v44[0] = 1.0;
        v44[1] = 1.0;
        v44[2] = 1.0;
        v44[3] = 1.0;
        v45[0] = 1.0;
        v45[1] = 1.0;
        v45[2] = 1.0;
        v45[3] = 1.0;
        v46[0] = 1.0;
        v46[1] = 1.0;
        v46[2] = 1.0;
        v46[3] = 1.0;
        v47[0] = 1.0;
        v47[1] = 1.0;
        v47[2] = 1.0;
        v47[3] = 1.0;
        v48[0] = 1.0;
        v48[1] = 1.0;
        v48[2] = 1.0;
        v48[3] = 1.0;
        v49[0] = 1.0;
        v49[1] = 1.0;
        v49[2] = 1.0;
        v49[3] = 1.0;
        v50[0] = 1.0;
        v18 = *((_DWORD *)this + 8);
        v19 = *((_DWORD *)this + 9);
        v50[1] = 1.0;
        v50[2] = 1.0;
        v20 = v18 * v33 + v19 * v30;
        v21 = *((_DWORD *)this + 7);
        v50[3] = 1.0;
        v51[0] = 1.0;
        v51[1] = 1.0;
        v51[2] = 1.0;
        v51[3] = 1.0;
        Ogre::PixelUtil::unpackColour(v44, v21, (Ogre::Bitwise *)(v26 + (v20 + v24) * NumElemBytes));
        Ogre::PixelUtil::unpackColour(
          v45,
          *((_DWORD *)this + 7),
          (Ogre::Bitwise *)(v26 + (*((_DWORD *)this + 8) * v33 + *((_DWORD *)this + 9) * v30 + v17) * NumElemBytes));
        Ogre::PixelUtil::unpackColour(
          v46,
          *((_DWORD *)this + 7),
          (Ogre::Bitwise *)(v26 + (*((_DWORD *)this + 8) * v28 + *((_DWORD *)this + 9) * v30 + v24) * NumElemBytes));
        Ogre::PixelUtil::unpackColour(
          v47,
          *((_DWORD *)this + 7),
          (Ogre::Bitwise *)(v26 + (*((_DWORD *)this + 8) * v28 + *((_DWORD *)this + 9) * v30 + v17) * NumElemBytes));
        Ogre::PixelUtil::unpackColour(
          v48,
          *((_DWORD *)this + 7),
          (Ogre::Bitwise *)(v26 + (*((_DWORD *)this + 8) * v33 + *((_DWORD *)this + 9) * v29 + v24) * NumElemBytes));
        Ogre::PixelUtil::unpackColour(
          v49,
          *((_DWORD *)this + 7),
          (Ogre::Bitwise *)(v26 + (*((_DWORD *)this + 8) * v33 + *((_DWORD *)this + 9) * v29 + v17) * NumElemBytes));
        Ogre::PixelUtil::unpackColour(
          v50,
          *((_DWORD *)this + 7),
          (Ogre::Bitwise *)(v26 + (*((_DWORD *)this + 8) * v28 + *((_DWORD *)this + 9) * v29 + v24) * NumElemBytes));
        Ogre::PixelUtil::unpackColour(
          v51,
          *((_DWORD *)this + 7),
          (Ogre::Bitwise *)(v26 + (*((_DWORD *)this + 8) * v28 + *((_DWORD *)this + 9) * v29 + v17) * NumElemBytes));
        v22 = (float)(1.0 - v43) * (float)(1.0 - v42);
        Ogre::ColourValue::operator*(v53, v44, v22 * (float)(1.0 - v31));
        v38 = v43 * (float)(1.0 - v42);
        Ogre::ColourValue::operator*(v54, v45, v38 * (float)(1.0 - v31));
        Ogre::ColourValue::operator+(v55, v53, v54);
        v23 = (float)(1.0 - v43) * v42;
        Ogre::ColourValue::operator*(v56, v46, v23 * (float)(1.0 - v31));
        Ogre::ColourValue::operator+(v57, v55, v56);
        Ogre::ColourValue::operator*(v58, v47, (float)(v43 * v42) * (float)(1.0 - v31));
        Ogre::ColourValue::operator+(v59, v57, v58);
        Ogre::ColourValue::operator*(v60, v48, v22 * v31);
        Ogre::ColourValue::operator+(v61, v59, v60);
        Ogre::ColourValue::operator*(v62, v49, v38 * v31);
        Ogre::ColourValue::operator+(v63, v61, v62);
        Ogre::ColourValue::operator*(v64, v50, v23 * v31);
        Ogre::ColourValue::operator+(v65, v63, v64);
        Ogre::ColourValue::operator*(v66, v51, (float)(v43 * v42) * v31);
        Ogre::ColourValue::operator+(v52, v65, v66);
        Ogre::PixelUtil::packColour((int)v52, *((_DWORD *)a2 + 7), v27);
        v27 += v41;
        ++v40;
        v14 += v35;
      }
      v27 += Ogre::PixelBox::getRowSkip(a2) * v41;
      ++v39;
      v10 += v36;
    }
    v27 += Ogre::PixelBox::getSliceSkip(a2) * v41;
    ++v34;
    result = v37;
    v32 += v37;
  }
  return result;
}

