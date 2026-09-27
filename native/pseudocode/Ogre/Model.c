// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Model

//======================================================================
// Ogre::Model::getRTTI(void)const
// address: 0x001888D4   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::Model::getRTTI(Ogre::Model *this)
{
  return &Ogre::Model::m_RTTI;
}


//======================================================================
// Ogre::Model::setCanUseStaticLight(bool)
// address: 0x001888E0   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::Model::setCanUseStaticLight(int this, bool a2)
{
  *(_BYTE *)(this + 452) = a2;
  return this;
}


//======================================================================
// Ogre::Model::update(unsigned int)
// address: 0x00188916   size: 0x32 (50 bytes)
//======================================================================
Ogre::AnimationPlayer *__fastcall Ogre::Model::update(Ogre::Model *this, unsigned int a2)
{
  _BYTE *v2; // r6
  unsigned int v4; // r4
  Ogre::AnimationPlayer *result; // r0

  v2 = (char *)this + 184;
  v4 = *((_BYTE *)this + 184) == 0 ? a2 : 0;
  Ogre::MovableObject::update((int)this, v4);
  result = *((Ogre::AnimationPlayer **)this + 96);
  if ( result != nullptr && *v2 == 0 )
    return (Ogre::AnimationPlayer *)Ogre::AnimationPlayer::update(result, v4);
  return result;
}


//======================================================================
// Ogre::Model::resetUpdate(bool,unsigned int)
// address: 0x00188948   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Ogre::Model::resetUpdate(int this, bool a2, unsigned int a3)
{
  *(_BYTE *)(this + 184) = a2;
  if ( a3 != -1 )
  {
    this = *(_DWORD *)(this + 384);
    if ( this != 0 )
      return Ogre::AnimationPlayer::resetUpdate((Ogre::AnimationPlayer *)this, a3);
  }
  return this;
}


//======================================================================
// Ogre::Model::updateWorldCache(void)
// address: 0x00188966   size: 0x46 (70 bytes)
//======================================================================
int __fastcall Ogre::Model::updateWorldCache(Ogre::Model *this)
{
  Ogre::Model *v1; // r5
  int result; // r0
  _DWORD *v3; // r3
  int v4; // r4
  _DWORD v5[8]; // [sp+4h] [bp-20h] BYREF

  v1 = this;
  Ogre::MovableObject::updateWorldCache(this);
  Ogre::MovableObject::getWorldMatrix(v1);
  result = Ogre::BoxSphereBound::transformBy((Ogre::BoxSphereBound *)v5, (Ogre::Model *)((char *)v1 + 388));
  v3 = (_DWORD *)((char *)v1 + 140);
  *((_DWORD *)v1 + 35) = v5[0];
  v1 = (Ogre::Model *)((char *)v1 + 152);
  v3[1] = v5[1];
  v3[2] = v5[2];
  *(_DWORD *)v1 = v5[3];
  *((_DWORD *)v1 + 1) = v5[4];
  v4 = v5[6];
  *((_DWORD *)v1 + 2) = v5[5];
  v3[6] = v4;
  return result;
}


//======================================================================
// Ogre::Model::getAnchorWorldMatrix(int)
// address: 0x001889AC   size: 0x5C (92 bytes)
//======================================================================
Ogre::Model *__fastcall Ogre::Model::getAnchorWorldMatrix(Ogre::Model *this, Ogre::MovableObject *a2, int a3)
{
  char *v3; // r5
  int v6; // r1
  _DWORD *v7; // r3
  int v8; // r6
  int v9; // r1
  _DWORD *v10; // r7
  int v11; // r5
  float *WorldMatrix; // r0
  char *v13; // r0
  int v15; // [sp+4h] [bp-8h]

  v3 = (char *)a2 + 252;
  v6 = *((_DWORD *)a2 + 64);
  v7 = *(_DWORD **)(v6 + 76);
  v8 = *(_DWORD *)(v6 + 80);
  v9 = 0;
  v15 = (v8 - (int)v7) >> 3;
  while ( v9 != v15 )
  {
    v10 = v7;
    v7 += 2;
    if ( *(v7 - 1) == a3 )
    {
      v11 = *(_DWORD *)(*((_DWORD *)v3 + 2) + 4) + 124 * *v10;
      WorldMatrix = (float *)Ogre::MovableObject::getWorldMatrix(a2);
      Ogre::operator*(this, (float *)(v11 + 56), WorldMatrix);
      return this;
    }
    ++v9;
  }
  v13 = Ogre::MovableObject::getWorldMatrix(a2);
  Ogre::Matrix4::Matrix4((int)this, (const Ogre::Matrix4 *)v13);
  return this;
}


//======================================================================
// Ogre::Model::intersectRay(Ogre::IntersectType,Ogre::Ray const&,float *)
// address: 0x00188BBC   size: 0x122 (290 bytes)
//======================================================================
bool __fastcall Ogre::Model::intersectRay(_DWORD *a1, int a2, _DWORD *a3, float *a4)
{
  char *WorldMatrix; // r0
  float v6; // r5
  int *v7; // r6
  float v8; // r7
  int v9; // r4
  unsigned int i; // r3
  int v11; // r3
  unsigned int v13; // [sp+0h] [bp-7Ch]
  _BOOL4 v15; // [sp+8h] [bp-74h]
  float v18; // [sp+18h] [bp-64h] BYREF
  _BYTE v19[12]; // [sp+1Ch] [bp-60h] BYREF
  float v20; // [sp+28h] [bp-54h] BYREF
  float v21; // [sp+2Ch] [bp-50h]
  float v22; // [sp+30h] [bp-4Ch]
  int v23; // [sp+34h] [bp-48h]
  _BYTE v24[68]; // [sp+38h] [bp-44h] BYREF

  if ( *((_BYTE *)a1 + 180) != 0 )
    (*(void (__fastcall **)(_DWORD *))(*a1 + 68))(a1);
  v15 = Ogre::Ray::intersectBoxSphere((Ogre::Ray *)a3, (float *)a1 + 35);
  if ( !v15 )
    return false;
  if ( a1[65] != 0 )
    return a2 != 1;
  WorldMatrix = Ogre::MovableObject::getWorldMatrix((Ogre::MovableObject *)a1);
  Ogre::Matrix4::Matrix4((int)v24, (const Ogre::Matrix4 *)WorldMatrix);
  Ogre::Matrix4::quickInverse((Ogre::Matrix4 *)v24);
  v23 = a3[6];
  Ogre::Matrix4::transformCoord((Ogre::Matrix4 *)v24, (Ogre::Vector3 *)v19, (const Ogre::Vector3 *)a3);
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v24, (Ogre::Vector3 *)&v20, (const Ogre::Vector3 *)(a3 + 3));
  v6 = Ogre::Vector3::length((Ogre::Vector3 *)&v20);
  v20 = v20 / v6;
  v21 = v21 / v6;
  v7 = (int *)a1[66];
  v8 = 3.4028e38;
  v22 = v22 / v6;
  while ( v7 != (int *)a1[67] )
  {
    v9 = *v7;
    if ( *(_BYTE *)(*v7 + 4) != 0 )
    {
      for ( i = 0; ; i = v13 + 1 )
      {
        v13 = i;
        v11 = *(_DWORD *)(v9 + 8);
        if ( v13 >= (*(_DWORD *)(v9 + 12) - v11) >> 2 )
          break;
        if ( Ogre::SubMeshInstance::intersectRay(*(Ogre::SubMeshInstance **)(4 * v13 + v11), a2, (Ogre::Ray *)v19, &v18) != 0
          && v18 < v8 )
        {
          v8 = v18;
        }
      }
    }
    ++v7;
  }
  if ( v8 == 3.4028e38 )
    return false;
  if ( a4 != nullptr )
    *a4 = v8 / v6;
  return v15;
}


//======================================================================
// Ogre::Model::setOverlayColor(Ogre::ColourValue *)
// address: 0x00188CE4   size: 0xF0 (240 bytes)
//======================================================================
void __fastcall Ogre::Model::setOverlayColor(Ogre::Model *this, Ogre::ColourValue *a2)
{
  int v2; // r3
  unsigned int v3; // r7
  Ogre::MeshInstance *v4; // r6
  _DWORD *SubMesh; // r4
  Ogre::Material *v6; // r5
  Ogre::Material *v7; // r5
  int v8; // r2
  __int64 ParamMacro; // r0
  int v10; // r2
  void *v11; // r1
  int v12; // r2
  void *v13; // r1
  unsigned int i; // [sp+8h] [bp-1Ch]
  int v15; // [sp+Ch] [bp-18h]
  Ogre::FixedString *v18[2]; // [sp+1Ch] [bp-8h] BYREF

  for ( i = 0; ; ++i )
  {
    v2 = *((_DWORD *)this + 66);
    if ( i >= (*((_DWORD *)this + 67) - v2) >> 2 )
      break;
    v3 = 0;
    v4 = *(Ogre::MeshInstance **)(4 * i + v2);
    while ( v3 < (*((_DWORD *)v4 + 3) - *((_DWORD *)v4 + 2)) >> 2 )
    {
      SubMesh = (_DWORD *)Ogre::MeshInstance::getSubMesh(v4, v3);
      if ( SubMesh[1] == 0 )
      {
        v6 = (Ogre::Material *)operator new(0x2Cu);
        Ogre::Material::Material(v6, *(const Ogre::Material **)(*SubMesh + 36));
        SubMesh[1] = v6;
      }
      v7 = (Ogre::Material *)SubMesh[1];
      if ( Ogre::operator==((const char **)(*((_DWORD *)v7 + 6) + 12), "stdmtl") )
      {
        Ogre::FixedString::FixedString((Ogre::FixedString *)v18, (Ogre::FixedString *)"OVERLAY_MODE", v8);
        ParamMacro = Ogre::Material::GetParamMacro(v7, v18);
        v15 = ParamMacro;
        Ogre::FixedString::~FixedString(v18, (void *)HIDWORD(ParamMacro));
        Ogre::FixedString::FixedString((Ogre::FixedString *)v18, (Ogre::FixedString *)"OVERLAY_MODE", v10);
        if ( a2 != nullptr )
        {
          Ogre::Material::setParamMacro(v7, (const Ogre::FixedString *)v18, v15 | 1);
          Ogre::FixedString::~FixedString(v18, v11);
          Ogre::FixedString::FixedString((Ogre::FixedString *)v18, (Ogre::FixedString *)"g_OverlayColor", v12);
          Ogre::Material::setParamValue(v7, (const Ogre::FixedString *)v18, a2);
        }
        else
        {
          Ogre::Material::setParamMacro(v7, (const Ogre::FixedString *)v18, v15 & 0xFFFFFFFE);
        }
        Ogre::FixedString::~FixedString(v18, v13);
      }
      ++v3;
    }
  }
}


//======================================================================
// Ogre::Model::setOverlayMask(Ogre::Texture *,Ogre::ColourValue *)
// address: 0x00188DE0   size: 0x10E (270 bytes)
//======================================================================
void __fastcall Ogre::Model::setOverlayMask(Ogre::Model *this, Ogre::Texture *a2, Ogre::ColourValue *a3)
{
  int v3; // r3
  unsigned int v4; // r7
  Ogre::MeshInstance *v5; // r6
  _DWORD *SubMesh; // r4
  Ogre::Material *v7; // r5
  Ogre::Material *v8; // r5
  int v9; // r2
  __int64 ParamMacro; // r0
  int v11; // r2
  void *v12; // r1
  int v13; // r2
  void *v14; // r1
  int v15; // r2
  void *v16; // r1
  unsigned int i; // [sp+4h] [bp-20h]
  int v18; // [sp+8h] [bp-1Ch]
  Ogre::FixedString *v22[2]; // [sp+1Ch] [bp-8h] BYREF

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 66);
    if ( i >= (*((_DWORD *)this + 67) - v3) >> 2 )
      break;
    v4 = 0;
    v5 = *(Ogre::MeshInstance **)(4 * i + v3);
    while ( v4 < (*((_DWORD *)v5 + 3) - *((_DWORD *)v5 + 2)) >> 2 )
    {
      SubMesh = (_DWORD *)Ogre::MeshInstance::getSubMesh(v5, v4);
      if ( SubMesh[1] == 0 )
      {
        v7 = (Ogre::Material *)operator new(0x2Cu);
        Ogre::Material::Material(v7, *(const Ogre::Material **)(*SubMesh + 36));
        SubMesh[1] = v7;
      }
      v8 = (Ogre::Material *)SubMesh[1];
      if ( Ogre::operator==((const char **)(*((_DWORD *)v8 + 6) + 12), "stdmtl") )
      {
        Ogre::FixedString::FixedString((Ogre::FixedString *)v22, (Ogre::FixedString *)"OVERLAY_MODE", v9);
        ParamMacro = Ogre::Material::GetParamMacro(v8, v22);
        v18 = ParamMacro;
        Ogre::FixedString::~FixedString(v22, (void *)HIDWORD(ParamMacro));
        Ogre::FixedString::FixedString((Ogre::FixedString *)v22, (Ogre::FixedString *)"OVERLAY_MODE", v11);
        if ( a2 != nullptr )
        {
          Ogre::Material::setParamMacro(v8, (const Ogre::FixedString *)v22, v18 | 2);
          Ogre::FixedString::~FixedString(v22, v12);
          Ogre::FixedString::FixedString((Ogre::FixedString *)v22, (Ogre::FixedString *)"g_OverlayTex", v13);
          Ogre::Material::setParamTexture(v8, (const Ogre::FixedString *)v22, a2, 0);
          Ogre::FixedString::~FixedString(v22, v14);
          Ogre::FixedString::FixedString((Ogre::FixedString *)v22, (Ogre::FixedString *)"g_MaskColor", v15);
          Ogre::Material::setParamValue(v8, (const Ogre::FixedString *)v22, a3);
        }
        else
        {
          Ogre::Material::setParamMacro(v8, (const Ogre::FixedString *)v22, v18 & 0xFFFFFFFD);
        }
        Ogre::FixedString::~FixedString(v22, v16);
      }
      ++v4;
    }
  }
}


//======================================================================
// Ogre::Model::getLocalBounds(Ogre::BoxSphereBound &)
// address: 0x001895F8   size: 0x12 (18 bytes)
//======================================================================
float __fastcall Ogre::Model::getLocalBounds(Ogre::Model *this, Ogre::BoxSphereBound *a2)
{
  return Ogre::BoxSphereBound::fromBoxBound(a2, (const Ogre::BoxBound *)(*((_DWORD *)this + 64) + 48));
}


//======================================================================
// Ogre::Model::prepareContextForMesh(Ogre::ShaderContext *,Ogre::ShaderEnvData const&,Ogre::MeshInstance *,Ogre::SubMeshInstance *,Ogre::Material *)
// address: 0x0018960A   size: 0x68 (104 bytes)
//======================================================================
int __fastcall Ogre::Model::prepareContextForMesh(
        Ogre::MovableObject **this,
        Ogre::ShaderContext *a2,
        const Ogre::ShaderEnvData *a3,
        Ogre::MeshInstance *a4,
        Ogre::SubMeshInstance *a5,
        Ogre::Material *a6)
{
  float v9[2]; // [sp+Ch] [bp-8h] BYREF

  *((_DWORD *)a2 + 13) = *(_DWORD *)a3;
  *((_DWORD *)a2 + 14) = *((_DWORD *)a3 + 1);
  v9[0] = Ogre::MovableObject::getTransparent(this);
  if ( v9[0] < 1.0 )
  {
    *((_DWORD *)a2 + 6) = *((_DWORD *)a2 + 6) & 0xFFFFFFFE | 1;
    *((_BYTE *)a2 + 54) |= 0x80u;
    Ogre::ShaderContext::addValueParam((int)a2, 36, v9, 0, 1);
  }
  Ogre::MeshInstance::prepareContext();
  return Ogre::SubMeshInstance::prepareContext(a5, a2, a6, (Ogre::Model *)this);
}


//======================================================================
// Ogre::Model::renderStaticMesh(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&,Ogre::MeshInstance *,Ogre::Material *)
// address: 0x00189674   size: 0x15A (346 bytes)
//======================================================================
int __fastcall Ogre::Model::renderStaticMesh(
        Ogre::Model *this,
        Ogre::SceneRenderer *a2,
        const Ogre::ShaderEnvData *a3,
        Ogre::MeshInstance *a4,
        Ogre::Material *a5)
{
  float *WorldMatrix; // r0
  unsigned int i; // r7
  int result; // r0
  int v10; // r5
  int v11; // r1
  int v12; // r7
  char *v13; // r0
  char *v14; // r0
  char *v15; // r0
  const void *v16; // r0
  Ogre::RenderableObject *SubMesh; // [sp+10h] [bp-C4h]
  unsigned int v19; // [sp+18h] [bp-BCh]
  _BYTE v21[48]; // [sp+20h] [bp-B4h] BYREF
  _BYTE v22[56]; // [sp+50h] [bp-84h] BYREF
  float v23; // [sp+88h] [bp-4Ch]
  _DWORD v24[17]; // [sp+90h] [bp-44h] BYREF

  WorldMatrix = (float *)Ogre::MovableObject::getWorldMatrix(this);
  Ogre::operator*((Ogre::Matrix4 *)v22, WorldMatrix, (float *)a3 + 239);
  for ( i = 0; ; i = v19 + 1 )
  {
    v19 = i;
    result = *((_DWORD *)a4 + 3);
    if ( i >= (result - *((_DWORD *)a4 + 2)) >> 2 )
      break;
    SubMesh = (Ogre::RenderableObject *)Ogre::MeshInstance::getSubMesh(a4, i);
    v10 = Ogre::SceneRenderer::newContext((int)a2);
    *(float *)(v10 + 20) = v23 - (float)((float)*((int *)this + 112) * 0.1);
    v11 = *((_DWORD *)this + 105);
    v12 = *((_DWORD *)this + 106);
    *(_DWORD *)(v10 + 72) = *((_DWORD *)this + 104);
    *(_DWORD *)(v10 + 76) = v11;
    *(_DWORD *)(v10 + 80) = v12;
    *(_DWORD *)(v10 + 84) = *((_DWORD *)this + 107);
    *(_DWORD *)(v10 + 88) = *((_DWORD *)this + 108);
    *(_DWORD *)(v10 + 92) = *((_DWORD *)this + 109);
    *(_DWORD *)(v10 + 96) = *((_DWORD *)this + 110);
    *(_DWORD *)(v10 + 100) = *((_DWORD *)this + 111);
    Ogre::Model::prepareContextForMesh((Ogre::MovableObject **)this, (Ogre::ShaderContext *)v10, a3, a4, SubMesh, a5);
    if ( *(int *)(*(_DWORD *)a4 + 60) >= 0 )
    {
      if ( *((_DWORD *)this + 65) != 0 )
      {
        v15 = Ogre::MovableObject::getWorldMatrix(this);
        Ogre::ShaderContext::setInstanceEnvData((Ogre::ShaderContext *)v10, a2, nullptr, a3, (const Ogre::Matrix4 *)v15);
        *(_BYTE *)(v10 + 54) = *(_BYTE *)(v10 + 54) & 0xE3 | 0x14;
        Ogre::Matrix4::Matrix4(
          (int)v24,
          (const Ogre::Matrix4 *)(*(_DWORD *)(*((_DWORD *)this + 65) + 4) + 124 * *(_DWORD *)(*(_DWORD *)a4 + 60) + 56));
        Ogre::Matrix4::transpose(v24);
        Ogre::Matrix4::operator float *();
        j_memcpy(v21, v16, sizeof(v21));
        Ogre::ShaderContext::addValueParam(v10, 12, v21, 3, 3);
      }
      else
      {
        v14 = Ogre::MovableObject::getWorldMatrix(this);
        Ogre::ShaderContext::setInstanceEnvData((Ogre::ShaderContext *)v10, a2, nullptr, a3, (const Ogre::Matrix4 *)v14);
      }
    }
    else
    {
      v13 = Ogre::MovableObject::getWorldMatrix(this);
      Ogre::ShaderContext::setInstanceEnvData((Ogre::ShaderContext *)v10, a2, this, a3, (const Ogre::Matrix4 *)v13);
    }
    ++*((_DWORD *)this + 112);
  }
  return result;
}


//======================================================================
// Ogre::Model::renderSkinMesh(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&,Ogre::MeshInstance *,Ogre::Material *)
// address: 0x001897D4   size: 0x1A0 (416 bytes)
//======================================================================
int __fastcall Ogre::Model::renderSkinMesh(
        Ogre::Model *this,
        Ogre::SceneRenderer *a2,
        const Ogre::ShaderEnvData *a3,
        Ogre::MeshInstance *a4,
        Ogre::Material *a5)
{
  float *WorldMatrix; // r0
  unsigned int i; // r6
  int result; // r0
  unsigned int v9; // r6
  int v10; // r3
  _DWORD *v11; // r5
  int v12; // r4
  int v13; // r1
  int v14; // r6
  int v15; // r6
  int v16; // r3
  const void *v17; // r0
  unsigned int v18; // [sp+18h] [bp-E04h]
  unsigned int v19; // [sp+20h] [bp-DFCh]
  Ogre::SubMeshInstance *SubMesh; // [sp+28h] [bp-DF4h]
  int v24; // [sp+34h] [bp-DE8h]
  _BYTE v25[56]; // [sp+38h] [bp-DE4h] BYREF
  float v26; // [sp+70h] [bp-DACh]
  float v27[16]; // [sp+78h] [bp-DA4h] BYREF
  _BYTE v28[64]; // [sp+B8h] [bp-D64h] BYREF
  _QWORD v29[420]; // [sp+F8h] [bp-D24h] BYREF

  WorldMatrix = (float *)Ogre::MovableObject::getWorldMatrix(this);
  Ogre::operator*((Ogre::Matrix4 *)v25, WorldMatrix, (float *)a3 + 239);
  for ( i = 0; ; i = v19 + 1 )
  {
    v19 = i;
    result = *((_DWORD *)a4 + 3);
    if ( i >= (result - *((_DWORD *)a4 + 2)) >> 2 )
      break;
    v9 = 0;
    SubMesh = (Ogre::SubMeshInstance *)Ogre::MeshInstance::getSubMesh(a4, v19);
    while ( 1 )
    {
      v18 = v9;
      v10 = *(_DWORD *)(*(_DWORD *)SubMesh + 40);
      if ( v9 >= (*(_DWORD *)(*(_DWORD *)SubMesh + 44) - v10) >> 2 )
        break;
      v11 = *(_DWORD **)(4 * v9 + v10);
      v12 = Ogre::SceneRenderer::newContext((int)a2);
      *(float *)(v12 + 20) = v26 - (float)((float)*((int *)this + 112) * 0.1);
      v13 = *((_DWORD *)this + 105);
      v14 = *((_DWORD *)this + 106);
      *(_DWORD *)(v12 + 72) = *((_DWORD *)this + 104);
      *(_DWORD *)(v12 + 76) = v13;
      *(_DWORD *)(v12 + 80) = v14;
      *(_DWORD *)(v12 + 84) = *((_DWORD *)this + 107);
      *(_DWORD *)(v12 + 88) = *((_DWORD *)this + 108);
      *(_DWORD *)(v12 + 92) = *((_DWORD *)this + 109);
      *(_DWORD *)(v12 + 96) = *((_DWORD *)this + 110);
      *(_DWORD *)(v12 + 100) = *((_DWORD *)this + 111);
      v15 = 0;
      Ogre::Model::prepareContextForMesh((Ogre::MovableObject **)this, (Ogre::ShaderContext *)v12, a3, a4, SubMesh, a5);
      Ogre::ShaderContext::setInstanceEnvData((Ogre::ShaderContext *)v12, a2, this, a3, nullptr);
      v24 = (v11[9] - v11[8]) >> 1;
      Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v27);
      while ( v15 != v24 )
      {
        Ogre::Matrix4::operator=(
          v27,
          (const void *)(*(_DWORD *)(*((_DWORD *)this + 65) + 4) + 124 * *(unsigned __int16 *)(2 * v15 + v11[8]) + 56));
        v16 = v11[11];
        if ( (v11[12] - v16) >> 6 != 0 )
        {
          Ogre::operator*((Ogre::Matrix4 *)v28, (float *)(v16 + (v15 << 6)), v27);
          Ogre::Matrix4::operator=(v27, v28);
        }
        Ogre::Matrix4::transpose(v27);
        Ogre::Matrix4::operator float *();
        j_memcpy(&v29[6 * v15++], v17, 0x30u);
      }
      Ogre::ShaderContext::addValueParam(v12, 12, v29, 3, 3 * v15);
      *(_DWORD *)(v12 + 44) = v11[4];
      *(_DWORD *)(v12 + 48) = v11[5];
      *(_DWORD *)(v12 + 36) = v11[6];
      *(_DWORD *)(v12 + 40) = Ogre::nVertex2nPrimitive(*(_DWORD *)(*(_DWORD *)SubMesh + 16), v11[7]);
      v9 = v18 + 1;
    }
    ++*((_DWORD *)this + 112);
  }
  return result;
}


//======================================================================
// Ogre::Model::renderMesh(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&,Ogre::MeshInstance *,Ogre::Material *)
// address: 0x00189980   size: 0x1C (28 bytes)
//======================================================================
Ogre::Material *__fastcall Ogre::Model::renderMesh(
        Ogre::Model *this,
        Ogre::SceneRenderer *a2,
        const Ogre::ShaderEnvData *a3,
        Ogre::MeshInstance *a4,
        Ogre::Material *a5)
{
  Ogre::Material *v6; // [sp+0h] [bp-Ch]

  if ( *(_BYTE *)(*(_DWORD *)a4 + 64) != 0 )
    Ogre::Model::renderSkinMesh(this, a2, a3, a4, a5);
  else
    Ogre::Model::renderStaticMesh(this, a2, a3, a4, a5);
  return v6;
}


//======================================================================
// Ogre::Model::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&,Ogre::Material *)
// address: 0x0018999C   size: 0x3E (62 bytes)
//======================================================================
Ogre::Material *__fastcall Ogre::Model::render(
        Ogre::Material *this,
        Ogre::SceneRenderer *a2,
        const Ogre::ShaderEnvData *a3,
        Ogre::Material *a4)
{
  Ogre::MeshInstance ***v5; // r6
  Ogre::MeshInstance **v6; // r4
  Ogre::Model *v7; // r5

  *((_DWORD *)this + 112) = 0;
  v5 = (Ogre::MeshInstance ***)((char *)this + 252);
  v6 = *((Ogre::MeshInstance ***)this + 66);
  v7 = this;
  while ( v6 != v5[4] )
  {
    if ( *((_BYTE *)*v6 + 4) != 0 )
      this = Ogre::Model::renderMesh(v7, a2, a3, *v6, a4);
    ++v6;
  }
  return this;
}


//======================================================================
// Ogre::Model::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x001899DA   size: 0xA (10 bytes)
//======================================================================
Ogre::Material *__fastcall Ogre::Model::render(
        Ogre::Model *this,
        Ogre::SceneRenderer *a2,
        const Ogre::ShaderEnvData *a3)
{
  return Ogre::Model::render(this, a2, a3, nullptr);
}


//======================================================================
// Ogre::Model::findMesh(Ogre::FixedString const&)
// address: 0x001899E4   size: 0x28 (40 bytes)
//======================================================================
Ogre::MeshInstance *__fastcall Ogre::Model::findMesh(Ogre::Model *this, const Ogre::FixedString *a2)
{
  Ogre::MeshInstance ***v2; // r6
  Ogre::MeshInstance **i; // r4
  Ogre::MeshInstance *v5; // r5

  v2 = (Ogre::MeshInstance ***)((char *)this + 252);
  for ( i = *((Ogre::MeshInstance ***)this + 66); i != v2[4]; ++i )
  {
    v5 = *i;
    if ( *(_DWORD *)Ogre::MeshInstance::getName(v5) == *(_DWORD *)a2 )
      return v5;
  }
  return nullptr;
}


//======================================================================
// Ogre::Model::applyAnimation(Ogre::AnimPlayTrack **,unsigned int)
// address: 0x00189A0C   size: 0xC4 (196 bytes)
//======================================================================
float __fastcall Ogre::Model::applyAnimation(Ogre::Model *this, Ogre::AnimPlayTrack **a2, unsigned int a3)
{
  Ogre::AnimPlayTrack **v3; // r4
  float result; // r0
  unsigned int v5; // r6
  _DWORD **MtlParamTrack; // r5
  Ogre::MeshInstance *Mesh; // r0
  Ogre::Material **SubMeshByMaterial; // r7
  int i; // [sp+4h] [bp-420h]
  Ogre::AnimationData *v10; // [sp+8h] [bp-41Ch]
  _BYTE v13[992]; // [sp+1Ch] [bp-408h] BYREF

  v3 = a2;
  result = *((float *)this + 65);
  if ( result != 0.0 )
    result = Ogre::SkeletonInstance::applyAnimation(result, a2, a3);
  for ( i = 0; i != a3; ++i )
  {
    result = COERCE_FLOAT((*(int (__fastcall **)(_DWORD))(**((_DWORD **)*v3 + 1) + 28))(*((_DWORD *)*v3 + 1)));
    if ( LODWORD(result) == 3 )
    {
      v5 = 0;
      v10 = *((Ogre::AnimationData **)*v3 + 1);
      while ( 1 )
      {
        result = COERCE_FLOAT(Ogre::AnimationData::getNumMtlParamTrack(v10));
        if ( v5 >= LODWORD(result) )
          break;
        MtlParamTrack = (_DWORD **)Ogre::AnimationData::getMtlParamTrack(v10, v5);
        Mesh = Ogre::Model::findMesh(this, (const Ogre::FixedString *)(MtlParamTrack + 4));
        SubMeshByMaterial = (Ogre::Material **)Ogre::MeshInstance::findSubMeshByMaterial(
                                                 Mesh,
                                                 (const Ogre::FixedString *)(MtlParamTrack + 5));
        Ogre::SubMeshInstance::makeInstance((Ogre::VertexData *)SubMeshByMaterial, 1);
        ++v5;
        (*(void (__fastcall **)(_DWORD *, _DWORD, _DWORD))(*MtlParamTrack[8] + 32))(
          MtlParamTrack[8],
          *((_DWORD *)*v3 + 2),
          *((_DWORD *)*v3 + 6));
        Ogre::Material::setParamValue(SubMeshByMaterial[1], (const Ogre::FixedString *)(MtlParamTrack + 6), v13);
      }
    }
    ++v3;
  }
  return result;
}


//======================================================================
// Ogre::Model::getBindPoint(unsigned int)
// address: 0x00189ADC   size: 0x26 (38 bytes)
//======================================================================
int __fastcall Ogre::Model::getBindPoint(Ogre::Model *this, unsigned int a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r4
  int v5; // r3
  int v6; // r4
  int result; // r0
  int v8; // r5

  v2 = *((_DWORD *)this + 64);
  v3 = *(_DWORD *)(v2 + 76);
  v4 = *(_DWORD *)(v2 + 80);
  v5 = 0;
  v6 = (v4 - v3) >> 3;
  while ( v5 != v6 )
  {
    result = v3;
    v8 = *(_DWORD *)(v3 + 4);
    v3 += 8;
    if ( v8 == a2 )
      return result;
    ++v5;
  }
  return 0;
}


//======================================================================
// Ogre::Model::getNumSkin(void)
// address: 0x00189B02   size: 0x14 (20 bytes)
//======================================================================
int __fastcall Ogre::Model::getNumSkin(Ogre::Model *this)
{
  return (*((_DWORD *)this + 67) - *((_DWORD *)this + 66)) >> 2;
}


//======================================================================
// Ogre::Model::getIthSkin(unsigned int)
// address: 0x00189B16   size: 0x20 (32 bytes)
//======================================================================
int __fastcall Ogre::Model::getIthSkin(Ogre::Model *this, unsigned int a2)
{
  int v2; // r3

  v2 = *((_DWORD *)this + 66);
  if ( a2 >= (*((_DWORD *)this + 67) - v2) >> 2 )
    return 0;
  else
    return *(_DWORD *)(4 * a2 + v2);
}


//======================================================================
// Ogre::Model::showSkins(bool)
// address: 0x00189B36   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Ogre::Model::showSkins(int this, bool a2)
{
  unsigned int i; // r3
  int v3; // r2
  int v4; // r2

  for ( i = 0; ; ++i )
  {
    v3 = *(_DWORD *)(this + 264);
    if ( i >= (*(_DWORD *)(this + 268) - v3) >> 2 )
      break;
    v4 = *(_DWORD *)(4 * i + v3);
    *(_BYTE *)(v4 + 4) = a2;
  }
  return this;
}


//======================================================================
// Ogre::Model::AddAnimation(Ogre::Resource *)
// address: 0x00189B58   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::Model::AddAnimation(Ogre::ModelData **this, Ogre::Resource *a2)
{
  return Ogre::ModelData::addAnimation(*(this + 64), a2);
}


//======================================================================
// Ogre::Model::AddAnimation(Ogre::FixedString &)
// address: 0x00189B64   size: 0x26 (38 bytes)
//======================================================================
Ogre::Resource *__fastcall Ogre::Model::AddAnimation(Ogre::ModelData **this, Ogre::FixedString **a2)
{
  Ogre::Resource *result; // r0
  Ogre::Resource *v4; // r4

  result = (Ogre::Resource *)Ogre::ResourceManager::blockLoad(
                               (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton,
                               a2,
                               0);
  v4 = result;
  if ( result != nullptr )
  {
    Ogre::Model::AddAnimation(this, result);
    return (Ogre::Resource *)Ogre::BaseObject::release(v4);
  }
  return result;
}


//======================================================================
// Ogre::Model::showSkin(Ogre::FixedString const&,bool)
// address: 0x00189B90   size: 0x10 (16 bytes)
//======================================================================
Ogre::MeshInstance *__fastcall Ogre::Model::showSkin(Ogre::Model *this, const Ogre::FixedString *a2, bool a3)
{
  Ogre::MeshInstance *result; // r0

  result = Ogre::Model::findMesh(this, a2);
  if ( result != nullptr )
    *((_BYTE *)result + 4) = a3;
  return result;
}


//======================================================================
// Ogre::Model::setSkinTexture(Ogre::FixedString const&,char const*)
// address: 0x00189BA0   size: 0x96 (150 bytes)
//======================================================================
void __fastcall Ogre::Model::setSkinTexture(Ogre::Model *this, const Ogre::FixedString *a2, Ogre::FixedString *a3)
{
  int v4; // r2
  Ogre::MeshInstance *Mesh; // r5
  Ogre::ResourceManager *v6; // r7
  void *v7; // r1
  unsigned int i; // r7
  int v9; // r2
  _DWORD *SubMesh; // r6
  Ogre::Material *v11; // r6
  void *v12; // r1
  Ogre::Material *v13; // [sp+0h] [bp-14h]
  Ogre::BaseObject *v14; // [sp+4h] [bp-10h]
  Ogre::FixedString *v15[2]; // [sp+Ch] [bp-8h] BYREF

  Mesh = Ogre::Model::findMesh(this, a2);
  if ( Mesh != nullptr )
  {
    v6 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
    Ogre::FixedString::FixedString((Ogre::FixedString *)v15, a3, v4);
    v14 = (Ogre::BaseObject *)Ogre::ResourceManager::blockLoad(v6, v15, 0);
    Ogre::FixedString::~FixedString(v15, v7);
    for ( i = 0; i < (*((_DWORD *)Mesh + 3) - *((_DWORD *)Mesh + 2)) >> 2; ++i )
    {
      SubMesh = (_DWORD *)Ogre::MeshInstance::getSubMesh(Mesh, i);
      if ( SubMesh[1] == 0 )
      {
        v13 = (Ogre::Material *)operator new(0x2Cu);
        Ogre::Material::Material(v13, *(const Ogre::Material **)(*SubMesh + 36));
        v9 = (int)v13;
        SubMesh[1] = v13;
      }
      v11 = (Ogre::Material *)SubMesh[1];
      Ogre::FixedString::FixedString((Ogre::FixedString *)v15, (Ogre::FixedString *)"g_DiffuseTex", v9);
      Ogre::Material::setParamTexture(v11, (const Ogre::FixedString *)v15, v14, 0);
      Ogre::FixedString::~FixedString(v15, v12);
    }
    if ( v14 != nullptr )
      Ogre::BaseObject::release(v14);
  }
}


//======================================================================
// Ogre::Model::setTexture(Ogre::FixedString const&,Ogre::Texture *)
// address: 0x00189C40   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Ogre::Model::setTexture(int this, const Ogre::FixedString *a2, Ogre::Texture *a3)
{
  int v3; // r5
  unsigned int i; // r4
  int v7; // r3

  v3 = this;
  for ( i = 0; ; ++i )
  {
    v7 = *(_DWORD *)(v3 + 264);
    if ( i >= (*(_DWORD *)(v3 + 268) - v7) >> 2 )
      break;
    this = Ogre::MeshInstance::setTexture((Ogre::MeshInstance *)*(_DWORD *)(4 * i + v7), a2, a3);
  }
  return this;
}


//======================================================================
// Ogre::Model::resetTexture(Ogre::FixedString const&)
// address: 0x00189C74   size: 0x32 (50 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::Model::resetTexture(Ogre::Model *this, Ogre::FixedString **a2)
{
  Ogre::Texture *v3; // r5
  int v4; // r2
  void *v5; // r1
  Ogre::FixedString *v6; // [sp+4h] [bp-4h] BYREF

  v3 = (Ogre::Texture *)Ogre::ResourceManager::blockLoad(
                          (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton,
                          a2,
                          0);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v6, (Ogre::FixedString *)"g_DiffuseTex", v4);
  Ogre::Model::setTexture((int)this, (const Ogre::FixedString *)&v6, v3);
  Ogre::FixedString::~FixedString(&v6, v5);
}


//======================================================================
// Ogre::Model::getSeqDuration(int)
// address: 0x00189CB0   size: 0x40 (64 bytes)
//======================================================================
int __fastcall Ogre::Model::getSeqDuration(Ogre::Model *this, int a2)
{
  unsigned int i; // r4
  int v5; // r2
  int v6; // r3
  Ogre::BaseAnimationData *v7; // r5
  signed int SequenceIndex; // r1
  unsigned int Sequence; // r0

  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)this + 64);
    v6 = *(_DWORD *)(v5 + 32);
    if ( i >= (*(_DWORD *)(v5 + 36) - v6) >> 2 )
      break;
    v7 = *(Ogre::BaseAnimationData **)(4 * i + v6);
    SequenceIndex = Ogre::BaseAnimationData::getSequenceIndex(v7, a2);
    if ( SequenceIndex >= 0 )
    {
      Sequence = Ogre::BaseAnimationData::getSequence(v7, SequenceIndex);
      return *(_DWORD *)(Sequence + 8) - *(_DWORD *)(Sequence + 4);
    }
  }
  return 0;
}


//======================================================================
// Ogre::Model::playAnim(int,float,float)
// address: 0x00189CF0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall Ogre::Model::playAnim(Ogre::Model *this, int a2, float a3, float a4)
{
  unsigned int i; // r4
  int v7; // r2
  int v8; // r3
  Ogre::BaseAnimationData *v9; // r7

  for ( i = 0; ; ++i )
  {
    v7 = *((_DWORD *)this + 64);
    v8 = *(_DWORD *)(v7 + 32);
    if ( i >= (*(_DWORD *)(v7 + 36) - v8) >> 2 )
      break;
    v9 = *(Ogre::BaseAnimationData **)(4 * i + v8);
    if ( Ogre::BaseAnimationData::hasSequence(v9, a2) )
    {
      Ogre::AnimationPlayer::play(*((Ogre::AnimationPlayer **)this + 96), a2, v9, a3, a4);
      return 1;
    }
  }
  return 0;
}


//======================================================================
// Ogre::Model::stopAnim(int)
// address: 0x00189D42   size: 0x1E (30 bytes)
//======================================================================
Ogre::AnimationPlayer *__fastcall Ogre::Model::stopAnim(Ogre::Model *this, int a2)
{
  Ogre::AnimationPlayer *result; // r0

  result = *((Ogre::AnimationPlayer **)this + 96);
  if ( result != nullptr )
  {
    result = (Ogre::AnimationPlayer *)Ogre::AnimationPlayer::findPlayTrack(result, a2);
    if ( result != nullptr )
      return (Ogre::AnimationPlayer *)Ogre::AnimationPlayer::stop(*((Ogre::AnimationPlayer **)this + 96), result);
  }
  return result;
}


//======================================================================
// Ogre::Model::stopAnim(void)
// address: 0x00189D60   size: 0x12 (18 bytes)
//======================================================================
Ogre::AnimationPlayer *__fastcall Ogre::Model::stopAnim(Ogre::Model *this)
{
  Ogre::AnimationPlayer *result; // r0

  result = *((Ogre::AnimationPlayer **)this + 96);
  if ( result != nullptr )
    return (Ogre::AnimationPlayer *)Ogre::AnimationPlayer::stopAll(result);
  return result;
}


//======================================================================
// Ogre::Model::hasAnim(int)
// address: 0x00189D72   size: 0x34 (52 bytes)
//======================================================================
int __fastcall Ogre::Model::hasAnim(Ogre::Model *this, int a2)
{
  unsigned int i; // r4
  int v5; // r2
  int v6; // r3

  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)this + 64);
    v6 = *(_DWORD *)(v5 + 32);
    if ( i >= (*(_DWORD *)(v5 + 36) - v6) >> 2 )
      return 0;
    if ( Ogre::BaseAnimationData::hasSequence(*(Ogre::BaseAnimationData **)(4 * i + v6), a2) )
      break;
  }
  return 1;
}


//======================================================================
// Ogre::Model::hasAnimPlaying(int)
// address: 0x00189DA6   size: 0x16 (22 bytes)
//======================================================================
Ogre::AnimationPlayer *__fastcall Ogre::Model::hasAnimPlaying(Ogre::Model *this, int a2)
{
  Ogre::AnimationPlayer *result; // r0

  result = *((Ogre::AnimationPlayer **)this + 96);
  if ( result != nullptr )
    return (Ogre::AnimationPlayer *)(Ogre::AnimationPlayer::findPlayTrack(result, a2) != 0);
  return result;
}


//======================================================================
// Ogre::Model::rebuildBounding(void)
// address: 0x00189DBC   size: 0x40 (64 bytes)
//======================================================================
float __fastcall Ogre::Model::rebuildBounding(Ogre::Model *this)
{
  unsigned int v1; // r4
  int v3; // r3
  _BYTE v5[28]; // [sp+4h] [bp-1Ch] BYREF

  v1 = 0;
  v5[24] = 0;
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 66);
    if ( v1 >= (*((_DWORD *)this + 67) - v3) >> 2 )
      break;
    Ogre::MeshInstance::getLocalBounds(*(_DWORD *)(4 * v1++ + v3), (Ogre::BoxBound *)v5);
  }
  return Ogre::BoxSphereBound::fromBoxBound((Ogre::Model *)((char *)this + 388), (const Ogre::BoxBound *)v5);
}


//======================================================================
// Ogre::Model::hasAnchor(int)
// address: 0x00189DFC   size: 0x2A (42 bytes)
//======================================================================
int __fastcall Ogre::Model::hasAnchor(Ogre::Model *this, int a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r0
  int v5; // r3
  int v6; // r0

  v2 = *((_DWORD *)this + 64);
  v3 = *(_DWORD *)(v2 + 76);
  v4 = *(_DWORD *)(v2 + 80);
  v5 = 0;
  v6 = (v4 - v3) >> 3;
  while ( 1 )
  {
    if ( v5 == v6 )
      return 0;
    if ( *(_DWORD *)(v3 + 8 * v5 + 4) == a2 )
      break;
    ++v5;
  }
  return 1;
}


//======================================================================
// Ogre::Model::checkBonesSize(void)
// address: 0x00189E28   size: 0x24 (36 bytes)
//======================================================================
bool __fastcall Ogre::Model::checkBonesSize(Ogre::Model *this)
{
  int v1; // r3

  v1 = *((_DWORD *)this + 65);
  return v1 == 0 || (unsigned int)(-1108378657 * ((*(_DWORD *)(v1 + 8) - *(_DWORD *)(v1 + 4)) >> 2)) <= 0xC8;
}


//======================================================================
// Ogre::Model::~Model()
// address: 0x00189F94   size: 0x11E (286 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre5ModelD1Ev'
void __fastcall Ogre::Model::~Model(Ogre::Model *this)
{
  char *v1; // r5
  _DWORD *v3; // r0
  void *v4; // r6
  void *v5; // r6
  unsigned int i; // r6
  int v7; // r3
  void *v8; // r7
  unsigned int *v9; // r6
  _DWORD *j; // r6
  int v11; // r0
  void *v12; // r0
  void *v13; // r0

  v1 = (char *)this + 252;
  *(_DWORD *)this = &off_458038;
  v3 = *((_DWORD **)this + 64);
  *(_DWORD *)v1 = off_4580AC;
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)v1 + 1) = 0;
  }
  v4 = *((void **)v1 + 2);
  if ( v4 != nullptr )
  {
    Ogre::SkeletonInstance::~SkeletonInstance(*((Ogre::SkeletonInstance **)v1 + 2));
    operator delete(v4);
  }
  v5 = *((void **)this + 96);
  if ( v5 != nullptr )
  {
    Ogre::AnimationPlayer::~AnimationPlayer(*((Ogre::AnimationPlayer **)this + 96));
    operator delete(v5);
  }
  for ( i = 0; ; ++i )
  {
    v7 = *((_DWORD *)this + 66);
    if ( i >= (*((_DWORD *)this + 67) - v7) >> 2 )
      break;
    v8 = *(void **)(4 * i + v7);
    if ( v8 != nullptr )
    {
      Ogre::MeshInstance::~MeshInstance(*(Ogre::MeshInstance **)(4 * i + v7));
      operator delete(v8);
    }
  }
  v9 = *((unsigned int **)v1 + 12);
  *((_DWORD *)v1 + 4) = v7;
  while ( v9 != (unsigned int *)((char *)this + 292) )
  {
    Ogre::LoadWrap::breakLoad((Ogre::LoadWrap *)v1, v9[4]);
    v9 = (unsigned int *)sub_391DDC(v9);
  }
  for ( j = *((_DWORD **)v1 + 24); j != (_DWORD *)((char *)this + 340); j = (_DWORD *)sub_391DDC(j) )
  {
    v11 = j[4];
    if ( v11 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 4))(v11);
  }
  std::_Rb_tree<int,std::pair<int const,Ogre::TextureDataLoader *>,std::_Select1st<std::pair<int const,Ogre::TextureDataLoader *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TextureDataLoader *>>>::_M_erase(
    (int)this + 360,
    *((_DWORD **)v1 + 29));
  std::_Rb_tree<Ogre::TextureDataLoader *,std::pair<Ogre::TextureDataLoader * const,int>,std::_Select1st<std::pair<Ogre::TextureDataLoader * const,int>>,std::less<Ogre::TextureDataLoader *>,std::allocator<std::pair<Ogre::TextureDataLoader * const,int>>>::_M_erase(
    (int)this + 336,
    *((_DWORD **)v1 + 23));
  std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::_M_erase(
    (int)this + 312,
    *((_DWORD **)v1 + 17));
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::_M_erase(
    (int)this + 288,
    *((_DWORD **)v1 + 11));
  v12 = *((void **)this + 69);
  if ( v12 != nullptr )
    operator delete(v12);
  v13 = *((void **)this + 66);
  if ( v13 != nullptr )
    operator delete(v13);
  Ogre::LoadWrap::~LoadWrap((Ogre::LoadWrap *)v1);
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// Ogre::Model::~Model()
// address: 0x0018A0CC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Model::~Model(Ogre::Model *this)
{
  Ogre::Model::~Model(this);
  operator delete(this);
}


//======================================================================
// Ogre::Model::clearTextureByID(int)
// address: 0x0018A18A   size: 0xE6 (230 bytes)
//======================================================================
void __fastcall Ogre::Model::clearTextureByID(Ogre::Model *this, int a2)
{
  char *v2; // r6
  unsigned int *v4; // r5
  Ogre::Model *v5; // r0
  void *v6; // r0
  void *v7; // r0
  _DWORD *v8; // r3
  _DWORD *v9; // r5
  _DWORD *v10; // r1
  _DWORD *v11; // r0
  void *v12; // r0
  int v13; // r0
  void *v14; // r0
  int v15; // [sp+Ch] [bp-8h] BYREF

  v15 = a2;
  v2 = (char *)this + 312;
  v4 = std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::find(
         (int)this + 312,
         &v15);
  if ( v4 != (unsigned int *)((char *)this + 316) )
  {
    Ogre::LoadWrap::breakLoad((Ogre::Model *)((char *)this + 252), v4[5]);
    v5 = (Ogre::Model *)std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::find(
                          (int)this + 288,
                          v4 + 5);
    if ( v5 != (Ogre::Model *)((char *)this + 292) )
    {
      v6 = (void *)sub_391F50(v5, (char *)this + 292);
      operator delete(v6);
      --*((_DWORD *)this + 77);
    }
    v7 = (void *)sub_391F50(v4, (char *)this + 316);
    operator delete(v7);
    --*((_DWORD *)v2 + 5);
  }
  v8 = *((_DWORD **)this + 92);
  v9 = (_DWORD *)((char *)this + 364);
  while ( v8 != nullptr )
  {
    if ( v8[4] < v15 )
    {
      v10 = (_DWORD *)v8[3];
      v8 = v9;
    }
    else
    {
      v10 = (_DWORD *)v8[2];
    }
    v9 = v8;
    v8 = v10;
  }
  if ( v9 != (_DWORD *)((char *)this + 364) && v15 >= v9[4] )
  {
    v11 = std::_Rb_tree<Ogre::TextureDataLoader *,std::pair<Ogre::TextureDataLoader * const,int>,std::_Select1st<std::pair<Ogre::TextureDataLoader * const,int>>,std::less<Ogre::TextureDataLoader *>,std::allocator<std::pair<Ogre::TextureDataLoader * const,int>>>::find(
            (int)this + 336,
            v9 + 5);
    v12 = (void *)sub_391F50(v11, (char *)this + 340);
    operator delete(v12);
    --*((_DWORD *)this + 89);
    v13 = v9[5];
    if ( v13 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 4))(v13);
    v14 = (void *)sub_391F50(v9, (char *)this + 364);
    operator delete(v14);
    --*((_DWORD *)this + 95);
  }
}


//======================================================================
// Ogre::Model::setTextureByID(int,Ogre::Texture *)
// address: 0x0018A270   size: 0x74 (116 bytes)
//======================================================================
void __fastcall Ogre::Model::setTextureByID(Ogre::Model *this, int a2, Ogre::Texture *a3)
{
  unsigned int i; // r6
  int v4; // r3
  Ogre::MeshInstance *v5; // r7
  unsigned int j; // r4
  Ogre::Material **SubMesh; // r5
  Ogre::Material *v8; // [sp+0h] [bp-14h]

  Ogre::Model::clearTextureByID(this, a2);
  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 66);
    if ( i >= (*((_DWORD *)this + 67) - v4) >> 2 )
      break;
    v5 = *(Ogre::MeshInstance **)(4 * i + v4);
    for ( j = 0; j < (*((_DWORD *)v5 + 3) - *((_DWORD *)v5 + 2)) >> 2; ++j )
    {
      SubMesh = (Ogre::Material **)Ogre::MeshInstance::getSubMesh(v5, j);
      if ( SubMesh[1] == nullptr )
      {
        v8 = (Ogre::Material *)operator new(0x2Cu);
        Ogre::Material::Material(v8, *((const Ogre::Material **)*SubMesh + 9));
        SubMesh[1] = v8;
      }
      Ogre::Material::setParamTextureByID(SubMesh[1], a2, a3);
    }
  }
}


//======================================================================
// Ogre::Model::setTextureData(Ogre::Texture *,Ogre::TextureDataLoader *)
// address: 0x0018A2E4   size: 0x2A (42 bytes)
//======================================================================
unsigned __int64 __fastcall Ogre::Model::setTextureData(
        Ogre::Model *this,
        Ogre::Texture *a2,
        Ogre::TextureDataLoader *a3)
{
  int *v5; // r0
  unsigned __int64 v7; // [sp+0h] [bp-Ch] BYREF
  Ogre::TextureDataLoader *v8; // [sp+8h] [bp-4h]

  v7 = __PAIR64__((unsigned int)a3, (unsigned int)this);
  v8 = a3;
  v5 = std::_Rb_tree<Ogre::TextureDataLoader *,std::pair<Ogre::TextureDataLoader * const,int>,std::_Select1st<std::pair<Ogre::TextureDataLoader * const,int>>,std::less<Ogre::TextureDataLoader *>,std::allocator<std::pair<Ogre::TextureDataLoader * const,int>>>::find(
         (int)this + 336,
         (_DWORD *)&v7 + 1);
  if ( v5 != (int *)((char *)this + 340) )
    Ogre::Model::setTextureByID(this, v5[5], a2);
  return v7;
}


//======================================================================
// Ogre::Model::ResourceLoaded(Ogre::Resource *,unsigned int)
// address: 0x0018A33C   size: 0x6C (108 bytes)
//======================================================================
void __fastcall Ogre::Model::ResourceLoaded(Ogre::Model *this, Ogre::Resource *a2, unsigned int a3)
{
  char *v3; // r5
  int *v5; // r0
  int *v6; // r6
  _DWORD *v7; // r0
  void *v8; // r0
  void *v9; // r0
  int v10; // r1
  unsigned int v12; // [sp+Ch] [bp-10h] BYREF
  int v13; // [sp+14h] [bp-8h] BYREF

  v3 = (char *)this + 288;
  v12 = a3;
  v5 = std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::find(
         (int)this + 288,
         &v12);
  v6 = v5;
  if ( v5 != (int *)((char *)this + 292) )
  {
    v13 = v5[5];
    v7 = std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::find(
           (int)this + 312,
           &v13);
    v8 = (void *)sub_391F50(v7, (char *)this + 316);
    operator delete(v8);
    --*((_DWORD *)this + 83);
    v9 = (void *)sub_391F50(v6, (char *)this + 292);
    operator delete(v9);
    v10 = v13;
    --*((_DWORD *)v3 + 5);
    Ogre::Model::setTextureByID(this, v10, a2);
  }
}


//======================================================================
// Ogre::Model::Model(void)
// address: 0x0018A42C   size: 0xAC (172 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre5ModelC1Ev'
Ogre::Model *__fastcall Ogre::Model::Model(Ogre::Model *this)
{
  Ogre::RenderableObject::RenderableObject(this);
  *(_DWORD *)this = &off_458038;
  *((_DWORD *)this + 63) = off_4580AC;
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 69) = 0;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::_Rb_tree_impl<std::less<unsigned int>,false>::_Rb_tree_impl((_DWORD *)this + 72);
  std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::_Rb_tree_impl<std::less<int>,false>::_Rb_tree_impl((_DWORD *)this + 78);
  std::_Rb_tree<Ogre::TextureDataLoader *,std::pair<Ogre::TextureDataLoader * const,int>,std::_Select1st<std::pair<Ogre::TextureDataLoader * const,int>>,std::less<Ogre::TextureDataLoader *>,std::allocator<std::pair<Ogre::TextureDataLoader * const,int>>>::_Rb_tree_impl<std::less<Ogre::TextureDataLoader *>,false>::_Rb_tree_impl((_DWORD *)this + 84);
  std::_Rb_tree<int,std::pair<int const,Ogre::TextureDataLoader *>,std::_Select1st<std::pair<int const,Ogre::TextureDataLoader *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TextureDataLoader *>>>::_Rb_tree_impl<std::less<int>,false>::_Rb_tree_impl((_DWORD *)this + 90);
  *((_DWORD *)this + 96) = 0;
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 105) = 0;
  *((_DWORD *)this + 106) = 0;
  *((_DWORD *)this + 107) = 0;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 109) = 0;
  *((_DWORD *)this + 110) = 0;
  *((_DWORD *)this + 111) = 0;
  *((_DWORD *)this + 61) |= 8u;
  *((_BYTE *)this + 452) = 0;
  return this;
}


//======================================================================
// Ogre::Model::newObject(void)
// address: 0x0018A4DC   size: 0x14 (20 bytes)
//======================================================================
Ogre::Model *__fastcall Ogre::Model::newObject(Ogre::Model *this)
{
  Ogre::Model *v1; // r4

  v1 = (Ogre::Model *)operator new(0x1C8u);
  Ogre::Model::Model(v1);
  return v1;
}


//======================================================================
// Ogre::Model::setTextureByID(int,char const*)
// address: 0x0018A54A   size: 0x280 (640 bytes)
//======================================================================
void __fastcall Ogre::Model::setTextureByID(Ogre::Model *this, int a2, Ogre::FixedString *a3)
{
  Ogre::LoadWrap *v6; // r6
  int v7; // r2
  void *v8; // r1
  char *v9; // r5
  char *v10; // r4
  char *v11; // r3
  unsigned int v12; // r2
  _DWORD *v13; // r3
  Ogre::FixedString *v14; // r5
  Ogre::FixedString *v15; // r4
  Ogre::FixedString *v16; // r2
  char *v17; // r7
  int v18; // r2
  char *v19; // r6
  int v20; // r0
  int v21; // r0
  _BOOL4 v22; // r5
  char *v23; // r0
  Ogre::FixedString *v24; // r6
  int v25; // r0
  int v26; // r0
  _BOOL4 v27; // r5
  Ogre::FixedString *v28; // r0
  int v29; // r1
  Ogre::FixedString *v30; // [sp+4h] [bp-30h]
  char *v31; // [sp+8h] [bp-2Ch]
  char *v33; // [sp+10h] [bp-24h]
  Ogre::FixedString *v34; // [sp+14h] [bp-20h]
  char *v35; // [sp+18h] [bp-1Ch] BYREF
  char *v36; // [sp+1Ch] [bp-18h]
  int v37; // [sp+20h] [bp-14h] BYREF
  int v38; // [sp+24h] [bp-10h]
  Ogre::FixedString *v39; // [sp+28h] [bp-Ch] BYREF
  Ogre::FixedString *v40; // [sp+2Ch] [bp-8h]

  Ogre::Model::clearTextureByID(this, a2);
  v6 = (Ogre::Model *)((char *)this + 252);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v39, a3, v7);
  v34 = (Ogre::FixedString *)Ogre::LoadWrap::backgroundLoad(v6, (const Ogre::FixedString *)&v39);
  Ogre::FixedString::~FixedString(&v39, v8);
  v9 = *((char **)v6 + 11);
  v33 = (char *)this + 292;
  v10 = (char *)this + 292;
  while ( v9 != nullptr )
  {
    if ( *((_DWORD *)v9 + 4) < (unsigned int)v34 )
    {
      v11 = *((char **)v9 + 3);
      v9 = v10;
    }
    else
    {
      v11 = *((char **)v9 + 2);
    }
    v10 = v9;
    v9 = v11;
  }
  if ( v10 != v33 && (unsigned int)v34 >= *((_DWORD *)v10 + 4) )
    goto LABEL_12;
  v39 = v34;
  v40 = nullptr;
  v31 = (char *)this + 288;
  if ( v10 != v33 )
  {
    v12 = *((_DWORD *)v10 + 4);
    if ( (unsigned int)v34 >= v12 )
    {
      if ( v12 >= (unsigned int)v34 )
        goto LABEL_12;
      if ( v10 == *((char **)this + 76) )
        goto LABEL_37;
      v21 = sub_391DDC(v10);
      if ( (unsigned int)v34 < *(_DWORD *)(v21 + 16) )
      {
        if ( *((_DWORD *)v10 + 3) != 0 )
        {
          v10 = (char *)v21;
          goto LABEL_36;
        }
LABEL_37:
        v19 = v10;
        v10 = v9;
        goto LABEL_38;
      }
LABEL_35:
      std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::_M_get_insert_unique_pos(
        (int *)&v35,
        (int)v31,
        &v39);
      v9 = v35;
      v10 = v36;
      goto LABEL_37;
    }
    if ( v10 != *((char **)this + 75) )
    {
      v20 = sub_391E44(v10);
      if ( *(_DWORD *)(v20 + 16) >= (unsigned int)v34 )
        goto LABEL_35;
      if ( *(_DWORD *)(v20 + 12) == 0 )
      {
        v10 = (char *)v20;
        goto LABEL_37;
      }
    }
LABEL_36:
    v9 = v10;
    goto LABEL_37;
  }
  if ( *((_DWORD *)v6 + 14) == 0 || *((_DWORD *)(v19 = *((char **)v6 + 13)) + 4) >= (unsigned int)v34 )
  {
    std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::_M_get_insert_unique_pos(
      (int *)&v35,
      (int)v31,
      &v39);
    v10 = v35;
    v19 = v36;
LABEL_38:
    if ( v19 == nullptr )
      goto LABEL_12;
    v22 = true;
    if ( v10 != nullptr )
      goto LABEL_43;
  }
  v22 = v19 == v33 || (unsigned int)v34 < *((_DWORD *)v19 + 4);
LABEL_43:
  v23 = (char *)operator new(0x18u);
  v10 = v23;
  if ( v23 != (char *)-16 )
  {
    *((_DWORD *)v23 + 4) = v39;
    *((_DWORD *)v23 + 5) = v40;
  }
  sub_391E64(v22, v23, v19, v33);
  ++*((_DWORD *)this + 77);
LABEL_12:
  *((_DWORD *)v10 + 5) = a2;
  v13 = (_DWORD *)((char *)this + 252);
  v14 = *((Ogre::FixedString **)this + 80);
  v30 = (Ogre::Model *)((char *)this + 316);
  v15 = (Ogre::Model *)((char *)this + 316);
  while ( v14 != nullptr )
  {
    if ( *((_DWORD *)v14 + 4) < a2 )
    {
      v16 = *((Ogre::FixedString **)v14 + 3);
      v14 = v15;
    }
    else
    {
      v16 = *((Ogre::FixedString **)v14 + 2);
    }
    v15 = v14;
    v14 = v16;
  }
  if ( v15 != v30 && a2 >= *((_DWORD *)v15 + 4) )
    goto LABEL_23;
  v37 = a2;
  v38 = 0;
  v17 = (char *)this + 312;
  if ( v15 != v30 )
  {
    v18 = *((_DWORD *)v15 + 4);
    if ( a2 >= v18 )
    {
      if ( v18 >= a2 )
        goto LABEL_23;
      if ( v15 == (Ogre::FixedString *)v13[19] )
        goto LABEL_60;
      v26 = sub_391DDC(v15);
      if ( a2 < *(_DWORD *)(v26 + 16) )
      {
        if ( *((_DWORD *)v15 + 3) != 0 )
        {
          v15 = (Ogre::FixedString *)v26;
          goto LABEL_59;
        }
LABEL_60:
        v24 = v15;
        v15 = v14;
        goto LABEL_61;
      }
LABEL_58:
      std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::_M_get_insert_unique_pos(
        (int *)&v39,
        (int)v17,
        &v37);
      v14 = v39;
      v15 = v40;
      goto LABEL_60;
    }
    if ( v15 != (Ogre::FixedString *)v13[18] )
    {
      v25 = sub_391E44(v15);
      if ( *(_DWORD *)(v25 + 16) >= a2 )
        goto LABEL_58;
      if ( *(_DWORD *)(v25 + 12) == 0 )
      {
        v15 = (Ogre::FixedString *)v25;
        goto LABEL_60;
      }
    }
LABEL_59:
    v14 = v15;
    goto LABEL_60;
  }
  if ( v13[20] == 0 || *((_DWORD *)(v24 = (Ogre::FixedString *)v13[19]) + 4) >= a2 )
  {
    std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::_M_get_insert_unique_pos(
      (int *)&v39,
      (int)v17,
      &v37);
    v15 = v39;
    v24 = v40;
LABEL_61:
    if ( v24 == nullptr )
      goto LABEL_23;
    v27 = true;
    if ( v15 != nullptr )
      goto LABEL_66;
  }
  v27 = v24 == v30 || a2 < *((_DWORD *)v24 + 4);
LABEL_66:
  v28 = (Ogre::FixedString *)operator new(0x18u);
  v15 = v28;
  if ( v28 != (Ogre::FixedString *)-16 )
  {
    v29 = v38;
    *((_DWORD *)v28 + 4) = v37;
    *((_DWORD *)v28 + 5) = v29;
  }
  sub_391E64(v27, v28, v24, v30);
  ++*((_DWORD *)v17 + 5);
LABEL_23:
  *((_DWORD *)v15 + 5) = v34;
}


//======================================================================
// Ogre::Model::setTextureByID(int,Ogre::TextureDataLoader *)
// address: 0x0018A87E   size: 0x26C (620 bytes)
//======================================================================
int *__fastcall Ogre::Model::setTextureByID(Ogre::Model *this, int a2, Ogre::TextureDataLoader *a3)
{
  int *result; // r0
  int *v4; // r5
  char *v5; // r7
  int *v6; // r4
  int *v7; // r2
  unsigned int v8; // r2
  Ogre::TextureDataLoader *v9; // r5
  char *v10; // r4
  Ogre::TextureDataLoader *v11; // r2
  int v12; // r2
  int *v13; // r6
  _BOOL4 v14; // r5
  int *v15; // r0
  char *v16; // r6
  _BOOL4 v17; // r5
  char *v18; // r0
  int v19; // r1
  char *v20; // [sp+4h] [bp-30h]
  char *v23; // [sp+10h] [bp-24h]
  int *v25; // [sp+18h] [bp-1Ch] BYREF
  int *v26; // [sp+1Ch] [bp-18h]
  int v27; // [sp+20h] [bp-14h] BYREF
  int v28; // [sp+24h] [bp-10h]
  Ogre::TextureDataLoader *v29; // [sp+28h] [bp-Ch] BYREF
  char *v30; // [sp+2Ch] [bp-8h]

  Ogre::Model::clearTextureByID(this, a2);
  result = (int *)Ogre::TextureDataLoader::setModel((int)a3, this);
  v4 = *((int **)this + 86);
  v5 = (char *)this + 340;
  v6 = (int *)((char *)this + 340);
  while ( v4 != nullptr )
  {
    if ( v4[4] < (unsigned int)a3 )
    {
      v7 = (int *)v4[3];
      v4 = v6;
    }
    else
    {
      v7 = (int *)v4[2];
    }
    v6 = v4;
    v4 = v7;
  }
  if ( v6 != (int *)v5 && (unsigned int)a3 >= v6[4] )
    goto LABEL_12;
  v29 = a3;
  v30 = nullptr;
  v23 = (char *)this + 336;
  if ( v6 != (int *)v5 )
  {
    v8 = v6[4];
    if ( (unsigned int)a3 >= v8 )
    {
      if ( v8 >= (unsigned int)a3 )
        goto LABEL_12;
      if ( v6 == *((int **)this + 88) )
        goto LABEL_37;
      result = (int *)sub_391DDC(v6);
      if ( (unsigned int)a3 < result[4] )
      {
        if ( v6[3] != 0 )
        {
          v6 = result;
          goto LABEL_36;
        }
LABEL_37:
        v13 = v6;
        v6 = v4;
        goto LABEL_38;
      }
LABEL_35:
      result = std::_Rb_tree<Ogre::TextureDataLoader *,std::pair<Ogre::TextureDataLoader * const,int>,std::_Select1st<std::pair<Ogre::TextureDataLoader * const,int>>,std::less<Ogre::TextureDataLoader *>,std::allocator<std::pair<Ogre::TextureDataLoader * const,int>>>::_M_get_insert_unique_pos(
                 (int *)&v25,
                 (int)v23,
                 &v29);
      v4 = v25;
      v6 = v26;
      goto LABEL_37;
    }
    if ( v6 != *((int **)this + 87) )
    {
      result = (int *)sub_391E44(v6);
      if ( result[4] >= (unsigned int)a3 )
        goto LABEL_35;
      if ( result[3] == 0 )
      {
        v6 = result;
        goto LABEL_37;
      }
    }
LABEL_36:
    v4 = v6;
    goto LABEL_37;
  }
  if ( *((_DWORD *)this + 89) == 0 || (v13 = *((int **)this + 88))[4] >= (unsigned int)a3 )
  {
    result = std::_Rb_tree<Ogre::TextureDataLoader *,std::pair<Ogre::TextureDataLoader * const,int>,std::_Select1st<std::pair<Ogre::TextureDataLoader * const,int>>,std::less<Ogre::TextureDataLoader *>,std::allocator<std::pair<Ogre::TextureDataLoader * const,int>>>::_M_get_insert_unique_pos(
               (int *)&v25,
               (int)v23,
               &v29);
    v6 = v25;
    v13 = v26;
LABEL_38:
    if ( v13 == nullptr )
      goto LABEL_12;
    v14 = true;
    if ( v6 != nullptr )
      goto LABEL_43;
  }
  v14 = v13 == (int *)v5 || (unsigned int)a3 < v13[4];
LABEL_43:
  v15 = (int *)operator new(0x18u);
  v6 = v15;
  if ( v15 != (int *)-16 )
  {
    v15[4] = (int)v29;
    v15[5] = (int)v30;
  }
  result = (int *)sub_391E64(v14, v15, v13, v5);
  ++*((_DWORD *)this + 89);
LABEL_12:
  v6[5] = a2;
  v9 = *((Ogre::TextureDataLoader **)this + 92);
  v20 = (char *)this + 364;
  v10 = (char *)this + 364;
  while ( v9 != nullptr )
  {
    if ( *((_DWORD *)v9 + 4) < a2 )
    {
      v11 = *((Ogre::TextureDataLoader **)v9 + 3);
      v9 = (Ogre::TextureDataLoader *)v10;
    }
    else
    {
      v11 = *((Ogre::TextureDataLoader **)v9 + 2);
    }
    v10 = (char *)v9;
    v9 = v11;
  }
  if ( v10 != v20 && a2 >= *((_DWORD *)v10 + 4) )
    goto LABEL_23;
  v28 = 0;
  v27 = a2;
  if ( v10 != v20 )
  {
    v12 = *((_DWORD *)v10 + 4);
    if ( a2 >= v12 )
    {
      if ( v12 >= a2 )
        goto LABEL_23;
      if ( v10 == *((char **)this + 94) )
        goto LABEL_60;
      result = (int *)sub_391DDC(v10);
      if ( a2 < result[4] )
      {
        if ( *((_DWORD *)v10 + 3) != 0 )
        {
          v10 = (char *)result;
          goto LABEL_59;
        }
LABEL_60:
        v16 = v10;
        v10 = (char *)v9;
        goto LABEL_61;
      }
LABEL_58:
      result = std::_Rb_tree<int,std::pair<int const,Ogre::TextureDataLoader *>,std::_Select1st<std::pair<int const,Ogre::TextureDataLoader *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TextureDataLoader *>>>::_M_get_insert_unique_pos(
                 (int *)&v29,
                 (int)this + 360,
                 &v27);
      v9 = v29;
      v10 = v30;
      goto LABEL_60;
    }
    if ( v10 != *((char **)this + 93) )
    {
      result = (int *)sub_391E44(v10);
      if ( result[4] >= a2 )
        goto LABEL_58;
      if ( result[3] == 0 )
      {
        v10 = (char *)result;
        goto LABEL_60;
      }
    }
LABEL_59:
    v9 = (Ogre::TextureDataLoader *)v10;
    goto LABEL_60;
  }
  if ( *((_DWORD *)this + 95) == 0 || *((_DWORD *)(v16 = *((char **)this + 94)) + 4) >= a2 )
  {
    result = std::_Rb_tree<int,std::pair<int const,Ogre::TextureDataLoader *>,std::_Select1st<std::pair<int const,Ogre::TextureDataLoader *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TextureDataLoader *>>>::_M_get_insert_unique_pos(
               (int *)&v29,
               (int)this + 360,
               &v27);
    v10 = (char *)v29;
    v16 = v30;
LABEL_61:
    if ( v16 == nullptr )
      goto LABEL_23;
    v17 = true;
    if ( v10 != nullptr )
      goto LABEL_66;
  }
  v17 = v16 == v20 || a2 < *((_DWORD *)v16 + 4);
LABEL_66:
  v18 = (char *)operator new(0x18u);
  v10 = v18;
  if ( v18 != (char *)-16 )
  {
    v19 = v28;
    *((_DWORD *)v18 + 4) = v27;
    *((_DWORD *)v18 + 5) = v19;
  }
  result = (int *)sub_391E64(v17, v18, v16, v20);
  ++*((_DWORD *)this + 95);
LABEL_23:
  *((_DWORD *)v10 + 5) = a3;
  return result;
}


//======================================================================
// Ogre::Model::Model(Ogre::ModelData *)
// address: 0x0018AE38   size: 0x140 (320 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre5ModelC2EPNS_9ModelDataE'
Ogre::Model *__fastcall Ogre::Model::Model(Ogre::Model *this, Ogre::ModelData *a2)
{
  int v3; // r0
  Ogre::SkeletonInstance *v4; // r6
  unsigned int v5; // r6
  _DWORD *v6; // r3
  int v7; // r2
  Ogre::MeshData *v8; // r3
  __int64 v9; // r0
  Ogre::AnimationPlayer *v10; // r6
  Ogre::SkeletonData *v13; // [sp+0h] [bp-14h]
  Ogre::SkeletonData *v14; // [sp+0h] [bp-14h]
  Ogre::MeshData *v15; // [sp+4h] [bp-10h]
  Ogre::SkeletonData *v16; // [sp+Ch] [bp-8h] BYREF

  Ogre::RenderableObject::RenderableObject(this);
  *(_DWORD *)this = &off_458038;
  *((_DWORD *)this + 63) = off_4580AC;
  *((_DWORD *)this + 64) = a2;
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 69) = 0;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::_Rb_tree_impl<std::less<unsigned int>,false>::_Rb_tree_impl((_DWORD *)this + 72);
  std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::_Rb_tree_impl<std::less<int>,false>::_Rb_tree_impl((_DWORD *)this + 78);
  std::_Rb_tree<Ogre::TextureDataLoader *,std::pair<Ogre::TextureDataLoader * const,int>,std::_Select1st<std::pair<Ogre::TextureDataLoader * const,int>>,std::less<Ogre::TextureDataLoader *>,std::allocator<std::pair<Ogre::TextureDataLoader * const,int>>>::_Rb_tree_impl<std::less<Ogre::TextureDataLoader *>,false>::_Rb_tree_impl((_DWORD *)this + 84);
  std::_Rb_tree<int,std::pair<int const,Ogre::TextureDataLoader *>,std::_Select1st<std::pair<int const,Ogre::TextureDataLoader *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TextureDataLoader *>>>::_Rb_tree_impl<std::less<int>,false>::_Rb_tree_impl((_DWORD *)this + 90);
  *((_DWORD *)this + 96) = 0;
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 105) = 0;
  *((_DWORD *)this + 106) = 0;
  *((_DWORD *)this + 107) = 0;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 109) = 0;
  *((_DWORD *)this + 110) = 0;
  *((_DWORD *)this + 111) = 0;
  v3 = *((_DWORD *)this + 64);
  if ( v3 != 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
    if ( *(_DWORD *)(*((_DWORD *)this + 64) + 28) != 0 )
    {
      v13 = *((Ogre::SkeletonData **)a2 + 7);
      v4 = (Ogre::SkeletonInstance *)operator new(0x24u);
      Ogre::SkeletonInstance::SkeletonInstance(v4, v13);
      *((_DWORD *)this + 65) = v4;
    }
    v5 = 0;
    while ( 1 )
    {
      v6 = *((_DWORD **)this + 64);
      v7 = v6[4];
      if ( v5 >= (v6[5] - v7) >> 2 )
        break;
      v8 = *(Ogre::MeshData **)(4 * v5++ + v7);
      v15 = v8;
      v14 = (Ogre::SkeletonData *)operator new(0x14u);
      Ogre::MeshInstance::MeshInstance(v14, v15);
      LODWORD(v9) = (char *)this + 264;
      HIDWORD(v9) = &v16;
      v16 = v14;
      std::vector<Ogre::MeshInstance *>::push_back(v9);
    }
    if ( v6[8] != v6[9] )
    {
      v10 = (Ogre::AnimationPlayer *)operator new(0x1Cu);
      Ogre::AnimationPlayer::AnimationPlayer(v10, this);
      *((_DWORD *)this + 96) = v10;
      Ogre::Model::playAnim(this, 0, 1.0, 1.0);
    }
    Ogre::BoxSphereBound::fromBoxBound(
      (Ogre::Model *)((char *)this + 388),
      (const Ogre::BoxBound *)(*((_DWORD *)this + 64) + 48));
    *((_DWORD *)this + 61) |= 8u;
  }
  return this;
}


//======================================================================
// Ogre::Model::createInstanceData(std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>> &)
// address: 0x0018AFEC   size: 0x52 (82 bytes)
//======================================================================
int __fastcall Ogre::Model::createInstanceData(int a1, _DWORD *a2)
{
  int v3; // r4
  int v4; // r0
  int result; // r0
  int v7; // r3
  int v8; // r4
  int v9; // r7
  __int64 v10; // r0
  int v11; // [sp+4h] [bp-10h]
  int v12; // [sp+Ch] [bp-8h] BYREF

  v3 = a1;
  v4 = *(_DWORD *)(*a2 + 60);
  v3 += 252;
  *(_DWORD *)(v3 + 4) = v4;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  v7 = *(_DWORD *)(v3 + 4);
  v8 = 0;
  v11 = (*(_DWORD *)(v7 + 20) - *(_DWORD *)(v7 + 16)) >> 2;
  while ( v8 != v11 )
  {
    v9 = operator new(0x14u);
    Ogre::MeshInstance::MeshInstance(v9, a2, v8);
    LODWORD(v10) = a1 + 264;
    HIDWORD(v10) = &v12;
    v12 = v9;
    ++v8;
    result = std::vector<Ogre::MeshInstance *>::push_back(v10);
  }
  return result;
}


//======================================================================
// Ogre::Model::Model(std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>> &)
// address: 0x0018B040   size: 0xEC (236 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre5ModelC1ERSt6vectorINS_17ModelInstanceDataESaIS2_EE'
Ogre::RenderableObject *__fastcall Ogre::Model::Model(Ogre::RenderableObject *a1, _DWORD *a2)
{
  Ogre::SkeletonData *v3; // r5
  Ogre::SkeletonInstance *v4; // r7
  Ogre::AnimationPlayer *v5; // r5

  Ogre::RenderableObject::RenderableObject(a1);
  *(_DWORD *)a1 = &off_458038;
  *((_DWORD *)a1 + 63) = off_4580AC;
  *((_DWORD *)a1 + 64) = 0;
  *((_DWORD *)a1 + 65) = 0;
  *((_DWORD *)a1 + 66) = 0;
  *((_DWORD *)a1 + 67) = 0;
  *((_DWORD *)a1 + 68) = 0;
  *((_DWORD *)a1 + 69) = 0;
  *((_DWORD *)a1 + 70) = 0;
  *((_DWORD *)a1 + 71) = 0;
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::_Rb_tree_impl<std::less<unsigned int>,false>::_Rb_tree_impl((_DWORD *)a1 + 72);
  std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::_Rb_tree_impl<std::less<int>,false>::_Rb_tree_impl((_DWORD *)a1 + 78);
  std::_Rb_tree<Ogre::TextureDataLoader *,std::pair<Ogre::TextureDataLoader * const,int>,std::_Select1st<std::pair<Ogre::TextureDataLoader * const,int>>,std::less<Ogre::TextureDataLoader *>,std::allocator<std::pair<Ogre::TextureDataLoader * const,int>>>::_Rb_tree_impl<std::less<Ogre::TextureDataLoader *>,false>::_Rb_tree_impl((_DWORD *)a1 + 84);
  std::_Rb_tree<int,std::pair<int const,Ogre::TextureDataLoader *>,std::_Select1st<std::pair<int const,Ogre::TextureDataLoader *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TextureDataLoader *>>>::_Rb_tree_impl<std::less<int>,false>::_Rb_tree_impl((_DWORD *)a1 + 90);
  *((_DWORD *)a1 + 96) = 0;
  *((_DWORD *)a1 + 104) = 0;
  *((_DWORD *)a1 + 105) = 0;
  *((_DWORD *)a1 + 106) = 0;
  *((_DWORD *)a1 + 107) = 0;
  *((_DWORD *)a1 + 108) = 0;
  *((_DWORD *)a1 + 109) = 0;
  *((_DWORD *)a1 + 110) = 0;
  *((_DWORD *)a1 + 111) = 0;
  Ogre::Model::createInstanceData((int)a1, a2);
  v3 = *(Ogre::SkeletonData **)(*((_DWORD *)a1 + 64) + 28);
  if ( v3 != nullptr )
  {
    v4 = (Ogre::SkeletonInstance *)operator new(0x24u);
    Ogre::SkeletonInstance::SkeletonInstance(v4, v3);
    *((_DWORD *)a1 + 65) = v4;
  }
  if ( *(_DWORD *)(*((_DWORD *)a1 + 64) + 32) != *(_DWORD *)(*((_DWORD *)a1 + 64) + 36) )
  {
    v5 = (Ogre::AnimationPlayer *)operator new(0x1Cu);
    Ogre::AnimationPlayer::AnimationPlayer(v5, a1);
    *((_DWORD *)a1 + 96) = v5;
  }
  Ogre::Model::rebuildBounding(a1);
  *((_DWORD *)a1 + 61) |= 8u;
  return a1;
}


//======================================================================
// Ogre::Model::getAnchors(std::vector<int,std::allocator<int>> &)
// address: 0x0018B130   size: 0x4C (76 bytes)
//======================================================================
int __fastcall Ogre::Model::getAnchors(int a1, _DWORD *a2)
{
  unsigned int i; // r5
  int v5; // r2
  int v6; // r3
  int v7; // r3
  __int64 v8; // r0

  for ( i = 0; ; ++i )
  {
    v5 = *(_DWORD *)(a1 + 256);
    v6 = *(_DWORD *)(v5 + 76);
    if ( i >= (*(_DWORD *)(v5 + 80) - v6) >> 3 )
      break;
    v7 = v6 + 8 * i;
    HIDWORD(v8) = a2[1];
    if ( HIDWORD(v8) == a2[2] )
    {
      LODWORD(v8) = a2;
      std::vector<int>::_M_insert_aux(v8, (_DWORD *)(v7 + 4));
    }
    else
    {
      if ( HIDWORD(v8) != 0 )
        *(_DWORD *)HIDWORD(v8) = *(_DWORD *)(v7 + 4);
      a2[1] += 4;
    }
  }
  return (a2[1] - *a2) >> 2;
}

