// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ParticleEmitterData

//======================================================================
// Ogre::ParticleEmitterData::getRTTI(void)const
// address: 0x0014696C   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::ParticleEmitterData::getRTTI(Ogre::ParticleEmitterData *this)
{
  return &Ogre::ParticleEmitterData::m_RTTI;
}


//======================================================================
// Ogre::ParticleEmitterData::~ParticleEmitterData()
// address: 0x001469DC   size: 0x140 (320 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre19ParticleEmitterDataD1Ev'
void __fastcall Ogre::ParticleEmitterData::~ParticleEmitterData(Ogre::ParticleEmitterData *this)
{
  int v2; // r5
  int v3; // r3
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  void *v6; // r0
  void *v7; // r0
  void *v8; // r1

  v2 = 0;
  *(_DWORD *)this = &off_455C90;
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 306);
    if ( v2 >= (*((_DWORD *)this + 307) - v3) >> 2 )
      break;
    Ogre::BaseObject::release(*(_DWORD **)(4 * v2++ + v3));
  }
  *((_DWORD *)this + 307) = v3;
  v4 = *((_DWORD **)this + 304);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)this + 304) = 0;
  }
  v5 = *((_DWORD **)this + 305);
  if ( v5 != nullptr )
  {
    Ogre::BaseObject::release(v5);
    *((_DWORD *)this + 305) = 0;
  }
  v6 = *((void **)this + 306);
  if ( v6 != nullptr )
    operator delete(v6);
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParticleEmitterData *)((char *)this + 1168));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParticleEmitterData *)((char *)this + 1120));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParticleEmitterData *)((char *)this + 1072));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParticleEmitterData *)((char *)this + 1024));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParticleEmitterData *)((char *)this + 976));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParticleEmitterData *)((char *)this + 928));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParticleEmitterData *)((char *)this + 880));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParticleEmitterData *)((char *)this + 832));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParticleEmitterData *)((char *)this + 784));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParticleEmitterData *)((char *)this + 736));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParticleEmitterData *)((char *)this + 688));
  Ogre::KeyFrameArray<Ogre::Vector3>::~KeyFrameArray((Ogre::ParticleEmitterData *)((char *)this + 640));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParticleEmitterData *)((char *)this + 592));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParticleEmitterData *)((char *)this + 544));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParticleEmitterData *)((char *)this + 496));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParticleEmitterData *)((char *)this + 448));
  v7 = *((void **)this + 109);
  if ( v7 != nullptr )
    operator delete(v7);
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParticleEmitterData *)((char *)this + 388));
  Ogre::KeyFrameArray<Ogre::ColourValue>::~KeyFrameArray((Ogre::ParticleEmitterData *)((char *)this + 340));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParticleEmitterData *)((char *)this + 292));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParticleEmitterData *)((char *)this + 244));
  Ogre::Resource::~Resource((Ogre::FixedString **)this, v8);
}


//======================================================================
// Ogre::ParticleEmitterData::~ParticleEmitterData()
// address: 0x00146B28   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::ParticleEmitterData::~ParticleEmitterData(Ogre::ParticleEmitterData *this)
{
  Ogre::ParticleEmitterData::~ParticleEmitterData(this);
  operator delete(this);
}


//======================================================================
// Ogre::ParticleEmitterData::prepareSimpleGenParticle(Ogre::ParticleEmitterFrameData &,Ogre::Matrix4 const&)
// address: 0x00146F14   size: 0x2E (46 bytes)
//======================================================================
int __fastcall Ogre::ParticleEmitterData::prepareSimpleGenParticle(int result, _DWORD *a2, int a3)
{
  if ( (*(_DWORD *)(result + 32) & 1) == 0 )
  {
    Ogre::Matrix4::operator=(a2, a3);
    result = Ogre::Matrix4::operator=(a2 + 16, a3);
    a2[28] = 0;
    a2[29] = 0;
    a2[30] = 0;
    a2[31] = 1065353216;
  }
  return result;
}


//======================================================================
// Ogre::ParticleEmitterData::transformDirRandom(Ogre::Particle &,Ogre::ParticleEmitterFrameData const&)
// address: 0x00146F44   size: 0x6C (108 bytes)
//======================================================================
int __fastcall Ogre::ParticleEmitterData::transformDirRandom(int a1, int a2, int a3)
{
  float *v3; // r2
  float v4; // r7
  int result; // r0
  float v6; // [sp+0h] [bp-10Ch]
  float v8[16]; // [sp+8h] [bp-104h] BYREF
  float v9[16]; // [sp+48h] [bp-C4h] BYREF
  _BYTE v10[64]; // [sp+88h] [bp-84h] BYREF
  _BYTE v11[68]; // [sp+C8h] [bp-44h] BYREF

  v3 = (float *)(a3 + 224);
  v4 = *v3;
  v6 = Ogre::RandFlt(nullptr, 360.0, *(float *)&v3);
  result = v4 <= 0.00001;
  if ( v4 > 0.00001 )
  {
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v8);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v9);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v10);
    Ogre::Matrix4::makeRotateZ((Ogre::Matrix4 *)v8, v4);
    Ogre::Matrix4::makeRotateY((Ogre::Matrix4 *)v9, v6);
    Ogre::operator*((Ogre::Matrix4 *)v11, v8, v9);
    Ogre::Matrix4::operator=(v10, v11);
    return Ogre::Matrix4::transformNormal(
             (Ogre::Matrix4 *)v10,
             (Ogre::Vector3 *)(a2 + 40),
             (const Ogre::Vector3 *)(a2 + 40));
  }
  return result;
}


//======================================================================
// Ogre::ParticleEmitterData::genParticlePlane(Ogre::Particle &,Ogre::ParticleEmitterFrameData const&)
// address: 0x00146FB8   size: 0x312 (786 bytes)
//======================================================================
int __fastcall Ogre::ParticleEmitterData::genParticlePlane(int a1, int a2, int a3)
{
  float v5; // r4
  float v6; // r0
  float v7; // r0
  float v8; // r1
  float v9; // r4
  float v10; // r2
  float v11; // r5
  float v12; // r1
  float v13; // r4
  float v14; // r0
  float v15; // r4
  float v16; // r1
  float v17; // r2
  float v18; // r2
  float v19; // r5
  float v20; // r2
  float v21; // r2
  float v22; // r5
  int v23; // r2
  int v25; // r0
  Ogre::Resource *v26; // r1
  int *ObjectFromResource; // r5
  float v28; // [sp+0h] [bp-5Ch]
  float v29; // [sp+4h] [bp-58h]
  float v30; // [sp+4h] [bp-58h]
  float *v32; // [sp+Ch] [bp-50h]
  float v33; // [sp+Ch] [bp-50h]
  float v34; // [sp+14h] [bp-48h]
  float v35[2]; // [sp+1Ch] [bp-40h] BYREF
  float v36; // [sp+24h] [bp-38h]
  float v37; // [sp+28h] [bp-34h] BYREF
  float v38; // [sp+2Ch] [bp-30h]
  float v39; // [sp+30h] [bp-2Ch]
  _BYTE v40[12]; // [sp+34h] [bp-28h] BYREF
  float v41[3]; // [sp+40h] [bp-1Ch] BYREF
  float v42[4]; // [sp+4Ch] [bp-10h] BYREF

  v32 = (float *)(a3 + 172);
  v29 = Ogre::RandFlt((Ogre *)(*(_DWORD *)v32 + 0x80000000), *v32, -0.0);
  v5 = Ogre::RandFlt((Ogre *)(*(_DWORD *)(a3 + 176) + 0x80000000), *(float *)(a3 + 176), -0.0);
  v35[0] = v29;
  v36 = v5;
  v6 = *(float *)(a1 + 44);
  v35[1] = 0.0;
  v34 = v6 + 0.0;
  v7 = *(float *)(a1 + 40) + v29;
  *(float *)(a2 + 8) = v5 + *(float *)(a1 + 48);
  *(float *)a2 = v7;
  *(float *)(a2 + 4) = v34;
  Ogre::operator*(v42, (float *)a2, (float *)a3);
  v8 = v42[1];
  v9 = v42[2];
  *(float *)a2 = v42[0];
  *(float *)(a2 + 4) = v8;
  *(float *)(a2 + 8) = v9;
  v10 = *v32;
  v30 = *v32;
  v33 = *(float *)(a3 + 176);
  v11 = v10 / v33;
  if ( (float)(v10 / v33) < 0.0 )
    LODWORD(v11) = COERCE_INT(v10 / v33) + 0x80000000;
  v12 = v36 / v35[0];
  if ( (float)(v36 / v35[0]) < 0.0 )
    LODWORD(v12) = COERCE_INT(v36 / v35[0]) + 0x80000000;
  if ( v11 <= v12 )
  {
    v13 = v36 / v33;
    if ( (float)(v36 / v33) < 0.0 )
      LODWORD(v13) += 0x80000000;
  }
  else
  {
    v13 = v35[0] / v30;
    if ( (float)(v35[0] / v30) < 0.0 )
      LODWORD(v13) += 0x80000000;
  }
  v14 = j_tan((float)((float)(v13 * *(float *)(a3 + 136)) * 0.017453));
  v15 = v14;
  Ogre::GetNormalize((Ogre *)v41, (const Ogre::Vector3 *)v35);
  v37 = (float)(v15 * v41[0]) + 0.0;
  if ( v15 < 0.0 )
    v38 = (float)(v15 * v41[1]) - 1.0;
  else
    v38 = (float)(v15 * v41[1]) + 1.0;
  v39 = (float)(v15 * v41[2]) + 0.0;
  Ogre::Normalize(&v37);
  Ogre::operator*(v42, &v37, (float *)(a3 + 64));
  qmemcpy(v40, v42, sizeof(v40));
  Ogre::GetNormalize((Ogre *)v42, (const Ogre::Vector3 *)v40);
  v16 = v42[1];
  v17 = v42[2];
  *(float *)(a2 + 40) = v42[0];
  *(float *)(a2 + 44) = v16;
  *(float *)(a2 + 48) = v17;
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(a3 + 148);
  v18 = *(float *)(a3 + 152);
  *(float *)(a2 + 32) = v18;
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a3 + 156);
  v19 = *(float *)(a3 + 128);
  *(float *)(a2 + 52) = (float)(v19
                              * (float)(Ogre::RandFlt(
                                          (Ogre *)(*(_DWORD *)(a3 + 132) + 0x80000000),
                                          *(float *)(a3 + 132),
                                          v18)
                                      + 1.0))
                      * *(float *)(a3 + 212);
  *(_DWORD *)(a2 + 56) = 0;
  v28 = *(float *)(a3 + 164);
  v22 = v28 * Ogre::RandFlt(COERCE_OGRE_(*(float *)(a3 + 220) + 1.0), 1.0 - *(float *)(a3 + 220), v20);
  if ( v22 <= 0.0 )
  {
    v21 = 0.0;
    *(_DWORD *)(a2 + 60) = 0;
  }
  else
  {
    *(float *)(a2 + 60) = v22;
  }
  *(float *)(a2 + 68) = Ogre::RandFlt(COERCE_OGRE_(*(float *)(a3 + 216) + 1.0), 1.0 - *(float *)(a3 + 216), v21);
  if ( *(_BYTE *)(a1 + 184) != 0 )
    *(_DWORD *)(a2 + 64) = Ogre::RandomGenerator::get(
                             (Ogre::RandomGenerator *)&Ogre::ParticleEmitterData::m_Rand,
                             0,
                             *(_DWORD *)(a1 + 72) * *(_DWORD *)(a1 + 68) - 1);
  else
    *(_DWORD *)(a2 + 64) = *(unsigned __int8 *)(a1 + 184);
  *(_DWORD *)(a2 + 72) = 0;
  if ( *(_DWORD *)(a1 + 28) == 3 )
  {
    v23 = (*(_DWORD *)(a1 + 1228) - *(_DWORD *)(a1 + 1224)) >> 2;
    if ( v23 != 0 )
    {
      v25 = Ogre::RandomGenerator::get((Ogre::RandomGenerator *)&Ogre::ParticleEmitterData::m_Rand, 0, v23 - 1);
      ObjectFromResource = (int *)Ogre::createObjectFromResource(*(Ogre **)(4 * v25 + *(_DWORD *)(a1 + 1224)), v26);
      *(_DWORD *)(a2 + 72) = ObjectFromResource;
      Ogre::WorldPos::WorldPos(v42, (const Ogre::Vector3 *)a2);
      Ogre::MovableObject::setPosition(ObjectFromResource, (int *)v42);
    }
  }
  return Ogre::ParticleEmitterData::transformDirRandom(a1, a2, a3);
}


//======================================================================
// Ogre::ParticleEmitterData::genParticleSphereFace(Ogre::Particle &,Ogre::ParticleEmitterFrameData const&)
// address: 0x001472D8   size: 0x234 (564 bytes)
//======================================================================
int __fastcall Ogre::ParticleEmitterData::genParticleSphereFace(int a1, int a2, int a3)
{
  float v6; // r2
  float v7; // r2
  float v8; // r2
  float v9; // r0
  float v10; // r3
  float v11; // r2
  float v12; // r2
  float v13; // r6
  float v14; // r6
  int v15; // r2
  int v16; // r0
  Ogre::Resource *v17; // r1
  int *ObjectFromResource; // r6
  float v20; // [sp+4h] [bp-130h]
  float v21; // [sp+Ch] [bp-128h]
  float v22; // [sp+14h] [bp-120h]
  float v23; // [sp+18h] [bp-11Ch] BYREF
  float v24; // [sp+1Ch] [bp-118h]
  float v25; // [sp+20h] [bp-114h]
  float v26[3]; // [sp+24h] [bp-110h] BYREF
  float v27[16]; // [sp+30h] [bp-104h] BYREF
  float v28[16]; // [sp+70h] [bp-C4h] BYREF
  _BYTE v29[64]; // [sp+B0h] [bp-84h] BYREF
  int v30[17]; // [sp+F0h] [bp-44h] BYREF

  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v27);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v28);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v29);
  v21 = Ogre::RandFlt(nullptr, 180.0, v6);
  v22 = Ogre::RandFlt(nullptr, 380.0, v7);
  Ogre::Matrix4::makeRotateZ((Ogre::Matrix4 *)v27, v21);
  Ogre::Matrix4::makeRotateY((Ogre::Matrix4 *)v28, v22);
  Ogre::operator*((Ogre::Matrix4 *)v30, v27, v28);
  Ogre::Matrix4::operator=(v29, v30);
  v9 = Ogre::RandFlt(COERCE_OGRE_(1.0 - *(float *)(a3 + 180)), 1.0, v8);
  v23 = 0.0;
  v24 = v9;
  v25 = 0.0;
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v29, (Ogre::Vector3 *)&v23, (const Ogre::Vector3 *)&v23);
  v26[0] = v23;
  v26[1] = v24;
  v26[2] = v25;
  Ogre::Normalize(v26);
  v10 = *(float *)(a3 + 172);
  v23 = v23 * *(float *)(a3 + 176);
  v25 = v25 * v10;
  v24 = v24 * v10;
  Ogre::Matrix4::transformCoord((Ogre::Matrix4 *)a3, (Ogre::Vector3 *)a2, (const Ogre::Vector3 *)&v23);
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)a3, (Ogre::Vector3 *)(a2 + 40), (const Ogre::Vector3 *)v26);
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(a3 + 148);
  v11 = *(float *)(a3 + 152);
  *(float *)(a2 + 32) = v11;
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a3 + 156);
  *(_DWORD *)(a2 + 56) = 0;
  v20 = *(float *)(a3 + 164);
  v13 = v20 * Ogre::RandFlt(COERCE_OGRE_(*(float *)(a3 + 220) + 1.0), 1.0 - *(float *)(a3 + 220), v11);
  if ( v13 <= 0.0 )
    *(_DWORD *)(a2 + 60) = 0;
  else
    *(float *)(a2 + 60) = v13;
  *(float *)(a2 + 68) = Ogre::RandFlt(COERCE_OGRE_(*(float *)(a3 + 216) + 1.0), 1.0 - *(float *)(a3 + 216), v12);
  if ( *(_BYTE *)(a1 + 184) != 0 )
    *(_DWORD *)(a2 + 64) = Ogre::RandomGenerator::get(
                             (Ogre::RandomGenerator *)&Ogre::ParticleEmitterData::m_Rand,
                             0,
                             *(_DWORD *)(a1 + 72) * *(_DWORD *)(a1 + 68) - 1);
  else
    *(_DWORD *)(a2 + 64) = *(unsigned __int8 *)(a1 + 184);
  *(_DWORD *)(a2 + 72) = 0;
  v14 = *(float *)(a3 + 128);
  *(float *)(a2 + 52) = (float)(v14
                              * (float)(Ogre::RandFlt(
                                          (Ogre *)(*(_DWORD *)(a3 + 132) + 0x80000000),
                                          *(float *)(a3 + 132),
                                          0.0)
                                      + 1.0))
                      * *(float *)(a3 + 212);
  if ( *(_DWORD *)(a1 + 28) == 3 )
  {
    v15 = (*(_DWORD *)(a1 + 1228) - *(_DWORD *)(a1 + 1224)) >> 2;
    if ( v15 != 0 )
    {
      v16 = Ogre::RandomGenerator::get((Ogre::RandomGenerator *)&Ogre::ParticleEmitterData::m_Rand, 0, v15 - 1);
      ObjectFromResource = (int *)Ogre::createObjectFromResource(*(Ogre **)(4 * v16 + *(_DWORD *)(a1 + 1224)), v17);
      *(_DWORD *)(a2 + 72) = ObjectFromResource;
      Ogre::WorldPos::WorldPos(v30, (const Ogre::Vector3 *)a2);
      Ogre::MovableObject::setPosition(ObjectFromResource, v30);
      if ( Ogre::BaseObject::isKindOf(
             *(Ogre::BaseObject **)(a2 + 72),
             (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI) != 0 )
        *(_DWORD *)(*(_DWORD *)(a2 + 72) + 188) = *(_DWORD *)(a1 + 96);
    }
  }
  return Ogre::ParticleEmitterData::transformDirRandom(a1, a2, a3);
}


//======================================================================
// Ogre::ParticleEmitterData::genParticleCircle(Ogre::Particle &,Ogre::ParticleEmitterFrameData const&)
// address: 0x00147520   size: 0x332 (818 bytes)
//======================================================================
int __fastcall Ogre::ParticleEmitterData::genParticleCircle(int a1, int a2, int a3)
{
  float v5; // r4
  float v6; // r0
  float v7; // r0
  float v8; // r5
  float v9; // r1
  float v10; // r4
  float v11; // r5
  float v12; // r1
  float v13; // r4
  float v14; // r0
  float v15; // r4
  float v16; // r1
  float v17; // r2
  float v18; // r2
  float v19; // r5
  float v20; // r2
  float v21; // r2
  float v22; // r5
  int v23; // r2
  int v25; // r0
  Ogre::Resource *v26; // r1
  int *ObjectFromResource; // r5
  float *v28; // [sp+4h] [bp-58h]
  float v29; // [sp+4h] [bp-58h]
  float v30; // [sp+4h] [bp-58h]
  float v32; // [sp+10h] [bp-4Ch]
  float v33[2]; // [sp+1Ch] [bp-40h] BYREF
  float v34; // [sp+24h] [bp-38h]
  float v35; // [sp+28h] [bp-34h] BYREF
  float v36; // [sp+2Ch] [bp-30h]
  float v37; // [sp+30h] [bp-2Ch]
  _BYTE v38[12]; // [sp+34h] [bp-28h] BYREF
  float v39[3]; // [sp+40h] [bp-1Ch] BYREF
  float v40[4]; // [sp+4Ch] [bp-10h] BYREF

  v28 = (float *)(a3 + 172);
  v5 = Ogre::RandFlt((Ogre *)(*(_DWORD *)v28 + 0x80000000), *v28, -0.0);
  v6 = j_sqrt((float)((float)(*v28 * *v28) - (float)(v5 * v5)));
  v34 = Ogre::RandFlt((Ogre *)(LODWORD(v6) + 0x80000000), v6, -0.0);
  v7 = *(float *)(a1 + 44);
  v33[0] = v5;
  v33[1] = 0.0;
  v8 = v34 + *(float *)(a1 + 48);
  *(float *)a2 = *(float *)(a1 + 40) + v5;
  *(float *)(a2 + 4) = v7 + 0.0;
  *(float *)(a2 + 8) = v8;
  Ogre::operator*(v40, (float *)a2, (float *)a3);
  v9 = v40[1];
  v10 = v40[2];
  *(float *)a2 = v40[0];
  *(float *)(a2 + 4) = v9;
  *(float *)(a2 + 8) = v10;
  v29 = *v28;
  v32 = *(float *)(a3 + 176);
  v11 = v29 / v32;
  if ( (float)(v29 / v32) < 0.0 )
    LODWORD(v11) = COERCE_INT(v29 / v32) + 0x80000000;
  v12 = v34 / v33[0];
  if ( (float)(v34 / v33[0]) < 0.0 )
    LODWORD(v12) = COERCE_INT(v34 / v33[0]) + 0x80000000;
  if ( v11 <= v12 )
  {
    v13 = v34 / v32;
    if ( (float)(v34 / v32) < 0.0 )
      LODWORD(v13) += 0x80000000;
  }
  else
  {
    v13 = v33[0] / v29;
    if ( (float)(v33[0] / v29) < 0.0 )
      LODWORD(v13) += 0x80000000;
  }
  v14 = j_tan((float)((float)(v13 * *(float *)(a3 + 136)) * 0.017453));
  v15 = v14;
  Ogre::GetNormalize((Ogre *)v39, (const Ogre::Vector3 *)v33);
  v35 = (float)(v15 * v39[0]) + 0.0;
  if ( v15 < 0.0 )
    v36 = (float)(v15 * v39[1]) - 1.0;
  else
    v36 = (float)(v15 * v39[1]) + 1.0;
  v37 = (float)(v15 * v39[2]) + 0.0;
  Ogre::Normalize(&v35);
  Ogre::operator*(v40, &v35, (float *)(a3 + 64));
  qmemcpy(v38, v40, sizeof(v38));
  Ogre::GetNormalize((Ogre *)v40, (const Ogre::Vector3 *)v38);
  v16 = v40[0];
  v17 = v40[1];
  *(float *)(a2 + 48) = v40[2];
  *(float *)(a2 + 40) = v16;
  *(float *)(a2 + 44) = v17;
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(a3 + 148);
  v18 = *(float *)(a3 + 152);
  *(float *)(a2 + 32) = v18;
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a3 + 156);
  v19 = *(float *)(a3 + 128);
  *(float *)(a2 + 52) = (float)(v19
                              * (float)(Ogre::RandFlt(
                                          (Ogre *)(*(_DWORD *)(a3 + 132) + 0x80000000),
                                          *(float *)(a3 + 132),
                                          v18)
                                      + 1.0))
                      * *(float *)(a3 + 212);
  *(_DWORD *)(a2 + 56) = 0;
  v30 = *(float *)(a3 + 164);
  v22 = v30 * Ogre::RandFlt(COERCE_OGRE_(*(float *)(a3 + 220) + 1.0), 1.0 - *(float *)(a3 + 220), v20);
  if ( v22 <= 0.0 )
  {
    v21 = 0.0;
    *(_DWORD *)(a2 + 60) = 0;
  }
  else
  {
    *(float *)(a2 + 60) = v22;
  }
  *(float *)(a2 + 68) = Ogre::RandFlt(COERCE_OGRE_(*(float *)(a3 + 216) + 1.0), 1.0 - *(float *)(a3 + 216), v21);
  if ( *(_BYTE *)(a1 + 184) != 0 )
    *(_DWORD *)(a2 + 64) = Ogre::RandomGenerator::get(
                             (Ogre::RandomGenerator *)&Ogre::ParticleEmitterData::m_Rand,
                             0,
                             *(_DWORD *)(a1 + 72) * *(_DWORD *)(a1 + 68) - 1);
  else
    *(_DWORD *)(a2 + 64) = *(unsigned __int8 *)(a1 + 184);
  *(_DWORD *)(a2 + 72) = 0;
  if ( *(_DWORD *)(a1 + 28) == 3 )
  {
    v23 = (*(_DWORD *)(a1 + 1228) - *(_DWORD *)(a1 + 1224)) >> 2;
    if ( v23 != 0 )
    {
      v25 = Ogre::RandomGenerator::get((Ogre::RandomGenerator *)&Ogre::ParticleEmitterData::m_Rand, 0, v23 - 1);
      ObjectFromResource = (int *)Ogre::createObjectFromResource(*(Ogre **)(4 * v25 + *(_DWORD *)(a1 + 1224)), v26);
      *(_DWORD *)(a2 + 72) = ObjectFromResource;
      Ogre::WorldPos::WorldPos(v40, (const Ogre::Vector3 *)a2);
      Ogre::MovableObject::setPosition(ObjectFromResource, (int *)v40);
    }
  }
  return Ogre::ParticleEmitterData::transformDirRandom(a1, a2, a3);
}


//======================================================================
// Ogre::ParticleEmitterData::genParticleColumnSpread(Ogre::Particle &,Ogre::ParticleEmitterFrameData const&)
// address: 0x00147860   size: 0x1D2 (466 bytes)
//======================================================================
int __fastcall Ogre::ParticleEmitterData::genParticleColumnSpread(int a1, int a2, int a3)
{
  float v5; // r2
  float v6; // r2
  float v7; // r0
  int v8; // r3
  float v9; // r2
  float v10; // r6
  float v11; // r6
  int v12; // r2
  int v13; // r0
  Ogre::Resource *v14; // r1
  int *ObjectFromResource; // r7
  float v17; // [sp+4h] [bp-34h]
  float v18; // [sp+4h] [bp-34h]
  int v20; // [sp+14h] [bp-24h] BYREF
  float v21; // [sp+18h] [bp-20h]
  int v22; // [sp+1Ch] [bp-1Ch]
  _DWORD v23[3]; // [sp+20h] [bp-18h] BYREF
  int v24[3]; // [sp+2Ch] [bp-Ch] BYREF
  _BYTE v25[64]; // [sp+38h] [bp+0h] BYREF
  _BYTE v26[68]; // [sp+78h] [bp+40h] BYREF

  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v25);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v26);
  v17 = Ogre::RandFlt(nullptr, *(float *)(a3 + 172), v5);
  v7 = Ogre::RandFlt(nullptr, 380.0, v6);
  Ogre::Matrix4::makeRotateY((Ogre::Matrix4 *)v25, v7);
  v20 = 1065353216;
  v21 = 0.0;
  v22 = 0;
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v25, (Ogre::Vector3 *)&v20, (const Ogre::Vector3 *)&v20);
  v23[0] = v20;
  *(float *)&v23[1] = v21;
  v21 = v17;
  v23[2] = v22;
  Ogre::Matrix4::transformCoord((Ogre::Matrix4 *)a3, (Ogre::Vector3 *)a2, (const Ogre::Vector3 *)&v20);
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)a3, (Ogre::Vector3 *)(a2 + 40), (const Ogre::Vector3 *)v23);
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(a3 + 148);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a3 + 152);
  v8 = *(_DWORD *)(a3 + 156);
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 36) = v8;
  v18 = *(float *)(a3 + 164);
  v10 = v18 * Ogre::RandFlt(COERCE_OGRE_(*(float *)(a3 + 220) + 1.0), 1.0 - *(float *)(a3 + 220), 0.0);
  if ( v10 <= 0.0 )
    *(_DWORD *)(a2 + 60) = 0;
  else
    *(float *)(a2 + 60) = v10;
  *(float *)(a2 + 68) = Ogre::RandFlt(COERCE_OGRE_(*(float *)(a3 + 216) + 1.0), 1.0 - *(float *)(a3 + 216), v9);
  if ( *(_BYTE *)(a1 + 184) != 0 )
    *(_DWORD *)(a2 + 64) = Ogre::RandomGenerator::get(
                             (Ogre::RandomGenerator *)&Ogre::ParticleEmitterData::m_Rand,
                             0,
                             *(_DWORD *)(a1 + 72) * *(_DWORD *)(a1 + 68) - 1);
  else
    *(_DWORD *)(a2 + 64) = *(unsigned __int8 *)(a1 + 184);
  *(_DWORD *)(a2 + 72) = 0;
  v11 = *(float *)(a3 + 128);
  *(float *)(a2 + 52) = (float)(v11
                              * (float)(Ogre::RandFlt(
                                          (Ogre *)(*(_DWORD *)(a3 + 132) + 0x80000000),
                                          *(float *)(a3 + 132),
                                          -0.0)
                                      + 1.0))
                      * *(float *)(a3 + 212);
  if ( *(_DWORD *)(a1 + 28) == 3 )
  {
    v12 = (*(_DWORD *)(a1 + 1228) - *(_DWORD *)(a1 + 1224)) >> 2;
    if ( v12 != 0 )
    {
      v13 = Ogre::RandomGenerator::get((Ogre::RandomGenerator *)&Ogre::ParticleEmitterData::m_Rand, 0, v12 - 1);
      ObjectFromResource = (int *)Ogre::createObjectFromResource(*(Ogre **)(4 * v13 + *(_DWORD *)(a1 + 1224)), v14);
      *(_DWORD *)(a2 + 72) = ObjectFromResource;
      Ogre::WorldPos::WorldPos(v24, (const Ogre::Vector3 *)a2);
      Ogre::MovableObject::setPosition(ObjectFromResource, v24);
      if ( Ogre::BaseObject::isKindOf(
             *(Ogre::BaseObject **)(a2 + 72),
             (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI) != 0 )
        *(_DWORD *)(*(_DWORD *)(a2 + 72) + 188) = *(_DWORD *)(a1 + 96);
    }
  }
  return Ogre::ParticleEmitterData::transformDirRandom(a1, a2, a3);
}


//======================================================================
// Ogre::ParticleEmitterData::genParticleColumnUp(Ogre::Particle &,Ogre::ParticleEmitterFrameData const&)
// address: 0x00147A44   size: 0x22C (556 bytes)
//======================================================================
int __fastcall Ogre::ParticleEmitterData::genParticleColumnUp(int a1, int a2, int a3)
{
  float v5; // r2
  float v6; // r2
  float v7; // r6
  float v8; // r2
  float v9; // r6
  float v10; // r2
  float v11; // r5
  float v12; // r5
  int v13; // r2
  int v14; // r0
  Ogre::Resource *v15; // r1
  int *ObjectFromResource; // r5
  int v19; // [sp+8h] [bp-12Ch]
  float v20; // [sp+10h] [bp-124h]
  float v21; // [sp+14h] [bp-120h]
  float v22; // [sp+18h] [bp-11Ch] BYREF
  float v23; // [sp+1Ch] [bp-118h]
  float v24; // [sp+20h] [bp-114h]
  _DWORD v25[3]; // [sp+24h] [bp-110h] BYREF
  float v26[16]; // [sp+30h] [bp-104h] BYREF
  float v27[16]; // [sp+70h] [bp-C4h] BYREF
  _BYTE v28[64]; // [sp+B0h] [bp-84h] BYREF
  int v29[17]; // [sp+F0h] [bp-44h] BYREF

  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v26);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v27);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v28);
  v20 = Ogre::RandFlt(nullptr, *(float *)(a3 + 172), v5);
  v19 = *(_DWORD *)(a3 + 136);
  v21 = Ogre::RandFlt(nullptr, 380.0, v6);
  Ogre::Matrix4::makeRotateZ((Ogre::Matrix4 *)v27, COERCE_FLOAT(v19 + 0x80000000));
  Ogre::Matrix4::makeRotateY((Ogre::Matrix4 *)v26, v21);
  Ogre::operator*((Ogre::Matrix4 *)v29, v27, v26);
  Ogre::Matrix4::operator=(v28, v29);
  v22 = 1.0;
  v23 = 0.0;
  v24 = 0.0;
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v26, (Ogre::Vector3 *)&v22, (const Ogre::Vector3 *)&v22);
  v23 = v20;
  v7 = *(float *)(a3 + 176);
  v22 = v22 * v7;
  v24 = v24 * v7;
  v25[0] = 0;
  v25[1] = 1065353216;
  v25[2] = 0;
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v28, (Ogre::Vector3 *)v25, (const Ogre::Vector3 *)v25);
  Ogre::Matrix4::transformCoord((Ogre::Matrix4 *)a3, (Ogre::Vector3 *)a2, (const Ogre::Vector3 *)&v22);
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)a3, (Ogre::Vector3 *)(a2 + 40), (const Ogre::Vector3 *)v25);
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(a3 + 148);
  v8 = *(float *)(a3 + 152);
  *(float *)(a2 + 32) = v8;
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a3 + 156);
  *(_DWORD *)(a2 + 56) = 0;
  v9 = *(float *)(a3 + 164);
  v11 = v9 * Ogre::RandFlt(COERCE_OGRE_(*(float *)(a3 + 220) + 1.0), 1.0 - *(float *)(a3 + 220), v8);
  if ( v11 <= 0.0 )
    *(_DWORD *)(a2 + 60) = 0;
  else
    *(float *)(a2 + 60) = v11;
  *(float *)(a2 + 68) = Ogre::RandFlt(COERCE_OGRE_(*(float *)(a3 + 216) + 1.0), 1.0 - *(float *)(a3 + 216), v10);
  if ( *(_BYTE *)(a1 + 184) != 0 )
    *(_DWORD *)(a2 + 64) = Ogre::RandomGenerator::get(
                             (Ogre::RandomGenerator *)&Ogre::ParticleEmitterData::m_Rand,
                             0,
                             *(_DWORD *)(a1 + 72) * *(_DWORD *)(a1 + 68) - 1);
  else
    *(_DWORD *)(a2 + 64) = *(unsigned __int8 *)(a1 + 184);
  *(_DWORD *)(a2 + 72) = 0;
  v12 = *(float *)(a3 + 128);
  *(float *)(a2 + 52) = (float)(v12
                              * (float)(Ogre::RandFlt(
                                          (Ogre *)(*(_DWORD *)(a3 + 132) + 0x80000000),
                                          *(float *)(a3 + 132),
                                          -0.0)
                                      + 1.0))
                      * *(float *)(a3 + 212);
  if ( *(_DWORD *)(a1 + 28) == 3 )
  {
    v13 = (*(_DWORD *)(a1 + 1228) - *(_DWORD *)(a1 + 1224)) >> 2;
    if ( v13 != 0 )
    {
      v14 = Ogre::RandomGenerator::get((Ogre::RandomGenerator *)&Ogre::ParticleEmitterData::m_Rand, 0, v13 - 1);
      ObjectFromResource = (int *)Ogre::createObjectFromResource(*(Ogre **)(4 * v14 + *(_DWORD *)(a1 + 1224)), v15);
      *(_DWORD *)(a2 + 72) = ObjectFromResource;
      Ogre::WorldPos::WorldPos(v29, (const Ogre::Vector3 *)a2);
      Ogre::MovableObject::setPosition(ObjectFromResource, v29);
      if ( Ogre::BaseObject::isKindOf(
             *(Ogre::BaseObject **)(a2 + 72),
             (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI) != 0 )
        *(_DWORD *)(*(_DWORD *)(a2 + 72) + 188) = *(_DWORD *)(a1 + 96);
    }
  }
  return Ogre::ParticleEmitterData::transformDirRandom(a1, a2, a3);
}


//======================================================================
// Ogre::ParticleEmitterData::genParticleColumn(Ogre::Particle &,Ogre::ParticleEmitterFrameData const&)
// address: 0x00147C80   size: 0x232 (562 bytes)
//======================================================================
int __fastcall Ogre::ParticleEmitterData::genParticleColumn(int a1, int a2, int a3)
{
  float v5; // r2
  float v6; // r2
  float v7; // r2
  float v8; // r6
  int v9; // r3
  float v10; // r6
  float v11; // r2
  float v12; // r5
  float v13; // r5
  int v14; // r2
  int v15; // r0
  Ogre::Resource *v16; // r1
  int *ObjectFromResource; // r5
  int v20; // [sp+8h] [bp-12Ch]
  float v21; // [sp+10h] [bp-124h]
  float v22; // [sp+14h] [bp-120h]
  float v23; // [sp+18h] [bp-11Ch] BYREF
  float v24; // [sp+1Ch] [bp-118h]
  float v25; // [sp+20h] [bp-114h]
  _DWORD v26[3]; // [sp+24h] [bp-110h] BYREF
  float v27[16]; // [sp+30h] [bp-104h] BYREF
  float v28[16]; // [sp+70h] [bp-C4h] BYREF
  _BYTE v29[64]; // [sp+B0h] [bp-84h] BYREF
  int v30[17]; // [sp+F0h] [bp-44h] BYREF

  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v27);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v28);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v29);
  v21 = Ogre::RandFlt(nullptr, *(float *)(a3 + 172), v5);
  v20 = *(_DWORD *)(a3 + 136);
  v22 = Ogre::RandFlt(nullptr, 380.0, v6);
  Ogre::Matrix4::makeRotateZ((Ogre::Matrix4 *)v28, COERCE_FLOAT(v20 + 0x80000000));
  Ogre::Matrix4::makeRotateY((Ogre::Matrix4 *)v27, v22);
  Ogre::operator*((Ogre::Matrix4 *)v30, v28, v27);
  Ogre::Matrix4::operator=(v29, v30);
  v23 = Ogre::RandFlt(nullptr, 1.0, v7);
  v24 = 0.0;
  v25 = 0.0;
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v27, (Ogre::Vector3 *)&v23, (const Ogre::Vector3 *)&v23);
  v8 = *(float *)(a3 + 176);
  v24 = v21;
  v23 = v23 * v8;
  v25 = v25 * v8;
  v26[1] = 1065353216;
  v26[0] = 0;
  v26[2] = 0;
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v29, (Ogre::Vector3 *)v26, (const Ogre::Vector3 *)v26);
  Ogre::Matrix4::transformCoord((Ogre::Matrix4 *)a3, (Ogre::Vector3 *)a2, (const Ogre::Vector3 *)&v23);
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)a3, (Ogre::Vector3 *)(a2 + 40), (const Ogre::Vector3 *)v26);
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(a3 + 148);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a3 + 152);
  v9 = *(_DWORD *)(a3 + 156);
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 36) = v9;
  v10 = *(float *)(a3 + 164);
  v12 = v10 * Ogre::RandFlt(COERCE_OGRE_(*(float *)(a3 + 220) + 1.0), 1.0 - *(float *)(a3 + 220), 0.0);
  if ( v12 <= 0.0 )
    *(_DWORD *)(a2 + 60) = 0;
  else
    *(float *)(a2 + 60) = v12;
  *(float *)(a2 + 68) = Ogre::RandFlt(COERCE_OGRE_(*(float *)(a3 + 216) + 1.0), 1.0 - *(float *)(a3 + 216), v11);
  if ( *(_BYTE *)(a1 + 184) != 0 )
    *(_DWORD *)(a2 + 64) = Ogre::RandomGenerator::get(
                             (Ogre::RandomGenerator *)&Ogre::ParticleEmitterData::m_Rand,
                             0,
                             *(_DWORD *)(a1 + 72) * *(_DWORD *)(a1 + 68) - 1);
  else
    *(_DWORD *)(a2 + 64) = *(unsigned __int8 *)(a1 + 184);
  *(_DWORD *)(a2 + 72) = 0;
  v13 = *(float *)(a3 + 128);
  *(float *)(a2 + 52) = (float)(v13
                              * (float)(Ogre::RandFlt(
                                          (Ogre *)(*(_DWORD *)(a3 + 132) + 0x80000000),
                                          *(float *)(a3 + 132),
                                          -0.0)
                                      + 1.0))
                      * *(float *)(a3 + 212);
  if ( *(_DWORD *)(a1 + 28) == 3 )
  {
    v14 = (*(_DWORD *)(a1 + 1228) - *(_DWORD *)(a1 + 1224)) >> 2;
    if ( v14 != 0 )
    {
      v15 = Ogre::RandomGenerator::get((Ogre::RandomGenerator *)&Ogre::ParticleEmitterData::m_Rand, 0, v14 - 1);
      ObjectFromResource = (int *)Ogre::createObjectFromResource(*(Ogre **)(4 * v15 + *(_DWORD *)(a1 + 1224)), v16);
      *(_DWORD *)(a2 + 72) = ObjectFromResource;
      Ogre::WorldPos::WorldPos(v30, (const Ogre::Vector3 *)a2);
      Ogre::MovableObject::setPosition(ObjectFromResource, v30);
      if ( Ogre::BaseObject::isKindOf(
             *(Ogre::BaseObject **)(a2 + 72),
             (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI) != 0 )
        *(_DWORD *)(*(_DWORD *)(a2 + 72) + 188) = *(_DWORD *)(a1 + 96);
    }
  }
  return Ogre::ParticleEmitterData::transformDirRandom(a1, a2, a3);
}


//======================================================================
// Ogre::ParticleEmitterData::genParticleSphere(Ogre::Particle &,Ogre::ParticleEmitterFrameData const&)
// address: 0x00147EC4   size: 0x30A (778 bytes)
//======================================================================
int __fastcall Ogre::ParticleEmitterData::genParticleSphere(int a1, int a2, int a3)
{
  float v5; // r2
  unsigned int v6; // r0
  float v7; // r1
  float v8; // r5
  float v9; // r2
  float v10; // r3
  float v11; // r1
  int v12; // r0
  int v13; // r4
  float v14; // r2
  int v15; // r3
  float v16; // r2
  float v17; // r5
  int v18; // r2
  int v19; // r0
  Ogre::Resource *v20; // r1
  int *ObjectFromResource; // r5
  float v23; // [sp+8h] [bp-134h]
  float v24; // [sp+Ch] [bp-130h]
  Ogre *v25; // [sp+Ch] [bp-130h]
  float v27; // [sp+14h] [bp-128h]
  float v28; // [sp+20h] [bp-11Ch] BYREF
  float v29; // [sp+24h] [bp-118h]
  float v30; // [sp+28h] [bp-114h]
  _DWORD v31[3]; // [sp+2Ch] [bp-110h] BYREF
  _BYTE v32[64]; // [sp+38h] [bp-104h] BYREF
  float v33[16]; // [sp+78h] [bp-C4h] BYREF
  _BYTE v34[64]; // [sp+B8h] [bp-84h] BYREF
  int v35; // [sp+F8h] [bp-44h] BYREF
  int v36; // [sp+FCh] [bp-40h]
  int v37; // [sp+100h] [bp-3Ch]

  v27 = Ogre::RandFlt(nullptr, 1.0, *(float *)&a3);
  if ( *(float *)(a3 + 136) == 0.0 )
  {
    v6 = -1068953637;
    v7 = 3.1416;
  }
  else
  {
    v6 = *(_DWORD *)(a3 + 136) + 0x80000000;
    v7 = *(float *)(a3 + 136);
  }
  Ogre::RandFlt((Ogre *)v6, v7, v5);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v32);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v33);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v34);
  Ogre::CalcSpreadMatrix(
    (Ogre *)v33,
    COERCE_OGRE_MATRIX4_((float)(*(float *)(a3 + 136) * 0.017453) + (float)(*(float *)(a3 + 136) * 0.017453)),
    *(float *)(a3 + 140) * 0.017453,
    (float)(*(float *)(a3 + 144) * 0.017453) + (float)(*(float *)(a3 + 144) * 0.017453),
    *(float *)(a3 + 176),
    *(float *)(a3 + 172),
    COERCE_FLOAT(v32));
  Ogre::operator*((Ogre::Matrix4 *)&v35, v33, (float *)(a3 + 64));
  Ogre::Matrix4::operator=(v32, &v35);
  v35 = 0;
  v36 = 0;
  v37 = 1065353216;
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v33, (Ogre::Vector3 *)&v28, (const Ogre::Vector3 *)&v35);
  v28 = v28 * v27;
  v24 = v27 * v29;
  v29 = v30 * v27;
  v30 = v24;
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)(a3 + 64), (Ogre::Vector3 *)&v28, (const Ogre::Vector3 *)&v28);
  Ogre::Matrix4::transformCoord((Ogre::Matrix4 *)a3, (Ogre::Vector3 *)a2, (const Ogre::Vector3 *)(a1 + 40));
  *(float *)&v25 = v28;
  v8 = v29;
  *(float *)a2 = *(float *)a2 + v28;
  v9 = v30;
  *(float *)(a2 + 4) = *(float *)(a2 + 4) + v8;
  *(float *)(a2 + 8) = *(float *)(a2 + 8) + v9;
  if ( (float)((float)((float)(*(float *)&v25 * *(float *)&v25) + (float)(v8 * v8)) + (float)(v9 * v9)) == 0.0 )
  {
    *(_DWORD *)(a2 + 52) = 0;
    v35 = 0;
    v36 = 1065353216;
    v37 = 0;
    Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)a3, (Ogre::Vector3 *)v31, (const Ogre::Vector3 *)&v35);
  }
  else
  {
    Ogre::GetNormalize((Ogre *)&v35, (const Ogre::Vector3 *)&v28);
    v10 = *(float *)(a3 + 128);
    v31[1] = v36;
    v31[2] = v37;
    v11 = *(float *)(a3 + 132);
    v31[0] = v35;
    *(float *)(a2 + 52) = (float)(v10 * (float)(Ogre::RandFlt((Ogre *)(LODWORD(v11) + 0x80000000), v11, -0.0) + 1.0))
                        * *(float *)(a3 + 212);
  }
  Ogre::GetNormalize((Ogre *)&v35, (const Ogre::Vector3 *)v31);
  v12 = v36;
  v13 = v37;
  *(_DWORD *)(a2 + 40) = v35;
  *(_DWORD *)(a2 + 44) = v12;
  *(_DWORD *)(a2 + 48) = v13;
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(a3 + 148);
  v14 = *(float *)(a3 + 152);
  *(float *)(a2 + 32) = v14;
  v15 = *(_DWORD *)(a3 + 156);
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 36) = v15;
  v23 = *(float *)(a3 + 164);
  v17 = v23 * Ogre::RandFlt(COERCE_OGRE_(*(float *)(a3 + 220) + 1.0), 1.0 - *(float *)(a3 + 220), v14);
  if ( v17 <= 0.0 )
    *(_DWORD *)(a2 + 60) = 0;
  else
    *(float *)(a2 + 60) = v17;
  *(float *)(a2 + 68) = Ogre::RandFlt(COERCE_OGRE_(*(float *)(a3 + 216) + 1.0), 1.0 - *(float *)(a3 + 216), v16);
  if ( *(_BYTE *)(a1 + 184) != 0 )
    *(_DWORD *)(a2 + 64) = Ogre::RandomGenerator::get(
                             (Ogre::RandomGenerator *)&Ogre::ParticleEmitterData::m_Rand,
                             0,
                             *(_DWORD *)(a1 + 72) * *(_DWORD *)(a1 + 68) - 1);
  else
    *(_DWORD *)(a2 + 64) = *(unsigned __int8 *)(a1 + 184);
  *(_DWORD *)(a2 + 72) = 0;
  if ( *(_DWORD *)(a1 + 28) == 3 )
  {
    v18 = (*(_DWORD *)(a1 + 1228) - *(_DWORD *)(a1 + 1224)) >> 2;
    if ( v18 != 0 )
    {
      v19 = Ogre::RandomGenerator::get((Ogre::RandomGenerator *)&Ogre::ParticleEmitterData::m_Rand, 0, v18 - 1);
      ObjectFromResource = (int *)Ogre::createObjectFromResource(*(Ogre **)(4 * v19 + *(_DWORD *)(a1 + 1224)), v20);
      *(_DWORD *)(a2 + 72) = ObjectFromResource;
      Ogre::WorldPos::WorldPos(&v35, (const Ogre::Vector3 *)a2);
      Ogre::MovableObject::setPosition(ObjectFromResource, &v35);
      if ( Ogre::BaseObject::isKindOf(
             *(Ogre::BaseObject **)(a2 + 72),
             (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI) != 0 )
        *(_DWORD *)(*(_DWORD *)(a2 + 72) + 188) = *(_DWORD *)(a1 + 96);
    }
  }
  return Ogre::ParticleEmitterData::transformDirRandom(a1, a2, a3);
}


//======================================================================
// Ogre::ParticleEmitterData::ParticleEmitterData(void)
// address: 0x001481E8   size: 0x1F2 (498 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre19ParticleEmitterDataC1Ev'
Ogre::ParticleEmitterData *__fastcall Ogre::ParticleEmitterData::ParticleEmitterData(Ogre::ParticleEmitterData *this)
{
  _DWORD *v2; // r3
  char *v4; // [sp+0h] [bp-Ch]

  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &off_455C90;
  v4 = (char *)this + 24;
  v2 = (_DWORD *)((char *)this + 84);
  do
  {
    *v2 = 1065353216;
    v2[1] = 1065353216;
    v2[2] = 1065353216;
    v2[3] = 1065353216;
    v2 += 4;
  }
  while ( v2 != (_DWORD *)((char *)this + 132) );
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 61);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 73);
  *((_DWORD *)this + 86) = 1;
  *((_DWORD *)this + 87) = 0;
  *((_DWORD *)this + 88) = 0;
  *((_DWORD *)this + 89) = 0;
  *((_DWORD *)this + 85) = &off_455A18;
  *((_DWORD *)this + 90) = 1;
  *((_DWORD *)this + 91) = 0;
  *((_DWORD *)this + 92) = 0;
  *((_DWORD *)this + 93) = 0;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 95) = 0;
  *((_DWORD *)this + 96) = 0;
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 97);
  *((_DWORD *)this + 109) = 0;
  *((_DWORD *)this + 110) = 0;
  *((_DWORD *)this + 111) = 0;
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 112);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 124);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 136);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 148);
  *((_DWORD *)this + 161) = 1;
  *((_DWORD *)this + 162) = 0;
  *((_DWORD *)this + 163) = 0;
  *((_DWORD *)this + 164) = 0;
  *((_DWORD *)this + 160) = &off_455C50;
  *((_DWORD *)this + 165) = 1;
  *((_DWORD *)this + 166) = 0;
  *((_DWORD *)this + 167) = 0;
  *((_DWORD *)this + 168) = 0;
  *((_DWORD *)this + 169) = 0;
  *((_DWORD *)this + 170) = 0;
  *((_DWORD *)this + 171) = 0;
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 172);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 184);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 196);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 208);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 220);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 232);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 244);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 256);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 268);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 280);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 292);
  *((_DWORD *)this + 304) = 0;
  *((_DWORD *)this + 305) = 0;
  *((_DWORD *)this + 306) = 0;
  *((_DWORD *)this + 307) = 0;
  *((_DWORD *)this + 308) = 0;
  j_memset(v4, 0, 0x84u);
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 1065353216;
  *((_DWORD *)this + 44) = 0;
  *((_BYTE *)this + 185) = 0;
  *((_DWORD *)this + 45) = 1065353216;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 57) = 0;
  *((_DWORD *)this + 58) = 0;
  *((_BYTE *)this + 184) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 48) = 1;
  *((_DWORD *)this + 49) = 1;
  *((_DWORD *)this + 51) = 1;
  *((_DWORD *)this + 54) = 1;
  *((_DWORD *)this + 55) = 1;
  *((_BYTE *)this + 224) = 1;
  *((_BYTE *)this + 236) = 0;
  *((_DWORD *)this + 60) = 0;
  return this;
}


//======================================================================
// Ogre::ParticleEmitterData::newObject(void)
// address: 0x001483F0   size: 0x12 (18 bytes)
//======================================================================
Ogre::ParticleEmitterData *__fastcall Ogre::ParticleEmitterData::newObject(Ogre::ParticleEmitterData *this)
{
  Ogre::ParticleEmitterData *v1; // r4

  v1 = (Ogre::ParticleEmitterData *)operator new(0x4D4u);
  Ogre::ParticleEmitterData::ParticleEmitterData(v1);
  return v1;
}


//======================================================================
// Ogre::ParticleEmitterData::getSizeInLife(float)
// address: 0x00148408   size: 0x28 (40 bytes)
//======================================================================
int __fastcall Ogre::ParticleEmitterData::getSizeInLife(Ogre::ParticleEmitterData *this, float a2, int a3, int a4)
{
  int v5; // [sp+Ch] [bp-4h] BYREF

  v5 = a4;
  Ogre::KeyFrameArray<float>::getValue((int)this + 244, 0, (unsigned int)(float)(a2 * 100.0), &v5, 1);
  return v5;
}


//======================================================================
// Ogre::ParticleEmitterData::getAspectInLife(float)
// address: 0x00148434   size: 0x2A (42 bytes)
//======================================================================
int __fastcall Ogre::ParticleEmitterData::getAspectInLife(Ogre::ParticleEmitterData *this, float a2, int a3, int a4)
{
  int v5; // [sp+Ch] [bp-4h] BYREF

  v5 = a4;
  Ogre::KeyFrameArray<float>::getValue((int)this + 292, 0, (unsigned int)(float)(a2 * 100.0), &v5, 1);
  return v5;
}


//======================================================================
// Ogre::ParticleEmitterData::getAlphaInLife(float)
// address: 0x00148464   size: 0x2A (42 bytes)
//======================================================================
int __fastcall Ogre::ParticleEmitterData::getAlphaInLife(Ogre::ParticleEmitterData *this, float a2, int a3, int a4)
{
  int v5; // [sp+Ch] [bp-4h] BYREF

  v5 = a4;
  Ogre::KeyFrameArray<float>::getValue((int)this + 388, 0, (unsigned int)(float)(a2 * 100.0), &v5, 1);
  return v5;
}


//======================================================================
// Ogre::ParticleEmitterData::prepareGenParticle(Ogre::ParticleEmitterFrameData &,int,unsigned int,Ogre::Matrix4 const&)
// address: 0x00148870   size: 0x196 (406 bytes)
//======================================================================
unsigned int __fastcall Ogre::ParticleEmitterData::prepareGenParticle(
        Ogre::ParticleEmitterData *this,
        Ogre::ParticleEmitterFrameData *a2,
        int a3,
        unsigned int a4,
        const Ogre::Matrix4 *a5)
{
  char *v10; // [sp+Ch] [bp-8h]

  Ogre::KeyFrameArray<float>::getValue((int)this + 448, a3, a4, (int *)a2 + 32, 1);
  Ogre::KeyFrameArray<float>::getValue((int)this + 496, a3, a4, (int *)a2 + 33, 1);
  Ogre::KeyFrameArray<float>::getValue((int)this + 544, a3, a4, (int *)a2 + 34, 1);
  Ogre::KeyFrameArray<float>::getValue((int)this + 592, a3, a4, (int *)a2 + 36, 1);
  Ogre::KeyFrameArray<Ogre::Vector3>::getValue(
    (_DWORD *)this + 160,
    a3,
    a4,
    COERCE_FLOAT((Ogre::ParticleEmitterFrameData *)((char *)a2 + 148)),
    1);
  Ogre::KeyFrameArray<float>::getValue((int)this + 688, a3, a4, (int *)a2 + 40, 1);
  Ogre::KeyFrameArray<float>::getValue((int)this + 736, a3, a4, (int *)a2 + 41, 1);
  Ogre::KeyFrameArray<float>::getValue((int)this + 784, a3, a4, (int *)a2 + 42, 1);
  Ogre::KeyFrameArray<float>::getValue((int)this + 832, a3, a4, (int *)a2 + 44, 1);
  Ogre::KeyFrameArray<float>::getValue((int)this + 880, a3, a4, (int *)a2 + 43, 1);
  Ogre::KeyFrameArray<float>::getValue((int)this + 928, a3, a4, (int *)a2 + 45, 1);
  Ogre::KeyFrameArray<float>::getValue((int)this + 976, a3, a4, (int *)a2 + 46, 1);
  Ogre::KeyFrameArray<float>::getValue((int)this + 1024, a3, a4, (int *)a2 + 35, 1);
  v10 = (char *)a2 + 64;
  if ( (*((_DWORD *)this + 8) & 1) != 0 )
  {
    Ogre::Matrix4::operator=(a2, &Ogre::Matrix4::Iden);
    Ogre::Matrix4::operator=(v10, &Ogre::Matrix4::Iden);
  }
  else
  {
    Ogre::Matrix4::operator=(a2, a5);
    Ogre::Matrix4::operator=(v10, a5);
    *((_DWORD *)a2 + 28) = 0;
    *((_DWORD *)a2 + 29) = 0;
    *((_DWORD *)a2 + 30) = 0;
    *((_DWORD *)a2 + 31) = 1065353216;
  }
  Ogre::KeyFrameArray<float>::getValue((int)this + 1072, a3, a4, (int *)a2 + 54, 0);
  Ogre::KeyFrameArray<float>::getValue((int)this + 1120, a3, a4, (int *)a2 + 55, 0);
  return Ogre::KeyFrameArray<float>::getValue((int)this + 1168, a3, a4, (int *)a2 + 56, 0);
}


//======================================================================
// Ogre::ParticleEmitterData::getColorInLife(float)
// address: 0x00148A18   size: 0x36 (54 bytes)
//======================================================================
Ogre::ParticleEmitterData *__fastcall Ogre::ParticleEmitterData::getColorInLife(
        Ogre::ParticleEmitterData *this,
        float a2,
        float a3)
{
  *(_DWORD *)this = 1065353216;
  *((_DWORD *)this + 1) = 1065353216;
  *((_DWORD *)this + 2) = 1065353216;
  *((_DWORD *)this + 3) = 1065353216;
  Ogre::KeyFrameArray<Ogre::ColourValue>::getValue(
    (_DWORD *)(LODWORD(a2) + 340),
    0,
    (unsigned int)(float)(a3 * 100.0),
    (float *)this,
    1);
  return this;
}


//======================================================================
// Ogre::ParticleEmitterData::genParticle(Ogre::Particle &,Ogre::ParticleEmitterFrameData const&)
// address: 0x00148A54   size: 0x78 (120 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::ParticleEmitterData::genParticle(int a1, int a2, int a3)
{
  switch ( *(_DWORD *)(a1 + 24) )
  {
    case 0:
      Ogre::ParticleEmitterData::genParticlePlane(a1, a2, a3);
      break;
    case 1:
      Ogre::ParticleEmitterData::genParticleSphere(a1, a2, a3);
      break;
    case 2:
      Ogre::ParticleEmitterData::genParticleSphereFace(a1, a2, a3);
      break;
    case 3:
      Ogre::ParticleEmitterData::genParticleCircle(a1, a2, a3);
      break;
    case 5:
      Ogre::ParticleEmitterData::genParticleColumnUp(a1, a2, a3);
      break;
    case 6:
      Ogre::ParticleEmitterData::genParticleColumn(a1, a2, a3);
      break;
    default:
      break;
  }
  if ( *(_DWORD *)(a1 + 360) == 3 )
    Ogre::KeyFrameArray<Ogre::ColourValue>::getValue((_DWORD *)(a1 + 340), 0, 0, (float *)(a2 + 80), 1);
  *(float *)(a2 + 76) = Ogre::RandFlt((Ogre *)(*(_DWORD *)(a1 + 200) + 0x80000000), *(float *)(a1 + 200), *(float *)&a3);
}


//======================================================================
// Ogre::ParticleEmitterData::_serialize(Ogre::Archive &,int)
// address: 0x001495B4   size: 0x536 (1334 bytes)
//======================================================================
float __fastcall Ogre::ParticleEmitterData::_serialize(Ogre::ParticleEmitterData *this, Ogre::Archive *a2, int a3)
{
  char *v6; // r1
  __int64 v7; // r0
  __int64 v8; // r0
  Ogre::TextureData **v9; // r2
  float result; // r0
  int j; // r7
  _DWORD *v12; // r1
  int v13; // r0
  unsigned int v14; // r2
  int i; // r7
  void *v16; // r1
  int v17; // r2
  void *v18; // r1
  unsigned __int8 *v19; // r3
  int v20; // r2
  char *v21; // r12
  int v22; // r6
  int v23; // r7
  int v24; // r1
  int v25; // r0
  unsigned __int8 *v26; // r4
  int *v27; // r4
  Ogre::FixedString *v28; // [sp+8h] [bp-2Ch]
  int v29; // [sp+Ch] [bp-28h]
  _DWORD *v30; // [sp+Ch] [bp-28h]
  int v31; // [sp+14h] [bp-20h] BYREF
  Ogre::FixedString *v32; // [sp+18h] [bp-1Ch] BYREF
  void *v33[6]; // [sp+1Ch] [bp-18h] BYREF

  *((_DWORD *)this + 4) = a3;
  Ogre::Archive::serialize(a2, (char *)this + 24, 0x84u);
  v6 = (char *)this + 156;
  if ( a3 <= 101 )
  {
    Ogre::Archive::serialize(a2, v6, 0x44u);
    *((_DWORD *)this + 57) = 0;
    *((_DWORD *)this + 58) = 0;
    *((_BYTE *)this + 224) = 1;
  }
  else
  {
    Ogre::Archive::serialize(a2, v6, 0x50u);
    if ( a3 > 103 )
    {
      Ogre::Archive::serialize(a2, (char *)this + 236, 1u);
      if ( a3 != 104 )
        Ogre::Archive::serialize(a2, (char *)this + 240, 4u);
    }
  }
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)this + 112, a2);
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)this + 124, a2);
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)this + 136, a2);
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)this + 148, a2);
  Ogre::KeyFrameArray<Ogre::Vector3>::_serialize((_DWORD *)this + 160, a2);
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)this + 172, a2);
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)this + 184, a2);
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)this + 196, a2);
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)this + 208, a2);
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)this + 220, a2);
  if ( a3 <= 102 )
  {
    if ( *((_DWORD *)a2 + 2) == 1 )
    {
      v29 = (*((_DWORD *)this + 119) - *((_DWORD *)this + 118)) >> 3;
      *((_DWORD *)this + 237) = 1;
      LODWORD(v7) = (char *)this + 952;
      HIDWORD(v7) = v29;
      memset(&v33[1], 0, 16);
      std::vector<Ogre::KeyFrameArray<float>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<float>::KEYFRAME_T>>::resize(
        v7,
        0,
        0);
      LODWORD(v8) = (char *)this + 964;
      HIDWORD(v8) = v29;
      std::vector<Ogre::KeyFrameArray<float>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<float>::CONTROL_POINT_T>>::resize(
        v8,
        0,
        0);
      j_memset((char *)this + 928, 0, 0x30u);
    }
  }
  else
  {
    Ogre::KeyFrameArray<float>::_serialize((_DWORD *)this + 232, a2);
  }
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)this + 244, a2);
  v9 = (Ogre::TextureData **)&byte_4;
  if ( (*((_DWORD *)this + 8) & 4) != 0 )
    Ogre::Archive::serialize(a2, (char *)this + 20, 4u);
  if ( (*((_DWORD *)this + 8) & 8) != 0 )
  {
    Ogre::operator<<<float>((int)a2, (int)this + 1024);
    Ogre::operator<<<float>((int)a2, (int)this + 496);
    Ogre::operator<<<float>((int)a2, (int)this + 1072);
    Ogre::operator<<<float>((int)a2, (int)this + 1120);
    Ogre::operator<<<float>((int)a2, (int)this + 1168);
    Ogre::operator<<<float>((int)a2, (int)this + 244);
    Ogre::operator<<<float>((int)a2, (int)this + 292);
    (*(void (__fastcall **)(char *, Ogre::Archive *, int))(*((_DWORD *)this + 85) + 12))((char *)this + 340, a2, 100);
    Ogre::operator<<<float>((int)a2, (int)this + 388);
    Ogre::Archive::serializeRawArray<Ogre::PECollisionFace>((int)a2, (int *)this + 109);
  }
  Ogre::SerializeExternalTexture(a2, (Ogre::ParticleEmitterData *)((char *)this + 1216), v9);
  result = COERCE_FLOAT(
             Ogre::SerializeExternalTexture(
               a2,
               (Ogre::ParticleEmitterData *)((char *)this + 1220),
               (Ogre::TextureData **)&stru_4B8.st_info));
  if ( a3 > 100 )
  {
    if ( a3 > 102 )
    {
      v31 = (*((_DWORD *)this + 307) - *((_DWORD *)this + 306)) >> 2;
      Ogre::Archive::serialize(a2, &v31, 4u);
      if ( *((_DWORD *)a2 + 2) == 1 )
      {
        v12 = *((_DWORD **)this + 307);
        v13 = *((_DWORD *)this + 306);
        v33[0] = nullptr;
        v14 = ((int)v12 - v13) >> 2;
        if ( v31 <= v14 )
        {
          if ( v31 < v14 )
            *((_DWORD *)this + 307) = v13 + 4 * v31;
        }
        else
        {
          std::vector<Ogre::Resource *>::_M_fill_insert((int)this + 1224, v12, v31 - v14, v33);
        }
        for ( i = 0; ; ++i )
        {
          result = *(float *)&v31;
          if ( i >= v31 )
            break;
          v32 = nullptr;
          Ogre::Archive::operator<<((int)a2, (Ogre::FixedString *)&v32);
          v30 = (_DWORD *)(*((_DWORD *)this + 306) + 4 * i);
          *v30 = Ogre::ResourceManager::blockLoad(
                   (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton,
                   (const Ogre::FixedString *)&v32,
                   0);
          Ogre::FixedString::release(v32, v16);
        }
      }
      else
      {
        for ( j = 0; ; ++j )
        {
          result = *(float *)&v31;
          if ( j >= v31 )
            break;
          v17 = *((_DWORD *)this + 306);
          v33[0] = nullptr;
          Ogre::FixedString::operator=(v33, *(_DWORD *)(4 * j + v17) + 8);
          Ogre::Archive::operator<<((int)a2, (Ogre::FixedString *)v33);
          Ogre::FixedString::release((Ogre::FixedString *)v33[0], v18);
        }
      }
    }
  }
  else if ( *((_DWORD *)a2 + 2) == 1 )
  {
    *((_DWORD *)this + 47) = 0;
    *((_DWORD *)this + 51) = 1;
  }
  if ( *((_DWORD *)a2 + 2) == 1 )
  {
    *((_BYTE *)this + 237) = 0;
    if ( *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 64) == 2 )
      result = COERCE_FLOAT(Ogre::Color2Opengl((_DWORD *)this + 85));
    v19 = *((unsigned __int8 **)this + 91);
    if ( -858993459 * ((*((_DWORD *)this + 92) - (int)v19) >> 2) == 3 )
    {
      *((_BYTE *)this + 237) = 1;
      v28 = this;
      v20 = 0;
      do
      {
        v22 = *(_DWORD *)&v19[5 * v20 + 8];
        v23 = *(_DWORD *)&v19[5 * v20 + 12];
        *((_DWORD *)v28 + 21) = *(_DWORD *)&v19[5 * v20 + 4];
        *((_DWORD *)v28 + 22) = v22;
        *((_DWORD *)v28 + 23) = v23;
        *((_DWORD *)v28 + 24) = *(_DWORD *)&v19[5 * v20 + 16];
        v24 = *((_DWORD *)this + 103);
        v25 = 2 * v20;
        *((_DWORD *)v28 + 24) = (*(unsigned __int8 *)(v24 + 2 * v20 + 5) << 8)
                              | *(unsigned __int8 *)(v24 + 2 * v20 + 4)
                              | (*(unsigned __int8 *)(v24 + 2 * v20 + 6) << 16)
                              | (*(unsigned __int8 *)(v24 + 2 * v20 + 7) << 24);
        v26 = (unsigned __int8 *)(*((_DWORD *)this + 67) + 2 * v20);
        *(_DWORD *)((char *)this + v20 + 132) = (v26[5] << 8) | v26[4] | (v26[6] << 16) | (v26[7] << 24);
        v27 = (int *)((char *)this + v20 + 144);
        v20 += 4;
        v21 = (char *)this + 252;
        *v27 = (*(unsigned __int8 *)(*((_DWORD *)v21 + 16) + v25 + 5) << 8)
             | *(unsigned __int8 *)(*((_DWORD *)v21 + 16) + v25 + 4)
             | (*(unsigned __int8 *)(*((_DWORD *)v21 + 16) + v25 + 6) << 16)
             | (*(unsigned __int8 *)(*((_DWORD *)v21 + 16) + v25 + 7) << 24);
        v28 = (Ogre::FixedString *)((char *)v28 + 16);
      }
      while ( v20 != 12 );
      result = (float)((v19[21] << 8) | v19[20] | (v19[22] << 16) | (v19[23] << 24)) / 100.0;
      *((float *)this + 14) = result;
    }
    *((_BYTE *)this + 238) = 1;
    if ( (unsigned int)(*((_DWORD *)this + 119) - *((_DWORD *)this + 118)) > 0xF
      || (unsigned int)(*((_DWORD *)this + 131) - *((_DWORD *)this + 130)) > 0xF
      || (unsigned int)(*((_DWORD *)this + 143) - *((_DWORD *)this + 142)) > 0xF
      || (unsigned int)(*((_DWORD *)this + 155) - *((_DWORD *)this + 154)) > 0xF
      || (LODWORD(result) = 664, (unsigned int)(*((_DWORD *)this + 167) - *((_DWORD *)this + 166)) > 0x1F)
      || (unsigned int)(*((_DWORD *)this + 179) - *((_DWORD *)this + 178)) > 0xF
      || (unsigned int)(*((_DWORD *)this + 191) - *((_DWORD *)this + 190)) > 0xF
      || (unsigned int)(*((_DWORD *)this + 203) - *((_DWORD *)this + 202)) > 0xF
      || (unsigned int)(*((_DWORD *)this + 215) - *((_DWORD *)this + 214)) > 0xF
      || (LODWORD(result) = 904, (unsigned int)(*((_DWORD *)this + 227) - *((_DWORD *)this + 226)) > 0xF)
      || (unsigned int)(*((_DWORD *)this + 239) - *((_DWORD *)this + 238)) > 0xF
      || (unsigned int)(*((_DWORD *)this + 251) - *((_DWORD *)this + 250)) > 0xF
      || (unsigned int)(*((_DWORD *)this + 263) - *((_DWORD *)this + 262)) > 0xF
      || (unsigned int)(*((_DWORD *)this + 275) - *((_DWORD *)this + 274)) > 0xF
      || (LODWORD(result) = 1144, (unsigned int)(*((_DWORD *)this + 287) - *((_DWORD *)this + 286)) > 0xF)
      || (unsigned int)(*((_DWORD *)this + 299) - *((_DWORD *)this + 298)) > 0xF )
    {
      *((_BYTE *)this + 238) = 0;
    }
  }
  return result;
}

