// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLShaderProgram

//======================================================================
// Ogre::OGLShaderProgram::~OGLShaderProgram()
// address: 0x0025E384   size: 0x4A (74 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16OGLShaderProgramD1Ev'
void __fastcall Ogre::OGLShaderProgram::~OGLShaderProgram(Ogre::OGLShaderProgram *this, void *a2)
{
  void **v2; // r6
  int *v4; // r5
  int *v5; // r7
  void *v6; // r0

  v2 = (void **)((char *)this + 248);
  *(_DWORD *)this = &off_459F30;
  v4 = *((int **)this + 62);
  v5 = *((int **)this + 63);
  while ( v4 != v5 )
  {
    Ogre::FixedString::release(*v4, a2);
    v4 += 2;
  }
  if ( *v2 != nullptr )
    operator delete(*v2);
  v6 = *((void **)this + 59);
  if ( v6 != nullptr )
    operator delete(v6);
  *(_DWORD *)this = &off_4559C0;
}


//======================================================================
// Ogre::OGLShaderProgram::~OGLShaderProgram()
// address: 0x0025E3D8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLShaderProgram::~OGLShaderProgram(Ogre::OGLShaderProgram *this, void *a2)
{
  Ogre::OGLShaderProgram::~OGLShaderProgram(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::OGLShaderProgram::OGLShaderProgram(void)
// address: 0x0025E3EC   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16OGLShaderProgramC1Ev'
_DWORD *__fastcall Ogre::OGLShaderProgram::OGLShaderProgram(_DWORD *this)
{
  *(this + 1) = 1;
  *this = &off_459F30;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 59) = 0;
  *(this + 60) = 0;
  *(this + 61) = 0;
  *(this + 62) = 0;
  *(this + 63) = 0;
  *(this + 64) = 0;
  return this;
}


//======================================================================
// Ogre::OGLShaderProgram::getParamHandle(char const*)
// address: 0x0025E418   size: 0x5C (92 bytes)
//======================================================================
int __fastcall Ogre::OGLShaderProgram::getParamHandle(
        Ogre::OGLCompiledShader **this,
        Ogre::FixedString *a2,
        int a3,
        int a4)
{
  Ogre::OGLCompiledShader *v5; // r6
  int v7; // r0
  void *v8; // r1
  int v9; // r2
  int v10; // r3
  _BOOL4 v11; // r6
  Ogre::OGLCompiledShader *v12; // r6
  void *v13; // r1
  Ogre::FixedString *v15; // [sp+0h] [bp-8h] BYREF
  Ogre::FixedString *v16; // [sp+4h] [bp-4h] BYREF

  v15 = (Ogre::FixedString *)this;
  v16 = a2;
  v5 = *(this + 2);
  v15 = (Ogre::FixedString *)Ogre::FixedString::insert(a2, (const char *)0xFFFFFFFF, a3, a4);
  v7 = Ogre::OGLCompiledShader::Symbol2RegIndex(v5, (const Ogre::FixedString *)&v15);
  v11 = true;
  if ( v7 < 0 )
  {
    v12 = *(this + 3);
    v16 = (Ogre::FixedString *)Ogre::FixedString::insert(a2, (const char *)0xFFFFFFFF, v9, v10);
    v11 = Ogre::OGLCompiledShader::Symbol2RegIndex(v12, (const Ogre::FixedString *)&v16) >= 0;
    Ogre::FixedString::release((int)v16, v13);
  }
  Ogre::FixedString::release((int)v15, v8);
  if ( v11 )
    return j_glGetUniformLocation();
  else
    return -1;
}


//======================================================================
// Ogre::OGLShaderProgram::getSamplerIndex(char const*)
// address: 0x0025E474   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::OGLShaderProgram::getSamplerIndex(Ogre::OGLShaderProgram *this, const char *a2)
{
  return j_glGetUniformLocation();
}


//======================================================================
// Ogre::OGLShaderProgram::setParamData(void *,void const*,Ogre::ShaderParamType,unsigned int)
// address: 0x0025E47E   size: 0x70 (112 bytes)
//======================================================================
int __fastcall Ogre::OGLShaderProgram::setParamData(int a1, int a2, Ogre::Matrix4 *a3, int a4, int a5)
{
  int result; // r0
  _DWORD v6[17]; // [sp+0h] [bp-44h] BYREF

  switch ( a4 )
  {
    case 0:
      result = j_glUniform1fv();
      break;
    case 1:
      result = j_glUniform2fv();
      break;
    case 2:
      result = j_glUniform3fv();
      break;
    case 3:
    case 6:
      result = j_glUniform4fv();
      break;
    case 4:
      result = j_glUniformMatrix3fv();
      break;
    case 7:
      Ogre::Matrix4::Matrix4((int)v6, a3);
      Ogre::Matrix4::transpose(v6);
      result = j_glUniformMatrix4fv();
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// Ogre::OGLShaderProgram::setConstant(char const*,void const*,Ogre::ShaderParamType,unsigned int)
// address: 0x0025E4EE   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Ogre::OGLShaderProgram::setConstant(
        Ogre::OGLCompiledShader **a1,
        Ogre::FixedString *a2,
        Ogre::Matrix4 *a3,
        int a4,
        int a5)
{
  int ParamHandle; // r0
  int v10; // [sp+0h] [bp-8h]

  ParamHandle = Ogre::OGLShaderProgram::getParamHandle(a1, a2, (int)a3, a4);
  Ogre::OGLShaderProgram::setParamData((int)a1, ParamHandle, a3, a4, a5);
  return v10;
}


//======================================================================
// Ogre::OGLShaderProgram::setConstant(Ogre::ShaderParamUsage,void const*,Ogre::ShaderParamType,unsigned int)
// address: 0x0025E50C   size: 0x2C (44 bytes)
//======================================================================
__int64 __fastcall Ogre::OGLShaderProgram::setConstant(__int64 a1, Ogre::Matrix4 *a2, int a3, int a4)
{
  __int64 v5; // [sp+0h] [bp-8h]

  v5 = a1;
  if ( SHIDWORD(a1) > 53 )
    HIDWORD(a1) = *(_DWORD *)(4 * (HIDWORD(a1) - 1000) + *(_DWORD *)(a1 + 236));
  else
    HIDWORD(a1) = *(_DWORD *)(a1 + 4 * (HIDWORD(a1) + 4) + 4);
  if ( HIDWORD(a1) != -1 )
    Ogre::OGLShaderProgram::setParamData(a1, SHIDWORD(a1), a2, a3, a4);
  return v5;
}


//======================================================================
// Ogre::OGLShaderProgram::paramUsage2Handle(Ogre::ShaderParamUsage)
// address: 0x0025E53C   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Ogre::OGLShaderProgram::paramUsage2Handle(int a1, int a2)
{
  if ( a2 > 53 )
    return *(_DWORD *)(4 * (a2 - 1000) + *(_DWORD *)(a1 + 236));
  else
    return *(_DWORD *)(a1 + 4 * (a2 + 4) + 4);
}


//======================================================================
// Ogre::OGLShaderProgram::hasConstant(Ogre::ShaderParamUsage)
// address: 0x0025E560   size: 0xE (14 bytes)
//======================================================================
bool __fastcall Ogre::OGLShaderProgram::hasConstant(int a1, int a2)
{
  return Ogre::OGLShaderProgram::paramUsage2Handle(a1, a2) != -1;
}


//======================================================================
// Ogre::OGLShaderProgram::cacheParamHandle(void)
// address: 0x0025E65C   size: 0x70 (112 bytes)
//======================================================================
int __fastcall Ogre::OGLShaderProgram::cacheParamHandle(Ogre::OGLCompiledShader **this)
{
  Ogre::ShaderMacroManager *v2; // r4
  int i; // r6
  char *EnvParamName; // r0
  int v5; // r2
  int v6; // r3
  int result; // r0
  Ogre::OGLCompiledShader **v8; // r3
  int j; // r6
  Ogre::FixedString *ParamName; // r0
  int v11; // r3
  __int64 v12; // r0
  _DWORD v13[2]; // [sp+Ch] [bp-8h] BYREF

  v2 = (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton;
  for ( i = 0; i != 54; ++i )
  {
    EnvParamName = Ogre::ShaderMacroManager::getEnvParamName(v2, i);
    result = Ogre::OGLShaderProgram::getParamHandle(this, (Ogre::FixedString *)EnvParamName, v5, v6);
    v8 = this + i;
    v8[5] = (Ogre::OGLCompiledShader *)result;
  }
  for ( j = 0; j < (*((_DWORD *)v2 + 16) - *((_DWORD *)v2 + 15)) >> 2; ++j )
  {
    ParamName = (Ogre::FixedString *)Ogre::ShaderMacroManager::getParamName(v2, j);
    if ( ParamName != nullptr )
      v13[0] = Ogre::OGLShaderProgram::getParamHandle(this, ParamName, (int)v13, v11);
    else
      v13[0] = -1;
    LODWORD(v12) = this + 59;
    HIDWORD(v12) = v13;
    result = std::vector<void *>::push_back(v12);
  }
  return result;
}


//======================================================================
// Ogre::OGLShaderProgram::init(Ogre::OGLCompiledShader *,Ogre::OGLCompiledShader *)
// address: 0x0025E6D0   size: 0x74 (116 bytes)
//======================================================================
bool __fastcall Ogre::OGLShaderProgram::init(
        Ogre::OGLShaderProgram *this,
        Ogre::OGLCompiledShader *a2,
        Ogre::OGLCompiledShader *a3)
{
  int i; // r6
  int v5; // r5

  *((_DWORD *)this + 3) = a3;
  *((_DWORD *)this + 2) = a2;
  *((_DWORD *)this + 4) = j_glCreateProgram();
  j_glAttachShader();
  j_glAttachShader();
  for ( i = *(_DWORD *)(*((_DWORD *)this + 2) + 72); i != *((_DWORD *)this + 2) + 64; i = sub_391DDC(i) )
  {
    v5 = 0;
    while ( !Ogre::operator==((const char **)(i + 20), off_453654[v5]) )
    {
      if ( ++v5 == 12 )
        goto LABEL_7;
    }
    j_glBindAttribLocation();
LABEL_7:
    ;
  }
  j_glLinkProgram();
  Ogre::OGLShaderProgram::cacheParamHandle((Ogre::OGLCompiledShader **)this);
  return *((_DWORD *)this + 4) != 0;
}

