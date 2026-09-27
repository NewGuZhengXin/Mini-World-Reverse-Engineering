// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: EnvironmentMgr

//======================================================================
// EnvironmentMgr::update(unsigned int)
// address: 0x00297016   size: 0x10 (16 bytes)
//======================================================================
int __fastcall EnvironmentMgr::update(EnvironmentMgr *this, unsigned int a2)
{
  int result; // r0

  result = *((_DWORD *)this + 31);
  if ( result != 0 )
    return (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)result + 40))(result, a2);
  return result;
}


//======================================================================
// EnvironmentMgr::~EnvironmentMgr()
// address: 0x00297028   size: 0x34 (52 bytes)
//======================================================================
// Alternative name is '_ZN14EnvironmentMgrD1Ev'
void __fastcall EnvironmentMgr::~EnvironmentMgr(EnvironmentMgr *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0

  *(_DWORD *)this = &off_45C1C0;
  v2 = *((_DWORD **)this + 31);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 31) = 0;
  }
  v3 = *((_DWORD **)this + 27);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 27) = 0;
  }
  Environment::~Environment(this);
}


//======================================================================
// EnvironmentMgr::~EnvironmentMgr()
// address: 0x00297060   size: 0x12 (18 bytes)
//======================================================================
void __fastcall EnvironmentMgr::~EnvironmentMgr(EnvironmentMgr *this)
{
  EnvironmentMgr::~EnvironmentMgr(this);
  operator delete(this);
}


//======================================================================
// EnvironmentMgr::EnvironmentMgr(World *,BlockScene *)
// address: 0x00297074   size: 0x84 (132 bytes)
//======================================================================
// Alternative name is '_ZN14EnvironmentMgrC1EP5WorldP10BlockScene'
void __fastcall EnvironmentMgr::EnvironmentMgr(EnvironmentMgr *this, World *a2, BlockScene *a3)
{
  SkyPlane *v6; // r5
  RainSnowRenderable *v7; // r5

  Environment::Environment(this, a2);
  *((_DWORD *)this + 28) = a3;
  *(_DWORD *)this = &off_45C1C0;
  if ( World::hasSky(a2) != 0 )
  {
    v6 = (SkyPlane *)operator new(0x388u);
    SkyPlane::SkyPlane(v6);
    *((_DWORD *)this + 27) = v6;
    BlockScene::setBackground(*((BlockScene **)this + 28), v6);
    v7 = (RainSnowRenderable *)operator new(0x134u);
    RainSnowRenderable::RainSnowRenderable(
      v7,
      (Ogre::FixedString *)"particles/texture/rain.png",
      (Ogre::FixedString *)"particles/texture/snow.png");
    *((_DWORD *)this + 31) = v7;
    (*(void (__fastcall **)(RainSnowRenderable *, _DWORD, _DWORD))(*(_DWORD *)v7 + 48))(v7, *((_DWORD *)this + 28), 0);
  }
  else
  {
    *((_DWORD *)this + 27) = 0;
    *((_DWORD *)this + 31) = 0;
  }
  *((_DWORD *)this + 29) = 22500;
  *((_DWORD *)this + 30) = 22500;
}


//======================================================================
// EnvironmentMgr::getCurSkyLight(void)
// address: 0x00297108   size: 0x40 (64 bytes)
//======================================================================
EnvironmentMgr *__fastcall EnvironmentMgr::getCurSkyLight(EnvironmentMgr *this, int a2, int a3, int a4)
{
  int v6; // r1
  int v7; // r2
  EnvironmentMgr *v9; // [sp+0h] [bp-10h] BYREF
  int v10; // [sp+4h] [bp-Ch]
  int v11; // [sp+8h] [bp-8h]
  int v12; // [sp+Ch] [bp-4h]

  v9 = this;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  if ( *(_DWORD *)(a2 + 108) != 0 )
  {
    SkyPlane::getSkyLight((SkyPlane *)&v9);
    v12 = *(_DWORD *)(4 * (17 - *(_DWORD *)(a2 + 72)) + a2);
    v6 = v10;
    v7 = v11;
    *(_DWORD *)this = v9;
    *((_DWORD *)this + 1) = v6;
    *((_DWORD *)this + 2) = v7;
    *((_DWORD *)this + 3) = v12;
  }
  else
  {
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 3) = 1065353216;
  }
  return this;
}


//======================================================================
// EnvironmentMgr::getCurTorchLight(void)
// address: 0x00297148   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall EnvironmentMgr::getCurTorchLight(_DWORD *this)
{
  *(this + 1) = 1056964608;
  *this = 1065353216;
  *(this + 2) = 1045220557;
  *(this + 3) = 1065353216;
  return this;
}


//======================================================================
// EnvironmentMgr::getLighting(WCoord const&)
// address: 0x00297160   size: 0x110 (272 bytes)
//======================================================================
EnvironmentMgr *__fastcall EnvironmentMgr::getLighting(EnvironmentMgr *this, World **a2, int *a3)
{
  unsigned int v6; // r6
  unsigned int v7; // r0
  int v8; // r2
  int v9; // r3
  float v10; // r5
  World *v11; // r3
  float *v12; // r3
  float v13; // r7
  float v14; // r6
  unsigned int v16; // [sp+Ch] [bp-50h]
  float v17; // [sp+Ch] [bp-50h]
  float v18; // [sp+10h] [bp-4Ch]
  float v19; // [sp+14h] [bp-48h]
  float v20; // [sp+14h] [bp-48h]
  float v21; // [sp+18h] [bp-44h]
  float v22; // [sp+1Ch] [bp-40h]
  float v23; // [sp+24h] [bp-38h] BYREF
  float v24; // [sp+28h] [bp-34h] BYREF
  _DWORD v25[3]; // [sp+2Ch] [bp-30h] BYREF
  float v26[3]; // [sp+38h] [bp-24h] BYREF
  float v27; // [sp+44h] [bp-18h]
  float v28[5]; // [sp+48h] [bp-14h] BYREF

  v16 = CoordDivBlock(*a3);
  v6 = CoordDivBlock(a3[1]);
  v7 = CoordDivBlock(a3[2]);
  v25[1] = v6;
  v25[0] = v16;
  v25[2] = v7;
  World::getBlockLightValue2(a2[1], &v23, &v24, (const WCoord *)v25, true);
  EnvironmentMgr::getCurSkyLight((EnvironmentMgr *)v26, (int)a2, v8, v9);
  v22 = (float)(v27 * v23) * v26[0];
  v19 = (float)(v27 * v23) * v26[1];
  v21 = (float)(v27 * v23) * v26[2];
  EnvironmentMgr::getCurTorchLight(v28);
  v17 = v24 * v28[0];
  v18 = v24 * v28[1];
  v10 = v24 * v28[2];
  if ( v22 > (float)(v24 * v28[0]) )
    v17 = v22;
  if ( v19 > v18 )
    v18 = v19;
  if ( v21 > (float)(v24 * v28[2]) )
    v10 = v21;
  v11 = a2[27];
  if ( v11 != nullptr )
  {
    v12 = (float *)((char *)v11 + 252);
    v13 = v12[26];
    v14 = v12[27];
    v20 = v12[28];
    *(float *)this = v17 + v12[25];
    *((float *)this + 1) = v18 + v13;
    *((float *)this + 2) = v10 + v14;
    *((float *)this + 3) = v20 + 1.0;
  }
  else
  {
    *((float *)this + 2) = v10;
    *(float *)this = v17;
    *((float *)this + 1) = v18;
    *((_DWORD *)this + 3) = 1065353216;
  }
  return this;
}


//======================================================================
// EnvironmentMgr::getCurAmbient(void)
// address: 0x00297270   size: 0x28 (40 bytes)
//======================================================================
_DWORD *__fastcall EnvironmentMgr::getCurAmbient(_DWORD *this, int a2)
{
  int v2; // r3
  _DWORD *v3; // r3
  int v4; // r4
  int v5; // r5

  v2 = *(_DWORD *)(a2 + 108);
  if ( v2 != 0 )
  {
    v3 = (_DWORD *)(v2 + 352);
    v4 = v3[1];
    v5 = v3[2];
    *this = *v3;
    *(this + 1) = v4;
    *(this + 2) = v5;
    *(this + 3) = v3[3];
  }
  else
  {
    *this = 0;
    *(this + 1) = 0;
    *(this + 2) = 0;
    *(this + 3) = 1065353216;
  }
  return this;
}


//======================================================================
// EnvironmentMgr::updateFogColor(int)
// address: 0x00297298   size: 0x1F8 (504 bytes)
//======================================================================
float __fastcall EnvironmentMgr::updateFogColor(EnvironmentMgr *this, int a2)
{
  SkyPlane *v3; // r0
  int v5; // r1
  int v6; // r3
  int v7; // r2
  int v8; // r3
  int v9; // r0
  int v10; // r5
  BlockScene *v11; // r0
  float result; // r0
  _DWORD *v13; // r3
  BlockScene *v14; // r0
  BlockScene *v15; // r0
  int v16; // r3
  float v17; // r6
  float *v18; // r4
  float v19; // r5
  float v20; // r0
  _DWORD v21[5]; // [sp+10h] [bp-14h] BYREF

  v3 = *((SkyPlane **)this + 27);
  if ( v3 != nullptr )
  {
    SkyPlane::setCloudGenFullSpeed(v3, false);
    if ( World::hasSky(*((World **)this + 1)) == 0 )
    {
LABEL_17:
      v10 = *((_DWORD *)this + 27);
      *(_BYTE *)(v10 + 183) = World::hasSky(*((World **)this + 1));
      goto LABEL_18;
    }
    v5 = 100;
    if ( *((float *)this + 23) <= 0.0 )
      v5 = 1;
    v6 = *((_DWORD *)this + 30);
    v7 = *((_DWORD *)this + 29);
    if ( v6 <= v7 )
    {
      if ( v6 >= v7 )
      {
LABEL_10:
        if ( *((_DWORD *)this + 30) == v7 )
        {
          v9 = GenRandomInt(70, 180);
          *((_DWORD *)this + 29) = v9;
          if ( v9 <= 99 )
            *((_DWORD *)this + 29) = GenRandomInt(70, 180);
          *((_DWORD *)this + 29) *= 180;
        }
        if ( *((_BYTE *)this + 76) != 0 )
          *((_DWORD *)this + 29) = 32400;
        SkyPlane::setCloudDensity(*((SkyPlane **)this + 27), *((_DWORD *)this + 30) / 180);
        goto LABEL_17;
      }
      v8 = v6 + v5;
    }
    else
    {
      v8 = v6 - v5;
    }
    *((_DWORD *)this + 30) = v8;
    goto LABEL_10;
  }
LABEL_18:
  if ( (unsigned int)(a2 - 3) <= 1 )
  {
    BlockScene::setFogRange(*((BlockScene **)this + 28), 0, 8);
    v11 = *((BlockScene **)this + 28);
    v21[0] = 0;
    v21[1] = 0;
    v21[2] = 1045220557;
    v21[3] = 1065353216;
    result = COERCE_FLOAT(BlockScene::setFogColor(v11, (const Ogre::ColourValue *)v21));
    v13 = *((_DWORD **)this + 27);
    if ( v13 == nullptr )
      return result;
    v13[92] = 1045220557;
    v13[93] = 1045220557;
    v13[94] = 1053609165;
LABEL_24:
    v13[95] = 1065353216;
    return result;
  }
  if ( (unsigned int)(a2 - 5) <= 1 )
  {
    BlockScene::setFogRange(*((BlockScene **)this + 28), 0, 8);
    v21[0] = 1061997773;
    v14 = *((BlockScene **)this + 28);
    v21[2] = 0;
    v21[1] = 1045220557;
    v21[3] = 1065353216;
    result = COERCE_FLOAT(BlockScene::setFogColor(v14, (const Ogre::ColourValue *)v21));
    v13 = *((_DWORD **)this + 27);
    if ( v13 == nullptr )
      return result;
    v13[92] = 1053609165;
    v13[93] = 1045220557;
    v13[94] = 1045220557;
    goto LABEL_24;
  }
  if ( a2 == 9 )
  {
    BlockScene::setFogRange(*((BlockScene **)this + 28), 0, 4);
    v15 = *((BlockScene **)this + 28);
    v21[0] = 1061997773;
    v21[1] = 1045220557;
    v16 = 1058642330;
LABEL_29:
    v21[2] = v16;
    v21[3] = 1065353216;
    return COERCE_FLOAT(BlockScene::setFogColor(v15, (const Ogre::ColourValue *)v21));
  }
  if ( World::hasSky(*((World **)this + 1)) == 0 )
  {
    BlockScene::setFogRange(*((BlockScene **)this + 28), 32, 128);
    v15 = *((BlockScene **)this + 28);
    v16 = 0;
    v21[0] = 0;
    v21[1] = 0;
    goto LABEL_29;
  }
  SkyPlane::getSkyFogColor((SkyPlane *)v21, *((const Ogre::Vector3 **)this + 27));
  BlockScene::setFogColor(*((BlockScene **)this + 28), (const Ogre::ColourValue *)v21);
  BlockScene::setFogRange(
    *((BlockScene **)this + 28),
    (*(_DWORD *)(g_pPlayerCtrl + 232) << 6) / 5,
    96 * *(_DWORD *)(g_pPlayerCtrl + 232) / 5);
  v17 = COERCE_FLOAT(Environment::getRainStrength(this));
  result = COERCE_FLOAT(Environment::getRainStrength(this));
  v18 = *((float **)this + 27);
  v19 = result;
  if ( v18 != nullptr )
  {
    v20 = 1.0 - (float)(v17 * 0.7);
    v18[92] = v20;
    v18[93] = v20;
    v18[94] = v20;
    v18[95] = 1.0 - v19;
    return 1.0 - v19;
  }
  return result;
}


//======================================================================
// EnvironmentMgr::setCloudDensity(int)
// address: 0x002974AC   size: 0xE (14 bytes)
//======================================================================
SkyPlane *__fastcall EnvironmentMgr::setCloudDensity(EnvironmentMgr *this, int a2)
{
  SkyPlane *result; // r0

  result = *((SkyPlane **)this + 27);
  if ( result != nullptr )
    return (SkyPlane *)SkyPlane::setCloudDensity(result, a2);
  return result;
}


//======================================================================
// EnvironmentMgr::tick(void)
// address: 0x002974BC   size: 0x190 (400 bytes)
//======================================================================
float __fastcall EnvironmentMgr::tick(World **this)
{
  unsigned int v2; // r5
  World *v3; // r0
  float v4; // r4
  int v5; // r0
  int v6; // r0
  float v7; // r4
  double v8; // r4
  float v9; // r0
  float v10; // r0
  BlockScene *v11; // r5
  int hasSky; // r0
  int v13; // r2
  int v14; // r3
  BlockScene *v15; // r5
  int v16; // r1
  int *v17; // r3
  int v18; // r4
  unsigned int v20; // [sp+4h] [bp-38h]
  float v21; // [sp+8h] [bp-34h]
  int BlockID; // [sp+Ch] [bp-30h]
  _DWORD v23[3]; // [sp+10h] [bp-2Ch] BYREF
  float v24; // [sp+1Ch] [bp-20h] BYREF
  float v25; // [sp+20h] [bp-1Ch]
  unsigned int v26; // [sp+24h] [bp-18h]
  int v27; // [sp+28h] [bp-14h] BYREF
  int v28; // [sp+2Ch] [bp-10h]
  int v29; // [sp+30h] [bp-Ch]
  int v30; // [sp+34h] [bp-8h]

  Environment::tick((Environment *)this);
  GameCamera::getEyePos((GameCamera *)&v27);
  v2 = CoordDivBlock(v27);
  v20 = CoordDivBlock(v28);
  v23[2] = CoordDivBlock(v29);
  v3 = *(this + 1);
  v23[0] = v2;
  v23[1] = v20;
  BlockID = World::getBlockID(v3, (const WCoord *)v23);
  if ( *(_BYTE *)(g_pPlayerCtrl + 168) != 0 )
    BlockID = 9;
  v4 = COERCE_FLOAT(Environment::getCelestialAngle((Environment *)this)) - 0.75;
  if ( v4 < 0.0 )
    v4 = v4 + 1.0;
  v5 = (int)*(this + 27);
  if ( v5 != 0 )
    (*(void (__fastcall **)(int, float))(*(_DWORD *)v5 + 100))(v5, COERCE_FLOAT(LODWORD(v4)));
  v6 = (int)*(this + 31);
  if ( v6 != 0 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v6 + 40))(v6, 50);
  v7 = (float)(v4 * 360.0) + 90.0;
  if ( v7 >= 360.0 )
    v7 = v7 - 360.0;
  v8 = (float)(v7 * 0.017453);
  v9 = j_sin(v8);
  v21 = v9;
  v24 = v9;
  v10 = j_cos(v8);
  LODWORD(v25) = LODWORD(v10) + 0x80000000;
  v26 = 0;
  if ( COERCE_FLOAT(LODWORD(v10) + 0x80000000) < 0.0 )
  {
    LODWORD(v24) = LODWORD(v21) + 0x80000000;
    v25 = v10;
    v26 = 0x80000000;
  }
  BlockScene::setSkyLightDir(*(this + 28), (const Ogre::Vector3 *)&v24);
  v11 = *(this + 28);
  EnvironmentMgr::getCurTorchLight(&v27);
  BlockScene::setTorchLightColor(v11, (const Ogre::ColourValue *)&v27);
  hasSky = World::hasSky(*(this + 1));
  v15 = *(this + 28);
  if ( hasSky != 0 )
  {
    EnvironmentMgr::getCurSkyLight((EnvironmentMgr *)&v27, (int)this, v13, v14);
    BlockScene::setSkyLightColor(v15, (const Ogre::ColourValue *)&v27);
    v16 = *((_DWORD *)*(this + 27) + 89);
    v18 = *((_DWORD *)*(this + 27) + 90);
    v17 = (int *)((char *)*(this + 27) + 364);
    v27 = *((_DWORD *)*(this + 27) + 88);
    v28 = v16;
    v29 = v18;
    v30 = *v17;
  }
  else
  {
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 1065353216;
    BlockScene::setSkyLightColor(v15, (const Ogre::ColourValue *)&v27);
    v27 = 1056964608;
    v30 = 1065353216;
    v28 = 1053609165;
    v29 = 1053609165;
  }
  BlockScene::setAmbientColor(*(this + 28), (const Ogre::ColourValue *)&v27);
  return EnvironmentMgr::updateFogColor((EnvironmentMgr *)this, BlockID);
}

