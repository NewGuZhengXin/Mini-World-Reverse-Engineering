// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLMaterialManager

//======================================================================
// Ogre::OGLMaterialManager::onResetDevice(void)
// address: 0x0025E7A4   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::OGLMaterialManager::onResetDevice(Ogre::CompiledShaderGroup **this)
{
  return Ogre::MaterialManager::onResetDevice(this);
}


//======================================================================
// Ogre::OGLMaterialManager::newCompiledShader(Ogre::COMPILED_TYPE)
// address: 0x0025E7AC   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Ogre::OGLMaterialManager::newCompiledShader(int a1, int a2)
{
  int v3; // r4

  v3 = operator new(0x54u);
  Ogre::OGLCompiledShader::OGLCompiledShader(v3, a2);
  return v3;
}


//======================================================================
// Ogre::OGLMaterialManager::newShaderTechImpl(Ogre::TechPassData *)
// address: 0x0025E7C2   size: 0x18 (24 bytes)
//======================================================================
Ogre::OGLShaderTechImpl *__fastcall Ogre::OGLMaterialManager::newShaderTechImpl(
        Ogre::OGLMaterialManager *this,
        Ogre::TechPassData *a2)
{
  Ogre::OGLShaderTechImpl *v3; // r4

  v3 = (Ogre::OGLShaderTechImpl *)operator new(0x100u);
  Ogre::OGLShaderTechImpl::OGLShaderTechImpl(v3, a2);
  return v3;
}


//======================================================================
// Ogre::OGLMaterialManager::OGLMaterialManager(Ogre::OGLRenderSystem *)
// address: 0x0025E7F4   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18OGLMaterialManagerC1EPNS_15OGLRenderSystemE'
Ogre::OGLMaterialManager *__fastcall Ogre::OGLMaterialManager::OGLMaterialManager(
        Ogre::OGLMaterialManager *this,
        Ogre::OGLRenderSystem *a2)
{
  Ogre::MaterialManager::MaterialManager(this);
  *((_DWORD *)this + 16) = a2;
  *(_DWORD *)this = &off_459F68;
  j_memset((char *)this + 72, 0, 0x10u);
  *((_DWORD *)this + 20) = (char *)this + 72;
  *((_DWORD *)this + 21) = (char *)this + 72;
  *((_DWORD *)this + 22) = 0;
  Ogre::OGLMaterialManager::createAllShaderTech(this);
  return this;
}


//======================================================================
// Ogre::OGLMaterialManager::clearPrograms(void)
// address: 0x0025E850   size: 0x40 (64 bytes)
//======================================================================
void __fastcall Ogre::OGLMaterialManager::clearPrograms(Ogre::OGLMaterialManager *this)
{
  _DWORD *i; // r5
  _DWORD *v3; // r0
  int v4; // r3

  for ( i = *((_DWORD **)this + 20); i != (_DWORD *)((char *)this + 72); i = (_DWORD *)sub_391DDC(i) )
  {
    v3 = (_DWORD *)i[6];
    v4 = v3[1] - 1;
    v3[1] = v4;
    if ( v4 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v3 + 24))(v3);
  }
  std::_Rb_tree<Ogre::ShaderProgKey,std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>,std::_Select1st<std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>>,std::less<Ogre::ShaderProgKey>,std::allocator<std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>>>::_M_erase(
    (int)this + 68,
    *((_DWORD **)this + 19));
  *((_DWORD *)this + 20) = i;
  *((_DWORD *)this + 21) = i;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 22) = 0;
}


//======================================================================
// Ogre::OGLMaterialManager::onLostDevice(void)
// address: 0x0025E890   size: 0x10 (16 bytes)
//======================================================================
void __fastcall Ogre::OGLMaterialManager::onLostDevice(Ogre::OGLMaterialManager *this)
{
  Ogre::MaterialManager::onLostDevice(this);
  Ogre::OGLMaterialManager::clearPrograms(this);
}


//======================================================================
// Ogre::OGLMaterialManager::~OGLMaterialManager()
// address: 0x0025E8A0   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18OGLMaterialManagerD1Ev'
void __fastcall Ogre::OGLMaterialManager::~OGLMaterialManager(Ogre::OGLMaterialManager *this)
{
  *(_DWORD *)this = &off_459F68;
  Ogre::OGLMaterialManager::clearPrograms(this);
  std::_Rb_tree<Ogre::ShaderProgKey,std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>,std::_Select1st<std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>>,std::less<Ogre::ShaderProgKey>,std::allocator<std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>>>::_M_erase(
    (int)this + 68,
    *((_DWORD **)this + 19));
  Ogre::MaterialManager::~MaterialManager(this);
}


//======================================================================
// Ogre::OGLMaterialManager::~OGLMaterialManager()
// address: 0x0025E8CC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLMaterialManager::~OGLMaterialManager(Ogre::OGLMaterialManager *this)
{
  Ogre::OGLMaterialManager::~OGLMaterialManager(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLMaterialManager::getShaderProgram(Ogre::OGLCompiledShader *,Ogre::OGLCompiledShader *)
// address: 0x0025E944   size: 0x1C8 (456 bytes)
//======================================================================
Ogre::OGLShaderProgram *__fastcall Ogre::OGLMaterialManager::getShaderProgram(
        Ogre::OGLMaterialManager *this,
        Ogre::OGLCompiledShader *a2,
        Ogre::OGLCompiledShader *a3)
{
  _DWORD *v3; // r4
  char *v5; // r6
  _DWORD *v6; // r3
  char *v8; // r6
  char *v9; // r4
  char *v10; // r3
  int v11; // r5
  int v12; // r5
  _BOOL4 v13; // r5
  char *v14; // r0
  Ogre::OGLCompiledShader *v15; // r2
  Ogre::OGLCompiledShader *v18; // [sp+4h] [bp-30h]
  char *v19; // [sp+8h] [bp-2Ch]
  Ogre::OGLShaderProgram *v20; // [sp+Ch] [bp-28h]
  Ogre::OGLCompiledShader *v21; // [sp+14h] [bp-20h] BYREF
  Ogre::OGLCompiledShader *v22; // [sp+18h] [bp-1Ch]
  char *v23; // [sp+1Ch] [bp-18h] BYREF
  char *v24; // [sp+20h] [bp-14h]
  Ogre::OGLCompiledShader *v25; // [sp+24h] [bp-10h] BYREF
  Ogre::OGLCompiledShader *v26; // [sp+28h] [bp-Ch]
  int v27; // [sp+2Ch] [bp-8h]

  v22 = a3;
  v3 = *((_DWORD **)this + 19);
  v21 = a2;
  v19 = (char *)this + 72;
  v5 = (char *)this + 72;
  while ( v3 != nullptr )
  {
    if ( Ogre::operator<(v3 + 4, (unsigned int *)&v21) )
    {
      v6 = (_DWORD *)v3[3];
      v3 = v5;
    }
    else
    {
      v6 = (_DWORD *)v3[2];
    }
    v5 = (char *)v3;
    v3 = v6;
  }
  if ( v5 != v19 && !Ogre::operator<((unsigned int *)&v21, (unsigned int *)v5 + 4) )
    return *((Ogre::OGLShaderProgram **)v5 + 6);
  v20 = (Ogre::OGLShaderProgram *)operator new(0x104u);
  Ogre::OGLShaderProgram::OGLShaderProgram(v20);
  Ogre::OGLShaderProgram::init(v20, a2, a3);
  v8 = *((char **)this + 19);
  v9 = v19;
  while ( v8 != nullptr )
  {
    if ( Ogre::operator<((unsigned int *)v8 + 4, (unsigned int *)&v21) )
    {
      v10 = *((char **)v8 + 3);
      v8 = v9;
    }
    else
    {
      v10 = *((char **)v8 + 2);
    }
    v9 = v8;
    v8 = v10;
  }
  if ( v9 == v19 || Ogre::operator<((unsigned int *)&v21, (unsigned int *)v9 + 4) )
  {
    v25 = v21;
    v27 = 0;
    v26 = v22;
    v18 = (Ogre::OGLMaterialManager *)((char *)this + 68);
    if ( v9 == v19 )
    {
      if ( *((_DWORD *)this + 22) != 0 )
      {
        v9 = *((char **)this + 21);
        if ( Ogre::operator<((unsigned int *)v9 + 4, (unsigned int *)&v25) )
        {
          if ( v9 == nullptr )
            goto LABEL_21;
          goto LABEL_38;
        }
      }
      goto LABEL_45;
    }
    if ( !Ogre::operator<((unsigned int *)&v25, (unsigned int *)v9 + 4) )
    {
      if ( !Ogre::operator<((unsigned int *)v9 + 4, (unsigned int *)&v25) )
        goto LABEL_21;
      if ( v9 == *((char **)this + 21) )
      {
LABEL_36:
        if ( v9 == nullptr )
        {
LABEL_44:
          v9 = v8;
          goto LABEL_21;
        }
        v13 = true;
        if ( v8 != nullptr )
        {
LABEL_41:
          v14 = (char *)operator new(0x1Cu);
          v8 = v14;
          if ( v14 != (char *)-16 )
          {
            *((_DWORD *)v14 + 4) = v25;
            v15 = v26;
            *((_DWORD *)v14 + 6) = v27;
            *((_DWORD *)v14 + 5) = v15;
          }
          sub_391E64(v13, v14, v9, v19);
          ++*((_DWORD *)this + 22);
          goto LABEL_44;
        }
LABEL_38:
        v13 = v9 == v19 || Ogre::operator<((unsigned int *)&v25, (unsigned int *)v9 + 4);
        goto LABEL_41;
      }
      v12 = sub_391DDC(v9);
      if ( Ogre::operator<((unsigned int *)&v25, (unsigned int *)(v12 + 16)) )
      {
        if ( *((_DWORD *)v9 + 3) != 0 )
        {
          v9 = (char *)v12;
          v8 = (char *)v12;
        }
        goto LABEL_36;
      }
LABEL_45:
      std::_Rb_tree<Ogre::ShaderProgKey,std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>,std::_Select1st<std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>>,std::less<Ogre::ShaderProgKey>,std::allocator<std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>>>::_M_get_insert_unique_pos(
        (int *)&v23,
        (int)v18,
        (unsigned int *)&v25);
      v8 = v23;
      v9 = v24;
      goto LABEL_36;
    }
    if ( v9 != *((char **)this + 20) )
    {
      v11 = sub_391E44(v9);
      if ( !Ogre::operator<((unsigned int *)(v11 + 16), (unsigned int *)&v25) )
      {
        std::_Rb_tree<Ogre::ShaderProgKey,std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>,std::_Select1st<std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>>,std::less<Ogre::ShaderProgKey>,std::allocator<std::pair<Ogre::ShaderProgKey const,Ogre::OGLShaderProgram *>>>::_M_get_insert_unique_pos(
          (int *)&v23,
          (int)v18,
          (unsigned int *)&v25);
        v9 = v23;
        v11 = (int)v24;
        goto LABEL_31;
      }
      if ( *(_DWORD *)(v11 + 12) == 0 )
      {
        v9 = *(char **)(v11 + 12);
LABEL_31:
        v8 = v9;
        v9 = (char *)v11;
        goto LABEL_36;
      }
    }
    v11 = (int)v9;
    goto LABEL_31;
  }
LABEL_21:
  *((_DWORD *)v9 + 6) = v20;
  return v20;
}


//======================================================================
// Ogre::OGLMaterialManager::createAllShaderTech(void)
// address: 0x00263918   size: 0x9C6 (2502 bytes)
//======================================================================
void __fastcall Ogre::OGLMaterialManager::createAllShaderTech(Ogre::OGLMaterialManager *this, int a2, int a3)
{
  Ogre::TechPassData *v4; // r7
  void *v5; // r1
  int v6; // r2
  Ogre::TechPassData *v7; // r7
  void *v8; // r1
  int v9; // r2
  Ogre::TechPassData *v10; // r7
  void *v11; // r1
  int v12; // r2
  Ogre::TechPassData *v13; // r7
  void *v14; // r1
  int v15; // r2
  Ogre::Tech_block_lod0 *v16; // r7
  void *v17; // r1
  int v18; // r2
  Ogre::Tech_block_uvanim_lod0 *v19; // r7
  Ogre::FixedString *v20; // r1
  Ogre::FixedString *v21; // r2
  void *v22; // r1
  int v23; // r2
  Ogre::Tech_block_shadowgen *v24; // r7
  Ogre::FixedString *v25; // r1
  void *v26; // r1
  int v27; // r2
  Ogre::TechPassData *v28; // r7
  void *v29; // r1
  int v30; // r2
  Ogre::Tech_blockitem_lod0 *v31; // r7
  Ogre::FixedString *v32; // r1
  void *v33; // r1
  int v34; // r2
  Ogre::TechPassData *v35; // r7
  void *v36; // r1
  int v37; // r2
  Ogre::Tech_Back0_lod0 *v38; // r7
  Ogre::FixedString *v39; // r1
  void *v40; // r1
  int v41; // r2
  Ogre::TechPassData *v42; // r7
  void *v43; // r1
  int v44; // r2
  Ogre::Tech_stdmtl_lod0 *v45; // r7
  void *v46; // r1
  int v47; // r2
  Ogre::TechPassData *v48; // r7
  void *v49; // r1
  int v50; // r2
  Ogre::TechPassData *v51; // r7
  void *v52; // r1
  int v53; // r2
  Ogre::TechPassData *v54; // r7
  void *v55; // r1
  int v56; // r2
  Ogre::TechPassData *v57; // r7
  void *v58; // r1
  int v59; // r2
  Ogre::TechPassData *v60; // r7
  void *v61; // r1
  int v62; // r2
  Ogre::Tech_Particle_lod0 *v63; // r7
  Ogre::FixedString *v64; // r1
  Ogre::FixedString *v65; // r2
  void *v66; // r1
  int v67; // r2
  Ogre::TechPassData *v68; // r7
  void *v69; // r1
  int v70; // r2
  Ogre::TechPassData *v71; // r7
  void *v72; // r1
  int v73; // r2
  Ogre::TechPassData *v74; // r7
  void *v75; // r1
  int v76; // r2
  Ogre::TechPassData *v77; // r7
  void *v78; // r1
  int v79; // r2
  Ogre::TechPassData *v80; // r7
  void *v81; // r1
  int v82; // r2
  Ogre::TechPassData *v83; // r7
  void *v84; // r1
  int v85; // r2
  Ogre::TechPassData *v86; // r7
  void *v87; // r1
  int v88; // r2
  Ogre::TechPassData *v89; // r7
  void *v90; // r1
  int v91; // r2
  Ogre::Tech_stdmtl_lod0 *v92; // r7
  void *v93; // r1
  int v94; // r2
  Ogre::TechPassData *v95; // r7
  void *v96; // r1
  int v97; // r2
  Ogre::Tech_beach_lod0 *v98; // r7
  Ogre::FixedString *v99; // r1
  void *v100; // r1
  int v101; // r2
  Ogre::Tech_bloom_lod0 *v102; // r7
  Ogre::FixedString *v103; // r1
  void *v104; // r1
  int v105; // r2
  Ogre::TechPassData *v106; // r7
  void *v107; // r1
  int v108; // r2
  Ogre::TechPassData *v109; // r7
  void *v110; // r1
  int v111; // r2
  Ogre::TechPassData *v112; // r7
  void *v113; // r1
  int v114; // r2
  Ogre::TechPassData *v115; // r7
  void *v116; // r1
  int v117; // r2
  Ogre::TechPassData *v118; // r7
  void *v119; // r1
  int v120; // r2
  Ogre::TechPassData *v121; // r7
  void *v122; // r1
  int v123; // r2
  Ogre::TechPassData *v124; // r7
  void *v125; // r1
  int v126; // r2
  Ogre::Tech_uielement_lod0 *v127; // r7
  void *v128; // r1
  int v129; // r2
  Ogre::TechPassData *v130; // r7
  void *v131; // r1
  int v132; // r2
  Ogre::TechPassData *v133; // r7
  void *v134; // r1
  int v135; // r2
  Ogre::TechPassData *v136; // r7
  void *v137; // r1
  int v138; // r2
  Ogre::TechPassData *v139; // r7
  void *v140; // r1
  int v141; // r2
  Ogre::TechPassData *v142; // r6
  void *v143; // r1
  Ogre::FixedString *v144[2]; // [sp+24h] [bp-8h] BYREF

  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"triangle_lod0", a3);
  v4 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v4);
  *(_DWORD *)v4 = &off_45B1D0;
  Ogre::MaterialManager::registerShaderTech(this, v144, v4);
  Ogre::FixedString::~FixedString(v144, v5);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"skyplane_lod0", v6);
  v7 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v7);
  *(_DWORD *)v7 = &off_45A7D0;
  Ogre::MaterialManager::registerShaderTech(this, v144, v7);
  Ogre::FixedString::~FixedString(v144, v8);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"cloudplane_lod0", v9);
  v10 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v10);
  *(_DWORD *)v10 = &off_45A810;
  Ogre::MaterialManager::registerShaderTech(this, v144, v10);
  Ogre::FixedString::~FixedString(v144, v11);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"sun_lod0", v12);
  v13 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v13);
  *(_DWORD *)v13 = &off_45A850;
  Ogre::MaterialManager::registerShaderTech(this, v144, v13);
  Ogre::FixedString::~FixedString(v144, v14);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"block_lod0", v15);
  v16 = (Ogre::Tech_block_lod0 *)operator new(0x150u);
  Ogre::Tech_block_lod0::Tech_block_lod0(v16);
  *(_DWORD *)v16 = &off_45A8B0;
  Ogre::MaterialManager::registerShaderTech(this, v144, v16);
  Ogre::FixedString::~FixedString(v144, v17);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"block_uvanim_lod0", v18);
  v19 = (Ogre::Tech_block_uvanim_lod0 *)operator new(0x14Cu);
  Ogre::Tech_block_uvanim_lod0::Tech_block_uvanim_lod0(v19, v20, v21);
  *(_DWORD *)v19 = &off_45A910;
  Ogre::MaterialManager::registerShaderTech(this, v144, v19);
  Ogre::FixedString::~FixedString(v144, v22);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"block_shadowgen", v23);
  v24 = (Ogre::Tech_block_shadowgen *)operator new(0x148u);
  Ogre::Tech_block_shadowgen::Tech_block_shadowgen(v24, v25);
  *(_DWORD *)v24 = &off_45A8D0;
  Ogre::MaterialManager::registerShaderTech(this, v144, v24);
  Ogre::FixedString::~FixedString(v144, v26);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"blockdecal_lod0", v27);
  v28 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v28);
  *(_DWORD *)v28 = &off_45A990;
  Ogre::MaterialManager::registerShaderTech(this, v144, v28);
  Ogre::FixedString::~FixedString(v144, v29);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"blockitem_lod0", v30);
  v31 = (Ogre::Tech_blockitem_lod0 *)operator new(0x148u);
  Ogre::Tech_blockitem_lod0::Tech_blockitem_lod0(v31, v32);
  *(_DWORD *)v31 = &off_45A950;
  Ogre::MaterialManager::registerShaderTech(this, v144, v31);
  Ogre::FixedString::~FixedString(v144, v33);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"block_water_lod0", v34);
  v35 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v35);
  *(_DWORD *)v35 = &off_45A9D0;
  Ogre::MaterialManager::registerShaderTech(this, v144, v35);
  Ogre::FixedString::~FixedString(v144, v36);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"back0_lod0", v37);
  v38 = (Ogre::Tech_Back0_lod0 *)operator new(0x148u);
  Ogre::Tech_Back0_lod0::Tech_Back0_lod0(v38, v39);
  *(_DWORD *)v38 = &off_45AA30;
  Ogre::MaterialManager::registerShaderTech(this, v144, v38);
  Ogre::FixedString::~FixedString(v144, v40);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"back1_lod0", v41);
  v42 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v42);
  *(_DWORD *)v42 = &off_45AA50;
  Ogre::MaterialManager::registerShaderTech(this, v144, v42);
  Ogre::FixedString::~FixedString(v144, v43);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"stdmtl_lod0", v44);
  v45 = (Ogre::Tech_stdmtl_lod0 *)operator new(0x154u);
  Ogre::Tech_stdmtl_lod0::Tech_stdmtl_lod0(v45);
  *(_DWORD *)v45 = &off_45AD70;
  Ogre::MaterialManager::registerShaderTech(this, v144, v45);
  Ogre::FixedString::~FixedString(v144, v46);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"stdmtl_shadowgen", v47);
  v48 = (Ogre::TechPassData *)operator new(0x144u);
  Ogre::TechPassData::TechPassData(v48);
  *(_DWORD *)v48 = &off_45AD90;
  Ogre::MaterialManager::registerShaderTech(this, v144, v48);
  Ogre::FixedString::~FixedString(v144, v49);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"terrain_all_lod0", v50);
  v51 = (Ogre::TechPassData *)operator new(0x144u);
  Ogre::TechPassData::TechPassData(v51);
  *(_DWORD *)v51 = &off_45ADD0;
  Ogre::MaterialManager::registerShaderTech(this, v144, v51);
  Ogre::FixedString::~FixedString(v144, v52);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"border_lod0", v53);
  v54 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v54);
  *(_DWORD *)v54 = &off_45AAB0;
  Ogre::MaterialManager::registerShaderTech(this, v144, v54);
  Ogre::FixedString::~FixedString(v144, v55);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"border1_lod0", v56);
  v57 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v57);
  *(_DWORD *)v57 = &off_45AAD0;
  Ogre::MaterialManager::registerShaderTech(this, v144, v57);
  Ogre::FixedString::~FixedString(v144, v58);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"overlay_lod0", v59);
  v60 = (Ogre::TechPassData *)operator new(0x144u);
  Ogre::TechPassData::TechPassData(v60);
  *(_DWORD *)v60 = &off_45AB10;
  Ogre::MaterialManager::registerShaderTech(this, v144, v60);
  Ogre::FixedString::~FixedString(v144, v61);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"particle_lod0", v62);
  v63 = (Ogre::Tech_Particle_lod0 *)operator new(0x14Cu);
  Ogre::Tech_Particle_lod0::Tech_Particle_lod0(v63, v64, v65);
  *(_DWORD *)v63 = &off_45AB70;
  Ogre::MaterialManager::registerShaderTech(this, v144, v63);
  Ogre::FixedString::~FixedString(v144, v66);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"particle_distort", v67);
  v68 = (Ogre::TechPassData *)operator new(0x144u);
  Ogre::TechPassData::TechPassData(v68);
  *(_DWORD *)v68 = &off_45AB90;
  Ogre::MaterialManager::registerShaderTech(this, v144, v68);
  Ogre::FixedString::~FixedString(v144, v69);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"uvanim_lod0", v70);
  v71 = (Ogre::TechPassData *)operator new(0x150u);
  Ogre::TechPassData::TechPassData(v71);
  *(_DWORD *)v71 = &off_45ABD0;
  Ogre::MaterialManager::registerShaderTech(this, v144, v71);
  Ogre::FixedString::~FixedString(v144, v72);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"uvanim_blend_lod0", v73);
  v74 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v74);
  *(_DWORD *)v74 = &off_45AC50;
  Ogre::MaterialManager::registerShaderTech(this, v144, v74);
  Ogre::FixedString::~FixedString(v144, v75);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"uvanim_selfillum_lod0", v76);
  v77 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v77);
  *(_DWORD *)v77 = &off_45AC90;
  Ogre::MaterialManager::registerShaderTech(this, v144, v77);
  Ogre::FixedString::~FixedString(v144, v78);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"uvanim_2layer_lod0", v79);
  v80 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v80);
  *(_DWORD *)v80 = &off_45AC10;
  Ogre::MaterialManager::registerShaderTech(this, v144, v80);
  Ogre::FixedString::~FixedString(v144, v81);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"line_lod0", v82);
  v83 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v83);
  *(_DWORD *)v83 = &off_45B190;
  Ogre::MaterialManager::registerShaderTech(this, v144, v83);
  Ogre::FixedString::~FixedString(v144, v84);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"cloth_lod0", v85);
  v86 = (Ogre::TechPassData *)operator new(0x144u);
  Ogre::TechPassData::TechPassData(v86);
  *(_DWORD *)v86 = &off_45ACF0;
  Ogre::MaterialManager::registerShaderTech(this, v144, v86);
  Ogre::FixedString::~FixedString(v144, v87);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"cloth_shadowgen", v88);
  v89 = (Ogre::TechPassData *)operator new(0x144u);
  Ogre::TechPassData::TechPassData(v89);
  *(_DWORD *)v89 = &off_45AD10;
  Ogre::MaterialManager::registerShaderTech(this, v144, v89);
  Ogre::FixedString::~FixedString(v144, v90);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"stdmtl_lod0", v91);
  v92 = (Ogre::Tech_stdmtl_lod0 *)operator new(0x154u);
  Ogre::Tech_stdmtl_lod0::Tech_stdmtl_lod0(v92);
  *(_DWORD *)v92 = &off_45AD70;
  Ogre::MaterialManager::registerShaderTech(this, v144, v92);
  Ogre::FixedString::~FixedString(v144, v93);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"stdmtl_shadowgen", v94);
  v95 = (Ogre::TechPassData *)operator new(0x144u);
  Ogre::TechPassData::TechPassData(v95);
  *(_DWORD *)v95 = &off_45AD90;
  Ogre::MaterialManager::registerShaderTech(this, v144, v95);
  Ogre::FixedString::~FixedString(v144, v96);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"beach_lod0", v97);
  v98 = (Ogre::Tech_beach_lod0 *)operator new(0x148u);
  Ogre::Tech_beach_lod0::Tech_beach_lod0(v98, v99);
  *(_DWORD *)v98 = &off_45B150;
  Ogre::MaterialManager::registerShaderTech(this, v144, v98);
  Ogre::FixedString::~FixedString(v144, v100);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"bloom_lod0", v101);
  v102 = (Ogre::Tech_bloom_lod0 *)operator new(0x148u);
  Ogre::Tech_bloom_lod0::Tech_bloom_lod0(v102, v103);
  *(_DWORD *)v102 = &off_45B0D0;
  Ogre::MaterialManager::registerShaderTech(this, v144, v102);
  Ogre::FixedString::~FixedString(v144, v104);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"distort_lod0", v105);
  v106 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v106);
  *(_DWORD *)v106 = &off_45B090;
  Ogre::MaterialManager::registerShaderTech(this, v144, v106);
  Ogre::FixedString::~FixedString(v144, v107);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"decal_lod0", v108);
  v109 = (Ogre::TechPassData *)operator new(0x144u);
  Ogre::TechPassData::TechPassData(v109);
  *(_DWORD *)v109 = &off_45AFF0;
  Ogre::MaterialManager::registerShaderTech(this, v144, v109);
  Ogre::FixedString::~FixedString(v144, v110);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"decal_distort", v111);
  v112 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v112);
  *(_DWORD *)v112 = &off_45B010;
  Ogre::MaterialManager::registerShaderTech(this, v144, v112);
  Ogre::FixedString::~FixedString(v144, v113);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"footprint_lod0", v114);
  v115 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v115);
  *(_DWORD *)v115 = &off_45B050;
  Ogre::MaterialManager::registerShaderTech(this, v144, v115);
  Ogre::FixedString::~FixedString(v144, v116);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"dirdecal_lod0", v117);
  v118 = (Ogre::TechPassData *)operator new(0x144u);
  Ogre::TechPassData::TechPassData(v118);
  *(_DWORD *)v118 = &off_45B110;
  Ogre::MaterialManager::registerShaderTech(this, v144, v118);
  Ogre::FixedString::~FixedString(v144, v119);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"sky_stdmtl_lod0", v120);
  v121 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v121);
  *(_DWORD *)v121 = &off_45AF70;
  Ogre::MaterialManager::registerShaderTech(this, v144, v121);
  Ogre::FixedString::~FixedString(v144, v122);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"sky_stdmtl_shadowgen", v123);
  v124 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v124);
  *(_DWORD *)v124 = &off_45AF90;
  Ogre::MaterialManager::registerShaderTech(this, v144, v124);
  Ogre::FixedString::~FixedString(v144, v125);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"ui_element_lod0", v126);
  v127 = (Ogre::Tech_uielement_lod0 *)operator new(0x150u);
  Ogre::Tech_uielement_lod0::Tech_uielement_lod0(v127);
  *(_DWORD *)v127 = &off_45AF10;
  Ogre::MaterialManager::registerShaderTech(this, v144, v127);
  Ogre::FixedString::~FixedString(v144, v128);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"plant_lod0", v129);
  v130 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v130);
  *(_DWORD *)v130 = &off_45AED0;
  Ogre::MaterialManager::registerShaderTech(this, v144, v130);
  Ogre::FixedString::~FixedString(v144, v131);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"water_reflect_lod0", v132);
  v133 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v133);
  *(_DWORD *)v133 = &off_45AE90;
  Ogre::MaterialManager::registerShaderTech(this, v144, v133);
  Ogre::FixedString::~FixedString(v144, v134);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"general_water_lod0", v135);
  v136 = (Ogre::TechPassData *)operator new(0x144u);
  Ogre::TechPassData::TechPassData(v136);
  *(_DWORD *)v136 = &off_45AE50;
  Ogre::MaterialManager::registerShaderTech(this, v144, v136);
  Ogre::FixedString::~FixedString(v144, v137);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"terrain_colormask_lod0", v138);
  v139 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v139);
  *(_DWORD *)v139 = &off_45AE10;
  Ogre::MaterialManager::registerShaderTech(this, v144, v139);
  Ogre::FixedString::~FixedString(v144, v140);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v144, (Ogre::FixedString *)"terrain_all_lod0", v141);
  v142 = (Ogre::TechPassData *)operator new(0x144u);
  Ogre::TechPassData::TechPassData(v142);
  *(_DWORD *)v142 = &off_45ADD0;
  Ogre::MaterialManager::registerShaderTech(this, v144, v142);
  Ogre::FixedString::~FixedString(v144, v143);
}

