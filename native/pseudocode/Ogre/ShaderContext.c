// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ShaderContext

//======================================================================
// Ogre::ShaderContext::reset(Ogre::ShaderContextPool *)
// address: 0x0015C978   size: 0x48 (72 bytes)
//======================================================================
void *__fastcall Ogre::ShaderContext::reset(_DWORD *a1, int a2)
{
  _DWORD *v3; // r0
  _DWORD *v5; // r0
  void *result; // r0

  v3 = (_DWORD *)*a1;
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *a1 = 0;
  }
  v5 = (_DWORD *)a1[1];
  if ( v5 != nullptr )
  {
    Ogre::BaseObject::release(v5);
    a1[1] = 0;
  }
  j_memset(a1, 0, 0x84u);
  j_memset(a1 + 13, 0, 8u);
  result = j_memset(a1 + 15, 0, 8u);
  a1[4] = a2;
  return result;
}


//======================================================================
// Ogre::ShaderContext::ShaderContext(Ogre::ShaderContextPool *)
// address: 0x0015C9C0   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13ShaderContextC1EPNS_17ShaderContextPoolE'
_DWORD *__fastcall Ogre::ShaderContext::ShaderContext(_DWORD *a1, int a2)
{
  *a1 = 0;
  a1[1] = 0;
  a1[18] = 1065353216;
  a1[19] = 1065353216;
  a1[20] = 1065353216;
  a1[21] = 1065353216;
  Ogre::ShaderContext::reset(a1, a2);
  return a1;
}


//======================================================================
// Ogre::ShaderContext::setIB(Ogre::IndexBuffer *)
// address: 0x0015C9DE   size: 0x1C (28 bytes)
//======================================================================
int __fastcall Ogre::ShaderContext::setIB(int result, _DWORD *a2)
{
  int v2; // r5

  v2 = result;
  *(_DWORD *)(result + 4) = a2;
  if ( a2 != nullptr )
  {
    result = (*(int (__fastcall **)(_DWORD *))(*a2 + 4))(a2);
    *(_DWORD *)(v2 + 48) = a2[5];
    *(_DWORD *)(v2 + 44) = a2[4];
  }
  return result;
}


//======================================================================
// Ogre::ShaderContext::setVB(Ogre::VertexBuffer *)
// address: 0x0015C9FA   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall Ogre::ShaderContext::setVB(_DWORD *result, int a2)
{
  *result = a2;
  if ( a2 != 0 )
    return (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a2 + 4))(a2);
  return result;
}


//======================================================================
// Ogre::ShaderContext::setMaterial(Ogre::Material *)
// address: 0x0015CA0C   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::ShaderContext::setMaterial(Ogre::ShaderContext *this, Ogre::Material *a2)
{
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 6);
  return Ogre::Material::applyShaderParam(a2, this);
}


//======================================================================
// Ogre::ShaderContext::applyShaderParam(int)
// address: 0x0015CA84   size: 0x64 (100 bytes)
//======================================================================
Ogre::ShaderContextPool *__fastcall Ogre::ShaderContext::applyShaderParam(Ogre::ShaderContextPool *this, int a2)
{
  Ogre::ShaderContextPool *v2; // r4
  unsigned int i; // r5
  unsigned int j; // r6
  _DWORD *v5; // r5
  unsigned int k; // r6
  int v7; // r3
  _DWORD v8[25]; // [sp+0h] [bp-64h] BYREF

  v2 = this;
  for ( i = 0; i < *((_DWORD *)v2 + 29); ++i )
    this = Ogre::ShaderContextPool::applyShaderValueParam(
             *((Ogre::ShaderContextPool **)v2 + 4),
             i + *((_DWORD *)v2 + 30),
             *((Ogre::ShaderTechnique **)v2 + 3));
  for ( j = 0; ; ++j )
  {
    v5 = v8;
    if ( j >= *((_DWORD *)v2 + 32) )
      break;
    this = (Ogre::ShaderContextPool *)Ogre::ShaderContextPool::getHardwareTexture(
                                        *((_DWORD *)v2 + 4),
                                        j + *((_DWORD *)v2 + 31),
                                        &v8[3 * j]);
  }
  for ( k = 0; k < *((_DWORD *)v2 + 32); ++k )
  {
    v7 = v5[1];
    if ( v7 != 0 )
      v7 = v5[2];
    this = (Ogre::ShaderContextPool *)(*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, int))(**((_DWORD **)v2 + 3) + 28))(
                                        *((_DWORD *)v2 + 3),
                                        *v5,
                                        v5[1],
                                        v7);
    v5 += 3;
  }
  return this;
}


//======================================================================
// Ogre::ShaderContext::prepareDraw(Ogre::RenderUsage)
// address: 0x0015CB28   size: 0x1C (28 bytes)
//======================================================================
int __fastcall Ogre::ShaderContext::prepareDraw(int *a1, int a2)
{
  int v3; // [sp+0h] [bp-8h]

  a1[3] = Ogre::MaterialTemplate::getShaderTechnique(a1[2], (int)(a1 + 13), a1 + 15, a1[17], a2);
  return v3;
}


//======================================================================
// Ogre::ShaderContext::draw(Ogre::ShaderTechnique *)
// address: 0x0015CB44   size: 0x70 (112 bytes)
//======================================================================
Ogre::ShaderContextPool *__fastcall Ogre::ShaderContext::draw(Ogre::ShaderContextPool *this, Ogre::ShaderTechnique *a2)
{
  Ogre::ShaderContextPool *v2; // r4
  int v3; // r7
  int *v4; // r5
  void (__fastcall *v5)(int *, int, int); // r6
  int v6; // r0
  int v7; // r0
  int v8; // r3
  int v9; // r7
  int v10; // r6
  int v11; // r0
  int v12; // [sp+10h] [bp-Ch]
  int (__fastcall *v13)(int *, int, int, int, int, _DWORD, _DWORD); // [sp+14h] [bp-8h]

  v2 = this;
  if ( a2 != nullptr )
  {
    Ogre::ShaderContext::applyShaderParam(this, 0);
    v3 = *((_DWORD *)v2 + 7);
    v4 = (int *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton;
    v5 = *(void (__fastcall **)(int *, int, int))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 96);
    v6 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)v2 + 28))(*(_DWORD *)v2);
    v5(v4, v3, v6);
    v7 = *((_DWORD *)v2 + 1);
    v8 = *v4;
    v9 = *((_DWORD *)v2 + 8);
    v10 = *((_DWORD *)v2 + 9);
    v12 = *((_DWORD *)v2 + 10);
    if ( v7 != 0 )
    {
      v13 = *(int (__fastcall **)(int *, int, int, int, int, _DWORD, _DWORD))(v8 + 104);
      v11 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 28))(v7);
      return (Ogre::ShaderContextPool *)v13(v4, v9, v10, v12, v11, *((_DWORD *)v2 + 11), *((_DWORD *)v2 + 12));
    }
    else
    {
      return (Ogre::ShaderContextPool *)(*(int (__fastcall **)(int *, int, int, int))(v8 + 100))(v4, v9, v10, v12);
    }
  }
  return this;
}


//======================================================================
// Ogre::ShaderContext::addValueParam(Ogre::ShaderParamUsage,void const*,Ogre::ShaderParamType,unsigned int)
// address: 0x0015DE48   size: 0x1C (28 bytes)
//======================================================================
int __fastcall Ogre::ShaderContext::addValueParam(int a1, int a2, const void *a3, int a4, int a5)
{
  int v6; // r0
  int v7; // r3
  int v9; // [sp+0h] [bp-8h]

  v6 = Ogre::ShaderContextPool::addValueParam(*(_DWORD **)(a1 + 16), a2, a3, a4, a5);
  v7 = *(_DWORD *)(a1 + 116);
  if ( v7 == 0 )
    *(_DWORD *)(a1 + 120) = v6;
  *(_DWORD *)(a1 + 116) = v7 + 1;
  return v9;
}


//======================================================================
// Ogre::ShaderContext::addTextureParam(Ogre::ShaderParamUsage,Ogre::Texture *,int)
// address: 0x0015E2C0   size: 0x1A (26 bytes)
//======================================================================
int __fastcall Ogre::ShaderContext::addTextureParam(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v6; // r2

  result = Ogre::ShaderContextPool::addTextureParam(*(_DWORD **)(a1 + 16), a2, a3, a4);
  v6 = *(_DWORD *)(a1 + 128);
  if ( v6 == 0 )
    *(_DWORD *)(a1 + 124) = result;
  *(_DWORD *)(a1 + 128) = v6 + 1;
  return result;
}


//======================================================================
// Ogre::ShaderContext::handleShaderParam(Ogre::ShaderParamUsage,Ogre::ShaderEnvData const&,Ogre::Matrix4 const*)
// address: 0x0015E2DC   size: 0x1FE (510 bytes)
//======================================================================
int __fastcall Ogre::ShaderContext::handleShaderParam(int a1, int a2, int a3, float *a4)
{
  int result; // r0
  int v8; // kr08_4
  int v9; // r0
  int v10; // r1
  float *v11; // r2
  int v12; // r3
  int v13; // r3
  int v14; // r3
  float *v15; // r5
  float v16; // r1
  float v17; // r1
  int *v18; // r5
  const void *v19; // r2
  int v20; // r3
  int v21; // [sp+0h] [bp-10h]
  int v23; // [sp+10h] [bp+0h] BYREF
  _BYTE v24[64]; // [sp+50h] [bp+40h] BYREF
  float v25[17]; // [sp+90h] [bp+80h] BYREF

  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)&v23);
  v8 = Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v24);
  result = a2;
  switch ( a2 )
  {
    case 0:
      v21 = 1;
      v9 = a1;
      v10 = 0;
      v11 = a4;
      goto LABEL_37;
    case 1:
      Ogre::operator*((Ogre::Matrix4 *)v25, a4, (float *)(a3 + 956));
      Ogre::Matrix4::operator=(&v23, v25);
      v10 = 1;
      v21 = 1;
      v9 = a1;
      goto LABEL_6;
    case 2:
      Ogre::operator*((Ogre::Matrix4 *)v25, a4, (float *)(a3 + 1084));
      Ogre::Matrix4::operator=(&v23, v25);
      v21 = 1;
      v9 = a1;
      v10 = 2;
LABEL_6:
      v11 = (float *)&v23;
      goto LABEL_37;
    case 3:
    case 9:
    case 10:
    case 11:
    case 12:
    case 24:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
      return v8;
    case 4:
      v15 = (float *)(a3 + 156);
      v16 = *(float *)(a1 + 76);
      v25[0] = *v15 + *(float *)(a1 + 72);
      v25[1] = v15[1] + v16;
      v17 = *(float *)(a1 + 84);
      v25[2] = v15[2] + *(float *)(a1 + 80);
      v25[3] = v15[3] + v17;
      v10 = a2;
      v21 = 1;
      v9 = a1;
      v11 = v25;
      goto LABEL_48;
    case 5:
      v11 = (float *)(a3 + 1020);
      v21 = 1;
      v9 = a1;
      v10 = 5;
      goto LABEL_37;
    case 6:
      v14 = *(_BYTE *)a3 & 7;
      if ( v14 == 0 )
        return result;
      v11 = (float *)(a3 + 12);
      goto LABEL_47;
    case 7:
      v14 = *(_BYTE *)a3 & 7;
      if ( v14 == 0 )
        return result;
      v11 = (float *)(a3 + 76);
      goto LABEL_47;
    case 8:
      v11 = (float *)(a3 + 140);
      goto LABEL_46;
    case 13:
      v11 = (float *)(a3 + 172);
      goto LABEL_46;
    case 14:
      v11 = (float *)(a3 + 188);
      goto LABEL_46;
    case 15:
      v11 = (float *)(a3 + 204);
      goto LABEL_46;
    case 16:
      v12 = 1148;
      goto LABEL_40;
    case 17:
      Ogre::Matrix4::inverse((Ogre::Matrix4 *)a4, (Ogre::Matrix4 *)v24);
      Ogre::Matrix4::apply4x4((Ogre::Matrix4 *)v24, (Ogre::Vector3 *)v25, (const Ogre::Vector3 *)(a3 + 1148));
      v21 = 1;
      v9 = a1;
      v10 = a2;
      v11 = v25;
      goto LABEL_42;
    case 18:
      v13 = 145;
      goto LABEL_45;
    case 19:
      if ( *(_DWORD *)(a3 + 220) == 0 )
        return result;
      v11 = (float *)(a3 + 248);
      goto LABEL_36;
    case 20:
      v18 = (int *)(a3 + 220);
      goto LABEL_27;
    case 21:
      v19 = (const void *)(a3 + 440);
      return Ogre::ShaderContext::addValueParam(a1, a2, v19, 0, 1);
    case 22:
      v18 = (int *)(a3 + 232);
      goto LABEL_27;
    case 23:
      if ( *(_DWORD *)(a3 + 232) == 0 )
        return result;
      v11 = (float *)(a3 + 236);
      goto LABEL_41;
    case 25:
      v19 = *(const void **)(a1 + 16);
      return Ogre::ShaderContext::addValueParam(a1, a2, v19, 0, 1);
    case 26:
      v18 = (int *)(a3 + 224);
LABEL_27:
      if ( *v18 != 0 )
        return Ogre::ShaderContext::addTextureParam(a1, a2, *v18, 0);
      return result;
    case 37:
      v11 = (float *)(a3 + 76);
      goto LABEL_46;
    case 47:
      v11 = (float *)(a3 + 1176);
LABEL_36:
      v21 = 1;
      v9 = a1;
      v10 = a2;
LABEL_37:
      v20 = 7;
      goto LABEL_49;
    case 48:
      v12 = 1240;
      goto LABEL_40;
    case 49:
      v12 = 1252;
LABEL_40:
      v11 = (float *)(a3 + v12);
      goto LABEL_41;
    case 50:
      v13 = 158;
      goto LABEL_45;
    case 51:
      v13 = 160;
LABEL_45:
      v11 = (float *)(a3 + 8 * v13);
      goto LABEL_46;
    case 52:
      v11 = (float *)(a1 + 88);
LABEL_46:
      v14 = 1;
LABEL_47:
      v21 = v14;
      v9 = a1;
      v10 = a2;
LABEL_48:
      v20 = 3;
      goto LABEL_49;
    case 53:
      v11 = (float *)(a1 + 104);
LABEL_41:
      v21 = 1;
      v9 = a1;
      v10 = a2;
LABEL_42:
      v20 = 2;
LABEL_49:
      result = Ogre::ShaderContext::addValueParam(v9, v10, v11, v20, v21);
      break;
    default:
      result = v8;
      break;
  }
  return result;
}


//======================================================================
// Ogre::ShaderContext::setInstanceEnvData(Ogre::SceneRenderer *,Ogre::RenderableObject *,Ogre::ShaderEnvData const&,Ogre::Matrix4 const*)
// address: 0x0015E4E8   size: 0x70 (112 bytes)
//======================================================================
int __fastcall Ogre::ShaderContext::setInstanceEnvData(
        Ogre::ShaderContext *this,
        Ogre::SceneRenderer *a2,
        Ogre::RenderableObject *a3,
        const Ogre::ShaderEnvData *a4,
        const Ogre::Matrix4 *a5)
{
  float *v8; // r4
  int v9; // r5
  int result; // r0
  int v11; // r7
  _DWORD v13[129]; // [sp+18h] [bp-204h] BYREF

  v8 = (float *)a5;
  if ( a3 != nullptr )
  {
    if ( *((_BYTE *)a3 + 180) != 0 )
      (*(void (__fastcall **)(Ogre::RenderableObject *))(*(_DWORD *)a3 + 68))(a3);
    v8 = (float *)((char *)a3 + 48);
  }
  else if ( a5 == nullptr )
  {
    v8 = (float *)&Ogre::Matrix4::Iden;
  }
  v9 = 0;
  result = Ogre::MaterialTemplate::getRequiredParams(
             *((_DWORD *)this + 2),
             (int)v13,
             128,
             (int)this + 52,
             (char *)this + 60,
             0,
             *((_DWORD *)a2 + 3));
  v11 = result;
  while ( v9 != v11 )
    result = Ogre::ShaderContext::handleShaderParam((int)this, v13[v9++], (int)a4, v8);
  return result;
}

