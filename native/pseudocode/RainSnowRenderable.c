// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: RainSnowRenderable

//======================================================================
// RainSnowRenderable::~RainSnowRenderable()
// address: 0x00267E60   size: 0x40 (64 bytes)
//======================================================================
// Alternative name is '_ZN18RainSnowRenderableD1Ev'
void __fastcall RainSnowRenderable::~RainSnowRenderable(RainSnowRenderable *this)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  v1 = (_DWORD *)((char *)this + 252);
  *(_DWORD *)this = &off_45BB20;
  v3 = *((_DWORD **)this + 63);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *v1 = 0;
  }
  v4 = (_DWORD *)v1[1];
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    v1[1] = 0;
  }
  Ogre::GaussGenerator::~GaussGenerator((RainSnowRenderable *)((char *)this + 260));
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// RainSnowRenderable::~RainSnowRenderable()
// address: 0x00267EA4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall RainSnowRenderable::~RainSnowRenderable(RainSnowRenderable *this)
{
  RainSnowRenderable::~RainSnowRenderable(this);
  operator delete(this);
}


//======================================================================
// RainSnowRenderable::addRainParticle(void)
// address: 0x00267F00   size: 0x252 (594 bytes)
//======================================================================
int __fastcall RainSnowRenderable::addRainParticle(RainSnowRenderable *this)
{
  float v1; // r5
  int result; // r0
  int v3; // r3
  int *v4; // r4
  signed int v5; // r7
  Ogre::RandomGenerator *v6; // r4
  unsigned int v7; // r5
  unsigned int v8; // r5
  unsigned int v9; // r5
  Chunk *v10; // r5
  int v11; // r6
  float v12; // r0
  signed int v13; // r6
  signed int v14; // r0
  int v15; // r1
  signed int v16; // r0
  int v17; // r5
  int v18; // r1
  int v19; // [sp+Ch] [bp-50h]
  int PrecipitationHeight; // [sp+10h] [bp-4Ch]
  int v21; // [sp+14h] [bp-48h]
  signed int v22; // [sp+14h] [bp-48h]
  int v23; // [sp+18h] [bp-44h]
  Environment **v24; // [sp+1Ch] [bp-40h]
  int v25; // [sp+20h] [bp-3Ch]
  int v26; // [sp+24h] [bp-38h]
  int v28; // [sp+2Ch] [bp-30h]
  int v29; // [sp+30h] [bp-2Ch]
  unsigned int v30; // [sp+34h] [bp-28h]
  unsigned int v31; // [sp+38h] [bp-24h]
  int v32; // [sp+3Ch] [bp-20h]
  unsigned int v33; // [sp+48h] [bp-14h]
  int v34; // [sp+4Ch] [bp-10h] BYREF
  int v35; // [sp+50h] [bp-Ch]
  int v36; // [sp+54h] [bp-8h]

  v24 = *(Environment ***)(g_pPlayerCtrl + 52);
  v1 = COERCE_FLOAT(Environment::getRainStrength(v24[7]));
  result = v1 == 0.0;
  if ( v1 != 0.0 )
  {
    v3 = g_pPlayerCtrl;
    *((_DWORD *)this + 65) = 312987231 * (*((_DWORD *)this + 74) / 0x32u);
    v4 = *(int **)(v3 + 68);
    v30 = CoordDivBlock(v4[8]);
    v5 = CoordDivBlock(v4[9]);
    v31 = CoordDivBlock(v4[10]);
    result = (int)(float)((float)(v1 * 100.0) * v1);
    v23 = 0;
    v32 = result;
    v19 = 0;
    while ( v23 < v32 )
    {
      v6 = (RainSnowRenderable *)((char *)this + 260);
      v7 = v30 + (int)Ogre::RandomGenerator::get((RainSnowRenderable *)((char *)this + 260)) % 10;
      v25 = v7 - (int)Ogre::RandomGenerator::get((RainSnowRenderable *)((char *)this + 260)) % 10;
      v8 = v31 + (int)Ogre::RandomGenerator::get((RainSnowRenderable *)((char *)this + 260)) % 10;
      v26 = v8 - (int)Ogre::RandomGenerator::get((RainSnowRenderable *)((char *)this + 260)) % 10;
      v9 = BlockDivSection(v25);
      v33 = BlockDivSection(v26);
      result = World::getChunk(v24, v9, v33);
      v10 = (Chunk *)result;
      if ( result != 0 )
      {
        v28 = v25 - *(_DWORD *)(result + 276);
        v29 = v26 - *(_DWORD *)(result + 284);
        PrecipitationHeight = Chunk::getPrecipitationHeight((Chunk *)result, v28, v29);
        result = World::getBiomeGen((World *)v24, v25, v26);
        v11 = *(_DWORD *)(result + 4);
        v21 = *(unsigned __int8 *)(v11 + 64);
        if ( *(_BYTE *)(v11 + 65) != 0 )
        {
          if ( v5 <= 63 )
            v12 = *(float *)(v11 + 44);
          else
            v12 = *(float *)(v11 + 44) - (float)((float)(v5 - 63) / 100.0);
          result = -(v12 >= 0.2);
          v21 &= result;
        }
        if ( PrecipitationHeight >= v5 - 10 && PrecipitationHeight <= v5 + 10 && v21 != 0 )
        {
          v22 = Ogre::RandomGenerator::get(v6);
          v13 = Ogre::RandomGenerator::get(v6);
          result = Chunk::getBlock(v10, v28, PrecipitationHeight - 1, v29);
          if ( (*(_WORD *)result & 0xFFF) != 0 && (*(_WORD *)result & 0xFFFu) - 5 > 1 )
          {
            ++v19;
            v14 = Ogre::RandomGenerator::get(v6);
            v15 = v14 % v19;
            result = v14 / v19;
            if ( v15 == 0 )
            {
              v35 = 100 * PrecipitationHeight;
              v34 = 100 * v25 + v22 % 101;
              result = v13 / 101;
              v36 = 100 * v26 + v13 % 101;
            }
          }
        }
      }
      ++v23;
    }
    if ( v19 != 0 )
    {
      v16 = Ogre::RandomGenerator::get((RainSnowRenderable *)((char *)this + 260));
      v17 = *((_DWORD *)this + 76);
      v18 = v16 % 3;
      result = v16 / 3;
      if ( v18 < v17 )
      {
        *((_DWORD *)this + 76) = 0;
        if ( v35 <= 100 * (v5 + 1) || World::getPrecipitationHeight((World *)v24, v30, v31) <= v5 )
          return EffectManager::playSound(
                   (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton,
                   (const WCoord *)&v34,
                   "ambient.weather.rain",
                   1.0,
                   0.2,
                   false);
        else
          return EffectManager::playSound(
                   (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton,
                   (const WCoord *)&v34,
                   "ambient.weather.rain",
                   0.5,
                   0.1,
                   false);
      }
      else
      {
        *((_DWORD *)this + 76) = v17 + 1;
      }
    }
  }
  return result;
}


//======================================================================
// RainSnowRenderable::update(unsigned int)
// address: 0x00268174   size: 0x66 (102 bytes)
//======================================================================
__int64 __fastcall RainSnowRenderable::update(RainSnowRenderable *this, unsigned int a2)
{
  int *v4; // r6
  unsigned int v5; // r5
  __int64 v7; // [sp+0h] [bp-Ch]

  Ogre::MovableObject::update((int)this, a2);
  Ogre::MovableObject::updateWorldCache(this);
  v4 = *(int **)(g_pPlayerCtrl + 68);
  *(float *)&v7 = (float)v4[9];
  *((float *)&v7 + 1) = (float)v4[10];
  *((float *)this + 35) = (float)v4[8];
  *((_QWORD *)this + 18) = v7;
  v5 = *((_DWORD *)this + 74);
  *((_DWORD *)this + 75) = v5;
  *((_DWORD *)this + 74) = a2 + v5;
  if ( (a2 + v5) / 0x32 != v5 / 0x32 )
    RainSnowRenderable::addRainParticle(this);
  return v7;
}


//======================================================================
// RainSnowRenderable::createContext(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&,ParticleVertex *,unsigned int,Ogre::Material *)
// address: 0x002681E0   size: 0x78 (120 bytes)
//======================================================================
int __fastcall RainSnowRenderable::createContext(
        int a1,
        Ogre::DynamicBufferPool **this,
        _DWORD *a3,
        const void *a4,
        unsigned int a5,
        Ogre::Material *a6)
{
  Ogre::DynamicVertexBuffer *v8; // r7
  void *v9; // r0
  Ogre::ShaderContext *v10; // r0

  v8 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                      this,
                                      *(const Ogre::VertexFormat **)(Ogre::Singleton<ParticleManager>::ms_Singleton + 4),
                                      a5);
  v9 = (void *)Ogre::DynamicVertexBuffer::lock(v8);
  j_memcpy(v9, a4, 24 * a5);
  v10 = Ogre::SceneRenderer::newContext(
          (int)this,
          *(_DWORD *)(a1 + 236),
          a3,
          a6,
          *(_DWORD *)Ogre::Singleton<ParticleManager>::ms_Singleton,
          v8,
          nullptr,
          4,
          a5 / 3,
          1);
  *((_DWORD *)v10 + 5) = 0;
  return Ogre::ShaderContext::addValueParam((int)v10, 2, a3 + 271, 7, 1);
}


//======================================================================
// RainSnowRenderable::initRainCoords(void)
// address: 0x00268260   size: 0xBA (186 bytes)
//======================================================================
float __fastcall RainSnowRenderable::initRainCoords(RainSnowRenderable *this)
{
  int i; // r7
  int v2; // r6
  float v3; // r4
  float v4; // r0
  float v5; // r5
  float result; // r0
  int v7; // [sp+4h] [bp-20h]
  float v8; // [sp+8h] [bp-1Ch]

  for ( i = -16; i != 16; ++i )
  {
    v2 = 0;
    do
    {
      v3 = (float)(v2 - 16);
      v4 = j_sqrt((float)((float)((float)i * (float)i) + (float)(v3 * v3)));
      v5 = v4;
      if ( v4 == 0.0 )
      {
        v5 = 1.4142;
        v3 = 1.0;
        v8 = 1.0;
      }
      else
      {
        v8 = (float)i;
      }
      v7 = v2++ << 7;
      *(float *)((char *)&flt_512038[i] + v7) = v3 / v5;
      result = COERCE_FLOAT(LODWORD(v8) + 0x80000000) / v5;
      *(float *)((char *)&flt_511038[i] + v7) = result;
    }
    while ( v2 != 32 );
  }
  RainSnowRenderable::m_RainCoordInit = 1;
  return result;
}


//======================================================================
// RainSnowRenderable::RainSnowRenderable(char const*,char const*)
// address: 0x0026832C   size: 0x1D0 (464 bytes)
//======================================================================
// Alternative name is '_ZN18RainSnowRenderableC1EPKcS1_'
void __fastcall RainSnowRenderable::RainSnowRenderable(
        RainSnowRenderable *this,
        Ogre::FixedString *a2,
        Ogre::FixedString *a3)
{
  Ogre::ResourceManager *v5; // r6
  int v6; // r2
  Ogre::Texture *v7; // r7
  void *v8; // r1
  int v9; // r2
  Ogre::Material *v10; // r6
  void *v11; // r1
  Ogre::Material *v12; // r6
  int v13; // r2
  void *v14; // r1
  int v15; // r2
  void *v16; // r1
  int v17; // r2
  Ogre::ResourceManager *v18; // r7
  void *v19; // r1
  int v20; // r2
  Ogre::Material *v21; // r7
  void *v22; // r1
  Ogre::Material *v23; // r7
  int v24; // r2
  void *v25; // r1
  Ogre::Material *v26; // r7
  int v27; // r2
  void *v28; // r1
  Ogre::BaseObject *v29; // [sp+0h] [bp-34h]
  Ogre::BaseObject *v30; // [sp+0h] [bp-34h]
  Ogre::FixedString *v32; // [sp+10h] [bp-24h] BYREF
  Ogre::FixedString *v33; // [sp+14h] [bp-20h] BYREF
  Ogre::FixedString *v34; // [sp+18h] [bp-1Ch] BYREF
  Ogre::FixedString *v35; // [sp+1Ch] [bp-18h] BYREF
  Ogre::FixedString *v36; // [sp+20h] [bp-14h] BYREF
  Ogre::FixedString *v37; // [sp+24h] [bp-10h] BYREF
  Ogre::FixedString *v38; // [sp+28h] [bp-Ch] BYREF
  Ogre::FixedString *v39[2]; // [sp+2Ch] [bp-8h] BYREF

  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_45BB20;
  Ogre::GaussGenerator::GaussGenerator((int)this + 260, 0);
  RainSnowRenderable::initRainCoords(this);
  v5 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v32, a2, v6);
  v7 = (Ogre::Texture *)Ogre::ResourceManager::blockLoad(v5, &v32, 0);
  Ogre::FixedString::~FixedString(&v32, v8);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v33, (Ogre::FixedString *)"particle", v9);
  v10 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v10, (const Ogre::FixedString *)&v33);
  *((_DWORD *)this + 63) = v10;
  Ogre::FixedString::~FixedString(&v33, v11);
  v12 = *((Ogre::Material **)this + 63);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v34, (Ogre::FixedString *)"BLEND_MODE", v13);
  v14 = (void *)(Ogre::Material::setParamMacro(v12, (const Ogre::FixedString *)&v34, 2u) >> 32);
  Ogre::FixedString::~FixedString(&v34, v14);
  v29 = *((Ogre::BaseObject **)this + 63);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v35, (Ogre::FixedString *)"g_DiffuseTex", v15);
  Ogre::Material::setParamTexture(v29, (const Ogre::FixedString *)&v35, v7, 1);
  Ogre::FixedString::~FixedString(&v35, v16);
  if ( v7 != nullptr )
    Ogre::BaseObject::release(v7);
  v18 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v36, a3, v17);
  v30 = (Ogre::BaseObject *)Ogre::ResourceManager::blockLoad(v18, &v36, 0);
  Ogre::FixedString::~FixedString(&v36, v19);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v37, (Ogre::FixedString *)"particle", v20);
  v21 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v21, (const Ogre::FixedString *)&v37);
  *((_DWORD *)this + 64) = v21;
  Ogre::FixedString::~FixedString(&v37, v22);
  v23 = *((Ogre::Material **)this + 64);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v38, (Ogre::FixedString *)"BLEND_MODE", v24);
  v25 = (void *)(Ogre::Material::setParamMacro(v23, (const Ogre::FixedString *)&v38, 2u) >> 32);
  Ogre::FixedString::~FixedString(&v38, v25);
  v26 = *((Ogre::Material **)this + 64);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v39, (Ogre::FixedString *)"g_DiffuseTex", v27);
  Ogre::Material::setParamTexture(v26, (const Ogre::FixedString *)v39, v30, 1);
  Ogre::FixedString::~FixedString(v39, v28);
  if ( v30 != nullptr )
    Ogre::BaseObject::release(v30);
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 1120403456;
  *((_DWORD *)this + 39) = 1120403456;
  *((_DWORD *)this + 40) = 1120403456;
  *((_DWORD *)this + 41) = 1127036032;
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 76) = 0;
}


//======================================================================
// RainSnowRenderable::collectMesh(int)
// address: 0x00268668   size: 0x712 (1810 bytes)
//======================================================================
int __fastcall RainSnowRenderable::collectMesh(RainSnowRenderable *this, int a2)
{
  _DWORD *v2; // r4
  unsigned int v3; // r5
  int result; // r0
  unsigned int v5; // r4
  int Chunk; // r0
  Chunk *v7; // r4
  int v8; // r7
  int v9; // r6
  int BiomeGen; // r0
  int v11; // r5
  int PrecipitationHeight; // r0
  int v13; // r5
  int v14; // r4
  int v15; // r7
  float v16; // r0
  int v17; // r4
  float v18; // r6
  float v19; // r0
  float v20; // r6
  float v21; // r0
  int v22; // r4
  int v23; // r3
  int v24; // r2
  float v25; // r6
  int v26; // r3
  float v27; // r7
  int v28; // r2
  float v29; // r5
  float v30; // r0
  int v31; // r3
  int v32; // r2
  int v33; // r2
  int v34; // r2
  float v35; // r5
  signed int v36; // r6
  float v37; // r7
  signed int v38; // r6
  float v39; // r6
  float v40; // r0
  float *v41; // r4
  int v42; // r3
  float *v43; // r2
  float v44; // r0
  float *v45; // r3
  float *v46; // r2
  float v47; // r6
  float v48; // r0
  float *v49; // r3
  float *v50; // r2
  float *v51; // r2
  float *v52; // r2
  unsigned int v53; // [sp+4h] [bp-90h]
  int v54; // [sp+8h] [bp-8Ch]
  float v55; // [sp+8h] [bp-8Ch]
  float v56; // [sp+8h] [bp-8Ch]
  int v57; // [sp+Ch] [bp-88h]
  int v58; // [sp+10h] [bp-84h]
  float v59; // [sp+10h] [bp-84h]
  float v60; // [sp+10h] [bp-84h]
  int v61; // [sp+14h] [bp-80h]
  float v62; // [sp+14h] [bp-80h]
  float v63; // [sp+18h] [bp-7Ch]
  float v64; // [sp+18h] [bp-7Ch]
  int i; // [sp+1Ch] [bp-78h]
  float v67; // [sp+24h] [bp-70h]
  float v68; // [sp+24h] [bp-70h]
  float v69; // [sp+28h] [bp-6Ch]
  float v70; // [sp+28h] [bp-6Ch]
  float v71; // [sp+2Ch] [bp-68h]
  float v72; // [sp+2Ch] [bp-68h]
  float v73; // [sp+30h] [bp-64h]
  float v74; // [sp+30h] [bp-64h]
  int v75; // [sp+34h] [bp-60h]
  int v76; // [sp+38h] [bp-5Ch]
  signed int v77; // [sp+3Ch] [bp-58h]
  float v79; // [sp+44h] [bp-50h]
  float v80; // [sp+48h] [bp-4Ch]
  Environment **v81; // [sp+4Ch] [bp-48h]
  signed int v82; // [sp+50h] [bp-44h]
  float v83; // [sp+54h] [bp-40h]
  unsigned int v84; // [sp+58h] [bp-3Ch]
  unsigned int v85; // [sp+5Ch] [bp-38h]
  int v86; // [sp+60h] [bp-34h]
  float v87; // [sp+64h] [bp-30h]
  int v88; // [sp+6Ch] [bp-28h]
  int v89; // [sp+70h] [bp-24h]
  int v90; // [sp+74h] [bp-20h]
  unsigned int v91; // [sp+8Ch] [bp-8h]

  v2 = *(_DWORD **)(g_pPlayerCtrl + 68);
  v81 = *(Environment ***)(g_pPlayerCtrl + 52);
  v86 = v2[10];
  v3 = *((_DWORD *)this + 74);
  v90 = v2[8];
  v84 = CoordDivBlock(v90);
  v77 = CoordDivBlock(v2[9]);
  v85 = CoordDivBlock(v86);
  v87 = COERCE_FLOAT(Environment::getRainStrength(v81[7]));
  std::vector<ParticleVertex>::resize(&dword_510FDC, 0);
  std::vector<ParticleVertex>::resize(&dword_510FE8, 0);
  result = v87 == 0.0;
  if ( v87 != 0.0 )
  {
    v82 = v3 / 0x32;
    v83 = (float)(v3 % 0x32) / 50.0;
    v57 = v85 - a2;
    v76 = 13761 * (v85 - a2);
    v88 = (v85 << 7) + 4 * v84;
    while ( 1 )
    {
      result = a2;
      if ( v57 > (int)(v85 + a2) )
        break;
      v89 = 418711 * v57 * v57;
      v75 = 45238971 * (v84 - a2);
      for ( i = v84 - a2; i <= (int)(v84 + a2); ++i )
      {
        v67 = *(float *)((char *)&flt_5127F8[32 * v57 + 16 + i] - v88);
        v69 = *(float *)((char *)&flt_5117F8[32 * v57 + 16 + i] - v88);
        v5 = BlockDivSection(i);
        v91 = BlockDivSection(v57);
        Chunk = World::getChunk(v81, v5, v91);
        v7 = (Chunk *)Chunk;
        if ( Chunk != 0 )
        {
          v8 = i - *(_DWORD *)(Chunk + 276);
          v9 = v57 - *(_DWORD *)(Chunk + 284);
          BiomeGen = World::getBiomeGen((World *)v81, i, v57);
          v11 = BiomeGen;
          if ( *(_BYTE *)(*(_DWORD *)(BiomeGen + 4) + 65) != 0 || *(_BYTE *)(*(_DWORD *)(BiomeGen + 4) + 64) != 0 )
          {
            PrecipitationHeight = Chunk::getPrecipitationHeight(v7, v8, v9);
            v13 = *(_DWORD *)(v11 + 4);
            v14 = PrecipitationHeight;
            v15 = *(unsigned __int8 *)(v13 + 64);
            v54 = *(unsigned __int8 *)(v13 + 65);
            if ( *(_BYTE *)(v13 + 65) != 0 )
            {
              if ( v77 <= 63 )
                v16 = *(float *)(v13 + 44);
              else
                v16 = *(float *)(v13 + 44) - (float)((float)(v77 - 63) / 100.0);
              v15 &= -(v16 >= 0.15);
            }
            v58 = v14;
            if ( v14 < v77 - a2 )
              v58 = v77 - a2;
            v61 = v14;
            if ( v14 < v77 + a2 )
              v61 = v77 + a2;
            if ( v58 != v61 )
            {
              v79 = v67 * 0.5;
              v80 = v69 * 0.5;
              v17 = 3121 * i * i;
              *((_DWORD *)this + 65) = (v17 + v75) ^ (v89 + v76);
              v68 = (float)i;
              v18 = (float)((float)i + 0.5) - (float)((float)v90 / 100.0);
              v70 = (float)v57;
              v19 = j_sqrt((float)((float)(v18 * v18)
                                 + (float)((float)((float)((float)v57 + 0.5) - (float)((float)v86 / 100.0))
                                         * (float)((float)((float)v57 + 0.5) - (float)((float)v86 / 100.0)))));
              v53 = ((unsigned int)(float)((float)((float)((float)((float)(1.0
                                                                         - (float)((float)(v19 / (float)a2)
                                                                                 * (float)(v19 / (float)a2)))
                                                                 * 0.5)
                                                         + 0.5)
                                                 * v87)
                                         * 255.0) << 24)
                  | 0xFFFFFF;
              if ( v15 != 0 )
              {
                v20 = (float)((float)((float)((v82 + v17 + v75 + v89 + v76) & 0x1F) + v83) * 0.03125)
                    * (float)((float)((float)(int)Ogre::RandomGenerator::get((RainSnowRenderable *)((char *)this + 260))
                                    * 0.000030519)
                            + 3.0);
                std::vector<ParticleVertex>::resize(
                  &dword_510FDC,
                  -1431655765 * ((dword_510FE0 - dword_510FDC) >> 3) + 6);
                v21 = (float)v58;
                v59 = (float)((float)v58 * 0.25) + v20;
                v55 = (float)((float)(v68 - v79) + 0.5) * 100.0;
                v63 = v21 * 100.0;
                v22 = dword_510FE0;
                v71 = (float)((float)(v70 - v80) + 0.5) * 100.0;
                v23 = dword_510FE0 - 144;
                *(float *)(v23 + 4) = v21 * 100.0;
                *(float *)(v23 + 8) = v71;
                *(float *)v23 = v55;
                v24 = v22 - 128;
                *(_DWORD *)v24 = 0;
                *(float *)(v24 + 4) = v59;
                *(_DWORD *)(v23 + 12) = v53;
                v25 = (float)((float)v61 * 0.25) + v20;
                v26 = v22 - 120;
                v27 = (float)v61 * 100.0;
                *(float *)(v26 + 8) = v71;
                *(float *)v26 = v55;
                v28 = v22 - 104;
                *(float *)(v26 + 4) = v27;
                *(_DWORD *)v28 = 0;
                *(float *)(v28 + 4) = v25;
                *(_DWORD *)(v26 + 12) = v53;
                v29 = (float)((float)(v68 + v79) + 0.5) * 100.0;
                v30 = (float)((float)(v70 + v80) + 0.5) * 100.0;
                v31 = v22 - 96;
                v32 = v22 - 80;
                *(float *)(v31 + 8) = v30;
                *(float *)v31 = v29;
                *(float *)(v31 + 4) = v27;
                *(_DWORD *)v32 = 1065353216;
                *(float *)(v32 + 4) = v25;
                *(_DWORD *)(v31 + 12) = v53;
                *(float *)(v31 + 24) = v55;
                *(float *)(v31 + 28) = v63;
                *(float *)(v31 + 32) = v71;
                v33 = v22 - 56;
                *(_DWORD *)v33 = 0;
                *(float *)(v33 + 4) = v59;
                *(_DWORD *)(v31 + 36) = v53;
                v34 = v22 - 32;
                *(float *)(v31 + 56) = v30;
                *(float *)(v31 + 48) = v29;
                *(float *)(v31 + 52) = v27;
                *(_DWORD *)v34 = 1065353216;
                *(float *)(v34 + 4) = v25;
                v22 -= 8;
                *(_DWORD *)(v31 + 60) = v53;
                *(float *)(v31 + 80) = v30;
                *(float *)(v31 + 76) = v63;
                *(float *)(v31 + 72) = v29;
                *(_DWORD *)v22 = 1065353216;
                *(float *)(v22 + 4) = v59;
                *(_DWORD *)(v31 + 84) = v53;
              }
              else if ( v54 != 0 )
              {
                v73 = (float)((float)(v82 & 0x1FF) + v83) * 0.0019531;
                v35 = (float)v82 + v83;
                v36 = Ogre::RandomGenerator::get((RainSnowRenderable *)((char *)this + 260));
                v37 = (float)((float)v36 * 0.000030519)
                    + (float)((float)(v35 * 0.01)
                            * COERCE_FLOAT(Ogre::GaussGenerator::randGauss((RainSnowRenderable *)((char *)this + 260))));
                v38 = Ogre::RandomGenerator::get((RainSnowRenderable *)((char *)this + 260));
                v39 = (float)((float)v38 * 0.000030519)
                    + (float)((float)(v35 * 0.001)
                            * COERCE_FLOAT(Ogre::GaussGenerator::randGauss((RainSnowRenderable *)((char *)this + 260))));
                std::vector<ParticleVertex>::resize(
                  &dword_510FE8,
                  -1431655765 * ((dword_510FEC - dword_510FE8) >> 3) + 6);
                v40 = (float)v58;
                v60 = (float)((float)((float)v58 * 0.25) + v73) + v39;
                v56 = (float)((float)(v68 - v79) + 0.5) * 100.0;
                v64 = v40 * 100.0;
                v41 = (float *)dword_510FEC;
                v72 = (float)((float)(v70 - v80) + 0.5) * 100.0;
                v42 = dword_510FEC - 144;
                *(float *)v42 = v56;
                *(float *)(v42 + 4) = v40 * 100.0;
                *(float *)(v42 + 8) = v72;
                v43 = v41 - 32;
                v43[1] = v60;
                *v43 = v37;
                *(_DWORD *)(v42 + 12) = v53;
                v44 = (float)v61;
                v62 = (float)((float)((float)v61 * 0.25) + v73) + v39;
                v45 = v41 - 30;
                *v45 = v56;
                v74 = v44 * 100.0;
                v45[1] = v44 * 100.0;
                v46 = v41 - 26;
                v45[2] = v72;
                v46[1] = v62;
                *v46 = v37;
                *((_DWORD *)v45 + 3) = v53;
                v47 = (float)((float)(v68 + v79) + 0.5) * 100.0;
                v48 = (float)((float)(v70 + v80) + 0.5) * 100.0;
                v49 = v41 - 24;
                v49[1] = v74;
                v50 = v41 - 20;
                v49[2] = v48;
                *v49 = v47;
                v50[1] = v62;
                *v50 = v37 + 1.0;
                v49[6] = v56;
                *((_DWORD *)v49 + 3) = v53;
                v49[8] = v72;
                v49[7] = v64;
                v51 = v41 - 14;
                v51[1] = v60;
                *v51 = v37;
                *((_DWORD *)v49 + 9) = v53;
                v52 = v41 - 8;
                v49[13] = v74;
                v49[14] = v48;
                v49[12] = v47;
                v52[1] = v62;
                *v52 = v37 + 1.0;
                v49[20] = v48;
                *((_DWORD *)v49 + 15) = v53;
                v41 -= 2;
                v49[18] = v47;
                v49[19] = v64;
                *v41 = v37 + 1.0;
                v41[1] = v60;
                *((_DWORD *)v49 + 21) = v53;
              }
            }
          }
        }
        v75 += 45238971;
      }
      ++v57;
      v76 += 13761;
    }
  }
  return result;
}


//======================================================================
// RainSnowRenderable::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x00268D94   size: 0x60 (96 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> RainSnowRenderable::render(
        Ogre::Material **this,
        Ogre::DynamicBufferPool **a2,
        const Ogre::ShaderEnvData *a3)
{
  RainSnowRenderable::collectMesh((RainSnowRenderable *)this, 5);
  if ( dword_510FDC != dword_510FE0 )
    RainSnowRenderable::createContext(
      (int)this,
      a2,
      a3,
      (const void *)dword_510FDC,
      -1431655765 * ((dword_510FE0 - dword_510FDC) >> 3),
      *(this + 63));
  if ( dword_510FE8 != dword_510FEC )
    RainSnowRenderable::createContext(
      (int)this,
      a2,
      a3,
      (const void *)dword_510FE8,
      -1431655765 * ((dword_510FEC - dword_510FE8) >> 3),
      *(this + 64));
}

