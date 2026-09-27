// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BloomEffect

//======================================================================
// Ogre::BloomEffect::onLostDevice(void)
// address: 0x0018FBD4   size: 0xDE (222 bytes)
//======================================================================
_DWORD *__fastcall Ogre::BloomEffect::onLostDevice(Ogre::BloomEffect *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *result; // r0

  v2 = *((_DWORD **)this + 161);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 161) = 0;
  }
  v3 = *((_DWORD **)this + 160);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 160) = 0;
  }
  v4 = *((_DWORD **)this + 163);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)this + 163) = 0;
  }
  v5 = *((_DWORD **)this + 162);
  if ( v5 != nullptr )
  {
    Ogre::BaseObject::release(v5);
    *((_DWORD *)this + 162) = 0;
  }
  v6 = *((_DWORD **)this + 164);
  if ( v6 != nullptr )
  {
    Ogre::BaseObject::release(v6);
    *((_DWORD *)this + 164) = 0;
  }
  v7 = *((_DWORD **)this + 165);
  if ( v7 != nullptr )
  {
    Ogre::BaseObject::release(v7);
    *((_DWORD *)this + 165) = 0;
  }
  v8 = *((_DWORD **)this + 166);
  if ( v8 != nullptr )
  {
    Ogre::BaseObject::release(v8);
    *((_DWORD *)this + 166) = 0;
  }
  v9 = *((_DWORD **)this + 167);
  if ( v9 != nullptr )
  {
    Ogre::BaseObject::release(v9);
    *((_DWORD *)this + 167) = 0;
  }
  v10 = *((_DWORD **)this + 172);
  if ( v10 != nullptr )
  {
    Ogre::BaseObject::release(v10);
    *((_DWORD *)this + 172) = 0;
  }
  v11 = *((_DWORD **)this + 170);
  if ( v11 != nullptr )
  {
    Ogre::BaseObject::release(v11);
    *((_DWORD *)this + 170) = 0;
  }
  v12 = *((_DWORD **)this + 173);
  if ( v12 != nullptr )
  {
    Ogre::BaseObject::release(v12);
    *((_DWORD *)this + 173) = 0;
  }
  result = *((_DWORD **)this + 171);
  if ( result != nullptr )
  {
    result = Ogre::BaseObject::release(result);
    *((_DWORD *)this + 171) = 0;
  }
  return result;
}


//======================================================================
// Ogre::BloomEffect::~BloomEffect()
// address: 0x0018FCB4   size: 0x42 (66 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11BloomEffectD1Ev'
void __fastcall Ogre::BloomEffect::~BloomEffect(void **this)
{
  _DWORD *v2; // r0

  *this = &off_458300;
  Ogre::BloomEffect::onLostDevice((Ogre::BloomEffect *)this);
  v2 = *(this + 181);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *(this + 181) = nullptr;
  }
  Ogre::VertexFormat::~VertexFormat(this + 177);
  Ogre::Singleton<Ogre::BloomEffect>::ms_Singleton = 0;
  Ogre::SceneRenderer::~SceneRenderer((Ogre::SceneRenderer *)this);
}


//======================================================================
// Ogre::BloomEffect::~BloomEffect()
// address: 0x0018FD00   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::BloomEffect::~BloomEffect(void **this)
{
  Ogre::BloomEffect::~BloomEffect(this);
  operator delete(this);
}


//======================================================================
// Ogre::BloomEffect::onRestoreDevice(void)
// address: 0x0018FD34   size: 0x24E (590 bytes)
//======================================================================
TiXmlNode *__fastcall Ogre::BloomEffect::onRestoreDevice(Ogre::BloomEffect *this, int a2, TiXmlElement *a3)
{
  TiXmlNode *result; // r0
  int v5; // r0
  unsigned int v6; // r6
  unsigned int v7; // r2
  int v8; // r6
  int v9; // r1
  TiXmlElement *v10; // r2
  int v11; // r1
  TiXmlElement *v12; // r2
  TiXmlNode *MultiSample; // r4
  Ogre::HardwarePixelBuffer *v14; // r0
  Ogre::HardwarePixelBuffer *v15; // r0
  Ogre::HardwarePixelBuffer *v16; // r0
  Ogre::HardwarePixelBuffer *v17; // r0
  int RenderTarget; // r0
  Ogre::HardwarePixelBuffer *v19; // r0
  Ogre::HardwarePixelBuffer *v20; // r0
  Ogre::HardwarePixelBuffer *v21; // r0
  Ogre::HardwarePixelBuffer *v22; // r0
  int v23; // r6
  Ogre::HardwarePixelBuffer *v24; // r0
  Ogre::HardwarePixelBuffer *v25; // r0
  int v26; // [sp+8h] [bp-34h]
  int v27; // [sp+Ch] [bp-30h]
  int v28; // [sp+Ch] [bp-30h]
  int v29; // [sp+Ch] [bp-30h]
  unsigned int v30; // [sp+10h] [bp-2Ch] BYREF
  unsigned int v31; // [sp+14h] [bp-28h] BYREF
  int v32; // [sp+18h] [bp-24h] BYREF
  int v33; // [sp+1Ch] [bp-20h] BYREF
  unsigned int v34; // [sp+20h] [bp-1Ch]
  unsigned int v35; // [sp+24h] [bp-18h]
  int v36; // [sp+2Ch] [bp-10h]
  int v37; // [sp+30h] [bp-Ch]

  result = Ogre::Root::getBloom((TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton, a2, a3);
  if ( result != nullptr )
  {
    v5 = (*(int (__fastcall **)(int))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 32))(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton);
    (*(void (__fastcall **)(int, unsigned int *, unsigned int *))(*(_DWORD *)v5 + 28))(v5, &v30, &v31);
    v6 = v30;
    v7 = v31;
    *((float *)this + 216) = (float)v30;
    *((float *)this + 217) = (float)v7;
    v34 = v6;
    v35 = v7;
    v36 = 1;
    v37 = 28;
    v33 = 0;
    v32 = 4;
    v27 = operator new(0x30u);
    Ogre::RT_TEXTURE::RT_TEXTURE(v27, &v33, &v32);
    *((_DWORD *)this + 160) = v27;
    v32 = 4;
    v28 = operator new(0x30u);
    Ogre::RT_TEXTURE::RT_TEXTURE(v28, &v33, &v32);
    *((_DWORD *)this + 162) = v28;
    v32 = 4;
    v34 = v30 >> 2;
    v35 = v31 >> 2;
    v29 = operator new(0x30u);
    Ogre::RT_TEXTURE::RT_TEXTURE(v29, &v33, &v32);
    *((_DWORD *)this + 164) = v29;
    v32 = 4;
    v8 = operator new(0x30u);
    Ogre::RT_TEXTURE::RT_TEXTURE(v8, &v33, &v32);
    *((_DWORD *)this + 165) = v8;
    MultiSample = Ogre::Root::getMultiSample((TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton, v9, v10);
    if ( (int)MultiSample <= 0
      || Ogre::Root::getDistort((TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton, v11, v12) != nullptr )
    {
      v19 = (Ogre::HardwarePixelBuffer *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 160) + 32))(*((_DWORD *)this + 160));
      *((_DWORD *)this + 161) = Ogre::HardwarePixelBuffer::createRenderTarget(v19, 0, 24, 0, false);
      v20 = (Ogre::HardwarePixelBuffer *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 162) + 32))(*((_DWORD *)this + 162));
      *((_DWORD *)this + 163) = Ogre::HardwarePixelBuffer::createRenderTarget(v20, 0, 16, 0, false);
      v21 = (Ogre::HardwarePixelBuffer *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 164) + 32))(*((_DWORD *)this + 164));
      *((_DWORD *)this + 166) = Ogre::HardwarePixelBuffer::createRenderTarget(v21, 0, 16, 0, false);
      v22 = (Ogre::HardwarePixelBuffer *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 165) + 32))(*((_DWORD *)this + 165));
      RenderTarget = Ogre::HardwarePixelBuffer::createRenderTarget(v22, 0, 16, 0, false);
    }
    else
    {
      v14 = (Ogre::HardwarePixelBuffer *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 160) + 32))(*((_DWORD *)this + 160));
      *((_DWORD *)this + 161) = Ogre::HardwarePixelBuffer::createRenderTarget(v14, 0, 24, (int)MultiSample, false);
      v15 = (Ogre::HardwarePixelBuffer *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 162) + 32))(*((_DWORD *)this + 162));
      *((_DWORD *)this + 163) = Ogre::HardwarePixelBuffer::createRenderTarget(v15, 0, 16, (int)MultiSample, false);
      v16 = (Ogre::HardwarePixelBuffer *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 164) + 32))(*((_DWORD *)this + 164));
      *((_DWORD *)this + 166) = Ogre::HardwarePixelBuffer::createRenderTarget(v16, 0, 16, 0, false);
      v17 = (Ogre::HardwarePixelBuffer *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 165) + 32))(*((_DWORD *)this + 165));
      RenderTarget = Ogre::HardwarePixelBuffer::createRenderTarget(v17, 0, 16, 0, false);
    }
    *((_DWORD *)this + 167) = RenderTarget;
    v32 = 4;
    v26 = operator new(0x30u);
    Ogre::RT_TEXTURE::RT_TEXTURE(v26, &v33, &v32);
    *((_DWORD *)this + 170) = v26;
    v32 = 4;
    v23 = operator new(0x30u);
    Ogre::RT_TEXTURE::RT_TEXTURE(v23, &v33, &v32);
    *((_DWORD *)this + 171) = v23;
    v24 = (Ogre::HardwarePixelBuffer *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 170) + 32))(*((_DWORD *)this + 170));
    *((_DWORD *)this + 172) = Ogre::HardwarePixelBuffer::createRenderTarget(v24, 0, 16, 0, false);
    v25 = (Ogre::HardwarePixelBuffer *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 171) + 32))(*((_DWORD *)this + 171));
    result = (TiXmlNode *)Ogre::HardwarePixelBuffer::createRenderTarget(v25, 0, 16, 0, false);
    *((_DWORD *)this + 173) = result;
  }
  return result;
}


//======================================================================
// Ogre::BloomEffect::BloomEffect(void)
// address: 0x0018FF90   size: 0x1F6 (502 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11BloomEffectC1Ev'
Ogre::BloomEffect *__fastcall Ogre::BloomEffect::BloomEffect(Ogre::BloomEffect *this)
{
  int v2; // r2
  Ogre::Material *v3; // r7
  void *v4; // r1
  Ogre::FixedString *v6[2]; // [sp+Ch] [bp-8h] BYREF

  Ogre::SceneRenderer::SceneRenderer(this);
  Ogre::Singleton<Ogre::BloomEffect>::ms_Singleton = (int)this;
  *(_DWORD *)this = &off_458300;
  *((_DWORD *)this + 160) = 0;
  *((_DWORD *)this + 161) = 0;
  *((_DWORD *)this + 169) = 0;
  Ogre::VertexFormat::VertexFormat((_DWORD *)this + 177);
  *((_DWORD *)this + 162) = 0;
  *((_DWORD *)this + 163) = 0;
  *((_DWORD *)this + 164) = 0;
  *((_DWORD *)this + 165) = 0;
  *((_DWORD *)this + 166) = 0;
  *((_DWORD *)this + 167) = 0;
  *((_DWORD *)this + 204) = 0;
  *((_DWORD *)this + 205) = 0;
  *((_DWORD *)this + 168) = 0;
  *((_DWORD *)this + 174) = 1065353216;
  *((_DWORD *)this + 175) = 1050253722;
  *((_DWORD *)this + 176) = 1065353216;
  *((_BYTE *)this + 753) = 0;
  *((_BYTE *)this + 754) = 1;
  *((_DWORD *)this + 190) = 0;
  *((_DWORD *)this + 191) = 1084178432;
  *((_DWORD *)this + 195) = 0;
  *((_DWORD *)this + 197) = 0;
  *((_DWORD *)this + 196) = 1071644672;
  *((_DWORD *)this + 194) = 1067030938;
  *((_DWORD *)this + 171) = 0;
  *((_DWORD *)this + 170) = 0;
  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 172) = 0;
  Ogre::VertexFormat::addElement((int *)this + 177, 3u, 0xAu, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)this + 177, 1u, 7u, 0, 0, -1);
  *((_DWORD *)this + 180) = (*(int (__fastcall **)(int, char *))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton
                                                               + 36))(
                              Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
                              (char *)this + 708);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v6, (Ogre::FixedString *)"bloom", v2);
  v3 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v3, (const Ogre::FixedString *)v6);
  *((_DWORD *)this + 181) = v3;
  Ogre::FixedString::~FixedString(v6, v4);
  *((_BYTE *)this + 792) = 0;
  *((_BYTE *)this + 793) = 1;
  *((_DWORD *)this + 200) = 0;
  *((_DWORD *)this + 201) = 0;
  *((_BYTE *)this + 824) = 0;
  *((_DWORD *)this + 208) = -1610612736;
  *((_DWORD *)this + 209) = 1072273817;
  *((_DWORD *)this + 210) = 1051931443;
  *((_DWORD *)this + 211) = 1058642330;
  *((_DWORD *)this + 212) = 0;
  *((_DWORD *)this + 213) = 1083129856;
  *((_DWORD *)this + 214) = 0;
  *((_DWORD *)this + 215) = 0;
  *((_DWORD *)this + 216) = 1149239296;
  *((_DWORD *)this + 217) = 1145044992;
  *((_DWORD *)this + 218) = 0;
  *((_DWORD *)this + 219) = 1053609165;
  *((_DWORD *)this + 220) = 0;
  *((_BYTE *)this + 728) = 0;
  *((_DWORD *)this + 183) = 1063675494;
  *((_DWORD *)this + 184) = 0;
  *((_DWORD *)this + 185) = 1083129856;
  *((_DWORD *)this + 186) = 0;
  *((_DWORD *)this + 187) = 0;
  *((_BYTE *)this + 752) = 1;
  Ogre::BloomEffect::onRestoreDevice(this, 744, nullptr);
  return this;
}


//======================================================================
// Ogre::BloomEffect::SetBlur(float)
// address: 0x001901E8   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::BloomEffect::SetBlur(int this, float a2)
{
  *(float *)(this + 704) = a2;
  return this;
}


//======================================================================
// Ogre::BloomEffect::SetGrayValue(float)
// address: 0x001901F0   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::BloomEffect::SetGrayValue(int this, float a2)
{
  *(float *)(this + 700) = a2;
  return this;
}


//======================================================================
// Ogre::BloomEffect::SetHighScene(float)
// address: 0x001901F8   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::BloomEffect::SetHighScene(int this, float a2)
{
  *(float *)(this + 696) = a2;
  return this;
}


//======================================================================
// Ogre::BloomEffect::setGaussBlur(bool)
// address: 0x00190200   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::BloomEffect::setGaussBlur(int this, bool a2)
{
  *(_BYTE *)(this + 728) = a2;
  return this;
}


//======================================================================
// Ogre::BloomEffect::playRadialBloom(double,bool)
// address: 0x00190208   size: 0x2E (46 bytes)
//======================================================================
int __fastcall Ogre::BloomEffect::playRadialBloom(int this, double a2, bool a3)
{
  *(_BYTE *)(this + 754) = a3;
  *(double *)(this + 760) = a2;
  if ( a3 )
    a2 = 0.0;
  *(double *)(this + 768) = a2;
  *(_BYTE *)(this + 753) = 1;
  return this;
}


//======================================================================
// Ogre::BloomEffect::stopRadial(void)
// address: 0x00190248   size: 0x28 (40 bytes)
//======================================================================
int __fastcall Ogre::BloomEffect::stopRadial(int this)
{
  *(_DWORD *)(this + 760) = 0;
  *(_DWORD *)(this + 764) = 0;
  *(_DWORD *)(this + 768) = 0;
  *(_DWORD *)(this + 772) = 0;
  *(_BYTE *)(this + 754) = 1;
  *(_BYTE *)(this + 753) = 0;
  return this;
}


//======================================================================
// Ogre::BloomEffect::playBlend(void)
// address: 0x00190280   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::BloomEffect::playBlend(int this)
{
  *(_BYTE *)(this + 792) = 1;
  *(_BYTE *)(this + 793) = 1;
  return this;
}


//======================================================================
// Ogre::BloomEffect::stopBlend(void)
// address: 0x00190298   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall Ogre::BloomEffect::stopBlend(Ogre::BloomEffect *this)
{
  _DWORD *result; // r0

  *((_BYTE *)this + 792) = 0;
  *((_DWORD *)this + 200) = 0;
  *((_DWORD *)this + 201) = 0;
  *((_DWORD *)this + 202) = 0;
  *((_DWORD *)this + 203) = 0;
  result = (_DWORD *)((char *)this + 816);
  *result = 0;
  result[1] = 0;
  return result;
}


//======================================================================
// Ogre::BloomEffect::playBlend(double)
// address: 0x001902D0   size: 0x20 (32 bytes)
//======================================================================
int __fastcall Ogre::BloomEffect::playBlend(Ogre::BloomEffect *this, double a2)
{
  *((double *)this + 100) = a2;
  *((_DWORD *)this + 202) = 0;
  *((_DWORD *)this + 203) = 0;
  return Ogre::BloomEffect::playBlend((int)this);
}


//======================================================================
// Ogre::BloomEffect::setVortexMaxDegree(float)
// address: 0x001902F8   size: 0x14 (20 bytes)
//======================================================================
double __fastcall Ogre::BloomEffect::setVortexMaxDegree(Ogre::BloomEffect *this, float a2)
{
  double *v2; // r4
  double result; // r0

  v2 = (double *)((char *)this + 832);
  result = a2;
  *v2 = result;
  return result;
}


//======================================================================
// Ogre::BloomEffect::setRadiusRateFromTo(float,float)
// address: 0x0019030C   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::BloomEffect::setRadiusRateFromTo(int this, float a2, float a3)
{
  *(float *)(this + 840) = a2;
  *(float *)(this + 844) = a3;
  return this;
}


//======================================================================
// Ogre::BloomEffect::playVortex(double,bool)
// address: 0x00190320   size: 0x30 (48 bytes)
//======================================================================
double *__fastcall Ogre::BloomEffect::playVortex(Ogre::BloomEffect *this, double a2, bool a3)
{
  double *result; // r0

  *((_BYTE *)this + 824) = 1;
  *((double *)this + 106) = a2;
  *((_BYTE *)this + 825) = a3;
  result = (double *)((char *)this + 856);
  if ( a3 )
    a2 = 0.0;
  *result = a2;
  return result;
}


//======================================================================
// Ogre::BloomEffect::update(double)
// address: 0x00190360   size: 0x272 (626 bytes)
//======================================================================
float __fastcall Ogre::BloomEffect::update(float this, double a2)
{
  int v3; // r6
  _DWORD *v4; // r7
  double v5; // r4
  double v6; // r0
  _DWORD *v7; // r7
  double v8; // r0
  double v9; // r4
  double v10; // r2
  double v11; // r0
  double v12; // r4
  float v13; // r0
  _DWORD *v14; // r7
  double v15; // r0
  double v16; // r4
  double v17; // r2
  double v18; // r0
  bool v19; // r3
  double v20; // r4
  float v21; // r0
  float v22; // r4
  float v23; // r0
  double v24; // [sp+8h] [bp-14h]
  double v25; // [sp+8h] [bp-14h]
  double v27; // [sp+10h] [bp-Ch]

  v3 = LODWORD(this);
  if ( *(_BYTE *)(LODWORD(this) + 792) != 0 )
  {
    *(double *)(LODWORD(this) + 816) = *(double *)(LODWORD(this) + 816) + a2;
    v4 = (_DWORD *)(LODWORD(this) + 808);
    v5 = *(double *)(LODWORD(this) + 808) + a2;
    v24 = *(double *)(LODWORD(this) + 800);
    LODWORD(this) = v5 < v24;
    if ( v5 >= v24 )
    {
      LODWORD(this) = v24 == 0.0;
      if ( v24 != 0.0 )
        this = COERCE_FLOAT(Ogre::BloomEffect::stopBlend((Ogre::BloomEffect *)v3));
    }
    else
    {
      *v4 = LODWORD(v5);
      *(_DWORD *)(v3 + 812) = HIDWORD(v5);
    }
  }
  if ( *(_BYTE *)(v3 + 728) != 0 )
  {
    v6 = a2 + *(double *)(v3 + 744);
    *(double *)(v3 + 744) = v6;
    this = j_sin(v6 * 0.00499999989) * 0.5 + 0.5;
    *(float *)(v3 + 732) = this;
  }
  if ( *(_BYTE *)(v3 + 753) != 0 )
  {
    v7 = (_DWORD *)(v3 + 768);
    v8 = *(double *)(v3 + 768);
    if ( *(_BYTE *)(v3 + 754) != 0 )
    {
      v9 = v8 + a2;
      v25 = *(double *)(v3 + 760);
      if ( v8 + a2 > v25 )
      {
        *(_BYTE *)(v3 + 753) = 0;
        this = COERCE_FLOAT(Ogre::BloomEffect::playRadialBloom(v3, 1500.0, false));
        goto LABEL_17;
      }
      *v7 = LODWORD(v9);
      *(_DWORD *)(v3 + 772) = HIDWORD(v9);
      v10 = v25;
      v11 = v8 + a2;
      goto LABEL_15;
    }
    v12 = v8 - a2;
    LODWORD(this) = v8 - a2 >= 0.0;
    if ( this != 0.0 )
    {
      *v7 = LODWORD(v12);
      *(_DWORD *)(v3 + 772) = HIDWORD(v12);
      v11 = v12;
      v10 = *(double *)(v3 + 760);
LABEL_15:
      v13 = v11 / v10;
      this = *(float *)(v3 + 776) * v13;
      *(float *)(v3 + 780) = this;
      *(_DWORD *)(v3 + 788) = *(_DWORD *)(v3 + 784);
      goto LABEL_17;
    }
    *(_BYTE *)(v3 + 753) = 0;
  }
LABEL_17:
  if ( *(_BYTE *)(v3 + 824) == 0 )
    return this;
  v14 = (_DWORD *)(v3 + 856);
  v15 = *(double *)(v3 + 856);
  if ( *(_BYTE *)(v3 + 825) != 0 )
  {
    v16 = v15 + a2;
    v27 = *(double *)(v3 + 848);
    if ( v16 < v27 )
    {
      *v14 = LODWORD(v16);
      *(_DWORD *)(v3 + 860) = HIDWORD(v16);
      v17 = v27;
      v18 = v16;
LABEL_24:
      v21 = v18 / v17;
      *(float *)(v3 + 872) = v21;
      v22 = v21;
      v23 = v21 * *(double *)(v3 + 832);
      *(float *)(v3 + 880) = v23;
      this = *(float *)(v3 + 840) + (float)(v22 * (float)(*(float *)(v3 + 844) - *(float *)(v3 + 840)));
      *(float *)(v3 + 876) = this;
      return this;
    }
    v19 = false;
    *(_BYTE *)(v3 + 824) = 0;
  }
  else
  {
    v20 = v15 - a2;
    if ( v15 - a2 >= 0.0 )
    {
      *v14 = LODWORD(v20);
      *(_DWORD *)(v3 + 860) = HIDWORD(v20);
      v18 = v15 - a2;
      v17 = *(double *)(v3 + 848);
      goto LABEL_24;
    }
    *(_BYTE *)(v3 + 824) = 0;
    v19 = true;
  }
  return COERCE_FLOAT(Ogre::BloomEffect::playVortex((Ogre::BloomEffect *)v3, 2000.0, v19));
}


//======================================================================
// Ogre::BloomEffect::ValidateCreateResult(void)
// address: 0x00190610   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall Ogre::BloomEffect::ValidateCreateResult(Ogre::BloomEffect *this)
{
  int v2; // r0
  int v3; // r0
  int v4; // r6
  int v5; // r5
  int v6; // r6
  int v7; // r5

  v2 = *((_DWORD *)this + 161);
  if ( v2 != 0
    && (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 40))(v2) != 0
    && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 161) + 44))(*((_DWORD *)this + 161)) != 0 )
  {
    v3 = *((_DWORD *)this + 163);
    if ( v3 != 0
      && (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 40))(v3) != 0
      && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 163) + 44))(*((_DWORD *)this + 163)) != 0 )
    {
      v4 = 0;
      while ( 1 )
      {
        v5 = *(_DWORD *)((char *)this + v4 + 688);
        if ( v5 == 0
          || (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v5 + 40))(*(_DWORD *)((char *)this + v4 + 688)) == 0
          || (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 44))(v5) == 0 )
        {
          break;
        }
        v4 += 4;
        if ( v4 == 8 )
        {
          v6 = 0;
          while ( 1 )
          {
            v7 = *(_DWORD *)((char *)this + v6 + 664);
            if ( v7 == 0
              || (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 40))(*(_DWORD *)((char *)this + v6 + 664)) == 0
              || (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 44))(v7) == 0 )
            {
              break;
            }
            v6 += 4;
            if ( v6 == 8 )
              return 0;
          }
          return 1;
        }
      }
    }
  }
  return 1;
}


//======================================================================
// Ogre::BloomEffect::doRenderQue(Ogre::RenderTarget *,Ogre::Material *)
// address: 0x001906B8   size: 0xF4 (244 bytes)
//======================================================================
int __fastcall Ogre::BloomEffect::doRenderQue(Ogre::BloomEffect *this, Ogre::RenderTarget *a2, Ogre::Material *a3)
{
  Ogre::ShaderContextPool *v5; // r0
  Ogre::DynamicVertexBuffer *v6; // r7
  int v7; // r0
  float v9; // [sp+1Ch] [bp-5C8h]
  float v10; // [sp+20h] [bp-5C4h]
  unsigned int v12; // [sp+2Ch] [bp-5B8h] BYREF
  unsigned int v13; // [sp+30h] [bp-5B4h] BYREF
  _DWORD v14[39]; // [sp+34h] [bp-5B0h] BYREF
  _DWORD v15[325]; // [sp+D0h] [bp-514h] BYREF

  v14[36] = 1;
  v5 = *((Ogre::ShaderContextPool **)this + 143);
  v14[1] = 0;
  v14[11] = 0;
  v14[37] = 0;
  v14[38] = 0;
  v14[9] = 0;
  v14[6] = 0;
  v14[5] = 0;
  v14[10] = 1065353216;
  v14[8] = 1065353216;
  v14[7] = 1065353216;
  v14[0] = a2;
  Ogre::ShaderContextPool::startQueue(v5, (const Ogre::ContextQueDesc *)v14);
  (*(void (__fastcall **)(Ogre::RenderTarget *, unsigned int *, unsigned int *))(*(_DWORD *)a2 + 28))(a2, &v12, &v13);
  v9 = (float)v12 - 0.5;
  v10 = (float)v13 - 0.5;
  v6 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                      (Ogre::DynamicBufferPool **)this,
                                      (Ogre::BloomEffect *)((char *)this + 708),
                                      4u);
  v7 = Ogre::DynamicVertexBuffer::lock(v6);
  *(_DWORD *)v7 = -1090519040;
  *(_DWORD *)(v7 + 4) = -1090519040;
  *(_DWORD *)(v7 + 28) = -1090519040;
  *(_DWORD *)(v7 + 48) = -1090519040;
  *(_DWORD *)(v7 + 12) = 1065353216;
  *(_DWORD *)(v7 + 36) = 1065353216;
  *(_DWORD *)(v7 + 40) = 1065353216;
  *(_DWORD *)(v7 + 60) = 1065353216;
  *(_DWORD *)(v7 + 68) = 1065353216;
  *(_DWORD *)(v7 + 84) = 1065353216;
  *(_DWORD *)(v7 + 88) = 1065353216;
  *(_DWORD *)(v7 + 92) = 1065353216;
  *(_DWORD *)(v7 + 8) = 1056964608;
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 20) = 0;
  *(float *)(v7 + 24) = v9;
  *(_DWORD *)(v7 + 32) = 1056964608;
  *(_DWORD *)(v7 + 44) = 0;
  *(float *)(v7 + 52) = v10;
  *(_DWORD *)(v7 + 56) = 1056964608;
  *(_DWORD *)(v7 + 64) = 0;
  *(float *)(v7 + 72) = v9;
  *(float *)(v7 + 76) = v10;
  *(_DWORD *)(v7 + 80) = 1056964608;
  Ogre::ShaderEnvData::ShaderEnvData((Ogre::ShaderEnvData *)v15);
  Ogre::SceneRenderer::newContext((int)this, 2, v15, a3, *((_DWORD *)this + 180), v6, nullptr, 5, 2, 0);
  return Ogre::ShaderContextPool::endQueue(*((_DWORD *)this + 143));
}


//======================================================================
// Ogre::BloomEffect::gaussianDistribution(float,float,float)
// address: 0x001907B4   size: 0x6A (106 bytes)
//======================================================================
float __fastcall Ogre::BloomEffect::gaussianDistribution(Ogre::BloomEffect *this, float a2, float a3, float a4)
{
  float v7; // r7

  v7 = 1.0 / j_sqrtf((float)(a4 * 6.2832) * a4);
  return v7
       * j_expf(COERCE_FLOAT(COERCE_INT((float)(a2 * a2) + (float)(a3 * a3)) + 0x80000000) / (float)((float)(a4 + a4) * a4));
}


//======================================================================
// Ogre::BloomEffect::getSampleOffsetWeight(unsigned int,float *,float *,float,float)
// address: 0x00190824   size: 0x8C (140 bytes)
//======================================================================
float __fastcall Ogre::BloomEffect::getSampleOffsetWeight(
        Ogre::BloomEffect *this,
        unsigned int a2,
        float *a3,
        float *a4,
        float a5,
        float a6)
{
  int i; // r4
  float v10; // r0
  int j; // r3
  float *v12; // r2
  float result; // r0
  float v14; // [sp+4h] [bp-10h]
  int v15; // [sp+8h] [bp-Ch]
  float v16; // [sp+Ch] [bp-8h]

  v16 = 1.0 / (float)a2;
  *a4 = a6 * Ogre::BloomEffect::gaussianDistribution(this, 0.0, 0.0, a5);
  *a3 = 0.0;
  for ( i = 1; i != 8; ++i )
  {
    v14 = (float)i;
    v10 = Ogre::BloomEffect::gaussianDistribution(this, (float)i, 0.0, a5);
    v15 = i;
    a4[v15] = a6 * v10;
    a3[v15] = v14 * v16;
  }
  for ( j = 0; j != 7; ++j )
  {
    a4[j + 8] = a4[j + 1];
    v12 = &a3[j];
    result = a3[j + 1];
    *((_DWORD *)v12 + 8) = LODWORD(result) + 0x80000000;
  }
  return result;
}


//======================================================================
// Ogre::BloomEffect::doRender(void)
// address: 0x001908B0   size: 0x5B6 (1462 bytes)
//======================================================================
int __fastcall Ogre::BloomEffect::doRender(Ogre::BloomEffect *this, int a2, int a3)
{
  Ogre::Material *v3; // r4
  void *v5; // r1
  int v6; // r2
  int v7; // r4
  Ogre::Material *v8; // r4
  void *v9; // r1
  int v10; // r2
  int v11; // r4
  Ogre::Material *v12; // r4
  Ogre::Texture *v13; // r2
  Ogre::Material *v14; // r0
  int v15; // r3
  void *v16; // r1
  Ogre::Material *v17; // r4
  int v18; // r2
  void *v19; // r1
  int v20; // r2
  Ogre::Material *v21; // r4
  void *v22; // r1
  Ogre::Material *v23; // r4
  void *v24; // r1
  Ogre::Material *v25; // r4
  int v26; // r2
  void *v27; // r1
  Ogre::Material *v28; // r4
  int v29; // r2
  void *v30; // r1
  int v31; // r2
  void *v32; // r1
  int v33; // r2
  void *v34; // r1
  void *v35; // r1
  int v36; // r2
  void *v37; // r1
  int v38; // r2
  void *v39; // r1
  void *v40; // r1
  Ogre::Material *v41; // r5
  int v42; // r2
  void *v43; // r1
  Ogre::Material *v44; // r5
  int v45; // r2
  void *v46; // r1
  Ogre::Material *v47; // r5
  int v48; // r2
  void *v49; // r1
  Ogre::Material *v50; // r5
  int v51; // r2
  void *v52; // r1
  Ogre::Material *v53; // r5
  int v54; // r2
  void *v55; // r1
  Ogre::Material *v56; // r5
  int v57; // r2
  void *v58; // r1
  int v59; // r2
  Ogre::Material *v60; // r5
  void *v61; // r1
  Ogre::Material *v62; // r5
  int v63; // r2
  Ogre::Material *v64; // r0
  int v65; // r3
  Ogre::Material *v66; // r5
  void *v67; // r1
  Ogre::Material *v68; // r5
  void *v69; // r1
  Ogre::Material *v70; // r5
  int v71; // r2
  int v72; // r5
  Ogre::Material *v73; // r5
  void *v74; // r1
  Ogre::Material *v75; // r5
  void *v76; // r1
  Ogre::Material *v77; // r5
  int v78; // r2
  void *v79; // r1
  Ogre::Material *v80; // r5
  int v81; // r2
  void *v82; // r1
  Ogre::Material *v83; // r5
  int v84; // r2
  void *v85; // r1
  Ogre::Material *v87; // [sp+1Ch] [bp-C0h]
  Ogre::Material *v88; // [sp+1Ch] [bp-C0h]
  Ogre::Material *v89; // [sp+1Ch] [bp-C0h]
  Ogre::Material *v90; // [sp+1Ch] [bp-C0h]
  Ogre::Material *v91; // [sp+24h] [bp-B8h]
  Ogre::Material *v92; // [sp+28h] [bp-B4h]
  Ogre::Material *v93; // [sp+28h] [bp-B4h]
  Ogre::Material *v94; // [sp+28h] [bp-B4h]
  Ogre::FixedString *v95; // [sp+2Ch] [bp-B0h]
  Ogre::FixedString *v96[8]; // [sp+38h] [bp-A4h] BYREF
  float v97[16]; // [sp+58h] [bp-84h] BYREF
  Ogre::FixedString *v98[17]; // [sp+98h] [bp-44h] BYREF

  v3 = *((Ogre::Material **)this + 181);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v98, (Ogre::FixedString *)"g_BaseTexture", a3);
  Ogre::Material::setParamTexture(v3, (const Ogre::FixedString *)v98, *((Ogre::Texture **)this + 160), 0);
  Ogre::FixedString::~FixedString(v98, v5);
  v7 = *((unsigned __int8 *)this + 792);
  if ( *((_BYTE *)this + 792) != 0 )
  {
    v8 = *((Ogre::Material **)this + 181);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v98, (Ogre::FixedString *)"BLUR_TYPE", v6);
    Ogre::Material::setParamMacro(v8, (const Ogre::FixedString *)v98, 1);
    Ogre::FixedString::~FixedString(v98, v9);
    v11 = *((unsigned __int8 *)this + 793);
    if ( *((_BYTE *)this + 793) != 0 )
    {
      v12 = *((Ogre::Material **)this + 181);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v98, (Ogre::FixedString *)"g_BlendTexture", v10);
      v13 = *((Ogre::Texture **)this + 160);
      v14 = v12;
      v15 = 0;
    }
    else
    {
      v87 = *((Ogre::Material **)this + 181);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v98, (Ogre::FixedString *)"g_BlendTexture", v10);
      v14 = v87;
      v13 = *((Ogre::Texture **)this + *((_DWORD *)this + 168) + 164);
      v15 = v11;
    }
    Ogre::Material::setParamTexture(v14, (const Ogre::FixedString *)v98, v13, v15);
  }
  else
  {
    v88 = *((Ogre::Material **)this + 181);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v98, (Ogre::FixedString *)"BLUR_TYPE", (int)v88);
    Ogre::Material::setParamMacro(v88, (const Ogre::FixedString *)v98, v7);
  }
  Ogre::FixedString::~FixedString(v98, v16);
  v17 = *((Ogre::Material **)this + 181);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v98, (Ogre::FixedString *)"BLOOM_PASS", v18);
  Ogre::Material::setParamMacro(v17, (const Ogre::FixedString *)v98, 0);
  Ogre::FixedString::~FixedString(v98, v19);
  Ogre::BloomEffect::doRenderQue(this, *((Ogre::RenderTarget **)this + 163), *((Ogre::Material **)this + 181));
  if ( *((_BYTE *)this + 792) != 0 && (*((double *)this + 102) >= 200.0 || *((_BYTE *)this + 793) != 0) )
  {
    Ogre::BloomEffect::doRenderQue(
      this,
      *((Ogre::RenderTarget **)this + 167 - *((_DWORD *)this + 168)),
      *((Ogre::Material **)this + 181));
    *((_BYTE *)this + 793) = 0;
    *((_DWORD *)this + 168) = *((_DWORD *)this + 168) == 0;
    *((_DWORD *)this + 204) = 0;
    *((_DWORD *)this + 205) = 0;
  }
  v20 = *((unsigned __int8 *)this + 728);
  if ( *((_BYTE *)this + 728) != 0 )
  {
    v21 = *((Ogre::Material **)this + 181);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v98, (Ogre::FixedString *)"BLUR_TYPE", v20);
    Ogre::Material::setParamMacro(v21, (const Ogre::FixedString *)v98, 2);
    Ogre::FixedString::~FixedString(v98, v22);
  }
  v23 = *((Ogre::Material **)this + 181);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v98, (Ogre::FixedString *)"g_BaseTexture", v20);
  Ogre::Material::setParamTexture(v23, (const Ogre::FixedString *)v98, *((Ogre::Texture **)this + 162), 0);
  Ogre::FixedString::~FixedString(v98, v24);
  v25 = *((Ogre::Material **)this + 181);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v98, (Ogre::FixedString *)"g_lum", v26);
  Ogre::Material::setParamValue(v25, (const Ogre::FixedString *)v98, (char *)this + 700);
  Ogre::FixedString::~FixedString(v98, v27);
  v28 = *((Ogre::Material **)this + 181);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v98, (Ogre::FixedString *)"BLOOM_PASS", v29);
  Ogre::Material::setParamMacro(v28, (const Ogre::FixedString *)v98, 1);
  Ogre::FixedString::~FixedString(v98, v30);
  Ogre::BloomEffect::doRenderQue(this, *((Ogre::RenderTarget **)this + 173), *((Ogre::Material **)this + 181));
  (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 170) + 28))(*((_DWORD *)this + 170));
  Ogre::BloomEffect::getSampleOffsetWeight(this, (unsigned int)v96[2], v97, (float *)v98, *((float *)this + 176), 1.0);
  v95 = *((Ogre::FixedString **)this + 181);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"g_avSampleOffsets", v31);
  Ogre::Material::setParamValue(v95, (const Ogre::FixedString *)v96, v97);
  Ogre::FixedString::~FixedString(v96, v32);
  v92 = *((Ogre::Material **)this + 181);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"g_avSampleWeights", v33);
  Ogre::Material::setParamValue(v92, (const Ogre::FixedString *)v96, v98);
  Ogre::FixedString::~FixedString(v96, v34);
  v93 = *((Ogre::Material **)this + 181);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"g_BaseTexture", (int)v93);
  Ogre::Material::setParamTexture(v93, (const Ogre::FixedString *)v96, *((Ogre::Texture **)this + 171), 0);
  Ogre::FixedString::~FixedString(v96, v35);
  v94 = *((Ogre::Material **)this + 181);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"BLOOM_PASS", v36);
  Ogre::Material::setParamMacro(v94, (const Ogre::FixedString *)v96, 2);
  Ogre::FixedString::~FixedString(v96, v37);
  Ogre::BloomEffect::doRenderQue(this, *((Ogre::RenderTarget **)this + 172), *((Ogre::Material **)this + 181));
  Ogre::BloomEffect::getSampleOffsetWeight(this, (unsigned int)v96[3], v97, (float *)v98, *((float *)this + 176), 1.0);
  v91 = *((Ogre::Material **)this + 181);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"g_avSampleOffsets", v38);
  Ogre::Material::setParamValue(v91, (const Ogre::FixedString *)v96, v97);
  Ogre::FixedString::~FixedString(v96, v39);
  v89 = *((Ogre::Material **)this + 181);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"g_avSampleWeights", (int)v89);
  Ogre::Material::setParamValue(v89, (const Ogre::FixedString *)v96, v98);
  Ogre::FixedString::~FixedString(v96, v40);
  v41 = *((Ogre::Material **)this + 181);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"g_BaseTexture", v42);
  Ogre::Material::setParamTexture(v41, (const Ogre::FixedString *)v96, *((Ogre::Texture **)this + 170), 0);
  Ogre::FixedString::~FixedString(v96, v43);
  v44 = *((Ogre::Material **)this + 181);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"BLOOM_PASS", v45);
  Ogre::Material::setParamMacro(v44, (const Ogre::FixedString *)v96, 3);
  Ogre::FixedString::~FixedString(v96, v46);
  Ogre::BloomEffect::doRenderQue(this, *((Ogre::RenderTarget **)this + 173), *((Ogre::Material **)this + 181));
  v47 = *((Ogre::Material **)this + 181);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"g_HighScene", v48);
  Ogre::Material::setParamValue(v47, (const Ogre::FixedString *)v96, (char *)this + 696);
  Ogre::FixedString::~FixedString(v96, v49);
  v50 = *((Ogre::Material **)this + 181);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"g_BaseTexture", v51);
  Ogre::Material::setParamTexture(v50, (const Ogre::FixedString *)v96, *((Ogre::Texture **)this + 162), 0);
  Ogre::FixedString::~FixedString(v96, v52);
  v53 = *((Ogre::Material **)this + 181);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"g_BloomTexture", v54);
  Ogre::Material::setParamTexture(v53, (const Ogre::FixedString *)v96, *((Ogre::Texture **)this + 171), 0);
  Ogre::FixedString::~FixedString(v96, v55);
  v56 = *((Ogre::Material **)this + 181);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"BLOOM_PASS", v57);
  Ogre::Material::setParamMacro(v56, (const Ogre::FixedString *)v96, 4);
  Ogre::FixedString::~FixedString(v96, v58);
  if ( *((_BYTE *)this + 728) != 0 )
  {
    v60 = *((Ogre::Material **)this + 181);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"BLUR_TYPE", 724);
    Ogre::Material::setParamMacro(v60, (const Ogre::FixedString *)v96, 2);
    Ogre::FixedString::~FixedString(v96, v61);
    v62 = *((Ogre::Material **)this + 181);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"gaussRate", v63);
    v64 = v62;
    v65 = 183;
  }
  else if ( *((_BYTE *)this + 753) != 0 )
  {
    v66 = *((Ogre::Material **)this + 181);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"BLUR_TYPE", v59);
    Ogre::Material::setParamMacro(v66, (const Ogre::FixedString *)v96, 3);
    Ogre::FixedString::~FixedString(v96, v67);
    v68 = *((Ogre::Material **)this + 181);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"g_fSampleDist", 724);
    Ogre::Material::setParamValue(v68, (const Ogre::FixedString *)v96, (char *)this + 780);
    Ogre::FixedString::~FixedString(v96, v69);
    v70 = *((Ogre::Material **)this + 181);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"g_fSampleStrength", v71);
    v64 = v70;
    v65 = 197;
  }
  else
  {
    v72 = *((unsigned __int8 *)this + 824);
    if ( *((_BYTE *)this + 824) == 0 )
    {
      v90 = *((Ogre::Material **)this + 181);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"BLUR_TYPE", v59);
      Ogre::Material::setParamMacro(v90, (const Ogre::FixedString *)v96, v72);
      goto LABEL_24;
    }
    v73 = *((Ogre::Material **)this + 181);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"BLUR_TYPE", v59);
    Ogre::Material::setParamMacro(v73, (const Ogre::FixedString *)v96, 4);
    Ogre::FixedString::~FixedString(v96, v74);
    v75 = *((Ogre::Material **)this + 181);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"textureX", 724);
    Ogre::Material::setParamValue(v75, (const Ogre::FixedString *)v96, (char *)this + 864);
    Ogre::FixedString::~FixedString(v96, v76);
    v77 = *((Ogre::Material **)this + 181);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"textureY", v78);
    Ogre::Material::setParamValue(v77, (const Ogre::FixedString *)v96, (char *)this + 868);
    Ogre::FixedString::~FixedString(v96, v79);
    v80 = *((Ogre::Material **)this + 181);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"radiusRate", v81);
    Ogre::Material::setParamValue(v80, (const Ogre::FixedString *)v96, (char *)this + 876);
    Ogre::FixedString::~FixedString(v96, v82);
    v83 = *((Ogre::Material **)this + 181);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v96, (Ogre::FixedString *)"degree", v84);
    v64 = v83;
    v65 = 220;
  }
  Ogre::Material::setParamValue(v64, (const Ogre::FixedString *)v96, (char *)this + 4 * v65);
LABEL_24:
  Ogre::FixedString::~FixedString(v96, v85);
  return Ogre::BloomEffect::doRenderQue(this, *((Ogre::RenderTarget **)this + 169), *((Ogre::Material **)this + 181));
}

