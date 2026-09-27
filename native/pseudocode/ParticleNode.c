// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ParticleNode

//======================================================================
// ParticleNode::resetUpdate(bool,unsigned int)
// address: 0x002E79BC   size: 0x6 (6 bytes)
//======================================================================
_BYTE *__fastcall ParticleNode::resetUpdate(ParticleNode *this, bool a2, unsigned int a3)
{
  _BYTE *result; // r0

  result = (char *)this + 184;
  *result = a2;
  return result;
}


//======================================================================
// ParticleNode::getRenderPassRequired(Ogre::RenderPassDesc &)
// address: 0x002E79C2   size: 0x2 (2 bytes)
//======================================================================
void ParticleNode::getRenderPassRequired()
{
  ;
}


//======================================================================
// ParticleNode::~ParticleNode()
// address: 0x002E79C4   size: 0x38 (56 bytes)
//======================================================================
// Alternative name is '_ZN12ParticleNodeD1Ev'
void __fastcall ParticleNode::~ParticleNode(ParticleNode *this)
{
  _DWORD *v2; // r0
  void *v3; // r0

  *(_DWORD *)this = &off_461C20;
  v2 = *((_DWORD **)this + 123);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 123) = 0;
  }
  v3 = *((void **)this + 110);
  if ( v3 != nullptr )
    operator delete(v3);
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// ParticleNode::~ParticleNode()
// address: 0x002E7A00   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ParticleNode::~ParticleNode(ParticleNode *this)
{
  ParticleNode::~ParticleNode(this);
  operator delete(this);
}


//======================================================================
// ParticleNode::updateWorldCache(void)
// address: 0x002E7A18   size: 0xA8 (168 bytes)
//======================================================================
__int64 __fastcall ParticleNode::updateWorldCache(ParticleNode *this)
{
  float v2; // r0
  float v3; // r7
  float v4; // r0
  float v5; // r0
  float v7; // [sp+4h] [bp-20h]
  float v8[3]; // [sp+8h] [bp-1Ch] BYREF
  float v9[4]; // [sp+14h] [bp-10h] BYREF

  Ogre::MovableObject::updateWorldCache(this);
  v2 = (double)(*((_DWORD *)this + 2) - Ogre::WorldPos::m_Origin) / 10.0;
  v3 = v2;
  v4 = (double)(*((_DWORD *)this + 3) - dword_4C6B7C) / 10.0;
  v7 = v4;
  v5 = (double)(*((_DWORD *)this + 4) - dword_4C6B80) / 10.0;
  v8[0] = v3 - 25.0;
  v8[1] = v7 - 25.0;
  v8[2] = v5 - 25.0;
  v9[0] = v3 + 25.0;
  v9[1] = v7 + 25.0;
  v9[2] = v5 + 25.0;
  return Ogre::BoxSphereBound::fromBox(
           (ParticleNode *)((char *)this + 140),
           (const Ogre::Vector3 *)v8,
           (const Ogre::Vector3 *)v9);
}


//======================================================================
// ParticleNode::genParticlePlane(ParticleUnit &)
// address: 0x002E7AF0   size: 0x184 (388 bytes)
//======================================================================
Ogre *__fastcall ParticleNode::genParticlePlane(float *a1, float *a2)
{
  float v2; // r5
  float v4; // r7
  float v5; // r4
  float v6; // r6
  float v7; // r0
  float v8; // r0
  float v9; // r4
  float v10; // r0
  float v11; // r4
  float v12; // r0
  Ogre *result; // r0
  float v14; // r4
  float *v15; // [sp+8h] [bp-54h]
  float v16; // [sp+Ch] [bp-50h]
  Ogre::Matrix4 *v18; // [sp+14h] [bp-48h]
  float v19[2]; // [sp+1Ch] [bp-40h] BYREF
  float v20; // [sp+24h] [bp-38h]
  float v21[3]; // [sp+28h] [bp-34h] BYREF
  _BYTE v22[12]; // [sp+34h] [bp-28h] BYREF
  float v23[3]; // [sp+40h] [bp-1Ch] BYREF
  float v24[4]; // [sp+4Ch] [bp-10h] BYREF

  v2 = a1[87];
  v4 = a1[88];
  v15 = a1 + 63;
  v5 = RandFlt(COERCE_FLOAT(LODWORD(v2) + 0x80000000), v2);
  v18 = (Ogre::Matrix4 *)(a1 + 124);
  v20 = RandFlt(COERCE_FLOAT(LODWORD(v4) + 0x80000000), v4);
  v19[0] = v5;
  v19[1] = 0.0;
  Ogre::operator*(v24, v19, a1 + 124);
  *a2 = v24[0];
  v6 = v24[2];
  a2[1] = v24[1];
  a2[2] = v6;
  if ( v19[0] >= 0.0 )
    v7 = v19[0];
  else
    LODWORD(v7) = LODWORD(v19[0]) + 0x80000000;
  v16 = v7 / v4;
  if ( v20 >= 0.0 )
    v8 = v20;
  else
    LODWORD(v8) = LODWORD(v20) + 0x80000000;
  if ( v16 <= (float)(v8 / v2) )
  {
    v9 = v20 / v4;
    if ( (float)(v20 / v4) < 0.0 )
      LODWORD(v9) += 0x80000000;
  }
  else
  {
    v9 = v19[0] / v2;
    if ( (float)(v19[0] / v2) < 0.0 )
      LODWORD(v9) += 0x80000000;
  }
  v10 = j_tan((float)((float)(v9 * v15[12]) * 0.017453));
  v11 = v10;
  Ogre::GetNormalize((Ogre *)v23, (const Ogre::Vector3 *)v19);
  if ( v11 < 0.0 )
    v12 = (float)(v11 * v23[1]) - 1.0;
  else
    v12 = (float)(v11 * v23[1]) + 1.0;
  v21[2] = (float)(v11 * v23[2]) + 0.0;
  v21[0] = (float)(v11 * v23[0]) + 0.0;
  v21[1] = v12;
  Ogre::Normalize(v21);
  Ogre::Matrix4::transformNormal(v18, (Ogre::Vector3 *)v22, (const Ogre::Vector3 *)v21);
  result = Ogre::GetNormalize((Ogre *)v24, (const Ogre::Vector3 *)v22);
  a2[6] = v24[0];
  v14 = v24[2];
  a2[7] = v24[1];
  a2[8] = v14;
  return result;
}


//======================================================================
// ParticleNode::genParticleSphere(ParticleUnit &)
// address: 0x002E7C78   size: 0x2FA (762 bytes)
//======================================================================
Ogre *__fastcall ParticleNode::genParticleSphere(float *a1, float *a2)
{
  float v2; // r0
  float v3; // r1
  float v4; // r6
  float v5; // r5
  float v6; // r3
  float v7; // r4
  int v8; // r6
  double v9; // r4
  float v10; // r0
  double v11; // r0
  int v12; // r2
  float v13; // r5
  float v14; // r0
  float v15; // r4
  float v16; // r0
  float v17; // r0
  int i; // r4
  float *v19; // r5
  float v20; // r0
  float *v21; // r6
  float v22; // r2
  float v23; // r3
  float *v24; // r2
  float v25; // r1
  float v26; // r5
  float v27; // r0
  Ogre *result; // r0
  float *v29; // r2
  float v30; // r4
  int v31; // [sp+0h] [bp-14Ch] BYREF
  float v32; // [sp+4h] [bp-148h]
  float *v33; // [sp+8h] [bp-144h]
  float *v34; // [sp+Ch] [bp-140h]
  float v35; // [sp+10h] [bp-13Ch]
  float v36; // [sp+14h] [bp-138h]
  float *v37; // [sp+18h] [bp-134h]
  float *v38; // [sp+1Ch] [bp-130h]
  float v39; // [sp+20h] [bp-12Ch]
  float v40; // [sp+24h] [bp-128h]
  float v41[2]; // [sp+2Ch] [bp-120h] BYREF
  float v42; // [sp+34h] [bp-118h] BYREF
  float v43; // [sp+38h] [bp-114h]
  float v44; // [sp+3Ch] [bp-110h] BYREF
  float v45; // [sp+40h] [bp-10Ch]
  float v46; // [sp+44h] [bp-108h]
  float v47[16]; // [sp+48h] [bp-104h] BYREF
  char v48[64]; // [sp+88h] [bp-C4h] BYREF
  float v49[16]; // [sp+C8h] [bp-84h] BYREF
  float v50; // [sp+108h] [bp-44h] BYREF
  float v51; // [sp+10Ch] [bp-40h]
  float v52; // [sp+110h] [bp-3Ch]

  v34 = a2;
  v33 = a1;
  v35 = RandFlt(0.0, 1.0);
  if ( v33[75] == 0.0 )
  {
    v2 = -3.1416;
    v3 = 3.1416;
  }
  else
  {
    LODWORD(v2) = *((_DWORD *)v33 + 75) + 0x80000000;
    v3 = v33[75];
  }
  RandFlt(v2, v3);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v47);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v48);
  v4 = (float)(v33[75] * 0.017453) + (float)(v33[75] * 0.017453);
  v5 = v33[76] * 0.017453;
  v6 = v33[88];
  v7 = v33[87];
  v32 = (float)(v33[77] * 0.017453) + (float)(v33[77] * 0.017453);
  v39 = v6;
  v40 = v7;
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v49);
  Ogre::Matrix4::identity((Ogre::Matrix4 *)v47);
  v41[0] = RandFlt(v5 - v4, v4 + v5) * 0.5;
  v41[1] = RandFlt(COERCE_FLOAT(LODWORD(v32) + 0x80000000), v32) * 0.5;
  v8 = 0;
  v38 = &v42;
  do
  {
    v9 = v41[v8];
    v10 = j_cos(v9);
    *(float *)((char *)&v31 + v8 * 4 + 52) = v10;
    v11 = j_sin(v9);
    v37 = &v44;
    *(float *)&v11 = v11;
    v12 = v8 * 4 + 60;
    ++v8;
    *(int *)((char *)&v31 + v12) = LODWORD(v11);
  }
  while ( v8 != 2 );
  Ogre::Matrix4::identity((Ogre::Matrix4 *)v49);
  LODWORD(v36) = LODWORD(v44) + 0x80000000;
  v32 = v44;
  v49[9] = v44;
  v13 = v42;
  LODWORD(v49[6]) = LODWORD(v44) + 0x80000000;
  v49[5] = v42;
  v49[10] = v42;
  Ogre::operator*((Ogre::Matrix4 *)&v50, v47, v49);
  Ogre::Matrix4::operator=(v47, &v50);
  Ogre::Matrix4::identity((Ogre::Matrix4 *)v49);
  v49[0] = v43;
  v49[5] = v43;
  v49[4] = v45;
  LODWORD(v49[1]) = LODWORD(v45) + 0x80000000;
  Ogre::operator*((Ogre::Matrix4 *)&v50, v47, v49);
  Ogre::Matrix4::operator=(v47, &v50);
  if ( v13 >= 0.0 )
    v14 = v13;
  else
    LODWORD(v14) = LODWORD(v13) + 0x80000000;
  v15 = v14 * v40;
  if ( v32 < 0.0 )
    v16 = v36;
  else
    v16 = v32;
  v17 = v15 + (float)(v16 * v39);
  for ( i = 0; i != 12; i += 4 )
  {
    v19 = &v47[i];
    v47[i] = v47[i] * v17;
    v19[1] = v47[i + 1] * v17;
    v19[2] = v19[2] * v17;
  }
  v52 = 1.0;
  v50 = 0.0;
  v51 = 0.0;
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v47, (Ogre::Vector3 *)&v44, (const Ogre::Vector3 *)&v50);
  v44 = v44 * v35;
  v20 = v46 * v35;
  v46 = v35 * v45;
  v45 = v20;
  v21 = v33 + 124;
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)(v33 + 124), (Ogre::Vector3 *)&v44, (const Ogre::Vector3 *)&v44);
  v22 = v21[13];
  v49[0] = v21[12];
  v23 = v21[14];
  v49[1] = v22;
  v49[2] = v23;
  Ogre::operator+(&v50, v49, &v44);
  v24 = v34;
  v25 = v44;
  *v34 = v50;
  v24[1] = v51;
  v24[2] = v52;
  v32 = v45;
  v35 = v46;
  v36 = v25 * v25;
  v32 = (float)(v25 * v25) + (float)(v32 * v32);
  if ( (float)(v32 + (float)(v35 * v35)) == 0.0 )
  {
    v34[9] = 0.0;
    v51 = 1.0;
    v50 = 0.0;
    v52 = 0.0;
    Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v21, (Ogre::Vector3 *)v49, (const Ogre::Vector3 *)&v50);
  }
  else
  {
    Ogre::GetNormalize((Ogre *)&v50, (const Ogre::Vector3 *)&v44);
    v49[0] = v50;
    v49[1] = v51;
    v49[2] = v52;
    v26 = v33[72];
    v27 = RandFlt(COERCE_FLOAT(*((_DWORD *)v33 + 73) + 0x80000000), v33[73]);
    v34[9] = (float)(v26 * (float)(v27 + 1.0)) * v33[172];
  }
  result = Ogre::GetNormalize((Ogre *)&v50, (const Ogre::Vector3 *)v49);
  v29 = v34;
  v34[6] = v50;
  v30 = v52;
  v29[7] = v51;
  v29[8] = v30;
  return result;
}


//======================================================================
// ParticleNode::genParticleCircle(ParticleUnit &)
// address: 0x002E7F80   size: 0x1AA (426 bytes)
//======================================================================
Ogre *__fastcall ParticleNode::genParticleCircle(float *a1, float *a2)
{
  float *v2; // r4
  float v4; // r7
  float v5; // r0
  float v6; // r6
  float v7; // r7
  float v8; // r1
  float v9; // r5
  float v10; // r0
  float v11; // r4
  float v12; // r0
  Ogre *result; // r0
  float v14; // r4
  float v15; // [sp+Ch] [bp-58h]
  Ogre::Matrix4 *v16; // [sp+10h] [bp-54h]
  float v18; // [sp+18h] [bp-4Ch]
  float v19[2]; // [sp+24h] [bp-40h] BYREF
  float v20; // [sp+2Ch] [bp-38h]
  float v21[3]; // [sp+30h] [bp-34h] BYREF
  _BYTE v22[12]; // [sp+3Ch] [bp-28h] BYREF
  float v23[3]; // [sp+48h] [bp-1Ch] BYREF
  float v24[4]; // [sp+54h] [bp-10h] BYREF

  v2 = a1 + 63;
  v4 = RandFlt(COERCE_FLOAT(*((_DWORD *)a1 + 87) + 0x80000000), a1[87]);
  v5 = j_sqrt((float)((float)(v2[24] * v2[24]) - (float)(v4 * v4)));
  v16 = (Ogre::Matrix4 *)(a1 + 124);
  v19[0] = v4;
  v20 = RandFlt(COERCE_FLOAT(LODWORD(v5) + 0x80000000), v5);
  v19[1] = 0.0;
  Ogre::operator*(v24, v19, a1 + 124);
  *a2 = v24[0];
  v6 = v24[2];
  a2[1] = v24[1];
  a2[2] = v6;
  v15 = v2[24];
  v18 = v2[25];
  v7 = v15 / v18;
  if ( (float)(v15 / v18) < 0.0 )
    LODWORD(v7) = COERCE_INT(v15 / v18) + 0x80000000;
  v8 = v20 / v19[0];
  if ( (float)(v20 / v19[0]) < 0.0 )
    LODWORD(v8) = COERCE_INT(v20 / v19[0]) + 0x80000000;
  if ( v7 <= v8 )
  {
    v9 = v20 / v18;
    if ( (float)(v20 / v18) < 0.0 )
      LODWORD(v9) += 0x80000000;
  }
  else
  {
    v9 = v19[0] / v15;
    if ( (float)(v19[0] / v15) < 0.0 )
      LODWORD(v9) += 0x80000000;
  }
  v10 = j_tan((float)((float)(v9 * v2[12]) * 0.017453));
  v11 = v10;
  Ogre::GetNormalize((Ogre *)v23, (const Ogre::Vector3 *)v19);
  if ( v11 < 0.0 )
    v12 = (float)(v11 * v23[1]) - 1.0;
  else
    v12 = (float)(v11 * v23[1]) + 1.0;
  v21[2] = (float)(v11 * v23[2]) + 0.0;
  v21[0] = (float)(v11 * v23[0]) + 0.0;
  v21[1] = v12;
  Ogre::Normalize(v21);
  Ogre::Matrix4::transformNormal(v16, (Ogre::Vector3 *)v22, (const Ogre::Vector3 *)v21);
  result = Ogre::GetNormalize((Ogre *)v24, (const Ogre::Vector3 *)v22);
  a2[6] = v24[0];
  v14 = v24[2];
  a2[7] = v24[1];
  a2[8] = v14;
  return result;
}


//======================================================================
// ParticleNode::transformParticle(ParticleUnit &,float)
// address: 0x002E8130   size: 0x15A (346 bytes)
//======================================================================
float __fastcall ParticleNode::transformParticle(float *a1, float *a2, float a3)
{
  float v3; // r6
  float v6; // r7
  float v7; // r6
  float v8; // r0
  float v9; // r1
  float v10; // r0
  float v11; // r0
  float v12; // r6
  float v13; // r0
  float result; // r0
  float v15; // [sp+4h] [bp-48h]
  float v16; // [sp+4h] [bp-48h]
  float v18; // [sp+8h] [bp-44h]
  float v19; // [sp+8h] [bp-44h]
  float v20; // [sp+Ch] [bp-40h]
  float v21; // [sp+14h] [bp-38h]
  float v22; // [sp+18h] [bp-34h] BYREF
  float v23; // [sp+1Ch] [bp-30h]
  float v24; // [sp+20h] [bp-2Ch]
  float v25[3]; // [sp+24h] [bp-28h] BYREF
  float v26[3]; // [sp+30h] [bp-1Ch] BYREF
  float v27[4]; // [sp+3Ch] [bp-10h] BYREF

  v3 = a1[172];
  v20 = (float)(v3 * a1[81]) * a3;
  v6 = a2[9];
  v7 = (float)(v3 * a1[82]) * a3;
  v21 = v6 * a2[8];
  v8 = a2[6] * v6;
  v25[1] = a2[9] * a2[7];
  v9 = a1[79];
  v25[0] = v8;
  v25[2] = v21;
  v10 = a1[78] * v20;
  v26[2] = v20 * a1[80];
  v26[0] = v10;
  v26[1] = v20 * v9;
  Ogre::operator+(v27, v25, v26);
  v15 = v27[1] - (float)(v7 * a2[7]);
  v18 = v27[2] - (float)(v7 * a2[8]);
  v22 = v27[0] - (float)(v7 * a2[6]);
  v23 = v15;
  v24 = v18;
  v11 = Ogre::Vector3::length((Ogre::Vector3 *)&v22);
  a2[9] = v11;
  if ( v11 >= 0.001 )
  {
    v16 = v23 / v11;
    v19 = v24 / v11;
    a2[6] = v22 / v11;
    a2[7] = v16;
    a2[8] = v19;
  }
  else
  {
    a2[9] = 0.0;
  }
  v12 = a3 * v23;
  v13 = a3 * v24;
  *a2 = *a2 + (float)(a3 * v22);
  a2[1] = a2[1] + v12;
  result = a2[2] + v13;
  a2[2] = result;
  return result;
}


//======================================================================
// ParticleNode::updateParticles(float)
// address: 0x002E8290   size: 0xAE (174 bytes)
//======================================================================
int __fastcall ParticleNode::updateParticles(ParticleNode *this, float a2)
{
  int v4; // r6
  int result; // r0
  int v6; // r3
  int v7; // r4
  float v8; // r0
  float v9; // r1
  _DWORD *v10; // r3
  int v11; // r12

  v4 = 0;
  while ( 1 )
  {
    result = 440;
    v6 = *((_DWORD *)this + 110);
    if ( v4 >= -286331153 * ((*((_DWORD *)this + 111) - v6) >> 2) )
      break;
    v7 = v6 + 60 * v4;
    v8 = a2 + *(float *)(v7 + 40);
    v9 = *(float *)(v7 + 44);
    *(float *)(v7 + 40) = v8;
    if ( v8 < v9 )
    {
      ParticleNode::transformParticle((float *)this, (float *)(v6 + 60 * v4++), a2);
    }
    else
    {
      v10 = (_DWORD *)(*((_DWORD *)this + 111) - 60);
      v11 = *((_DWORD *)this + 111);
      *(_DWORD *)v7 = *v10;
      *(_DWORD *)(v7 + 4) = v10[1];
      *(_DWORD *)(v7 + 8) = v10[2];
      *(_DWORD *)(v7 + 12) = *(_DWORD *)(v11 - 48);
      *(_DWORD *)(v7 + 16) = *(_DWORD *)(v11 - 44);
      *(_DWORD *)(v7 + 20) = *(_DWORD *)(v11 - 40);
      *(_DWORD *)(v7 + 24) = *(_DWORD *)(v11 - 36);
      *(_DWORD *)(v7 + 28) = *(_DWORD *)(v11 - 32);
      *(_DWORD *)(v7 + 32) = *(_DWORD *)(v11 - 28);
      *(_DWORD *)(v7 + 36) = v10[9];
      *(_DWORD *)(v7 + 40) = v10[10];
      *(_DWORD *)(v7 + 44) = v10[11];
      *(_DWORD *)(v7 + 48) = v10[12];
      *(_DWORD *)(v7 + 52) = v10[13];
      *(_DWORD *)(v7 + 56) = v10[14];
      *((_DWORD *)this + 111) -= 60;
      --*((_DWORD *)this + 113);
    }
  }
  return result;
}


//======================================================================
// ParticleNode::transformDirRandom(ParticleUnit &)
// address: 0x002E8344   size: 0x6C (108 bytes)
//======================================================================
float __fastcall ParticleNode::transformDirRandom(int a1, int a2)
{
  float v2; // r7
  float result; // r0
  float v4; // [sp+0h] [bp-10Ch]
  float v6[16]; // [sp+8h] [bp-104h] BYREF
  float v7[16]; // [sp+48h] [bp-C4h] BYREF
  _BYTE v8[64]; // [sp+88h] [bp-84h] BYREF
  _BYTE v9[68]; // [sp+C8h] [bp-44h] BYREF

  v2 = *(float *)(a1 + 356);
  v4 = RandFlt(0.0, 360.0);
  LODWORD(result) = v2 <= 0.00001;
  if ( v2 > 0.00001 )
  {
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v6);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v7);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v8);
    Ogre::Matrix4::makeRotateZ((Ogre::Matrix4 *)v6, (Ogre *)LODWORD(v2));
    Ogre::Matrix4::makeRotateY((Ogre::Matrix4 *)v7, (Ogre *)LODWORD(v4));
    Ogre::operator*((Ogre::Matrix4 *)v9, v6, v7);
    Ogre::Matrix4::operator=(v8, v9);
    return Ogre::Matrix4::transformNormal(
             (Ogre::Matrix4 *)v8,
             (Ogre::Vector3 *)(a2 + 24),
             (const Ogre::Vector3 *)(a2 + 24));
  }
  return result;
}


//======================================================================
// ParticleNode::setParticleCommonVar(ParticleUnit &)
// address: 0x002E83B8   size: 0xCA (202 bytes)
//======================================================================
__int64 __fastcall ParticleNode::setParticleCommonVar(int a1, int a2)
{
  int v2; // r5
  float v4; // r7
  float v5; // r6
  __int64 v7; // [sp+0h] [bp-Ch]

  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 312);
  v2 = a1 + 252;
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 316);
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 320);
  v4 = *(float *)(a1 + 288);
  *(float *)(a2 + 36) = (float)(v4
                              * (float)(RandFlt(COERCE_FLOAT(*(_DWORD *)(a1 + 292) + 0x80000000), *(float *)(a1 + 292))
                                      + 1.0))
                      * *(float *)(a1 + 688);
  *(_DWORD *)(a2 + 40) = 0;
  LODWORD(v7) = *(_DWORD *)(v2 + 80);
  *((float *)&v7 + 1) = *(float *)(v2 + 84) + 1.0;
  v5 = *(float *)&v7 * RandFlt(*((float *)&v7 + 1), 1.0 - *(float *)(v2 + 84));
  if ( v5 <= 0.0 )
    *(_DWORD *)(a2 + 44) = 0;
  else
    *(float *)(a2 + 44) = v5;
  *(float *)(a2 + 52) = RandFlt(*(float *)(v2 + 108) + 1.0, 1.0 - *(float *)(v2 + 108));
  if ( *(_DWORD *)(v2 + 20) != 0 )
    *(_DWORD *)(a2 + 48) = j_lrand48() % (*(_DWORD *)(v2 + 28) * *(_DWORD *)(v2 + 24));
  else
    *(_DWORD *)(a2 + 48) = 0;
  return v7;
}


//======================================================================
// ParticleNode::genParticle(ParticleUnit &)
// address: 0x002E8484   size: 0x44 (68 bytes)
//======================================================================
__int64 __fastcall ParticleNode::genParticle(int a1, float *a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a1 + 256);
  switch ( v2 )
  {
    case 1:
      ParticleNode::genParticleSphere((float *)a1, a2);
      break;
    case 2:
      ParticleNode::genParticleCircle((float *)a1, a2);
      break;
    case 0:
      ParticleNode::genParticlePlane((float *)a1, a2);
      break;
    default:
      break;
  }
  a2[14] = RandFlt(0.0, 360.0);
  ParticleNode::transformDirRandom(a1, (int)a2);
  return ParticleNode::setParticleCommonVar(a1, (int)a2);
}


//======================================================================
// ParticleNode::setTexture(Ogre::Texture *)
// address: 0x002E84CC   size: 0x2A (42 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ParticleNode::setTexture(ParticleNode *this, Ogre::Texture *a2, int a3)
{
  Ogre::Material *v4; // r6
  void *v5; // r1
  Ogre::FixedString *v6; // [sp+4h] [bp-4h] BYREF

  v4 = *((Ogre::Material **)this + 123);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v6, (Ogre::FixedString *)"g_DiffuseTex", a3);
  Ogre::Material::setParamTexture(v4, (const Ogre::FixedString *)&v6, a2, 0);
  Ogre::FixedString::~FixedString(&v6, v5);
}


//======================================================================
// ParticleNode::fillParticleVert(ParticleVertex *,unsigned short,unsigned short *,ParticleUnit &,Ogre::Matrix4 const&)
// address: 0x002E8504   size: 0x9A0 (2464 bytes)
//======================================================================
int __fastcall ParticleNode::fillParticleVert(
        float *a1,
        float *a2,
        int a3,
        int a4,
        Ogre::Vector3 *a5,
        Ogre::Matrix4 *a6)
{
  float v7; // r4
  float v8; // r5
  float v9; // r4
  float v10; // r4
  float v11; // r1
  float v12; // r0
  float v13; // r2
  float v14; // r0
  float v15; // r6
  float v16; // r0
  float v17; // r5
  float v18; // r0
  Ogre::MovableObject *v19; // r2
  float v20; // r6
  float v21; // r5
  int v22; // r3
  float v23; // r1
  float v24; // r0
  float v25; // r2
  float v26; // r0
  float v27; // r6
  float v28; // r0
  float v29; // r5
  float v30; // r0
  int v31; // r3
  float v32; // r5
  float v33; // r4
  int v34; // r4
  int v35; // r5
  int v36; // r6
  double v37; // r0
  float v38; // r0
  float v39; // r5
  int v40; // r3
  float v41; // r2
  float v42; // r2
  float v43; // r5
  float v44; // r0
  char *WorldMatrix; // r0
  int v46; // r5
  float v47; // r4
  float v48; // r3
  int i; // r4
  float v50; // r1
  float v51; // r0
  float v52; // r1
  float v53; // r1
  float v54; // r4
  float v55; // r1
  float v56; // r4
  float v57; // r1
  float v58; // r4
  float v59; // r2
  float v60; // r0
  Ogre::MovableObject *v61; // r3
  float v62; // r1
  float v63; // r1
  float v64; // r0
  float v65; // r3
  float v66; // r1
  float v67; // r2
  float v68; // r0
  Ogre::MovableObject *v69; // r3
  float v70; // r1
  float v71; // r1
  float v72; // r3
  float v73; // r2
  float v74; // r0
  Ogre::MovableObject *v75; // r3
  float v76; // r1
  float v77; // r1
  float v78; // r3
  float v79; // r2
  float v80; // r0
  float *v81; // r4
  float v82; // r2
  float v83; // r0
  Ogre::MovableObject *v84; // r3
  float v85; // r1
  float v86; // r3
  float v87; // r1
  float v88; // r2
  float v89; // r0
  Ogre::MovableObject *v90; // r3
  float v91; // r1
  float v92; // r3
  float v93; // r2
  float v94; // r0
  Ogre::MovableObject *v95; // r3
  float v96; // r1
  float v97; // r1
  float v98; // r0
  float v99; // r3
  float v100; // r1
  float v101; // r0
  float v102; // r3
  Ogre::MovableObject *v103; // r3
  float v104; // r0
  float v105; // r4
  int result; // r0
  _WORD *v107; // r4
  _BYTE v108[8]; // [sp+0h] [bp-1DCh] BYREF
  float v109; // [sp+8h] [bp-1D4h]
  float v110; // [sp+Ch] [bp-1D0h]
  float *v111; // [sp+10h] [bp-1CCh]
  float v112; // [sp+14h] [bp-1C8h]
  Ogre::MovableObject *v113; // [sp+18h] [bp-1C4h]
  float v114; // [sp+1Ch] [bp-1C0h]
  float v115; // [sp+20h] [bp-1BCh]
  float v116; // [sp+24h] [bp-1B8h]
  float v117; // [sp+28h] [bp-1B4h]
  float v118; // [sp+2Ch] [bp-1B0h]
  float v119; // [sp+30h] [bp-1ACh]
  float v120; // [sp+34h] [bp-1A8h]
  int v121; // [sp+38h] [bp-1A4h]
  int v122; // [sp+3Ch] [bp-1A0h]
  float v123; // [sp+40h] [bp-19Ch]
  float v124; // [sp+44h] [bp-198h]
  float v125; // [sp+48h] [bp-194h]
  float v126; // [sp+4Ch] [bp-190h]
  float v127[3]; // [sp+54h] [bp-188h] BYREF
  float v128; // [sp+60h] [bp-17Ch] BYREF
  float v129; // [sp+64h] [bp-178h]
  float v130; // [sp+68h] [bp-174h]
  float v131[3]; // [sp+6Ch] [bp-170h] BYREF
  float v132; // [sp+78h] [bp-164h] BYREF
  int v133; // [sp+7Ch] [bp-160h]
  float v134; // [sp+80h] [bp-15Ch]
  float v135; // [sp+84h] [bp-158h] BYREF
  float v136; // [sp+88h] [bp-154h]
  float v137; // [sp+8Ch] [bp-150h]
  float v138[3]; // [sp+90h] [bp-14Ch] BYREF
  float v139; // [sp+9Ch] [bp-140h] BYREF
  float v140; // [sp+A0h] [bp-13Ch]
  float v141; // [sp+A4h] [bp-138h]
  float v142; // [sp+A8h] [bp-134h]
  float v143; // [sp+ACh] [bp-130h] BYREF
  float v144; // [sp+B0h] [bp-12Ch]
  float v145[7]; // [sp+B4h] [bp-128h]
  float v146[9]; // [sp+D0h] [bp-10Ch] BYREF
  float v147; // [sp+F4h] [bp-E8h] BYREF
  float v148; // [sp+F8h] [bp-E4h]
  float v149; // [sp+FCh] [bp-E0h]
  int v150; // [sp+100h] [bp-DCh]
  float v151[16]; // [sp+118h] [bp-C4h] BYREF
  float v152[16]; // [sp+158h] [bp-84h] BYREF
  float v153; // [sp+198h] [bp-44h] BYREF
  float v154; // [sp+19Ch] [bp-40h]
  float v155; // [sp+1A0h] [bp-3Ch]

  v113 = (Ogre::MovableObject *)a1;
  v7 = *((float *)a5 + 10);
  v121 = a4;
  v122 = a3;
  v114 = v7;
  v8 = v7 / *((float *)a5 + 11);
  v9 = a1[85];
  if ( v8 > v9 )
  {
    v10 = (float)(v8 - v9) / (float)(1.0 - v9);
    v23 = *((float *)v113 + 96);
    v109 = *((float *)v113 + 95);
    v24 = *((float *)v113 + 100);
    v110 = v23;
    v25 = *((float *)v113 + 97);
    v117 = v23 + (float)((float)(v24 - v23) * v10);
    v26 = *((float *)v113 + 101);
    v110 = v25;
    v27 = *((float *)v113 + 98);
    v110 = v25 + (float)((float)(v26 - v25) * v10);
    v28 = v27 + (float)((float)(*((float *)v113 + 102) - v27) * v10);
    v139 = v109 + (float)((float)(*((float *)v113 + 99) - v109) * v10);
    v140 = v117;
    v142 = v28;
    v29 = *((float *)v113 + 104);
    v141 = v110;
    v19 = v113;
    v20 = *((float *)v113 + 107);
    v21 = v29 + (float)((float)(*((float *)v113 + 105) - v29) * v10);
    v22 = 216;
  }
  else
  {
    v10 = v8 / v9;
    v11 = *((float *)v113 + 92);
    v12 = *((float *)v113 + 96);
    v109 = *((float *)v113 + 91);
    v110 = v11;
    v13 = *((float *)v113 + 93);
    v117 = v11 + (float)((float)(v12 - v11) * v10);
    v14 = *((float *)v113 + 97);
    v110 = v13;
    v15 = *((float *)v113 + 94);
    v110 = v13 + (float)((float)(v14 - v13) * v10);
    v16 = v15 + (float)((float)(*((float *)v113 + 98) - v15) * v10);
    v139 = v109 + (float)((float)(*((float *)v113 + 95) - v109) * v10);
    v141 = v110;
    v142 = v16;
    v17 = *((float *)v113 + 103);
    v18 = *((float *)v113 + 104);
    v140 = v117;
    v19 = v113;
    v20 = *((float *)v113 + 106);
    v21 = v17 + (float)((float)(v18 - v17) * v10);
    v22 = 214;
  }
  v30 = v20 + (float)((float)(*(float *)((char *)v19 + 2 * v22) - v20) * v10);
  v109 = v21 * *((float *)a5 + 13);
  v31 = *((_DWORD *)v113 + 63);
  if ( (unsigned int)(v31 - 2) > 1 )
  {
    if ( v31 == 4 )
    {
      v32 = *((float *)v113 + 173);
      v139 = v139 * v32;
      v140 = v140 * v32;
      v141 = v141 * v32;
    }
  }
  else
  {
    v142 = v142 * *((float *)v113 + 173);
  }
  v33 = *((float *)v113 + 172);
  v124 = v109 * v33;
  v125 = (float)(v109 * v30) * v33;
  v34 = *((_DWORD *)a5 + 12);
  if ( *((_DWORD *)v113 + 68) != 2 && *((float *)v113 + 71) > 0.00001 )
    v34 += (int)(float)(v114 / *((float *)v113 + 71));
  v35 = *((_DWORD *)v113 + 70);
  v36 = *((_DWORD *)v113 + 69);
  LODWORD(v109) = (char *)v113 + 252;
  v114 = (float)(v34 % v35);
  v117 = v114 * (float)(1.0 / (float)v35);
  v120 = (float)(v34 / v35 % v36) * (float)(1.0 / (float)v36);
  v115 = COERCE_FLOAT(v127);
  Ogre::Matrix4::transformCoord(a6, (Ogre::Vector3 *)v127, a5);
  v110 = COERCE_FLOAT(v151);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v151);
  Ogre::Matrix4::makeRotateZ(
    (Ogre::Matrix4 *)v151,
    COERCE_OGRE_((float)(*((float *)v113 + 74) * *((float *)a5 + 10)) + *((float *)a5 + 14)));
  if ( *((_DWORD *)v113 + 65) != 0 )
  {
    v114 = COERCE_FLOAT(&v153);
    Ogre::operator*(&v153, v127, (float *)v113 + 156);
    v119 = v153;
    v128 = 0.0;
    v118 = v154;
    v129 = 0.0;
    v130 = 0.0;
    v123 = v155;
    Ogre::operator*(&v153, &v128, (float *)v113 + 156);
    v116 = v153;
    v128 = v153;
    v130 = v155;
    v129 = v154;
    v118 = v154 - v118;
    v131[0] = v153 - v119;
    v131[1] = v118;
    v131[2] = v155 - v123;
    v37 = (float)(v118 / Ogre::Vector3::length((Ogre::Vector3 *)v131));
    v38 = j_asin(v37);
    v39 = v38 * 57.296;
    v40 = *(_DWORD *)(LODWORD(v109) + 8);
    v132 = 1.0;
    v133 = 0;
    v134 = 0.0;
    v109 = COERCE_FLOAT(v152);
    switch ( v40 )
    {
      case 1:
        Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v152);
        LODWORD(v41) = LODWORD(v39) + 0x80000000;
LABEL_16:
        Ogre::Matrix4::makeRotateMatrix((Ogre::Matrix4 *)v152, (const Ogre::Vector3 *)&v132, v41);
LABEL_23:
        Ogre::operator*((Ogre::Matrix4 *)&v153, v151, v152);
        Ogre::Matrix4::operator=(v151, &v153);
        break;
      case 2:
        Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v152);
        v41 = 90.0 - v39;
        goto LABEL_16;
      case 5:
        break;
      case 3:
        Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v152);
        v135 = 0.0 - v127[0];
        v137 = 0.0 - v127[2];
        v136 = 0.0 - v127[1];
        Ogre::Normalize(&v135);
        Ogre::Matrix4::transformNormal(a6, (Ogre::Vector3 *)v138, (Ogre::Vector3 *)((char *)a5 + 24));
        Ogre::Normalize(v138);
        v115 = v138[2];
        v112 = v138[1];
        v119 = (float)(v136 * v138[2]) - (float)(v137 * v138[1]);
        v123 = (float)(v137 * v138[0]) - (float)(v135 * v138[2]);
        v143 = v119;
        v116 = COERCE_FLOAT(&v143);
        v145[0] = (float)(v135 * v138[1]) - (float)(v136 * v138[0]);
        v118 = COERCE_FLOAT(v146);
        qmemcpy(v146, v138, 12);
        v144 = v123;
        v126 = v123 * v138[2];
        v147 = (float)(v123 * v138[2]) - (float)(v145[0] * v138[1]);
        v148 = (float)(v145[0] * v138[0]) - (float)(v119 * v138[2]);
        v149 = (float)(v119 * v138[1]) - (float)(v123 * v138[0]);
        Ogre::Matrix4::makeRotateMatrix(v152, &v143, v146, &v147);
        goto LABEL_23;
      case 4:
        v42 = *((float *)a5 + 7);
        v43 = *((float *)a5 + 8);
        v44 = *((float *)a5 + 6);
        v150 = 1065353216;
        v147 = 0.0;
        v148 = 0.0;
        v149 = 0.0;
        v116 = v44 * v44;
        v115 = (float)(v44 * v44) + (float)(v42 * v42);
        if ( (float)(v115 + (float)(v43 * v43)) > 0.0 )
        {
          Ogre::Matrix4::transformNormal(a6, (Ogre::Vector3 *)v146, (Ogre::Vector3 *)((char *)a5 + 24));
          Ogre::Normalize(v146);
          v155 = 1.0;
          v153 = 0.0;
          v154 = 0.0;
          Ogre::Quaternion::setRotateArc(
            (Ogre::Quaternion *)&v147,
            (const Ogre::Vector3 *)&v153,
            (const Ogre::Vector3 *)v146);
          Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v152);
          Ogre::Quaternion::getMatrix((Ogre::Quaternion *)&v147, (Ogre::Matrix4 *)v152);
          goto LABEL_23;
        }
        break;
      default:
        break;
    }
  }
  v114 = COERCE_FLOAT(Ogre::ColourValue::getAsRGBA((Ogre::ColourValue *)&v139));
  if ( *((_DWORD *)v113 + 65) == 5 )
  {
    WorldMatrix = Ogre::MovableObject::getWorldMatrix(v113);
    Ogre::Matrix4::Matrix4((int)v152, (const Ogre::Matrix4 *)WorldMatrix);
    Ogre::Matrix4::getMatrix3(v152, &v143);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)&v153);
    Ogre::Matrix4::identity((Ogre::Matrix4 *)&v153);
    v46 = 0;
    Ogre::Matrix4::makeRotateY(
      (Ogre::Matrix4 *)&v153,
      COERCE_OGRE_((float)(*((float *)v113 + 74) * *((float *)a5 + 10)) + *((float *)a5 + 14)));
    Ogre::Matrix4::getMatrix3(&v153, v146);
    v110 = COERCE_FLOAT(v146);
    v111 = &v143;
    v109 = COERCE_FLOAT(&v147);
    do
    {
      v47 = *(float *)((char *)&v143 + v46 * 4 + 4);
      v48 = v145[v46];
      v115 = *(float *)&v108[v46 * 4 + 172];
      v112 = v47;
      v116 = v48;
      for ( i = 0; i != 3; ++i )
      {
        LODWORD(v118) = (char *)&v147 + v46 * 4;
        v50 = v146[i + 3];
        v119 = v115 * *(float *)&v108[i * 4 + 208];
        v51 = v112 * v50;
        v52 = v146[i + 6];
        v119 = v119 + v51;
        *(float *)(LODWORD(v118) + i * 4) = v119 + (float)(v116 * v52);
      }
      v46 += 3;
    }
    while ( v46 != 9 );
    v111 = &v143;
    v53 = *(float *)(LODWORD(v109) + 4);
    v54 = *(float *)(LODWORD(v109) + 8);
    v143 = *(float *)LODWORD(v109);
    v144 = v53;
    v145[0] = v54;
    v55 = *(float *)(LODWORD(v109) + 16);
    v56 = *(float *)(LODWORD(v109) + 20);
    v145[1] = *(float *)(LODWORD(v109) + 12);
    v145[2] = v55;
    v145[3] = v56;
    v57 = *(float *)(LODWORD(v109) + 28);
    v58 = *(float *)(LODWORD(v109) + 32);
    v145[4] = *(float *)(LODWORD(v109) + 24);
    v145[5] = v57;
    v145[6] = v58;
    v110 = 0.0 - v124;
    v115 = v125 + 0.0;
    v132 = 0.0 - v124;
    v134 = v125 + 0.0;
    v133 = 0;
    v81 = v138;
    Ogre::operator*(&v135, &v132, &v143);
    v109 = COERCE_FLOAT(v127);
    Ogre::operator+(v138, v127, &v135);
    v59 = v138[0];
    v60 = v138[2];
    a2[1] = v138[1];
    v61 = v113;
    v62 = v114;
    *a2 = v59;
    a2[2] = v60;
    a2[3] = v62;
    v63 = *((float *)v113 + 115);
    v112 = v120 + *((float *)v61 + 116);
    v64 = v117 + v63;
    v65 = v112;
    v66 = v125;
    a2[4] = v64;
    a2[5] = v65;
    v112 = 0.0 - v66;
    v133 = 0;
    v132 = v110;
    v134 = 0.0 - v66;
    Ogre::operator*(&v135, &v132, &v143);
    Ogre::operator+(v138, (float *)LODWORD(v109), &v135);
    v67 = v114;
    v68 = v138[1];
    a2[6] = v138[0];
    v69 = v113;
    v70 = v138[2];
    a2[7] = v68;
    a2[9] = v67;
    a2[8] = v70;
    v71 = *((float *)v113 + 117);
    v110 = v120 + *((float *)v69 + 118);
    v72 = v110;
    a2[10] = v117 + v71;
    a2[11] = v72;
    v110 = v124 + 0.0;
    v132 = v124 + 0.0;
    v133 = 0;
    v134 = v112;
    Ogre::operator*(&v135, &v132, &v143);
    Ogre::operator+(v138, (float *)LODWORD(v109), &v135);
    v73 = v138[0];
    v74 = v138[2];
    a2[13] = v138[1];
    v75 = v113;
    v76 = v114;
    a2[12] = v73;
    a2[14] = v74;
    a2[15] = v76;
    v77 = *((float *)v113 + 119);
    v112 = v120 + *((float *)v75 + 120);
    v78 = v112;
    v79 = v115;
    a2[16] = v117 + v77;
    v80 = v110;
    a2[17] = v78;
    v132 = v80;
    v133 = 0;
    v134 = v79;
    Ogre::operator*(&v135, &v132, &v143);
    Ogre::operator+(v138, (float *)LODWORD(v109), &v135);
    v102 = v138[0];
  }
  else
  {
    v110 = 0.0 - v124;
    v115 = v125 + 0.0;
    v147 = 0.0 - v124;
    v148 = v125 + 0.0;
    v111 = v151;
    v149 = 0.0;
    v81 = &v153;
    Ogre::operator*(v152, &v147, v151);
    v109 = COERCE_FLOAT(v127);
    Ogre::operator+(&v153, v127, v152);
    v82 = v153;
    v83 = v155;
    a2[1] = v154;
    v84 = v113;
    v85 = v114;
    *a2 = v82;
    a2[2] = v83;
    a2[3] = v85;
    v86 = v120 + *((float *)v84 + 116);
    v87 = v125;
    a2[4] = v117 + *((float *)v113 + 115);
    a2[5] = v86;
    v112 = 0.0 - v87;
    v148 = 0.0 - v87;
    v147 = v110;
    v149 = 0.0;
    Ogre::operator*(v152, &v147, v111);
    Ogre::operator+(&v153, (float *)LODWORD(v109), v152);
    v88 = v114;
    v89 = v154;
    a2[6] = v153;
    v90 = v113;
    v91 = v155;
    a2[7] = v89;
    a2[9] = v88;
    a2[8] = v91;
    v92 = v120 + *((float *)v90 + 118);
    a2[10] = v117 + *((float *)v113 + 117);
    a2[11] = v92;
    v110 = v124 + 0.0;
    v147 = v124 + 0.0;
    v149 = 0.0;
    v148 = v112;
    Ogre::operator*(v152, &v147, v111);
    Ogre::operator+(&v153, (float *)LODWORD(v109), v152);
    v93 = v153;
    v94 = v155;
    a2[13] = v154;
    v95 = v113;
    v96 = v114;
    a2[12] = v93;
    a2[14] = v94;
    a2[15] = v96;
    v97 = *((float *)v113 + 119);
    v112 = v120 + *((float *)v95 + 120);
    v98 = v117 + v97;
    v99 = v112;
    v100 = v115;
    a2[16] = v98;
    v101 = v110;
    a2[17] = v99;
    v147 = v101;
    v148 = v100;
    v149 = 0.0;
    Ogre::operator*(v152, &v147, v111);
    Ogre::operator+(&v153, (float *)LODWORD(v109), v152);
    v102 = v153;
  }
  a2[18] = v102;
  v103 = v113;
  a2[19] = v81[1];
  a2[20] = v81[2];
  v104 = v120;
  a2[21] = v114;
  v105 = v104 + *((float *)v103 + 122);
  a2[22] = v117 + *((float *)v113 + 121);
  result = v122;
  a2[23] = v105;
  v107 = (_WORD *)v121;
  *(_WORD *)(v121 + 2) = result + 1;
  v107[2] = result + 2;
  v107[4] = result + 2;
  *v107 = result;
  v107[3] = result;
  v107[5] = result + 3;
  return result;
}


//======================================================================
// ParticleNode::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x002E8EA4   size: 0x1E2 (482 bytes)
//======================================================================
int __fastcall ParticleNode::render(int this, Ogre::DynamicBufferPool **a2, const Ogre::ShaderEnvData *a3)
{
  int v3; // r2
  int v4; // r6
  Ogre::DynamicIndexBuffer *v5; // r7
  int v6; // r0
  float *WorldMatrix; // r0
  char *v8; // r0
  unsigned int i; // r4
  int v10; // r0
  float *v11; // r4
  float *v12; // r0
  int v13; // [sp+24h] [bp-570h]
  Ogre::DynamicVertexBuffer *v14; // [sp+28h] [bp-56Ch]
  int v17; // [sp+34h] [bp-560h]
  float v18[16]; // [sp+40h] [bp-554h] BYREF
  _DWORD v19[325]; // [sp+80h] [bp-514h] BYREF

  v3 = *(_DWORD *)(this + 452);
  v4 = this;
  if ( v3 != 0 )
  {
    v14 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                         a2,
                                         *(const Ogre::VertexFormat **)(Ogre::Singleton<ParticleManager>::ms_Singleton
                                                                      + 4),
                                         4 * v3);
    v5 = (Ogre::DynamicIndexBuffer *)Ogre::SceneRenderer::newDynamicIB(a2, 6 * *(_DWORD *)(v4 + 452));
    v13 = Ogre::DynamicVertexBuffer::lock(v14);
    v6 = Ogre::DynamicIndexBuffer::lock(v5);
    v17 = v6;
    if ( v13 != 0 && v6 != 0 )
    {
      Ogre::Matrix4::Matrix4((int)v18, (const Ogre::ShaderEnvData *)((char *)a3 + 956));
      if ( *(_BYTE *)(v4 + 268) != 0 )
      {
        WorldMatrix = (float *)Ogre::MovableObject::getWorldMatrix((Ogre::MovableObject *)v4);
        Ogre::operator*((Ogre::Matrix4 *)v19, WorldMatrix, v18);
        Ogre::Matrix4::operator=(v18, v19);
      }
      if ( *(_DWORD *)(v4 + 260) == 5 )
      {
        if ( *(_BYTE *)(v4 + 268) != 0 )
        {
          v8 = Ogre::MovableObject::getWorldMatrix((Ogre::MovableObject *)v4);
          Ogre::Matrix4::operator=(v18, v8);
        }
        else
        {
          Ogre::Matrix4::identity((Ogre::Matrix4 *)v18);
        }
      }
      *(float *)(v4 + 692) = Ogre::MovableObject::getTransparent((Ogre::MovableObject **)v4);
      Ogre::Matrix4::operator=((void *)(v4 + 560), (char *)a3 + 956);
      Ogre::Matrix4::operator=((void *)(v4 + 624), (const void *)(v4 + 560));
      Ogre::Matrix4::quickInverse((Ogre::Matrix4 *)(v4 + 624));
      for ( i = 0; ; ++i )
      {
        v10 = *(_DWORD *)(v4 + 440);
        if ( i >= -286331153 * ((*(_DWORD *)(v4 + 444) - v10) >> 2) )
          break;
        ParticleNode::fillParticleVert(
          (float *)v4,
          (float *)(v13 + 96 * i),
          (unsigned __int16)(4 * i),
          v17 + 12 * i,
          (Ogre::Vector3 *)(v10 + 60 * i),
          (Ogre::Matrix4 *)v18);
      }
    }
    *((_DWORD *)v5 + 5) = 4 * *(_DWORD *)(v4 + 452);
    *((_DWORD *)v5 + 4) = 0;
    Ogre::ShaderEnvData::ShaderEnvData((Ogre::ShaderEnvData *)v19, a3);
    Ogre::ShaderEnvData::clearFlags((Ogre::ShaderEnvData *)v19);
    v11 = (float *)Ogre::SceneRenderer::newContext(
                     (int)a2,
                     *(_DWORD *)(v4 + 236),
                     v19,
                     *(Ogre::Material **)(v4 + 492),
                     *(_DWORD *)Ogre::Singleton<ParticleManager>::ms_Singleton,
                     v14,
                     v5,
                     4,
                     2 * *(_DWORD *)(v4 + 452),
                     1);
    v12 = (float *)Ogre::MovableObject::getWorldMatrix((Ogre::MovableObject *)v4);
    Ogre::operator*((Ogre::Matrix4 *)v18, v12, (float *)a3 + 239);
    v11[5] = v18[14];
    if ( *(_DWORD *)(v4 + 260) == 5 )
      return Ogre::ShaderContext::setInstanceEnvData(
               (Ogre::ShaderContext *)v11,
               (Ogre::SceneRenderer *)a2,
               nullptr,
               a3,
               nullptr);
    else
      return Ogre::ShaderContext::addValueParam((int)v11, 2, (char *)a3 + 1020, 7, 1);
  }
  return this;
}


//======================================================================
// ParticleNode::calWorldBounds(void)
// address: 0x002E9098   size: 0x22E (558 bytes)
//======================================================================
float __fastcall ParticleNode::calWorldBounds(float this)
{
  float *WorldMatrix; // r0
  int v2; // r3
  float *v3; // r6
  float v4; // r5
  float v5; // r4
  float v6; // r6
  float v7; // r6
  float v8; // r6
  float v9; // r3
  float v10; // r3
  float v11; // r5
  float v12; // r4
  float v13; // r6
  float v14; // r0
  float v15; // r1
  float v16; // r7
  float v17; // [sp+8h] [bp-44h]
  float v18; // [sp+8h] [bp-44h]
  float v19; // [sp+Ch] [bp-40h]
  unsigned int i; // [sp+10h] [bp-3Ch]
  float v21; // [sp+14h] [bp-38h]
  int v22; // [sp+18h] [bp-34h]
  float v23[3]; // [sp+20h] [bp-2Ch] BYREF
  float v24; // [sp+2Ch] [bp-20h] BYREF
  float v25; // [sp+30h] [bp-1Ch]
  float v26; // [sp+34h] [bp-18h]
  float v27; // [sp+38h] [bp-14h] BYREF
  float v28; // [sp+3Ch] [bp-10h]
  float v29; // [sp+40h] [bp-Ch]
  char v30; // [sp+44h] [bp-8h]

  v19 = this;
  if ( *(_DWORD *)(LODWORD(this) + 452) != 0 )
  {
    WorldMatrix = (float *)Ogre::MovableObject::getWorldMatrix((Ogre::MovableObject *)LODWORD(this));
    v22 = *(unsigned __int8 *)(LODWORD(v19) + 268);
    v30 = 0;
    for ( i = 0; ; ++i )
    {
      v2 = *(_DWORD *)(LODWORD(v19) + 440);
      if ( i >= -286331153 * ((*(_DWORD *)(LODWORD(v19) + 444) - v2) >> 2) )
        break;
      v3 = (float *)(v2 + 60 * i);
      if ( v3[11] > 0.0 )
      {
        v4 = *v3;
        v5 = v3[1];
        v17 = v3[2];
        if ( v22 != 0 )
        {
          v21 = (float)((float)((float)(v4 * *WorldMatrix) + (float)(v5 * WorldMatrix[4]))
                      + (float)(v17 * WorldMatrix[8]))
              + WorldMatrix[12];
          v6 = (float)((float)((float)(v4 * WorldMatrix[1]) + (float)(v5 * WorldMatrix[5]))
                     + (float)(v17 * WorldMatrix[9]))
             + WorldMatrix[13];
          v17 = (float)((float)((float)(v4 * WorldMatrix[2]) + (float)(v5 * WorldMatrix[6]))
                      + (float)(v17 * WorldMatrix[10]))
              + WorldMatrix[14];
          v4 = v21;
          v5 = v6;
        }
        if ( v30 != 0 )
        {
          v7 = v24;
          if ( v24 >= v4 )
            v7 = v4;
          v24 = v7;
          v8 = v25;
          if ( v25 >= v5 )
            v8 = v5;
          v25 = v8;
          v9 = v26;
          if ( v26 >= v17 )
            v9 = v17;
          v26 = v9;
          v10 = v27;
          if ( v27 <= v4 )
            v10 = v4;
          v11 = v28;
          v27 = v10;
          if ( v28 <= v5 )
            v11 = v5;
          v12 = v29;
          v28 = v11;
          if ( v29 <= v17 )
            v12 = v17;
          v29 = v12;
        }
        else
        {
          v27 = v4;
          v28 = v5;
          v29 = v17;
          v26 = v17;
          v24 = v4;
          v25 = v5;
          v30 = 1;
        }
      }
    }
    Ogre::operator+(v23, &v24, &v27);
    v13 = v23[1] * 0.5;
    v14 = v23[2] * 0.5;
    v15 = v25;
    *(float *)(LODWORD(v19) + 140) = v23[0] * 0.5;
    *(float *)(LODWORD(v19) + 144) = v13;
    *(float *)(LODWORD(v19) + 148) = v14;
    v16 = (float)(v28 - v15) * 0.5;
    v18 = (float)(v29 - v26) * 0.5;
    *(float *)(LODWORD(v19) + 152) = (float)(v27 - v24) * 0.5;
    *(float *)(LODWORD(v19) + 156) = v16;
    *(float *)(LODWORD(v19) + 160) = v18;
    this = Ogre::Vector3::length((Ogre::Vector3 *)(LODWORD(v19) + 152));
    *(float *)(LODWORD(v19) + 164) = this;
  }
  return this;
}


//======================================================================
// ParticleNode::emitParticles(unsigned int)
// address: 0x002E99D0   size: 0x74 (116 bytes)
//======================================================================
int __fastcall ParticleNode::emitParticles(ParticleNode *this, signed int a2)
{
  signed int v2; // r6
  _DWORD *v4; // r1
  char *v5; // r0
  int v7; // [sp+0h] [bp-4Ch]
  float v9[16]; // [sp+Ch] [bp-40h] BYREF

  v2 = 0;
  v7 = 0;
  while ( v2 < a2 )
  {
    if ( -286331153 * ((*((_DWORD *)this + 111) - *((_DWORD *)this + 110)) >> 2) < *((_DWORD *)this + 66) )
    {
      ParticleNode::genParticle((int)this, v9);
      v4 = *((_DWORD **)this + 111);
      v5 = (char *)this + 440;
      if ( v4 == *((_DWORD **)this + 112) )
      {
        std::vector<ParticleUnit>::_M_emplace_back_aux<ParticleUnit const&>((int)v5, v9);
      }
      else
      {
        __gnu_cxx::new_allocator<ParticleUnit>::construct<ParticleUnit<ParticleUnit const&>>((int)v5, v4, v9);
        *((_DWORD *)this + 111) += 60;
      }
      ++v7;
      ++*((_DWORD *)this + 113);
    }
    ++v2;
  }
  return v7;
}


//======================================================================
// ParticleNode::calculateUpdate(float)
// address: 0x002E9A48   size: 0x114 (276 bytes)
//======================================================================
float __fastcall ParticleNode::calculateUpdate(ParticleNode *this, float a2)
{
  float *v3; // r3
  float v4; // r5
  float v5; // r0
  float v6; // r7
  float v7; // r0
  float v8; // r0
  float v9; // r6
  float v10; // r0
  float v11; // r0

  v3 = (float *)((char *)this + 252);
  v4 = 1.0 / (float)*((int *)this + 70);
  v5 = (float)(1.0 / (float)*((int *)this + 69)) / v4;
  *((_DWORD *)this + 115) = -1090519040;
  v6 = v5;
  v7 = v5 * -0.5;
  *((float *)this + 116) = v7;
  v8 = (float)(v7 + (float)(v6 * 0.5)) * v4;
  *((float *)this + 115) = v4 * 0.0;
  *((float *)this + 116) = v8;
  *((_DWORD *)this + 117) = -1090519040;
  *((float *)this + 118) = v6 * 0.5;
  v9 = v8;
  v10 = (float)((float)(v6 * 0.5) + (float)(v6 * 0.5)) * v4;
  *((float *)this + 117) = v4 * 0.0;
  *((float *)this + 118) = v10;
  *((float *)this + 119) = v4;
  *((float *)this + 120) = v10;
  *((float *)this + 121) = v4;
  *((float *)this + 122) = v9;
  v11 = (float)(a2 * v3[23]) + *((float *)this + 114);
  *((float *)this + 114) = v11;
  if ( v11 >= 1.0 )
  {
    ParticleNode::emitParticles(this, (int)v11);
    *((_DWORD *)this + 114) = 0;
  }
  ParticleNode::updateParticles(this, a2);
  return ParticleNode::calWorldBounds(*(float *)&this);
}


//======================================================================
// ParticleNode::update(unsigned int)
// address: 0x002E9B5C   size: 0x4E (78 bytes)
//======================================================================
float __fastcall ParticleNode::update(ParticleNode *this, unsigned int a2)
{
  char *WorldMatrix; // r0
  _DWORD v6[17]; // [sp+0h] [bp-44h] BYREF

  Ogre::MovableObject::update((int)this, a2);
  WorldMatrix = Ogre::MovableObject::getWorldMatrix(this);
  Ogre::Matrix4::operator=((char *)this + 496, WorldMatrix);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v6);
  Ogre::Matrix4::getScale((ParticleNode *)((char *)this + 496), (Ogre::Matrix4 *)v6);
  *((_DWORD *)this + 172) = v6[0];
  return ParticleNode::calculateUpdate(this, (float)a2 / 1000.0);
}


//======================================================================
// ParticleNode::ParticleNode(ParticleTemplate *)
// address: 0x002E9BB0   size: 0x278 (632 bytes)
//======================================================================
// Alternative name is '_ZN12ParticleNodeC2EP16ParticleTemplate'
void __fastcall ParticleNode::ParticleNode(ParticleNode *this, ParticleTemplate *a2)
{
  unsigned int v4; // r6
  int v5; // r1
  int v6; // r6
  int v7; // r1
  int v8; // r6
  int v9; // r1
  int v10; // r6
  int v11; // r1
  char *v12; // r2
  int v13; // r6
  int v14; // r6
  _DWORD *v15; // r5
  unsigned int v16; // r2
  _DWORD *v17; // r6
  void *v18; // r0
  void *v19; // r1
  int v20; // r2
  void *v21; // r1
  Ogre::Material *v22; // r7
  int v23; // r2
  void *v24; // r1
  unsigned int v25; // [sp+4h] [bp-40h]
  _DWORD *v26; // [sp+Ch] [bp-38h]
  Ogre::Material *v27; // [sp+10h] [bp-34h]
  Ogre::Material *v28; // [sp+10h] [bp-34h]
  _DWORD *v29; // [sp+14h] [bp-30h]
  int v30; // [sp+1Ch] [bp-28h]
  Ogre::FixedString *v31; // [sp+24h] [bp-20h] BYREF
  Ogre::FixedString *v32[3]; // [sp+28h] [bp-1Ch] BYREF
  Ogre::FixedString *v33[4]; // [sp+34h] [bp-10h] BYREF

  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_DWORD *)this + 53) = 0;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_461C20;
  ParticleDesc::ParticleDesc((ParticleNode *)((char *)this + 252));
  *((_DWORD *)this + 109) = a2;
  *((_DWORD *)this + 110) = 0;
  *((_DWORD *)this + 111) = 0;
  *((_DWORD *)this + 112) = 0;
  Ogre::Matrix4::Matrix4((ParticleNode *)((char *)this + 496));
  Ogre::Matrix4::Matrix4((ParticleNode *)((char *)this + 560));
  Ogre::Matrix4::Matrix4((ParticleNode *)((char *)this + 624));
  *((_DWORD *)this + 63) = *(_DWORD *)a2;
  *((_DWORD *)this + 64) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 65) = *((_DWORD *)a2 + 2);
  v4 = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 66) = v4;
  v25 = v4;
  *((_BYTE *)this + 268) = *((_BYTE *)a2 + 16);
  *((_DWORD *)this + 68) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 69) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 70) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 71) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 72) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 73) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 74) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 75) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 76) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 77) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 78) = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 79) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 80) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 81) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 82) = *((_DWORD *)a2 + 19);
  *((_DWORD *)this + 83) = *((_DWORD *)a2 + 20);
  *((_DWORD *)this + 84) = *((_DWORD *)a2 + 21);
  *((_DWORD *)this + 85) = *((_DWORD *)a2 + 22);
  *((_DWORD *)this + 86) = *((_DWORD *)a2 + 23);
  *((_DWORD *)this + 87) = *((_DWORD *)a2 + 24);
  *((_DWORD *)this + 88) = *((_DWORD *)a2 + 25);
  *((_DWORD *)this + 89) = *((_DWORD *)a2 + 26);
  *((_DWORD *)this + 90) = *((_DWORD *)a2 + 27);
  v5 = *((_DWORD *)a2 + 29);
  v6 = *((_DWORD *)a2 + 30);
  *((_DWORD *)this + 91) = *((_DWORD *)a2 + 28);
  *((_DWORD *)this + 92) = v5;
  *((_DWORD *)this + 93) = v6;
  v7 = *((_DWORD *)a2 + 32);
  v8 = *((_DWORD *)a2 + 33);
  *((_DWORD *)this + 94) = *((_DWORD *)a2 + 31);
  *((_DWORD *)this + 95) = v7;
  *((_DWORD *)this + 96) = v8;
  v9 = *((_DWORD *)a2 + 35);
  v10 = *((_DWORD *)a2 + 36);
  *((_DWORD *)this + 97) = *((_DWORD *)a2 + 34);
  *((_DWORD *)this + 98) = v9;
  *((_DWORD *)this + 99) = v10;
  v11 = *((_DWORD *)a2 + 38);
  v13 = *((_DWORD *)a2 + 39);
  v12 = (char *)a2 + 160;
  *((_DWORD *)this + 100) = *((_DWORD *)a2 + 37);
  *((_DWORD *)this + 101) = v11;
  *((_DWORD *)this + 102) = v13;
  *((_DWORD *)this + 103) = *((_DWORD *)a2 + 40);
  v14 = *((_DWORD *)a2 + 41);
  a2 = (ParticleTemplate *)((char *)a2 + 172);
  *((_DWORD *)this + 104) = v14;
  *((_DWORD *)this + 105) = *((_DWORD *)v12 + 2);
  *((_DWORD *)this + 106) = *(_DWORD *)a2;
  *((_DWORD *)this + 107) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 108) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 113) = 0;
  *((_DWORD *)this + 114) = 0;
  if ( v25 > 0x4444444 )
    sub_3BD058("vector::reserve");
  v15 = *((_DWORD **)this + 110);
  v16 = -286331153 * ((*((_DWORD *)this + 112) - (int)v15) >> 2);
  if ( v16 < v25 )
  {
    v17 = *((_DWORD **)this + 111);
    v30 = -286331153 * (v17 - v15);
    if ( v25 != 0 )
      v26 = (_DWORD *)operator new(60 * v25);
    else
      v26 = nullptr;
    v29 = v26;
    while ( v15 != v17 )
    {
      std::_Construct<ParticleUnit<ParticleUnit&>>(v29, v15);
      v15 += 15;
      v29 += 15;
    }
    v18 = *((void **)this + 110);
    if ( v18 != nullptr )
      operator delete(v18);
    *((_DWORD *)this + 110) = v26;
    v16 = (unsigned int)&v26[15 * v30];
    *((_DWORD *)this + 111) = v16;
    *((_DWORD *)this + 112) = &v26[15 * v25];
  }
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v31, (Ogre::FixedString *)"particle", v16);
  v27 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v27, (const Ogre::FixedString *)&v31);
  *((_DWORD *)this + 123) = v27;
  Ogre::FixedString::~FixedString(&v31, v19);
  v28 = *((Ogre::Material **)this + 123);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v32, (Ogre::FixedString *)"BLEND_MODE", v20);
  v21 = (void *)(Ogre::Material::setParamMacro(v28, (const Ogre::FixedString *)v32, *((_DWORD *)this + 63)) >> 32);
  Ogre::FixedString::~FixedString(v32, v21);
  v22 = *((Ogre::Material **)this + 123);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v33, (Ogre::FixedString *)"g_DiffuseTex", v23);
  Ogre::Material::setParamTexture(
    v22,
    (const Ogre::FixedString *)v33,
    *(Ogre::Texture **)(*((_DWORD *)this + 109) + 184),
    0);
  Ogre::FixedString::~FixedString(v33, v24);
  *((_DWORD *)this + 172) = 1065353216;
  *((_DWORD *)this + 173) = 1065353216;
  v32[0] = (Ogre::FixedString *)-1027080192;
  v32[1] = (Ogre::FixedString *)-1027080192;
  v32[2] = (Ogre::FixedString *)-1027080192;
  v33[0] = (Ogre::FixedString *)1120403456;
  v33[1] = (Ogre::FixedString *)1120403456;
  v33[2] = (Ogre::FixedString *)1120403456;
  Ogre::BoxSphereBound::fromBox(
    (ParticleNode *)((char *)this + 140),
    (const Ogre::Vector3 *)v32,
    (const Ogre::Vector3 *)v33);
}

