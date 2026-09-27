// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::WaterDepthTexture

//======================================================================
// Ogre::WaterDepthTexture::getRTTI(void)const
// address: 0x00156348   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::WaterDepthTexture::getRTTI(Ogre::WaterDepthTexture *this)
{
  return &Ogre::WaterDepthTexture::m_RTTI;
}


//======================================================================
// Ogre::WaterDepthTexture::~WaterDepthTexture()
// address: 0x00156418   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17WaterDepthTextureD1Ev'
void __fastcall Ogre::WaterDepthTexture::~WaterDepthTexture(Ogre::WaterDepthTexture *this)
{
  *(_DWORD *)this = &off_4565E8;
  Ogre::TextureData::~TextureData(this);
}


//======================================================================
// Ogre::WaterDepthTexture::~WaterDepthTexture()
// address: 0x00156434   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::WaterDepthTexture::~WaterDepthTexture(Ogre::WaterDepthTexture *this)
{
  Ogre::WaterDepthTexture::~WaterDepthTexture(this);
  operator delete(this);
}


//======================================================================
// Ogre::WaterDepthTexture::newObject(void)
// address: 0x00156518   size: 0x1C (28 bytes)
//======================================================================
Ogre::TextureData *__fastcall Ogre::WaterDepthTexture::newObject(Ogre::WaterDepthTexture *this)
{
  Ogre::TextureData *v1; // r4

  v1 = (Ogre::TextureData *)operator new(0x4Cu);
  Ogre::TextureData::TextureData(v1);
  *(_DWORD *)v1 = &off_4565E8;
  return v1;
}


//======================================================================
// Ogre::WaterDepthTexture::calTextureData(void)
// address: 0x00156DF0   size: 0x126 (294 bytes)
//======================================================================
unsigned int __fastcall Ogre::WaterDepthTexture::calTextureData(Ogre::WaterDepthTexture *this)
{
  float *v1; // r3
  unsigned int j; // r4
  float v4; // r6
  float v5; // r0
  unsigned int v6; // r6
  unsigned int result; // r0
  unsigned int i; // [sp+10h] [bp-34h]
  float v9; // [sp+14h] [bp-30h]
  float v10; // [sp+18h] [bp-2Ch]
  float v11; // [sp+1Ch] [bp-28h]
  float v12; // [sp+20h] [bp-24h]
  float v13; // [sp+24h] [bp-20h]
  float v14; // [sp+28h] [bp-1Ch]
  float v15; // [sp+2Ch] [bp-18h]
  int v16; // [sp+34h] [bp-10h]
  float v17[2]; // [sp+3Ch] [bp-8h] BYREF

  v1 = *((float **)this + 18);
  v9 = v1[16];
  v12 = v1[19];
  v10 = v1[18];
  v13 = v1[21];
  v14 = v1[106];
  v11 = v1[115];
  v15 = v1[116];
  v16 = *(_DWORD *)(**((_DWORD **)this + 11) + 36);
  for ( i = 0; i != 64; ++i )
  {
    for ( j = 0; j != 64; ++j )
    {
      Ogre::TerrainBlockSource::getHeight(
        *((Ogre::TerrainBlockSource **)this + 18),
        v9 + (float)((float)((float)((float)i + 0.5) * (float)(v12 - v9)) * 0.015625),
        v10 + (float)((float)((float)((float)j + 0.5) * (float)(v13 - v10)) * 0.015625),
        v17,
        nullptr,
        nullptr,
        nullptr);
      v17[0] = v14 - v17[0];
      v4 = (float)(v17[0] - v11) / (float)(v15 - v11);
      if ( v4 < 0.0 )
      {
        v5 = 0.0;
      }
      else if ( v4 <= 1.0 )
      {
        v5 = (float)(v17[0] - v11) / (float)(v15 - v11);
      }
      else
      {
        v5 = 1.0;
      }
      v6 = j << 6;
      result = (unsigned int)(float)(v5 * 255.0);
      *(_BYTE *)(v16 + i + v6) = result;
    }
  }
  return result;
}


//======================================================================
// Ogre::WaterDepthTexture::WaterDepthTexture(Ogre::TerrainBlockSource *)
// address: 0x00156F1C   size: 0x3C (60 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17WaterDepthTextureC1EPNS_18TerrainBlockSourceE'
Ogre::WaterDepthTexture *__fastcall Ogre::WaterDepthTexture::WaterDepthTexture(
        Ogre::WaterDepthTexture *this,
        Ogre::TerrainBlockSource *a2)
{
  Ogre::TextureData::TextureData(this);
  *((_DWORD *)this + 5) = 64;
  *((_DWORD *)this + 6) = 64;
  *(_DWORD *)this = &off_4565E8;
  *((_DWORD *)this + 7) = 1;
  *((_DWORD *)this + 8) = 1;
  *((_DWORD *)this + 18) = a2;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 9) = 3;
  *((_DWORD *)this + 10) = 0;
  Ogre::TextureData::createSurfaceByDesc(this);
  Ogre::WaterDepthTexture::calTextureData(this);
  return this;
}

