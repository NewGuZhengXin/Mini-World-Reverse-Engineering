// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MinimapRenderer

//======================================================================
// MinimapRenderer::~MinimapRenderer()
// address: 0x002DBC4C   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN15MinimapRendererD1Ev'
void __fastcall MinimapRenderer::~MinimapRenderer(MinimapRenderer *this)
{
  _DWORD *v2; // r0
  int v3; // r3

  *(_DWORD *)this = &off_4610A8;
  v2 = *((_DWORD **)this + 166);
  v3 = v2[1] - 1;
  v2[1] = v3;
  if ( v3 <= 0 )
    (*(void (__fastcall **)(_DWORD *))(*v2 + 24))(v2);
  Ogre::SceneRenderer::~SceneRenderer(this);
}


//======================================================================
// MinimapRenderer::~MinimapRenderer()
// address: 0x002DBC80   size: 0x12 (18 bytes)
//======================================================================
void __fastcall MinimapRenderer::~MinimapRenderer(MinimapRenderer *this)
{
  MinimapRenderer::~MinimapRenderer(this);
  operator delete(this);
}


//======================================================================
// MinimapRenderer::doRender(void)
// address: 0x002DBC94   size: 0x224 (548 bytes)
//======================================================================
void __fastcall MinimapRenderer::doRender(MinimapRenderer *this)
{
  int v1; // r3
  double v3; // r4
  double v4; // r4
  float v5; // r0
  float v6; // r6
  int v7; // r0
  float v8; // r0
  float v9; // r0
  float v10; // r0
  unsigned int v11; // r0
  int v12; // r3
  Ogre::Camera *v13; // [sp+2Ch] [bp-558h]
  Ogre::Camera *v14; // [sp+30h] [bp-554h]
  Ogre::Camera *v15; // [sp+30h] [bp-554h]
  unsigned int v16; // [sp+34h] [bp-550h]
  BlockScene *v17; // [sp+3Ch] [bp-548h]
  double v18; // [sp+40h] [bp-544h]
  double v19; // [sp+48h] [bp-53Ch]
  double v20; // [sp+50h] [bp-534h]
  _DWORD v21[2]; // [sp+58h] [bp-52Ch] BYREF
  int v22; // [sp+60h] [bp-524h]
  _DWORD v23[3]; // [sp+64h] [bp-520h] BYREF
  unsigned int v24; // [sp+70h] [bp-514h] BYREF
  int v25; // [sp+74h] [bp-510h]
  unsigned int v26; // [sp+78h] [bp-50Ch]

  v1 = Ogre::Singleton<Ogre::SceneManager>::ms_Singleton;
  *((_DWORD *)this + 143) = *(_DWORD *)(*(_DWORD *)Ogre::Singleton<Ogre::SceneManager>::ms_Singleton + 8);
  *((_DWORD *)this + 144) = *(_DWORD *)(*(_DWORD *)v1 + 12);
  if ( *((_DWORD *)this + 168) == 0 )
    *((_DWORD *)this + 168) = (*(int (__fastcall **)(_DWORD, const char *, int, _DWORD, _DWORD, int))(**((_DWORD **)this + 167) + 72))(
                                *((_DWORD *)this + 167),
                                "ui/mobile/ui2.png",
                                2,
                                0,
                                0,
                                1);
  Ogre::UIRenderer::renderClearScreenTexture(
    *((Ogre::UIRenderer **)this + 167),
    *((void **)this + 168),
    768,
    880,
    256,
    144);
  v17 = *((BlockScene **)this + 154);
  v3 = (float)(*((float *)this + 164) * 0.017453);
  v18 = j_sin(v3);
  v19 = j_cos(v3);
  v4 = (float)(*((float *)this + 165) * 0.017453);
  v5 = j_cos(v4);
  v6 = v5;
  v20 = j_sin(v4);
  v7 = *((_DWORD *)this + 161);
  v21[0] = 10 * *((_DWORD *)this + 160);
  v14 = (Ogre::Camera *)(10 * v7);
  v22 = 10 * *((_DWORD *)this + 162);
  v21[1] = 10 * v7;
  v8 = v18;
  v23[0] = v21[0] + (int)(float)((float)((float)(v8 * v6) * 30000.0) * 10.0);
  v9 = v20;
  v23[1] = (char *)v14 + (int)(float)((float)(v9 * 30000.0) * 10.0);
  v10 = v19;
  v23[2] = v22 + (int)(float)((float)((float)(v10 * v6) * 30000.0) * 10.0);
  Ogre::Camera::setRatio(
    *((Ogre::Camera **)this + 166),
    (float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 88)
  / (float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 92));
  v24 = 0;
  v25 = 1065353216;
  v26 = 0;
  Ogre::Camera::setLookAt(
    *((Ogre::Camera **)this + 166),
    (const Ogre::WorldPos *)v23,
    (const Ogre::WorldPos *)v21,
    (const Ogre::Vector3 *)&v24);
  (*(void (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 166) + 40))(*((_DWORD *)this + 166), 0);
  Ogre::CullResult::startCull(*(Ogre::CullResult **)(*((_DWORD *)this + 166) + 212), *((Ogre::Camera **)this + 166));
  v13 = *((Ogre::Camera **)this + 166);
  v16 = CoordDivBlock(*((_DWORD *)this + 160));
  v15 = (Ogre::Camera *)CoordDivBlock(*((_DWORD *)this + 161));
  v11 = CoordDivBlock(*((_DWORD *)this + 162));
  v12 = *((_DWORD *)this + 163);
  v24 = v16;
  v25 = (int)v15;
  v26 = v11;
  BlockScene::onCullForMinimap(v17, v13, (const WCoord *)&v24, v12);
  Ogre::ShaderEnvData::ShaderEnvData((Ogre::ShaderEnvData *)&v24);
  Ogre::SceneRenderer::RenderResult(
    (int)this,
    (int)&v24,
    *(_DWORD *)(*((_DWORD *)this + 166) + 212),
    *((_DWORD *)this + 153),
    0,
    0,
    1065353216,
    0,
    0,
    nullptr,
    1,
    -1);
}


//======================================================================
// MinimapRenderer::MinimapRenderer(Ogre::UIRenderer *)
// address: 0x002DBED8   size: 0x64 (100 bytes)
//======================================================================
// Alternative name is '_ZN15MinimapRendererC1EPN4Ogre10UIRendererE'
void __fastcall MinimapRenderer::MinimapRenderer(MinimapRenderer *this, Ogre::UIRenderer *a2)
{
  Ogre::Camera *v4; // r5

  Ogre::SceneRenderer::SceneRenderer(this);
  *(_DWORD *)this = &off_4610A8;
  *((_DWORD *)this + 163) = 64;
  *((_DWORD *)this + 164) = 1110704128;
  *((_DWORD *)this + 165) = 1114636288;
  *((_DWORD *)this + 167) = a2;
  *((_DWORD *)this + 168) = 0;
  v4 = (Ogre::Camera *)operator new(0x268u);
  Ogre::Camera::Camera(v4);
  *((_DWORD *)this + 166) = v4;
  v4 = (Ogre::Camera *)((char *)v4 + 252);
  *(_DWORD *)v4 = 1148846080;
  *((_DWORD *)v4 + 1) = 1203982336;
  *(_DWORD *)(*((_DWORD *)this + 166) + 240) = 1106247680;
}


//======================================================================
// MinimapRenderer::setCenter(World *,WCoord const&)
// address: 0x002DBF68   size: 0x2E (46 bytes)
//======================================================================
int __fastcall MinimapRenderer::setCenter(_DWORD *a1, int a2, _DWORD *a3)
{
  int result; // r0

  a1[160] = *a3;
  a1[161] = a3[1];
  a1[162] = a3[2];
  result = 100 * (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a2 + 124) + 28))(*(_DWORD *)(a2 + 124));
  a1[161] = result;
  return result;
}


//======================================================================
// MinimapRenderer::projectPointToScreen(int &,int &,WCoord const&,World *)
// address: 0x002DBF98   size: 0x214 (532 bytes)
//======================================================================
int __fastcall MinimapRenderer::projectPointToScreen(
        MinimapRenderer *this,
        int *a2,
        int *a3,
        const WCoord *a4,
        World *a5)
{
  int v5; // r5
  int v6; // r4
  unsigned int v8; // r7
  unsigned int v9; // r0
  Ogre::Camera *v10; // r7
  Ogre::Camera *v11; // r0
  int result; // r0
  float v13; // r0
  float v14; // r5
  float v15; // r0
  float v16; // r7
  int v17; // r0
  float v18; // r4
  int v19; // r3
  float v20; // r0
  float v21; // r3
  int v22; // [sp+8h] [bp-3Ch]
  float v23; // [sp+8h] [bp-3Ch]
  float v24; // [sp+8h] [bp-3Ch]
  unsigned int v25; // [sp+Ch] [bp-38h]
  int v26; // [sp+10h] [bp-34h]
  Ogre::Camera *v27; // [sp+10h] [bp-34h]
  int v28; // [sp+14h] [bp-30h]
  float v29; // [sp+14h] [bp-30h]
  unsigned int v30; // [sp+18h] [bp-2Ch]
  int v31; // [sp+1Ch] [bp-28h]
  float v34[3]; // [sp+28h] [bp-1Ch] BYREF
  float v35[4]; // [sp+34h] [bp-10h] BYREF

  v5 = *(_DWORD *)a4;
  v6 = *((_DWORD *)a4 + 2);
  v31 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)a5 + 31) + 28))(*((_DWORD *)a5 + 31));
  v22 = *((_DWORD *)this + 160);
  v25 = CoordDivSection(v22);
  v28 = *((_DWORD *)this + 162);
  v30 = CoordDivSection(v28);
  v8 = CoordDivSection(v5);
  v9 = CoordDivSection(v6);
  v26 = *((_DWORD *)this + 163) / 16;
  if ( (int)((v8 - v25 + ((int)(v8 - v25) >> 31)) ^ ((int)(v8 - v25) >> 31)) > v26
    || (int)((v9 - v30 + ((int)(v9 - v30) >> 31)) ^ ((int)(v9 - v30) >> 31)) > v26 )
  {
    v13 = (float)(v5 - v22);
    v14 = v13;
    v23 = (float)(v6 - v28);
    v15 = j_sqrt((float)((float)(v13 * v13) + (float)(v23 * v23)));
    v29 = v15;
    v16 = v14 / v15;
    if ( (float)(v14 / v15) >= 0.0 )
    {
      if ( v16 <= 0.0 )
      {
LABEL_10:
        v18 = 3.4028e38;
LABEL_11:
        v24 = v23 / v29;
        if ( v24 >= 0.0 )
        {
          if ( v24 <= 0.0 )
          {
LABEL_17:
            v27 = *((Ogre::Camera **)this + 166);
            v20 = (float)((int)(float)(v18 * v24) + *((_DWORD *)this + 162));
            v21 = (float)*((int *)this + 161);
            v35[0] = (float)((int)(float)(v18 * v16) + *((_DWORD *)this + 160));
            v35[1] = v21;
            v35[2] = v20;
            v11 = v27;
            goto LABEL_4;
          }
          v19 = v30 + v26 + 1;
        }
        else
        {
          v19 = v30 - v26;
        }
        if ( (float)((float)(1600 * v19 - *((_DWORD *)this + 162)) / v24) < v18 )
          v18 = (float)(1600 * v19 - *((_DWORD *)this + 162)) / v24;
        goto LABEL_17;
      }
      v17 = 1600 * (v25 + v26 + 1) - *((_DWORD *)this + 160);
    }
    else
    {
      v17 = 1600 * (v25 - v26) - *((_DWORD *)this + 160);
    }
    v18 = (float)v17 / v16;
    if ( v18 < 3.4028e38 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v10 = *((Ogre::Camera **)this + 166);
  v35[0] = (float)v5;
  v35[1] = (float)(100 * v31);
  v35[2] = (float)v6;
  v11 = v10;
LABEL_4:
  Ogre::Camera::pointWorldToWindow(v11, (Ogre::Vector3 *)v34, (const Ogre::Vector3 *)v35);
  *a2 = (int)(float)(v34[0] * 1280.0);
  result = (int)(float)(v34[1] * 720.0);
  *a3 = result;
  return result;
}

