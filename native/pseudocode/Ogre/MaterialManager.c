// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::MaterialManager

//======================================================================
// Ogre::MaterialManager::saveShaders(void)
// address: 0x00165378   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::MaterialManager::saveShaders(Ogre::MaterialManager *this)
{
  ;
}


//======================================================================
// Ogre::MaterialManager::onResetDevice(void)
// address: 0x00165394   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::MaterialManager::onResetDevice(Ogre::CompiledShaderGroup **this)
{
  return Ogre::CompiledShaderGroup::onResetDevice(*(this + 14));
}


//======================================================================
// Ogre::MaterialManager::MaterialManager(void)
// address: 0x001654A0   size: 0x68 (104 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15MaterialManagerC1Ev'
Ogre::MaterialManager *__fastcall Ogre::MaterialManager::MaterialManager(Ogre::MaterialManager *this)
{
  char *v2; // r6
  Ogre::ShaderMacroManager *v3; // r5
  int v4; // r1
  Ogre::FixedString *v5; // r2
  Ogre::CompiledShaderGroup *v6; // r5

  Ogre::Singleton<Ogre::MaterialManager>::ms_Singleton = (int)this;
  v2 = (char *)this + 32;
  *(_DWORD *)this = &off_456EF8;
  j_memset((char *)this + 8, 0, 0x10u);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 4) = (char *)this + 8;
  *((_DWORD *)this + 5) = (char *)this + 8;
  j_memset(v2, 0, 0x10u);
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 10) = v2;
  *((_DWORD *)this + 11) = v2;
  *((_BYTE *)this + 60) = 0;
  v3 = (Ogre::ShaderMacroManager *)operator new(0x48u);
  Ogre::ShaderMacroManager::ShaderMacroManager(v3, v4, v5);
  *((_DWORD *)this + 13) = v3;
  v6 = (Ogre::CompiledShaderGroup *)operator new(0x30u);
  Ogre::CompiledShaderGroup::CompiledShaderGroup(v6);
  *((_DWORD *)this + 14) = v6;
  return this;
}


//======================================================================
// Ogre::MaterialManager::loadShaderCache(bool)
// address: 0x00165510   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::MaterialManager::loadShaderCache(Ogre::CompiledShaderGroup **this, bool a2)
{
  return Ogre::CompiledShaderGroup::loadShaders(*(this + 14), a2);
}


//======================================================================
// Ogre::MaterialManager::getMtlTemplate(Ogre::FixedString const&)
// address: 0x0016551A   size: 0x38 (56 bytes)
//======================================================================
int __fastcall Ogre::MaterialManager::getMtlTemplate(int a1, _DWORD *a2)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r3
  _DWORD *v4; // r2
  _DWORD *v5; // r4
  int result; // r0

  v2 = (_DWORD *)(a1 + 8);
  v3 = (_DWORD *)v2[1];
  v4 = v2;
  while ( v3 != nullptr )
  {
    if ( v3[4] < *a2 )
    {
      v5 = (_DWORD *)v3[3];
      v3 = v4;
    }
    else
    {
      v5 = (_DWORD *)v3[2];
    }
    v4 = v3;
    v3 = v5;
  }
  if ( v4 == v2 )
    return 0;
  result = 0;
  if ( *a2 >= v4[4] )
    return v4[5];
  return result;
}


//======================================================================
// Ogre::MaterialManager::getCompiledVSPS(Ogre::COMPILED_TYPE,char const*,Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x00165552   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Ogre::MaterialManager::getCompiledVSPS(
        int a1,
        Ogre::FixedString *a2,
        Ogre::FixedString *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _DWORD *v5; // r7
  int CompiledShader; // r5
  void *v9; // r1
  Ogre::FixedString *v11[2]; // [sp+Ch] [bp-8h] BYREF

  v5 = *(_DWORD **)(a1 + 56);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v11, a3, (int)a3);
  CompiledShader = Ogre::CompiledShaderGroup::getCompiledShader(v5, a2, (int)v11, a4, a5);
  Ogre::FixedString::~FixedString(v11, v9);
  return CompiledShader;
}


//======================================================================
// Ogre::MaterialManager::getShaderTechProto(Ogre::FixedString const&)
// address: 0x00165584   size: 0x38 (56 bytes)
//======================================================================
int __fastcall Ogre::MaterialManager::getShaderTechProto(int a1, _DWORD *a2)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r3
  _DWORD *v4; // r2
  _DWORD *v5; // r4
  int result; // r0

  v2 = (_DWORD *)(a1 + 32);
  v3 = (_DWORD *)v2[1];
  v4 = v2;
  while ( v3 != nullptr )
  {
    if ( v3[4] < *a2 )
    {
      v5 = (_DWORD *)v3[3];
      v3 = v4;
    }
    else
    {
      v5 = (_DWORD *)v3[2];
    }
    v4 = v3;
    v3 = v5;
  }
  if ( v4 == v2 )
    return 0;
  result = 0;
  if ( *a2 >= v4[4] )
    return v4[5];
  return result;
}


//======================================================================
// Ogre::MaterialManager::onLostDevice(void)
// address: 0x00165634   size: 0x24 (36 bytes)
//======================================================================
int __fastcall Ogre::MaterialManager::onLostDevice(Ogre::MaterialManager *this)
{
  int result; // r0
  char *v3; // r5
  int i; // r4

  result = Ogre::CompiledShaderGroup::onLostDevice(*((_DWORD *)this + 14));
  v3 = (char *)this + 8;
  for ( i = *((_DWORD *)v3 + 2); (char *)i != v3; i = result )
  {
    Ogre::MaterialTemplate::onLostDevice(*(Ogre::MaterialTemplate **)(i + 20));
    result = sub_391DDC(i);
  }
  return result;
}


//======================================================================
// Ogre::MaterialManager::~MaterialManager()
// address: 0x001659DC   size: 0xBC (188 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15MaterialManagerD1Ev'
void __fastcall Ogre::MaterialManager::~MaterialManager(Ogre::MaterialManager *this)
{
  _DWORD *v1; // r5
  int v3; // r0
  void *v4; // r5
  _DWORD *i; // r5
  int v6; // r0
  int *v7; // r5
  void *v8; // r0
  void *v9; // r0

  v1 = *((_DWORD **)this + 4);
  *(_DWORD *)this = &off_456EF8;
  while ( v1 != (_DWORD *)((char *)this + 8) )
  {
    v3 = v1[5];
    if ( v3 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
    v1 = (_DWORD *)sub_391DDC(v1);
  }
  v4 = *((void **)this + 14);
  if ( v4 != nullptr )
  {
    Ogre::CompiledShaderGroup::~CompiledShaderGroup(*((Ogre::CompiledShaderGroup **)this + 14));
    operator delete(v4);
  }
  for ( i = *((_DWORD **)this + 10); i != (_DWORD *)((char *)this + 32); i = (_DWORD *)sub_391DDC(i) )
  {
    v6 = i[5];
    if ( v6 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
  }
  v7 = *((int **)this + 13);
  if ( v7 != nullptr )
  {
    v8 = (void *)v7[15];
    if ( v8 != nullptr )
      operator delete(v8);
    std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,int>,std::_Select1st<std::pair<Ogre::FixedString const,int>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,int>>>::_M_erase(
      (int)(v7 + 9),
      v7[11]);
    v9 = (void *)v7[6];
    if ( v9 != nullptr )
      operator delete(v9);
    std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,int>,std::_Select1st<std::pair<Ogre::FixedString const,int>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,int>>>::_M_erase(
      (int)v7,
      v7[2]);
    Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton = 0;
    operator delete(v7);
  }
  std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::TechPassData *>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::TechPassData *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::TechPassData *>>>::_M_erase(
    (int)this + 28,
    *((_DWORD *)this + 9));
  std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>>>::_M_erase(
    (int)this + 4,
    *((_DWORD *)this + 3));
  Ogre::Singleton<Ogre::MaterialManager>::ms_Singleton = 0;
}


//======================================================================
// Ogre::MaterialManager::~MaterialManager()
// address: 0x00165AA4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::MaterialManager::~MaterialManager(Ogre::MaterialManager *this)
{
  Ogre::MaterialManager::~MaterialManager(this);
  operator delete(this);
}


//======================================================================
// Ogre::MaterialManager::registerShaderTech(Ogre::FixedString const&,Ogre::TechPassData *)
// address: 0x00165E0C   size: 0x13A (314 bytes)
//======================================================================
void __fastcall Ogre::MaterialManager::registerShaderTech(
        Ogre::MaterialManager *this,
        Ogre::FixedString **a2,
        Ogre::TechPassData *a3)
{
  char *v3; // r6
  char *v5; // r4
  char *v6; // r3
  void *v7; // r1
  unsigned int v8; // r3
  char *v9; // r5
  int v10; // r0
  int v11; // r0
  _BOOL4 v12; // r6
  void *v13; // r1
  Ogre::FixedString *v14; // r0
  char *v15; // [sp+Ch] [bp-20h]
  char *v16; // [sp+10h] [bp-1Ch]
  Ogre::FixedString *v18; // [sp+18h] [bp-14h] BYREF
  int v19; // [sp+1Ch] [bp-10h]
  char *v20; // [sp+20h] [bp-Ch] BYREF
  char *v21; // [sp+24h] [bp-8h]

  v3 = *((char **)this + 9);
  v15 = (char *)this + 32;
  v5 = (char *)this + 32;
  while ( v3 != nullptr )
  {
    if ( *((_DWORD *)v3 + 4) < (unsigned int)*a2 )
    {
      v6 = *((char **)v3 + 3);
      v3 = v5;
    }
    else
    {
      v6 = *((char **)v3 + 2);
    }
    v5 = v3;
    v3 = v6;
  }
  if ( v5 == v15 || (unsigned int)*a2 < *((_DWORD *)v5 + 4) )
  {
    v18 = *a2;
    Ogre::FixedString::addRef(v18, a2);
    v19 = 0;
    v16 = (char *)this + 28;
    if ( v5 == v15 )
    {
      if ( *((_DWORD *)this + 12) != 0 )
      {
        v9 = *((char **)this + 11);
        if ( *((_DWORD *)v9 + 4) < (unsigned int)v18 )
          goto LABEL_30;
      }
    }
    else
    {
      v8 = *((_DWORD *)v5 + 4);
      if ( (unsigned int)v18 >= v8 )
      {
        if ( v8 >= (unsigned int)v18 )
        {
LABEL_12:
          Ogre::FixedString::~FixedString(&v18, v7);
          goto LABEL_13;
        }
        if ( v5 != *((char **)this + 11) )
        {
          v11 = sub_391DDC(v5);
          if ( (unsigned int)v18 >= *(_DWORD *)(v11 + 16) )
          {
            std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::TechPassData *>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::TechPassData *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::TechPassData *>>>::_M_get_insert_unique_pos(
              (int *)&v20,
              (int)v16,
              &v18);
            v3 = v20;
            v5 = v21;
          }
          else if ( *((_DWORD *)v5 + 3) != 0 )
          {
            v5 = (char *)v11;
            v3 = (char *)v11;
          }
        }
        v9 = v5;
        v5 = v3;
LABEL_28:
        if ( v9 == nullptr )
          goto LABEL_12;
        v12 = true;
        if ( v5 != nullptr )
        {
LABEL_33:
          v5 = (char *)operator new(0x18u);
          if ( v5 != (char *)-16 )
          {
            v14 = v18;
            *((_DWORD *)v5 + 4) = v18;
            Ogre::FixedString::addRef(v14, v13);
            *((_DWORD *)v5 + 5) = v19;
          }
          sub_391E64(v12, v5, v9, v15);
          ++*((_DWORD *)this + 12);
          goto LABEL_12;
        }
LABEL_30:
        v12 = v9 == v15 || (unsigned int)v18 < *((_DWORD *)v9 + 4);
        goto LABEL_33;
      }
      if ( v5 == *((char **)this + 10) )
      {
        v9 = v5;
        goto LABEL_28;
      }
      v10 = sub_391E44(v5);
      v9 = (char *)v10;
      if ( *(_DWORD *)(v10 + 16) < (unsigned int)v18 )
      {
        if ( *(_DWORD *)(v10 + 12) != 0 )
          v9 = v5;
        else
          v5 = nullptr;
        goto LABEL_28;
      }
    }
    std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::TechPassData *>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::TechPassData *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::TechPassData *>>>::_M_get_insert_unique_pos(
      (int *)&v20,
      (int)v16,
      &v18);
    v5 = v20;
    v9 = v21;
    goto LABEL_28;
  }
LABEL_13:
  *((_DWORD *)v5 + 5) = a3;
}


//======================================================================
// Ogre::MaterialManager::loadOneTemplate(Ogre::XMLNode)
// address: 0x00166688   size: 0x17C (380 bytes)
//======================================================================
int __fastcall Ogre::MaterialManager::loadOneTemplate(_DWORD *a1, TiXmlElement *a2)
{
  Ogre::FixedString *v3; // r0
  int v4; // r2
  void *v5; // r1
  _DWORD *v6; // r6
  _DWORD *v7; // r4
  _DWORD *v8; // r3
  void *v9; // r1
  unsigned int v10; // r3
  _DWORD *v11; // r5
  int v12; // r0
  int v13; // r0
  _BOOL4 v14; // r6
  void *v15; // r1
  Ogre::FixedString *v16; // r0
  Ogre::FixedString *v18; // [sp+8h] [bp-34h]
  _DWORD *v19; // [sp+Ch] [bp-30h]
  Ogre::MaterialTemplate *v20; // [sp+10h] [bp-2Ch]
  int v21; // [sp+14h] [bp-28h]
  int v22; // [sp+18h] [bp-24h]
  TiXmlElement *v23; // [sp+1Ch] [bp-20h] BYREF
  Ogre::FixedString *v24; // [sp+24h] [bp-18h] BYREF
  Ogre::FixedString *v25; // [sp+28h] [bp-14h] BYREF
  int v26; // [sp+2Ch] [bp-10h]
  _DWORD *v27; // [sp+30h] [bp-Ch] BYREF
  _DWORD *v28; // [sp+34h] [bp-8h]

  v23 = a2;
  v3 = (Ogre::FixedString *)Ogre::XMLNode::attribToString(&v23, "name");
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v24, v3, v4);
  v20 = (Ogre::MaterialTemplate *)operator new(0x38u);
  Ogre::MaterialTemplate::MaterialTemplate(v20, &v24);
  v22 = Ogre::MaterialTemplate::init((int)v20, v23);
  if ( v22 != 0 )
  {
    v6 = (_DWORD *)a1[3];
    v21 = (int)(a1 + 1);
    v19 = a1 + 2;
    v7 = a1 + 2;
    while ( v6 != nullptr )
    {
      if ( v6[4] < (unsigned int)v24 )
      {
        v8 = (_DWORD *)v6[3];
        v6 = v7;
      }
      else
      {
        v8 = (_DWORD *)v6[2];
      }
      v7 = v6;
      v6 = v8;
    }
    if ( v7 != v19 && (unsigned int)v24 >= v7[4] )
      goto LABEL_16;
    v25 = v24;
    Ogre::FixedString::addRef(v24, v5);
    v26 = 0;
    if ( v7 == v19 )
    {
      if ( a1[6] != 0 )
      {
        v11 = (_DWORD *)a1[5];
        if ( v11[4] < (unsigned int)v25 )
          goto LABEL_33;
      }
    }
    else
    {
      v10 = v7[4];
      v18 = v25;
      if ( (unsigned int)v25 >= v10 )
      {
        if ( v10 >= (unsigned int)v25 )
        {
LABEL_15:
          Ogre::FixedString::~FixedString(&v25, v9);
LABEL_16:
          v7[5] = v20;
          goto LABEL_40;
        }
        if ( v7 != (_DWORD *)a1[5] )
        {
          v13 = sub_391DDC(v7);
          if ( (unsigned int)v18 >= *(_DWORD *)(v13 + 16) )
          {
            std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>>>::_M_get_insert_unique_pos(
              (int *)&v27,
              v21,
              &v25);
            v6 = v27;
            v7 = v28;
          }
          else if ( v7[3] != 0 )
          {
            v7 = (_DWORD *)v13;
            v6 = (_DWORD *)v13;
          }
        }
        v11 = v7;
        v7 = v6;
LABEL_31:
        if ( v11 == nullptr )
          goto LABEL_15;
        v14 = true;
        if ( v7 != nullptr )
        {
LABEL_36:
          v7 = (_DWORD *)operator new(0x18u);
          if ( v7 != (_DWORD *)-16 )
          {
            v16 = v25;
            v7[4] = v25;
            Ogre::FixedString::addRef(v16, v15);
            v7[5] = v26;
          }
          sub_391E64(v14, v7, v11, v19);
          ++a1[6];
          goto LABEL_15;
        }
LABEL_33:
        v14 = v11 == v19 || (unsigned int)v25 < v11[4];
        goto LABEL_36;
      }
      if ( v7 == (_DWORD *)a1[4] )
      {
        v11 = v7;
        goto LABEL_31;
      }
      v12 = sub_391E44(v7);
      v11 = (_DWORD *)v12;
      if ( *(_DWORD *)(v12 + 16) < (unsigned int)v18 )
      {
        if ( *(_DWORD *)(v12 + 12) != 0 )
          v11 = v7;
        else
          v7 = nullptr;
        goto LABEL_31;
      }
    }
    std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::MaterialTemplate *>>>::_M_get_insert_unique_pos(
      (int *)&v27,
      v21,
      &v25);
    v7 = v27;
    v11 = v28;
    goto LABEL_31;
  }
  if ( v20 != nullptr )
    (*(void (__fastcall **)(Ogre::MaterialTemplate *))(*(_DWORD *)v20 + 4))(v20);
LABEL_40:
  Ogre::FixedString::~FixedString(&v24, v5);
  return v22;
}


//======================================================================
// Ogre::MaterialManager::loadTemplates(std::string const&)
// address: 0x00166808   size: 0x56 (86 bytes)
//======================================================================
Ogre::DataStream *__fastcall Ogre::MaterialManager::loadTemplates(_DWORD *a1, const char **a2)
{
  Ogre::DataStream *File; // r6
  TiXmlElement *i; // r0
  TiXmlNode *v5; // r5
  TiXmlNode *v8; // [sp+8h] [bp-Ch] BYREF
  TiXmlNode *v9[2]; // [sp+Ch] [bp-8h] BYREF

  Ogre::XMLData::XMLData(&v8);
  File = Ogre::XMLData::loadFile((Ogre::XMLData *)&v8, a2);
  if ( File != nullptr )
  {
    v9[0] = (TiXmlNode *)Ogre::XMLData::getRootNode(&v8);
    for ( i = (TiXmlElement *)Ogre::XMLNode::iterateChild(v9); ; i = (TiXmlElement *)Ogre::XMLNode::iterateChild(v9, v5) )
    {
      v5 = i;
      if ( i == nullptr )
        break;
      if ( Ogre::MaterialManager::loadOneTemplate(a1, i) == 0 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    File = nullptr;
  }
  Ogre::XMLData::~XMLData((Ogre::XMLData *)&v8);
  return File;
}

