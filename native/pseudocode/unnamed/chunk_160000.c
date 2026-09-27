// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_160000

//======================================================================
// sub_163C6C
// address: 0x00163C6C   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_163C6C(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_163C76
// address: 0x00163C76   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_163C76(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_163C80
// address: 0x00163C80   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_163C80(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}


//======================================================================
// sub_163C8C
// address: 0x00163C8C   size: 0x18 (24 bytes)
//======================================================================
unsigned int __fastcall sub_163C8C(unsigned int result)
{
  if ( result != 0 )
  {
    if ( result > 0x3FFFFFFF )
      sub_3BCEB4(result);
    return operator new(4 * result);
  }
  return result;
}


//======================================================================
// sub_163CA8
// address: 0x00163CA8   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_163CA8(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}


//======================================================================
// sub_163CB4
// address: 0x00163CB4   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_163CB4(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}


//======================================================================
// sub_16537C
// address: 0x0016537C   size: 0x14 (20 bytes)
//======================================================================
const char *__fastcall sub_16537C(const char *result)
{
  if ( result != nullptr )
    return (const char *)(j_strcmp(result, "clamp") == 0);
  return result;
}


//======================================================================
// sub_1653A0
// address: 0x001653A0   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_1653A0(const char *a1, int a2)
{
  int v3; // r0

  if ( a1 != nullptr )
  {
    v3 = j_strcmp(a1, "point");
    a2 = 1;
    if ( v3 != 0 )
      return 2 * (j_strcmp(a1, "none") != 0);
  }
  return a2;
}


//======================================================================
// sub_167920
// address: 0x00167920   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_167920(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_16792A
// address: 0x0016792A   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_16792A(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_16901A
// address: 0x0016901A   size: 0xDA (218 bytes)
//======================================================================
int __fastcall sub_16901A(int a1, int a2, int a3, int a4)
{
  float v5; // [sp+4h] [bp-F8h]
  float v6; // [sp+8h] [bp-F4h]
  float v8; // [sp+10h] [bp-ECh]
  float v9; // [sp+14h] [bp-E8h]
  float v10[3]; // [sp+1Ch] [bp-E0h] BYREF
  _DWORD v11[4]; // [sp+28h] [bp-D4h] BYREF
  float v12[16]; // [sp+38h] [bp-C4h] BYREF
  float v13[16]; // [sp+78h] [bp-84h] BYREF
  float v14; // [sp+B8h] [bp-44h] BYREF
  float v15; // [sp+BCh] [bp-40h]
  int v16; // [sp+C0h] [bp-3Ch]

  memset(v11, 0, 12);
  v11[3] = 1065353216;
  v5 = 1.0 / (float)a4;
  v6 = 1.0 / (float)a3;
  v8 = (float)(a2 % a4) * v5;
  v9 = (float)(a2 / a4) * v6;
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v12);
  v13[0] = 0.5;
  v13[1] = 0.5;
  v14 = 0.5;
  v15 = 0.5;
  v13[2] = 1.0;
  v16 = 0;
  Ogre::Matrix4::makeSRTMatrix(
    (Ogre::Matrix4 *)v12,
    (const Ogre::Vector3 *)v13,
    (const Ogre::Quaternion *)v11,
    (const Ogre::Vector3 *)&v14);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v13);
  v10[0] = v5;
  v10[1] = v6;
  v10[2] = 1.0;
  v14 = v8;
  v15 = v9;
  v16 = 0;
  Ogre::Matrix4::makeSRTMatrix(
    (Ogre::Matrix4 *)v13,
    (const Ogre::Vector3 *)v10,
    (const Ogre::Quaternion *)v11,
    (const Ogre::Vector3 *)&v14);
  Ogre::operator*((Ogre::Matrix4 *)&v14, v12, v13);
  return Ogre::Matrix4::operator=(a1, &v14);
}


//======================================================================
// sub_1691B4
// address: 0x001691B4   size: 0x356 (854 bytes)
//======================================================================
float __fastcall sub_1691B4(int a1, Ogre::DynamicBufferPool **a2, int a3)
{
  float *WorldMatrix; // r0
  float v4; // r1
  float v5; // r2
  Ogre::Material *v6; // r5
  int v7; // r2
  void *v8; // r1
  Ogre::Material *v9; // r5
  int v10; // r2
  void *v11; // r1
  float Transparent; // r0
  float *TransparentColor; // r4
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  Ogre::DynamicIndexBuffer *v22; // r7
  int v23; // r4
  void *v24; // r0
  int v25; // r3
  int v26; // r2
  int v27; // r5
  _DWORD *v28; // r1
  int v29; // r1
  float *v30; // r4
  float *v31; // r0
  float result; // r0
  char v33; // [sp+1Ch] [bp-1E0h]
  char v34; // [sp+20h] [bp-1DCh]
  Ogre::DynamicVertexBuffer *v35; // [sp+24h] [bp-1D8h]
  int v37; // [sp+2Ch] [bp-1D0h]
  char v38; // [sp+2Ch] [bp-1D0h]
  Ogre::Vector3 *v39; // [sp+30h] [bp-1CCh]
  float v40; // [sp+34h] [bp-1C8h]
  char v41; // [sp+34h] [bp-1C8h]
  float v43; // [sp+3Ch] [bp-1C0h]
  float v44; // [sp+3Ch] [bp-1C0h]
  float v45; // [sp+40h] [bp-1BCh]
  float v46; // [sp+40h] [bp-1BCh]
  int v48; // [sp+4Ch] [bp-1B0h]
  int v49; // [sp+50h] [bp-1ACh]
  int v50; // [sp+54h] [bp-1A8h]
  float v51; // [sp+58h] [bp-1A4h]
  float v52; // [sp+5Ch] [bp-1A0h]
  _BYTE v53[12]; // [sp+60h] [bp-19Ch] BYREF
  float v54[3]; // [sp+6Ch] [bp-190h] BYREF
  float v55[16]; // [sp+78h] [bp-184h] BYREF
  float v56[16]; // [sp+B8h] [bp-144h] BYREF
  float v57[16]; // [sp+F8h] [bp-104h] BYREF
  float v58[16]; // [sp+138h] [bp-C4h] BYREF
  float v59[16]; // [sp+178h] [bp-84h] BYREF
  _DWORD v60[14]; // [sp+1B8h] [bp-44h] BYREF
  float v61; // [sp+1F0h] [bp-Ch]

  v37 = *(_DWORD *)(a1 + 256);
  v48 = *(_DWORD *)(v37 + 16);
  v49 = *(_DWORD *)(v37 + 20);
  if ( *(float *)(v37 + 24) <= 0.00001 )
    v50 = 0;
  else
    v50 = (int)(float)((float)((float)*(unsigned int *)(a1 + 252) / 1000.0) / *(float *)(v37 + 24)) % (v49 * v48);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v55);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v56);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v57);
  WorldMatrix = (float *)Ogre::MovableObject::getWorldMatrix((Ogre::MovableObject *)a1);
  v45 = WorldMatrix[12];
  v43 = *(float *)(a1 + 268);
  v52 = WorldMatrix[14];
  v51 = WorldMatrix[13];
  v60[2] = 1065353216;
  v60[1] = 0;
  v60[0] = 0;
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)WorldMatrix, (Ogre::Vector3 *)v53, (const Ogre::Vector3 *)v60);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v58);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v59);
  *(float *)v60 = v45;
  *(float *)&v60[1] = v51 + 100.0;
  *(float *)&v60[2] = v52;
  v54[0] = v45 + 0.0;
  v54[1] = v51 - 100.0;
  v54[2] = v52 + 0.0;
  Ogre::Matrix4::makeViewMatrix(
    (Ogre::Matrix4 *)v58,
    (const Ogre::Vector3 *)v60,
    (const Ogre::Vector3 *)v54,
    (const Ogre::Vector3 *)v53);
  Ogre::Matrix4::makeOrthoMatrix((Ogre::Matrix4 *)v59, v43 + v43, v43 + v43, 1.0, 1000.0);
  Ogre::operator*((Ogre::Matrix4 *)v60, v58, v59);
  Ogre::Matrix4::operator=(v55, v60);
  v4 = *(float *)(v37 + 1012);
  v39 = *(Ogre::Vector3 **)(v37 + 996);
  v5 = *(float *)(v37 + 1004);
  v40 = *(float *)(v37 + 1000);
  v46 = *(float *)(v37 + 1008);
  v60[3] = 1065353216;
  v44 = v5;
  memset(v60, 0, 12);
  Ogre::Quaternion::setAxisAngleZ((Ogre::Quaternion *)v60, v4);
  LODWORD(v59[0]) = v39;
  v59[1] = v40;
  v59[2] = 1.0;
  v58[0] = v44;
  v58[1] = v46;
  v58[2] = 0.0;
  Ogre::Matrix4::makeSRTMatrix(
    (Ogre::Matrix4 *)v56,
    (const Ogre::Vector3 *)v59,
    (const Ogre::Quaternion *)v60,
    (const Ogre::Vector3 *)v58);
  sub_16901A((int)v57, v50, v48, v49);
  Ogre::operator*((Ogre::Matrix4 *)v60, v55, v56);
  Ogre::operator*((Ogre::Matrix4 *)v59, (float *)v60, v57);
  v6 = *(Ogre::Material **)(a1 + 264);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v60, (Ogre::FixedString *)"g_DecalMatrix", v7);
  Ogre::Material::setParamValue(v6, (const Ogre::FixedString *)v60, v59);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v60, v8);
  sub_16901A((int)v57, 0, 1, 1);
  Ogre::operator*((Ogre::Matrix4 *)v60, v55, v57);
  Ogre::Matrix4::operator=(v59, v60);
  v9 = *(Ogre::Material **)(a1 + 264);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v60, (Ogre::FixedString *)"g_DecalMaskMatrix", v10);
  Ogre::Material::setParamValue(v9, (const Ogre::FixedString *)v60, v59);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v60, v11);
  Transparent = Ogre::MovableObject::getTransparent((Ogre::MovableObject **)a1);
  TransparentColor = (float *)Ogre::GetTransparentColor(
                                (Ogre *)(v37 + 980),
                                (const Ogre::ColourValue *)LODWORD(Transparent),
                                *(float *)(*(_DWORD *)(a1 + 256) + 48),
                                *(_DWORD *)(a1 + 256));
  v14 = (int)(float)(*TransparentColor * 255.0);
  if ( v14 <= 255 )
    v15 = v14 & (~v14 >> 31);
  else
    LOBYTE(v15) = -1;
  v41 = v15;
  v16 = (int)(float)(TransparentColor[1] * 255.0);
  if ( v16 <= 255 )
    v17 = v16 & (~v16 >> 31);
  else
    LOBYTE(v17) = -1;
  v33 = v17;
  v18 = (int)(float)(TransparentColor[2] * 255.0);
  if ( v18 <= 255 )
    v19 = v18 & (~v18 >> 31);
  else
    LOBYTE(v19) = -1;
  v38 = v19;
  v20 = (int)(float)(TransparentColor[3] * 255.0);
  if ( v20 <= 255 )
    v21 = v20 & (~v20 >> 31);
  else
    LOBYTE(v21) = -1;
  v34 = v21;
  v35 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                       a2,
                                       (const Ogre::VertexFormat *)(a1 + 276),
                                       *(_DWORD *)(a1 + 300));
  v22 = (Ogre::DynamicIndexBuffer *)Ogre::SceneRenderer::newDynamicIB(a2, 3 * *(_DWORD *)(a1 + 304));
  v23 = Ogre::DynamicVertexBuffer::lock(v35);
  v24 = (void *)Ogre::DynamicIndexBuffer::lock(v22);
  v25 = v23;
  v26 = 0;
  while ( v26 < *(_DWORD *)(a1 + 300) )
  {
    v27 = 12 * v26++;
    v28 = (_DWORD *)(*(_DWORD *)(a1 + 316) + v27);
    *(_DWORD *)v25 = *v28;
    *(_DWORD *)(v25 + 4) = v28[1];
    v29 = v28[2];
    *(_BYTE *)(v25 + 12) = v38;
    *(_BYTE *)(v25 + 13) = v33;
    *(_DWORD *)(v25 + 8) = v29;
    *(_BYTE *)(v25 + 14) = v41;
    *(_BYTE *)(v25 + 15) = v34;
    v25 += 16;
  }
  j_memcpy(v24, *(const void **)(a1 + 320), 6 * *(_DWORD *)(a1 + 304));
  *((_DWORD *)v22 + 5) = *(_DWORD *)(a1 + 300);
  *((_DWORD *)v22 + 4) = 0;
  v30 = (float *)Ogre::SceneRenderer::newContext(
                   (int)a2,
                   2,
                   (_DWORD *)a3,
                   *(Ogre::Material **)(a1 + 264),
                   *(_DWORD *)(a1 + 260),
                   v35,
                   v22,
                   4,
                   *(_DWORD *)(a1 + 304),
                   1);
  Ogre::ShaderContext::setInstanceEnvData(
    (Ogre::ShaderContext *)v30,
    (Ogre::SceneRenderer *)a2,
    nullptr,
    (const Ogre::ShaderEnvData *)a3,
    nullptr);
  v31 = (float *)Ogre::MovableObject::getWorldMatrix((Ogre::MovableObject *)a1);
  Ogre::operator*((Ogre::Matrix4 *)v60, v31, (float *)(a3 + 956));
  result = v61 + 100000.0;
  v30[5] = v61 + 100000.0;
  return result;
}


//======================================================================
// sub_16A4A0
// address: 0x0016A4A0   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_16A4A0(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_16A4AA
// address: 0x0016A4AA   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_16A4AA(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_16B50C
// address: 0x0016B50C   size: 0x94 (148 bytes)
//======================================================================
int __fastcall sub_16B50C(int a1, const char *a2)
{
  unsigned int v3; // r3
  int v4; // r4
  unsigned int v6; // r3
  _DWORD v7[35]; // [sp+18h] [bp-8Ch] BYREF

  v4 = Ogre::FileManager::openFile((Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, a2, true);
  if ( v4 != 0 )
  {
    j_memset(v7, 0, 0x88u);
    v7[0] = 136;
    v7[1] = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 48))(v4);
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 56))(v4);
    if ( FMOD::System::createSound() != 0 )
    {
      Ogre::LogSetCurParam(
        (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreSoundSystemFMod.cpp",
        (_BYTE *)&stru_218.st_value + 3,
        4,
        v6);
      Ogre::LogMessage((Ogre *)"createSound error: %s", a2);
    }
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
    return 0;
  }
  else
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreSoundSystemFMod.cpp",
      (_BYTE *)&stru_208.st_size + 2,
      4,
      v3);
    Ogre::LogMessage((Ogre *)"Open sound file failed: %s", a2);
    return 0;
  }
}

