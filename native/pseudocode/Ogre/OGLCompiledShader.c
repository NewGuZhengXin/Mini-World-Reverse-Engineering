// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLCompiledShader

//======================================================================
// Ogre::OGLCompiledShader::onCreate(void)
// address: 0x0025EE38   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::OGLCompiledShader::onCreate(Ogre::OGLCompiledShader *this)
{
  return 1;
}


//======================================================================
// Ogre::OGLCompiledShader::onLostDevice(void)
// address: 0x0025EE3C   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::OGLCompiledShader::onLostDevice(int this)
{
  if ( *(_DWORD *)(this + 28) != 0 )
    *(_DWORD *)(this + 28) = 0;
  return this;
}


//======================================================================
// Ogre::OGLCompiledShader::compileCode(Ogre::FixedString const&,Ogre::ShaderMacro const*,unsigned int)
// address: 0x0025EE4C   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Ogre::OGLCompiledShader::compileCode(int a1, const char **a2, int a3, unsigned int a4)
{
  Ogre::LogSetCurParam(
    (int)"D:/work/oworldsrc/client/RenderSystem_OGL/OgreOGLCompiledShader.cpp",
    (const char *)&word_30,
    8,
    a4);
  Ogre::LogMessage((Ogre *)"Cannot find opengl shader: %s", *a2);
  return 0;
}


//======================================================================
// Ogre::OGLCompiledShader::onResetDevice(void)
// address: 0x0025EE74   size: 0x3C (60 bytes)
//======================================================================
int __fastcall Ogre::OGLCompiledShader::onResetDevice(Ogre::OGLCompiledShader *this)
{
  int Shader; // r0
  int v3; // r3

  Shader = j_glCreateShader();
  v3 = 0;
  *((_DWORD *)this + 7) = Shader;
  if ( Shader != 0 )
  {
    j_glShaderSource();
    j_glCompileShader();
    return 1;
  }
  return v3;
}


//======================================================================
// Ogre::OGLCompiledShader::OGLCompiledShader(Ogre::COMPILED_TYPE)
// address: 0x0025EEB4   size: 0x44 (68 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17OGLCompiledShaderC2ENS_13COMPILED_TYPEE'
_DWORD *__fastcall Ogre::OGLCompiledShader::OGLCompiledShader(_DWORD *a1, int a2)
{
  Ogre::CompiledShader::CompiledShader(a1, a2);
  *a1 = &off_45A010;
  a1[7] = 0;
  a1[8] = 0;
  j_memset(a1 + 10, 0, 0x10u);
  a1[12] = a1 + 10;
  a1[13] = a1 + 10;
  a1[14] = 0;
  j_memset(a1 + 16, 0, 0x10u);
  a1[20] = 0;
  a1[18] = a1 + 16;
  a1[19] = a1 + 16;
  return a1;
}


//======================================================================
// Ogre::OGLCompiledShader::Symbol2RegIndex(Ogre::FixedString const&)
// address: 0x0025EEFC   size: 0x38 (56 bytes)
//======================================================================
int __fastcall Ogre::OGLCompiledShader::Symbol2RegIndex(Ogre::OGLCompiledShader *this, const Ogre::FixedString *a2)
{
  char *v2; // r0
  char *v3; // r3
  char *v4; // r2
  char *v5; // r4

  v2 = (char *)this + 40;
  v3 = *((char **)v2 + 1);
  v4 = v2;
  while ( v3 != nullptr )
  {
    if ( *((_DWORD *)v3 + 4) < *(_DWORD *)a2 )
    {
      v5 = *((char **)v3 + 3);
      v3 = v4;
    }
    else
    {
      v5 = *((char **)v3 + 2);
    }
    v4 = v3;
    v3 = v5;
  }
  if ( v4 == v2 || *(_DWORD *)a2 < *((_DWORD *)v4 + 4) )
    return -1;
  else
    return *((_DWORD *)v4 + 5);
}


//======================================================================
// Ogre::OGLCompiledShader::AttribName(Ogre::OGLVertexAttrib)
// address: 0x0025EF34   size: 0x34 (52 bytes)
//======================================================================
int __fastcall Ogre::OGLCompiledShader::AttribName(int a1, int a2)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r3
  _DWORD *v4; // r2
  _DWORD *v5; // r4
  int result; // r0

  v2 = (_DWORD *)(a1 + 64);
  v3 = (_DWORD *)v2[1];
  v4 = v2;
  while ( v3 != nullptr )
  {
    if ( v3[4] < a2 )
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
  if ( a2 >= v4[4] )
    return v4[5];
  return result;
}


//======================================================================
// Ogre::OGLCompiledShader::~OGLCompiledShader()
// address: 0x0025EF90   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17OGLCompiledShaderD1Ev'
void __fastcall Ogre::OGLCompiledShader::~OGLCompiledShader(Ogre::OGLCompiledShader *this)
{
  void *v2; // r1

  *(_DWORD *)this = &off_45A010;
  std::_Rb_tree<Ogre::OGLVertexAttrib,std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>,std::_Select1st<std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>>,std::less<Ogre::OGLVertexAttrib>,std::allocator<std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>>>::_M_erase(
    (int)this + 60,
    *((_DWORD *)this + 17));
  std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,int>,std::_Select1st<std::pair<Ogre::FixedString const,int>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,int>>>::_M_erase(
    (int)this + 36,
    *((_DWORD *)this + 11));
  Ogre::FixedString::~FixedString((Ogre::FixedString **)this + 8, v2);
  Ogre::CompiledShader::~CompiledShader(this);
}


//======================================================================
// Ogre::OGLCompiledShader::~OGLCompiledShader()
// address: 0x0025EFC8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLCompiledShader::~OGLCompiledShader(Ogre::OGLCompiledShader *this)
{
  Ogre::OGLCompiledShader::~OGLCompiledShader(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLCompiledShader::loadCodeCache(Ogre::DataStream *)
// address: 0x0025F034   size: 0x340 (832 bytes)
//======================================================================
int __fastcall Ogre::OGLCompiledShader::loadCodeCache(Ogre::OGLCompiledShader *this, Ogre::DataStream *a2)
{
  int v3; // r2
  int v4; // r3
  unsigned __int8 *v5; // r0
  unsigned __int8 *v6; // r1
  Ogre::DataStream *v7; // r6
  Ogre::DataStream *v8; // r4
  Ogre::DataStream *v9; // r3
  char *v10; // r1
  Ogre::FixedString *v11; // r7
  unsigned int v12; // r3
  Ogre::FixedString *v13; // r1
  Ogre::DataStream *v14; // r1
  Ogre::FixedString *v15; // r6
  Ogre::FixedString *v16; // r4
  Ogre::FixedString *v17; // r3
  char *v18; // r3
  int v19; // r2
  char *v20; // r1
  char *v21; // r7
  int v22; // r3
  void *v23; // r1
  void *v24; // r1
  Ogre::DataStream *v26; // r7
  int v27; // r0
  int v28; // r0
  _BOOL4 v29; // r6
  void *v30; // r1
  Ogre::FixedString *v31; // r0
  Ogre::FixedString *v32; // r7
  int v33; // r0
  int v34; // r0
  _BOOL4 v35; // r6
  Ogre::FixedString *v36; // r0
  void *v37; // r1
  Ogre::FixedString *v38; // r0
  Ogre::FixedString *v39; // [sp+0h] [bp-14Ch]
  Ogre::DataStream *i; // [sp+4h] [bp-148h]
  Ogre::DataStream *v41; // [sp+4h] [bp-148h]
  Ogre::DataStream *v42; // [sp+8h] [bp-144h]
  Ogre::DataStream *j; // [sp+8h] [bp-144h]
  char *v44; // [sp+Ch] [bp-140h]
  int v46; // [sp+18h] [bp-134h] BYREF
  int v47; // [sp+1Ch] [bp-130h] BYREF
  char v48[4]; // [sp+20h] [bp-12Ch] BYREF
  char v49[4]; // [sp+24h] [bp-128h] BYREF
  Ogre::FixedString *v50; // [sp+28h] [bp-124h] BYREF
  Ogre::DataStream *v51; // [sp+2Ch] [bp-120h] BYREF
  Ogre::DataStream *v52; // [sp+30h] [bp-11Ch]
  void *v53; // [sp+34h] [bp-118h] BYREF
  Ogre::FixedString *v54; // [sp+38h] [bp-114h] BYREF
  Ogre::FixedString *v55; // [sp+3Ch] [bp-110h] BYREF
  Ogre::FixedString *v56; // [sp+40h] [bp-10Ch]
  _BYTE v57[256]; // [sp+44h] [bp-108h] BYREF

  (*(void (__fastcall **)(Ogre::DataStream *, int *, int))(*(_DWORD *)a2 + 8))(a2, &v46, 4);
  for ( i = nullptr; (int)i < v46; i = (Ogre::DataStream *)((char *)i + 1) )
  {
    Ogre::CompiledShaderGroup::readSymbolName((Ogre::CompiledShaderGroup *)v57, (char *)&dword_100, (int)a2, i);
    (*(void (__fastcall **)(Ogre::DataStream *, Ogre::FixedString **, int))(*(_DWORD *)a2 + 8))(a2, &v50, 4);
    v5 = Ogre::FixedString::insert((Ogre::FixedString *)v57, (const char *)0xFFFFFFFF, v3, v4);
    v7 = *((Ogre::DataStream **)this + 11);
    v53 = v5;
    v42 = (Ogre::OGLCompiledShader *)((char *)this + 40);
    v8 = (Ogre::OGLCompiledShader *)((char *)this + 40);
    while ( v7 != nullptr )
    {
      v6 = *((unsigned __int8 **)v7 + 4);
      if ( v6 < v5 )
      {
        v9 = *((Ogre::DataStream **)v7 + 3);
        v7 = v8;
      }
      else
      {
        v9 = *((Ogre::DataStream **)v7 + 2);
      }
      v8 = v7;
      v7 = v9;
    }
    if ( v8 == v42 || (unsigned int)v5 < *((_DWORD *)v8 + 4) )
    {
      v55 = (Ogre::FixedString *)v5;
      Ogre::FixedString::addRef((int)v5, v6);
      v10 = (char *)this + 40;
      v56 = nullptr;
      v44 = (char *)this + 36;
      if ( v8 != v42 )
      {
        v11 = v55;
        v12 = *((_DWORD *)v8 + 4);
        if ( (unsigned int)v55 < v12 )
        {
          if ( v8 == *((Ogre::DataStream **)this + 12) )
            goto LABEL_44;
          v27 = sub_391E44(v8);
          v10 = *(char **)(v27 + 16);
          if ( v10 < (char *)v11 )
          {
            if ( *(_DWORD *)(v27 + 12) != 0 )
              goto LABEL_44;
            v8 = (Ogre::DataStream *)v27;
            goto LABEL_45;
          }
        }
        else
        {
          if ( v12 >= (unsigned int)v55 )
          {
LABEL_14:
            Ogre::FixedString::~FixedString(&v55, v10);
            goto LABEL_15;
          }
          if ( v8 == *((Ogre::DataStream **)this + 13) )
            goto LABEL_45;
          v28 = sub_391DDC(v8);
          v10 = *(char **)(v28 + 16);
          if ( v11 < (Ogre::FixedString *)v10 )
          {
            if ( *((_DWORD *)v8 + 3) != 0 )
            {
              v8 = (Ogre::DataStream *)v28;
LABEL_44:
              v7 = v8;
            }
LABEL_45:
            v26 = v8;
            v8 = v7;
LABEL_46:
            if ( v26 == nullptr )
              goto LABEL_14;
            v29 = true;
            if ( v8 == nullptr )
              goto LABEL_48;
            goto LABEL_51;
          }
        }
        std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,int>,std::_Select1st<std::pair<Ogre::FixedString const,int>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,int>>>::_M_get_insert_unique_pos(
          (int *)&v51,
          (int)v44,
          &v55);
        v7 = v51;
        v8 = v52;
        goto LABEL_45;
      }
      if ( *((_DWORD *)this + 14) == 0
        || *((_DWORD *)(v26 = *((Ogre::DataStream **)this + 13)) + 4) >= (unsigned int)v55 )
      {
        std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,int>,std::_Select1st<std::pair<Ogre::FixedString const,int>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,int>>>::_M_get_insert_unique_pos(
          (int *)&v51,
          (int)v44,
          &v55);
        v8 = v51;
        v26 = v52;
        goto LABEL_46;
      }
LABEL_48:
      v29 = v26 == v42 || (unsigned int)v55 < *((_DWORD *)v26 + 4);
LABEL_51:
      v8 = (Ogre::DataStream *)operator new(0x18u);
      if ( v8 != (Ogre::DataStream *)-16 )
      {
        v31 = v55;
        *((_DWORD *)v8 + 4) = v55;
        Ogre::FixedString::addRef((int)v31, v30);
        *((_DWORD *)v8 + 5) = v56;
      }
      sub_391E64(v29, v8, v26, v42);
      ++*((_DWORD *)this + 14);
      goto LABEL_14;
    }
LABEL_15:
    v13 = v50;
    *((_DWORD *)v8 + 5) = v50;
    Ogre::FixedString::~FixedString((Ogre::FixedString **)&v53, v13);
  }
  (*(void (__fastcall **)(Ogre::DataStream *, int *, int))(*(_DWORD *)a2 + 8))(a2, &v47, 4);
  for ( j = nullptr; (int)j < v47; j = (Ogre::DataStream *)((char *)j + 1) )
  {
    Ogre::CompiledShaderGroup::readSymbolName((Ogre::CompiledShaderGroup *)v57, (char *)&dword_100, (int)a2, j);
    (*(void (__fastcall **)(Ogre::DataStream *, char *, int))(*(_DWORD *)a2 + 8))(a2, v48, 4);
    (*(void (__fastcall **)(Ogre::DataStream *, char *, int))(*(_DWORD *)a2 + 8))(a2, v49, 4);
    v15 = *((Ogre::FixedString **)this + 17);
    v39 = (Ogre::OGLCompiledShader *)((char *)this + 64);
    v16 = (Ogre::OGLCompiledShader *)((char *)this + 64);
    while ( v15 != nullptr )
    {
      v14 = *((Ogre::DataStream **)v15 + 4);
      if ( (int)v14 < (int)j )
      {
        v17 = *((Ogre::FixedString **)v15 + 3);
        v15 = v16;
      }
      else
      {
        v17 = *((Ogre::FixedString **)v15 + 2);
      }
      v16 = v15;
      v15 = v17;
    }
    v18 = (char *)this + 64;
    if ( v16 == v39 || (v14 = j, v19 = *((_DWORD *)v16 + 4), (int)j < v19) )
    {
      v50 = nullptr;
      v53 = j;
      v54 = nullptr;
      Ogre::FixedString::addRef(0, v14);
      v20 = (char *)this + 60;
      v41 = (Ogre::OGLCompiledShader *)((char *)this + 60);
      if ( v16 != v39 )
      {
        v21 = (char *)v53;
        v22 = *((_DWORD *)v16 + 4);
        if ( (int)v53 < v22 )
        {
          if ( v16 == *((Ogre::FixedString **)this + 18) )
            goto LABEL_67;
          v33 = sub_391E44(v16);
          v20 = *(char **)(v33 + 16);
          if ( (int)v20 < (int)v21 )
          {
            if ( *(_DWORD *)(v33 + 12) != 0 )
              goto LABEL_67;
            v16 = (Ogre::FixedString *)v33;
            goto LABEL_68;
          }
        }
        else
        {
          if ( v22 >= (int)v53 )
          {
LABEL_29:
            Ogre::FixedString::~FixedString(&v54, v20);
            Ogre::FixedString::~FixedString(&v50, v23);
            goto LABEL_30;
          }
          if ( v16 == *((Ogre::FixedString **)this + 19) )
            goto LABEL_68;
          v34 = sub_391DDC(v16);
          v20 = *(char **)(v34 + 16);
          if ( (int)v21 < (int)v20 )
          {
            if ( *((_DWORD *)v16 + 3) != 0 )
            {
              v16 = (Ogre::FixedString *)v34;
LABEL_67:
              v15 = v16;
            }
LABEL_68:
            v32 = v16;
            v16 = v15;
LABEL_69:
            if ( v32 == nullptr )
              goto LABEL_29;
            v35 = true;
            if ( v16 == nullptr )
              goto LABEL_71;
            goto LABEL_74;
          }
        }
        std::_Rb_tree<Ogre::OGLVertexAttrib,std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>,std::_Select1st<std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>>,std::less<Ogre::OGLVertexAttrib>,std::allocator<std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>>>::_M_get_insert_unique_pos(
          (int *)&v55,
          (int)v41,
          &v53);
        v15 = v55;
        v16 = v56;
        goto LABEL_68;
      }
      if ( *((_DWORD *)this + 20) == 0 || *((_DWORD *)(v32 = *((Ogre::FixedString **)this + 19)) + 4) >= (int)v53 )
      {
        std::_Rb_tree<Ogre::OGLVertexAttrib,std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>,std::_Select1st<std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>>,std::less<Ogre::OGLVertexAttrib>,std::allocator<std::pair<Ogre::OGLVertexAttrib const,Ogre::FixedString>>>::_M_get_insert_unique_pos(
          (int *)&v55,
          (int)v41,
          &v53);
        v16 = v55;
        v32 = v56;
        goto LABEL_69;
      }
LABEL_71:
      v35 = v32 == v39 || (int)v53 < *((_DWORD *)v32 + 4);
LABEL_74:
      v36 = (Ogre::FixedString *)operator new(0x18u);
      v16 = v36;
      if ( v36 != (Ogre::FixedString *)-16 )
      {
        v37 = v53;
        *((_DWORD *)v36 + 4) = v53;
        v38 = v54;
        *((_DWORD *)v16 + 5) = v54;
        Ogre::FixedString::addRef((int)v38, v37);
      }
      sub_391E64(v35, v16, v32, v39);
      ++*((_DWORD *)this + 20);
      goto LABEL_29;
    }
LABEL_30:
    v53 = Ogre::FixedString::insert((Ogre::FixedString *)v57, (const char *)0xFFFFFFFF, v19, (int)v18);
    Ogre::FixedString::operator=((int *)v16 + 5, (int *)&v53);
    Ogre::FixedString::~FixedString((Ogre::FixedString **)&v53, v24);
  }
  return Ogre::CompiledShader::loadCodeCache(this, a2);
}

