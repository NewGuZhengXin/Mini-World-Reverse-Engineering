// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLShaderTechImpl

//======================================================================
// Ogre::OGLShaderTechImpl::endPass(void)
// address: 0x0025EB0C   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::OGLShaderTechImpl::endPass(Ogre::OGLShaderTechImpl *this)
{
  return (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 3) + 20))(*((_DWORD *)this + 3));
}


//======================================================================
// Ogre::OGLShaderTechImpl::setConstant(char const*,void const*,Ogre::ShaderParamType,unsigned int)
// address: 0x0025EB18   size: 0x2 (2 bytes)
//======================================================================
void Ogre::OGLShaderTechImpl::setConstant()
{
  ;
}


//======================================================================
// Ogre::OGLShaderTechImpl::setTexture(char const*,Ogre::HardwarePixelBuffer *,int)
// address: 0x0025EB1A   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLShaderTechImpl::setTexture(
        Ogre::OGLShaderTechImpl *this,
        const char *a2,
        Ogre::HardwarePixelBuffer *a3,
        int a4)
{
  ;
}


//======================================================================
// Ogre::OGLShaderTechImpl::~OGLShaderTechImpl()
// address: 0x0025EB1C   size: 0x44 (68 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17OGLShaderTechImplD1Ev'
void __fastcall Ogre::OGLShaderTechImpl::~OGLShaderTechImpl(Ogre::OGLShaderTechImpl *this)
{
  int v2; // r5
  _DWORD **v3; // r6
  _DWORD *v4; // r0
  int v5; // r3

  v2 = 0;
  *(_DWORD *)this = &off_459FA0;
  *((_DWORD *)this + 1) = &off_459FDC;
  do
  {
    v3 = (_DWORD **)((char *)this + v2 + 240);
    v4 = *v3;
    if ( *v3 != nullptr )
    {
      v5 = v4[1] - 1;
      v4[1] = v5;
      if ( v5 <= 0 )
        (*(void (__fastcall **)(_DWORD *))(*v4 + 24))(v4);
      *v3 = nullptr;
    }
    v2 += 4;
  }
  while ( v2 != 16 );
  Ogre::ShaderTechImpl::~ShaderTechImpl(this);
}


//======================================================================
// Ogre::OGLShaderTechImpl::~OGLShaderTechImpl()
// address: 0x0025EB78   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLShaderTechImpl::~OGLShaderTechImpl(Ogre::OGLShaderTechImpl *this)
{
  Ogre::OGLShaderTechImpl::~OGLShaderTechImpl(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLShaderTechImpl::beginPass(unsigned int)
// address: 0x0025EBA0   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Ogre::OGLShaderTechImpl::beginPass(Ogre::OGLShaderTechImpl *this, unsigned int a2)
{
  (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 3) + 16))(*((_DWORD *)this + 3));
  *((_DWORD *)this + 4) = a2;
  return j_glUseProgram();
}


//======================================================================
// Ogre::OGLShaderTechImpl::setConstant(Ogre::ShaderParamUsage,void const*,Ogre::ShaderParamType,unsigned int)
// address: 0x0025EBBE   size: 0x14 (20 bytes)
//======================================================================
int __fastcall Ogre::OGLShaderTechImpl::setConstant(__int64 a1, Ogre::Matrix4 *a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-8h]

  LODWORD(a1) = *(_DWORD *)(4 * (*(_DWORD *)(a1 + 16) + 60) + a1);
  Ogre::OGLShaderProgram::setConstant(a1, a2, a3, a4);
  return v5;
}


//======================================================================
// Ogre::OGLShaderTechImpl::isParamUsed(Ogre::ShaderParamUsage)
// address: 0x0025EBD2   size: 0x52 (82 bytes)
//======================================================================
int __fastcall Ogre::OGLShaderTechImpl::isParamUsed(int a1, int a2)
{
  unsigned int i; // r4
  int v5; // r2
  int j; // r3

  for ( i = 0; i < *(_DWORD *)(*(_DWORD *)(a1 + 12) + 312); ++i )
  {
    v5 = *(_DWORD *)(a1 + 12) + 76 * i + 8;
    for ( j = 0; j < *(_DWORD *)(v5 + 8); ++j )
    {
      if ( *(_DWORD *)(*(_DWORD *)(v5 + 8 * j + 16) + 4) == a2 )
        return 1;
    }
    if ( Ogre::OGLShaderProgram::hasConstant(*(_DWORD *)(a1 + 4 * i + 240), a2) )
      return 1;
  }
  return 0;
}


//======================================================================
// Ogre::OGLShaderTechImpl::getSamplerIndex(unsigned int,char const*)
// address: 0x0025EC24   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Ogre::OGLShaderTechImpl::getSamplerIndex(Ogre::OGLShaderProgram **this, unsigned int a2, const char *a3)
{
  return Ogre::OGLShaderProgram::getSamplerIndex(*(this + a2 + 60), a3);
}


//======================================================================
// Ogre::OGLShaderTechImpl::OGLShaderTechImpl(Ogre::TechPassData *)
// address: 0x0025EC34   size: 0x96 (150 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17OGLShaderTechImplC2EPNS_12TechPassDataE'
Ogre::OGLShaderTechImpl *__fastcall Ogre::OGLShaderTechImpl::OGLShaderTechImpl(
        Ogre::OGLShaderTechImpl *this,
        Ogre::TechPassData *a2)
{
  unsigned int v3; // r7
  Ogre::OGLShaderTechImpl *v4; // r5
  Ogre::OGLCompiledShader *v5; // r2
  Ogre::OGLCompiledShader **v6; // r6
  Ogre::OGLCompiledShader *v7; // r3
  int v8; // r0
  Ogre::OGLCompiledShader *v10; // [sp+0h] [bp-14h]
  Ogre::OGLShaderProgram *v11; // [sp+4h] [bp-10h]
  Ogre::OGLCompiledShader *v13; // [sp+Ch] [bp-8h]

  Ogre::ShaderTechImpl::ShaderTechImpl(this, a2);
  v3 = 0;
  *(_DWORD *)this = &off_459FA0;
  *((_DWORD *)this + 1) = &off_459FDC;
  j_memset((char *)this + 240, 0, 0x10u);
  v4 = this;
  v5 = nullptr;
  v6 = (Ogre::OGLCompiledShader **)((char *)a2 + 12);
  v7 = nullptr;
  while ( v3 < *((_DWORD *)a2 + 78) )
  {
    v10 = *(v6 - 1);
    v13 = *v6;
    if ( v10 == v7 && v13 == v5 )
    {
      v8 = *((_DWORD *)v4 + 59);
      *((_DWORD *)v4 + 60) = v8;
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
    }
    else
    {
      v11 = (Ogre::OGLShaderProgram *)operator new(0x104u);
      Ogre::OGLShaderProgram::OGLShaderProgram(v11);
      *((_DWORD *)v4 + 60) = v11;
      Ogre::OGLShaderProgram::init(v11, v10, v13);
    }
    ++v3;
    v6 += 19;
    v4 = (Ogre::OGLShaderTechImpl *)((char *)v4 + 4);
    v5 = v13;
    v7 = v10;
  }
  return this;
}


//======================================================================
// Ogre::OGLShaderTechImpl::setTexture(Ogre::ShaderParamUsage,Ogre::HardwarePixelBuffer *,int)
// address: 0x0025ED54   size: 0xC8 (200 bytes)
//======================================================================
void __fastcall Ogre::OGLShaderTechImpl::setTexture(int a1, int a2, int a3, int a4)
{
  int v5; // r7
  int v6; // r5
  int v7; // r4
  int *v8; // r4
  int v9; // r1
  GLint v10; // r2
  int i; // [sp+0h] [bp-14h]
  int v12; // [sp+4h] [bp-10h]

  v5 = *(_DWORD *)(a1 + 12) + 76 * *(_DWORD *)(a1 + 16) + 8;
  v6 = v5;
  for ( i = 0; i < *(_DWORD *)(v5 + 8); ++i )
  {
    v7 = *(_DWORD *)(v6 + 16);
    if ( *(_DWORD *)(v7 + 4) != a2 )
      goto LABEL_14;
    j_glActiveTexture(i + 33984);
    if ( a3 != 0 )
    {
      v12 = *(unsigned __int8 *)(a3 + 24);
      j_glBindTexture(0xDE1u, *(_DWORD *)(a3 + 20));
      j_glUniform1i();
      v8 = (int *)(v7 + 4 * a4);
      Ogre::SetSamplerAddress(0x2802u, v8[2]);
      Ogre::SetSamplerAddress(0x2803u, v8[6]);
      v9 = *(unsigned __int8 *)(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 45);
      if ( *(_BYTE *)(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 45) != 0 )
      {
        j_glTexParameteri(0xDE1u, 0x2801u, 9728);
        goto LABEL_10;
      }
      if ( v12 != 0 )
        v9 = v8[18];
      Ogre::SetSamplerMinFilter(v8[10], v9);
      if ( v8[14] == 2 )
LABEL_10:
        v10 = 9729;
      else
        v10 = 9728;
      j_glTexParameteri(0xDE1u, 0x2800u, v10);
      goto LABEL_14;
    }
    j_glBindTexture(0xDE1u, 0);
LABEL_14:
    v6 += 8;
  }
}

