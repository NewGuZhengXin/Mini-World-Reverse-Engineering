// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::UIRenderer

//======================================================================
// Ogre::UIRenderer::onLostDevice(void)
// address: 0x00160ED4   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::UIRenderer::onLostDevice(Ogre::UIRenderer *this)
{
  ;
}


//======================================================================
// Ogre::UIRenderer::onRestoreDevice(void)
// address: 0x00160ED6   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::UIRenderer::onRestoreDevice(Ogre::UIRenderer *this)
{
  ;
}


//======================================================================
// Ogre::UIRenderer::ReleaseTrueTypeFont(void *)
// address: 0x00160ED8   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::UIRenderer::ReleaseTrueTypeFont(Ogre::UIRenderer *this, void *a2)
{
  ;
}


//======================================================================
// Ogre::UIRenderer::GetFontHeight(void *)
// address: 0x00160EDA   size: 0x14 (20 bytes)
//======================================================================
void *__fastcall Ogre::UIRenderer::GetFontHeight(Ogre::UIRenderer *this, void *a2, int a3)
{
  void *result; // r0
  Ogre::UIRenderer *v4; // [sp+0h] [bp-Ch] BYREF
  _DWORD v5[2]; // [sp+4h] [bp-8h] BYREF

  v4 = this;
  v5[0] = a2;
  v5[1] = a3;
  result = a2;
  if ( a2 != nullptr )
  {
    (*(void (__fastcall **)(void *, Ogre::UIRenderer **, _DWORD *))(*(_DWORD *)a2 + 12))(a2, &v4, v5);
    return (void *)v5[0];
  }
  return result;
}


//======================================================================
// Ogre::UIRenderer::renderText(void *,unsigned int,char const*,float,float,Ogre::ColorQuad const&,float,bool,float,Ogre::ColorQuad const&)
// address: 0x00160EEE   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::renderText(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int8 a9,
        int a10,
        int a11)
{
  int result; // r0

  result = a2;
  if ( a2 != 0 )
    return (*(int (__fastcall **)(int, int, int, int, int, int, _DWORD, int, int, int))(*(_DWORD *)a2 + 52))(
             a2,
             a4,
             a5,
             a6,
             a7,
             a3,
             a9,
             a8,
             a10,
             a11);
  return result;
}


//======================================================================
// Ogre::UIRenderer::renderTextRect(void *,unsigned int,char const*,Ogre::TRect<float> const&,float,float,bool,Ogre::ColorQuad const&,float,bool,Ogre::ColorQuad const&)
// address: 0x00160F20   size: 0xEE (238 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::renderTextRect(
        int result,
        int a2,
        int a3,
        int a4,
        float *a5,
        float a6,
        float a7,
        unsigned __int8 a8,
        int a9,
        int a10,
        unsigned __int8 a11,
        int a12)
{
  float v12; // r4
  float v13; // r6
  float *v14; // r4
  float v15; // r5
  float v16; // r6
  float v17; // r5
  float v18; // [sp+24h] [bp-28h]
  float v19; // [sp+38h] [bp-14h] BYREF
  float v20; // [sp+3Ch] [bp-10h]
  float v21; // [sp+40h] [bp-Ch]
  float v22; // [sp+44h] [bp-8h]

  if ( a2 != 0 )
  {
    v12 = a5[1];
    v13 = a5[2];
    v19 = *a5;
    v20 = v12;
    v21 = v13;
    v22 = a5[3];
    v14 = *(float **)(result + 840);
    if ( v14 != *(float **)(result + 844) )
    {
      if ( v22 > v14[3] )
        v22 = v14[3];
      v15 = v14[1];
      v18 = v20;
      if ( v20 < v15 )
      {
        v20 = v14[1];
        a7 = v18 - v15;
      }
      v16 = v19;
      v17 = *v14;
      if ( v19 < *v14 )
      {
        v19 = *v14;
        a6 = v16 - v17;
      }
      if ( v21 > v14[2] )
        v21 = v14[2];
      if ( v22 <= v20 || v19 >= v21 )
      {
        v19 = 0.0;
        v20 = 0.0;
        v21 = 0.0;
        v22 = 0.0;
      }
    }
    return (*(int (__fastcall **)(int, int, float *, float, _DWORD, _DWORD, int, int, _DWORD, int, int))(*(_DWORD *)a2 + 56))(
             a2,
             a4,
             &v19,
             COERCE_FLOAT(LODWORD(a6)),
             a7 + 1.0,
             a8,
             a9,
             a3,
             a11,
             a10,
             a12);
  }
  return result;
}


//======================================================================
// Ogre::UIRenderer::renderTextRect(void *,unsigned int,unsigned int,char const*,Ogre::TRect<float> const&,Ogre::ColorQuad const&,float,bool,Ogre::ColorQuad const&)
// address: 0x0016100E   size: 0xE8 (232 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::renderTextRect(
        int result,
        int a2,
        int a3,
        char a4,
        int a5,
        float *a6,
        int a7,
        float a8,
        unsigned __int8 a9,
        int a10)
{
  float v12; // r0
  float v13; // r0
  float v14; // [sp+20h] [bp-24h]
  float v15; // [sp+24h] [bp-20h]
  int v16; // [sp+28h] [bp-1Ch]
  int v17; // [sp+2Ch] [bp-18h]
  float v19; // [sp+38h] [bp-Ch] BYREF
  float v20[2]; // [sp+3Ch] [bp-8h] BYREF

  v17 = result;
  if ( a2 == 0 )
    return result;
  (*(void (__fastcall **)(int, int, float *, float *, _DWORD))(*(_DWORD *)a2 + 44))(a2, a5, &v19, v20, 0);
  v12 = a8 * v19;
  v19 = a8 * v19;
  v15 = a8 * v20[0];
  v20[0] = a8 * v20[0];
  if ( (a4 & 1) != 0 )
  {
    v14 = 0.0;
    goto LABEL_9;
  }
  if ( (a4 & 2) != 0 )
  {
    v13 = (float)((float)(a6[2] - *a6) - v12) * 0.5;
LABEL_7:
    v14 = v13;
    goto LABEL_9;
  }
  if ( (a4 & 4) != 0 )
  {
    v13 = (float)(a6[2] - *a6) - v12;
    goto LABEL_7;
  }
LABEL_9:
  if ( (a4 & 8) != 0 )
  {
    v16 = 0;
  }
  else
  {
    if ( (a4 & 0x10) != 0 )
      return (*(int (__fastcall **)(int, int, int, int, float *, float, _DWORD, _DWORD, int, float, _DWORD, int))(*(_DWORD *)v17 + 40))(
               v17,
               a2,
               a3,
               a5,
               a6,
               COERCE_FLOAT(LODWORD(v14)),
               (float)((float)(a6[3] - a6[1]) - v15) * 0.5,
               0,
               a7,
               COERCE_FLOAT(LODWORD(a8)),
               a9,
               a10);
    if ( (a4 & 0x20) != 0 )
      return (*(int (__fastcall **)(int, int, int, int, float *, _DWORD))(*(_DWORD *)v17 + 40))(
               v17,
               a2,
               a3,
               a5,
               a6,
               (float)(a6[3] - a6[1]) - v15);
  }
  return (*(int (__fastcall **)(int, int, int, int, float *, float, int, _DWORD, int, float, _DWORD, int))(*(_DWORD *)v17 + 40))(
           v17,
           a2,
           a3,
           a5,
           a6,
           COERCE_FLOAT(LODWORD(v14)),
           v16,
           0,
           a7,
           COERCE_FLOAT(LODWORD(a8)),
           a9,
           a10);
}


//======================================================================
// Ogre::UIRenderer::GetCharExtent(void *,char const*,float &,float &)
// address: 0x001610F6   size: 0x1C (28 bytes)
//======================================================================
void *__fastcall Ogre::UIRenderer::GetCharExtent(
        Ogre::UIRenderer *this,
        void *a2,
        const char *a3,
        float *a4,
        float *a5)
{
  void *result; // r0

  result = a2;
  if ( a2 != nullptr )
  {
    *a4 = 0.0;
    *a5 = 0.0;
    return (void *)(*(int (__fastcall **)(void *, const char *, float *, float *))(*(_DWORD *)a2 + 36))(a2, a3, a4, a5);
  }
  return result;
}


//======================================================================
// Ogre::UIRenderer::GetTextExtent(void *,char const*,float &,float &)
// address: 0x00161112   size: 0x20 (32 bytes)
//======================================================================
Ogre::UIRenderer *__fastcall Ogre::UIRenderer::GetTextExtent(
        Ogre::UIRenderer *this,
        void *a2,
        const char *a3,
        float *a4,
        float *a5)
{
  if ( a2 != nullptr )
  {
    *a4 = 0.0;
    *a5 = 0.0;
    this = nullptr;
    (*(void (__fastcall **)(void *, const char *, float *, float *))(*(_DWORD *)a2 + 44))(a2, a3, a4, a5);
  }
  return this;
}


//======================================================================
// Ogre::UIRenderer::GetTextExtentFitInWidth(void *,char const*,float,float &,int &)
// address: 0x00161132   size: 0x24 (36 bytes)
//======================================================================
__int64 __fastcall Ogre::UIRenderer::GetTextExtentFitInWidth(
        __int64 this,
        const char *a2,
        float a3,
        float *a4,
        int *a5)
{
  __int64 v6; // [sp+0h] [bp-8h]

  v6 = this;
  if ( HIDWORD(this) != 0 )
  {
    *a4 = 0.0;
    *a5 = 0;
    v6 = (unsigned int)a5;
    (*(void (__fastcall **)(_DWORD, const char *, _DWORD, float *))(*(_DWORD *)HIDWORD(this) + 48))(
      HIDWORD(this),
      a2,
      LODWORD(a3),
      a4);
  }
  return v6;
}


//======================================================================
// Ogre::UIRenderer::GetLineInterval(void *)
// address: 0x00161156   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::GetLineInterval(Ogre::UIRenderer *this, void *a2, int a3)
{
  _DWORD v4[2]; // [sp+4h] [bp-8h] BYREF

  v4[0] = a2;
  v4[1] = a3;
  if ( a2 == nullptr )
    return 0;
  (*(void (__fastcall **)(void *, _DWORD *))(*(_DWORD *)a2 + 24))(a2, v4);
  return v4[0];
}


//======================================================================
// Ogre::UIRenderer::SetLineInterval(void *,float)
// address: 0x0016116E   size: 0x10 (16 bytes)
//======================================================================
void *__fastcall Ogre::UIRenderer::SetLineInterval(Ogre::UIRenderer *this, void *a2, float a3)
{
  void *result; // r0

  result = a2;
  if ( a2 != nullptr )
    return (void *)(*(int (__fastcall **)(void *, _DWORD))(*(_DWORD *)a2 + 28))(a2, LODWORD(a3));
  return result;
}


//======================================================================
// Ogre::UIRenderer::SetUiTextureBlendModel(void *,Ogre::BlendMode)
// address: 0x0016117E   size: 0x4 (4 bytes)
//======================================================================
void __fastcall Ogre::UIRenderer::SetUiTextureBlendModel(int a1, int a2, int a3)
{
  *(_DWORD *)(a2 + 20) = a3;
}


//======================================================================
// Ogre::UIRenderer::GetNullTexture(void)
// address: 0x00161182   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::GetNullTexture(Ogre::UIRenderer *this)
{
  return *((_DWORD *)this + 178);
}


//======================================================================
// Ogre::UIRenderer::AddRef(void *)
// address: 0x0016118A   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::UIRenderer::AddRef(Ogre::UIRenderer *this, void *a2)
{
  ;
}


//======================================================================
// Ogre::UIRenderer::ReleaseUIRes(void *)
// address: 0x0016118C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::UIRenderer::ReleaseUIRes(Ogre::UIRenderer *this, void *a2)
{
  ;
}


//======================================================================
// Ogre::UIRenderer::EndDraw(void)
// address: 0x0016118E   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::UIRenderer::EndDraw(Ogre::UIRenderer *this)
{
  ;
}


//======================================================================
// Ogre::UIRenderer::FlushDraw(void)
// address: 0x00161190   size: 0x1C (28 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::FlushDraw(Ogre::UIRenderer *this)
{
  (*(void (__fastcall **)(Ogre::UIRenderer *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 96))(this, 0, 0, 0);
  (*(void (__fastcall **)(Ogre::UIRenderer *))(*(_DWORD *)this + 100))(this);
  return 0;
}


//======================================================================
// Ogre::UIRenderer::DrawRect(int,int,int,int,unsigned long,int,int,float)
// address: 0x001611AC   size: 0x54 (84 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::DrawRect(
        Ogre::UIRenderer *this,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8,
        float a9)
{
  return (*(int (__fastcall **)(Ogre::UIRenderer *, float, float, float, float, unsigned int, int, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 112))(
           this,
           (float)a2,
           (float)a3,
           (float)a4,
           (float)a5,
           a6,
           a7,
           a8,
           0,
           0,
           0,
           LODWORD(a9));
}


//======================================================================
// Ogre::UIRenderer::DrawBar(float,float,float,float,unsigned long)
// address: 0x00161200   size: 0x26 (38 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::DrawBar(
        Ogre::UIRenderer *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned int a6)
{
  return (*(int (__fastcall **)(Ogre::UIRenderer *, _DWORD, _DWORD, _DWORD, _DWORD, unsigned int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 112))(
           this,
           LODWORD(a2),
           LODWORD(a3),
           LODWORD(a4),
           LODWORD(a5),
           a6,
           0,
           0,
           0,
           0,
           0,
           0);
}


//======================================================================
// Ogre::UIRenderer::PushClipRect(Ogre::TRect<int> const&)
// address: 0x00161226   size: 0x36 (54 bytes)
//======================================================================
__int64 __fastcall Ogre::UIRenderer::PushClipRect(__int64 a1, float a2, float a3)
{
  int v3; // r3
  __int64 v5; // [sp+0h] [bp-10h] BYREF
  float v6; // [sp+8h] [bp-8h]
  float v7; // [sp+Ch] [bp-4h]

  v5 = a1;
  v6 = a2;
  v7 = a3;
  *(float *)&v5 = (float)(int)*(_DWORD *)HIDWORD(a1);
  v6 = (float)*(int *)(HIDWORD(a1) + 8);
  *((float *)&v5 + 1) = (float)*(int *)(HIDWORD(a1) + 4);
  v3 = *(_DWORD *)a1;
  v7 = (float)*(int *)(HIDWORD(a1) + 12);
  (*(void (__fastcall **)(_DWORD, __int64 *))(v3 + 140))(a1, &v5);
  return v5;
}


//======================================================================
// Ogre::UIRenderer::GetClipRect(void)
// address: 0x0016125C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::GetClipRect(Ogre::UIRenderer *this)
{
  return *((_DWORD *)this + 210);
}


//======================================================================
// Ogre::UIRenderer::PopClipRect(void)
// address: 0x00161264   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::PopClipRect(int this)
{
  *(_DWORD *)(this + 844) -= 16;
  return this;
}


//======================================================================
// Ogre::UIRenderer::setCursor(void *,int,int,int,int,int,int)
// address: 0x00161270   size: 0x94 (148 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::setCursor(
        Ogre::UIRenderer *this,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v10; // r5
  int v11; // r0
  _DWORD v15[8]; // [sp+1Ch] [bp-20h] BYREF

  v10 = a2[2];
  if ( a7 == 0 )
  {
    (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v10 + 28))(v10, v15);
    a7 = v15[1];
    a8 = v15[2];
  }
  *((_DWORD *)this + 196) = a2;
  *((_DWORD *)this + 199) = a3;
  *((_DWORD *)this + 200) = a4;
  *((_DWORD *)this + 201) = a5;
  *((_DWORD *)this + 202) = a6;
  *((_DWORD *)this + 203) = a5 + a7;
  v11 = Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton;
  *((_DWORD *)this + 204) = a6 + a8;
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v11 + 72))(v11, *((unsigned __int8 *)this + 820));
  return (*(int (__fastcall **)(int, int, int, int, int, int, int, int))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton
                                                                       + 64))(
           Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
           v10,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}


//======================================================================
// Ogre::UIRenderer::drawCursor(void)
// address: 0x001615EC   size: 0x90 (144 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::drawCursor(Ogre::UIRenderer *this)
{
  int result; // r0
  int v3; // [sp+18h] [bp-Ch] BYREF
  int v4; // [sp+1Ch] [bp-8h] BYREF

  result = *((_DWORD *)this + 196);
  if ( result != 0 && *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 64) == 2 )
  {
    Ogre::InputManager::getCursorPos((Ogre::InputManager *)Ogre::Singleton<Ogre::InputManager>::ms_Singleton, &v3, &v4);
    (*(void (__fastcall **)(Ogre::UIRenderer *, _DWORD))(*(_DWORD *)this + 96))(this, *((_DWORD *)this + 196));
    (*(void (__fastcall **)(Ogre::UIRenderer *, int, int, int, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 108))(
      this,
      v3 - *((_DWORD *)this + 199),
      v4 - *((_DWORD *)this + 200),
      *((_DWORD *)this + 203) - *((_DWORD *)this + 201),
      *((_DWORD *)this + 204) - *((_DWORD *)this + 202),
      -1,
      *((_DWORD *)this + 201),
      *((_DWORD *)this + 202),
      0);
    return (*(int (__fastcall **)(Ogre::UIRenderer *))(*(_DWORD *)this + 100))(this);
  }
  return result;
}


//======================================================================
// Ogre::UIRenderer::renderSceneToTarget(Ogre::GameScene *,Ogre::Camera *,Ogre::TRect<int> const&,Ogre::TRect<int> const&,Ogre::RenderTarget *)
// address: 0x00161684   size: 0xEE (238 bytes)
//======================================================================
void __fastcall Ogre::UIRenderer::renderSceneToTarget(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5, int a6)
{
  int v8; // r0
  int v9; // r0
  int v10; // r3
  _DWORD v13[3]; // [sp+3Ch] [bp-5B0h] BYREF
  float v14; // [sp+48h] [bp-5A4h]
  unsigned int v15; // [sp+4Ch] [bp-5A0h]
  int v16; // [sp+CCh] [bp-520h]
  _BYTE v17[1300]; // [sp+D8h] [bp-514h] BYREF

  Ogre::ShaderContextPool::endQueue(*(_DWORD *)(a1 + 572));
  v8 = Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton;
  *(_DWORD *)(a1 + 616) = a2;
  (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 32))(v8);
  (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a6 + 48))(
    a6,
    *a4,
    a4[1],
    a4[2],
    a4[3],
    *a5,
    a5[1],
    a5[2],
    a5[3]);
  Ogre::ShaderEnvData::ShaderEnvData((Ogre::ShaderEnvData *)v17);
  (*(void (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 60))(a2, a3, 1);
  Ogre::SceneRenderer::RenderResult(a1, (int)v17, *(_DWORD *)(a3 + 212), a6, 4, 0, 1065353216, 0, 0, nullptr, 1, -1);
  Ogre::ContextQueDesc::ContextQueDesc(v13);
  v9 = (*(int (__fastcall **)(int))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 32))(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton);
  v10 = *(_DWORD *)(a1 + 624);
  v13[0] = v9;
  v13[1] = 0;
  v13[2] = v10;
  v14 = *(float *)(a1 + 628);
  v16 = 0;
  v15 = (unsigned int)v14;
  Ogre::ShaderContextPool::startQueue(*(Ogre::ShaderContextPool **)(a1 + 572), (const Ogre::ContextQueDesc *)v13);
}


//======================================================================
// Ogre::UIRenderer::renderSceneToUI(Ogre::GameScene *,Ogre::Camera *,Ogre::TRect<int> const&)
// address: 0x00161784   size: 0x8E (142 bytes)
//======================================================================
void __fastcall Ogre::UIRenderer::renderSceneToUI(int *a1, int a2, int a3)
{
  Ogre::ShaderContextPool *v6; // r0
  _DWORD v7[39]; // [sp+34h] [bp-5B0h] BYREF
  _BYTE v8[1300]; // [sp+D0h] [bp-514h] BYREF

  Ogre::ShaderContextPool::endQueue(a1[143]);
  a1[154] = a2;
  Ogre::ShaderEnvData::ShaderEnvData((Ogre::ShaderEnvData *)v8);
  (*(void (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 60))(a2, a3, 1);
  Ogre::SceneRenderer::RenderResult(
    (int)a1,
    (int)v8,
    *(_DWORD *)(a3 + 212),
    a1[153],
    4,
    0,
    1065353216,
    0,
    0,
    nullptr,
    1,
    -1);
  Ogre::ContextQueDesc::ContextQueDesc(v7);
  v6 = (Ogre::ShaderContextPool *)a1[143];
  v7[0] = a1[153];
  memset(&v7[1], 0, 16);
  v7[36] = 0;
  Ogre::ShaderContextPool::startQueue(v6, (const Ogre::ContextQueDesc *)v7);
}


//======================================================================
// Ogre::UIRenderer::renderClearScreenTexture(void *,int,int,int,int)
// address: 0x0016181C   size: 0xD0 (208 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::renderClearScreenTexture(
        Ogre::UIRenderer *this,
        void *a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  int v7; // r3
  int v9; // r3
  Ogre::ShaderContextPool *v10; // r3
  _DWORD v14[40]; // [sp+3Ch] [bp-A0h] BYREF

  v7 = Ogre::Singleton<Ogre::SceneManager>::ms_Singleton;
  *((_DWORD *)this + 143) = *(_DWORD *)(*(_DWORD *)Ogre::Singleton<Ogre::SceneManager>::ms_Singleton + 8);
  *((_DWORD *)this + 144) = *(_DWORD *)(*(_DWORD *)v7 + 12);
  Ogre::ContextQueDesc::ContextQueDesc(v14);
  v9 = *((_DWORD *)this + 153);
  v14[2] = 0;
  v14[0] = v9;
  v14[1] = 6;
  v14[3] = 1065353216;
  v10 = *((Ogre::ShaderContextPool **)this + 143);
  v14[4] = 0;
  v14[36] = 0;
  Ogre::ShaderContextPool::startQueue(v10, (const Ogre::ContextQueDesc *)v14);
  (*(void (__fastcall **)(Ogre::UIRenderer *, void *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 96))(this, a2, 0, 0, 0);
  (*(void (__fastcall **)(Ogre::UIRenderer *, _DWORD, _DWORD, float, float, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)this + 112))(
    this,
    0,
    0,
    (float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 88),
    (float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 92),
    -1,
    a3,
    a4,
    a5,
    a6,
    0,
    0);
  (*(void (__fastcall **)(Ogre::UIRenderer *))(*(_DWORD *)this + 100))(this);
  (*(void (__fastcall **)(Ogre::UIRenderer *))(*(_DWORD *)this + 104))(this);
  return Ogre::ShaderContextPool::endQueue(*((_DWORD *)this + 143));
}


//======================================================================
// Ogre::UIRenderer::initUIVert(Ogre::UIFaceVert &,float,float,float,Ogre::ColorQuad,float,float)
// address: 0x001618F4   size: 0xFC (252 bytes)
//======================================================================
__int64 __fastcall Ogre::UIRenderer::initUIVert(__int64 a1, float a2, float a3, int a4, int a5, __int64 a6)
{
  int v7; // r3
  __int64 v9; // [sp+0h] [bp-Ch]

  v9 = a1;
  *(float *)HIDWORD(a1) = (float)((float)(a2 + a2) / *(float *)(a1 + 828)) - 1.0;
  *(float *)(HIDWORD(a1) + 4) = 1.0 - (float)((float)(a3 + a3) / *(float *)(a1 + 832));
  *(_DWORD *)(HIDWORD(a1) + 8) = a4;
  if ( *(_BYTE *)(a1 + 836) != 0 )
  {
    *(_BYTE *)(HIDWORD(a1) + 12) = BYTE2(a5);
    *(_BYTE *)(HIDWORD(a1) + 13) = BYTE1(a5);
    *(_BYTE *)(HIDWORD(a1) + 14) = a5;
    *(_BYTE *)(HIDWORD(a1) + 15) = HIBYTE(a5);
  }
  else
  {
    *(_DWORD *)(HIDWORD(a1) + 12) = a5;
  }
  *(_QWORD *)(HIDWORD(a1) + 16) = a6;
  v7 = *(_DWORD *)(a1 + 756);
  if ( (v7 & 4) != 0 )
  {
    HIDWORD(v9) = *(_DWORD *)(a1 + 664);
    *(float *)(HIDWORD(a1) + 24) = (float)(a2 - (float)SHIDWORD(v9)) / (float)(*(_DWORD *)(a1 + 672) - HIDWORD(v9));
    *(float *)&a1 = (float)(a3 - (float)*(int *)(a1 + 676)) / (float)(*(_DWORD *)(a1 + 668) - *(_DWORD *)(a1 + 676));
  }
  else
  {
    if ( (v7 & 8) == 0 )
    {
      *(_QWORD *)(HIDWORD(a1) + 24) = a6;
      return v9;
    }
    *(float *)(HIDWORD(a1) + 24) = *(float *)&a6 + *(float *)(a1 + 640);
    *(float *)&a1 = *((float *)&a6 + 1) + *(float *)(a1 + 644);
  }
  *(_DWORD *)(HIDWORD(a1) + 28) = a1;
  return v9;
}


//======================================================================
// Ogre::UIRenderer::FindSamenessFont(int,int,char const*,Ogre::ECharacterCoding,unsigned int)
// address: 0x001619F0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::FindSamenessFont(int a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int i; // r4
  int v8; // r3

  for ( i = 0; ; ++i )
  {
    v8 = *(_DWORD *)(a1 + 732);
    if ( i >= (*(_DWORD *)(a1 + 736) - v8) >> 2 )
      break;
    if ( (*(int (__fastcall **)(_DWORD, int, int, int, int, int))(**(_DWORD **)(v8 + 4 * i) + 8))(
           *(_DWORD *)(v8 + 4 * i),
           a2,
           a3,
           a4,
           a5,
           a6) != 0 )
      return *(_DWORD *)(*(_DWORD *)(a1 + 732) + 4 * i);
  }
  return 0;
}


//======================================================================
// Ogre::UIRenderer::setTextDrawAngle(void *,float,float,float)
// address: 0x00161A42   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::setTextDrawAngle(Ogre::UIRenderer *this, void *a2, float a3, float a4, float a5)
{
  return (*(int (__fastcall **)(void *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a2 + 32))(
           a2,
           LODWORD(a3),
           LODWORD(a4),
           LODWORD(a5));
}


//======================================================================
// Ogre::UIRenderer::AddUIRenderTarget(char const*,Ogre::Texture *,Ogre::TextureRenderTarget *)
// address: 0x00161A54   size: 0x2 (2 bytes)
//======================================================================
void Ogre::UIRenderer::AddUIRenderTarget()
{
  ;
}


//======================================================================
// Ogre::UIRenderer::GetTextureSize(void *,int &,int &)
// address: 0x00161A56   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::GetTextureSize(Ogre::UIRenderer *this, _DWORD *a2, int *a3, int *a4)
{
  int result; // r0

  result = a2[3];
  *a3 = result;
  *a4 = a2[4];
  return result;
}


//======================================================================
// Ogre::UIRenderer::forceLoadTexture(void *)
// address: 0x00161A60   size: 0x50 (80 bytes)
//======================================================================
void __fastcall Ogre::UIRenderer::forceLoadTexture(Ogre::UIRenderer *this, const Ogre::FixedString *a2)
{
  int v3; // r5
  int v4; // r3
  int v5; // r6
  _DWORD v6[7]; // [sp+4h] [bp-1Ch] BYREF

  if ( a2 != nullptr && *((_DWORD *)a2 + 2) == 0 )
  {
    v3 = Ogre::ResourceManager::blockLoad(
           (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton,
           a2,
           (*((_DWORD *)a2 + 5) == 2) << 8);
    if ( v3 == 0 )
    {
      v3 = *(_DWORD *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton + 4))(*(_DWORD *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton);
    }
    (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v3 + 28))(v3, v6);
    v4 = v6[1];
    v5 = v6[2];
    *((_DWORD *)a2 + 2) = v3;
    *((_DWORD *)a2 + 3) = v4;
    *((_DWORD *)a2 + 4) = v5;
  }
}


//======================================================================
// Ogre::UIRenderer::showCursor(bool)
// address: 0x00161AB4   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::showCursor(int this, bool a2)
{
  *(_BYTE *)(this + 820) = a2;
  return this;
}


//======================================================================
// Ogre::UIRenderer::getUIResTexture(void *)
// address: 0x00161ABC   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::getUIResTexture(Ogre::UIRenderer *this, _DWORD *a2)
{
  if ( a2 != nullptr )
    return a2[2];
  else
    return 0;
}


//======================================================================
// Ogre::UIRenderer::DrawUIElement(Ogre::PrimitiveType,Ogre::VertexBuffer *,unsigned int,Ogre::BlendMode,Ogre::Texture *,int)
// address: 0x00161ACC   size: 0x194 (404 bytes)
//======================================================================
Ogre::ShaderContext *__fastcall Ogre::UIRenderer::DrawUIElement(
        int a1,
        int a2,
        Ogre::VertexBuffer *a3,
        int a4,
        int a5,
        Ogre::Texture *a6,
        int a7)
{
  Ogre::Material *v8; // r5
  int v9; // r2
  void *v10; // r1
  Ogre::Material *v11; // r6
  void *v12; // r1
  Ogre::Material *v13; // r6
  Ogre::Texture *UIResTexture; // r0
  void *v15; // r1
  Ogre::Material *v16; // r6
  int v17; // r2
  void *v18; // r1
  Ogre::Material *v19; // r6
  Ogre::Material *v20; // r0
  int v21; // r2
  Ogre::Material *v22; // r5
  void *v23; // r1
  Ogre::Material *v24; // r5
  int v25; // r2
  void *v26; // r1
  Ogre::FixedString *v31; // [sp+2Ch] [bp-518h] BYREF
  _DWORD v32[325]; // [sp+30h] [bp-514h] BYREF

  Ogre::ShaderEnvData::ShaderEnvData((Ogre::ShaderEnvData *)v32);
  v8 = *(Ogre::Material **)(a1 + 708);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v31, (Ogre::FixedString *)"BLEND_MODE", v9);
  Ogre::Material::setParamMacro(v8, (const Ogre::FixedString *)&v31, a5);
  Ogre::FixedString::~FixedString(&v31, v10);
  v11 = *(Ogre::Material **)(a1 + 708);
  if ( (a7 & 0xC) != 0 )
  {
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v31, (Ogre::FixedString *)"MASK_TEXTURE", (int)&a7);
    Ogre::Material::setParamMacro(v11, (const Ogre::FixedString *)&v31, 2 - ((unsigned int)(a7 << 29) >> 31));
    Ogre::FixedString::~FixedString(&v31, v12);
    v13 = *(Ogre::Material **)(a1 + 708);
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v31, (Ogre::FixedString *)"g_MaskTex", 708);
    UIResTexture = (Ogre::Texture *)Ogre::UIRenderer::getUIResTexture((Ogre::UIRenderer *)a1, *(_DWORD **)(a1 + 748));
    Ogre::Material::setParamTexture(v13, (const Ogre::FixedString *)&v31, UIResTexture, 0);
    Ogre::FixedString::~FixedString(&v31, v15);
    v16 = *(Ogre::Material **)(a1 + 708);
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v31, (Ogre::FixedString *)"g_MaskColor", v17);
    Ogre::Material::setParamValue(v16, (const Ogre::FixedString *)&v31, (const void *)(a1 + 648));
  }
  else
  {
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v31, (Ogre::FixedString *)"MASK_TEXTURE", 708);
    Ogre::Material::setParamMacro(v11, (const Ogre::FixedString *)&v31, 0);
  }
  Ogre::FixedString::~FixedString(&v31, v18);
  if ( (a7 & 3) != 0 )
  {
    v19 = *(Ogre::Material **)(a1 + 708);
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v31, (Ogre::FixedString *)"RGB_MOD", 708);
    v20 = v19;
    v21 = ((a7 & 1) == 0) + 1;
  }
  else
  {
    v22 = *(Ogre::Material **)(a1 + 708);
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v31, (Ogre::FixedString *)"RGB_MOD", 708);
    v20 = v22;
    v21 = 0;
  }
  Ogre::Material::setParamMacro(v20, (const Ogre::FixedString *)&v31, v21);
  Ogre::FixedString::~FixedString(&v31, v23);
  v24 = *(Ogre::Material **)(a1 + 708);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v31, (Ogre::FixedString *)"g_DiffuseTex", v25);
  Ogre::Material::setParamTexture(v24, (const Ogre::FixedString *)&v31, a6, 0);
  Ogre::FixedString::~FixedString(&v31, v26);
  return Ogre::SceneRenderer::newContext(
           a1,
           3,
           v32,
           *(Ogre::Material **)(a1 + 708),
           *(_DWORD *)(a1 + 728),
           a3,
           nullptr,
           a2,
           a4,
           1);
}


//======================================================================
// Ogre::UIRenderer::DrawLine(float,float,float,float,unsigned long)
// address: 0x00161C8C   size: 0x16A (362 bytes)
//======================================================================
Ogre::ShaderContext *__fastcall Ogre::UIRenderer::DrawLine(
        Ogre::UIRenderer *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned int a6)
{
  float v7; // r5
  int v9; // r7
  float v10; // r0
  int v11; // r5
  float v12; // r1
  float v13; // r0
  int v14; // r4
  __int64 v16; // r0
  int v18; // [sp+20h] [bp-14h]
  unsigned int v19; // [sp+28h] [bp-Ch]
  Ogre::DynamicVertexBuffer *v20; // [sp+2Ch] [bp-8h]

  v7 = a2;
  if ( a2 == a4 || a3 == a5 )
  {
    if ( a2 >= a4 )
    {
      a2 = a4;
      v9 = (int)a4;
      v10 = v7;
    }
    else
    {
      v9 = (int)a2;
      v10 = a4;
    }
    v11 = (int)(float)(v10 - a2);
    if ( a3 >= a5 )
    {
      v12 = a5;
      v18 = (int)a5;
      v13 = a3;
    }
    else
    {
      v12 = a3;
      v18 = (int)a3;
      v13 = a5;
    }
    v14 = (int)(float)(v13 - v12);
    if ( v11 == 0 )
    {
      v11 = (int)*((float *)this + 206);
      v9 -= v11 / 2;
    }
    if ( v14 == 0 )
    {
      v14 = (int)*((float *)this + 206);
      v18 -= v14 / 2;
    }
    return (Ogre::ShaderContext *)(*(int (__fastcall **)(Ogre::UIRenderer *, float, float, float, float, unsigned int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 112))(
                                    this,
                                    (float)v9,
                                    (float)v18,
                                    (float)v11,
                                    (float)v14,
                                    a6,
                                    0,
                                    0,
                                    0,
                                    0,
                                    0,
                                    0);
  }
  else
  {
    v20 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                         (Ogre::DynamicBufferPool **)this,
                                         (Ogre::UIRenderer *)((char *)this + 716),
                                         2u);
    v19 = Ogre::DynamicVertexBuffer::lock(v20);
    if ( v19 != 0 )
    {
      Ogre::UIRenderer::initUIVert(__SPAIR64__(v19, (unsigned int)this), v7, a3, 0, a6, 0);
      HIDWORD(v16) = v19 + 32;
      LODWORD(v16) = this;
      Ogre::UIRenderer::initUIVert(v16, a4, a5, 0, a6, 0);
    }
    return Ogre::UIRenderer::DrawUIElement((int)this, 2, v20, 1, 2, *(Ogre::Texture **)(*((_DWORD *)this + 178) + 8), 0);
  }
}


//======================================================================
// Ogre::UIRenderer::DrawTriangleList(Ogre::Vector2 *,unsigned int,unsigned long)
// address: 0x00161DF6   size: 0x7A (122 bytes)
//======================================================================
Ogre::ShaderContext *__fastcall Ogre::UIRenderer::DrawTriangleList(
        Ogre::DynamicBufferPool **this,
        Ogre::Vector2 *a2,
        int a3,
        int a4)
{
  Ogre::DynamicVertexBuffer *v6; // r7
  int i; // r5
  __int64 v8; // r0
  unsigned int v10; // [sp+10h] [bp-14h]
  int v11; // [sp+14h] [bp-10h]

  v10 = 3 * a3;
  v6 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                      this,
                                      (const Ogre::VertexFormat *)(this + 179),
                                      3 * a3);
  v11 = Ogre::DynamicVertexBuffer::lock(v6);
  if ( v11 != 0 )
  {
    for ( i = 0; i != v10; ++i )
    {
      HIDWORD(v8) = v11 + 32 * i;
      LODWORD(v8) = this;
      Ogre::UIRenderer::initUIVert(v8, *(float *)a2, *((float *)a2 + 1), 0, a4, 0);
      a2 = (Ogre::Vector2 *)((char *)a2 + 8);
    }
  }
  return Ogre::UIRenderer::DrawUIElement((int)this, 4, v6, a3, 2, *((Ogre::Texture **)*(this + 178) + 2), 0);
}


//======================================================================
// Ogre::UIRenderer::DrawTriangleFan(Ogre::Vector2 *,unsigned int,unsigned long)
// address: 0x00161E70   size: 0x78 (120 bytes)
//======================================================================
Ogre::ShaderContext *__fastcall Ogre::UIRenderer::DrawTriangleFan(
        Ogre::DynamicBufferPool **this,
        Ogre::Vector2 *a2,
        int a3,
        int a4)
{
  Ogre::DynamicVertexBuffer *v6; // r7
  unsigned int i; // r5
  __int64 v8; // r0
  unsigned int v10; // [sp+10h] [bp-14h]
  int v11; // [sp+14h] [bp-10h]

  v10 = a3 + 2;
  v6 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                      this,
                                      (const Ogre::VertexFormat *)(this + 179),
                                      a3 + 2);
  v11 = Ogre::DynamicVertexBuffer::lock(v6);
  if ( v11 != 0 )
  {
    for ( i = 0; i < v10; ++i )
    {
      HIDWORD(v8) = v11 + 32 * i;
      LODWORD(v8) = this;
      Ogre::UIRenderer::initUIVert(v8, *(float *)a2, *((float *)a2 + 1), 0, a4, 0);
      a2 = (Ogre::Vector2 *)((char *)a2 + 8);
    }
  }
  return Ogre::UIRenderer::DrawUIElement((int)this, 6, v6, a3, 2, *((Ogre::Texture **)*(this + 178) + 2), 0);
}


//======================================================================
// Ogre::UIRenderer::DrawTriangleFan(Ogre::Vector2 *,unsigned int,Ogre::ColorQuad *)
// address: 0x00161EE8   size: 0x7E (126 bytes)
//======================================================================
Ogre::ShaderContext *__fastcall Ogre::UIRenderer::DrawTriangleFan(int a1, float *a2, int a3, int a4)
{
  Ogre::DynamicVertexBuffer *v6; // r7
  unsigned int v7; // r5
  __int64 v9; // r0
  int v10; // r0
  int v11; // [sp+4h] [bp-20h]
  unsigned int v12; // [sp+10h] [bp-14h]
  int v13; // [sp+14h] [bp-10h]

  v12 = a3 + 2;
  v6 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                      (Ogre::DynamicBufferPool **)a1,
                                      (const Ogre::VertexFormat *)(a1 + 716),
                                      a3 + 2);
  v7 = 0;
  v13 = Ogre::DynamicVertexBuffer::lock(v6);
  if ( v13 != 0 )
  {
    while ( v7 < v12 )
    {
      HIDWORD(v9) = v13 + 32 * v7;
      v10 = 4 * v7++;
      v11 = *(_DWORD *)(v10 + a4);
      LODWORD(v9) = a1;
      Ogre::UIRenderer::initUIVert(v9, *a2, a2[1], 0, v11, 0);
      a2 += 2;
    }
  }
  return Ogre::UIRenderer::DrawUIElement(a1, 6, v6, a3, 2, *(Ogre::Texture **)(*(_DWORD *)(a1 + 712) + 8), 0);
}


//======================================================================
// Ogre::UIRenderer::DrawBox(float,float,float,float,unsigned long)
// address: 0x00161F66   size: 0xD0 (208 bytes)
//======================================================================
Ogre::ShaderContext *__fastcall Ogre::UIRenderer::DrawBox(
        Ogre::DynamicBufferPool **this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned int a6)
{
  unsigned int v8; // r6
  __int64 v9; // r0
  float v10; // r7
  __int64 v11; // r0
  __int64 v12; // r0
  __int64 v13; // r0
  Ogre::DynamicVertexBuffer *v17; // [sp+18h] [bp-Ch]

  v17 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                       this,
                                       (const Ogre::VertexFormat *)(this + 179),
                                       5u);
  v8 = Ogre::DynamicVertexBuffer::lock(v17);
  if ( v8 != 0 )
  {
    Ogre::UIRenderer::initUIVert(__SPAIR64__(v8, (unsigned int)this), a2, a3, 0, a6, 0);
    HIDWORD(v9) = v8 + 32;
    LODWORD(v9) = this;
    Ogre::UIRenderer::initUIVert(v9, a2, a3 + a5, 0, a6, 0);
    v10 = a2 + a4;
    HIDWORD(v11) = v8 + 64;
    LODWORD(v11) = this;
    Ogre::UIRenderer::initUIVert(v11, v10, a3 + a5, 0, a6, 0);
    HIDWORD(v12) = v8 + 96;
    LODWORD(v12) = this;
    Ogre::UIRenderer::initUIVert(v12, v10, a3, 0, a6, 0);
    HIDWORD(v13) = v8 + 128;
    LODWORD(v13) = this;
    Ogre::UIRenderer::initUIVert(v13, a2, a3, 0, a6, 0);
  }
  return Ogre::UIRenderer::DrawUIElement((int)this, 3, v17, 4, 2, *((Ogre::Texture **)*(this + 178) + 2), 0);
}


//======================================================================
// Ogre::UIRenderer::drawScreenRects(void)
// address: 0x00162038   size: 0x436 (1078 bytes)
//======================================================================
Ogre::ShaderContext *__fastcall Ogre::UIRenderer::drawScreenRects(Ogre::UIRenderer *this)
{
  int v2; // r5
  int v3; // r4
  int v4; // r2
  Ogre::ShaderContext *result; // r0
  double v6; // r4
  float v7; // r0
  float v8; // r0
  float v9; // r6
  float v10; // r0
  float v11; // r0
  float v12; // r4
  float v13; // r5
  float v14; // r0
  float v15; // r5
  float v16; // r0
  int v17; // r6
  float v18; // r4
  float v19; // r5
  float v20; // r3
  float v21; // r2
  float v22; // r6
  __int64 v23; // r0
  __int64 v24; // r0
  __int64 v25; // r0
  __int64 v26; // r0
  __int64 v27; // r0
  float v28; // [sp+14h] [bp-60h]
  float v29; // [sp+14h] [bp-60h]
  int v30; // [sp+18h] [bp-5Ch]
  float v31; // [sp+18h] [bp-5Ch]
  float v32; // [sp+1Ch] [bp-58h]
  float v33; // [sp+1Ch] [bp-58h]
  float v34; // [sp+1Ch] [bp-58h]
  float v35; // [sp+20h] [bp-54h]
  float v36; // [sp+20h] [bp-54h]
  float v37; // [sp+24h] [bp-50h]
  float v38; // [sp+24h] [bp-50h]
  float v39; // [sp+24h] [bp-50h]
  float v40; // [sp+28h] [bp-4Ch]
  float v41; // [sp+2Ch] [bp-48h]
  unsigned int v42; // [sp+30h] [bp-44h]
  float v43; // [sp+34h] [bp-40h]
  float v44; // [sp+34h] [bp-40h]
  float v45; // [sp+38h] [bp-3Ch]
  float v46; // [sp+38h] [bp-3Ch]
  int v47; // [sp+3Ch] [bp-38h]
  int v48; // [sp+40h] [bp-34h]
  float v49; // [sp+44h] [bp-30h]
  float v50; // [sp+48h] [bp-2Ch]
  float v51; // [sp+4Ch] [bp-28h]
  _DWORD *v52; // [sp+50h] [bp-24h]
  Ogre::ShaderContext *v53; // [sp+54h] [bp-20h]
  Ogre::ShaderContext *v54; // [sp+58h] [bp-1Ch]
  float v55; // [sp+5Ch] [bp-18h]
  float v56; // [sp+60h] [bp-14h]
  Ogre::DynamicVertexBuffer *v57; // [sp+64h] [bp-10h]
  Ogre::Texture *v58; // [sp+68h] [bp-Ch]
  float v59; // [sp+6Ch] [bp-8h]

  v52 = *((_DWORD **)this + 195);
  v2 = v52[3];
  v3 = v52[4];
  v58 = (Ogre::Texture *)v52[2];
  v4 = *((_DWORD *)this + 214) - *((_DWORD *)this + 213);
  result = (Ogre::ShaderContext *)(-858993459 * (v4 >> 3));
  v54 = result;
  if ( result != nullptr )
  {
    v57 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                         (Ogre::DynamicBufferPool **)this,
                                         (Ogre::UIRenderer *)((char *)this + 716),
                                         -858993458 * (v4 >> 3));
    v42 = Ogre::DynamicVertexBuffer::lock(v57);
    if ( v42 != 0 )
    {
      v55 = (float)v2;
      v56 = (float)v3;
      v53 = nullptr;
      do
      {
        v30 = *((_DWORD *)this + 213) + 40 * (_DWORD)v53;
        v48 = *(_DWORD *)(v30 + 24);
        v40 = *(float *)v30;
        v47 = *(_DWORD *)(v30 + 36);
        v28 = *(float *)(v30 + 4);
        v41 = v28 + *(float *)(v30 + 8);
        v43 = *(float *)v30 + *(float *)(v30 + 12);
        if ( *(float *)(v30 + 32) == 0.0 )
        {
          v46 = *(float *)v30 + *(float *)(v30 + 12);
          v51 = *(float *)(v30 + 4);
          v50 = *(float *)v30;
          v49 = v28 + *(float *)(v30 + 8);
        }
        else
        {
          v6 = (float)(*(float *)(v30 + 32) * 0.017453);
          v7 = j_sin(v6);
          v35 = v7;
          v8 = j_cos(v6);
          v32 = v8;
          if ( *((_DWORD *)this + 190) == 1 )
          {
            v9 = (float)(v41 - v28) * v8;
            v37 = (float)(v43 - v40) * v35;
            v10 = (float)(v41 - v28) * v35;
            v45 = (float)(v43 - v40) * v32;
            v49 = (float)(v9 - (float)((float)(v40 - v40) * v35)) + v28;
            v50 = (float)(v10 + (float)((float)(v40 - v40) * v32)) + v40;
            v41 = (float)(v9 - v37) + v28;
            v43 = (float)(v10 + v45) + v40;
            v51 = (float)((float)((float)(v28 - v28) * v32) - v37) + v28;
            v11 = (float)((float)((float)(v28 - v28) * v35) + v45) + v40;
          }
          else
          {
            v12 = (float)(v41 + v28) * 0.5;
            v38 = (float)(v43 + v40) * 0.5;
            v13 = v28 - v12;
            v29 = (float)(v40 - v38) * v35;
            v44 = (float)(v13 * v8) - v29;
            v14 = (float)(v40 - v38) * v8;
            v15 = (float)(v13 * v35) + v14;
            v33 = (float)((float)(v41 - v12) * v32) - v29;
            v16 = (float)((float)(v41 - v12) * v35) + v14;
            v28 = v12 + v44;
            v40 = v38 + v15;
            v41 = v12 - v44;
            v43 = v38 - v15;
            v49 = v12 + v33;
            v50 = v38 + v16;
            v51 = v12 - v33;
            v11 = v38 - v16;
          }
          v46 = v11;
        }
        v36 = (float)*(unsigned __int16 *)(v30 + 18) / v55;
        v17 = *(unsigned __int16 *)(v30 + 16);
        v18 = (float)v17 / v56;
        v59 = (float)(*(unsigned __int16 *)(v30 + 18) + *(unsigned __int16 *)(v30 + 20)) / v55;
        v19 = v59;
        v20 = (float)(v17 + *(unsigned __int16 *)(v30 + 22)) / v56;
        v21 = v20;
        switch ( *(_DWORD *)(v30 + 28) )
        {
          case 1:
            v39 = (float)*(unsigned __int16 *)(v30 + 16) / v56;
            v34 = v39;
            v22 = (float)(*(unsigned __int16 *)(v30 + 18) + *(unsigned __int16 *)(v30 + 20)) / v55;
            v31 = v22;
            v18 = v20;
            v19 = v36;
            break;
          case 2:
            v39 = (float)*(unsigned __int16 *)(v30 + 16) / v56;
            v34 = (float)(v17 + *(unsigned __int16 *)(v30 + 22)) / v56;
            goto LABEL_18;
          case 3:
            v22 = (float)*(unsigned __int16 *)(v30 + 18) / v55;
            v39 = v20;
            v34 = v20;
            v31 = v22;
            v20 = v18;
            v36 = v59;
            break;
          case 4:
            v39 = (float)(v17 + *(unsigned __int16 *)(v30 + 22)) / v56;
            v34 = (float)*(unsigned __int16 *)(v30 + 16) / v56;
            v20 = v34;
            v18 = v39;
LABEL_18:
            v22 = (float)*(unsigned __int16 *)(v30 + 18) / v55;
            v31 = (float)(*(unsigned __int16 *)(v30 + 18) + *(unsigned __int16 *)(v30 + 20)) / v55;
            break;
          case 5:
            v22 = (float)(*(unsigned __int16 *)(v30 + 18) + *(unsigned __int16 *)(v30 + 20)) / v55;
            v39 = (float)*(unsigned __int16 *)(v30 + 16) / v56;
            v34 = v20;
            v31 = (float)*(unsigned __int16 *)(v30 + 18) / v55;
            v19 = v36;
            v36 = v22;
            break;
          default:
            v39 = (float)(v17 + *(unsigned __int16 *)(v30 + 22)) / v56;
            v34 = (float)*(unsigned __int16 *)(v30 + 16) / v56;
            v20 = v34;
            v22 = (float)(*(unsigned __int16 *)(v30 + 18) + *(unsigned __int16 *)(v30 + 20)) / v55;
            v18 = v21;
            v31 = (float)*(unsigned __int16 *)(v30 + 18) / v55;
            v19 = v36;
            v36 = v59;
            break;
        }
        Ogre::UIRenderer::initUIVert(
          __SPAIR64__(v42, (unsigned int)this),
          v28,
          v40,
          v47,
          v48,
          __SPAIR64__(LODWORD(v20), LODWORD(v19)));
        HIDWORD(v23) = v42 + 32;
        LODWORD(v23) = this;
        Ogre::UIRenderer::initUIVert(v23, v49, v50, v47, v48, __SPAIR64__(LODWORD(v34), LODWORD(v36)));
        HIDWORD(v24) = v42 + 64;
        LODWORD(v24) = this;
        Ogre::UIRenderer::initUIVert(v24, v51, v46, v47, v48, __SPAIR64__(LODWORD(v18), LODWORD(v31)));
        HIDWORD(v25) = v42 + 96;
        LODWORD(v25) = this;
        Ogre::UIRenderer::initUIVert(v25, v51, v46, v47, v48, __SPAIR64__(LODWORD(v18), LODWORD(v31)));
        HIDWORD(v26) = v42 + 128;
        LODWORD(v26) = this;
        Ogre::UIRenderer::initUIVert(v26, v49, v50, v47, v48, __SPAIR64__(LODWORD(v34), LODWORD(v36)));
        HIDWORD(v27) = v42 + 160;
        LODWORD(v27) = this;
        Ogre::UIRenderer::initUIVert(v27, v41, v43, v47, v48, __SPAIR64__(LODWORD(v39), LODWORD(v22)));
        v42 += 192;
        v53 = (Ogre::ShaderContext *)((char *)v53 + 1);
      }
      while ( v53 != v54 );
    }
    return Ogre::UIRenderer::DrawUIElement((int)this, 4, v57, 2 * (_DWORD)v54, v52[5], v58, *((_DWORD *)this + 189));
  }
  return result;
}


//======================================================================
// Ogre::UIRenderer::collectResGarbage(void)
// address: 0x001624A0   size: 0x42 (66 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::collectResGarbage(Ogre::UIRenderer *this)
{
  char *v1; // r5
  int v3; // r1
  char *v4; // r0
  int result; // r0
  int v6; // r4
  _DWORD *v7; // r0

  v1 = (char *)this + 764;
  v3 = 0;
  v4 = (char *)this + 764;
  while ( 1 )
  {
    result = Ogre::HashTable<Ogre::FixedString,Ogre::UIRenderer::UIResObject,Ogre::FixedStringHashCoder>::iterate(
               (int)v4,
               v3);
    v6 = result;
    if ( result == 0 )
      break;
    if ( *(_BYTE *)(result + 24) != 0 )
    {
      v7 = *(_DWORD **)(result + 8);
      if ( v7 != nullptr && (unsigned int)(*((_DWORD *)this + 176) - *(_DWORD *)(v6 + 28)) > 0x1388 )
      {
        Ogre::BaseObject::release(v7);
        *(_DWORD *)(v6 + 8) = 0;
      }
    }
    v4 = v1;
    v3 = v6;
  }
  return result;
}


//======================================================================
// Ogre::UIRenderer::doRender(void)
// address: 0x001624E8   size: 0xBA (186 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::doRender(Ogre::UIRenderer *this)
{
  int v2; // r5
  int v3; // r3
  Ogre::ShaderContextPool *v4; // r0
  void (*v5)(void); // r3
  _DWORD v7[39]; // [sp+4h] [bp-9Ch] BYREF

  *((_DWORD *)this + 176) = Ogre::Timer::getSystemTick(this);
  v2 = Ogre::Singleton<Ogre::Root>::ms_Singleton;
  *((float *)this + 207) = (float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 88);
  *((float *)this + 208) = (float)*(int *)(v2 + 92);
  v3 = Ogre::Singleton<Ogre::SceneManager>::ms_Singleton;
  *((_DWORD *)this + 143) = *(_DWORD *)(*(_DWORD *)Ogre::Singleton<Ogre::SceneManager>::ms_Singleton + 8);
  *((_DWORD *)this + 144) = *(_DWORD *)(*(_DWORD *)v3 + 12);
  Ogre::ContextQueDesc::ContextQueDesc(v7);
  v4 = *((Ogre::ShaderContextPool **)this + 143);
  v7[0] = *((_DWORD *)this + 153);
  v7[1] = *((_DWORD *)this + 155);
  v7[2] = *((_DWORD *)this + 156);
  v7[3] = *((_DWORD *)this + 157);
  v7[4] = *((_DWORD *)this + 158);
  v7[36] = 0;
  Ogre::ShaderContextPool::startQueue(v4, (const Ogre::ContextQueDesc *)v7);
  v5 = *((void (**)(void))this + 216);
  if ( v5 != nullptr )
  {
    v5();
    (*(void (__fastcall **)(Ogre::UIRenderer *))(*(_DWORD *)this + 104))(this);
  }
  Ogre::UIRenderer::drawCursor(this);
  (*(void (__fastcall **)(Ogre::UIRenderer *))(*(_DWORD *)this + 104))(this);
  Ogre::ShaderContextPool::endQueue(*((_DWORD *)this + 143));
  return Ogre::UIRenderer::collectResGarbage(this);
}


//======================================================================
// Ogre::UIRenderer::saveResTable(void)
// address: 0x001625AC   size: 0xD2 (210 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::saveResTable(Ogre::UIRenderer *this)
{
  int v1; // r1
  char *v2; // r6
  char *v3; // r0
  int v4; // r0
  int v5; // r5
  int result; // r0
  int v7; // r4
  int v8; // r0
  const char *v9; // [sp+4h] [bp-18h]
  unsigned __int8 v10; // [sp+Fh] [bp-Dh] BYREF
  int v11; // [sp+10h] [bp-Ch] BYREF
  int v12; // [sp+14h] [bp-8h] BYREF

  v11 = 100;
  v1 = 0;
  v2 = (char *)this + 764;
  v12 = 0;
  v3 = (char *)this + 764;
  while ( 1 )
  {
    v4 = Ogre::HashTable<Ogre::FixedString,Ogre::UIRenderer::UIResObject,Ogre::FixedStringHashCoder>::iterate(
           (int)v3,
           v1);
    v5 = v4;
    if ( v4 == 0 )
      break;
    if ( *(_BYTE *)(v4 + 24) != 0 )
      ++v12;
    v3 = v2;
    v1 = v5;
  }
  result = Ogre::FileManager::openFile(
             (Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton,
             "uitexture.ref",
             false);
  v7 = result;
  if ( result != 0 )
  {
    (*(void (__fastcall **)(int, int *, int))(*(_DWORD *)result + 12))(result, &v11, 4);
    (*(void (__fastcall **)(int, int *, int))(*(_DWORD *)v7 + 12))(v7, &v12, 4);
    while ( 1 )
    {
      v8 = Ogre::HashTable<Ogre::FixedString,Ogre::UIRenderer::UIResObject,Ogre::FixedStringHashCoder>::iterate(
             (int)v2,
             v5);
      v5 = v8;
      if ( v8 == 0 )
        break;
      if ( *(_BYTE *)(v8 + 24) != 0 )
      {
        v9 = *(const char **)v8;
        v10 = j_strlen(*(const char **)v8);
        (*(void (__fastcall **)(int, unsigned __int8 *, int))(*(_DWORD *)v7 + 12))(v7, &v10, 1);
        (*(void (__fastcall **)(int, const char *, _DWORD))(*(_DWORD *)v7 + 12))(v7, v9, v10);
        (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v7 + 12))(v7, v5 + 12, 4);
        (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v7 + 12))(v7, v5 + 16, 4);
        (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v7 + 12))(v7, v5 + 20, 4);
        --v12;
      }
    }
    return (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
  }
  return result;
}


//======================================================================
// Ogre::UIRenderer::GetTextureRes(char const*)
// address: 0x001626BC   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall Ogre::UIRenderer::GetTextureRes(
        Ogre::UIRenderer *this,
        Ogre::FixedString *a2,
        Ogre::FixedString *a3)
{
  _DWORD *v4; // r5
  void *v5; // r1
  Ogre::FixedString *v7[2]; // [sp+4h] [bp-8h] BYREF

  v7[0] = a2;
  v7[1] = a3;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v7, a2, (int)a3);
  v4 = Ogre::HashTable<Ogre::FixedString,Ogre::UIRenderer::UIResObject,Ogre::FixedStringHashCoder>::find(
         (int)this + 764,
         v7);
  Ogre::FixedString::~FixedString(v7, v5);
  return v4;
}


//======================================================================
// Ogre::UIRenderer::GetTexture(char const*)
// address: 0x001626E0   size: 0x4C (76 bytes)
//======================================================================
_DWORD *__fastcall Ogre::UIRenderer::GetTexture(Ogre::UIRenderer *this, const char *a2)
{
  int v3; // r2
  _DWORD *v4; // r6
  void *v5; // r1
  Ogre::FixedString *v7; // [sp+0h] [bp-10Ch] BYREF
  _BYTE v8[256]; // [sp+4h] [bp-108h] BYREF

  Ogre::ValidateFileName((Ogre *)v8, (char *)&dword_100, (unsigned int)a2, _stack_chk_guard);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v7, (Ogre::FixedString *)v8, v3);
  v4 = Ogre::HashTable<Ogre::FixedString,Ogre::UIRenderer::UIResObject,Ogre::FixedStringHashCoder>::find(
         (int)this + 764,
         &v7);
  Ogre::FixedString::~FixedString(&v7, v5);
  return v4;
}


//======================================================================
// Ogre::UIRenderer::~UIRenderer()
// address: 0x00162758   size: 0xF2 (242 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10UIRendererD1Ev'
void __fastcall Ogre::UIRenderer::~UIRenderer(Ogre::UIRenderer *this)
{
  unsigned int v2; // r5
  Ogre::FontGlyphMapFreeType *v3; // r0
  int v4; // r2
  char *v5; // r0
  void *v6; // r1
  void *v7; // r0
  void *v8; // r0
  unsigned int i; // r7
  _DWORD *v10; // r0
  int v11; // r6
  void *v12; // r0
  int v13; // [sp+0h] [bp-Ch]
  int v14; // [sp+4h] [bp-8h]

  v2 = 0;
  *(_DWORD *)this = &off_456CB0;
  v3 = (Ogre::FontGlyphMapFreeType *)Ogre::BaseObject::release(*((_DWORD **)this + 177));
  while ( 1 )
  {
    v4 = *((_DWORD *)this + 183);
    if ( v2 >= (*((_DWORD *)this + 184) - v4) >> 2 )
      break;
    v3 = *(Ogre::FontGlyphMapFreeType **)(4 * v2 + v4);
    if ( v3 != nullptr )
      v3 = (Ogre::FontGlyphMapFreeType *)(*(int (__fastcall **)(Ogre::FontGlyphMapFreeType *))(*(_DWORD *)v3 + 4))(v3);
    ++v2;
  }
  Ogre::FontGlyphMapFreeType::TerminateFreeType(v3);
  v5 = (char *)this + 764;
  v6 = nullptr;
  while ( 1 )
  {
    v6 = (void *)Ogre::HashTable<Ogre::FixedString,Ogre::UIRenderer::UIResObject,Ogre::FixedStringHashCoder>::iterate(
                   (int)v5,
                   (int)v6);
    if ( v6 == nullptr )
      break;
    v5 = (char *)this + 764;
  }
  v7 = *((void **)this + 213);
  if ( v7 != nullptr )
    operator delete(v7);
  v8 = *((void **)this + 210);
  if ( v8 != nullptr )
    operator delete(v8);
  for ( i = 0; ; ++i )
  {
    v10 = *((_DWORD **)this + 192);
    if ( i >= *((_DWORD *)this + 193) )
      break;
    v11 = v10[i];
    v13 = 4 * i;
    while ( v11 != 0 )
    {
      v14 = *(_DWORD *)(v11 + 32);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)v11, v6);
      operator delete((void *)v11);
      v11 = v14;
    }
    *(_DWORD *)(*((_DWORD *)this + 192) + v13) = 0;
  }
  *((_DWORD *)this + 194) = 0;
  if ( v10 != nullptr )
    operator delete[](v10);
  v12 = *((void **)this + 183);
  if ( v12 != nullptr )
    operator delete(v12);
  Ogre::VertexFormat::~VertexFormat((Ogre::UIRenderer *)((char *)this + 716));
  std::_Rb_tree<std::string,std::pair<std::string const,Ogre::UITargetEffect>,std::_Select1st<std::pair<std::string const,Ogre::UITargetEffect>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::UITargetEffect>>>::_M_erase(
    (int)this + 680,
    *((_DWORD **)this + 172));
  Ogre::SceneRenderer::~SceneRenderer(this);
  Ogre::Singleton<Ogre::UIRenderer>::ms_Singleton = 0;
}


//======================================================================
// Ogre::UIRenderer::~UIRenderer()
// address: 0x00162854   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::UIRenderer::~UIRenderer(Ogre::UIRenderer *this)
{
  Ogre::UIRenderer::~UIRenderer(this);
  operator delete(this);
}


//======================================================================
// Ogre::UIRenderer::loadResTable(void)
// address: 0x00162920   size: 0xE8 (232 bytes)
//======================================================================
int __fastcall Ogre::UIRenderer::loadResTable(Ogre::UIRenderer *this)
{
  int result; // r0
  int v2; // r4
  int i; // r1
  int v4; // r3
  int v5; // r2
  void *v6; // r1
  int v7; // [sp+4h] [bp-140h]
  unsigned __int8 v9; // [sp+17h] [bp-12Dh] BYREF
  _BYTE v10[4]; // [sp+18h] [bp-12Ch] BYREF
  int v11; // [sp+1Ch] [bp-128h] BYREF
  Ogre::FixedString *v12; // [sp+20h] [bp-124h] BYREF
  int v13; // [sp+24h] [bp-120h] BYREF
  _BYTE v14[4]; // [sp+28h] [bp-11Ch] BYREF
  _BYTE v15[4]; // [sp+2Ch] [bp-118h] BYREF
  _BYTE v16[12]; // [sp+30h] [bp-114h] BYREF
  char v17[256]; // [sp+3Ch] [bp-108h] BYREF

  result = Ogre::FileManager::openFile(
             (Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton,
             "uitexture.ref",
             true);
  v2 = result;
  if ( result != 0 )
  {
    (*(void (__fastcall **)(int, _BYTE *, int))(*(_DWORD *)result + 8))(result, v10, 4);
    (*(void (__fastcall **)(int, int *, int))(*(_DWORD *)v2 + 8))(v2, &v11, 4);
    for ( i = 0; ; i = v7 + 1 )
    {
      v7 = i;
      v4 = *(_DWORD *)v2;
      if ( i >= v11 )
        break;
      (*(void (__fastcall **)(int, unsigned __int8 *, int))(v4 + 8))(v2, &v9, 1);
      (*(void (__fastcall **)(int, char *, _DWORD))(*(_DWORD *)v2 + 8))(v2, v17, v9);
      v17[v9] = 0;
      v13 = 0;
      v16[4] = j_strstr(v17, "ui2.png") == nullptr;
      (*(void (__fastcall **)(int, _BYTE *, int))(*(_DWORD *)v2 + 8))(v2, v14, 4);
      (*(void (__fastcall **)(int, _BYTE *, int))(*(_DWORD *)v2 + 8))(v2, v15, 4);
      (*(void (__fastcall **)(int, _BYTE *, int))(*(_DWORD *)v2 + 8))(v2, v16, 4);
      Ogre::FixedString::FixedString((Ogre::FixedString *)&v12, (Ogre::FixedString *)v17, v5);
      Ogre::HashTable<Ogre::FixedString,Ogre::UIRenderer::UIResObject,Ogre::FixedStringHashCoder>::insert(
        (_DWORD *)this + 191,
        &v12,
        &v13);
      Ogre::FixedString::~FixedString(&v12, v6);
    }
    return (*(int (__fastcall **)(int))(v4 + 4))(v2);
  }
  return result;
}


//======================================================================
// Ogre::UIRenderer::CreateTexture(char const*,Ogre::BlendMode,int *,int *,bool)
// address: 0x00162A18   size: 0x98 (152 bytes)
//======================================================================
const Ogre::FixedString *__fastcall Ogre::UIRenderer::CreateTexture(
        Ogre::UIRenderer *a1,
        unsigned int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        char a6)
{
  int v6; // r2
  void *v7; // r1
  const Ogre::FixedString *v8; // r4
  Ogre::FixedString *v13; // [sp+18h] [bp-124h] BYREF
  _DWORD v14[6]; // [sp+1Ch] [bp-120h] BYREF
  _BYTE v15[256]; // [sp+34h] [bp-108h] BYREF

  Ogre::ValidateFileName((Ogre *)v15, (char *)&dword_100, a2, _stack_chk_guard);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v13, (Ogre::FixedString *)v15, v6);
  v8 = (const Ogre::FixedString *)Ogre::HashTable<Ogre::FixedString,Ogre::UIRenderer::UIResObject,Ogre::FixedStringHashCoder>::find(
                                    (int)a1 + 764,
                                    &v13);
  if ( v8 == nullptr )
  {
    v14[3] = a3;
    memset(v14, 0, 12);
    LOBYTE(v14[4]) = a6;
    v8 = (const Ogre::FixedString *)Ogre::HashTable<Ogre::FixedString,Ogre::UIRenderer::UIResObject,Ogre::FixedStringHashCoder>::insert(
                                      (_DWORD *)a1 + 191,
                                      &v13,
                                      v14);
    Ogre::UIRenderer::forceLoadTexture(a1, v8);
  }
  if ( a4 != nullptr )
    *a4 = *((_DWORD *)v8 + 3);
  if ( a5 != nullptr )
    *a5 = *((_DWORD *)v8 + 4);
  Ogre::FixedString::~FixedString(&v13, v7);
  return v8;
}


//======================================================================
// Ogre::UIRenderer::AddTextureRes(char const*,Ogre::Texture *,Ogre::BlendMode,int *,int *)
// address: 0x00162AB4   size: 0xA6 (166 bytes)
//======================================================================
_DWORD *__fastcall Ogre::UIRenderer::AddTextureRes(int a1, char *a2, int a3, int a4, _DWORD *a5, _DWORD *a6)
{
  void (__fastcall *v7)(int, _DWORD *); // r3
  int v8; // r3
  int v9; // r2
  char *v10; // r1
  _DWORD *v11; // r5
  void *v12; // r1
  Ogre::FixedString *v16; // [sp+14h] [bp-140h] BYREF
  _DWORD v17[6]; // [sp+18h] [bp-13Ch] BYREF
  _DWORD v18[7]; // [sp+30h] [bp-124h] BYREF
  char s[256]; // [sp+4Ch] [bp-108h] BYREF

  v17[3] = a4;
  (*(void (__fastcall **)(int))(*(_DWORD *)a3 + 4))(a3);
  v7 = *(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a3 + 28);
  v17[0] = a3;
  v7(a3, v18);
  v8 = v18[2];
  v17[1] = v18[1];
  v17[2] = v18[2];
  if ( a5 != nullptr )
    *a5 = v18[1];
  if ( a6 != nullptr )
    *a6 = v8;
  LOBYTE(v17[4]) = 0;
  v9 = (int)a2;
  if ( a2 != nullptr )
  {
    v10 = a2;
  }
  else
  {
    j_sprintf(s, "$%x", a3);
    v10 = s;
  }
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v16, (Ogre::FixedString *)v10, v9);
  v11 = Ogre::HashTable<Ogre::FixedString,Ogre::UIRenderer::UIResObject,Ogre::FixedStringHashCoder>::insert(
          (_DWORD *)(a1 + 764),
          &v16,
          v17);
  Ogre::FixedString::~FixedString(&v16, v12);
  return v11;
}


//======================================================================
// Ogre::UIRenderer::UIRenderer(void)
// address: 0x00162B64   size: 0x1B8 (440 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10UIRendererC1Ev'
Ogre::UIRenderer *__fastcall Ogre::UIRenderer::UIRenderer(Ogre::UIRenderer *this)
{
  void *v2; // r0
  int v3; // r2
  int v4; // r2
  void *v5; // r1
  Ogre::FontGlyphMapFreeType *v6; // r0
  Ogre::Material *v8; // [sp+Ch] [bp-10h]
  Ogre::FixedString *v9[2]; // [sp+14h] [bp-8h] BYREF

  Ogre::Singleton<Ogre::UIRenderer>::ms_Singleton = (int)this;
  Ogre::SceneRenderer::SceneRenderer(this);
  *(_DWORD *)this = &off_456CB0;
  *((_DWORD *)this + 162) = 1065353216;
  *((_DWORD *)this + 163) = 1065353216;
  *((_DWORD *)this + 164) = 1065353216;
  *((_DWORD *)this + 165) = 1065353216;
  j_memset((char *)this + 684, 0, 0x10u);
  *((_DWORD *)this + 173) = (char *)this + 684;
  *((_DWORD *)this + 174) = (char *)this + 684;
  *((_DWORD *)this + 175) = 0;
  *((_DWORD *)this + 176) = 0;
  Ogre::VertexFormat::VertexFormat((Ogre::UIRenderer *)((char *)this + 716));
  *((_DWORD *)this + 183) = 0;
  *((_DWORD *)this + 184) = 0;
  *((_DWORD *)this + 185) = 0;
  *((_DWORD *)this + 187) = 0;
  *((_DWORD *)this + 193) = 517;
  *((_DWORD *)this + 194) = 0;
  v2 = (void *)operator new[](0x814u);
  v3 = *((_DWORD *)this + 193);
  *((_DWORD *)this + 192) = v2;
  j_memset(v2, 0, 4 * v3);
  *((_DWORD *)this + 195) = 0;
  *((_DWORD *)this + 210) = 0;
  *((_DWORD *)this + 211) = 0;
  *((_DWORD *)this + 212) = 0;
  *((_DWORD *)this + 213) = 0;
  *((_DWORD *)this + 214) = 0;
  *((_DWORD *)this + 215) = 0;
  *((_DWORD *)this + 216) = 0;
  *((_DWORD *)this + 155) = 0;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v9, (Ogre::FixedString *)"ui_element", v4);
  v8 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v8, (const Ogre::FixedString *)v9);
  *((_DWORD *)this + 177) = v8;
  Ogre::FixedString::~FixedString(v9, v5);
  Ogre::VertexFormat::addElement((char *)this + 716, 2, 1, 0, 0, -1);
  Ogre::VertexFormat::addElement((char *)this + 716, 4, 5, 0, 0, -1);
  Ogre::VertexFormat::addElement((char *)this + 716, 1, 7, 0, 0, -1);
  Ogre::VertexFormat::addElement((char *)this + 716, 1, 7, 1, 0, -1);
  *((_DWORD *)this + 182) = (*(int (__fastcall **)(int, char *))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton
                                                               + 36))(
                              Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
                              (char *)this + 716);
  *((_DWORD *)this + 187) = 0;
  *((_DWORD *)this + 189) = 0;
  *((_DWORD *)this + 190) = 0;
  v6 = (Ogre::FontGlyphMapFreeType *)Ogre::UIRenderer::AddTextureRes(
                                       (int)this,
                                       nullptr,
                                       *(_DWORD *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton,
                                       2,
                                       nullptr,
                                       nullptr);
  *((_DWORD *)this + 178) = v6;
  *((_DWORD *)this + 195) = v6;
  Ogre::FontGlyphMapFreeType::InitFreeType(v6);
  *((_DWORD *)this + 196) = 0;
  *((_BYTE *)this + 820) = 1;
  *((_DWORD *)this + 206) = 1065353216;
  *((_BYTE *)this + 836) = *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 64) == 2;
  return this;
}


//======================================================================
// Ogre::UIRenderer::getUITargetEffect(char const*)
// address: 0x00162D82   size: 0x36 (54 bytes)
//======================================================================
char *__fastcall Ogre::UIRenderer::getUITargetEffect(Ogre::UIRenderer *this, char *a2)
{
  Ogre::UIRenderer *v3; // r5
  char *v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  sub_3BF0BC((int)&v5, a2);
  v3 = (Ogre::UIRenderer *)std::_Rb_tree<std::string,std::pair<std::string const,Ogre::UITargetEffect>,std::_Select1st<std::pair<std::string const,Ogre::UITargetEffect>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::UITargetEffect>>>::find(
                             (int)this + 680,
                             (int)&v5);
  sub_3BDF80(&v5);
  if ( v3 == (Ogre::UIRenderer *)((char *)this + 684) )
    return nullptr;
  else
    return (char *)v3 + 20;
}


//======================================================================
// Ogre::UIRenderer::IsCreatedUIRenderTarget(std::string const&)
// address: 0x00162DB8   size: 0x1C (28 bytes)
//======================================================================
bool __fastcall Ogre::UIRenderer::IsCreatedUIRenderTarget(int a1, int a2)
{
  return std::_Rb_tree<std::string,std::pair<std::string const,Ogre::UITargetEffect>,std::_Select1st<std::pair<std::string const,Ogre::UITargetEffect>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::UITargetEffect>>>::find(
           a1 + 680,
           a2) != a1 + 684;
}


//======================================================================
// Ogre::UIRenderer::PushClipRect(Ogre::TRect<float> const&)
// address: 0x00162F24   size: 0x30 (48 bytes)
//======================================================================
void __fastcall Ogre::UIRenderer::PushClipRect(int a1, int *a2)
{
  int v2; // r0
  int *v3; // r3
  int v4; // r5
  int v5; // r6

  v2 = a1 + 840;
  v3 = *(int **)(v2 + 4);
  if ( v3 == *(int **)(v2 + 8) )
  {
    std::vector<Ogre::TRect<float>>::_M_insert_aux((int *)v2, *(char **)(v2 + 4), a2);
  }
  else
  {
    if ( v3 != nullptr )
    {
      v4 = a2[1];
      v5 = a2[2];
      *v3 = *a2;
      v3[1] = v4;
      v3[2] = v5;
      v3[3] = a2[3];
    }
    *(_DWORD *)(v2 + 4) += 16;
  }
}


//======================================================================
// Ogre::UIRenderer::StretchRect(float,float,float,float,unsigned long,int,int,int,int,Ogre::UiUvType,float)
// address: 0x00163188   size: 0x28A (650 bytes)
//======================================================================
void __fastcall Ogre::UIRenderer::StretchRect(
        _DWORD *a1,
        float a2,
        float a3,
        float a4,
        float a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  int v12; // r4
  float v13; // r7
  float v14; // r6
  int v15; // r3
  float *v16; // r5
  float v17; // r5
  float v18; // r5
  float v19; // r7
  float v20; // r4
  double v21; // r4
  double v22; // r6
  int v23; // r0
  int v24; // r3
  float *v25; // r1
  float *v26; // r6
  float v27; // r5
  float v28; // r6
  int v29; // r4
  int v30; // r5
  int v31; // r4
  int v32; // r6
  float v33; // [sp+0h] [bp-6Ch]
  float v34; // [sp+4h] [bp-68h]
  float v35; // [sp+8h] [bp-64h]
  float v36; // [sp+Ch] [bp-60h]
  float v37; // [sp+10h] [bp-5Ch]
  float v40; // [sp+1Ch] [bp-50h]
  float v41; // [sp+1Ch] [bp-50h]
  float v42; // [sp+20h] [bp-4Ch]
  float v43; // [sp+24h] [bp-48h]
  float v44; // [sp+28h] [bp-44h]
  float v45; // [sp+28h] [bp-44h]
  float v46; // [sp+2Ch] [bp-40h]
  float v47; // [sp+40h] [bp-2Ch] BYREF
  float v48; // [sp+44h] [bp-28h]
  float v49; // [sp+48h] [bp-24h]
  float v50; // [sp+4Ch] [bp-20h]
  int v51; // [sp+50h] [bp-1Ch]
  int v52; // [sp+54h] [bp-18h]
  int v53; // [sp+58h] [bp-14h]
  int v54; // [sp+5Ch] [bp-10h]
  int v55; // [sp+60h] [bp-Ch]
  int v56; // [sp+64h] [bp-8h]

  v12 = a9;
  v13 = a2;
  v14 = a3;
  v15 = a1[195];
  if ( a9 == 0 )
    v12 = *(_DWORD *)(v15 + 12);
  if ( a10 == 0 )
    a10 = *(_DWORD *)(v15 + 16);
  v16 = (float *)a1[210];
  if ( v16 == (float *)a1[211] )
    goto LABEL_28;
  v42 = a2 + a4;
  v43 = a3 + a5;
  v35 = v16[3];
  if ( (float)(a3 + a5) <= v35 )
    v44 = 0.0;
  else
    v44 = v43 - v35;
  v33 = v16[1];
  if ( a3 >= v33 )
    v46 = 0.0;
  else
    v46 = v33 - a3;
  v37 = *v16;
  if ( a2 >= *v16 )
    v40 = 0.0;
  else
    v40 = v37 - a2;
  v36 = v16[2];
  v17 = 0.0;
  if ( v42 > v36 )
    v17 = v42 - v36;
  v41 = (float)a7 + (float)((float)(v40 / a4) * (float)v12);
  v18 = (float)(a7 + v12) - (float)((float)(v17 / a4) * (float)v12);
  v34 = (float)a8 + (float)((float)(v46 / a5) * (float)a10);
  v45 = (float)(a8 + a10) - (float)((float)(v44 / a5) * (float)a10);
  if ( a2 > v37 )
    v37 = a2;
  v19 = a2 + a4;
  if ( v42 >= v36 )
    v19 = v36;
  if ( a3 > v33 )
    v33 = a3;
  v20 = a3 + a5;
  if ( v43 >= v35 )
    v20 = v35;
  a4 = v19 - v37;
  a5 = v20 - v33;
  v21 = j_floor((float)(v18 - v41) + 0.5);
  v22 = j_floor((float)(v45 - v34) + 0.5);
  if ( a4 > 0.0 && a5 > 0.0 )
  {
    a7 = (int)v41;
    a8 = (int)v34;
    v12 = (int)v21;
    v23 = (int)v22;
    v14 = v33;
    v13 = v37;
    LOWORD(a10) = v23;
LABEL_28:
    v47 = v14;
    v49 = a4;
    LOWORD(v52) = v12;
    v50 = a5;
    HIWORD(v51) = a7;
    HIWORD(v52) = a10;
    LOWORD(v51) = a8;
    v53 = a6;
    v54 = a11;
    v55 = a12;
    v24 = a1[188];
    v25 = (float *)a1[214];
    v26 = (float *)a1[215];
    v48 = v13;
    v56 = v24;
    if ( v25 == v26 )
    {
      std::vector<Ogre::UIScreenRect>::_M_insert_aux((int)(a1 + 213), (int)v25, &v47);
    }
    else
    {
      if ( v25 != nullptr )
      {
        v27 = v48;
        v28 = v49;
        *v25 = v47;
        v25[1] = v27;
        v25[2] = v28;
        v29 = v51;
        v30 = v52;
        v25[3] = v50;
        *((_DWORD *)v25 + 4) = v29;
        *((_DWORD *)v25 + 5) = v30;
        v31 = v54;
        v32 = v55;
        *((_DWORD *)v25 + 6) = v53;
        *((_DWORD *)v25 + 7) = v31;
        *((_DWORD *)v25 + 8) = v32;
        *((_DWORD *)v25 + 9) = v56;
      }
      a1[214] += 40;
    }
  }
}


//======================================================================
// Ogre::UIRenderer::BeginDraw(void *,void *,float,int)
// address: 0x00163560   size: 0xB4 (180 bytes)
//======================================================================
__int64 __fastcall Ogre::UIRenderer::BeginDraw(Ogre::UIRenderer *this, _DWORD *a2, __int64 a3, int a4)
{
  _DWORD *v5; // r5
  int v6; // r3
  int v7; // r2
  int v8; // r3

  v5 = a2;
  if ( a2 == nullptr )
    v5 = *((_DWORD **)this + 178);
  if ( *((_DWORD **)this + 195) == v5 && *((_DWORD *)this + 187) == (_DWORD)a3 && *((_DWORD *)this + 189) == a4 )
  {
    *((_DWORD *)this + 188) = HIDWORD(a3);
  }
  else
  {
    Ogre::UIRenderer::drawScreenRects(this);
    v6 = *((_DWORD *)this + 213);
    if ( -858993459 * ((*((_DWORD *)this + 214) - v6) >> 3) != 0 )
      *((_DWORD *)this + 214) = v6;
    *((_DWORD *)this + 195) = v5;
    *((_DWORD *)this + 187) = a3;
    *((_DWORD *)this + 189) = a4;
    *((_DWORD *)this + 188) = HIDWORD(a3);
    v7 = v5[2];
    v5[7] = *((_DWORD *)this + 176);
    if ( v7 == 0 )
      Ogre::UIRenderer::forceLoadTexture(this, *((const Ogre::FixedString **)this + 195));
    v8 = *((_DWORD *)this + 187);
    if ( v8 != 0 )
    {
      *(_DWORD *)(v8 + 28) = *((_DWORD *)this + 176);
      if ( *(_DWORD *)(v8 + 8) == 0 )
        Ogre::UIRenderer::forceLoadTexture(this, *((const Ogre::FixedString **)this + 187));
    }
  }
  return a3;
}


//======================================================================
// Ogre::UIRenderer::CreateTrueTypeFont(int,int,char const*,Ogre::ECharacterCoding,unsigned int)
// address: 0x00163978   size: 0xA0 (160 bytes)
//======================================================================
_DWORD *__fastcall Ogre::UIRenderer::CreateTrueTypeFont(int a1, int a2, int a3, char *a4, int a5, unsigned int a6)
{
  int SamenessFont; // r5
  _DWORD *v8; // r4
  __int64 v9; // r0
  _DWORD *v14; // [sp+24h] [bp-8h] BYREF

  SamenessFont = Ogre::UIRenderer::FindSamenessFont(a1, a2, a3, (int)a4, a5, a6);
  if ( SamenessFont == 0 )
  {
    v8 = (_DWORD *)operator new(0x9Cu);
    Ogre::RFontBase::RFontBase((Ogre::RFontBase *)v8);
    *v8 = &off_456140;
    j_memset(v8 + 31, 0, 0x10u);
    v8[35] = 0;
    v8[33] = v8 + 31;
    v8[34] = v8 + 31;
    v8[15] = 256;
    v8[14] = 256;
    v8[24] = 0;
    v8[25] = 0;
    v8[26] = 0;
    v8[36] = 0;
    if ( Ogre::RFontCommonImpl::Init((int)v8, a1, a2, a3, a4, a5, a6) != nullptr )
    {
      LODWORD(v9) = a1 + 732;
      HIDWORD(v9) = &v14;
      v14 = v8;
      std::vector<Ogre::IFont *>::push_back(v9);
      return v8;
    }
    else
    {
      (*(void (__fastcall **)(_DWORD *))(*v8 + 4))(v8);
    }
  }
  return (_DWORD *)SamenessFont;
}


//======================================================================
// Ogre::UIRenderer::CreateBitmapFont(char const*,Ogre::ECharacterCoding)
// address: 0x00163A1C   size: 0x9E (158 bytes)
//======================================================================
_DWORD *__fastcall Ogre::UIRenderer::CreateBitmapFont(int a1, char *a2, int a3)
{
  int SamenessFont; // r5
  _DWORD *v5; // r4
  __int64 v6; // r0
  _DWORD *v10; // [sp+14h] [bp-8h] BYREF

  SamenessFont = Ogre::UIRenderer::FindSamenessFont(a1, 0, 0, (int)a2, a3, 0);
  if ( SamenessFont == 0 )
  {
    v5 = (_DWORD *)operator new(0x94u);
    Ogre::RFontBase::RFontBase((Ogre::RFontBase *)v5);
    v5[24] = off_4560D0;
    *v5 = &off_456078;
    v5[25] = &byte_55FB88;
    v5[26] = &byte_55FB88;
    j_memset(v5 + 32, 0, 0x10u);
    v5[36] = 0;
    v5[34] = v5 + 32;
    v5[35] = v5 + 32;
    v5[15] = 256;
    v5[14] = 256;
    v5[27] = 0;
    v5[28] = 0;
    v5[10] = 10000;
    if ( Ogre::RFontBitmapImpl::Init((int)v5, a1, a2, a3) != 0 )
    {
      LODWORD(v6) = a1 + 732;
      HIDWORD(v6) = &v10;
      v10 = v5;
      std::vector<Ogre::IFont *>::push_back(v6);
      return v5;
    }
    else
    {
      (*(void (__fastcall **)(_DWORD *))(*v5 + 4))(v5);
    }
  }
  return (_DWORD *)SamenessFont;
}

