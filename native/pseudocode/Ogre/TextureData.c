// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::TextureData

//======================================================================
// Ogre::TextureData::getDesc(Ogre::TextureDesc &)
// address: 0x00156320   size: 0x14 (20 bytes)
//======================================================================
int __fastcall Ogre::TextureData::getDesc(int a1, _DWORD *a2)
{
  int *v2; // r0
  int v3; // r2
  int v4; // r4
  int v5; // r5
  int v6; // r2
  int v7; // r4
  int result; // r0

  v2 = (int *)(a1 + 16);
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v2 += 3;
  *a2 = v3;
  a2[1] = v4;
  a2[2] = v5;
  v6 = v2[1];
  v7 = v2[2];
  a2[3] = *v2;
  a2[4] = v6;
  a2[5] = v7;
  result = v2[3];
  a2[6] = result;
  return result;
}


//======================================================================
// Ogre::TextureData::getRTTI(void)const
// address: 0x0019AA44   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::TextureData::getRTTI(Ogre::TextureData *this)
{
  return &Ogre::TextureData::m_RTTI;
}


//======================================================================
// Ogre::TextureData::getHardwareTexture(void)
// address: 0x0019AAB0   size: 0x9A (154 bytes)
//======================================================================
int __fastcall Ogre::TextureData::getHardwareTexture(Ogre::TextureData *this)
{
  int v2; // r3
  unsigned int v3; // r5
  int result; // r0
  int v5; // r3
  unsigned int v6; // r5
  int v7; // r3
  int v8; // r0

  if ( *((_DWORD *)this + 14) != 0 )
    goto LABEL_2;
  if ( *((_DWORD *)this + 5) != 0 )
    *((_DWORD *)this + 14) = Ogre::HardwarePixelBufferManager::createPixelBuffer(
                               (_DWORD *)Ogre::Singleton<Ogre::HardwarePixelBufferManager>::ms_Singleton,
                               nullptr,
                               (int *)this + 4);
  result = *((_DWORD *)this + 14);
  if ( result != 0 )
  {
LABEL_2:
    v2 = *((_DWORD *)this + 14);
    if ( *(_BYTE *)(v2 + 4) != 0 )
    {
      v3 = 0;
      *(_BYTE *)(v2 + 4) = 0;
      while ( 1 )
      {
        v5 = *((_DWORD *)this + 11);
        if ( v3 >= (*((_DWORD *)this + 12) - v5) >> 2 )
          break;
        if ( *(_DWORD *)(4 * v3 + v5) != 0 )
          (*(void (__fastcall **)(_DWORD, _DWORD, unsigned int))(**(_DWORD **)(*((_DWORD *)this + 14) + 12) + 20))(
            *(_DWORD *)(*((_DWORD *)this + 14) + 12),
            *((_DWORD *)this + 14),
            v3);
        ++v3;
      }
      *(_BYTE *)(*((_DWORD *)this + 14) + 5) = 0;
      v6 = (unsigned __int8)Ogre::TextureData::msNowIsForEditor;
      if ( Ogre::TextureData::msNowIsForEditor == 0 && *((_BYTE *)this + 64) != 0 )
      {
        while ( 1 )
        {
          v7 = *((_DWORD *)this + 11);
          if ( v6 >= (*((_DWORD *)this + 12) - v7) >> 2 )
            break;
          v8 = *(_DWORD *)(4 * v6 + v7);
          if ( v8 != 0 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 20))(v8);
          ++v6;
        }
        *((_DWORD *)this + 12) = v7;
      }
    }
    return *((_DWORD *)this + 14);
  }
  return result;
}


//======================================================================
// Ogre::TextureData::~TextureData()
// address: 0x0019AC64   size: 0x76 (118 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11TextureDataD1Ev'
void __fastcall Ogre::TextureData::~TextureData(Ogre::TextureData *this)
{
  unsigned int v2; // r5
  int v3; // r3
  _DWORD *v4; // r0
  int v5; // r3
  int v6; // r3
  void *v7; // r1
  void *v8; // r0

  v2 = 0;
  *(_DWORD *)this = &off_458A28;
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 11);
    if ( v2 >= (*((_DWORD *)this + 12) - v3) >> 2 )
      break;
    v4 = *(_DWORD **)(4 * v2 + v3);
    if ( v4 != nullptr )
    {
      v5 = v4[1] - 1;
      v4[1] = v5;
      if ( v5 <= 0 )
        (*(void (__fastcall **)(_DWORD *))(*v4 + 24))(v4);
    }
    ++v2;
  }
  v6 = *((_DWORD *)this + 14);
  if ( v6 != 0 )
  {
    --*(_DWORD *)(v6 + 8);
    *((_DWORD *)this + 14) = 0;
  }
  if ( --dword_4C6F1C == 0 )
    ilShutDown();
  sub_3BDF80((char *)this + 68);
  v8 = *((void **)this + 11);
  if ( v8 != nullptr )
    operator delete(v8);
  Ogre::Texture::~Texture((Ogre::FixedString **)this, v7);
}


//======================================================================
// Ogre::TextureData::~TextureData()
// address: 0x0019ACE4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::TextureData::~TextureData(Ogre::TextureData *this)
{
  Ogre::TextureData::~TextureData(this);
  operator delete(this);
}


//======================================================================
// Ogre::TextureData::TextureData(void)
// address: 0x0019AE74   size: 0x48 (72 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11TextureDataC2Ev'
Ogre::TextureData *__fastcall Ogre::TextureData::TextureData(Ogre::TextureData *this)
{
  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *(_DWORD *)this = &off_458A28;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 17) = &byte_55FB88;
  *((_BYTE *)this + 64) = 0;
  j_memset((char *)this + 16, 0, 0x1Cu);
  sub_19AA7C();
  return this;
}


//======================================================================
// Ogre::TextureData::newObject(void)
// address: 0x0019AEC8   size: 0x12 (18 bytes)
//======================================================================
Ogre::TextureData *__fastcall Ogre::TextureData::newObject(Ogre::TextureData *this)
{
  Ogre::TextureData *v1; // r4

  v1 = (Ogre::TextureData *)operator new(0x48u);
  Ogre::TextureData::TextureData(v1);
  return v1;
}


//======================================================================
// Ogre::TextureData::saveToFile(char const*)
// address: 0x0019AEDC   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall Ogre::TextureData::saveToFile(Ogre::TextureData *this, const char *a2)
{
  char *v4; // r0
  const char *v5; // r4
  int v6; // r4
  int v7; // r2
  char v8; // r3
  _DWORD v10[2]; // [sp+14h] [bp-8h] BYREF

  v4 = j_strrchr(a2, 46);
  v5 = v4;
  if ( v4 == nullptr )
    goto LABEL_5;
  if ( j_strcasecmp(v4, ".dds") == 0 )
  {
    v6 = 1079;
  }
  else if ( j_strcasecmp(v5, ".png") == 0 )
  {
    v6 = 1066;
  }
  else
  {
    if ( j_strcasecmp(v5, ".bmp") != 0 )
    {
LABEL_5:
      v6 = 1069;
      goto LABEL_9;
    }
    v6 = 1056;
  }
LABEL_9:
  ilGenImages(1, v10);
  ilBindImage(v10[0]);
  if ( *((_DWORD *)this + 9) == 10 )
  {
    v7 = 32992;
    v8 = 3;
  }
  else
  {
    v7 = 32993;
    v8 = 4;
  }
  ilTexImage(*((_DWORD *)this + 5), *((_DWORD *)this + 6), 1, v8, v7, 5121, *(void **)(**((_DWORD **)this + 11) + 36));
  ilEnable(1568);
  ilSave(v6, a2);
  return ilDeleteImages(1, v10);
}


//======================================================================
// Ogre::TextureData::setHardwareTextureinvild(void)
// address: 0x0019AFA0   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::TextureData::setHardwareTextureinvild(int this)
{
  int v1; // r3

  v1 = *(_DWORD *)(this + 56);
  if ( v1 != 0 )
    *(_BYTE *)(v1 + 4) = 1;
  return this;
}


//======================================================================
// Ogre::TextureData::lockSurface(unsigned int,unsigned int,bool)
// address: 0x0019AFAE   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::TextureData::lockSurface(Ogre::TextureData *this, unsigned int a2, unsigned int a3, int a4)
{
  *((_DWORD *)this + 15) = (a4 == 0) + 1;
  return *(_DWORD *)(4 * (a2 * *((_DWORD *)this + 8) + a3) + *((_DWORD *)this + 11));
}


//======================================================================
// Ogre::TextureData::lock(unsigned int,unsigned int,bool,Ogre::LockResult &)
// address: 0x0019AFC6   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall Ogre::TextureData::lock(Ogre::TextureData *a1, unsigned int a2, unsigned int a3, int a4, _DWORD *a5)
{
  _DWORD *result; // r0

  result = (_DWORD *)Ogre::TextureData::lockSurface(a1, a2, a3, a4);
  if ( result != nullptr )
  {
    a5[1] = result[7];
    a5[2] = result[8];
    *a5 = result[6];
    return (_DWORD *)result[9];
  }
  return result;
}


//======================================================================
// Ogre::TextureData::unlockSurface(unsigned int,unsigned int)
// address: 0x0019AFE2   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::TextureData::unlockSurface(int this, unsigned int a2, unsigned int a3)
{
  int v3; // r3

  if ( *(_DWORD *)(this + 60) == 2 )
  {
    v3 = *(_DWORD *)(this + 56);
    if ( v3 != 0 )
      *(_BYTE *)(v3 + 4) = 1;
  }
  *(_DWORD *)(this + 60) = 0;
  return this;
}


//======================================================================
// Ogre::TextureData::unlock(unsigned int,unsigned int)
// address: 0x0019AFFA   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::TextureData::unlock(Ogre::TextureData *this, unsigned int a2, unsigned int a3)
{
  return Ogre::TextureData::unlockSurface((int)this, a2, a3);
}


//======================================================================
// Ogre::TextureData::convertDDSFile(std::string,int &)
// address: 0x0019B1F8   size: 0x156 (342 bytes)
//======================================================================
int __fastcall Ogre::TextureData::convertDDSFile(_DWORD *a1, char **a2, _DWORD *a3)
{
  int v6; // r0
  unsigned int v7; // r3
  int v8; // r5
  int v9; // r0
  int v10; // r0
  unsigned int v11; // r3
  int Integer; // r0
  int v13; // r3
  Ogre::SurfaceData *v14; // r6
  unsigned int i; // r5
  int v16; // r7
  void *RowBits; // r0
  int v19; // [sp+1Ch] [bp-18h]
  int v20; // [sp+1Ch] [bp-18h]
  int v21; // [sp+24h] [bp-10h]
  Ogre::LockSection *v22; // [sp+28h] [bp-Ch] BYREF
  _DWORD v23[2]; // [sp+2Ch] [bp-8h] BYREF

  v22 = (Ogre::LockSection *)&Ogre::TextureData::m_ilLoadLMutex;
  Ogre::LockSection::Lock((pthread_mutex_t *)&Ogre::TextureData::m_ilLoadLMutex);
  ilGenImages(1, v23);
  ilBindImage(v23[0]);
  v6 = Ogre::FileManager::openFile((Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, *a2, 1);
  v8 = v6;
  if ( v6 == 0 )
  {
    Ogre::LogSetCurParam(
      (int)"D:/work/oworldsrc/client/OgreMain/OgreTexture.cpp",
      (_BYTE *)&stru_218.st_size + 3,
      4,
      v7);
    Ogre::LogMessage((Ogre *)"open texture file error: %s", *a2);
    goto LABEL_18;
  }
  v19 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 56))(v6);
  v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 48))(v8);
  v20 = ilLoadL(1079, v19, v9);
  v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
  if ( v20 == 0 )
  {
    ilGetError(v10);
    Ogre::LogSetCurParam(
      (int)"D:/work/oworldsrc/client/OgreMain/OgreTexture.cpp",
      (const char *)&stru_228.st_value,
      4,
      v11);
    Ogre::LogMessage((Ogre *)"ilLoadL texture file error: %s", *a2);
    v8 = 0;
    goto LABEL_18;
  }
  a1[4] = 0;
  a1[5] = ilGetInteger(3556);
  a1[6] = ilGetInteger(3557);
  a1[7] = 1;
  a1[8] = 1;
  a1[10] = 0;
  Integer = ilGetInteger(3562);
  if ( Integer == 6408 || Integer == 32993 )
  {
    *a3 = 1;
    v13 = 32993;
  }
  else
  {
    if ( Integer != 6407 && Integer != 32992 )
      goto LABEL_12;
    *a3 = 0;
    v13 = 32992;
  }
  v21 = v13;
LABEL_12:
  if ( *a3 == 1 )
  {
    v14 = (Ogre::SurfaceData *)operator new(0x30u);
    Ogre::SurfaceData::SurfaceData(v14, 12, a1[5], a1[5], 1);
    for ( i = 0; i < a1[6]; ++i )
    {
      v16 = a1[5];
      RowBits = (void *)Ogre::SurfaceData::getRowBits(v14, i, 0);
      ilCopyPixels(0, i, 0, v16, 1, 1, v21, 5121, RowBits);
    }
    ilDeleteImages(1, v23);
    v8 = *((_DWORD *)v14 + 9);
  }
  else
  {
    ilDeleteImages(1, v23);
    v8 = 0;
  }
LABEL_18:
  Ogre::LockFunctor::~LockFunctor(&v22);
  return v8;
}


//======================================================================
// Ogre::TextureData::newSurface(int)
// address: 0x0019B390   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall Ogre::TextureData::newSurface(Ogre::TextureData *this, char a2)
{
  int v3; // r5
  int v4; // r7
  int v5; // r6
  _DWORD *v7; // [sp+Ch] [bp-8h]

  v3 = *((_DWORD *)this + 5) >> a2;
  if ( v3 == 0 )
    v3 = 1;
  v4 = *((_DWORD *)this + 6) >> a2;
  if ( v4 == 0 )
    v4 = 1;
  v5 = *((_DWORD *)this + 7) >> a2;
  if ( v5 == 0 )
    v5 = 1;
  v7 = (_DWORD *)operator new(0x30u);
  Ogre::SurfaceData::SurfaceData(v7, *((_DWORD *)this + 9), v3, v4, v5);
  return v7;
}


//======================================================================
// Ogre::TextureData::convertToARGBBuffer(int &)
// address: 0x0019B3C8   size: 0x1CC (460 bytes)
//======================================================================
int __fastcall Ogre::TextureData::convertToARGBBuffer(Ogre::TextureData *this, int *a2)
{
  char *v3; // r7
  char *v5; // r0
  int v6; // r0
  unsigned int v7; // r3
  int v8; // r5
  int v9; // r0
  int v10; // r0
  unsigned int v11; // r3
  int Integer; // r0
  unsigned int v13; // r5
  Ogre::SurfaceData *v14; // r6
  int v15; // r7
  void *RowBits; // r0
  int v17; // r3
  int v18; // r3
  int v20; // [sp+1Ch] [bp-420h]
  int v21; // [sp+1Ch] [bp-420h]
  int v22; // [sp+20h] [bp-41Ch]
  Ogre::LockSection *v23; // [sp+2Ch] [bp-410h] BYREF
  int v24; // [sp+30h] [bp-40Ch] BYREF
  char v25[968]; // [sp+34h] [bp-408h] BYREF

  v3 = (char *)this + 68;
  if ( sub_3BDD5C((int)this + 68, (char *)&unk_3FB8EA) == 0 )
  {
    sub_3BF0BC((int)&v24, *((char **)this + 2));
    sub_3BEBBC(v3);
    sub_3BDF80(&v24);
  }
  j_strncpy(v25, *((const char **)this + 17), 0x400u);
  v5 = j_strrchr(v25, 46);
  if ( j_strcasecmp(v5, ".dds") == 0 )
  {
    v23 = (Ogre::LockSection *)&Ogre::TextureData::m_ilLoadLMutex;
    Ogre::LockSection::Lock((pthread_mutex_t *)&Ogre::TextureData::m_ilLoadLMutex);
    ilGenImages(1, &v24);
    ilBindImage(v24);
    v6 = Ogre::FileManager::openFile(
           (Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton,
           *((char **)this + 17),
           1);
    v8 = v6;
    if ( v6 != 0 )
    {
      v20 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 56))(v6);
      v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 48))(v8);
      v21 = ilLoadL(1079, v20, v9);
      v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
      if ( v21 != 0 )
      {
        *((_DWORD *)this + 4) = 0;
        *((_DWORD *)this + 5) = ilGetInteger(3556);
        *((_DWORD *)this + 6) = ilGetInteger(3557);
        *((_DWORD *)this + 7) = 1;
        *((_DWORD *)this + 8) = 1;
        *((_DWORD *)this + 10) = 0;
        Integer = ilGetInteger(3562);
        if ( Integer == 6408 || Integer == 32993 )
        {
          *a2 = 1;
          v22 = 32993;
        }
        else if ( Integer == 6407 || Integer == 32992 )
        {
          *a2 = 0;
          v22 = 32992;
        }
        v13 = 0;
        v14 = (Ogre::SurfaceData *)Ogre::TextureData::newSurface(this, 0);
        while ( v13 < *((_DWORD *)this + 6) )
        {
          v15 = *((_DWORD *)this + 5);
          RowBits = (void *)Ogre::SurfaceData::getRowBits(v14, v13, 0);
          ilCopyPixels(0, v13++, 0, v15, 1, 1, v22, 5121, RowBits);
        }
        ilDeleteImages(1, &v24);
        v8 = *((_DWORD *)v14 + 9);
      }
      else
      {
        ilGetError(v10);
        Ogre::LogSetCurParam(
          (int)"D:/work/oworldsrc/client/OgreMain/OgreTexture.cpp",
          (const char *)&stru_1D8.st_value,
          4,
          v11);
        Ogre::LogMessage((Ogre *)"ilLoadL texture file error: %s", *((const char **)this + 17));
        v8 = 0;
      }
    }
    else
    {
      Ogre::LogSetCurParam(
        (int)"D:/work/oworldsrc/client/OgreMain/OgreTexture.cpp",
        (const char *)&stru_1C8.st_size + 3,
        4,
        v7);
      Ogre::LogMessage((Ogre *)"open texture file error: %s", *((const char **)this + 17));
    }
    Ogre::LockFunctor::~LockFunctor(&v23);
  }
  else
  {
    v17 = *((_DWORD *)this + 9);
    if ( v17 == 12 )
    {
      v18 = 3;
    }
    else if ( v17 == 14 )
    {
      v18 = 4;
    }
    else
    {
      v18 = 5;
    }
    *a2 = v18;
    return *(_DWORD *)(**((_DWORD **)this + 11) + 36);
  }
  return v8;
}


//======================================================================
// Ogre::TextureData::onLoad(void)
// address: 0x0019B73C   size: 0x3A (58 bytes)
//======================================================================
void __fastcall Ogre::TextureData::onLoad(Ogre::TextureData *this)
{
  unsigned int i; // r4
  int v3; // r3

  if ( *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 64) == 2
    && (unsigned int)(*((_DWORD *)this + 9) - 17) <= 4 )
  {
    *((_DWORD *)this + 9) = 12;
    for ( i = 0; ; ++i )
    {
      v3 = *((_DWORD *)this + 11);
      if ( i >= (*((_DWORD *)this + 12) - v3) >> 2 )
        break;
      Ogre::SurfaceData::decompress(*(Ogre::SurfaceData **)(4 * i + v3));
    }
  }
}


//======================================================================
// Ogre::TextureData::genMipmaps(int)
// address: 0x0019B828   size: 0x2DC (732 bytes)
//======================================================================
int __fastcall Ogre::TextureData::genMipmaps(int this, int a2)
{
  int v2; // r2
  int v3; // r3
  int i; // r4
  int v5; // r4
  Ogre::SurfaceData *v6; // r7
  Ogre::SurfaceData *v7; // r0
  int v8; // r3
  signed int v9; // r6
  unsigned __int8 *RowBits; // r4
  unsigned __int8 *v11; // r5
  _BYTE *v12; // r0
  int v13; // r3
  int v14; // r1
  int v15; // r2
  int v16; // r2
  int v17; // r1
  signed int j; // r4
  unsigned __int8 *v19; // r5
  _BYTE *v20; // r0
  int v21; // r4
  int v22; // r6
  int v23; // r4
  int v24; // r4
  unsigned int v25; // r6
  int v26; // r0
  int v27; // r4
  __int64 v28; // r0
  int v29; // [sp+0h] [bp-3Ch]
  unsigned __int8 *v30; // [sp+0h] [bp-3Ch]
  int v31; // [sp+4h] [bp-38h]
  int v32; // [sp+4h] [bp-38h]
  signed int v33; // [sp+8h] [bp-34h]
  _BYTE *v34; // [sp+8h] [bp-34h]
  int v35; // [sp+Ch] [bp-30h]
  Ogre::SurfaceData *v36; // [sp+10h] [bp-2Ch]
  Ogre::TextureData *v37; // [sp+14h] [bp-28h]
  unsigned int v38; // [sp+18h] [bp-24h]
  int v39; // [sp+1Ch] [bp-20h]
  int v40; // [sp+20h] [bp-1Ch]
  int v41; // [sp+24h] [bp-18h]
  int v42; // [sp+28h] [bp-14h]
  signed int v43; // [sp+2Ch] [bp-10h]
  Ogre::SurfaceData *v44; // [sp+34h] [bp-8h] BYREF

  v37 = (Ogre::TextureData *)this;
  if ( a2 != 1 )
  {
    v2 = *(_DWORD *)(this + 20);
    v3 = *(_DWORD *)(this + 24);
    for ( i = 0; ; ++i )
    {
      v40 = i;
      if ( v2 <= 0 && v3 <= 0 )
        break;
      v2 /= 2;
      v3 /= 2;
    }
    v5 = 1;
    v6 = **(Ogre::SurfaceData ***)(this + 44);
    while ( 1 )
    {
      v39 = v5;
      this = v40;
      if ( v5 >= v40 )
        break;
      v7 = (Ogre::SurfaceData *)Ogre::TextureData::newSurface(v37, v5);
      v36 = v7;
      v44 = v7;
      v8 = *((_DWORD *)v37 + 9);
      if ( v8 == 10 )
      {
        v9 = 0;
        v29 = *((_DWORD *)v7 + 3);
        v33 = *((_DWORD *)v7 + 4);
        while ( v9 < v33 )
        {
          if ( *((_DWORD *)v6 + 4) == 1 )
          {
            RowBits = (unsigned __int8 *)Ogre::SurfaceData::getRowBits(v6, 0, 0);
            v11 = RowBits;
          }
          else
          {
            RowBits = (unsigned __int8 *)Ogre::SurfaceData::getRowBits(v6, 2 * v9, 0);
            v11 = (unsigned __int8 *)Ogre::SurfaceData::getRowBits(v6, 2 * v9 + 1, 0);
          }
          v12 = (_BYTE *)Ogre::SurfaceData::getRowBits(v36, v9, 0);
          if ( *((_DWORD *)v6 + 3) == 1 )
          {
            *v12 = (*RowBits + *v11) >> 1;
            v12[1] = (RowBits[1] + v11[1]) >> 1;
            v12[2] = (RowBits[2] + v11[2]) >> 1;
          }
          else
          {
            v13 = 0;
            while ( v13 < v29 )
            {
              ++v13;
              *v12 = (*RowBits + RowBits[3] + *v11 + v11[3]) >> 2;
              v12[1] = (RowBits[1] + RowBits[4] + v11[1] + v11[4]) >> 2;
              v14 = RowBits[2];
              v15 = RowBits[5];
              RowBits += 6;
              v16 = v14 + v15 + v11[2];
              v17 = v11[5];
              v11 += 6;
              v12[2] = (v16 + v17) >> 2;
              v12 += 3;
            }
          }
          ++v9;
        }
      }
      else if ( v8 == 12 )
      {
        v42 = *((_DWORD *)v7 + 3);
        v43 = *((_DWORD *)v7 + 4);
        for ( j = 0; ; j = v38 + 1 )
        {
          v38 = j;
          if ( j >= v43 )
            goto LABEL_47;
          if ( *((_DWORD *)v6 + 4) == 1 )
          {
            v19 = (unsigned __int8 *)Ogre::SurfaceData::getRowBits(v6, 0, 0);
            v30 = v19;
          }
          else
          {
            v19 = (unsigned __int8 *)Ogre::SurfaceData::getRowBits(v6, 2 * j, 0);
            v30 = (unsigned __int8 *)Ogre::SurfaceData::getRowBits(v6, 2 * j + 1, 0);
          }
          v20 = (_BYTE *)Ogre::SurfaceData::getRowBits(v36, j, 0);
          v34 = v20;
          if ( *((_DWORD *)v6 + 3) != 1 )
            break;
          v22 = v19[3];
          v31 = v30[3];
          v23 = (v22 + v31) >> 1;
          v20[3] = v23;
          if ( v23 == 0 )
            v23 = 1;
          v24 = 2 * v23;
          *v20 = (*v19 * v22 + *v30 * v31) / v24;
          v20[1] = (v19[1] * v22 + v30[1] * v31) / v24;
          v20[2] = (v22 * v19[2] + v31 * v30[2]) / v24;
LABEL_46:
          ;
        }
        v21 = 0;
        while ( 2 )
        {
          v41 = v21;
          if ( v21 >= v42 )
            goto LABEL_46;
          v25 = v19[3];
          if ( v25 <= 0x64 )
          {
            v27 = 0;
            v35 = 0;
            v32 = 0;
            v26 = 0;
            v25 = 0;
          }
          else
          {
            v26 = *v19;
            v32 = v19[1];
            v35 = v19[2];
            v27 = 1;
          }
          if ( v19[7] > 0x64u )
          {
            v25 += v19[7];
            ++v27;
            v26 += v19[4];
            v32 += v19[5];
            v35 += v19[6];
          }
          if ( v30[3] <= 0x64u )
          {
            if ( v30[7] <= 0x64u )
            {
              if ( v27 == 0 )
                v27 = 1;
              goto LABEL_38;
            }
          }
          else
          {
            v25 += v30[3];
            ++v27;
            v26 += *v30;
            v32 += v30[1];
            v35 += v30[2];
            if ( v30[7] <= 0x64u )
            {
LABEL_38:
              v19 += 8;
              *v34 = v26 / v27;
              v34[1] = v32 / v27;
              v34[2] = v35 / v27;
              v34[3] = (int)v25 / v27;
              v34 += 4;
              v30 += 8;
              v21 = v41 + 1;
              continue;
            }
          }
          break;
        }
        v25 += v30[7];
        ++v27;
        v26 += v30[4];
        v32 += v30[5];
        v35 += v30[6];
        goto LABEL_38;
      }
LABEL_47:
      HIDWORD(v28) = &v44;
      LODWORD(v28) = (char *)v37 + 44;
      std::vector<Ogre::SurfaceData *>::push_back(v28);
      v6 = v44;
      v5 = v39 + 1;
    }
    *((_DWORD *)v37 + 8) = v40;
  }
  return this;
}


//======================================================================
// Ogre::TextureData::loadFromOtherImage(std::string const&,Ogre::DataStream *,int)
// address: 0x0019BB04   size: 0x276 (630 bytes)
//======================================================================
int __fastcall Ogre::TextureData::loadFromOtherImage(Ogre::TextureData *a1, const char **a2, int a3, int a4)
{
  int v6; // r4
  char *v7; // r5
  unsigned int v8; // r3
  int v9; // r5
  int v10; // r0
  unsigned int v11; // r3
  int Integer; // r0
  int v13; // r4
  int v14; // r0
  _BOOL4 v15; // r4
  int v16; // r2
  unsigned int v17; // r5
  unsigned int v18; // r3
  int v19; // r6
  _BYTE *RowBits; // r4
  int v21; // r6
  __int64 v22; // r0
  int v24; // [sp+18h] [bp-42Ch]
  int v26; // [sp+20h] [bp-424h]
  int v27; // [sp+24h] [bp-420h]
  _BYTE *v28; // [sp+28h] [bp-41Ch]
  Ogre::LockSection *v29; // [sp+30h] [bp-414h] BYREF
  int v30; // [sp+34h] [bp-410h] BYREF
  Ogre::SurfaceData *v31; // [sp+38h] [bp-40Ch] BYREF
  char v32[960]; // [sp+3Ch] [bp-408h] BYREF

  v6 = a3;
  if ( a3 != 0 )
  {
    j_strncpy(v32, *a2, 0x400u);
    v7 = j_strrchr(v32, 46);
    if ( j_strcasecmp(v7, ".jpg") == 0 )
    {
      v9 = 1061;
      v24 = 1;
    }
    else if ( j_strcasecmp(v7, ".png") == 0 )
    {
      v9 = 1066;
      v24 = 1;
    }
    else if ( j_strcasecmp(v7, ".dds") == 0 )
    {
      v9 = 1079;
      v24 = 1;
    }
    else
    {
      if ( j_strcasecmp(v7, ".tga") == 0 )
      {
        v9 = 1069;
      }
      else
      {
        if ( j_strcasecmp(v7, ".bmp") != 0 )
        {
          Ogre::LogSetCurParam(
            (int)"D:/work/oworldsrc/client/OgreMain/OgreTexture.cpp",
            (_BYTE *)&stru_418.st_name + 1,
            4,
            v8);
          v6 = 0;
          Ogre::LogMessage((Ogre *)"Not supported format: %s", v32);
          return v6;
        }
        v9 = 1056;
      }
      v24 = 0;
    }
    v29 = (Ogre::LockSection *)&Ogre::TextureData::m_ilLoadLMutex;
    Ogre::LockSection::Lock((pthread_mutex_t *)&Ogre::TextureData::m_ilLoadLMutex);
    ilGenImages(1, &v30);
    ilBindImage(v30);
    v26 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 56))(v6);
    v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 48))(v6);
    v6 = ilLoadL(v9, v26, v10);
    if ( v6 == 0 )
    {
      ilGetError(0);
      Ogre::LogSetCurParam(
        (int)"D:/work/oworldsrc/client/OgreMain/OgreTexture.cpp",
        (const char *)&stru_418.st_other,
        4,
        v11);
      Ogre::LogMessage((Ogre *)"ilLoadL texture file error: %s", *a2);
LABEL_39:
      Ogre::LockFunctor::~LockFunctor(&v29);
      return v6;
    }
    *((_DWORD *)a1 + 4) = 0;
    *((_DWORD *)a1 + 5) = ilGetInteger(3556);
    Integer = ilGetInteger(3557);
    *((_DWORD *)a1 + 7) = 1;
    *((_DWORD *)a1 + 8) = 1;
    *((_DWORD *)a1 + 6) = Integer;
    *((_DWORD *)a1 + 10) = 0;
    v13 = *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 64);
    v14 = ilGetInteger(3562);
    v15 = v13 == 2;
    if ( v14 == 6408 || v14 == 32993 )
    {
      *((_DWORD *)a1 + 9) = 12;
      if ( !v15 )
      {
        v27 = 32993;
        goto LABEL_28;
      }
      v16 = 6408;
    }
    else
    {
      if ( v14 != 6407 && v14 != 32992 )
      {
LABEL_28:
        v17 = 0;
        v31 = (Ogre::SurfaceData *)Ogre::TextureData::newSurface(a1, 0);
        while ( 1 )
        {
          v18 = *((_DWORD *)v31 + 4);
          if ( v17 >= v18 )
            break;
          v19 = v17;
          if ( v24 == 0 )
            v19 = v18 - 1 - v17;
          RowBits = (_BYTE *)Ogre::SurfaceData::getRowBits(v31, v17, 0);
          ilCopyPixels(0, v19, 0, *((_DWORD *)v31 + 3), 1, 1, v27, 5121, RowBits);
          if ( a4 >> 8 != 0 && *((_DWORD *)a1 + 9) == 12 )
          {
            v28 = &RowBits[4 * *((_DWORD *)v31 + 3)];
            while ( RowBits < v28 )
            {
              v21 = (unsigned __int8)RowBits[3];
              *RowBits = (unsigned __int8)*RowBits * v21 / 255;
              RowBits[1] = (unsigned __int8)RowBits[1] * v21 / 255;
              RowBits[2] = (unsigned __int8)RowBits[2] * v21 / 255;
              RowBits += 4;
            }
          }
          ++v17;
        }
        LODWORD(v22) = (char *)a1 + 44;
        HIDWORD(v22) = &v31;
        std::vector<Ogre::SurfaceData *>::push_back(v22);
        ilDeleteImages(1, &v30);
        Ogre::TextureData::genMipmaps((int)a1, (unsigned __int8)a4);
        v6 = 1;
        goto LABEL_39;
      }
      *((_DWORD *)a1 + 9) = 10;
      if ( v15 )
      {
        v27 = 6407;
        goto LABEL_28;
      }
      v16 = 32992;
    }
    v27 = v16;
    goto LABEL_28;
  }
  Ogre::LogSetCurParam(
    (int)"D:/work/oworldsrc/client/OgreMain/OgreTexture.cpp",
    (const char *)&stru_408,
    4,
    (unsigned int)&_stack_chk_guard);
  Ogre::LogMessage((Ogre *)"open texture file error: %s", *a2);
  return v6;
}


//======================================================================
// Ogre::TextureData::loadFromPVRImageMemory(char const*,int)
// address: 0x0019BDF0   size: 0x396 (918 bytes)
//======================================================================
int __fastcall Ogre::TextureData::loadFromPVRImageMemory(
        Ogre::TextureData *this,
        const char *a2,
        int a3,
        unsigned int a4)
{
  const char *v6; // r1
  char *v7; // r0
  int v8; // r0
  unsigned int v9; // r3
  unsigned int v10; // r3
  unsigned int v11; // r6
  int v12; // r2
  size_t v13; // r6
  __int64 v14; // r0
  unsigned int v15; // r7
  int v16; // r2
  unsigned int v17; // r3
  int v18; // r3
  int v19; // r6
  int v20; // r2
  int v21; // r1
  unsigned int v22; // r3
  unsigned __int64 v24; // [sp+8h] [bp-2Ch]
  unsigned int v25; // [sp+10h] [bp-24h]
  int v26; // [sp+14h] [bp-20h]
  int v27; // [sp+18h] [bp-1Ch]
  int i; // [sp+1Ch] [bp-18h]
  int v29; // [sp+20h] [bp-14h]
  _DWORD *v31; // [sp+2Ch] [bp-8h] BYREF

  if ( a3 <= 51 )
  {
    Ogre::LogSetCurParam(
      (int)"D:/work/oworldsrc/client/OgreMain/OgreTexture.cpp",
      (_BYTE *)&stru_508.st_size + 3,
      2,
      a4);
    v7 = "pvr file too small";
    goto LABEL_5;
  }
  v8 = *(unsigned __int8 *)a2 | (*((unsigned __int8 *)a2 + 1) << 8) | (*((unsigned __int8 *)a2 + 2) << 16);
  v9 = (*((unsigned __int8 *)a2 + 3) << 24) | v8;
  v10 = (HIBYTE(v9) | (v9 << 24) | ((v8 & 0xFF00) << 8) | ((v8 & 0xFF0000u) >> 8)) != 1347834371;
  if ( v10 != 0 )
  {
    Ogre::LogSetCurParam(
      (int)"D:/work/oworldsrc/client/OgreMain/OgreTexture.cpp",
      (const char *)&stru_518.st_value,
      2,
      v10);
    v7 = "pvr file version mismatch";
    goto LABEL_5;
  }
  LODWORD(v24) = (*((unsigned __int8 *)a2 + 11) << 24)
               | (*((unsigned __int8 *)a2 + 9) << 8)
               | *((unsigned __int8 *)a2 + 8)
               | (*((unsigned __int8 *)a2 + 10) << 16);
  v16 = (*((unsigned __int8 *)a2 + 15) << 24)
      | (*((unsigned __int8 *)a2 + 13) << 8)
      | *((unsigned __int8 *)a2 + 12)
      | (*((unsigned __int8 *)a2 + 14) << 16);
  HIDWORD(v24) = v16;
  if ( ((unsigned int)v24 | v16) == 0 )
  {
    v18 = 41;
    goto LABEL_48;
  }
  if ( (_DWORD)v24 != 1 )
  {
    if ( (_DWORD)v24 == 2 )
    {
      if ( v16 != 0 )
        goto LABEL_38;
      v18 = 40;
    }
    else if ( (_DWORD)v24 == 3 )
    {
      if ( v16 != 0 )
        goto LABEL_38;
      v18 = 42;
    }
    else
    {
      if ( (_DWORD)v24 != 6 || v16 != 0 )
        goto LABEL_38;
      v18 = 44;
    }
    v19 = 4;
    goto LABEL_56;
  }
  if ( v16 == 0 )
  {
    v18 = 43;
LABEL_48:
    v19 = 2;
LABEL_56:
    v26 = v19;
    v25 = (*((unsigned __int8 *)a2 + 31) << 24)
        | (*((unsigned __int8 *)a2 + 29) << 8)
        | *((unsigned __int8 *)a2 + 28)
        | (*((unsigned __int8 *)a2 + 30) << 16);
    v15 = (*((unsigned __int8 *)a2 + 26) << 16)
        | (*((unsigned __int8 *)a2 + 25) << 8)
        | *((unsigned __int8 *)a2 + 24)
        | (*((unsigned __int8 *)a2 + 27) << 24);
    v27 = ((*((unsigned __int8 *)a2 + 49) << 8)
         | *((unsigned __int8 *)a2 + 48)
         | (*((unsigned __int8 *)a2 + 50) << 16)
         | (*((unsigned __int8 *)a2 + 51) << 24))
        + 52;
    v20 = (*((unsigned __int8 *)a2 + 45) << 8) | *((unsigned __int8 *)a2 + 44) | (*((unsigned __int8 *)a2 + 46) << 16);
    v21 = *((unsigned __int8 *)a2 + 47);
    *((_DWORD *)this + 5) = v25;
    *((_DWORD *)this + 6) = v15;
    v29 = (v21 << 24) | v20;
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 7) = 1;
    *((_DWORD *)this + 9) = v18;
    *((_DWORD *)this + 8) = v29;
    *((_DWORD *)this + 10) = 0;
    for ( i = 0; ; ++i )
    {
      if ( i == v29 )
        return 1;
      if ( (unsigned int)(__aeabi_ulcmp(v24, 3u) + 1) <= 1 )
        break;
      if ( v24 == 6 )
      {
        v22 = v25 >> 2;
        v11 = v15 >> 2;
LABEL_58:
        v12 = 16;
        goto LABEL_9;
      }
      if ( v24 == 0x808080861726762LL )
        return 0;
      v11 = v15;
      v22 = v25;
      v12 = 1;
LABEL_9:
      if ( v22 <= 1 )
        v22 = 2;
      if ( v11 <= 1 )
        v11 = 2;
      v13 = v11 * v22 * ((unsigned int)(v12 * v26) >> 3);
      if ( v13 > a3 - v27 )
        v13 = a3 - v27;
      v31 = Ogre::TextureData::newSurface(this, i);
      j_memcpy((void *)v31[9], &a2[v27], v13);
      LODWORD(v14) = (char *)this + 44;
      HIDWORD(v14) = &v31;
      std::vector<Ogre::SurfaceData *>::push_back(v14);
      v27 += v13;
      v25 >>= 1;
      if ( v25 == 0 )
        v25 = 1;
      v15 >>= 1;
      if ( v15 == 0 )
        v15 = 1;
    }
    v11 = v15 >> 2;
    if ( v24 < 2 )
    {
      v12 = 32;
      v22 = v25 >> 3;
      goto LABEL_9;
    }
    v22 = v25 >> 2;
    goto LABEL_58;
  }
LABEL_38:
  if ( (_DWORD)v24 == 1633838962 && v16 == 134744072 )
  {
    v18 = 12;
    v19 = 32;
    goto LABEL_56;
  }
  if ( (_DWORD)v24 == 1633838962 && v16 == 67372036 )
  {
    v18 = 8;
LABEL_55:
    v19 = 16;
    goto LABEL_56;
  }
  if ( (_DWORD)v24 == 1633838962 && v16 == 17106181 )
  {
    v18 = 9;
    goto LABEL_55;
  }
  v17 = 6449010;
  if ( (_DWORD)v24 == 6449010 )
  {
    v17 = 329221;
    if ( v16 == 329221 )
    {
      v18 = 6;
      goto LABEL_55;
    }
  }
  Ogre::LogSetCurParam(
    (int)"D:/work/oworldsrc/client/OgreMain/OgreTexture.cpp",
    (const char *)&stru_548.st_info,
    2,
    v17);
  v7 = "Cannot support pvr pixelformat";
LABEL_5:
  Ogre::LogMessage((Ogre *)v7, v6);
  return 0;
}


//======================================================================
// Ogre::TextureData::loadFromPVRCCZ(std::string const&,Ogre::DataStream *,int)
// address: 0x0019C188   size: 0x94 (148 bytes)
//======================================================================
int __fastcall Ogre::TextureData::loadFromPVRCCZ(Ogre::TextureData *a1, int a2, int a3)
{
  int v5; // r5
  unsigned int v6; // r0
  int v7; // r3
  char *v8; // r7
  int v9; // r0
  unsigned int v10; // r3
  int v11; // r4
  int v13[2]; // [sp+4h] [bp-8h] BYREF

  v13[0] = a2;
  v13[1] = a3;
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 56))(a3);
  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 48))(a3);
  v7 = 0;
  if ( v6 > 0xF )
  {
    v13[0] = (*(_DWORD *)(v5 + 12) << 24)
           | HIBYTE(*(_DWORD *)(v5 + 12))
           | ((*(_DWORD *)(v5 + 12) & 0xFF00) << 8)
           | ((*(_DWORD *)(v5 + 12) & 0xFF0000u) >> 8);
    v8 = (char *)operator new[](v13[0]);
    v9 = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 48))(a3);
    v11 = 0;
    if ( uncompress(v8, v13, v5 + 16, v9 - 16) == 0 )
      v11 = Ogre::TextureData::loadFromPVRImageMemory(a1, v8, v13[0], v10);
    if ( v8 != nullptr )
      operator delete[](v8);
    return v11;
  }
  return v7;
}


//======================================================================
// Ogre::TextureData::loadFromPVRImage(std::string const&,Ogre::DataStream *,int)
// address: 0x0019C220   size: 0x24 (36 bytes)
//======================================================================
int __fastcall Ogre::TextureData::loadFromPVRImage(Ogre::TextureData *a1, int a2, int a3)
{
  const char *v5; // r5
  int v6; // r0
  unsigned int v7; // r3

  v5 = (const char *)(*(int (__fastcall **)(int))(*(_DWORD *)a3 + 56))(a3);
  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 48))(a3);
  return Ogre::TextureData::loadFromPVRImageMemory(a1, v5, v6, v7);
}


//======================================================================
// Ogre::TextureData::loadFromImageFile(std::string const&,int)
// address: 0x0019C244   size: 0xC2 (194 bytes)
//======================================================================
int __fastcall Ogre::TextureData::loadFromImageFile(Ogre::TextureData *a1, char **a2, int a3)
{
  int result; // r0
  int v6; // r4
  unsigned int v7; // r3
  char *v8; // r7
  int v9; // r0
  int v10; // r5
  _BYTE v12[8]; // [sp+Ch] [bp-8h] BYREF

  result = Ogre::FileManager::openFile((Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, *a2, 1);
  v6 = result;
  if ( result != 0 )
  {
    v8 = j_strrchr(*a2, 46);
    if ( v8 == nullptr )
    {
      Ogre::LogSetCurParam(
        (int)"D:/work/oworldsrc/client/OgreMain/OgreTexture.cpp",
        (const char *)&stru_148.st_shndx,
        4,
        v7);
      Ogre::LogMessage((Ogre *)"wrong image file path: %s", *a2);
      return 0;
    }
    sub_3BEB1C(v12, a2);
    sub_3BEBBC((char *)a1 + 68);
    sub_3BDF80(v12);
    if ( j_strcasecmp(v8, ".pvr") == 0 )
    {
      v9 = Ogre::TextureData::loadFromPVRImage(a1, (int)a2, v6);
    }
    else
    {
      if ( j_strcasecmp(v8, ".dds") == 0 )
      {
        v10 = Ogre::TextureData::loadFromOtherImage(a1, (const char **)a2, v6, a3);
        if ( v10 != 0 )
          Ogre::TextureData::onLoad(a1);
        goto LABEL_11;
      }
      v9 = Ogre::TextureData::loadFromOtherImage(a1, (const char **)a2, v6, a3);
    }
    v10 = v9;
LABEL_11:
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
    return v10;
  }
  return result;
}


//======================================================================
// Ogre::TextureData::_serialize(Ogre::Archive &,int)
// address: 0x0019C534   size: 0x2A (42 bytes)
//======================================================================
void __fastcall Ogre::TextureData::_serialize(Ogre::TextureData *this, Ogre::Archive *a2, int a3)
{
  Ogre::Archive::serialize(a2, (char *)this + 16, 0x1Cu);
  Ogre::Archive::operator<<<Ogre::SurfaceData>(a2, (_DWORD *)this + 11);
  if ( *((_DWORD *)a2 + 2) == 1 )
    Ogre::TextureData::onLoad(this);
}


//======================================================================
// Ogre::TextureData::createSurfaceByDesc(void)
// address: 0x0019C55E   size: 0xBA (186 bytes)
//======================================================================
int __fastcall Ogre::TextureData::createSurfaceByDesc(Ogre::TextureData *this)
{
  int v2; // r0
  signed int v3; // r7
  int v4; // r5
  signed int v5; // r6
  __int64 v6; // r0
  int result; // r0
  int i; // r5
  unsigned int v9; // r6
  unsigned int j; // r5
  int v11; // r3

  if ( *((_DWORD *)this + 8) == 0 )
  {
    v2 = *((_DWORD *)this + 5);
    v3 = v2 - 1;
    if ( (v2 & (v2 - 1)) != 0 || v2 == 0 || (v4 = *((_DWORD *)this + 6), v5 = v4 - 1, (v4 & (v4 - 1)) != 0) || v4 == 0 )
    {
      *((_DWORD *)this + 8) = 1;
    }
    else
    {
      if ( (unsigned int)v2 > 1 )
        v3 = (COERCE_UNSIGNED_INT((float)v2) >> 23) - 127;
      if ( (unsigned int)v4 > 1 )
        v5 = (COERCE_UNSIGNED_INT((float)v4) >> 23) - 127;
      if ( v5 < v3 )
        v5 = v3;
      *((_DWORD *)this + 8) = v5 + 1;
    }
  }
  HIDWORD(v6) = *((_DWORD *)this + 8);
  LODWORD(v6) = (char *)this + 44;
  if ( *((_DWORD *)this + 4) == 2 )
  {
    HIDWORD(v6) *= 6;
    result = std::vector<Ogre::SurfaceData *>::resize(v6, 0);
    for ( i = 0; i != 6; ++i )
    {
      v9 = 0;
      if ( (*((_DWORD *)this + 10) & (1 << i)) != 0 )
      {
        while ( v9 < *((_DWORD *)this + 8) )
        {
          result = (int)Ogre::TextureData::newSurface(this, v9);
          *(_DWORD *)(4 * (v9 + *((_DWORD *)this + 8) * i) + *((_DWORD *)this + 11)) = result;
          ++v9;
        }
      }
    }
  }
  else
  {
    result = std::vector<Ogre::SurfaceData *>::resize(v6, 0);
    for ( j = 0; j < *((_DWORD *)this + 8); ++j )
    {
      result = (int)Ogre::TextureData::newSurface(this, j);
      v11 = 4 * j;
      *(_DWORD *)(v11 + *((_DWORD *)this + 11)) = result;
    }
  }
  return result;
}


//======================================================================
// Ogre::TextureData::TextureData(Ogre::TextureDesc const&,bool)
// address: 0x0019C618   size: 0x6A (106 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11TextureDataC2ERKNS_11TextureDescEb'
int __fastcall Ogre::TextureData::TextureData(int a1, int *a2, char a3)
{
  _DWORD *v5; // r1
  int v6; // r2
  int v7; // r6
  int v8; // r7
  int v9; // r6
  int v10; // r7
  int v11; // r2

  *(_DWORD *)(a1 + 4) = 1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_458A28;
  v6 = *a2;
  v7 = a2[1];
  v8 = a2[2];
  v5 = a2 + 3;
  *(_DWORD *)(a1 + 16) = v6;
  *(_DWORD *)(a1 + 20) = v7;
  *(_DWORD *)(a1 + 24) = v8;
  v9 = v5[1];
  v10 = v5[2];
  *(_DWORD *)(a1 + 28) = *v5;
  *(_DWORD *)(a1 + 32) = v9;
  *(_DWORD *)(a1 + 36) = v10;
  *(_DWORD *)(a1 + 40) = v5[3];
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_BYTE *)(a1 + 64) = a3;
  *(_DWORD *)(a1 + 68) = &byte_55FB88;
  v11 = *(_DWORD *)(a1 + 16);
  if ( v11 == 1 || (*(_DWORD *)(a1 + 28) = 1, v11 != 2) )
    *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 64) = 0;
  sub_19AA7C();
  Ogre::TextureData::createSurfaceByDesc((Ogre::TextureData *)a1);
  return a1;
}


//======================================================================
// Ogre::TextureData::loadFromDDS(std::string const&,Ogre::DataStream *)
// address: 0x0019C690   size: 0x1BC (444 bytes)
//======================================================================
int __fastcall Ogre::TextureData::loadFromDDS(
        Ogre::TextureData *a1,
        const char **a2,
        Ogre::DataStream *a3,
        unsigned int a4)
{
  int v8; // r1
  __int16 v9; // r3
  int v10; // r0
  int v11; // r3
  int v12; // r5
  int v13; // r2
  int v14; // r1
  unsigned int i; // r5
  int v16; // r3
  Ogre::SurfaceData *v17; // r0
  int v18; // [sp+0h] [bp-BCh]
  int v19; // [sp+8h] [bp-B4h]
  int v20; // [sp+Ch] [bp-B0h]
  int v21; // [sp+10h] [bp-ACh]
  int v22; // [sp+14h] [bp-A8h]
  _DWORD v23[4]; // [sp+18h] [bp-A4h] BYREF
  _DWORD v24[4]; // [sp+28h] [bp-94h] BYREF
  _DWORD v25[20]; // [sp+38h] [bp-84h] BYREF
  char v26; // [sp+88h] [bp-34h]
  unsigned int v27; // [sp+8Ch] [bp-30h]
  int v28; // [sp+90h] [bp-2Ch]
  int v29; // [sp+94h] [bp-28h]
  int v30; // [sp+98h] [bp-24h]
  int v31; // [sp+9Ch] [bp-20h]
  int v32; // [sp+A0h] [bp-1Ch]
  int v33; // [sp+A8h] [bp-14h]

  if ( a3 == nullptr )
  {
    Ogre::LogSetCurParam(
      (int)"D:/work/oworldsrc/client/OgreMain/OgreTexture.cpp",
      (_BYTE *)&stru_328.st_name + 2,
      4,
      a4);
    Ogre::LogMessage((Ogre *)"load texture file error: %s", *a2);
    return 0;
  }
  (*(void (__fastcall **)(Ogre::DataStream *, _DWORD *, int))(*(_DWORD *)a3 + 8))(a3, v25, 128);
  v8 = v25[2];
  *((_DWORD *)a1 + 4) = 0;
  *((_DWORD *)a1 + 7) = 1;
  *((_DWORD *)a1 + 10) = 0;
  if ( (v8 & 1) != 0 )
  {
    v9 = v33;
    if ( (v33 & 0x200) != 0 )
    {
      *((_DWORD *)a1 + 4) = 2;
      if ( (v9 & 0x400) != 0 )
        *((_DWORD *)a1 + 10) = 1;
      if ( (v9 & 0x800) != 0 )
        *((_DWORD *)a1 + 10) |= 2u;
      if ( (v9 & 0x1000) != 0 )
        *((_DWORD *)a1 + 10) |= 4u;
      if ( (v9 & 0x2000) != 0 )
        *((_DWORD *)a1 + 10) |= 8u;
      if ( (v9 & 0x4000) != 0 )
        *((_DWORD *)a1 + 10) |= 0x10u;
      if ( v9 < 0 )
        *((_DWORD *)a1 + 10) |= 0x20u;
    }
    else if ( (v33 & 0x200000) != 0 )
    {
      *((_DWORD *)a1 + 4) = 1;
      *((_DWORD *)a1 + 7) = v25[6];
    }
  }
  v10 = v25[3];
  *((_DWORD *)a1 + 5) = v25[4];
  *((_DWORD *)a1 + 6) = v10;
  v11 = 1;
  if ( (v8 & 0x20000) != 0 )
    v11 = v25[7];
  *((_DWORD *)a1 + 8) = v11;
  if ( (v26 & 0x40) != 0 )
  {
    v19 = v28;
    v20 = v29;
    v21 = v30;
    v22 = v31;
    v18 = 0;
    if ( (v26 & 1) != 0 )
      v18 = v32;
    v12 = 1;
    while ( 1 )
    {
      if ( Ogre::PixelUtil::getNumElemBits(v12) == v19 )
      {
        Ogre::PixelUtil::getBitMasks(v12, v23);
        Ogre::PixelUtil::getBitDepths(v12, v24);
        if ( v23[0] == v20 && v23[1] == v21 && v23[2] == v22 && (v23[3] == v18 || v18 == 0 && v24[3] == 0) )
          break;
      }
      if ( ++v12 == 45 )
      {
        v12 = 0;
        break;
      }
    }
    *((_DWORD *)a1 + 9) = v12;
    goto LABEL_58;
  }
  if ( (v26 & 4) != 0 )
  {
    if ( v27 == 116 )
    {
      v13 = 25;
      goto LABEL_57;
    }
    if ( v27 > 0x74 )
    {
      if ( v27 == 861165636 )
      {
        v13 = 19;
        goto LABEL_57;
      }
      if ( v27 > 0x33545844 )
      {
        v13 = 20;
        if ( v27 == 877942852 )
          goto LABEL_57;
        v14 = 894720068;
        v13 = 21;
      }
      else
      {
        v13 = 17;
        if ( v27 == 827611204 )
          goto LABEL_57;
        v13 = 18;
        v14 = 844388420;
      }
      if ( v27 != v14 )
LABEL_56:
        v13 = 0;
    }
    else if ( v27 == 113 )
    {
      v13 = 23;
    }
    else
    {
      if ( v27 > 0x71 )
      {
        v13 = 33;
        if ( v27 != 114 )
          v13 = 36;
        goto LABEL_57;
      }
      v13 = 32;
      if ( v27 != 111 )
      {
        v13 = 35;
        if ( v27 != 112 )
          goto LABEL_56;
      }
    }
LABEL_57:
    *((_DWORD *)a1 + 9) = v13;
  }
LABEL_58:
  Ogre::TextureData::createSurfaceByDesc(a1);
  for ( i = 0; ; ++i )
  {
    v16 = *((_DWORD *)a1 + 11);
    if ( i >= (*((_DWORD *)a1 + 12) - v16) >> 2 )
      break;
    v17 = *(Ogre::SurfaceData **)(4 * i + v16);
    if ( v17 != nullptr )
      Ogre::SurfaceData::loadFromDDSStream(v17, a3);
  }
  return 1;
}

