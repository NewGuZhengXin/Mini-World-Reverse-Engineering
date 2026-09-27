// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::TerrainBlockSource

//======================================================================
// Ogre::TerrainBlockSource::getRTTI(void)const
// address: 0x00156354   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::TerrainBlockSource::getRTTI(Ogre::TerrainBlockSource *this)
{
  return &Ogre::TerrainBlockSource::m_RTTI;
}


//======================================================================
// Ogre::TerrainBlockSource::~TerrainBlockSource()
// address: 0x00156604   size: 0x9E (158 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18TerrainBlockSourceD1Ev'
void __fastcall Ogre::TerrainBlockSource::~TerrainBlockSource(Ogre::TerrainBlockSource *this, void *a2)
{
  int v3; // r5
  _DWORD **v4; // r6
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  void *v8; // r0
  void *v9; // r0
  void *v10; // r0
  void *v11; // r0
  void *v12; // r0

  v3 = 0;
  *(_DWORD *)this = &off_456620;
  do
  {
    v4 = (_DWORD **)((char *)this + v3 + 136);
    if ( *v4 != nullptr )
    {
      Ogre::BaseObject::release(*v4);
      *v4 = nullptr;
    }
    v3 += 4;
  }
  while ( v3 != 16 );
  v5 = *((_DWORD **)this + 38);
  if ( v5 != nullptr )
  {
    Ogre::BaseObject::release(v5);
    *((_DWORD *)this + 38) = 0;
  }
  v6 = *((_DWORD **)this + 39);
  if ( v6 != nullptr )
  {
    Ogre::BaseObject::release(v6);
    *((_DWORD *)this + 39) = 0;
  }
  v7 = *((_DWORD **)this + 40);
  if ( v7 != nullptr )
  {
    Ogre::BaseObject::release(v7);
    *((_DWORD *)this + 40) = 0;
  }
  v8 = *((void **)this + 128);
  if ( v8 != nullptr )
    operator delete(v8);
  v9 = *((void **)this + 31);
  if ( v9 != nullptr )
    operator delete(v9);
  v10 = *((void **)this + 28);
  if ( v10 != nullptr )
    operator delete(v10);
  v11 = *((void **)this + 25);
  if ( v11 != nullptr )
    operator delete(v11);
  v12 = *((void **)this + 22);
  if ( v12 != nullptr )
    operator delete(v12);
  Ogre::Resource::~Resource((Ogre::FixedString **)this, a2);
}


//======================================================================
// Ogre::TerrainBlockSource::~TerrainBlockSource()
// address: 0x001566A8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::TerrainBlockSource::~TerrainBlockSource(Ogre::TerrainBlockSource *this, void *a2)
{
  Ogre::TerrainBlockSource::~TerrainBlockSource(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::TerrainBlockSource::TerrainBlockSource(void)
// address: 0x00156998   size: 0x90 (144 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18TerrainBlockSourceC1Ev'
int __fastcall Ogre::TerrainBlockSource::TerrainBlockSource(int this)
{
  *(_DWORD *)(this + 4) = 1;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)this = &off_456620;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 88) = 0;
  *(_DWORD *)(this + 92) = 0;
  *(_DWORD *)(this + 96) = 0;
  *(_DWORD *)(this + 100) = 0;
  *(_DWORD *)(this + 104) = 0;
  *(_DWORD *)(this + 108) = 0;
  *(_DWORD *)(this + 112) = 0;
  *(_DWORD *)(this + 116) = 0;
  *(_DWORD *)(this + 120) = 0;
  *(_DWORD *)(this + 124) = 0;
  *(_DWORD *)(this + 128) = 0;
  *(_DWORD *)(this + 132) = 0;
  *(_DWORD *)(this + 428) = 1065353216;
  *(_DWORD *)(this + 432) = 1065353216;
  *(_DWORD *)(this + 436) = 1065353216;
  *(_DWORD *)(this + 440) = 1065353216;
  *(_DWORD *)(this + 444) = 1065353216;
  *(_DWORD *)(this + 448) = 1065353216;
  *(_DWORD *)(this + 452) = 1065353216;
  *(_DWORD *)(this + 456) = 1065353216;
  *(_BYTE *)(this + 508) = 0;
  *(_DWORD *)(this + 512) = 0;
  *(_DWORD *)(this + 516) = 0;
  *(_DWORD *)(this + 520) = 0;
  *(_BYTE *)(this + 524) = 0;
  *(_BYTE *)(this + 525) = 0;
  *(_DWORD *)(this + 136) = 0;
  *(_DWORD *)(this + 140) = 0;
  *(_DWORD *)(this + 144) = 0;
  *(_DWORD *)(this + 148) = 0;
  *(_DWORD *)(this + 152) = 0;
  *(_DWORD *)(this + 156) = 0;
  *(_DWORD *)(this + 160) = 0;
  return this;
}


//======================================================================
// Ogre::TerrainBlockSource::newObject(void)
// address: 0x00156A30   size: 0x14 (20 bytes)
//======================================================================
int __fastcall Ogre::TerrainBlockSource::newObject(Ogre::TerrainBlockSource *this)
{
  int v1; // r4

  v1 = operator new(0x210u);
  Ogre::TerrainBlockSource::TerrainBlockSource(v1);
  return v1;
}


//======================================================================
// Ogre::TerrainBlockSource::getGridPos(int,int)
// address: 0x00156A44   size: 0x2C (44 bytes)
//======================================================================
_DWORD *__fastcall Ogre::TerrainBlockSource::getGridPos(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // r4
  _DWORD *v5; // r2

  v4 = *(_DWORD *)(a2 + 40);
  if ( v4 == 145 )
  {
    *this = 0;
    *(this + 1) = 0;
    *(this + 2) = 0;
  }
  else
  {
    v5 = (_DWORD *)(*(_DWORD *)(a2 + 124) + 36 * (a3 + v4 * a4));
    *this = *v5;
    *(this + 1) = v5[1];
    *(this + 2) = v5[2];
  }
  return this;
}


//======================================================================
// Ogre::TerrainBlockSource::getHeight(float,float,float *,int *,Ogre::Vector3 *,float *)
// address: 0x00156A70   size: 0x374 (884 bytes)
//======================================================================
int __fastcall Ogre::TerrainBlockSource::getHeight(
        Ogre::TerrainBlockSource *this,
        float a2,
        float a3,
        float *a4,
        int *a5,
        Ogre::Vector3 *a6,
        float *a7)
{
  int v9; // r6
  float v10; // r5
  float v11; // r0
  float v12; // r5
  float v13; // r0
  float v14; // r5
  int v15; // r3
  int v16; // r4
  int v17; // r6
  int v18; // r1
  int v19; // r3
  int v20; // r7
  float v21; // r1
  int v22; // r6
  float v23; // r5
  int v24; // r4
  int v25; // r5
  int v26; // r3
  int v27; // r2
  int v28; // r5
  int v29; // r4
  int v30; // r2
  int v31; // r4
  int v34; // [sp+Ch] [bp-50h]
  int v35; // [sp+Ch] [bp-50h]
  float v36; // [sp+Ch] [bp-50h]
  int v37; // [sp+10h] [bp-4Ch]
  float v38; // [sp+10h] [bp-4Ch]
  int v39; // [sp+10h] [bp-4Ch]
  int v40; // [sp+10h] [bp-4Ch]
  int v41; // [sp+10h] [bp-4Ch]
  float v42; // [sp+14h] [bp-48h]
  int v43; // [sp+14h] [bp-48h]
  float v44; // [sp+1Ch] [bp-40h]
  int v45; // [sp+1Ch] [bp-40h]
  int v46; // [sp+20h] [bp-3Ch]
  float v48; // [sp+28h] [bp-34h]
  int v49; // [sp+2Ch] [bp-30h]
  _BYTE v50[12]; // [sp+34h] [bp-28h] BYREF
  _BYTE v51[12]; // [sp+40h] [bp-1Ch] BYREF
  _DWORD v52[4]; // [sp+4Ch] [bp-10h] BYREF

  v37 = *((_DWORD *)this + 10);
  if ( v37 == 145 )
  {
    v9 = 0;
    if ( a2 <= *((float *)this + 19) )
    {
      v10 = *((float *)this + 16);
      if ( a2 >= v10 && a3 <= *((float *)this + 21) )
      {
        v38 = *((float *)this + 18);
        if ( a3 >= v38 )
        {
          v11 = *((float *)this + 11) * 0.125;
          v12 = (float)(a2 - v10) / v11;
          v13 = (float)(a3 - v38) / v11;
          v34 = (int)v12;
          v14 = v12 - (float)(int)v12;
          v15 = 17 * (int)v13;
          v16 = v34 + v15;
          v17 = v34 + 1 + v15;
          v15 += 17;
          v18 = v34 + v15;
          v19 = v34 + 1 + v15;
          v35 = v18;
          v39 = v19;
          if ( v17 > 144 )
            v17 = v16;
          if ( v18 > 144 )
            v35 = v16;
          if ( v19 > 144 )
            v39 = v16;
          v20 = *((_DWORD *)this + 22);
          *a4 = (float)((float)((float)((float)(1.0 - v14) * *(float *)(4 * v16 + v20))
                              + (float)(v14 * *(float *)(4 * v17 + v20)))
                      * (float)(1.0 - (float)(v13 - (float)(int)v13)))
              + (float)((float)((float)((float)(1.0 - v14) * *(float *)(4 * v35 + v20))
                              + (float)(v14 * *(float *)(4 * v39 + v20)))
                      * (float)(v13 - (float)(int)v13));
          return 1;
        }
      }
    }
  }
  else
  {
    v9 = 0;
    if ( a2 <= *((float *)this + 19)
      && a2 >= (float)((int)(float)(*((float *)this + 16) * 100.0) / 100)
      && a3 <= *((float *)this + 21)
      && a2 >= (float)((int)(float)(*((float *)this + 16) * 100.0) / 100) )
    {
      v22 = (int)Ogre::Sqrt(COERCE_OGRE_((float)v37), v21);
      v23 = (float)(*((float *)this + 11) / (float)(v22 - 1)) + 0.001;
      v42 = (float)(a2 - *((float *)this + 16)) / v23;
      v44 = (float)(a3 - *((float *)this + 18)) / v23;
      v24 = (int)v42;
      v40 = (int)v44 * (v22 - 1);
      v49 = (int)v42 + v40;
      v36 = v42 - (float)(int)v42;
      v48 = v44 - (float)(int)v44;
      v25 = v40 + (int)v44;
      v41 = (int)v42 + v25;
      v26 = v22 * v22;
      v27 = (int)v42 + 1;
      v43 = v27 + v25;
      if ( v27 + v25 >= v22 * v22 )
        v43 = v41;
      v28 = v25 + v22;
      v46 = v24 + v28;
      if ( v24 + v28 >= v26 )
        v46 = v41;
      v45 = v27 + v28;
      if ( v27 + v28 >= v26 )
        v45 = v41;
      v29 = *((_DWORD *)this + 22);
      *a4 = (float)((float)((float)((float)(1.0 - v36) * *(float *)(4 * v41 + v29))
                          + (float)(v36 * *(float *)(4 * v43 + v29)))
                  * (float)(1.0 - v48))
          + (float)((float)((float)((float)(1.0 - v36) * *(float *)(4 * v46 + v29))
                          + (float)(v36 * *(float *)(4 * v45 + v29)))
                  * v48);
      if ( a5 != nullptr )
        *a5 = *(unsigned __int8 *)(*((_DWORD *)this + 128) + v49);
      if ( a6 != nullptr )
      {
        Ogre::Lerp(
          (Ogre *)v50,
          (const Ogre::Vector3 *)(*((_DWORD *)this + 25) + 12 * v41),
          (const Ogre::Vector3 *)(*((_DWORD *)this + 25) + 12 * v43),
          v36);
        Ogre::Lerp(
          (Ogre *)v51,
          (const Ogre::Vector3 *)(*((_DWORD *)this + 25) + 12 * v46),
          (const Ogre::Vector3 *)(*((_DWORD *)this + 25) + 12 * v45),
          v36);
        Ogre::Lerp((Ogre *)v52, (const Ogre::Vector3 *)v50, (const Ogre::Vector3 *)v51, v48);
        v30 = v52[0];
        v31 = v52[2];
        *((_DWORD *)a6 + 1) = v52[1];
        *(_DWORD *)a6 = v30;
        *((_DWORD *)a6 + 2) = v31;
        Ogre::Normalize((float *)a6);
      }
      if ( a7 != nullptr )
      {
        if ( *((_BYTE *)this + 56) != 0 )
          *a7 = *((float *)this + 106);
        else
          *a7 = -3.4028e38;
      }
      return 1;
    }
  }
  return v9;
}


//======================================================================
// Ogre::TerrainBlockSource::createTextures(Ogre::TerrainTileSource *)
// address: 0x00156F5C   size: 0xFE (254 bytes)
//======================================================================
int __fastcall Ogre::TerrainBlockSource::createTextures(Ogre::TerrainBlockSource *this, Ogre::TerrainTileSource *a2)
{
  int v4; // r2
  int v5; // r2
  Ogre::ResourceManager *v6; // r6
  int v7; // r0
  _DWORD *v8; // r6
  void *v9; // r1
  Ogre::ResourceManager *v10; // r5
  void *v11; // r1
  Ogre::WaterDepthTexture *v12; // r5
  int v14; // [sp+4h] [bp-120h]
  Ogre::TerrainBlockSource *i; // [sp+8h] [bp-11Ch]
  Ogre::FixedString *v16; // [sp+Ch] [bp-118h]
  Ogre::TerrainBlockSource *v17; // [sp+10h] [bp-114h]
  Ogre::FixedString *v18; // [sp+18h] [bp-10Ch] BYREF
  _BYTE v19[256]; // [sp+1Ch] [bp-108h] BYREF

  v14 = *((unsigned __int8 *)this + 525);
  if ( *((_BYTE *)this + 525) != 0 )
    return 1;
  *((_BYTE *)this + 525) = 1;
  v17 = this;
  for ( i = this; ; i = (Ogre::TerrainBlockSource *)((char *)i + 1) )
  {
    v4 = *((unsigned __int8 *)this + 20);
    if ( i - this >= v4 )
      break;
    v5 = *((_DWORD *)a2 + 13);
    v16 = *(Ogre::FixedString **)(4 * *((unsigned __int8 *)i + 21) + v5);
    v6 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
    v18 = (Ogre::FixedString *)Ogre::FixedString::insert(v16, (const char *)0xFFFFFFFF, v5);
    v7 = Ogre::ResourceManager::blockLoad(v6, (const Ogre::FixedString *)&v18, 0);
    v8 = (_DWORD *)((char *)v17 + 136);
    *((_DWORD *)v17 + 34) = v7;
    Ogre::FixedString::release(v18, v9);
    v17 = (Ogre::TerrainBlockSource *)((char *)v17 + 4);
    if ( *v8 == 0 )
    {
      Ogre::LogSetCurParam((Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreTerrainData.cpp", "", 8, 0);
      Ogre::LogMessage((Ogre *)"failed to load terrain texture: %s", (const char *)v16);
      return v14;
    }
  }
  if ( *((_BYTE *)this + 57) != 0 )
  {
    v10 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
    v18 = (Ogre::FixedString *)Ogre::FixedString::insert((Ogre::FixedString *)v19, (const char *)0xFFFFFFFF, v4);
    *((_DWORD *)this + 39) = Ogre::ResourceManager::blockLoad(v10, (const Ogre::FixedString *)&v18, 0);
    Ogre::FixedString::release(v18, v11);
  }
  if ( *((_BYTE *)this + 56) == 0 )
    return 1;
  v12 = (Ogre::WaterDepthTexture *)operator new(0x4Cu);
  Ogre::WaterDepthTexture::WaterDepthTexture(v12, this);
  *((_DWORD *)this + 40) = v12;
  return 1;
}


//======================================================================
// Ogre::TerrainBlockSource::initVertexData(int)
// address: 0x00157944   size: 0x1BE (446 bytes)
//======================================================================
void __fastcall Ogre::TerrainBlockSource::initVertexData(Ogre::TerrainBlockSource *this, float a2)
{
  int v3; // r7
  unsigned int v4; // r5
  _DWORD *v5; // r1
  int v6; // r0
  unsigned int v7; // r6
  int v8; // r6
  int v9; // r5
  int v10; // r3
  _DWORD *v11; // r2
  int v12; // r1
  int v13; // r3
  _DWORD *v14; // r1
  int v15; // [sp+4h] [bp-68h]
  int v16; // [sp+8h] [bp-64h]
  float v17; // [sp+Ch] [bp-60h]
  int v19; // [sp+14h] [bp-58h]
  float v20; // [sp+18h] [bp-54h]
  int v21; // [sp+1Ch] [bp-50h]
  float v22; // [sp+20h] [bp-4Ch]
  float v23; // [sp+24h] [bp-48h]
  float v24; // [sp+28h] [bp-44h]
  _DWORD v25[10]; // [sp+44h] [bp-28h] BYREF

  if ( *((_BYTE *)this + 524) == 0 )
  {
    *((_BYTE *)this + 524) = 1;
    v21 = (int)Ogre::Sqrt(COERCE_OGRE_((float)*((int *)this + 10)), a2);
    v3 = v21 - 1;
    if ( LODWORD(a2) == 2 )
    {
      v3 /= 4;
    }
    else if ( LODWORD(a2) == 1 )
    {
      v3 /= 2;
    }
    v20 = (float)v3;
    v22 = 1.0 / (float)v3;
    v23 = *((float *)this + 16);
    v24 = *((float *)this + 18);
    v4 = (v3 + 1) * (v3 + 1);
    j_memset(v25, 0, 0x24u);
    v5 = *((_DWORD **)this + 32);
    v6 = *((_DWORD *)this + 31);
    v7 = 954437177 * (((int)v5 - v6) >> 2);
    if ( v4 <= v7 )
    {
      if ( v4 < v7 )
        *((_DWORD *)this + 32) = v6 + 36 * v4;
    }
    else
    {
      std::vector<Ogre::BlockVertex>::_M_fill_insert((int)this + 124, v5, v4 - v7, v25);
    }
    v15 = 0;
    v16 = 0;
    v19 = 0;
    while ( v3 >= v16 )
    {
      v8 = 0;
      do
      {
        v9 = 36 * (v8 + v19);
        *(float *)(*((_DWORD *)this + 31) + v9 + 28) = v22 * (float)v16;
        v17 = (float)v8;
        *(float *)(*((_DWORD *)this + 31) + v9 + 24) = v22 * (float)v8;
        if ( a2 == 0.0 )
        {
          v10 = v8 + v15;
        }
        else if ( LODWORD(a2) == 1 )
        {
          v10 = 2 * v8 + 2 * v15;
        }
        else
        {
          v10 = 4 * v8 + 4 * v15;
        }
        ++v8;
        v11 = (_DWORD *)(*((_DWORD *)this + 31) + v9);
        v12 = 12 * v10;
        v13 = 4 * v10;
        v14 = (_DWORD *)(*((_DWORD *)this + 25) + v12);
        v11[3] = *v14;
        v11[4] = v14[1];
        v11[5] = v14[2];
        *(_DWORD *)(*((_DWORD *)this + 31) + v9 + 32) = *(_DWORD *)(*((_DWORD *)this + 28) + v13);
        *(_DWORD *)(*((_DWORD *)this + 31) + v9 + 4) = *(_DWORD *)(*((_DWORD *)this + 22) + v13);
        *(float *)(*((_DWORD *)this + 31) + v9) = v23 + (float)((float)(v17 / v20) * *((float *)this + 11));
        *(float *)(*((_DWORD *)this + 31) + v9 + 8) = v24 + (float)((float)((float)v16 / v20) * *((float *)this + 11));
      }
      while ( v3 >= v8 );
      v19 += 1 + ((~v3 >> 31) & v3);
      ++v16;
      v15 += v21;
    }
  }
}


//======================================================================
// Ogre::TerrainBlockSource::_serialize(Ogre::Archive &,int)
// address: 0x00158BB0   size: 0x1A0 (416 bytes)
//======================================================================
__int64 __fastcall Ogre::TerrainBlockSource::_serialize(__int64 this, int a2)
{
  int v4; // r0
  __int64 v5; // r0
  __int64 v6; // r0
  Ogre::BaseObject **v7; // r6
  Ogre::BaseObject **v8; // r6
  int v9; // r0
  _BYTE *v10; // r1
  int v11; // r0
  _BYTE *v12; // r7
  __int64 v14; // [sp+0h] [bp-Ch] BYREF
  int v15; // [sp+8h] [bp-4h]

  v14 = this;
  v15 = a2;
  Ogre::Archive::serialize((Ogre::Archive *)HIDWORD(this), (void *)(this + 16), 0x48u);
  Ogre::Archive::serializeRawArray<float>(HIDWORD(this), (int *)(this + 88));
  Ogre::Archive::serializeRawArray<Ogre::Vector3>(SHIDWORD(this), (_DWORD *)(this + 100));
  if ( a2 <= 100 )
  {
    LODWORD(v6) = this + 112;
    HIDWORD(v6) = -1431655765 * ((*(_DWORD *)(this + 104) - *(_DWORD *)(this + 100)) >> 2);
    std::vector<Ogre::ColorQuad>::resize(v6, 0);
  }
  else
  {
    v4 = *(_DWORD *)(HIDWORD(this) + 4);
    if ( *(_DWORD *)(HIDWORD(this) + 8) == 1 )
    {
      sub_156446(v4);
      LODWORD(v5) = this + 112;
      HIDWORD(v5) = HIDWORD(v14);
      std::vector<Ogre::ColorQuad>::resize(v5, 0);
      if ( HIDWORD(v14) != 0 )
        sub_156446(*(_DWORD *)(HIDWORD(this) + 4));
    }
    else
    {
      HIDWORD(v14) = (*(_DWORD *)(this + 116) - *(_DWORD *)(this + 112)) >> 2;
      sub_156450(v4);
      if ( HIDWORD(v14) != 0 )
        sub_156450(*(_DWORD *)(HIDWORD(this) + 4));
    }
  }
  v7 = (Ogre::BaseObject **)(this + 152);
  if ( *(_DWORD *)(HIDWORD(this) + 8) == 1 )
    *v7 = (Ogre::BaseObject *)Ogre::Archive::readObject((Ogre::Archive *)HIDWORD(this));
  else
    Ogre::Archive::writeObject((Ogre::Archive *)HIDWORD(this), *v7);
  if ( *(_BYTE *)(this + 57) != 0 )
  {
    v8 = (Ogre::BaseObject **)(this + 156);
    if ( *(_DWORD *)(HIDWORD(this) + 8) == 1 )
      *v8 = (Ogre::BaseObject *)Ogre::Archive::readObject((Ogre::Archive *)HIDWORD(this));
    else
      Ogre::Archive::writeObject((Ogre::Archive *)HIDWORD(this), *v8);
  }
  if ( *(_BYTE *)(this + 56) != 0 )
    Ogre::Archive::serialize((Ogre::Archive *)HIDWORD(this), (void *)(this + 164), 0x140u);
  v9 = *(_DWORD *)(HIDWORD(this) + 4);
  if ( *(_DWORD *)(HIDWORD(this) + 8) == 1 )
  {
    sub_156446(v9);
    BYTE3(v14) = 0;
    v10 = *(_BYTE **)(this + 516);
    v11 = *(_DWORD *)(this + 512);
    v12 = &v10[-v11];
    if ( HIDWORD(v14) <= (unsigned int)&v10[-v11] )
    {
      if ( HIDWORD(v14) < (unsigned int)v12 )
        *(_DWORD *)(this + 516) = v11 + HIDWORD(v14);
    }
    else
    {
      std::vector<unsigned char>::_M_fill_insert(
        this + 512,
        v10,
        HIDWORD(v14) - (_DWORD)v12,
        (unsigned __int8 *)&v14 + 3);
    }
    if ( HIDWORD(v14) != 0 )
      sub_156446(*(_DWORD *)(HIDWORD(this) + 4));
  }
  else
  {
    HIDWORD(v14) = *(_DWORD *)(this + 516) - *(_DWORD *)(this + 512);
    sub_156450(v9);
    if ( HIDWORD(v14) != 0 )
      sub_156450(*(_DWORD *)(HIDWORD(this) + 4));
  }
  if ( *(_DWORD *)(HIDWORD(this) + 8) == 1 )
  {
    *(_DWORD *)(this + 484) = *(_DWORD *)(this + 64);
    *(_DWORD *)(this + 488) = *(_DWORD *)(this + 68);
    *(_DWORD *)(this + 492) = *(_DWORD *)(this + 72);
    *(_DWORD *)(this + 496) = *(_DWORD *)(this + 76);
    *(_DWORD *)(this + 500) = *(_DWORD *)(this + 80);
    *(_DWORD *)(this + 504) = *(_DWORD *)(this + 84);
    *(_BYTE *)(this + 508) = 1;
  }
  return v14;
}

