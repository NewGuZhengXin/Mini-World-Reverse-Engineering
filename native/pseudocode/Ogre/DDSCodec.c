// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::DDSCodec

//======================================================================
// Ogre::DDSCodec::code(Ogre::MemoryDataStream *,Ogre::Codec::CodecData *)const
// address: 0x00199DBE   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::DDSCodec::code(Ogre::DDSCodec *this, Ogre::MemoryDataStream *a2, Ogre::Codec::CodecData *a3)
{
  ;
}


//======================================================================
// Ogre::DDSCodec::codeToFile(Ogre::MemoryDataStream *,std::string const&,Ogre::Codec::CodecData *)const
// address: 0x00199DC0   size: 0x2 (2 bytes)
//======================================================================
void Ogre::DDSCodec::codeToFile()
{
  ;
}


//======================================================================
// Ogre::DDSCodec::~DDSCodec()
// address: 0x00199E0C   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre8DDSCodecD1Ev'
void __fastcall Ogre::DDSCodec::~DDSCodec(Ogre::DDSCodec *this)
{
  *(_DWORD *)this = &off_458968;
  sub_3BDF80((char *)this + 4);
  Ogre::ImageCodec::~ImageCodec(this);
}


//======================================================================
// Ogre::DDSCodec::~DDSCodec()
// address: 0x00199E2C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::DDSCodec::~DDSCodec(Ogre::DDSCodec *this)
{
  Ogre::DDSCodec::~DDSCodec(this);
  operator delete(this);
}


//======================================================================
// Ogre::DDSCodec::getType(void)const
// address: 0x00199E3E   size: 0xE (14 bytes)
//======================================================================
Ogre::DDSCodec *__fastcall Ogre::DDSCodec::getType(Ogre::DDSCodec *this, int a2)
{
  sub_3BEB1C(this, a2 + 4);
  return this;
}


//======================================================================
// Ogre::DDSCodec::DDSCodec(void)
// address: 0x00199E4C   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre8DDSCodecC1Ev'
Ogre::DDSCodec *__fastcall Ogre::DDSCodec::DDSCodec(Ogre::DDSCodec *this)
{
  *(_DWORD *)this = &off_458968;
  sub_3BF0BC((int)this + 4, "dds");
  return this;
}


//======================================================================
// Ogre::DDSCodec::convertFourCCFormat(unsigned int)const
// address: 0x00199E70   size: 0x60 (96 bytes)
//======================================================================
int __fastcall Ogre::DDSCodec::convertFourCCFormat(Ogre::DDSCodec *this, unsigned int a2)
{
  int result; // r0

  if ( a2 == 116 )
    return 25;
  if ( a2 > 0x74 )
  {
    if ( a2 == 861165636 )
    {
      return 19;
    }
    else if ( a2 > 0x33545844 )
    {
      result = 20;
      if ( a2 != 877942852 )
        return 21;
    }
    else
    {
      result = 17;
      if ( a2 != 827611204 )
        return 18;
    }
  }
  else if ( a2 == 113 )
  {
    return 23;
  }
  else if ( a2 > 0x71 )
  {
    result = 33;
    if ( a2 != 114 )
      return 36;
  }
  else
  {
    result = 32;
    if ( a2 != 111 )
      return 35;
  }
  return result;
}


//======================================================================
// Ogre::DDSCodec::convertPixelFormat(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int)const
// address: 0x00199EE4   size: 0x64 (100 bytes)
//======================================================================
int __fastcall Ogre::DDSCodec::convertPixelFormat(
        Ogre::DDSCodec *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  int v7; // r4
  int result; // r0
  _DWORD v11[4]; // [sp+8h] [bp-24h] BYREF
  _DWORD v12[5]; // [sp+18h] [bp-14h] BYREF

  v7 = 1;
  while ( 1 )
  {
    result = Ogre::PixelUtil::getNumElemBits(v7);
    if ( result == a2 )
    {
      Ogre::PixelUtil::getBitMasks(v7, v11);
      result = Ogre::PixelUtil::getBitDepths(v7, v12);
      if ( v11[0] == a3 && v11[1] == a4 && v11[2] == a5 && (v11[3] == a6 || a6 == 0 && v12[3] == 0) )
        break;
    }
    if ( ++v7 == 45 )
      return result;
  }
  return v7;
}


//======================================================================
// Ogre::DDSCodec::unpackDXTColour(Ogre::PixelFormat,Ogre::DXTColourBlock const&,Ogre::ColourValue *)const
// address: 0x00199F48   size: 0x208 (520 bytes)
//======================================================================
int __fastcall Ogre::DDSCodec::unpackDXTColour(int a1, int a2, Ogre::Bitwise *a3, int a4)
{
  float *v5; // r3
  float *v6; // r0
  float *v7; // r0
  int result; // r0
  float *v9; // r3
  int v10; // r1
  float *v11; // r1
  int v12; // r5
  int v13; // r6
  float v14; // r2
  float *v15; // r1
  int v16; // r5
  int v17; // r1
  int i; // [sp+8h] [bp-5Ch]
  float v21[4]; // [sp+20h] [bp-44h] BYREF
  float v22[4]; // [sp+30h] [bp-34h] BYREF
  float v23; // [sp+40h] [bp-24h]
  float v24; // [sp+44h] [bp-20h]
  float v25; // [sp+48h] [bp-1Ch]
  float v26; // [sp+4Ch] [bp-18h]
  float v27; // [sp+50h] [bp-14h]
  float v28; // [sp+54h] [bp-10h]
  float v29; // [sp+58h] [bp-Ch]
  float v30; // [sp+5Ch] [bp-8h]
  char varsC; // [sp+70h] [bp+Ch] BYREF

  v5 = v22;
  do
  {
    v6 = v5 - 4;
    *v6 = 1.0;
    v6[1] = 1.0;
    v6[2] = 1.0;
    v7 = v5 - 1;
    v5 += 4;
    *v7 = 1.0;
  }
  while ( v5 != (float *)&varsC );
  if ( a2 == 17
    && ((*((unsigned __int8 *)a3 + 1) << 8) | (unsigned int)*(unsigned __int8 *)a3) <= ((*((unsigned __int8 *)a3 + 3) << 8)
                                                                                      | (unsigned int)*((unsigned __int8 *)a3 + 2)) )
  {
    Ogre::PixelUtil::unpackColour(v21, 6, a3);
    Ogre::PixelUtil::unpackColour(v22, 6, (Ogre::Bitwise *)((char *)a3 + 2));
    v23 = (float)(v21[0] + v22[0]) * 0.5;
    v24 = (float)(v21[1] + v22[1]) * 0.5;
    v25 = (float)(v21[2] + v22[2]) * 0.5;
    v26 = (float)(v21[3] + v22[3]) * 0.5;
    v27 = *(float *)&Ogre::ColourValue::ZERO;
    v28 = *(float *)&dword_47260C;
    v29 = *(float *)&dword_472610;
    v30 = *(float *)&dword_472614;
  }
  else
  {
    Ogre::PixelUtil::unpackColour(v21, 6, a3);
    Ogre::PixelUtil::unpackColour(v22, 6, (Ogre::Bitwise *)((char *)a3 + 2));
    v23 = (float)((float)(v21[0] + v21[0]) + v22[0]) * 0.33333;
    v24 = (float)((float)(v21[1] + v21[1]) + v22[1]) * 0.33333;
    v25 = (float)((float)(v21[2] + v21[2]) + v22[2]) * 0.33333;
    v26 = (float)((float)(v21[3] + v21[3]) + v22[3]) * 0.33333;
    v27 = (float)(v21[0] + (float)(v22[0] + v22[0])) * 0.33333;
    v28 = (float)(v21[1] + (float)(v22[1] + v22[1])) * 0.33333;
    v29 = (float)(v21[2] + (float)(v22[2] + v22[2])) * 0.33333;
    v30 = (float)(v21[3] + (float)(v22[3] + v22[3])) * 0.33333;
  }
  for ( result = 0; result != 4; ++result )
  {
    v9 = (float *)(a4 + (result << 6));
    for ( i = 0; i != 8; i += 2 )
    {
      v10 = 4 * (((int)*((unsigned __int8 *)a3 + result + 4) >> i) & 3);
      if ( a2 == 17 )
      {
        v11 = &v21[v10];
        v12 = *((_DWORD *)v11 + 1);
        v13 = *((_DWORD *)v11 + 2);
        *v9 = *v11;
        *((_DWORD *)v9 + 1) = v12;
        *((_DWORD *)v9 + 2) = v13;
        v9[3] = v11[3];
      }
      else
      {
        v14 = v21[v10];
        v15 = &v21[v10];
        v16 = *((_DWORD *)v15 + 1);
        v17 = *((_DWORD *)v15 + 2);
        *v9 = v14;
        *((_DWORD *)v9 + 1) = v16;
        *((_DWORD *)v9 + 2) = v17;
      }
      v9 += 4;
    }
  }
  return result;
}


//======================================================================
// Ogre::DDSCodec::unpackDXTAlpha(Ogre::DXTExplicitAlphaBlock const&,Ogre::ColourValue *)const
// address: 0x0019A158   size: 0x4C (76 bytes)
//======================================================================
float __fastcall Ogre::DDSCodec::unpackDXTAlpha(int a1, int a2, int a3)
{
  int i; // r4
  int j; // r5
  float result; // r0
  int v6; // r2

  for ( i = 0; i != 4; ++i )
  {
    for ( j = 0; j != 16; j += 4 )
    {
      result = (float)((((*(unsigned __int8 *)(a2 + 2 * i + 1) << 8) | *(unsigned __int8 *)(2 * i + a2)) >> j) & 0xF)
             / 15.0;
      v6 = a3 + (i << 6) + 4 * j;
      *(float *)(v6 + 12) = result;
    }
  }
  return result;
}


//======================================================================
// Ogre::DDSCodec::unpackDXTAlpha(Ogre::DXTInterpolatedAlphaBlock const&,Ogre::ColourValue *)const
// address: 0x0019A1A8   size: 0x10C (268 bytes)
//======================================================================
int __fastcall Ogre::DDSCodec::unpackDXTAlpha(int a1, unsigned __int8 *a2, int a3)
{
  int v3; // r7
  float v4; // r5
  int v5; // r4
  unsigned int j; // r4
  float v7; // r0
  int k; // r3
  unsigned int i; // r4
  float v10; // r0
  unsigned int v11; // r0
  unsigned __int8 *v12; // r4
  int v13; // r2
  int result; // r0
  float v15; // [sp+4h] [bp-38h]
  float v17[9]; // [sp+18h] [bp-24h] BYREF

  v3 = *a2;
  v4 = (float)v3;
  v17[0] = (float)v3 / 255.0;
  v5 = a2[1];
  v15 = (float)v5;
  v17[1] = (float)v5 / 255.0;
  if ( v3 > (unsigned int)v5 )
  {
    for ( i = 0; i != 6; v17[i + 1] = (float)((float)(v10 * 0.14286) * v4) + (float)((float)((float)i * 0.14286) * v15) )
      v10 = (float)(6 - i++);
  }
  else
  {
    for ( j = 0; j != 4; v17[j + 1] = (float)((float)(v7 * 0.2) * v4) + (float)((float)((float)j * 0.2) * v15) )
      v7 = (float)(4 - j++);
    v17[6] = 0.0;
    v17[7] = 1.0;
  }
  for ( k = 0; k != 16; ++k )
  {
    v11 = (3 * k) & 7;
    v12 = &a2[(unsigned int)(3 * k) >> 3];
    v13 = ((int)v12[2] >> v11) & 7;
    if ( v11 > 5 )
      v13 |= (v12[3] << (8 - v11)) & 7;
    result = a3 + 16 * k;
    *(float *)(result + 12) = v17[v13];
  }
  return result;
}


//======================================================================
// Ogre::DDSCodec::flipEndian(void *,unsigned int,unsigned int)const
// address: 0x0019A2C0   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::DDSCodec::flipEndian(Ogre::DDSCodec *this, void *a2, unsigned int a3, unsigned int a4)
{
  ;
}


//======================================================================
// Ogre::DDSCodec::decode(Ogre::DataStream *)const
// address: 0x0019A2C4   size: 0x3EA (1002 bytes)
//======================================================================
Ogre::DDSCodec *__fastcall Ogre::DDSCodec::decode(Ogre::DDSCodec *this, Ogre::DataStream *a2, int *a3)
{
  int v4; // r0
  int v5; // r4
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r3
  int v9; // r5
  int v10; // r7
  char *v11; // r3
  char *v12; // r0
  char *v13; // r0
  int NumElemBytes; // r0
  int j; // r7
  int v16; // r3
  int v17; // r7
  int m; // r5
  int v19; // r3
  int MemorySize; // r5
  int v21; // r0
  unsigned int v22; // r1
  unsigned int n; // r5
  unsigned int ii; // r5
  int v26; // r3
  signed int v27; // [sp+8h] [bp-1FCh]
  int v28; // [sp+Ch] [bp-1F8h]
  unsigned int v29; // [sp+10h] [bp-1F4h]
  unsigned int v30; // [sp+10h] [bp-1F4h]
  unsigned __int16 *v31; // [sp+14h] [bp-1F0h]
  int v32; // [sp+14h] [bp-1F0h]
  unsigned int v34; // [sp+1Ch] [bp-1E8h]
  int v35; // [sp+20h] [bp-1E4h]
  unsigned int v36; // [sp+24h] [bp-1E0h]
  unsigned int v37; // [sp+28h] [bp-1DCh]
  unsigned int i; // [sp+2Ch] [bp-1D8h]
  unsigned int v39; // [sp+30h] [bp-1D4h]
  int v40; // [sp+34h] [bp-1D0h]
  unsigned int k; // [sp+38h] [bp-1CCh]
  Ogre::MemoryDataStream *v42; // [sp+3Ch] [bp-1C8h]
  int v43; // [sp+40h] [bp-1C4h]
  unsigned int v44; // [sp+44h] [bp-1C0h]
  int v45; // [sp+48h] [bp-1BCh]
  int v47; // [sp+50h] [bp-1B4h]
  int v48; // [sp+54h] [bp-1B0h]
  int v49; // [sp+60h] [bp-1A4h]
  int v50; // [sp+64h] [bp-1A0h]
  char v51[4]; // [sp+68h] [bp-19Ch] BYREF
  _BYTE v52[2]; // [sp+6Ch] [bp-198h] BYREF
  __int16 v53; // [sp+6Eh] [bp-196h] BYREF
  unsigned __int8 v54; // [sp+74h] [bp-190h] BYREF
  _BYTE v55[3]; // [sp+75h] [bp-18Fh] BYREF
  _BYTE v56[8]; // [sp+7Ch] [bp-188h] BYREF
  _BYTE v57[8]; // [sp+84h] [bp-180h] BYREF
  int v58; // [sp+8Ch] [bp-178h]
  int v59; // [sp+90h] [bp-174h]
  unsigned int v60; // [sp+94h] [bp-170h]
  int v61; // [sp+98h] [bp-16Ch]
  __int16 v62; // [sp+9Ch] [bp-168h]
  char v63; // [sp+D0h] [bp-134h]
  unsigned int v64; // [sp+D4h] [bp-130h]
  unsigned int v65; // [sp+D8h] [bp-12Ch]
  unsigned int v66; // [sp+DCh] [bp-128h]
  unsigned int v67; // [sp+E0h] [bp-124h]
  unsigned int v68; // [sp+E4h] [bp-120h]
  unsigned int v69; // [sp+E8h] [bp-11Ch]
  int v70; // [sp+ECh] [bp-118h]
  int v71; // [sp+F0h] [bp-114h]
  unsigned __int16 v72; // [sp+100h] [bp-104h] BYREF
  unsigned __int16 v73[7]; // [sp+102h] [bp-102h] BYREF
  _DWORD varF4[64]; // [sp+110h] [bp-F4h] BYREF
  char varsC; // [sp+210h] [bp+Ch] BYREF

  varF4[59] = this;
  varF4[60] = a2;
  (*(void (__fastcall **)(int *, char *, int))(*a3 + 8))(a3, v51, 4);
  Ogre::DDSCodec::flipEndian(a2, v51, 4u, 1u);
  (*(void (__fastcall **)(int *, _BYTE *, int))(*a3 + 8))(a3, v57, 124);
  Ogre::DDSCodec::flipEndian(a2, v57, 4u, 0x1Fu);
  v4 = operator new(0x20u);
  *(_DWORD *)(v4 + 12) = 1;
  v5 = v4;
  *(_DWORD *)v4 = &off_456270;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 16) = 0;
  *(_WORD *)(v4 + 20) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 28) = 0;
  *(_DWORD *)(v4 + 8) = v59;
  *(_DWORD *)(v4 + 4) = v58;
  if ( (v70 & 0x400000) != 0 )
    *(_WORD *)(v4 + 20) = v62 - 1;
  if ( (v71 & 0x200) != 0 )
  {
    *(_DWORD *)(v4 + 24) = 2;
    v39 = 6;
  }
  else
  {
    v39 = 1;
    if ( (v71 & 0x200000) != 0 )
    {
      *(_DWORD *)(v4 + 24) = 4;
      *(_DWORD *)(v4 + 12) = v61;
    }
  }
  v6 = v63 & 4;
  if ( (v63 & 4) != 0 )
  {
    v7 = Ogre::DDSCodec::convertFourCCFormat(a2, v64);
  }
  else
  {
    if ( (v63 & 1) != 0 )
      v6 = v69;
    v7 = Ogre::DDSCodec::convertPixelFormat(a2, v65, v66, v67, v68, v6);
  }
  v27 = v7;
  if ( Ogre::PixelUtil::isCompressed(v7) != 0 )
  {
    if ( (*(_DWORD *)(*(_DWORD *)(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 52) + 8) & 0x1000) != 0 )
    {
      v8 = *(_DWORD *)(v5 + 24) | 1;
      *(_DWORD *)(v5 + 28) = v27;
      *(_DWORD *)(v5 + 24) = v8;
      v9 = 0;
LABEL_68:
      v40 = v9;
      goto LABEL_16;
    }
    if ( v27 == 17 )
    {
      (*(void (__fastcall **)(int *, unsigned __int16 *, int))(*a3 + 8))(a3, &v72, 8);
      Ogre::DDSCodec::flipEndian(a2, &v72, 2u, 1u);
      Ogre::DDSCodec::flipEndian(a2, v73, 2u, 1u);
      (*(void (__fastcall **)(int *, int))(*a3 + 32))(a3, -8);
      if ( v72 > (unsigned int)v73[0] )
      {
        v26 = 10;
LABEL_66:
        *(_DWORD *)(v5 + 28) = v26;
LABEL_67:
        v9 = 1;
        goto LABEL_68;
      }
    }
    else if ( v27 < 17 || v27 > 21 )
    {
      goto LABEL_67;
    }
    v26 = 12;
    goto LABEL_66;
  }
  v40 = 0;
  *(_DWORD *)(v5 + 28) = v27;
LABEL_16:
  *(_DWORD *)(v5 + 16) = Ogre::Image::calculateSize(
                           *(unsigned __int16 *)(v5 + 20),
                           v39,
                           *(_DWORD *)(v5 + 8),
                           *(_DWORD *)(v5 + 4),
                           *(_DWORD *)(v5 + 12),
                           *(_DWORD *)(v5 + 28));
  v42 = (Ogre::MemoryDataStream *)operator new(0x1Cu);
  Ogre::MemoryDataStream::MemoryDataStream(v42, *(_DWORD *)(v5 + 16));
  v44 = 0;
  v28 = *((_DWORD *)v42 + 3);
  do
  {
    v34 = *(_DWORD *)(v5 + 8);
    v36 = *(_DWORD *)(v5 + 4);
    v37 = *(_DWORD *)(v5 + 12);
    for ( i = 0; i <= *(unsigned __int16 *)(v5 + 20); ++i )
    {
      v10 = v34 * Ogre::PixelUtil::getNumElemBytes(*(_DWORD *)(v5 + 28));
      if ( Ogre::PixelUtil::isCompressed(v27) != 0 )
      {
        if ( v40 != 0 )
        {
          v11 = (char *)varF4;
          do
          {
            v12 = v11 - 16;
            *(_DWORD *)v12 = 1065353216;
            *((_DWORD *)v12 + 1) = 1065353216;
            *((_DWORD *)v12 + 2) = 1065353216;
            v13 = v11 - 4;
            v11 += 16;
            *(_DWORD *)v13 = 1065353216;
          }
          while ( v11 != &varsC );
          NumElemBytes = Ogre::PixelUtil::getNumElemBytes(*(_DWORD *)(v5 + 28));
          v47 = 4 * NumElemBytes;
          v50 = 4 * v10;
          v43 = NumElemBytes;
          v48 = v10 - 4 * NumElemBytes;
          v49 = 4 * (NumElemBytes - v10);
          for ( j = 0; ; j = v35 + 1 )
          {
            v35 = j;
            if ( j == v37 )
              break;
            for ( k = 0; k < v36; k += 4 )
            {
              v29 = 0;
              while ( v29 < v34 )
              {
                v16 = *a3;
                if ( (unsigned int)(v27 - 18) > 1 )
                {
                  if ( (unsigned int)(v27 - 20) <= 1 )
                  {
                    (*(void (__fastcall **)(int *, unsigned __int8 *, int))(v16 + 8))(a3, &v54, 8);
                    Ogre::DDSCodec::flipEndian(a2, &v54, 2u, 1u);
                    Ogre::DDSCodec::flipEndian(a2, v55, 2u, 1u);
                    Ogre::DDSCodec::unpackDXTAlpha((int)a2, &v54, (int)&v72);
                  }
                }
                else
                {
                  (*(void (__fastcall **)(int *, _BYTE *, int))(v16 + 8))(a3, v56, 8);
                  Ogre::DDSCodec::flipEndian(a2, v56, 2u, 4u);
                  Ogre::DDSCodec::unpackDXTAlpha((int)a2, (int)v56, (int)&v72);
                }
                (*(void (__fastcall **)(int *, _BYTE *, int))(*a3 + 8))(a3, v52, 8);
                Ogre::DDSCodec::flipEndian(a2, v52, 2u, 1u);
                Ogre::DDSCodec::flipEndian(a2, &v53, 2u, 1u);
                Ogre::DDSCodec::unpackDXTColour((int)a2, v27, (Ogre::Bitwise *)v52, (int)&v72);
                v31 = &v72;
                v17 = v28;
                do
                {
                  v45 = v17;
                  for ( m = 0; m != 32; m += 8 )
                  {
                    Ogre::PixelUtil::packColour((int)&v31[m], *(_DWORD *)(v5 + 28), v45);
                    v45 += v43;
                  }
                  v17 += v47 + v48;
                  v31 += 32;
                }
                while ( v31 != (unsigned __int16 *)&varF4[60] );
                v19 = v28 + v50;
                v28 += v50 + v49;
                v29 += 4;
                if ( v29 == v34 )
                  v28 = v19 - v48;
              }
            }
          }
        }
        else
        {
          MemorySize = Ogre::PixelUtil::getMemorySize(v34, v36, v37, *(_DWORD *)(v5 + 28));
          (*(void (__fastcall **)(int *, int, int))(*a3 + 8))(a3, v28, MemorySize);
          v28 += MemorySize;
        }
      }
      else
      {
        v21 = v10;
        if ( (v57[4] & 8) != 0 )
        {
          v22 = 2 * i;
          if ( 2 * i == 0 )
            v22 = 1;
          v21 = v60 / v22;
        }
        v32 = v21 - v10;
        for ( n = 0; ; n = v30 + 1 )
        {
          v30 = n;
          if ( n >= *(_DWORD *)(v5 + 12) )
            break;
          for ( ii = 0; ii < *(_DWORD *)(v5 + 4); ++ii )
          {
            (*(void (__fastcall **)(int *, int, int))(*a3 + 8))(a3, v28, v10);
            if ( v32 > 0 )
              (*(void (__fastcall **)(int *))(*a3 + 32))(a3);
            v28 += v10;
          }
        }
      }
      if ( v34 != 1 )
        v34 >>= 1;
      if ( v36 != 1 )
        v36 >>= 1;
      if ( v37 != 1 )
        v37 >>= 1;
    }
    ++v44;
  }
  while ( v44 < v39 );
  *(_DWORD *)this = v42;
  *((_DWORD *)this + 1) = v5;
  return this;
}


//======================================================================
// Ogre::DDSCodec::flipEndian(void *,unsigned int)const
// address: 0x0019A6B0   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::DDSCodec::flipEndian(Ogre::DDSCodec *this, void *a2, unsigned int a3)
{
  ;
}


//======================================================================
// Ogre::DDSCodec::startup(void)
// address: 0x0019A8BC   size: 0xB0 (176 bytes)
//======================================================================
void __fastcall Ogre::DDSCodec::startup(Ogre::DDSCodec *this)
{
  const char *v1; // r1
  Ogre::DDSCodec *v2; // r7
  int v3; // r5
  _DWORD *inserted; // r4
  int v5; // r3
  _BYTE v6[4]; // [sp+Ch] [bp-10h] BYREF
  _DWORD v7[3]; // [sp+10h] [bp-Ch] BYREF

  if ( Ogre::DDSCodec::msInstance == 0 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/OgreMain/OgreDDSCodec.cpp", (const char *)&dword_A0, 1, 0);
    Ogre::LogMessage((Ogre *)"DDS codec registering", v1);
    v2 = (Ogre::DDSCodec *)operator new(8u);
    Ogre::DDSCodec::DDSCodec(v2);
    Ogre::DDSCodec::msInstance = (int)v2;
    (*(void (__fastcall **)(_BYTE *, Ogre::DDSCodec *))(*(_DWORD *)v2 + 20))(v6, v2);
    v3 = dword_4C6F08;
    inserted = &unk_4C6F04;
    while ( v3 != 0 )
    {
      if ( std::operator<<char>() != 0 )
      {
        v5 = *(_DWORD *)(v3 + 12);
        v3 = (int)inserted;
      }
      else
      {
        v5 = *(_DWORD *)(v3 + 8);
      }
      inserted = (_DWORD *)v3;
      v3 = v5;
    }
    if ( inserted == (_DWORD *)&unk_4C6F04 || std::operator<<char>() != 0 )
    {
      sub_3BEB1C(v7, v6);
      v7[1] = 0;
      inserted = (_DWORD *)std::_Rb_tree<std::string,std::pair<std::string const,Ogre::Codec *>,std::_Select1st<std::pair<std::string const,Ogre::Codec *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::Codec *>>>::_M_insert_unique_(
                             &Ogre::Codec::ms_mapCodecs,
                             inserted,
                             (int)v7);
      sub_3BDF80(v7);
    }
    inserted[5] = v2;
    sub_3BDF80(v6);
  }
}


//======================================================================
// Ogre::DDSCodec::shutdown(void)
// address: 0x0019A97C   size: 0x9C (156 bytes)
//======================================================================
void __fastcall Ogre::DDSCodec::shutdown(Ogre::DDSCodec *this)
{
  int v1; // r5
  int v2; // r6
  char *v3; // r4
  int v4; // [sp+4h] [bp-20h]
  char v5[4]; // [sp+14h] [bp-10h] BYREF
  int v6; // [sp+18h] [bp-Ch] BYREF
  void *v7; // [sp+1Ch] [bp-8h]

  if ( Ogre::DDSCodec::msInstance != 0 )
  {
    (*(void (__fastcall **)(char *))(*(_DWORD *)Ogre::DDSCodec::msInstance + 20))(v5);
    std::_Rb_tree<std::string,std::pair<std::string const,Ogre::Codec *>,std::_Select1st<std::pair<std::string const,Ogre::Codec *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::Codec *>>>::equal_range(
      &v6,
      (int)&Ogre::Codec::ms_mapCodecs);
    v1 = v6;
    v2 = (int)v7;
    if ( v6 == dword_4C6F0C && v7 == &unk_4C6F04 )
    {
      std::_Rb_tree<std::string,std::pair<std::string const,Ogre::Codec *>,std::_Select1st<std::pair<std::string const,Ogre::Codec *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::Codec *>>>::_M_erase(
        (int)&Ogre::Codec::ms_mapCodecs,
        (_DWORD *)dword_4C6F08);
      dword_4C6F0C = v2;
      dword_4C6F08 = 0;
      dword_4C6F10 = v2;
      dword_4C6F14 = 0;
    }
    else
    {
      while ( v1 != v2 )
      {
        v4 = sub_391E10(v1);
        v3 = (char *)sub_391F50(v1, &unk_4C6F04);
        sub_3BDF80(v3 + 16);
        operator delete(v3);
        v1 = v4;
        --dword_4C6F14;
      }
    }
    sub_3BDF80(v5);
    if ( Ogre::DDSCodec::msInstance != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)Ogre::DDSCodec::msInstance + 4))(Ogre::DDSCodec::msInstance);
    Ogre::DDSCodec::msInstance = 0;
  }
}

