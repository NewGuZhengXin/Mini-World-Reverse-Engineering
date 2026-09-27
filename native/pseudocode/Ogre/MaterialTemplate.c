// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::MaterialTemplate

//======================================================================
// Ogre::MaterialTemplate::MaterialTemplate(Ogre::FixedString const&)
// address: 0x00165418   size: 0x30 (48 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16MaterialTemplateC1ERKNS_11FixedStringE'
Ogre::MaterialTemplate *__fastcall Ogre::MaterialTemplate::MaterialTemplate(
        Ogre::MaterialTemplate *this,
        Ogre::FixedString **a2)
{
  Ogre::FixedString *v3; // r0

  *(_DWORD *)this = &off_456EE8;
  v3 = *a2;
  *((_DWORD *)this + 3) = *a2;
  Ogre::FixedString::addRef(v3, a2);
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  return this;
}


//======================================================================
// Ogre::MaterialTemplate::findParamByName(Ogre::FixedString const&)
// address: 0x0016544C   size: 0x26 (38 bytes)
//======================================================================
int __fastcall Ogre::MaterialTemplate::findParamByName(int a1, _DWORD *a2)
{
  int v2; // r3
  int v3; // r2
  int result; // r0
  int v5; // r2

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 20);
  result = 0;
  v5 = (v3 - v2) >> 2;
  while ( result != v5 )
  {
    if ( **(_DWORD **)(v2 + 4 * result) == *a2 )
      return result;
    ++result;
  }
  return -1;
}


//======================================================================
// Ogre::MaterialTemplate::findTechCache(unsigned int,Ogre::RenderUsage)
// address: 0x00165472   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall Ogre::MaterialTemplate::findTechCache(int a1, int a2, char a3)
{
  int v3; // r4
  int v4; // r2
  int v5; // r5
  int i; // r3
  _DWORD *result; // r0

  v3 = *(_DWORD *)(a1 + 28);
  v4 = 1 << a3;
  v5 = (*(_DWORD *)(a1 + 32) - v3) >> 2;
  for ( i = 0; i != v5; ++i )
  {
    result = *(_DWORD **)(v3 + 4 * i);
    if ( *result == a2 && (result[1] & v4) != 0 )
      return result;
  }
  return nullptr;
}


//======================================================================
// Ogre::MaterialTemplate::onLostDevice(void)
// address: 0x001655DC   size: 0x58 (88 bytes)
//======================================================================
void __fastcall Ogre::MaterialTemplate::onLostDevice(Ogre::MaterialTemplate *this)
{
  unsigned int i; // r6
  int v3; // r3
  int v4; // r4
  int j; // r5
  int v6; // r3
  int v7; // r2

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 7);
    if ( i >= (*((_DWORD *)this + 8) - v3) >> 2 )
      break;
    v4 = *(_DWORD *)(4 * i + v3);
    for ( j = *(_DWORD *)(v4 + 24); j != v4 + 16; j = sub_391DDC(j) )
    {
      v6 = *(_DWORD *)(j + 32);
      v7 = *(_DWORD *)(v6 + 8) - 1;
      *(_DWORD *)(v6 + 8) = v7;
      if ( v7 <= 0 )
        (*(void (__fastcall **)(int))(*(_DWORD *)(v6 + 4) + 24))(v6 + 4);
    }
    std::_Rb_tree<Ogre::ShaderEnvKey,std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>,std::_Select1st<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>,std::less<Ogre::ShaderEnvKey>,std::allocator<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>>::_M_erase(
      v4 + 12,
      *(_DWORD **)(v4 + 20));
    *(_DWORD *)(v4 + 24) = j;
    *(_DWORD *)(v4 + 20) = 0;
    *(_DWORD *)(v4 + 28) = j;
    *(_DWORD *)(v4 + 32) = 0;
  }
}


//======================================================================
// Ogre::MaterialTemplate::~MaterialTemplate()
// address: 0x00165658   size: 0xA6 (166 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16MaterialTemplateD1Ev'
void __fastcall Ogre::MaterialTemplate::~MaterialTemplate(Ogre::FixedString **this)
{
  unsigned int v2; // r6
  int v3; // r3
  int v4; // r5
  void *v5; // r1
  unsigned int i; // r5
  int v7; // r3
  void *v8; // r1
  void *v9; // r6
  Ogre::FixedString **v10; // r5
  Ogre::FixedString **v11; // r6
  void *v12; // r0
  void *v13; // r0
  void *v14; // r0

  v2 = 0;
  *this = (Ogre::FixedString *)&off_456EE8;
  Ogre::MaterialTemplate::onLostDevice((Ogre::MaterialTemplate *)this);
  while ( 1 )
  {
    v3 = (int)*(this + 7);
    if ( v2 >= ((int)*(this + 8) - v3) >> 2 )
      break;
    v4 = *(_DWORD *)(4 * v2 + v3);
    if ( v4 != 0 )
    {
      std::_Rb_tree<Ogre::ShaderEnvKey,std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>,std::_Select1st<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>,std::less<Ogre::ShaderEnvKey>,std::allocator<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>>::_M_erase(
        v4 + 12,
        *(_DWORD **)(v4 + 20));
      Ogre::FixedString::~FixedString((Ogre::FixedString **)(v4 + 8), v5);
      operator delete((void *)v4);
    }
    ++v2;
  }
  for ( i = 0; ; ++i )
  {
    v7 = (int)*(this + 4);
    v8 = *(this + 5);
    if ( i >= ((int)v8 - v7) >> 2 )
      break;
    v9 = *(void **)(4 * i + v7);
    if ( v9 != nullptr )
    {
      Ogre::FixedString::~FixedString(*(Ogre::FixedString ***)(4 * i + v7), v8);
      operator delete(v9);
    }
  }
  v10 = (Ogre::FixedString **)*(this + 10);
  v11 = (Ogre::FixedString **)*(this + 11);
  while ( v10 != v11 )
  {
    Ogre::FixedString::~FixedString(v10, v8);
    v10 += 22;
  }
  v12 = *(this + 10);
  if ( v12 != nullptr )
    operator delete(v12);
  v13 = *(this + 7);
  if ( v13 != nullptr )
    operator delete(v13);
  v14 = *(this + 4);
  if ( v14 != nullptr )
    operator delete(v14);
  Ogre::FixedString::~FixedString(this + 3, v8);
}


//======================================================================
// Ogre::MaterialTemplate::~MaterialTemplate()
// address: 0x00165704   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::MaterialTemplate::~MaterialTemplate(Ogre::FixedString **this)
{
  Ogre::MaterialTemplate::~MaterialTemplate(this);
  operator delete(this);
}


//======================================================================
// Ogre::MaterialTemplate::getRequiredParams(Ogre::ShaderParamUsage *,unsigned int,Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&,unsigned int,Ogre::RenderUsage)
// address: 0x00165936   size: 0x54 (84 bytes)
//======================================================================
int __fastcall Ogre::MaterialTemplate::getRequiredParams(
        int a1,
        int a2,
        int a3,
        _QWORD *a4,
        _QWORD *a5,
        int a6,
        char a7)
{
  _DWORD *TechCache; // r5
  int v10; // r0
  int result; // r0
  _QWORD v12[2]; // [sp+0h] [bp-14h] BYREF

  v12[0] = *a4;
  v12[1] = *a5;
  TechCache = Ogre::MaterialTemplate::findTechCache(a1, a6, a7);
  v10 = std::_Rb_tree<Ogre::ShaderEnvKey,std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>,std::_Select1st<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>,std::less<Ogre::ShaderEnvKey>,std::allocator<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>>::find(
          (int)(TechCache + 3),
          v12);
  if ( (_DWORD *)v10 != TechCache + 4 )
    return (*(int (__fastcall **)(_DWORD, int, int, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(v10 + 32) + 32))(
             *(_DWORD *)(v10 + 32),
             a2,
             a3,
             *(_DWORD *)(**(_DWORD **)(v10 + 32) + 32),
             v12[0],
             HIDWORD(v12[0]));
  for ( result = 0; result != 54; ++result )
    *(_DWORD *)(a2 + 4 * result) = result;
  return result;
}


//======================================================================
// Ogre::MaterialTemplate::getShaderTechnique(Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&,unsigned int,Ogre::RenderUsage)
// address: 0x00165C98   size: 0xBA (186 bytes)
//======================================================================
int __fastcall Ogre::MaterialTemplate::getShaderTechnique(int a1, _QWORD *a2, _QWORD *a3, int a4, char a5)
{
  _DWORD *TechCache; // r0
  int v7; // r5
  int v8; // r0
  int v9; // r6
  Ogre::TechPassData *v11; // r0
  Ogre::TechPassData *v12; // r4
  int i; // r7
  _DWORD *v14; // [sp+4h] [bp-20h]
  _QWORD v17[2]; // [sp+10h] [bp-14h] BYREF

  v17[0] = *a2;
  v17[1] = *a3;
  TechCache = Ogre::MaterialTemplate::findTechCache(a1, a4, a5);
  v7 = (int)TechCache;
  if ( TechCache != nullptr )
  {
    v14 = TechCache + 3;
    v8 = std::_Rb_tree<Ogre::ShaderEnvKey,std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>,std::_Select1st<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>,std::less<Ogre::ShaderEnvKey>,std::allocator<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>>::find(
           (int)(TechCache + 3),
           v17);
    v9 = v8;
    if ( v8 != v7 + 16 )
      return *(_DWORD *)(v8 + 32);
    v11 = (Ogre::TechPassData *)(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v7 + 36) + 8))(*(_DWORD *)(v7 + 36));
    *((_DWORD *)v11 + 1) = a1;
    v12 = v11;
    (*(void (__fastcall **)(Ogre::TechPassData *, _QWORD *, _QWORD *))(*(_DWORD *)v11 + 12))(v11, a2, a3);
    for ( i = *(_DWORD *)(v7 + 24); i != v9; i = sub_391DDC(i) )
    {
      v7 = *(_DWORD *)(i + 32);
      if ( Ogre::TechPassData::isEqual(v12, *(Ogre::TechPassData **)(v7 + 12)) != 0 )
      {
        (*(void (__fastcall **)(Ogre::TechPassData *))(*(_DWORD *)v12 + 4))(v12);
        (*(void (__fastcall **)(int))(*(_DWORD *)(v7 + 4) + 4))(v7 + 4);
        goto LABEL_10;
      }
    }
    v7 = (*(int (__fastcall **)(int, Ogre::TechPassData *))(*(_DWORD *)Ogre::Singleton<Ogre::MaterialManager>::ms_Singleton
                                                          + 24))(
           Ogre::Singleton<Ogre::MaterialManager>::ms_Singleton,
           v12);
    Ogre::ShaderTechImpl::postInit((_DWORD *)v7, a1);
LABEL_10:
    *(_DWORD *)std::map<Ogre::ShaderEnvKey,Ogre::ShaderTechImpl *>::operator[](v14, v17) = v7;
  }
  return v7;
}


//======================================================================
// Ogre::MaterialTemplate::init(Ogre::XMLNode)
// address: 0x001660DC   size: 0x542 (1346 bytes)
//======================================================================
int __fastcall Ogre::MaterialTemplate::init(int a1, TiXmlNode *a2)
{
  int hasAttrib; // r0
  Ogre::FixedString *i; // r0
  Ogre::FixedString *v5; // r0
  Ogre::FixedString *v6; // r4
  int v7; // r0
  const char *v8; // r4
  int v9; // r0
  int v10; // r3
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  Ogre::FixedString *v18; // r2
  const char *v19; // r0
  int v20; // r3
  Ogre::FixedString *v21; // r4
  int v22; // r0
  __int64 v23; // r0
  int v24; // r0
  int EnvParamUsageByName; // r0
  int v26; // r2
  int v27; // r2
  void *v28; // r1
  const char *v29; // r0
  const char *v30; // r0
  const char *v31; // r0
  const char *v32; // r0
  const char *v33; // r0
  const char *v34; // r0
  const char *v35; // r0
  const char *v36; // r0
  const char *v37; // r0
  const char *v38; // r0
  const char *v39; // r0
  const char *v40; // r0
  const char *v41; // r0
  const char *v42; // r0
  const char *v43; // r0
  const char *v44; // r0
  const char *v45; // r0
  const char *v46; // r0
  const char *v47; // r0
  const char *v48; // r0
  int v49; // r0
  char *v50; // r1
  char *v51; // r3
  void *v52; // r1
  TiXmlElement *j; // r0
  const char *Name; // r0
  int *v56; // r4
  int v57; // r2
  Ogre::FixedString *v58; // r4
  int v59; // r2
  const char *v60; // r4
  const char *v61; // r0
  Ogre::FixedString *v62; // r7
  int v63; // r2
  void *v64; // r1
  Ogre::FixedString *v65; // r7
  void *v66; // r1
  Ogre::FixedString *v67; // r3
  int v68; // r2
  __int64 v69; // r0
  int v70; // [sp+4h] [bp-188h]
  int v71; // [sp+4h] [bp-188h]
  Ogre::ShaderMacroManager *v72; // [sp+8h] [bp-184h]
  Ogre::ShaderMacroManager *v73; // [sp+8h] [bp-184h]
  Ogre::FixedString *v74; // [sp+Ch] [bp-180h]
  TiXmlNode *v75[2]; // [sp+14h] [bp-178h] BYREF
  TiXmlNode *Child; // [sp+1Ch] [bp-170h] BYREF
  TiXmlNode *v77; // [sp+20h] [bp-16Ch] BYREF
  TiXmlElement *v78; // [sp+24h] [bp-168h] BYREF
  Ogre::FixedString *v79; // [sp+28h] [bp-164h] BYREF
  Ogre::FixedString *v80; // [sp+2Ch] [bp-160h] BYREF
  int v81; // [sp+30h] [bp-15Ch]
  const char *v82; // [sp+34h] [bp-158h]
  const char *v83; // [sp+38h] [bp-154h]
  const char *v84; // [sp+3Ch] [bp-150h]
  const char *v85; // [sp+40h] [bp-14Ch]
  const char *v86; // [sp+44h] [bp-148h]
  const char *v87; // [sp+48h] [bp-144h]
  const char *v88; // [sp+4Ch] [bp-140h]
  const char *v89; // [sp+50h] [bp-13Ch]
  int v90; // [sp+54h] [bp-138h]
  int v91; // [sp+58h] [bp-134h]
  int v92; // [sp+5Ch] [bp-130h]
  int v93; // [sp+60h] [bp-12Ch]
  int v94; // [sp+64h] [bp-128h]
  int v95; // [sp+68h] [bp-124h]
  int v96; // [sp+6Ch] [bp-120h]
  int v97; // [sp+70h] [bp-11Ch]
  int v98; // [sp+74h] [bp-118h]
  int v99; // [sp+78h] [bp-114h]
  int v100; // [sp+7Ch] [bp-110h]
  int v101; // [sp+80h] [bp-10Ch]
  char s[256]; // [sp+84h] [bp-108h] BYREF

  v75[0] = a2;
  hasAttrib = Ogre::XMLNode::hasAttrib(v75, "transparent");
  if ( hasAttrib != 0 )
    LOBYTE(hasAttrib) = (unsigned __int8)Ogre::XMLNode::attribToBool(v75, "transparent");
  *(_BYTE *)(a1 + 4) = hasAttrib;
  Child = (TiXmlNode *)Ogre::XMLNode::getChild(v75, "Params");
  if ( Child != nullptr )
  {
    for ( i = (Ogre::FixedString *)Ogre::XMLNode::iterateChild(&Child);
          ;
          i = (Ogre::FixedString *)Ogre::XMLNode::iterateChild(&Child, v79) )
    {
      v79 = i;
      if ( i == nullptr )
        break;
      v5 = (Ogre::FixedString *)operator new(0x4Cu);
      *(_DWORD *)v5 = 0;
      v6 = v5;
      v80 = v5;
      v7 = Ogre::XMLNode::attribToString(&v79, "name");
      Ogre::FixedString::operator=(v6, v7);
      v72 = v80;
      v8 = (const char *)Ogre::XMLNode::attribToString(&v79, "type");
      v9 = j_strcmp(v8, "float");
      v10 = 0;
      if ( v9 != 0 )
      {
        v11 = j_strcmp(v8, "float2");
        v10 = 1;
        if ( v11 != 0 )
        {
          v12 = j_strcmp(v8, "float3");
          v10 = 2;
          if ( v12 != 0 )
          {
            v13 = j_strcmp(v8, "float4");
            v10 = 3;
            if ( v13 != 0 )
            {
              v14 = j_strcmp(v8, "float3x3");
              v10 = 4;
              if ( v14 != 0 )
              {
                v15 = j_strcmp(v8, "texture");
                v10 = 5;
                if ( v15 != 0 )
                {
                  v16 = j_strcmp(v8, "color");
                  v10 = 6;
                  if ( v16 != 0 )
                  {
                    v17 = j_strcmp(v8, "float4x4");
                    v10 = 7;
                    if ( v17 != 0 )
                      v10 = 8 * (j_strcmp(v8, "macro") == 0);
                  }
                }
              }
            }
          }
        }
      }
      *((_DWORD *)v72 + 1) = v10;
      j_memset((char *)v80 + 12, 0, 0x40u);
      if ( Ogre::XMLNode::hasAttrib(&v79, "default") )
      {
        v19 = (const char *)Ogre::XMLNode::attribToString(&v79, "default");
        v18 = v80;
        v20 = *((_DWORD *)v80 + 1);
        if ( v20 != 0 )
        {
          if ( v20 == 8 )
            j_sscanf(v19, "%d", (char *)v80 + 12);
        }
        else
        {
          j_sscanf(v19, "%f", (char *)v80 + 12);
        }
      }
      v21 = v80;
      if ( *((_DWORD *)v80 + 1) == 8 )
        v22 = Ogre::ShaderMacroManager::registerMacro(
                (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton,
                (Ogre::FixedString **)v80);
      else
        v22 = Ogre::ShaderMacroManager::registerParam(
                (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton,
                (Ogre::FixedString **)v80,
                (int)v18);
      *((_DWORD *)v21 + 2) = v22;
      HIDWORD(v23) = *(_DWORD *)(a1 + 20);
      if ( HIDWORD(v23) == *(_DWORD *)(a1 + 24) )
      {
        LODWORD(v23) = a1 + 16;
        std::vector<Ogre::MaterialTemplate::ParamDefine *>::_M_insert_aux(v23, &v80);
      }
      else
      {
        if ( HIDWORD(v23) != 0 )
          *(_DWORD *)HIDWORD(v23) = v80;
        *(_DWORD *)(a1 + 20) += 4;
      }
    }
  }
  v77 = (TiXmlNode *)Ogre::XMLNode::getChild(v75, "Samplers");
  if ( v77 != nullptr )
  {
    v78 = (TiXmlElement *)Ogre::XMLNode::iterateChild(&v77);
    while ( v78 != nullptr )
    {
      v80 = nullptr;
      v24 = Ogre::XMLNode::attribToString(&v78, "name");
      Ogre::FixedString::operator=(&v80, v24);
      v74 = (Ogre::FixedString *)Ogre::XMLNode::attribToString(&v78, "texture");
      EnvParamUsageByName = Ogre::ShaderMacroManager::getEnvParamUsageByName(
                              (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton,
                              (const char *)v74);
      if ( EnvParamUsageByName < 0 )
      {
        v73 = (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton;
        Ogre::FixedString::FixedString((Ogre::FixedString *)&v79, v74, v26);
        v81 = Ogre::ShaderMacroManager::registerParam(v73, &v79, v27) + 1000;
        Ogre::FixedString::~FixedString(&v79, v28);
      }
      else
      {
        v81 = EnvParamUsageByName;
      }
      v29 = (const char *)Ogre::XMLNode::attribToString(&v78, "addressU");
      v82 = sub_16537C(v29);
      v30 = (const char *)Ogre::XMLNode::attribToString(&v78, "addressV");
      v86 = sub_16537C(v30);
      v31 = (const char *)Ogre::XMLNode::attribToString(&v78, "magFilter");
      v94 = sub_1653A0(v31, 2);
      v32 = (const char *)Ogre::XMLNode::attribToString(&v78, "minFilter");
      v90 = sub_1653A0(v32, 2);
      v33 = (const char *)Ogre::XMLNode::attribToString(&v78, "mipFilter");
      v98 = sub_1653A0(v33, 1);
      v34 = (const char *)Ogre::XMLNode::attribToString(&v78, "addressU1");
      v83 = sub_16537C(v34);
      v35 = (const char *)Ogre::XMLNode::attribToString(&v78, "addressV1");
      v87 = sub_16537C(v35);
      v36 = (const char *)Ogre::XMLNode::attribToString(&v78, "magFilter1");
      v95 = sub_1653A0(v36, 2);
      v37 = (const char *)Ogre::XMLNode::attribToString(&v78, "minFilter1");
      v91 = sub_1653A0(v37, 2);
      v38 = (const char *)Ogre::XMLNode::attribToString(&v78, "mipFilter1");
      v99 = sub_1653A0(v38, 1);
      v39 = (const char *)Ogre::XMLNode::attribToString(&v78, "addressU2");
      v84 = sub_16537C(v39);
      v40 = (const char *)Ogre::XMLNode::attribToString(&v78, "addressV2");
      v88 = sub_16537C(v40);
      v41 = (const char *)Ogre::XMLNode::attribToString(&v78, "magFilter2");
      v96 = sub_1653A0(v41, 2);
      v42 = (const char *)Ogre::XMLNode::attribToString(&v78, "minFilter2");
      v92 = sub_1653A0(v42, 2);
      v43 = (const char *)Ogre::XMLNode::attribToString(&v78, "mipFilter2");
      v100 = sub_1653A0(v43, 1);
      v44 = (const char *)Ogre::XMLNode::attribToString(&v78, "addressU3");
      v85 = sub_16537C(v44);
      v45 = (const char *)Ogre::XMLNode::attribToString(&v78, "addressV3");
      v89 = sub_16537C(v45);
      v46 = (const char *)Ogre::XMLNode::attribToString(&v78, "magFilter3");
      v97 = sub_1653A0(v46, 2);
      v47 = (const char *)Ogre::XMLNode::attribToString(&v78, "minFilter3");
      v93 = sub_1653A0(v47, 2);
      v48 = (const char *)Ogre::XMLNode::attribToString(&v78, "mipFilter3");
      v49 = sub_1653A0(v48, 1);
      v50 = *(char **)(a1 + 44);
      v51 = *(char **)(a1 + 48);
      v101 = v49;
      if ( v50 == v51 )
      {
        std::vector<Ogre::SamplerDefine>::_M_insert_aux((Ogre::FixedString ***)(a1 + 40), v50, &v80);
      }
      else
      {
        if ( v50 != nullptr )
          Ogre::SamplerDefine::SamplerDefine((Ogre::FixedString **)v50, &v80);
        *(_DWORD *)(a1 + 44) += 88;
      }
      v78 = (TiXmlElement *)Ogre::XMLNode::iterateChild(&Child, v78);
      Ogre::FixedString::~FixedString(&v80, v52);
    }
  }
  if ( *(_BYTE *)(Ogre::Singleton<Ogre::MaterialManager>::ms_Singleton + 60) == 0 )
  {
    *(_DWORD *)(a1 + 52) = 0;
    for ( j = (TiXmlElement *)Ogre::XMLNode::iterateChild(v75); ; j = (TiXmlElement *)Ogre::XMLNode::iterateChild(
                                                                                        v75,
                                                                                        v78) )
    {
      v78 = j;
      if ( j == nullptr )
        break;
      Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v78);
      if ( j_strcmp(Name, "Technique") == 0 )
      {
        v56 = (int *)operator new(0x28u);
        v56[2] = 0;
        j_memset(v56 + 4, 0, 0x10u);
        v56[8] = 0;
        v56[6] = (int)(v56 + 4);
        v56[7] = (int)(v56 + 4);
        v79 = (Ogre::FixedString *)v56;
        *v56 = Ogre::XMLNode::attribToInt(&v78, "lod", v57);
        v58 = v79;
        *((_DWORD *)v58 + 1) = Ogre::XMLNode::attribToInt(&v78, "usage", v59);
        v60 = *(const char **)(a1 + 12);
        v61 = (const char *)Ogre::XMLNode::attribToString(&v78, "name");
        j_sprintf(s, "%s_%s", v60, v61);
        v62 = v79;
        v70 = Ogre::Singleton<Ogre::MaterialManager>::ms_Singleton;
        Ogre::FixedString::FixedString((Ogre::FixedString *)&v80, (Ogre::FixedString *)s, v63);
        *((_DWORD *)v62 + 9) = Ogre::MaterialManager::getShaderTechProto(v70, &v80);
        Ogre::FixedString::~FixedString(&v80, v64);
        v65 = v79;
        if ( *((_DWORD *)v79 + 9) == 0 )
        {
          v71 = Ogre::Singleton<Ogre::MaterialManager>::ms_Singleton;
          Ogre::FixedString::FixedString((Ogre::FixedString *)&v80, (Ogre::FixedString *)s, 0);
          *((_DWORD *)v65 + 9) = Ogre::MaterialManager::getShaderTechProto(v71, &v80);
          Ogre::FixedString::~FixedString(&v80, v66);
        }
        v67 = v79;
        v68 = *((_DWORD *)v79 + 9);
        if ( v68 != 0 )
          *(_DWORD *)(v68 + 4) = a1;
        HIDWORD(v69) = *(_DWORD *)(a1 + 32);
        if ( HIDWORD(v69) == *(_DWORD *)(a1 + 36) )
        {
          LODWORD(v69) = a1 + 28;
          std::vector<Ogre::MaterialTemplate::TechCache *>::_M_insert_aux(v69, &v79);
        }
        else
        {
          if ( HIDWORD(v69) != 0 )
            *(_DWORD *)HIDWORD(v69) = v67;
          *(_DWORD *)(a1 + 32) += 4;
        }
        *(_DWORD *)(a1 + 52) |= *((_DWORD *)v79 + 1);
      }
    }
  }
  return 1;
}


//======================================================================
// Ogre::MaterialTemplate::getDefaultParams(std::vector<Ogre::MaterialParam *,std::allocator<Ogre::MaterialParam *>> &)
// address: 0x001669A4   size: 0xA4 (164 bytes)
//======================================================================
void __fastcall Ogre::MaterialTemplate::getDefaultParams(int a1, int *a2)
{
  int v3; // r2
  int v4; // r1
  int v6; // r0
  int v7; // r3
  _DWORD *v8; // r1
  unsigned int v9; // r3
  unsigned int v10; // r2
  _DWORD *v11; // r6
  _DWORD *v12; // r4
  int v13; // r3
  int v14; // r3
  size_t ValueSize; // r0
  unsigned int i; // [sp+0h] [bp-14h]
  int v17; // [sp+4h] [bp-10h]
  void *v18; // [sp+Ch] [bp-8h] BYREF

  v3 = *(_DWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a1 + 20);
  v6 = *a2;
  v7 = v4 - v3;
  v8 = (_DWORD *)a2[1];
  v18 = nullptr;
  v9 = v7 >> 2;
  v10 = ((int)v8 - v6) >> 2;
  if ( v9 <= v10 )
  {
    if ( v9 < v10 )
      a2[1] = v6 + 4 * v9;
  }
  else
  {
    std::vector<Ogre::MaterialParam *>::_M_fill_insert((int)a2, v8, v9 - v10, &v18);
  }
  for ( i = 0; ; ++i )
  {
    v14 = *(_DWORD *)(a1 + 16);
    if ( i >= (*(_DWORD *)(a1 + 20) - v14) >> 2 )
      break;
    v11 = *(_DWORD **)(v14 + 4 * i);
    v17 = 4 * i;
    v12 = (_DWORD *)operator new(0x54u);
    Ogre::MaterialParam::MaterialParam(v12, v11[1]);
    Ogre::FixedString::operator=(v12 + 1, v11);
    v13 = v11[1];
    *v12 = v13;
    v12[2] = i;
    v12[4] = v11[2];
    if ( v13 == 5 )
    {
      v12[5] = 0;
    }
    else
    {
      ValueSize = Ogre::MaterialParam::getValueSize((Ogre::MaterialParam *)v12);
      j_memcpy(v12 + 5, v11 + 3, ValueSize);
    }
    *(_DWORD *)(*a2 + v17) = v12;
  }
}

