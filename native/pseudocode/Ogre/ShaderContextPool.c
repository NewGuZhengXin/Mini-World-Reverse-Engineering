// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ShaderContextPool

//======================================================================
// Ogre::ShaderContextPool::LessThan(Ogre::ShaderContext const*,Ogre::ShaderContext const*)
// address: 0x0015C88A   size: 0x3E (62 bytes)
//======================================================================
int __fastcall Ogre::ShaderContextPool::LessThan(
        Ogre::ShaderContextPool *this,
        const Ogre::ShaderContext *a2,
        const Ogre::ShaderContext *a3)
{
  unsigned int v3; // r3
  unsigned int v4; // r2
  unsigned int v6; // r2
  unsigned int v7; // r3
  int v9; // r0

  v3 = *((_DWORD *)this + 6);
  v4 = *((_DWORD *)a2 + 6);
  if ( v3 == v4 )
  {
    if ( (v3 & 1) != 0 )
      return *((float *)this + 5) > *((float *)a2 + 5);
    v6 = *((_DWORD *)this + 3);
    v7 = *((_DWORD *)a2 + 3);
    if ( v6 == v7 )
      return *((float *)this + 5) < *((float *)a2 + 5);
    v9 = -(v6 < v7);
  }
  else
  {
    v9 = -(v3 < v4);
  }
  return -v9;
}


//======================================================================
// Ogre::ShaderContextPool::applyShaderValueParam(unsigned int,Ogre::ShaderTechnique *)
// address: 0x0015CA20   size: 0x2A (42 bytes)
//======================================================================
Ogre::ShaderContextPool *__fastcall Ogre::ShaderContextPool::applyShaderValueParam(
        Ogre::ShaderContextPool *this,
        unsigned int a2,
        Ogre::ShaderTechnique *a3)
{
  _DWORD *v3; // r4
  Ogre::ShaderContextPool *v5; // [sp+0h] [bp-Ch]

  v5 = this;
  if ( a3 != nullptr )
  {
    v3 = (_DWORD *)(*((_DWORD *)this + 563) + 20 * a2);
    v5 = (Ogre::ShaderContextPool *)v3[2];
    (*(void (__fastcall **)(Ogre::ShaderTechnique *, _DWORD, int, _DWORD))(*(_DWORD *)a3 + 20))(
      a3,
      *v3,
      *((_DWORD *)this + 559) + v3[3],
      v3[1]);
  }
  return v5;
}


//======================================================================
// Ogre::ShaderContextPool::getHardwareTexture(int,Ogre::ShaderContextPool::HardwareTexObj &)
// address: 0x0015CA54   size: 0x2C (44 bytes)
//======================================================================
int __fastcall Ogre::ShaderContextPool::getHardwareTexture(int result, int a2, _DWORD *a3)
{
  _DWORD *v4; // r5
  int v5; // r3

  v4 = (_DWORD *)(*(_DWORD *)(result + 2268) + 12 * a2);
  v5 = v4[1];
  *a3 = *v4;
  if ( v5 != 0 )
  {
    result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v4[1] + 32))(v4[1]);
    a3[1] = result;
    a3[2] = v4[2];
  }
  else
  {
    a3[1] = 0;
  }
  return result;
}


//======================================================================
// Ogre::ShaderContextPool::applyTextureParam(unsigned int,Ogre::ShaderTechnique *)
// address: 0x0015CAE8   size: 0x3C (60 bytes)
//======================================================================
int __fastcall Ogre::ShaderContextPool::applyTextureParam(int this, unsigned int a2, Ogre::ShaderTechnique *a3)
{
  int v4; // r2
  int *v5; // r5
  int v6; // r3
  int v7; // r6
  int (__fastcall *v8)(Ogre::ShaderTechnique *, int, int, int); // r7
  int v9; // r0

  if ( a3 != nullptr )
  {
    v4 = *(_DWORD *)a3;
    v5 = (int *)(*(_DWORD *)(this + 2268) + 12 * a2);
    v6 = v5[1];
    v7 = *v5;
    if ( v6 != 0 )
    {
      v8 = *(int (__fastcall **)(Ogre::ShaderTechnique *, int, int, int))(v4 + 28);
      v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 32))(v5[1]);
      return v8(a3, v7, v9, v5[2]);
    }
    else
    {
      return (*(int (__fastcall **)(Ogre::ShaderTechnique *, int, _DWORD))(v4 + 28))(a3, v7, 0);
    }
  }
  return this;
}


//======================================================================
// Ogre::ShaderContextPool::drawRange(Ogre::ShaderTechnique *,unsigned int,unsigned int,int)
// address: 0x0015CBB8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall Ogre::ShaderContextPool::drawRange(
        int this,
        Ogre::ShaderTechnique *a2,
        const char *a3,
        unsigned int a4,
        int a5)
{
  int v6; // r5
  int (__fastcall **v7)(_DWORD); // r3
  unsigned int v8; // r7
  const char *i; // r6
  Ogre::ShaderContextPool *v10; // [sp+0h] [bp-1Ch]
  int v12; // [sp+8h] [bp-14h]
  int v13; // [sp+10h] [bp-Ch]

  v13 = this;
  if ( a2 != nullptr )
  {
    v6 = 0;
    v12 = (**(int (__fastcall ***)(Ogre::ShaderTechnique *))a2)(a2);
    while ( 1 )
    {
      v7 = *(int (__fastcall ***)(_DWORD))a2;
      if ( v6 == v12 )
        break;
      ((void (__fastcall *)(Ogre::ShaderTechnique *, int))v7[2])(a2, v6);
      v8 = 4 * (_DWORD)a3;
      for ( i = a3; (unsigned int)i < a4; ++i )
      {
        v10 = *(Ogre::ShaderContextPool **)(*(_DWORD *)(v13 + 2052) + v8);
        if ( v10 == nullptr )
        {
          Ogre::LogSetCurParam(
            (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreShaderContext.cpp",
            (_BYTE *)&stru_218.st_value + 3,
            8,
            0);
          Ogre::LogMessage((Ogre *)"pcontex=NULL: j=%d", i);
        }
        Ogre::ShaderContext::draw(v10, a2);
        v8 += 4;
      }
      ++v6;
      (*(void (__fastcall **)(Ogre::ShaderTechnique *))(*(_DWORD *)a2 + 12))(a2);
    }
    return ((int (__fastcall **)(Ogre::ShaderTechnique *))v7)[1](a2);
  }
  return this;
}


//======================================================================
// Ogre::ShaderContextPool::present(void)
// address: 0x0015CC4C   size: 0x2A (42 bytes)
//======================================================================
int __fastcall Ogre::ShaderContextPool::present(Ogre::ShaderContextPool *this)
{
  int v1; // r4

  v1 = *((_DWORD *)this + 520);
  if ( v1 != 0
    && Ogre::BaseObject::isKindOf(
         *((Ogre::BaseObject **)this + 520),
         (const Ogre::RuntimeClass *)&Ogre::RenderWindow::m_RTTI) != 0 )
  {
    return (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 52))(v1);
  }
  else
  {
    return 0;
  }
}


//======================================================================
// Ogre::ShaderContextPool::drawWireframe(Ogre::ColourValue const&)
// address: 0x0015CC7C   size: 0x94 (148 bytes)
//======================================================================
int __fastcall Ogre::ShaderContextPool::drawWireframe(int result)
{
  int v1; // r7
  Ogre::ShaderTechnique *v2; // r4
  unsigned int i; // r5
  int v4; // r6
  int v5; // r3
  Ogre::ShaderContextPool *v6; // [sp+8h] [bp-1Ch]
  int v7; // [sp+Ch] [bp-18h]

  v1 = result;
  v2 = *(Ogre::ShaderTechnique **)(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 56);
  if ( v2 != nullptr )
  {
    result = (*(int (__fastcall **)(_DWORD, const char *))(*(_DWORD *)v2 + 16))(
               *(_DWORD *)(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 56),
               "Color");
    for ( i = 0; i < *(_DWORD *)(v1 + 2064); ++i )
    {
      v4 = 0;
      v6 = *(Ogre::ShaderContextPool **)(4 * i + *(_DWORD *)(v1 + 2052));
      v7 = (**(int (__fastcall ***)(Ogre::ShaderTechnique *))v2)(v2);
      Ogre::ShaderContext::applyShaderParam(v6, 0);
      while ( 1 )
      {
        v5 = *(_DWORD *)v2;
        if ( v4 == v7 )
          break;
        (*(void (__fastcall **)(Ogre::ShaderTechnique *, int))(v5 + 8))(v2, v4);
        Ogre::ShaderContext::draw(v6, v2);
        ++v4;
        (*(void (__fastcall **)(Ogre::ShaderTechnique *))(*(_DWORD *)v2 + 12))(v2);
      }
      result = (*(int (__fastcall **)(Ogre::ShaderTechnique *))(v5 + 4))(v2);
    }
  }
  return result;
}


//======================================================================
// Ogre::ShaderContextPool::endQueue(void)
// address: 0x0015CD1C   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Ogre::ShaderContextPool::endQueue(int this)
{
  *(_DWORD *)(*(_DWORD *)(this + 2072) - 4) = *(_DWORD *)(this + 2064);
  return this;
}


//======================================================================
// Ogre::ShaderContextPool::getQueueSize(void)
// address: 0x0015CD30   size: 0x14 (20 bytes)
//======================================================================
int __fastcall Ogre::ShaderContextPool::getQueueSize(Ogre::ShaderContextPool *this)
{
  return -1762037865 * ((*((_DWORD *)this + 518) - *((_DWORD *)this + 517)) >> 2);
}


//======================================================================
// Ogre::ShaderContextPool::startQueue(Ogre::ContextQueDesc const&)
// address: 0x0015D01C   size: 0x48 (72 bytes)
//======================================================================
void __fastcall Ogre::ShaderContextPool::startQueue(Ogre::ShaderContextPool *this, const Ogre::ContextQueDesc *a2)
{
  char *v4; // r4
  char *v5; // r1

  v4 = (char *)this + 2068;
  v5 = *((char **)this + 518);
  if ( v5 == *((char **)this + 519) )
  {
    std::vector<Ogre::ContextQueDesc>::_M_insert_aux((int)this + 2068, v5, a2);
  }
  else
  {
    if ( v5 != nullptr )
      j_memcpy(*((void **)this + 518), a2, 0x9Cu);
    *((_DWORD *)v4 + 1) += 156;
  }
  *(_DWORD *)(*((_DWORD *)this + 518) - 8) = *((_DWORD *)this + 516);
  *(_DWORD *)(*((_DWORD *)this + 518) - 4) = -1;
}


//======================================================================
// Ogre::ShaderContextPool::reset(void)
// address: 0x0015D198   size: 0x72 (114 bytes)
//======================================================================
_DWORD *__fastcall Ogre::ShaderContextPool::reset(_DWORD *this)
{
  _DWORD *v1; // r4
  unsigned int i; // r5
  unsigned int j; // r5
  int v4; // r3

  v1 = this;
  for ( i = 0; i < v1[516]; ++i )
  {
    this = *(_DWORD **)(4 * i + v1[513]);
    if ( this != nullptr )
      this = Ogre::ShaderContext::reset(this, (int)v1);
  }
  for ( j = 0; j < v1[570]; ++j )
  {
    this = *(_DWORD **)(v1[567] + 12 * j + 4);
    if ( this != nullptr )
      this = Ogre::BaseObject::release(this);
  }
  v1[516] = 0;
  v1[562] = 0;
  v1[566] = 0;
  v1[570] = 0;
  v4 = v1[517];
  if ( -1762037865 * ((v1[518] - v4) >> 2) != 0 )
    v1[518] = v4;
  return this;
}


//======================================================================
// Ogre::ShaderContextPool::~ShaderContextPool()
// address: 0x0015D22C   size: 0x68 (104 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17ShaderContextPoolD2Ev'
void __fastcall Ogre::ShaderContextPool::~ShaderContextPool(Ogre::ShaderContextPool *this)
{
  unsigned int i; // r5
  int v3; // r3
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0
  void *v7; // r0
  void *v8; // r0
  void *v9; // r0

  Ogre::ShaderContextPool::reset(this);
  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 513);
    if ( i >= (*((_DWORD *)this + 514) - v3) >> 2 )
      break;
    v4 = *(void **)(4 * i + v3);
    if ( v4 != nullptr )
      operator delete(v4);
  }
  v5 = *((void **)this + 567);
  if ( v5 != nullptr )
    operator delete(v5);
  v6 = *((void **)this + 563);
  if ( v6 != nullptr )
    operator delete(v6);
  v7 = *((void **)this + 559);
  if ( v7 != nullptr )
    operator delete(v7);
  v8 = *((void **)this + 517);
  if ( v8 != nullptr )
    operator delete(v8);
  v9 = *((void **)this + 513);
  if ( v9 != nullptr )
    operator delete(v9);
}


//======================================================================
// Ogre::ShaderContextPool::newContext(Ogre::RenderLayer)
// address: 0x0015D3D0   size: 0x68 (104 bytes)
//======================================================================
_DWORD *__fastcall Ogre::ShaderContextPool::newContext(_DWORD *a1, int a2)
{
  _DWORD *v3; // r7
  _DWORD *v4; // r5
  int v5; // r3
  _DWORD *v8; // [sp+Ch] [bp-8h] BYREF

  v3 = a1 + 513;
  if ( a1[516] != (a1[514] - a1[513]) >> 2 )
    goto LABEL_4;
  v4 = (_DWORD *)operator new(0x84u);
  Ogre::ShaderContext::ShaderContext(v4, (int)a1);
  v8 = v4;
  if ( v4 != nullptr )
  {
    std::vector<Ogre::ShaderContext *>::push_back(__SPAIR64__(&v8, (unsigned int)v3));
LABEL_4:
    v5 = a1[516];
    a1[516] = v5 + 1;
    v4 = *(_DWORD **)(4 * v5 + a1[513]);
    v4[6] = v4[6] & 0xFFFFFF | (a2 << 24);
    v4[5] = 0;
    v4[2] = 0;
  }
  return v4;
}


//======================================================================
// Ogre::ShaderContextPool::drawQueue(Ogre::ContextQueDesc const&)
// address: 0x0015D978   size: 0x1B2 (434 bytes)
//======================================================================
int __fastcall Ogre::ShaderContextPool::drawQueue(Ogre::ShaderContextPool *this, const Ogre::ContextQueDesc *a2)
{
  int result; // r0
  int v5; // r7
  unsigned int i; // r5
  int v7; // r3
  int j; // r7
  char *v9; // r0
  char *v10; // r5
  _DWORD *v11; // r5
  int v12; // r0
  unsigned int v13; // r6
  int v14; // r7
  Ogre::ShaderTechnique *v15; // r1
  Ogre::ShaderTechnique *v16; // [sp+20h] [bp-24h]
  unsigned int v17; // [sp+24h] [bp-20h]
  int v18; // [sp+28h] [bp-1Ch]
  unsigned int v19; // [sp+2Ch] [bp-18h]
  char *v20; // [sp+30h] [bp-14h]
  char *v21; // [sp+34h] [bp-10h]

  *(float *)this = (float)(unsigned int)Ogre::Timer::getSystemTick((Ogre::Timer *)&GLOBAL_OFFSET_TABLE_) * 0.001;
  v19 = *((_DWORD *)a2 + 37);
  v17 = *((_DWORD *)a2 + 38);
  if ( v17 == -1 )
    v17 = *((_DWORD *)this + 516);
  if ( v17 > (*((_DWORD *)this + 514) - *((_DWORD *)this + 513)) >> 2 )
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreShaderContext.cpp",
      (_BYTE *)&stru_258.st_size + 3,
      8,
      0x804u);
    Ogre::LogMessage((Ogre *)"error m_nUsedContext = %d", *((const char **)this + 516));
    v17 = (*((_DWORD *)this + 514) - *((_DWORD *)this + 513)) >> 2;
  }
  result = 2052;
  if ( v19 != (*((_DWORD *)this + 514) - *((_DWORD *)this + 513)) >> 2 )
  {
    v18 = 4 * v19;
    v5 = 4 * v19;
    for ( i = v19; i < v17; ++i )
    {
      Ogre::ShaderContext::prepareDraw(*(int **)(*((_DWORD *)this + 513) + v5), *((_DWORD *)a2 + 36));
      v5 += 4;
    }
    v7 = *((_DWORD *)this + 513);
    v20 = (char *)(v7 + v18);
    v21 = (char *)(v7 + 4 * v17);
    for ( j = (int)(4 * v17 - v18) >> 2; ; j >>= 1 )
    {
      if ( j <= 0 )
      {
        v10 = nullptr;
        std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
          (int)v20,
          v21,
          (int (__fastcall *)(int, int))Ogre::ShaderContextPool::LessThan);
        goto LABEL_15;
      }
      v9 = (char *)operator new(4 * j, (const std::nothrow_t *)&std::nothrow);
      v10 = v9;
      if ( v9 != nullptr )
        break;
    }
    std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,Ogre::ShaderContext **,int,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
      v20,
      v21,
      v9,
      j,
      (int (__fastcall *)(int, int))Ogre::ShaderContextPool::LessThan);
LABEL_15:
    operator delete(v10, (const std::nothrow_t *)&std::nothrow);
    v11 = (_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton;
    v12 = *(_DWORD *)(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 48);
    if ( *(_DWORD *)a2 != v12 )
    {
      if ( v12 != 0 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 36))(v12);
      if ( *(_DWORD *)a2 != 0 )
        (*(void (__fastcall **)(_DWORD))(**(_DWORD **)a2 + 32))(*(_DWORD *)a2);
      v11[12] = *(_DWORD *)a2;
    }
    (*(void (__fastcall **)(_DWORD *, const Ogre::ContextQueDesc *))(*v11 + 60))(v11, a2);
    v11[9] = v11[9] - v19 + v17;
    v13 = v19 + 1;
    v14 = v18 + 4;
    v15 = *(Ogre::ShaderTechnique **)(*(_DWORD *)(*((_DWORD *)this + 513) + 4 * v19) + 12);
    while ( v13 < v17 )
    {
      v16 = *(Ogre::ShaderTechnique **)(*(_DWORD *)(*((_DWORD *)this + 513) + v14) + 12);
      if ( v16 != v15 )
      {
        ++v11[10];
        Ogre::ShaderContextPool::drawRange((int)this, v15, (const char *)v19, v13, 0);
        v19 = v13;
      }
      ++v13;
      v14 += 4;
      v15 = v16;
    }
    result = v19;
    if ( v19 != v17 )
    {
      ++v11[10];
      return Ogre::ShaderContextPool::drawRange((int)this, v15, (const char *)v19, v17, 0);
    }
  }
  return result;
}


//======================================================================
// Ogre::ShaderContextPool::drawQueue(int)
// address: 0x0015DB50   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::ShaderContextPool::drawQueue(Ogre::ShaderContextPool *this, int a2)
{
  return Ogre::ShaderContextPool::drawQueue(this, (const Ogre::ContextQueDesc *)(*((_DWORD *)this + 517) + 156 * a2));
}


//======================================================================
// Ogre::ShaderContextPool::draw(void)
// address: 0x0015DB68   size: 0x2E (46 bytes)
//======================================================================
int __fastcall Ogre::ShaderContextPool::draw(int this)
{
  Ogre::ShaderContextPool *v1; // r5
  unsigned int i; // r4
  int v3; // r3

  v1 = (Ogre::ShaderContextPool *)this;
  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)v1 + 517);
    if ( i >= -1762037865 * ((*((_DWORD *)v1 + 518) - v3) >> 2) )
      break;
    this = Ogre::ShaderContextPool::drawQueue(v1, (const Ogre::ContextQueDesc *)(v3 + 156 * i));
  }
  return this;
}


//======================================================================
// Ogre::ShaderContextPool::addValueParam(Ogre::ShaderParamUsage,void const*,Ogre::ShaderParamType,unsigned int)
// address: 0x0015DD44   size: 0xEC (236 bytes)
//======================================================================
int __fastcall Ogre::ShaderContextPool::addValueParam(_DWORD *a1, int a2, const void *a3, int a4, int a5)
{
  int v6; // r5
  int v7; // r0
  _BYTE *v8; // r1
  unsigned int v9; // r5
  _BYTE *v10; // r2
  unsigned int v11; // r6
  _DWORD *v12; // r3
  int result; // r0
  unsigned int v15; // [sp+8h] [bp-54h]
  char *v16; // [sp+Ch] [bp-50h]
  int v17; // [sp+10h] [bp-4Ch]
  int v18; // [sp+14h] [bp-48h]
  int v19; // [sp+18h] [bp-44h]
  unsigned __int8 v22[21]; // [sp+2Fh] [bp-2Dh] BYREF
  _DWORD v23[6]; // [sp+44h] [bp-18h] BYREF

  v17 = dword_42E0C8[a4] * a5;
  v6 = a1[562];
  v7 = (int)(a1 + 559);
  v8 = *(_BYTE **)(v7 + 4);
  v18 = v6;
  v9 = v17 + v6;
  v10 = &v8[-a1[559]];
  if ( v9 > (unsigned int)v10 )
  {
    v22[0] = 0;
    std::vector<unsigned char>::_M_fill_insert(v7, v8, v9 - (_DWORD)v10, v22);
  }
  j_memcpy((void *)(a1[559] + v18), a3, v17);
  a1[562] = v9;
  v11 = a1[566];
  v16 = (char *)a1[564];
  v19 = a1[563];
  if ( v11 == -858993459 * ((int)&v16[-v19] >> 2) )
  {
    v15 = v11 + 1;
    j_memset(&v22[1], 0, 0x14u);
    qmemcpy(v23, &v22[1], 20);
    if ( v11 + 1 <= v11 )
    {
      if ( v15 < v11 )
        a1[564] = v19 + 20 * v15;
    }
    else
    {
      std::vector<Ogre::ShaderContextPool::ValueParam>::_M_fill_insert((int)(a1 + 563), v16, 1u, v23);
    }
  }
  v12 = (_DWORD *)(a1[563] + 20 * a1[566]);
  v12[3] = v18;
  *v12 = a2;
  v12[4] = v17;
  v12[1] = a4;
  v12[2] = a5;
  result = a1[566];
  a1[566] = result + 1;
  return result;
}


//======================================================================
// Ogre::ShaderContextPool::ShaderContextPool(unsigned int)
// address: 0x0015DE90   size: 0x1DE (478 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17ShaderContextPoolC2Ej'
Ogre::ShaderContextPool *__fastcall Ogre::ShaderContextPool::ShaderContextPool(
        Ogre::ShaderContextPool *this,
        unsigned int a2)
{
  int v2; // r7
  char *v3; // r5
  char *v5; // r4
  char *v6; // r0
  _BYTE *v7; // r5
  char *v8; // r4
  void *v9; // r0
  unsigned int v10; // r4
  void *v11; // r7
  char *v12; // r5
  void *v13; // r0
  char *v14; // r5
  void *v15; // r0
  _DWORD *v17; // [sp+0h] [bp-1Ch]
  _BYTE *v18; // [sp+0h] [bp-1Ch]
  int v19; // [sp+0h] [bp-1Ch]
  int v20; // [sp+0h] [bp-1Ch]
  void *v21; // [sp+4h] [bp-18h]
  _DWORD *v23; // [sp+14h] [bp-8h] BYREF

  v2 = 0;
  *((_DWORD *)this + 513) = 0;
  v3 = (char *)this + 2052;
  *((_DWORD *)this + 514) = 0;
  *((_DWORD *)this + 515) = 0;
  *((_DWORD *)this + 516) = 0;
  *((_DWORD *)this + 517) = 0;
  *((_DWORD *)this + 518) = 0;
  *((_DWORD *)this + 519) = 0;
  *((_DWORD *)this + 520) = 0;
  *((_DWORD *)this + 521) = 0;
  *((_DWORD *)this + 531) = 0;
  *((_DWORD *)this + 556) = 1;
  *((_DWORD *)this + 557) = 0;
  *((_DWORD *)this + 558) = 0;
  *((_DWORD *)this + 529) = 0;
  *((_DWORD *)this + 526) = 0;
  *((_DWORD *)this + 525) = 0;
  *((_DWORD *)this + 530) = 1065353216;
  *((_DWORD *)this + 528) = 1065353216;
  *((_DWORD *)this + 527) = 1065353216;
  v5 = (char *)this + 2236;
  *((_DWORD *)this + 559) = 0;
  *((_DWORD *)this + 560) = 0;
  *((_DWORD *)this + 561) = 0;
  *((_DWORD *)this + 563) = 0;
  *((_DWORD *)this + 564) = 0;
  *((_DWORD *)this + 565) = 0;
  *((_DWORD *)this + 567) = 0;
  v6 = (char *)this + 2268;
  *((_DWORD *)v6 + 1) = 0;
  *((_DWORD *)v6 + 2) = 0;
  while ( v2 != a2 )
  {
    v23 = nullptr;
    v17 = (_DWORD *)operator new(0x84u);
    Ogre::ShaderContext::ShaderContext(v17, (int)this);
    v23 = v17;
    if ( v17 != nullptr )
      std::vector<Ogre::ShaderContext *>::push_back(__SPAIR64__(&v23, (unsigned int)v3));
    ++v2;
  }
  v7 = *((_BYTE **)this + 559);
  if ( *((_DWORD *)v5 + 2) - (int)v7 < 16 * a2 )
  {
    v18 = *((_BYTE **)v5 + 1);
    v8 = (char *)operator new(16 * a2);
    std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned char>(v7, v18, v8);
    v9 = *((void **)this + 559);
    if ( v9 != nullptr )
      operator delete(v9);
    *((_DWORD *)this + 559) = v8;
    *((_DWORD *)this + 560) = &v8[v18 - v7];
    *((_DWORD *)this + 561) = &v8[16 * a2];
  }
  *((_DWORD *)this + 562) = 0;
  v10 = 2 * a2;
  if ( 2 * a2 > 0xCCCCCCC )
    sub_3BD058("vector::reserve");
  v11 = *((void **)this + 563);
  if ( -858993459 * ((*((_DWORD *)this + 565) - (int)v11) >> 2) < v10 )
  {
    v19 = *((_DWORD *)this + 564);
    if ( v10 != 0 )
      v12 = (char *)operator new(40 * a2);
    else
      v12 = nullptr;
    std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContextPool::ValueParam>(
      v11,
      v19,
      v12);
    v13 = *((void **)this + 563);
    if ( v13 != nullptr )
      operator delete(v13);
    *((_DWORD *)this + 563) = v12;
    *((_DWORD *)this + 564) = &v12[4 * ((v19 - (int)v11) >> 2)];
    *((_DWORD *)this + 565) = &v12[40 * a2];
  }
  *((_DWORD *)this + 566) = 0;
  v21 = *((void **)this + 567);
  if ( -1431655765 * ((*((_DWORD *)this + 569) - (int)v21) >> 2) < v10 )
  {
    v20 = *((_DWORD *)this + 568);
    if ( v10 != 0 )
      v14 = (char *)operator new(24 * a2);
    else
      v14 = nullptr;
    std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContextPool::TexParam>(
      v21,
      v20,
      v14);
    v15 = *((void **)this + 567);
    if ( v15 != nullptr )
      operator delete(v15);
    *((_DWORD *)this + 567) = v14;
    *((_DWORD *)this + 568) = &v14[4 * ((v20 - (int)v21) >> 2)];
    *((_DWORD *)this + 569) = &v14[24 * a2];
  }
  *((_DWORD *)this + 570) = 0;
  return this;
}


//======================================================================
// Ogre::ShaderContextPool::addTextureParam(Ogre::ShaderParamUsage,Ogre::Texture *,int)
// address: 0x0015E238   size: 0x7C (124 bytes)
//======================================================================
int __fastcall Ogre::ShaderContextPool::addTextureParam(_DWORD *a1, int a2, int a3, int a4)
{
  unsigned int v6; // r3
  char *v7; // r12
  _DWORD *v8; // r3
  int result; // r0
  int v10; // [sp+4h] [bp-20h]
  _DWORD v13[4]; // [sp+14h] [bp-10h] BYREF

  if ( a3 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)a3 + 4))(a3);
  v6 = a1[570];
  v10 = a1[567];
  v7 = (char *)a1[568];
  if ( v6 == -1431655765 * ((int)&v7[-v10] >> 2) )
  {
    memset(v13, 0, 12);
    if ( v6 + 1 < v6 )
      a1[568] = v10 + 12 * (v6 + 1);
    else
      std::vector<Ogre::ShaderContextPool::TexParam>::_M_fill_insert((int)(a1 + 567), v7, 1u, v13);
  }
  v8 = (_DWORD *)(a1[567] + 12 * a1[570]);
  v8[1] = a3;
  v8[2] = a4;
  *v8 = a2;
  result = a1[570];
  a1[570] = result + 1;
  return result;
}

