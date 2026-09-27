// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Material

//======================================================================
// Ogre::Material::getRTTI(void)const
// address: 0x00195D10   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::Material::getRTTI(Ogre::Material *this)
{
  return &Ogre::Material::m_RTTI;
}


//======================================================================
// Ogre::Material::~Material()
// address: 0x00195D84   size: 0x56 (86 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre8MaterialD1Ev'
void __fastcall Ogre::Material::~Material(Ogre::Material *this, void *a2)
{
  unsigned int v3; // r5
  _DWORD *v4; // r0
  void *v5; // r6
  void *v6; // r1
  void *v7; // r1

  v3 = 0;
  *(_DWORD *)this = &off_4585B0;
  while ( 1 )
  {
    v4 = *((_DWORD **)this + 8);
    if ( v3 >= (*((_DWORD *)this + 9) - (int)v4) >> 2 )
      break;
    v5 = (void *)v4[v3];
    if ( v5 != nullptr )
    {
      Ogre::MaterialParam::~MaterialParam((Ogre::MaterialParam *)v4[v3], a2);
      operator delete(v5);
    }
    ++v3;
  }
  if ( v4 != nullptr )
    operator delete(v4);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)this + 5, a2);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)this + 4, v6);
  Ogre::Resource::~Resource((Ogre::FixedString **)this, v7);
}


//======================================================================
// Ogre::Material::~Material()
// address: 0x00195DE0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Material::~Material(Ogre::Material *this, void *a2)
{
  Ogre::Material::~Material(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::Material::Material(void)
// address: 0x00195EFC   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre8MaterialC1Ev'
int __fastcall Ogre::Material::Material(int this)
{
  *(_DWORD *)(this + 4) = 1;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)this = &off_4585B0;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_BYTE *)(this + 28) = 0;
  *(_BYTE *)(this + 29) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 40) = 0;
  return this;
}


//======================================================================
// Ogre::Material::newObject(void)
// address: 0x00195F28   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::Material::newObject(Ogre::Material *this)
{
  int v1; // r4

  v1 = operator new(0x2Cu);
  Ogre::Material::Material(v1);
  return v1;
}


//======================================================================
// Ogre::Material::Material(Ogre::FixedString const&)
// address: 0x00195F3C   size: 0x4E (78 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre8MaterialC2ERKNS_11FixedStringE'
Ogre::Material *__fastcall Ogre::Material::Material(Ogre::Material *this, const Ogre::FixedString *a2)
{
  int v3; // r0
  int MtlTemplate; // r0

  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = &off_4585B0;
  v3 = *(_DWORD *)a2;
  *((_DWORD *)this + 5) = *(_DWORD *)a2;
  Ogre::FixedString::addRef(v3, a2);
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_BYTE *)this + 29) = 0;
  MtlTemplate = Ogre::MaterialManager::getMtlTemplate(Ogre::Singleton<Ogre::MaterialManager>::ms_Singleton, a2);
  *((_DWORD *)this + 6) = MtlTemplate;
  Ogre::MaterialTemplate::getDefaultParams(MtlTemplate, (int *)this + 8);
  *((_BYTE *)this + 28) = *(_BYTE *)(*((_DWORD *)this + 6) + 4);
  return this;
}


//======================================================================
// Ogre::Material::setTemplateName(char const*)
// address: 0x00195F94   size: 0x24 (36 bytes)
//======================================================================
int __fastcall Ogre::Material::setTemplateName(Ogre::Material *this, char *a2)
{
  _DWORD *v2; // r5
  int result; // r0

  v2 = (_DWORD *)((char *)this + 20);
  Ogre::FixedString::operator=((int *)this + 5, a2);
  result = Ogre::MaterialManager::getMtlTemplate(Ogre::Singleton<Ogre::MaterialManager>::ms_Singleton, v2);
  *((_DWORD *)this + 6) = result;
  *((_BYTE *)this + 28) = *(_BYTE *)(result + 4);
  return result;
}


//======================================================================
// Ogre::Material::setName(char const*)
// address: 0x00195FBC   size: 0xA (10 bytes)
//======================================================================
int *__fastcall Ogre::Material::setName(Ogre::Material *this, char *a2)
{
  return Ogre::FixedString::operator=((int *)this + 4, a2);
}


//======================================================================
// Ogre::Material::GetParamTexture(Ogre::FixedString)
// address: 0x00196090   size: 0x28 (40 bytes)
//======================================================================
int __fastcall Ogre::Material::GetParamTexture(int a1, _DWORD *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r4
  int v5; // r0

  v2 = *(_DWORD *)(a1 + 32);
  v3 = 0;
  v4 = (*(_DWORD *)(a1 + 36) - v2) >> 2;
  while ( v3 < v4 )
  {
    v5 = *(_DWORD *)(v2 + 4 * v3);
    if ( *(_DWORD *)(v5 + 4) == *a2 )
      return *(_DWORD *)(v5 + 20);
    ++v3;
  }
  return 0;
}


//======================================================================
// Ogre::Material::GetParamMacro(Ogre::FixedString)
// address: 0x001960B8   size: 0x36 (54 bytes)
//======================================================================
int __fastcall Ogre::Material::GetParamMacro(int a1, _DWORD *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r4
  int v5; // r0

  v2 = *(_DWORD *)(a1 + 32);
  v3 = 0;
  v4 = (*(_DWORD *)(a1 + 36) - v2) >> 2;
  while ( v3 < v4 )
  {
    v5 = *(_DWORD *)(v2 + 4 * v3);
    if ( *(_DWORD *)(v5 + 4) == *a2 )
      return *(_DWORD *)(v5 + 20);
    ++v3;
  }
  return -1;
}


//======================================================================
// Ogre::Material::applyShaderParam(Ogre::ShaderContext *)
// address: 0x001960EE   size: 0x80 (128 bytes)
//======================================================================
__int64 __fastcall Ogre::Material::applyShaderParam(__int64 this)
{
  unsigned int v2; // r5
  int v3; // r7
  int v4; // r3
  int *v5; // r0
  int v6; // r3
  int v7; // r1
  int v8; // r3
  __int64 v10; // [sp+0h] [bp-Ch]

  v10 = this;
  if ( *(_BYTE *)(this + 28) != 0 )
    *(_DWORD *)(HIDWORD(this) + 24) |= 1u;
  j_memset((void *)(HIDWORD(this) + 60), 0, 8u);
  v2 = 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = *(_DWORD *)(this + 32);
    if ( v2 >= (*(_DWORD *)(this + 36) - v4) >> 2 )
      break;
    v5 = *(int **)(4 * v2 + v4);
    if ( v5[2] >= 0 )
    {
      v6 = *v5;
      v7 = v5[4];
      if ( *v5 == 5 )
      {
        Ogre::ShaderContext::addTextureParam(SHIDWORD(this), v7 + 1000, v5[5], v5[6]);
      }
      else if ( v6 == 8 )
      {
        v8 = HIDWORD(this) + v3 + 56;
        *(_BYTE *)(v8 + 4) = v7;
        ++v3;
        *(_BYTE *)(v8 + 8) = v5[5];
      }
      else
      {
        Ogre::ShaderContext::addValueParam(SHIDWORD(this), v7 + 1000, v5 + 5, v6, 1);
      }
    }
    ++v2;
  }
  return v10;
}


//======================================================================
// Ogre::Material::setParamTextureByID(int,Ogre::Texture *)
// address: 0x0019616E   size: 0x40 (64 bytes)
//======================================================================
__int64 __fastcall Ogre::Material::setParamTextureByID(__int64 this, Ogre::Texture *a2)
{
  int v2; // r7
  unsigned int i; // r4
  int v5; // r3
  int v6; // r6
  _DWORD *v7; // r0

  v2 = this;
  for ( i = 0; ; ++i )
  {
    v5 = *(_DWORD *)(v2 + 32);
    if ( i >= (*(_DWORD *)(v2 + 36) - v5) >> 2 )
      break;
    v6 = *(_DWORD *)(4 * i + v5);
    if ( *(_DWORD *)(v6 + 12) == HIDWORD(this) )
    {
      v7 = *(_DWORD **)(v6 + 20);
      if ( v7 != nullptr )
        Ogre::BaseObject::release(v7);
      if ( a2 != nullptr )
        (*(void (__fastcall **)(Ogre::Texture *))(*(_DWORD *)a2 + 4))(a2);
      *(_DWORD *)(v6 + 20) = a2;
    }
  }
  return this;
}


//======================================================================
// Ogre::Material::setParamValueByID(int,void const*)
// address: 0x001961AE   size: 0x3A (58 bytes)
//======================================================================
__int64 __fastcall Ogre::Material::setParamValueByID(__int64 this, const void *a2)
{
  int v2; // r6
  unsigned int i; // r4
  int v5; // r3
  int v6; // r5
  size_t ValueSize; // r0

  v2 = this;
  for ( i = 0; ; ++i )
  {
    v5 = *(_DWORD *)(v2 + 32);
    if ( i >= (*(_DWORD *)(v2 + 36) - v5) >> 2 )
      break;
    v6 = *(_DWORD *)(4 * i + v5);
    if ( *(_DWORD *)(v6 + 12) == HIDWORD(this) )
    {
      ValueSize = Ogre::MaterialParam::getValueSize(*(Ogre::MaterialParam **)(4 * i + v5));
      j_memcpy((void *)(v6 + 20), a2, ValueSize);
    }
  }
  return this;
}


//======================================================================
// Ogre::Material::sortParams(void)
// address: 0x00196464   size: 0x58 (88 bytes)
//======================================================================
__int64 __fastcall Ogre::Material::sortParams(__int64 this)
{
  int v1; // r5
  int *v2; // r6
  int v3; // r0
  int *v4; // r4
  __int64 v5; // r0
  __int64 v7; // [sp+0h] [bp-Ch]

  v7 = this;
  v1 = *(_DWORD *)(this + 32);
  v2 = *(int **)(this + 36);
  if ( (int *)v1 != v2 )
  {
    v3 = j___clzsi2(((int)v2 - v1) >> 2);
    std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *>>,int,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *)>(
      v1,
      v2,
      2 * (31 - v3),
      (int (__fastcall *)(int, int))Ogre::ParamCompare);
    HIDWORD(v7) = Ogre::ParamCompare;
    if ( (int)v2 - v1 <= 67 )
    {
      std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *>>,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *)>(
        __SPAIR64__((unsigned int)v2, v1),
        (int (__fastcall *)(int, _DWORD))Ogre::ParamCompare);
    }
    else
    {
      v4 = (int *)(v1 + 64);
      LODWORD(v5) = v1;
      HIDWORD(v5) = v1 + 64;
      std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *>>,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *)>(
        v5,
        (int (__fastcall *)(int, _DWORD))Ogre::ParamCompare);
      while ( v4 != v2 )
        std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *>>,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *)>(
          v4++,
          (int (__fastcall *)(int, _DWORD))Ogre::ParamCompare);
    }
  }
  return v7;
}


//======================================================================
// Ogre::Material::findOrNewParam(Ogre::FixedString const&)
// address: 0x001964C0   size: 0xE2 (226 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Material::findOrNewParam(Ogre::Material *this, const Ogre::FixedString *a2)
{
  int v2; // r2
  int v5; // r1
  int i; // r3
  _DWORD *result; // r0
  int ParamByName; // r0
  int v9; // r7
  _DWORD *v10; // r5
  __int64 v11; // r0
  _DWORD *v12; // r6
  unsigned int v13; // r0
  unsigned int v14; // r7
  _DWORD *v15; // r3
  int v16; // r0
  int v17; // r6
  size_t byte_count; // [sp+0h] [bp-Ch]
  int byte_counta; // [sp+0h] [bp-Ch]
  int v20; // [sp+4h] [bp-8h]

  v2 = *((_DWORD *)this + 8);
  v5 = (*((_DWORD *)this + 9) - v2) >> 2;
  for ( i = 0; i != v5; ++i )
  {
    result = *(_DWORD **)(v2 + 4 * i);
    if ( result[1] == *(_DWORD *)a2 )
      return result;
  }
  ParamByName = Ogre::MaterialTemplate::findParamByName(*((_DWORD *)this + 6), a2);
  byte_count = ParamByName;
  if ( ParamByName < 0 )
    return nullptr;
  v9 = *(_DWORD *)(4 * ParamByName + *(_DWORD *)(*((_DWORD *)this + 6) + 16));
  v10 = (_DWORD *)operator new(0x54u);
  Ogre::MaterialParam::MaterialParam(v10, *(_DWORD *)(v9 + 4));
  Ogre::FixedString::operator=(v10 + 1, (int *)a2);
  HIDWORD(v11) = byte_count;
  v10[2] = byte_count;
  v10[4] = *(_DWORD *)(v9 + 8);
  v12 = *((_DWORD **)this + 9);
  if ( v12 == *((_DWORD **)this + 10) )
  {
    v13 = std::vector<Ogre::MaterialParam *>::_M_check_len((_DWORD *)this + 8, 1u, (int)"vector::_M_insert_aux");
    v20 = *((_DWORD *)this + 8);
    byte_counta = 4 * v13;
    if ( v13 != 0 )
    {
      if ( v13 > 0x3FFFFFFF )
        sub_3BCEB4(v13);
      v13 = operator new(byte_counta);
    }
    v14 = v13;
    v15 = (_DWORD *)(v13 + 4 * (((int)v12 - v20) >> 2));
    if ( v15 != nullptr )
      *v15 = v10;
    v16 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MaterialParam *>(
            *((void **)this + 8),
            (int)v12,
            (void *)v13);
    v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MaterialParam *>(
            v12,
            *((_DWORD *)this + 9),
            (void *)(v16 + 4));
    LODWORD(v11) = *((_DWORD *)this + 8);
    if ( (_DWORD)v11 != 0 )
      operator delete((void *)v11);
    *((_DWORD *)this + 8) = v14;
    *((_DWORD *)this + 9) = v17;
    *((_DWORD *)this + 10) = v14 + byte_counta;
  }
  else
  {
    if ( v12 != nullptr )
      *v12 = v10;
    *((_DWORD *)this + 9) += 4;
  }
  LODWORD(v11) = this;
  Ogre::Material::sortParams(v11);
  return v10;
}


//======================================================================
// Ogre::Material::setParamValue(Ogre::FixedString const&,void const*)
// address: 0x001965AC   size: 0x1E (30 bytes)
//======================================================================
Ogre::MaterialParam *__fastcall Ogre::Material::setParamValue(
        Ogre::Material *this,
        const Ogre::FixedString *a2,
        const void *a3)
{
  Ogre::MaterialParam *result; // r0
  Ogre::MaterialParam *v5; // r4
  size_t ValueSize; // r0

  result = (Ogre::MaterialParam *)Ogre::Material::findOrNewParam(this, a2);
  v5 = result;
  if ( result != nullptr )
  {
    ValueSize = Ogre::MaterialParam::getValueSize(result);
    return (Ogre::MaterialParam *)j_memcpy((char *)v5 + 20, a3, ValueSize);
  }
  return result;
}


//======================================================================
// Ogre::Material::setParamMacro(Ogre::FixedString const&,int)
// address: 0x001965CC   size: 0x2C (44 bytes)
//======================================================================
unsigned __int64 __fastcall Ogre::Material::setParamMacro(
        Ogre::Material *this,
        const Ogre::FixedString *a2,
        unsigned int a3)
{
  char v5; // r3
  unsigned __int64 v7; // [sp+0h] [bp-Ch] BYREF
  unsigned int v8; // [sp+8h] [bp-4h]

  v7 = __PAIR64__(a3, (unsigned int)this);
  v8 = a3;
  Ogre::Material::setParamValue(this, a2, (char *)&v7 + 4);
  if ( Ogre::operator==((const char **)a2, "BLEND_MODE") )
  {
    v5 = 1;
    if ( SHIDWORD(v7) <= 1 )
      v5 = *(_BYTE *)(*((_DWORD *)this + 6) + 4);
    *((_BYTE *)this + 28) = v5;
  }
  return v7;
}


//======================================================================
// Ogre::Material::getParamValue(Ogre::FixedString const&,void *)
// address: 0x001965FC   size: 0x22 (34 bytes)
//======================================================================
Ogre::MaterialParam *__fastcall Ogre::Material::getParamValue(
        Ogre::Material *this,
        const Ogre::FixedString *a2,
        void *a3)
{
  Ogre::MaterialParam *result; // r0
  Ogre::MaterialParam *v5; // r4
  size_t ValueSize; // r0

  result = (Ogre::MaterialParam *)Ogre::Material::findOrNewParam(this, a2);
  v5 = result;
  if ( result != nullptr )
  {
    ValueSize = Ogre::MaterialParam::getValueSize(result);
    j_memcpy(a3, (char *)v5 + 20, ValueSize);
    return (Ogre::MaterialParam *)(&dword_0 + 1);
  }
  return result;
}


//======================================================================
// Ogre::Material::setParamTexture(Ogre::FixedString const&,Ogre::Texture *,int)
// address: 0x0019661E   size: 0x2A (42 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Material::setParamTexture(
        Ogre::Material *this,
        const Ogre::FixedString *a2,
        Ogre::Texture *a3,
        int a4)
{
  _DWORD *result; // r0
  _DWORD *v7; // r4

  result = Ogre::Material::findOrNewParam(this, a2);
  v7 = result;
  if ( result != nullptr )
  {
    result = (_DWORD *)result[5];
    if ( result != nullptr )
      result = Ogre::BaseObject::release(result);
    if ( a3 != nullptr )
      result = (_DWORD *)(*(int (__fastcall **)(Ogre::Texture *))(*(_DWORD *)a3 + 4))(a3);
    v7[5] = a3;
    v7[6] = a4;
  }
  return result;
}


//======================================================================
// Ogre::Material::setParam(Ogre::MaterialParam const&)
// address: 0x00196648   size: 0x3E (62 bytes)
//======================================================================
Ogre::MaterialParam *__fastcall Ogre::Material::setParam(Ogre::Material *this, const Ogre::MaterialParam *a2)
{
  const Ogre::FixedString *v3; // r1
  int v4; // r3
  Ogre::MaterialParam *result; // r0

  v4 = *(_DWORD *)a2;
  v3 = (const Ogre::MaterialParam *)((char *)a2 + 4);
  if ( v4 == 8 )
    return (Ogre::MaterialParam *)Ogre::Material::setParamMacro(this, v3, *((_DWORD *)a2 + 5));
  if ( v4 != 5 )
    return Ogre::Material::setParamValue(this, v3, (char *)a2 + 20);
  if ( *((int *)a2 + 3) < 0 )
    return (Ogre::MaterialParam *)Ogre::Material::setParamTexture(this, v3, *((Ogre::Texture **)a2 + 5), 0);
  result = (Ogre::MaterialParam *)Ogre::Material::findOrNewParam(this, v3);
  if ( result != nullptr )
    *((_DWORD *)result + 3) = *((_DWORD *)a2 + 3);
  return result;
}


//======================================================================
// Ogre::Material::_serialize(Ogre::Archive &,int)
// address: 0x00196688   size: 0x180 (384 bytes)
//======================================================================
void __fastcall Ogre::Material::_serialize(Ogre::Material *this, Ogre::Archive *a2, int a3)
{
  const char **v5; // r6
  int MtlTemplate; // r0
  unsigned int v7; // r3
  unsigned int v8; // r7
  int v9; // r3
  void *v10; // r1
  __int64 v11; // r0
  int v12; // r2
  int v13; // r2
  void *v14; // r1
  void *v15; // r1
  unsigned int v16; // r6
  void *v17; // r7
  int v18; // r2
  int v20; // [sp+Ch] [bp-68h] BYREF
  int v21; // [sp+10h] [bp-64h] BYREF
  void *v22; // [sp+14h] [bp-60h] BYREF
  Ogre::FixedString *v23; // [sp+18h] [bp-5Ch] BYREF
  unsigned int v24; // [sp+1Ch] [bp-58h] BYREF
  const char *v25; // [sp+20h] [bp-54h] BYREF
  _DWORD *v26; // [sp+30h] [bp-44h]

  v5 = (const char **)((char *)this + 20);
  Ogre::Archive::operator<<((int)a2, (const char **)this + 4);
  Ogre::Archive::operator<<((int)a2, v5);
  if ( *((_DWORD *)a2 + 2) == 1 )
  {
    v20 = -1;
    v21 = -1;
    if ( a3 <= 101 )
      Ogre::LoadingForOldVersion((Ogre *)v5, (Ogre::FixedString *)&v20, &v21, (int *)0xFFFFFFFF);
    MtlTemplate = Ogre::MaterialManager::getMtlTemplate(Ogre::Singleton<Ogre::MaterialManager>::ms_Singleton, v5);
    *((_DWORD *)this + 6) = MtlTemplate;
    if ( MtlTemplate != 0 )
    {
      Ogre::MaterialTemplate::getDefaultParams(MtlTemplate, (int *)this + 8);
      v8 = 0;
      *((_BYTE *)this + 28) = *(_BYTE *)(*((_DWORD *)this + 6) + 4);
      v22 = nullptr;
      Ogre::Archive::serialize(a2, &v22, 4u);
      Ogre::MaterialParam::MaterialParam(&v24, 0);
      while ( 1 )
      {
        v10 = v22;
        if ( v8 >= (unsigned int)v22 )
          break;
        Ogre::Archive::serialize(a2, &v23, 4u);
        Ogre::MaterialParam::reset(&v24, (int)v23);
        LODWORD(v11) = &v24;
        HIDWORD(v11) = a2;
        Ogre::MaterialParam::serialize(v11, v12);
        if ( a3 != 100
          || !Ogre::operator==(&v25, "g_SelfPower")
          || Ogre::MaterialParam::getValueSize((Ogre::MaterialParam *)&v24) != 4 )
        {
          Ogre::Material::setParam(this, (const Ogre::MaterialParam *)&v24);
          v9 = v24;
          if ( v24 == 5 && v26 != nullptr )
          {
            Ogre::BaseObject::release(v26);
            v9 = 0;
            v26 = nullptr;
          }
        }
        ++v8;
      }
      v13 = v20;
      if ( v20 >= 0 )
      {
        v23 = (Ogre::FixedString *)Ogre::FixedString::insert(
                                     (Ogre::FixedString *)"BLEND_MODE",
                                     (const char *)0xFFFFFFFF,
                                     v20,
                                     v9);
        v14 = (void *)(Ogre::Material::setParamMacro(this, (const Ogre::FixedString *)&v23, v20) >> 32);
        Ogre::FixedString::~FixedString(&v23, v14);
      }
      if ( v21 >= 0 )
      {
        v23 = (Ogre::FixedString *)Ogre::FixedString::insert(
                                     (Ogre::FixedString *)"RECEIVE_LIGHTING",
                                     (const char *)0xFFFFFFFF,
                                     v13,
                                     v21);
        v15 = (void *)(Ogre::Material::setParamMacro(this, (const Ogre::FixedString *)&v23, v21) >> 32);
        Ogre::FixedString::~FixedString(&v23, v15);
      }
      Ogre::MaterialParam::~MaterialParam((Ogre::MaterialParam *)&v24, v10);
    }
    else
    {
      Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/OgreMain/OgreMaterial.cpp", (const char *)&dword_D4, 8, v7);
      Ogre::LogMessage((Ogre *)"cannot get material template: %s", *((const char **)this + 5));
    }
  }
  else
  {
    v16 = 0;
    v24 = (*((_DWORD *)this + 9) - *((_DWORD *)this + 8)) >> 2;
    Ogre::Archive::serialize(a2, &v24, 4u);
    while ( v16 < v24 )
    {
      v17 = *(void **)(4 * v16++ + *((_DWORD *)this + 8));
      Ogre::Archive::serialize(a2, v17, 4u);
      Ogre::MaterialParam::serialize(__SPAIR64__((unsigned int)a2, (unsigned int)v17), v18);
    }
  }
}


//======================================================================
// Ogre::Material::Material(Ogre::Material const&)
// address: 0x00196820   size: 0x86 (134 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre8MaterialC2ERKS0_'
Ogre::Material *__fastcall Ogre::Material::Material(Ogre::Material *this, const Ogre::Material *a2)
{
  int v3; // r0
  int v5; // r1
  char v6; // r3
  unsigned int v7; // r2
  unsigned int v8; // r6
  Ogre::MaterialParam *v9; // r3
  Ogre::MaterialParam *v10; // r7
  Ogre::MaterialParam *v12; // [sp+0h] [bp-14h]
  int v13; // [sp+4h] [bp-10h]
  void *v14; // [sp+Ch] [bp-8h] BYREF

  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = &off_4585B0;
  v3 = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 5) = v3;
  Ogre::FixedString::addRef(v3, a2);
  v5 = *((_DWORD *)a2 + 6);
  v14 = nullptr;
  *((_DWORD *)this + 6) = v5;
  v6 = *((_BYTE *)a2 + 28);
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_BYTE *)this + 28) = v6;
  *((_DWORD *)this + 10) = 0;
  *((_BYTE *)this + 29) = 0;
  v7 = (*((_DWORD *)a2 + 9) - *((_DWORD *)a2 + 8)) >> 2;
  if ( v7 != 0 )
    std::vector<Ogre::MaterialParam *>::_M_fill_insert((int)this + 32, nullptr, v7, &v14);
  v8 = 0;
  while ( v8 < (*((_DWORD *)this + 9) - *((_DWORD *)this + 8)) >> 2 )
  {
    v9 = *(Ogre::MaterialParam **)(*((_DWORD *)a2 + 8) + 4 * v8);
    v13 = 4 * v8++;
    v12 = v9;
    v10 = (Ogre::MaterialParam *)operator new(0x54u);
    Ogre::MaterialParam::MaterialParam(v10, v12);
    *(_DWORD *)(*((_DWORD *)this + 8) + v13) = v10;
  }
  return this;
}

