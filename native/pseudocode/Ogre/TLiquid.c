// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::TLiquid

//======================================================================
// Ogre::TLiquid::getRTTI(void)const
// address: 0x0019C86C   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::TLiquid::getRTTI(Ogre::TLiquid *this)
{
  return &Ogre::TLiquid::m_RTTI;
}


//======================================================================
// Ogre::TLiquid::update(unsigned int)
// address: 0x0019C878   size: 0x4C (76 bytes)
//======================================================================
TiXmlNode *__fastcall Ogre::TLiquid::update(Ogre::TLiquid *this, unsigned int a2)
{
  int v3; // r1
  TiXmlElement *v4; // r2
  TiXmlNode *result; // r0
  unsigned int v6; // r0
  unsigned int v7; // r1
  int v8; // r1
  int v9; // t0

  Ogre::MovableObject::update((int)this, a2);
  result = Ogre::Root::getWaterReflect((TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton, v3, v4);
  if ( result == nullptr || *((_BYTE *)this + 276) != 0 )
  {
    v6 = (unsigned int)dword_4C6F78 / *((_DWORD *)this + 68);
    v7 = (*((_DWORD *)this + 85) - *((_DWORD *)this + 84)) >> 2;
    v9 = v6 / v7;
    v8 = v6 % v7;
    *((_DWORD *)this + 94) = v8;
    return (TiXmlNode *)v9;
  }
  return result;
}


//======================================================================
// Ogre::TLiquid::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x0019C8CC   size: 0x334 (820 bytes)
//======================================================================
int __fastcall Ogre::TLiquid::render(Ogre::TLiquid *this, Ogre::SceneRenderer *a2, Ogre::Texture **a3)
{
  int v4; // r0
  int v5; // r1
  TiXmlElement *v6; // r2
  TiXmlNode *WaterReflect; // r0
  int v8; // r2
  Ogre::Material *v9; // r7
  Ogre::Material *v10; // r0
  unsigned int v11; // r2
  void *v12; // r1
  Ogre::Material *v13; // r7
  int v14; // r2
  void *v15; // r1
  Ogre::Material *v16; // r7
  int v17; // r2
  void *v18; // r1
  Ogre::Material *v19; // r7
  int v20; // r2
  void *v21; // r1
  Ogre::Material *v22; // r7
  int v23; // r2
  void *v24; // r1
  Ogre::Material *v25; // r5
  int v26; // r2
  void *v27; // r1
  Ogre::Material *v28; // r7
  void *v29; // r1
  Ogre::Material *v30; // r7
  int v31; // r2
  void *v32; // r1
  Ogre::Material *v33; // r7
  int v34; // r2
  void *v35; // r1
  Ogre::Material *v36; // r7
  int v37; // r2
  void *v38; // r1
  Ogre::Material *v39; // r7
  int v40; // r2
  void *v41; // r1
  Ogre::Material *v42; // r7
  int v43; // r2
  void *v44; // r1
  Ogre::Material *v45; // r7
  int v46; // r2
  void *v47; // r1
  Ogre::Material *v48; // r7
  int v49; // r2
  void *v50; // r1
  Ogre::Material *v51; // r7
  int v52; // r2
  void *v53; // r1
  Ogre::Material *v54; // r7
  int v55; // r2
  void *v56; // r1
  Ogre::Material *v57; // r7
  int v58; // r2
  void *v59; // r1
  Ogre::Material *v60; // r7
  int v61; // r2
  void *v62; // r1
  Ogre::Material *v63; // r7
  int v64; // r2
  void *v65; // r1
  char *v66; // r2
  int v67; // r1
  Ogre::Material *v68; // r3
  float *v69; // r4
  float v73[4]; // [sp+2Ch] [bp-10h] BYREF

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)a2 + 154) + 84))(*((_DWORD *)a2 + 154));
  if ( v4 != 0 )
  {
    v5 = *((_DWORD *)this + 93);
    *(_DWORD *)(v4 + 712) = v5;
  }
  WaterReflect = Ogre::Root::getWaterReflect((TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton, v5, v6);
  if ( *((_BYTE *)this + 276) == 0 && WaterReflect != nullptr )
  {
    v28 = *((Ogre::Material **)this + 92);
    if ( v28 != nullptr )
    {
      Ogre::FixedString::FixedString((Ogre::FixedString *)v73, (Ogre::FixedString *)"g_WaterDepthTex", v8);
      Ogre::Material::setParamTexture(v28, (const Ogre::FixedString *)v73, *((Ogre::Texture **)this + 83), 0);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)v73, v29);
      v30 = *((Ogre::Material **)this + 92);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v73, (Ogre::FixedString *)"g_fSpeed", v31);
      Ogre::Material::setParamValue(v30, (const Ogre::FixedString *)v73, (char *)this + 324);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)v73, v32);
      v33 = *((Ogre::Material **)this + 92);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v73, (Ogre::FixedString *)"g_fAmp", v34);
      Ogre::Material::setParamValue(v33, (const Ogre::FixedString *)v73, (char *)this + 328);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)v73, v35);
      v36 = *((Ogre::Material **)this + 92);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v73, (Ogre::FixedString *)"g_ShallowWaterColor", v37);
      Ogre::Material::setParamValue(v36, (const Ogre::FixedString *)v73, (char *)this + 280);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)v73, v38);
      v39 = *((Ogre::Material **)this + 92);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v73, (Ogre::FixedString *)"g_DeepWaterColor", v40);
      Ogre::Material::setParamValue(v39, (const Ogre::FixedString *)v73, (char *)this + 296);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)v73, v41);
      v42 = *((Ogre::Material **)this + 92);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v73, (Ogre::FixedString *)"g_Depth", v43);
      Ogre::Material::setParamValue(v42, (const Ogre::FixedString *)v73, (char *)this + 316);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)v73, v44);
      v45 = *((Ogre::Material **)this + 92);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v73, (Ogre::FixedString *)"g_Shallow", v46);
      Ogre::Material::setParamValue(v45, (const Ogre::FixedString *)v73, (char *)this + 312);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)v73, v47);
      v48 = *((Ogre::Material **)this + 92);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v73, (Ogre::FixedString *)"g_maxdepth", v49);
      Ogre::Material::setParamValue(v48, (const Ogre::FixedString *)v73, (char *)this + 320);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)v73, v50);
      v51 = *((Ogre::Material **)this + 92);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v73, (Ogre::FixedString *)"g_RefractTexture", v52);
      Ogre::Material::setParamTexture(v51, (const Ogre::FixedString *)v73, a3[57], 0);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)v73, v53);
      v54 = *((Ogre::Material **)this + 92);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v73, (Ogre::FixedString *)"g_NumTexRepeat", v55);
      Ogre::Material::setParamValue(v54, (const Ogre::FixedString *)v73, (char *)this + 268);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)v73, v56);
      v57 = *((Ogre::Material **)this + 92);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v73, (Ogre::FixedString *)"g_refelcttexture", v58);
      Ogre::Material::setParamTexture(v57, (const Ogre::FixedString *)v73, a3[56], 0);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)v73, v59);
      v60 = *((Ogre::Material **)this + 92);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v73, (Ogre::FixedString *)"g_refProj", v61);
      Ogre::Material::setParamValue(v60, (const Ogre::FixedString *)v73, a3 + 78);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)v73, v62);
      v63 = *((Ogre::Material **)this + 92);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v73, (Ogre::FixedString *)"g_Normaltexture", v64);
      Ogre::Material::setParamTexture(v63, (const Ogre::FixedString *)v73, *((Ogre::Texture **)this + 87), 0);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)v73, v65);
    }
    v66 = (char *)this + 252;
    v67 = *((_DWORD *)this + 59);
    v68 = *((Ogre::Material **)this + 92);
  }
  else
  {
    v9 = *((Ogre::Material **)this + 91);
    if ( v9 != nullptr )
    {
      if ( *((_BYTE *)this + 276) != 0 )
      {
        Ogre::FixedString::FixedString(
          (Ogre::FixedString *)v73,
          (Ogre::FixedString *)"ALPHABLEND",
          *((unsigned __int8 *)this + 276));
        v10 = v9;
        v11 = 0;
      }
      else
      {
        Ogre::FixedString::FixedString((Ogre::FixedString *)v73, (Ogre::FixedString *)"ALPHABLEND", 0);
        v10 = v9;
        v11 = 1;
      }
      v12 = (void *)(Ogre::Material::setParamMacro(v10, (const Ogre::FixedString *)v73, v11) >> 32);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)v73, v12);
      v13 = *((Ogre::Material **)this + 91);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v73, (Ogre::FixedString *)"g_WaterBaseTex", v14);
      Ogre::Material::setParamTexture(
        v13,
        (const Ogre::FixedString *)v73,
        *(Ogre::Texture **)(4 * *((_DWORD *)this + 94) + *((_DWORD *)this + 84)),
        0);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)v73, v15);
      v16 = *((Ogre::Material **)this + 91);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v73, (Ogre::FixedString *)"g_WaterDepthTex", v17);
      Ogre::Material::setParamTexture(v16, (const Ogre::FixedString *)v73, *((Ogre::Texture **)this + 83), 0);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)v73, v18);
      v19 = *((Ogre::Material **)this + 91);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v73, (Ogre::FixedString *)"g_ShallowWaterColor", v20);
      Ogre::Material::setParamValue(v19, (const Ogre::FixedString *)v73, (char *)this + 280);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)v73, v21);
      v22 = *((Ogre::Material **)this + 91);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v73, (Ogre::FixedString *)"g_DeepWaterColor", v23);
      Ogre::Material::setParamValue(v22, (const Ogre::FixedString *)v73, (char *)this + 296);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)v73, v24);
      v25 = *((Ogre::Material **)this + 91);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v73, (Ogre::FixedString *)"g_NumTexRepeat", v26);
      Ogre::Material::setParamValue(v25, (const Ogre::FixedString *)v73, (char *)this + 268);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)v73, v27);
    }
    v66 = (char *)this + 252;
    v67 = *((_DWORD *)this + 59);
    v68 = *((Ogre::Material **)this + 91);
  }
  v69 = (float *)Ogre::SceneRenderer::newContext(
                   (int)a2,
                   v67,
                   a3,
                   v68,
                   *((_DWORD *)v66 + 27),
                   *((Ogre::VertexBuffer **)v66 + 25),
                   nullptr,
                   5,
                   2,
                   1);
  Ogre::Matrix4::transformCoord(
    (Ogre::Matrix4 *)(a3 + 239),
    (Ogre::Vector3 *)v73,
    (Ogre::TLiquid *)((char *)this + 140));
  v69[5] = v73[2] + 3200.0;
  return Ogre::ShaderContext::setInstanceEnvData(
           (Ogre::ShaderContext *)v69,
           a2,
           nullptr,
           (const Ogre::ShaderEnvData *)a3,
           nullptr);
}


//======================================================================
// Ogre::TLiquid::TLiquid(void)
// address: 0x0019CC58   size: 0x9C (156 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre7TLiquidC2Ev'
Ogre::TLiquid *__fastcall Ogre::TLiquid::TLiquid(Ogre::TLiquid *this)
{
  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_458AA8;
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 70) = 1065353216;
  *((_DWORD *)this + 72) = 1065353216;
  *((_DWORD *)this + 73) = 1065353216;
  *((_DWORD *)this + 71) = 1065353216;
  *((_DWORD *)this + 74) = 1065353216;
  *((_DWORD *)this + 75) = 1065353216;
  *((_DWORD *)this + 76) = 1065353216;
  *((_DWORD *)this + 77) = 1065353216;
  *((_DWORD *)this + 83) = 0;
  *((_DWORD *)this + 84) = 0;
  *((_DWORD *)this + 85) = 0;
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 87) = 0;
  *((_DWORD *)this + 88) = 0;
  *((_DWORD *)this + 89) = 0;
  *((_DWORD *)this + 90) = 0;
  *((_DWORD *)this + 67) = 1065353216;
  *((_DWORD *)this + 68) = 30;
  *((_DWORD *)this + 93) = 0;
  *((_DWORD *)this + 63) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 94) = 0;
  *((_BYTE *)this + 276) = 0;
  *((_DWORD *)this + 91) = 0;
  *((_DWORD *)this + 92) = 0;
  return this;
}


//======================================================================
// Ogre::TLiquid::newObject(void)
// address: 0x0019CCF8   size: 0x14 (20 bytes)
//======================================================================
Ogre::TLiquid *__fastcall Ogre::TLiquid::newObject(Ogre::TLiquid *this)
{
  Ogre::TLiquid *v1; // r4

  v1 = (Ogre::TLiquid *)operator new(0x17Cu);
  Ogre::TLiquid::TLiquid(v1);
  return v1;
}


//======================================================================
// Ogre::TLiquid::createReflectLiquid(char const*,char const*)
// address: 0x0019CD0C   size: 0x52 (82 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::TLiquid::createReflectLiquid(
        Ogre::TLiquid *this,
        Ogre::FixedString *a2,
        Ogre::FixedString *a3)
{
  char *v4; // r5
  Ogre::Material *v5; // r7
  void *v6; // r1
  Ogre::ResourceManager *v7; // r7
  int v8; // r2
  void *v9; // r1
  Ogre::FixedString *v10[2]; // [sp+4h] [bp-8h] BYREF

  v10[1] = a3;
  v4 = (char *)this + 252;
  *((_DWORD *)this + 63) = 1;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v10, (Ogre::FixedString *)"water_reflect", (int)a3);
  v5 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v5, (const Ogre::FixedString *)v10);
  *((_DWORD *)v4 + 29) = v5;
  Ogre::FixedString::~FixedString(v10, v6);
  v7 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v10, a2, v8);
  *((_DWORD *)v4 + 24) = Ogre::ResourceManager::blockLoad(v7, v10, 0);
  Ogre::FixedString::~FixedString(v10, v9);
}


//======================================================================
// Ogre::TLiquid::createVBIB(int,int,float,float,float,float,float)
// address: 0x0019CD68   size: 0x1AC (428 bytes)
//======================================================================
int __fastcall Ogre::TLiquid::createVBIB(
        Ogre::TLiquid *this,
        int a2,
        int a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8)
{
  char *v8; // r4
  Ogre::VertexData *v9; // r5
  int v10; // r0
  float v11; // r7
  float v12; // r6
  float v13; // r0
  void *v17[4]; // [sp+1Ch] [bp-10h] BYREF

  v8 = (char *)this + 252;
  *((_DWORD *)this + 65) = a2;
  *((_DWORD *)this + 66) = a3;
  *((float *)this + 93) = a8;
  Ogre::VertexFormat::VertexFormat(v17);
  Ogre::VertexFormat::addElement((int *)v17, 2u, 1u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)v17, 2u, 4u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)v17, 1u, 7u, 0, 0, -1);
  *((_DWORD *)v8 + 27) = (*(int (__fastcall **)(int, void **))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton
                                                             + 36))(
                           Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
                           v17);
  v9 = (Ogre::VertexData *)operator new(0x50u);
  Ogre::VertexData::VertexData(v9, (const Ogre::VertexFormat *)v17, 4u);
  *((_DWORD *)v8 + 25) = v9;
  v10 = Ogre::VertexData::lock(v9);
  *(float *)v10 = a4;
  *(_DWORD *)(v10 + 16) = 1065353216;
  *(float *)(v10 + 8) = a5;
  *(_DWORD *)(v10 + 48) = 1065353216;
  *(_DWORD *)(v10 + 56) = 1065353216;
  *(float *)(v10 + 32) = a6;
  *(_DWORD *)(v10 + 80) = 1065353216;
  *(_DWORD *)(v10 + 92) = 1065353216;
  *(float *)(v10 + 40) = a5;
  *(_DWORD *)(v10 + 112) = 1065353216;
  *(_DWORD *)(v10 + 12) = 0;
  *(float *)(v10 + 64) = a4;
  *(_DWORD *)(v10 + 20) = 0;
  *(_DWORD *)(v10 + 24) = 0;
  *(float *)(v10 + 72) = a7;
  *(_DWORD *)(v10 + 28) = 0;
  *(float *)(v10 + 4) = a8;
  *(_DWORD *)(v10 + 44) = 0;
  *(_DWORD *)(v10 + 52) = 0;
  *(_DWORD *)(v10 + 60) = 0;
  *(float *)(v10 + 36) = a8;
  *(_DWORD *)(v10 + 76) = 0;
  *(_DWORD *)(v10 + 84) = 0;
  *(_DWORD *)(v10 + 88) = 0;
  *(float *)(v10 + 68) = a8;
  *(_DWORD *)(v10 + 108) = 0;
  *(_DWORD *)(v10 + 116) = 0;
  *(_DWORD *)(v10 + 120) = 1065353216;
  *(_DWORD *)(v10 + 124) = 1065353216;
  *(float *)(v10 + 100) = a8;
  *(float *)(v10 + 96) = a6;
  *(float *)(v10 + 104) = a7;
  Ogre::VertexData::unlock(*((_DWORD *)v8 + 25));
  *((float *)this + 35) = (float)(a4 + a6) * 0.5;
  *((float *)this + 36) = (float)((float)(a8 - 0.1) + (float)(a8 + 0.1)) * 0.5;
  *((float *)this + 37) = (float)(a5 + a7) * 0.5;
  v11 = (float)(a6 - a4) * 0.5;
  v12 = (float)((float)(a8 + 0.1) - (float)(a8 - 0.1)) * 0.5;
  *((float *)this + 38) = v11;
  *((float *)this + 39) = v12;
  *((float *)this + 40) = (float)(a7 - a5) * 0.5;
  v13 = j_sqrt((float)((float)((float)(v11 * v11) + (float)(v12 * v12))
                     + (float)((float)((float)(a7 - a5) * 0.5) * (float)((float)(a7 - a5) * 0.5))));
  *((float *)this + 41) = v13;
  Ogre::VertexFormat::~VertexFormat(v17);
  return 1;
}


//======================================================================
// Ogre::TLiquid::setDepthTexture(Ogre::Texture *)
// address: 0x0019CF1C   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall Ogre::TLiquid::setDepthTexture(Ogre::TLiquid *this, Ogre::Texture *a2)
{
  char *v4; // r5
  _DWORD *result; // r0

  if ( a2 != nullptr )
    (*(void (__fastcall **)(Ogre::Texture *))(*(_DWORD *)a2 + 4))(a2);
  v4 = (char *)this + 252;
  result = *((_DWORD **)v4 + 20);
  if ( result != nullptr )
    result = Ogre::BaseObject::release(result);
  *((_DWORD *)v4 + 20) = a2;
  return result;
}


//======================================================================
// Ogre::TLiquid::SetGlobalWaterTime(unsigned int)
// address: 0x0019CF3C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::TLiquid::SetGlobalWaterTime(int this, unsigned int a2)
{
  dword_4C6F78 = this;
  return this;
}


//======================================================================
// Ogre::TLiquid::setHeight(float)
// address: 0x0019CF48   size: 0x20 (32 bytes)
//======================================================================
int __fastcall Ogre::TLiquid::setHeight(Ogre::TLiquid *this, float a2)
{
  char *v2; // r5
  float *v4; // r0

  v2 = (char *)this + 252;
  *((float *)this + 93) = a2;
  v4 = (float *)Ogre::VertexData::lock(*((Ogre::VertexData **)this + 88));
  v4[1] = a2;
  v4[9] = a2;
  v4[17] = a2;
  v4[25] = a2;
  return Ogre::VertexData::unlock(*((_DWORD *)v2 + 25));
}


//======================================================================
// Ogre::TLiquid::releaseTexture(void)
// address: 0x0019D170   size: 0x4E (78 bytes)
//======================================================================
_DWORD *__fastcall Ogre::TLiquid::releaseTexture(Ogre::TLiquid *this)
{
  unsigned int i; // r5
  int v3; // r3
  unsigned int v4; // r2
  _DWORD *v5; // r0
  char *v6; // r4
  _DWORD *result; // r0

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 84);
    v4 = (*((_DWORD *)this + 85) - v3) >> 2;
    if ( i >= v4 )
      break;
    v5 = *(_DWORD **)(v3 + 4 * i);
    if ( v5 != nullptr )
    {
      Ogre::BaseObject::release(v5);
      *(_DWORD *)(*((_DWORD *)this + 84) + 4 * i) = 0;
    }
  }
  v6 = (char *)this + 252;
  if ( v4 != 0 )
    *((_DWORD *)v6 + 22) = v3;
  result = *((_DWORD **)v6 + 24);
  if ( result != nullptr )
  {
    result = Ogre::BaseObject::release(result);
    *((_DWORD *)v6 + 24) = 0;
  }
  return result;
}


//======================================================================
// Ogre::TLiquid::~TLiquid()
// address: 0x0019D1C0   size: 0x7C (124 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre7TLiquidD1Ev'
void __fastcall Ogre::TLiquid::~TLiquid(Ogre::FixedString **this)
{
  _DWORD *v2; // r4
  void *v3; // r1
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  void *v9; // r0

  v2 = this + 63;
  *this = (Ogre::FixedString *)&off_458AA8;
  Ogre::TLiquid::releaseTexture((Ogre::TLiquid *)this);
  v4 = (_DWORD *)v2[20];
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    v2[20] = 0;
  }
  v5 = (_DWORD *)v2[25];
  if ( v5 != nullptr )
  {
    Ogre::BaseObject::release(v5);
    v2[25] = 0;
  }
  v6 = (_DWORD *)v2[26];
  if ( v6 != nullptr )
  {
    Ogre::BaseObject::release(v6);
    v2[26] = 0;
  }
  v7 = (_DWORD *)v2[28];
  if ( v7 != nullptr )
  {
    Ogre::BaseObject::release(v7);
    v2[28] = 0;
  }
  v8 = (_DWORD *)v2[29];
  if ( v8 != nullptr )
  {
    Ogre::BaseObject::release(v8);
    v2[29] = 0;
  }
  v9 = *(this + 84);
  if ( v9 != nullptr )
    operator delete(v9);
  Ogre::FixedString::~FixedString(this + 64, v3);
  Ogre::RenderableObject::~RenderableObject((Ogre::RenderableObject *)this);
}


//======================================================================
// Ogre::TLiquid::~TLiquid()
// address: 0x0019D240   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::TLiquid::~TLiquid(Ogre::FixedString **this)
{
  Ogre::TLiquid::~TLiquid(this);
  operator delete(this);
}


//======================================================================
// Ogre::TLiquid::createGeneralLiquid(char const*,int)
// address: 0x0019D254   size: 0x160 (352 bytes)
//======================================================================
int __fastcall Ogre::TLiquid::createGeneralLiquid(Ogre::TLiquid *this, char *a2, int a3)
{
  int v3; // r3
  char *v4; // r6
  _BOOL4 v5; // r5
  void *v7; // r1
  size_t v8; // r2
  int result; // r0
  int v10; // r4
  int v11; // r2
  Ogre::ResourceManager *v12; // r6
  void *v13; // r6
  void *v14; // r1
  __int64 v15; // r0
  char *v16; // r3
  int v17; // r2
  int v18; // r4
  int v19; // r2
  void *v20; // r6
  void *v21; // r1
  __int64 v22; // r0
  Ogre::ResourceManager *v24; // [sp+10h] [bp-124h]
  Ogre::ResourceManager *v25; // [sp+10h] [bp-124h]
  void *v27; // [sp+24h] [bp-110h] BYREF
  void *v28; // [sp+28h] [bp-10Ch] BYREF
  char s[256]; // [sp+2Ch] [bp-108h] BYREF
  int v30; // [sp+12Ch] [bp-8h]

  v3 = _stack_chk_guard;
  v4 = (char *)this + 252;
  v5 = false;
  *((_DWORD *)this + 63) = 0;
  v30 = v3;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v28, (Ogre::FixedString *)"general_water", a3);
  v24 = (Ogre::ResourceManager *)operator new(0x2Cu);
  Ogre::Material::Material(v24, (const Ogre::FixedString *)&v28);
  *((_DWORD *)v4 + 28) = v24;
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v28, v7);
  Ogre::TLiquid::releaseTexture(this);
  sub_3BF0BC((int)&v27, a2);
  sub_3BF0BC((int)&v28, "scene\\environment\\water\\magma\\magma");
  v8 = *((_DWORD *)v27 - 3);
  if ( v8 == *((_DWORD *)v28 - 3) )
    v5 = j_memcmp(v27, v28, v8) == 0;
  sub_3BDF80(&v28);
  result = sub_3BDF80(&v27);
  if ( v5 )
  {
    *((_BYTE *)this + 276) = 1;
    v10 = 0;
    while ( v10 < a3 )
    {
      if ( v10 > 9 )
        j_sprintf(s, "%s_0000%d.bmp", a2, v10);
      else
        j_sprintf(s, "%s_00000%d.bmp", a2, v10);
      ++v10;
      v12 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
      Ogre::FixedString::FixedString((Ogre::FixedString *)&v28, (Ogre::FixedString *)s, v11);
      v13 = (void *)Ogre::ResourceManager::blockLoad(v12, (Ogre::FixedString **)&v28, 0);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)&v28, v14);
      LODWORD(v15) = (char *)this + 336;
      HIDWORD(v15) = &v28;
      v28 = v13;
      result = std::vector<Ogre::Texture *>::push_back(v15);
    }
    v16 = (char *)this + 252;
    v17 = 51;
  }
  else
  {
    *((_BYTE *)this + 276) = 0;
    v18 = 0;
    while ( v18 < a3 )
    {
      j_sprintf(s, "%s_%d.dds", a2, ++v18);
      v25 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
      Ogre::FixedString::FixedString((Ogre::FixedString *)&v28, (Ogre::FixedString *)s, v19);
      v20 = (void *)Ogre::ResourceManager::blockLoad(v25, (Ogre::FixedString **)&v28, 0);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)&v28, v21);
      LODWORD(v22) = (char *)this + 336;
      HIDWORD(v22) = &v28;
      v28 = v20;
      result = std::vector<Ogre::Texture *>::push_back(v22);
    }
    v16 = (char *)this + 252;
    v17 = 30;
  }
  *((_DWORD *)v16 + 5) = v17;
  return result;
}

