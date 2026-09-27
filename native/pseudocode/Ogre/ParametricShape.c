// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ParametricShape

//======================================================================
// Ogre::ParametricShape::getRTTI(void)const
// address: 0x001947A4   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::ParametricShape::getRTTI(Ogre::ParametricShape *this)
{
  return &Ogre::ParametricShape::m_RTTI;
}


//======================================================================
// Ogre::ParametricShape::getRenderPassRequired(Ogre::RenderPassDesc &)
// address: 0x001947B0   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::ParametricShape::getRenderPassRequired(int a1, _DWORD *a2)
{
  int result; // r0

  result = a1 + 252;
  if ( *(_BYTE *)(*(_DWORD *)result + 52) != 0 )
    *a2 |= 0x20u;
  return result;
}


//======================================================================
// Ogre::ParametricShape::resetUpdate(bool,unsigned int)
// address: 0x001947C8   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::ParametricShape::resetUpdate(int this, bool a2, unsigned int a3)
{
  *(_BYTE *)(this + 184) = a2;
  if ( a3 != -1 )
  {
    this += 252;
    *(_DWORD *)(this + 4) = a3;
  }
  return this;
}


//======================================================================
// Ogre::ParametricShape::~ParametricShape()
// address: 0x001947DC   size: 0x42 (66 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15ParametricShapeD1Ev'
void __fastcall Ogre::ParametricShape::~ParametricShape(Ogre::ParametricShape *this)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  v1 = (_DWORD *)((char *)this + 252);
  *(_DWORD *)this = &off_458530;
  v3 = *((_DWORD **)this + 63);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *v1 = 0;
  }
  v4 = (_DWORD *)v1[10];
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    v1[10] = 0;
  }
  Ogre::VertexFormat::~VertexFormat((void **)this + 67);
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// Ogre::ParametricShape::~ParametricShape()
// address: 0x00194824   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::ParametricShape::~ParametricShape(Ogre::ParametricShape *this)
{
  Ogre::ParametricShape::~ParametricShape(this);
  operator delete(this);
}


//======================================================================
// Ogre::ParametricShape::update(unsigned int)
// address: 0x00194838   size: 0xCC (204 bytes)
//======================================================================
__int64 __fastcall Ogre::ParametricShape::update(__int64 this)
{
  int *v2; // r4
  int v3; // r2
  int v4; // r3
  Ogre::Material *v5; // r6
  unsigned __int8 *v6; // r0
  int v7; // r3
  void *v8; // r1
  int v9; // r2
  int v10; // r3
  Ogre::Material *v11; // r6
  unsigned __int8 *v12; // r0
  int v13; // r3
  void *v14; // r1
  int v15; // r1
  int v16; // r2
  __int64 v18; // [sp+0h] [bp-8h] BYREF

  v18 = this;
  Ogre::MovableObject::update(this, HIDWORD(this));
  v2 = (int *)(this + 252);
  if ( *(_BYTE *)(this + 184) == 0 )
    *(_DWORD *)(this + 256) += HIDWORD(this);
  Ogre::ParamShapeData::prepareData(*v2, *(_DWORD *)(this + 256), this + 296);
  v4 = *(_DWORD *)(*v2 + 76);
  if ( *(_DWORD *)(this + 284) != v4 )
  {
    v5 = *(Ogre::Material **)(this + 292);
    v6 = Ogre::FixedString::insert((Ogre::FixedString *)"g_DiffuseTex", (const char *)0xFFFFFFFF, v3, v4);
    v7 = *v2;
    HIDWORD(v18) = v6;
    Ogre::Material::setParamTexture(v5, (const Ogre::FixedString *)((char *)&v18 + 4), *(Ogre::Texture **)(v7 + 76), 0);
    Ogre::FixedString::release(SHIDWORD(v18), v8);
    *(_DWORD *)(this + 284) = *(_DWORD *)(*v2 + 76);
  }
  v9 = *(_DWORD *)(this + 288);
  v10 = *(_DWORD *)(*v2 + 80);
  if ( v9 != v10 )
  {
    v11 = *(Ogre::Material **)(this + 292);
    v12 = Ogre::FixedString::insert((Ogre::FixedString *)"g_MaskTex", (const char *)0xFFFFFFFF, v9, v10);
    v13 = *v2;
    HIDWORD(v18) = v12;
    Ogre::Material::setParamTexture(
      v11,
      (const Ogre::FixedString *)((char *)&v18 + 4),
      *(Ogre::Texture **)(v13 + 80),
      0);
    Ogre::FixedString::release(SHIDWORD(v18), v14);
    *(_DWORD *)(this + 288) = *(_DWORD *)(*v2 + 80);
  }
  if ( *(_BYTE *)(this + 180) != 0 )
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)this + 68))(this);
  v15 = *(_DWORD *)(this + 100);
  v16 = *(_DWORD *)(this + 104);
  *(_DWORD *)(this + 140) = *(_DWORD *)(this + 96);
  *(_DWORD *)(this + 144) = v15;
  *(_DWORD *)(this + 148) = v16;
  *(_DWORD *)(this + 152) = 1128792064;
  *(_DWORD *)(this + 156) = 1128792064;
  *(_DWORD *)(this + 160) = 1128792064;
  *(float *)(this + 164) = Ogre::Vector3::length((Ogre::Vector3 *)(this + 152));
  return v18;
}


//======================================================================
// Ogre::ParametricShape::ParametricShape(Ogre::ParamShapeData *)
// address: 0x00194910   size: 0x14E (334 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15ParametricShapeC2EPNS_14ParamShapeDataE'
Ogre::ParametricShape *__fastcall Ogre::ParametricShape::ParametricShape(
        Ogre::ParametricShape *this,
        Ogre::ParamShapeData *a2)
{
  _DWORD *v4; // r3
  char *v5; // r5
  int v6; // r0
  _DWORD *v7; // r3
  Ogre::Material *ParticleMaterial; // r0
  int v10; // [sp+4h] [bp-8h]

  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_DWORD *)this + 53) = 0;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_458530;
  Ogre::VertexFormat::VertexFormat((_DWORD *)this + 67);
  v4 = (_DWORD *)((char *)this + 252);
  *((_DWORD *)this + 71) = 0;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 84) = 1065353216;
  *((_DWORD *)this + 85) = 1065353216;
  *((_DWORD *)this + 86) = 1065353216;
  *((_DWORD *)this + 87) = 1065353216;
  *((_DWORD *)this + 63) = a2;
  if ( *((int *)a2 + 14) > 32 )
    *((_DWORD *)a2 + 14) = 32;
  if ( *(int *)(*v4 + 60) > 32 )
    *(_DWORD *)(*v4 + 60) = 32;
  *((_BYTE *)this + 184) = 0;
  if ( *v4 != 0 )
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v4 + 4))(*v4);
  Ogre::VertexFormat::addElement((int *)this + 67, 2u, 1u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)this + 67, 4u, 5u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)this + 67, 1u, 7u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)this + 67, 1u, 7u, 1, 0, -1);
  v5 = (char *)this + 252;
  v6 = (*(int (__fastcall **)(int, char *))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 36))(
         Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
         (char *)this + 268);
  v7 = *((_DWORD **)this + 63);
  *((_DWORD *)this + 70) = v6;
  if ( v7 != nullptr )
  {
    *((_DWORD *)this + 71) = v7[19];
    *((_DWORD *)this + 72) = v7[20];
    if ( (int)v7[10] > 0 )
      v7[10] = 1;
    ParticleMaterial = Ogre::CreateParticleMaterial(
                         *(Ogre **)(*(_DWORD *)v5 + 24),
                         *(Ogre::Texture **)(*(_DWORD *)v5 + 76),
                         *(Ogre::Texture **)(*(_DWORD *)v5 + 80),
                         *(Ogre::Texture **)(*(_DWORD *)v5 + 40),
                         *(_DWORD *)(*(_DWORD *)v5 + 72),
                         v10);
    *((_DWORD *)this + 64) = 0;
    *((_DWORD *)this + 73) = ParticleMaterial;
    *((_DWORD *)this + 35) = 0;
    *((_DWORD *)this + 36) = 0;
    *((_DWORD *)this + 37) = 0;
    *((_DWORD *)this + 38) = 1120403456;
    *((_DWORD *)this + 39) = 1120403456;
    *((_DWORD *)this + 40) = 1120403456;
    *((float *)this + 41) = Ogre::Vector3::length((Ogre::ParametricShape *)((char *)this + 152));
    if ( *(_BYTE *)(*(_DWORD *)v5 + 52) != 0 )
      *((_DWORD *)this + 61) = 32;
    Ogre::ParametricShape::update((unsigned int)this);
  }
  return this;
}


//======================================================================
// Ogre::ParametricShape::newObject(void)
// address: 0x00194A6C   size: 0x16 (22 bytes)
//======================================================================
Ogre::ParametricShape *__fastcall Ogre::ParametricShape::newObject(Ogre::ParametricShape *this)
{
  Ogre::ParametricShape *v1; // r4

  v1 = (Ogre::ParametricShape *)operator new(0x194u);
  Ogre::ParametricShape::ParametricShape(v1, nullptr);
  return v1;
}


//======================================================================
// Ogre::ParametricShape::SetAABB(void)
// address: 0x00194A82   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::ParametricShape::SetAABB(Ogre::ParametricShape *this)
{
  ;
}


//======================================================================
// Ogre::ParametricShape::SetSphereRadius(float)
// address: 0x00194A84   size: 0x6 (6 bytes)
//======================================================================
float *__fastcall Ogre::ParametricShape::SetSphereRadius(Ogre::ParametricShape *this, float a2)
{
  float *result; // r0

  result = (float *)((char *)this + 252);
  result[11] = a2;
  return result;
}


//======================================================================
// Ogre::ParametricShape::SetTubeRadius(float,float,float)
// address: 0x00194A8A   size: 0xA (10 bytes)
//======================================================================
float *__fastcall Ogre::ParametricShape::SetTubeRadius(Ogre::ParametricShape *this, float a2, float a3, float a4)
{
  float *result; // r0

  result = (float *)((char *)this + 252);
  result[15] = a2;
  result[16] = a3;
  result[17] = a4;
  return result;
}


//======================================================================
// Ogre::ParametricShape::SetTorusRadius(float,float)
// address: 0x00194A94   size: 0x8 (8 bytes)
//======================================================================
float *__fastcall Ogre::ParametricShape::SetTorusRadius(Ogre::ParametricShape *this, float a2, float a3)
{
  float *result; // r0

  result = (float *)((char *)this + 252);
  result[13] = a2;
  result[14] = a3;
  return result;
}


//======================================================================
// Ogre::ParametricShape::SetTextureRes(Ogre::TextureData *)
// address: 0x00194A9C   size: 0x2A (42 bytes)
//======================================================================
__int64 __fastcall Ogre::ParametricShape::SetTextureRes(__int64 this, int a2, int a3)
{
  Ogre::Material *v3; // r5
  Ogre::Texture *v4; // r4
  void *v5; // r1
  __int64 v7; // [sp+0h] [bp-Ch] BYREF
  int v8; // [sp+8h] [bp-4h]

  v7 = this;
  v8 = a2;
  v3 = *(Ogre::Material **)(this + 292);
  v4 = (Ogre::Texture *)HIDWORD(this);
  HIDWORD(v7) = Ogre::FixedString::insert((Ogre::FixedString *)"g_DiffuseTex", (const char *)0xFFFFFFFF, a2, a3);
  Ogre::Material::setParamTexture(v3, (const Ogre::FixedString *)((char *)&v7 + 4), v4, 0);
  Ogre::FixedString::release(SHIDWORD(v7), v5);
  return v7;
}


//======================================================================
// Ogre::ParametricShape::SetBlendMode(int)
// address: 0x00194ACC   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::ParametricShape::SetBlendMode(Ogre::ParametricShape *this, int a2)
{
  ;
}


//======================================================================
// Ogre::ParametricShape::fillContext(Ogre::SceneRenderer *,Ogre::ShaderContext *,Ogre::PARAMSHAPE_TYPE,unsigned int,unsigned int)
// address: 0x00194C14   size: 0xBB6 (2998 bytes)
//======================================================================
_DWORD *__fastcall Ogre::ParametricShape::fillContext(
        int a1,
        Ogre::DynamicBufferPool **this,
        _DWORD *a3,
        int a4,
        int a5,
        int a6)
{
  int v7; // r5
  int v8; // r3
  int v9; // r4
  int v10; // r1
  double v11; // r4
  double v12; // r4
  int v13; // r0
  int v14; // r0
  int v15; // r6
  float v16; // r6
  int v17; // r1
  int v18; // r3
  double v19; // r4
  double v20; // r4
  int v21; // r0
  int v22; // r0
  int v23; // r6
  float v24; // r6
  float Transparent; // r0
  float *TransparentColor; // r4
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r1
  int v37; // r6
  float v38; // r7
  float v39; // r1
  float v40; // r4
  float v41; // r5
  float v42; // r1
  float v43; // r0
  float v44; // r1
  float v45; // r5
  float v46; // r1
  float v47; // r7
  float v48; // r1
  float v49; // r0
  float v50; // r4
  __int16 v51; // r0
  _WORD *v52; // r2
  __int16 v53; // r6
  int v54; // r5
  float v55; // r0
  float v56; // r1
  float v57; // r1
  float v58; // r0
  float v59; // r1
  float v60; // r0
  float v61; // r1
  float v62; // r0
  __int16 v63; // r0
  _WORD *v64; // r2
  __int16 v65; // r7
  int v66; // r6
  unsigned int v67; // r5
  float v68; // r4
  float v69; // r1
  float v70; // r4
  float v71; // r1
  float v72; // r0
  float v73; // r0
  _WORD *v74; // r2
  __int16 v75; // r1
  __int16 v76; // r5
  int v77; // r7
  float v78; // r1
  float v79; // r4
  float v80; // r1
  float v81; // r0
  __int16 v82; // r0
  _WORD *v83; // r2
  const Ogre::Vector4 *v84; // [sp+4h] [bp-90h]
  double v85; // [sp+10h] [bp-84h]
  double v86; // [sp+10h] [bp-84h]
  char v87; // [sp+10h] [bp-84h]
  int v88; // [sp+18h] [bp-7Ch]
  unsigned int v90; // [sp+1Ch] [bp-78h]
  float *v91; // [sp+1Ch] [bp-78h]
  unsigned int v92; // [sp+1Ch] [bp-78h]
  float *v93; // [sp+20h] [bp-74h]
  float v94; // [sp+20h] [bp-74h]
  float v95; // [sp+20h] [bp-74h]
  __int16 v96; // [sp+24h] [bp-70h]
  __int16 v97; // [sp+24h] [bp-70h]
  float v98; // [sp+24h] [bp-70h]
  __int16 v99; // [sp+24h] [bp-70h]
  unsigned int v100; // [sp+28h] [bp-6Ch]
  int i; // [sp+28h] [bp-6Ch]
  unsigned int v102; // [sp+28h] [bp-6Ch]
  int j; // [sp+28h] [bp-6Ch]
  unsigned int v104; // [sp+2Ch] [bp-68h]
  int k; // [sp+30h] [bp-64h]
  float *v106; // [sp+30h] [bp-64h]
  __int16 v107; // [sp+30h] [bp-64h]
  float *v108; // [sp+30h] [bp-64h]
  float v109; // [sp+34h] [bp-60h]
  int v110; // [sp+34h] [bp-60h]
  int v111; // [sp+34h] [bp-60h]
  int v112; // [sp+34h] [bp-60h]
  float *v114; // [sp+3Ch] [bp-58h]
  float *v115; // [sp+3Ch] [bp-58h]
  float *v116; // [sp+3Ch] [bp-58h]
  float *v117; // [sp+3Ch] [bp-58h]
  Ogre *v118; // [sp+40h] [bp-54h]
  float v119; // [sp+40h] [bp-54h]
  Ogre *v120; // [sp+40h] [bp-54h]
  __int16 v121; // [sp+44h] [bp-50h]
  int v122; // [sp+48h] [bp-4Ch]
  float v123; // [sp+48h] [bp-4Ch]
  float v124; // [sp+48h] [bp-4Ch]
  float v125; // [sp+48h] [bp-4Ch]
  float v126; // [sp+48h] [bp-4Ch]
  float v127; // [sp+4Ch] [bp-48h]
  float v128; // [sp+4Ch] [bp-48h]
  float v129; // [sp+4Ch] [bp-48h]
  char v130; // [sp+50h] [bp-44h]
  float v131; // [sp+54h] [bp-40h]
  Ogre *v132; // [sp+54h] [bp-40h]
  float v133; // [sp+54h] [bp-40h]
  Ogre *v134; // [sp+54h] [bp-40h]
  Ogre *v135; // [sp+58h] [bp-3Ch]
  Ogre *v136; // [sp+58h] [bp-3Ch]
  float v137; // [sp+58h] [bp-3Ch]
  float v138; // [sp+5Ch] [bp-38h]
  int v139; // [sp+5Ch] [bp-38h]
  float v140; // [sp+60h] [bp-34h]
  float v141; // [sp+60h] [bp-34h]
  float v142; // [sp+60h] [bp-34h]
  float v143; // [sp+64h] [bp-30h]
  float v144; // [sp+64h] [bp-30h]
  float v145; // [sp+64h] [bp-30h]
  int v146; // [sp+68h] [bp-2Ch]
  Ogre *v147; // [sp+6Ch] [bp-28h]
  char v148; // [sp+70h] [bp-24h]
  char v149; // [sp+74h] [bp-20h]
  Ogre::DynamicIndexBuffer *v150; // [sp+78h] [bp-1Ch]
  Ogre::DynamicVertexBuffer *v151; // [sp+7Ch] [bp-18h]
  float v153; // [sp+8Ch] [bp-8h]

  v7 = a1 + 252;
  v151 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                        this,
                                        (const Ogre::VertexFormat *)(a1 + 268),
                                        *(_DWORD *)(a1 + 264));
  v150 = (Ogre::DynamicIndexBuffer *)Ogre::SceneRenderer::newDynamicIB(this, *(_DWORD *)(v7 + 8));
  v88 = Ogre::DynamicVertexBuffer::lock(v151);
  v146 = Ogre::DynamicIndexBuffer::lock(v150);
  if ( (dword_4C6D50 & 1) == 0 && _cxa_guard_acquire(&dword_4C6D50) != 0 )
    _cxa_guard_release(&dword_4C6D50);
  if ( (dword_4C6D54 & 1) == 0 && _cxa_guard_acquire(&dword_4C6D54) != 0 )
    _cxa_guard_release(&dword_4C6D54);
  if ( (dword_4C6D58 & 1) == 0 && _cxa_guard_acquire(&dword_4C6D58) != 0 )
    _cxa_guard_release(&dword_4C6D58);
  if ( (dword_4C6D5C & 1) == 0 && _cxa_guard_acquire(&dword_4C6D5C) != 0 )
    _cxa_guard_release(&dword_4C6D5C);
  v8 = *(_DWORD *)(a1 + 356);
  v9 = *(_DWORD *)(a1 + 364);
  v10 = *(_DWORD *)(a1 + 368);
  dword_4C6D60 = *(_DWORD *)(a1 + 352);
  dword_4C6D64 = v8;
  dword_4C6D68 = v9;
  dword_4C6D6C = v10;
  v11 = (float)(*(float *)(a1 + 372) * 0.017453);
  v85 = j_sin(v11);
  v12 = j_cos(v11);
  *(float *)&v13 = v85;
  dword_4C6D70 = v13;
  *(float *)&v14 = v12;
  v15 = *(_DWORD *)(a1 + 252);
  HIDWORD(v12) = *(_DWORD *)(a1 + 396);
  LODWORD(v12) = *(_DWORD *)(v15 + 28);
  dword_4C6D74 = v14;
  v16 = (float)*(int *)(v15 + 32);
  *(float *)&dword_4C6D78 = (float)(SHIDWORD(v12) / SLODWORD(v12)) / (float)SLODWORD(v12);
  *(float *)&dword_4C6D7C = (float)(SHIDWORD(v12) % SLODWORD(v12)) / v16;
  *(float *)&dword_4C6D80 = (float)SLODWORD(v12);
  dword_4C6D84 = LODWORD(v16);
  if ( (dword_4C6D88 & 1) == 0 && _cxa_guard_acquire(&dword_4C6D88) != 0 )
    _cxa_guard_release(&dword_4C6D88);
  if ( (dword_4C6D8C & 1) == 0 && _cxa_guard_acquire(&dword_4C6D8C) != 0 )
    _cxa_guard_release(&dword_4C6D8C);
  if ( (dword_4C6D90 & 1) == 0 && _cxa_guard_acquire(&dword_4C6D90) != 0 )
    _cxa_guard_release(&dword_4C6D90);
  if ( (dword_4C6D94 & 1) == 0 && _cxa_guard_acquire(&dword_4C6D94) != 0 )
    _cxa_guard_release(&dword_4C6D94);
  if ( *(_DWORD *)(a1 + 288) != 0 )
  {
    v17 = *(_DWORD *)(a1 + 376);
    dword_4C6D9C = *(_DWORD *)(a1 + 380);
    v18 = *(_DWORD *)(a1 + 388);
    dword_4C6D98 = v17;
    dword_4C6DA4 = v18;
    dword_4C6DA0 = *(_DWORD *)(a1 + 384);
    v19 = (float)(*(float *)(a1 + 392) * 0.017453);
    v86 = j_sin(v19);
    v20 = j_cos(v19);
    *(float *)&v21 = v86;
    dword_4C6DA8 = v21;
    *(float *)&v22 = v20;
    v23 = *(_DWORD *)(a1 + 252);
    HIDWORD(v20) = *(_DWORD *)(a1 + 400);
    LODWORD(v20) = *(_DWORD *)(v23 + 64);
    dword_4C6DAC = v22;
    v24 = (float)*(int *)(v23 + 68);
    *(float *)&dword_4C6DB0 = (float)(SHIDWORD(v20) / SLODWORD(v20)) / (float)SLODWORD(v20);
    *(float *)&dword_4C6DB4 = (float)(SHIDWORD(v20) % SLODWORD(v20)) / v24;
    dword_4C6DBC = LODWORD(v24);
    *(float *)&dword_4C6DB8 = (float)SLODWORD(v20);
  }
  Transparent = Ogre::MovableObject::getTransparent((Ogre::MovableObject **)a1);
  TransparentColor = (float *)Ogre::GetTransparentColor(
                                (Ogre *)(a1 + 336),
                                Transparent,
                                *(float *)(*(_DWORD *)(a1 + 252) + 24),
                                *(_DWORD *)(a1 + 252));
  v27 = (int)(float)(*TransparentColor * 255.0);
  if ( v27 <= 255 )
    v28 = v27 & (~v27 >> 31);
  else
    LOBYTE(v28) = -1;
  v87 = v28;
  v29 = (int)(float)(TransparentColor[1] * 255.0);
  if ( v29 <= 255 )
    v30 = v29 & (~v29 >> 31);
  else
    LOBYTE(v30) = -1;
  v130 = v30;
  v31 = (int)(float)(TransparentColor[2] * 255.0);
  if ( v31 <= 255 )
    v32 = v31 & (~v31 >> 31);
  else
    LOBYTE(v32) = -1;
  v148 = v32;
  v33 = (int)(float)(TransparentColor[3] * 255.0);
  if ( v33 <= 255 )
    v34 = v33 & (~v33 >> 31);
  else
    LOBYTE(v34) = -1;
  v149 = v34;
  if ( a4 != 0 )
  {
    switch ( a4 )
    {
      case 1:
        if ( (dword_4C6DC0 & 1) == 0 && _cxa_guard_acquire(&dword_4C6DC0) != 0 )
          _cxa_guard_release(&dword_4C6DC0);
        v53 = 0;
        v90 = 0;
        v110 = 0;
        while ( v90 < a5 + 1 )
        {
          v54 = v88;
          v97 = v53 + a6 + 1;
          v106 = (float *)(v88 + 24);
          v115 = (float *)(v88 + 16);
          for ( i = 1; ; ++i )
          {
            v132 = (Ogre *)(i - 1);
            if ( i == a6 + 2 )
              break;
            v94 = (float)v90 * (float)(1.0 / (float)(unsigned int)a5);
            v123 = (float)(unsigned int)v132 * (float)(1.0 / (float)(unsigned int)a6);
            v55 = (float)((float)(v94 + v94) * 180.0) * (float)(*(float *)(a1 + 360) / 360.0);
            v56 = *(float *)(a1 + 304);
            dword_4C6DC8 = *(_DWORD *)(a1 + 308);
            dword_4C6DD0 = 0;
            dword_4C6DC4 = LODWORD(v56);
            dword_4C6DCC = 0;
            v136 = (Ogre *)LODWORD(v55);
            v127 = Ogre::fastCos((Ogre *)LODWORD(v55), v56);
            v143 = *(float *)&dword_4C6DC8;
            v140 = *(float *)&dword_4C6DC4;
            *(float *)&v118 = (float)(v123 * 180.0) + (float)(v123 * 180.0);
            v58 = v127 * (float)(v140 + (float)(v143 * Ogre::fastSin(v118, v57)));
            v144 = v58;
            v128 = *(float *)&dword_4C6DC8;
            v60 = v128 * Ogre::fastCos(v118, v59);
            v153 = v60;
            v137 = Ogre::fastSin(v136, v61);
            v129 = *(float *)&dword_4C6DC4;
            v141 = *(float *)&dword_4C6DC8;
            v62 = Ogre::fastSin(v118, *(float *)&dword_4C6DC8);
            *(float *)v54 = v144;
            *(float *)(v54 + 4) = v153;
            *(float *)(v54 + 8) = v137 * (float)(v129 + (float)(v141 * v62));
            *v115 = v94;
            v115[1] = v123;
            *v106 = v94;
            v106[1] = v123;
            *(_BYTE *)(v54 + 12) = v148;
            *(_BYTE *)(v54 + 13) = v130;
            *(_BYTE *)(v54 + 14) = v87;
            *(_BYTE *)(v54 + 15) = v149;
            Ogre::TransformUV(
              (Ogre *)(v54 + 16),
              (Ogre::Vector2 *)&dword_4C6D60,
              (const Ogre::Vector2 *)&dword_4C6D68,
              (const Ogre::Vector2 *)&dword_4C6D70,
              (const Ogre::Vector2 *)&dword_4C6D78,
              v84);
            if ( *(_DWORD *)(*(_DWORD *)(a1 + 252) + 80) != 0 )
              Ogre::TransformUV(
                (Ogre *)(v54 + 24),
                (Ogre::Vector2 *)&dword_4C6D98,
                (const Ogre::Vector2 *)&dword_4C6DA0,
                (const Ogre::Vector2 *)&dword_4C6DA8,
                (const Ogre::Vector2 *)&dword_4C6DB0,
                v84);
            if ( v90 != a5 && v132 != (Ogre *)a6 )
            {
              v63 = i + v53 - 1;
              *(_WORD *)(v146 + 2 * v110) = v63;
              v64 = (_WORD *)(v146 + 2 * v110);
              v64[1] = i + v53;
              v64[3] = v63;
              v64[2] = i + v97;
              v64[4] = i + v53 + a6;
              v110 += 6;
              v64[5] = i + v97;
            }
            v54 += 32;
            v115 += 8;
            v106 += 8;
          }
          v53 += a6 + 1;
          ++v90;
          v88 += 32 * (a6 + 1);
        }
        break;
      case 2:
        v102 = 2 * a6 + 1;
        v139 = 2 * a6 + 2;
        v133 = 1.0 / (float)(unsigned int)a6;
        v121 = 2 * (a6 + 1);
        v65 = v121;
        v104 = 0;
        v111 = 0;
        while ( v104 < a5 + 1 )
        {
          v66 = v88;
          v67 = 0;
          v91 = (float *)(v88 + 24);
          v107 = v65 - v121;
          v116 = (float *)(v88 + 16);
          while ( v67 != v139 )
          {
            v98 = (float)v104 * (float)(1.0 / (float)(unsigned int)a5);
            *(float *)&v147 = (float)((float)(v98 + v98) * 180.0) * (float)(*(float *)(a1 + 360) / 360.0);
            if ( v67 % v102 < a6 + 1 )
            {
              v124 = (float)(v67 % v102) * v133;
              v68 = 1.0;
            }
            else
            {
              v68 = 0.0;
              v124 = (float)(v102 - v67 % v102) * v133;
            }
            v70 = *(float *)(a1 + 312) + (float)((float)(*(float *)(a1 + 316) - *(float *)(a1 + 312)) * v68);
            v119 = v70 * Ogre::fastCos(v147, v69);
            v125 = v124 * *(float *)(a1 + 320);
            v72 = Ogre::fastSin(v147, v71);
            *(float *)v66 = v119;
            *(float *)(v66 + 4) = v125;
            *(float *)(v66 + 8) = v70 * v72;
            v73 = (float)v67 * (float)(1.0 / (float)(unsigned int)(2 * a6 + 1));
            *v116 = v98;
            v116[1] = v73;
            *v91 = v98;
            v91[1] = v73;
            *(_BYTE *)(v66 + 12) = v148;
            *(_BYTE *)(v66 + 13) = v130;
            *(_BYTE *)(v66 + 14) = v87;
            *(_BYTE *)(v66 + 15) = v149;
            Ogre::TransformUV(
              (Ogre *)(v66 + 16),
              (Ogre::Vector2 *)&dword_4C6D60,
              (const Ogre::Vector2 *)&dword_4C6D68,
              (const Ogre::Vector2 *)&dword_4C6D70,
              (const Ogre::Vector2 *)&dword_4C6D78,
              v84);
            if ( *(_DWORD *)(*(_DWORD *)(a1 + 252) + 80) != 0 )
              Ogre::TransformUV(
                (Ogre *)(v66 + 24),
                (Ogre::Vector2 *)&dword_4C6D98,
                (const Ogre::Vector2 *)&dword_4C6DA0,
                (const Ogre::Vector2 *)&dword_4C6DA8,
                (const Ogre::Vector2 *)&dword_4C6DB0,
                v84);
            if ( v104 != a5 && v67 != v102 )
            {
              *(_WORD *)(v146 + 2 * v111) = v67 + v107;
              v74 = (_WORD *)(v146 + 2 * v111);
              v74[1] = v67 + v107 + 1;
              v75 = v67 + v65 + 1;
              v74[2] = v75;
              v74[3] = v67 + v107;
              v74[4] = v67 + v65;
              v111 += 6;
              v74[5] = v75;
            }
            ++v67;
            v66 += 32;
            v116 += 8;
            v91 += 8;
          }
          ++v104;
          v88 += 32 * v139;
          v65 += v121;
        }
        break;
      case 3:
        v76 = 0;
        v92 = 0;
        v112 = 0;
        while ( v92 < a5 + 1 )
        {
          v77 = v88;
          v99 = v76 + a6 + 1;
          v117 = (float *)(v88 + 24);
          v108 = (float *)(v88 + 16);
          for ( j = 1; ; ++j )
          {
            v120 = (Ogre *)(j - 1);
            if ( j == a6 + 2 )
              break;
            v126 = (float)v92 * (float)(1.0 / (float)(unsigned int)a5);
            v95 = (float)(unsigned int)v120 * (float)(1.0 / (float)(unsigned int)a6);
            *(float *)&v134 = (float)(v126 * 360.0) * (float)(*(float *)(a1 + 360) / 360.0);
            v79 = *(float *)(a1 + 324) + (float)((float)(*(float *)(a1 + 328) - *(float *)(a1 + 324)) * v95);
            v142 = v79 * Ogre::fastCos(v134, v78);
            v145 = v95 * *(float *)(a1 + 332);
            v81 = Ogre::fastSin(v134, v80);
            *(float *)v77 = v142;
            *(float *)(v77 + 4) = v145;
            *(float *)(v77 + 8) = v79 * v81;
            *v108 = v126;
            v108[1] = v95;
            *v117 = v126;
            v117[1] = v95;
            *(_BYTE *)(v77 + 12) = v148;
            *(_BYTE *)(v77 + 13) = v130;
            *(_BYTE *)(v77 + 14) = v87;
            *(_BYTE *)(v77 + 15) = v149;
            Ogre::TransformUV(
              (Ogre *)(v77 + 16),
              (Ogre::Vector2 *)&dword_4C6D60,
              (const Ogre::Vector2 *)&dword_4C6D68,
              (const Ogre::Vector2 *)&dword_4C6D70,
              (const Ogre::Vector2 *)&dword_4C6D78,
              v84);
            if ( *(_DWORD *)(*(_DWORD *)(a1 + 252) + 80) != 0 )
              Ogre::TransformUV(
                (Ogre *)(v77 + 24),
                (Ogre::Vector2 *)&dword_4C6D98,
                (const Ogre::Vector2 *)&dword_4C6DA0,
                (const Ogre::Vector2 *)&dword_4C6DA8,
                (const Ogre::Vector2 *)&dword_4C6DB0,
                v84);
            if ( v92 != a5 && v120 != (Ogre *)a6 )
            {
              v82 = j + v76 - 1;
              *(_WORD *)(v146 + 2 * v112) = v82;
              v83 = (_WORD *)(v146 + 2 * v112);
              v83[1] = j + v76;
              v83[3] = v82;
              v83[2] = j + v99;
              v83[4] = j + v76 + a6;
              v112 += 6;
              v83[5] = j + v99;
            }
            v77 += 32;
            v108 += 8;
            v117 += 8;
          }
          v76 += a6 + 1;
          ++v92;
          v88 += 32 * (a6 + 1);
        }
        break;
      default:
        break;
    }
  }
  else
  {
    v100 = 0;
    v122 = 0;
    while ( v100 < a5 + 1 )
    {
      v37 = v88;
      v96 = a4 + a6 + 1;
      v114 = (float *)(v88 + 24);
      v93 = (float *)(v88 + 16);
      for ( k = 1; ; ++k )
      {
        v135 = (Ogre *)(k - 1);
        if ( k == a6 + 2 )
          break;
        v109 = (float)v100 * (float)(1.0 / (float)(unsigned int)a5);
        v131 = (float)(unsigned int)v135 * (float)(1.0 / (float)(unsigned int)a6);
        v38 = (float)((float)(v109 + v109) * 180.0) * (float)(*(float *)(a1 + 360) / 360.0);
        v40 = (float)(v131 * 180.0) * (float)(*(float *)(a1 + 300) / 180.0);
        v41 = Ogre::fastCos((Ogre *)LODWORD(v38), v39);
        v43 = v41 * Ogre::fastSin((Ogre *)LODWORD(v40), v42);
        v138 = v43;
        v45 = Ogre::fastCos((Ogre *)LODWORD(v40), v44);
        v47 = Ogre::fastSin((Ogre *)LODWORD(v38), v46);
        v49 = v47 * Ogre::fastSin((Ogre *)LODWORD(v40), v48);
        *(float *)(v37 + 8) = v49;
        *(float *)v37 = v138;
        *(float *)(v37 + 4) = v45;
        v50 = *(float *)(a1 + 296);
        *(float *)v37 = v138 * v50;
        *(float *)(v37 + 4) = v45 * v50;
        *(float *)(v37 + 8) = v49 * v50;
        *v93 = v109;
        v93[1] = v131;
        *v114 = v109;
        v114[1] = v131;
        *(_BYTE *)(v37 + 12) = v148;
        *(_BYTE *)(v37 + 13) = v130;
        *(_BYTE *)(v37 + 14) = v87;
        *(_BYTE *)(v37 + 15) = v149;
        Ogre::TransformUV(
          (Ogre *)(v37 + 16),
          (Ogre::Vector2 *)&dword_4C6D60,
          (const Ogre::Vector2 *)&dword_4C6D68,
          (const Ogre::Vector2 *)&dword_4C6D70,
          (const Ogre::Vector2 *)&dword_4C6D78,
          v84);
        if ( *(_DWORD *)(*(_DWORD *)(a1 + 252) + 80) != 0 )
          Ogre::TransformUV(
            (Ogre *)(v37 + 24),
            (Ogre::Vector2 *)&dword_4C6D98,
            (const Ogre::Vector2 *)&dword_4C6DA0,
            (const Ogre::Vector2 *)&dword_4C6DA8,
            (const Ogre::Vector2 *)&dword_4C6DB0,
            v84);
        if ( v100 != a5 && v135 != (Ogre *)a6 )
        {
          v51 = k + a4 - 1;
          *(_WORD *)(v146 + 2 * v122) = v51;
          v52 = (_WORD *)(v146 + 2 * v122);
          v52[3] = v51;
          v52[1] = k + a4;
          v52[2] = k + v96;
          v52[4] = k + a4 + a6;
          v122 += 6;
          v52[5] = k + v96;
        }
        v37 += 32;
        v93 += 8;
        v114 += 8;
      }
      ++v100;
      v88 += 32 * (a6 + 1);
      LOWORD(a4) = a4 + a6 + 1;
    }
  }
  v35 = *(_DWORD *)(a1 + 264);
  *((_DWORD *)v150 + 4) = 0;
  *((_DWORD *)v150 + 5) = v35;
  Ogre::ShaderContext::setIB((int)a3, v150);
  return Ogre::ShaderContext::setVB(a3, (int)v151);
}


//======================================================================
// Ogre::ParametricShape::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x001957DC   size: 0xB2 (178 bytes)
//======================================================================
int __fastcall Ogre::ParametricShape::render(
        Ogre::ParametricShape *this,
        Ogre::DynamicBufferPool **a2,
        const Ogre::ShaderEnvData *a3)
{
  _DWORD *v3; // r4
  _DWORD *v4; // r3
  unsigned int v5; // r2
  int v8; // r7
  int v9; // r1
  int v10; // r0
  unsigned int v11; // r2
  int v12; // r1
  int v13; // r7
  int v14; // r3
  int v15; // r1
  Ogre::Material *v16; // r7
  Ogre::ShaderContext *v17; // r7

  v3 = (_DWORD *)((char *)this + 252);
  v4 = *((_DWORD **)this + 63);
  v5 = v4[5];
  v8 = v4[14];
  v9 = v4[15];
  if ( v5 <= 1 || v5 == 3 )
  {
    v10 = 6 * v9 * v8;
  }
  else
  {
    v10 = 0;
    if ( v5 == 2 )
      v10 = (2 * v9 + 1) * 6 * v8;
  }
  v3[2] = v10;
  v11 = v4[5];
  v12 = v4[14];
  v13 = v4[15];
  if ( v11 <= 1 || v11 == 3 )
  {
    v14 = (v12 + 1) * (v13 + 1);
  }
  else
  {
    v14 = 0;
    if ( v11 == 2 )
      v14 = 2 * (v13 + 1) * (v12 + 1);
  }
  v15 = v3[7];
  v16 = (Ogre::Material *)v3[10];
  v3[3] = v14;
  v17 = Ogre::SceneRenderer::newContext((int)a2, 2, a3, v16, v15, nullptr, nullptr, 4, v10 / 3, 1);
  Ogre::ParametricShape::fillContext(
    (int)this,
    a2,
    v17,
    *(_DWORD *)(*v3 + 20),
    *(_DWORD *)(*v3 + 56),
    *(_DWORD *)(*v3 + 60));
  return Ogre::ShaderContext::setInstanceEnvData(v17, (Ogre::SceneRenderer *)a2, this, a3, nullptr);
}

