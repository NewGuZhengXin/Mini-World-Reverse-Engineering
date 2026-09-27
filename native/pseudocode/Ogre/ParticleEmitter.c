// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ParticleEmitter

//======================================================================
// Ogre::ParticleEmitter::getRTTI(void)const
// address: 0x00172D94   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::ParticleEmitter::getRTTI(Ogre::ParticleEmitter *this)
{
  return &Ogre::ParticleEmitter::m_RTTI;
}


//======================================================================
// Ogre::ParticleEmitter::getRenderPassRequired(Ogre::RenderPassDesc &)
// address: 0x00172DA0   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::ParticleEmitter::getRenderPassRequired(int a1, _DWORD *a2)
{
  int result; // r0

  result = a1 + 252;
  if ( *(_BYTE *)(*(_DWORD *)result + 185) != 0 )
    *a2 |= 0x20u;
  return result;
}


//======================================================================
// Ogre::ParticleEmitter::resetUpdate(bool,unsigned int)
// address: 0x00172DB8   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::ParticleEmitter::resetUpdate(int this, bool a2, unsigned int a3)
{
  *(_BYTE *)(this + 184) = a2;
  if ( a3 != -1 )
  {
    this += 252;
    *(_DWORD *)(this + 56) = a3;
  }
  return this;
}


//======================================================================
// Ogre::ParticleEmitter::~ParticleEmitter()
// address: 0x00172DCC   size: 0x78 (120 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15ParticleEmitterD1Ev'
void __fastcall Ogre::ParticleEmitter::~ParticleEmitter(Ogre::ParticleEmitter *this)
{
  char *v1; // r5
  _DWORD *v3; // r0
  int i; // r6
  _DWORD *v5; // r0
  _DWORD *v6; // r0

  v1 = (char *)this + 252;
  *(_DWORD *)this = &off_4576F0;
  v3 = *((_DWORD **)this + 74);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)v1 + 11) = 0;
  }
  if ( *(_DWORD *)v1 != 0 )
  {
    Ogre::BaseObject::release(*(_DWORD **)v1);
    *(_DWORD *)v1 = 0;
  }
  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD **)this + 64);
    if ( i >= -1431655765 * ((*((_DWORD *)this + 65) - (int)v5) >> 5) )
      break;
    v6 = (_DWORD *)v5[24 * i + 18];
    if ( v6 != nullptr )
    {
      Ogre::BaseObject::release(v6);
      *(_DWORD *)(*((_DWORD *)v1 + 1) + 96 * i + 72) = 0;
    }
  }
  *((_DWORD *)v1 + 2) = v5;
  if ( v5 != nullptr )
    operator delete(v5);
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// Ogre::ParticleEmitter::~ParticleEmitter()
// address: 0x00172E4C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::ParticleEmitter::~ParticleEmitter(Ogre::ParticleEmitter *this)
{
  Ogre::ParticleEmitter::~ParticleEmitter(this);
  operator delete(this);
}


//======================================================================
// Ogre::ParticleEmitter::newObject(void)
// address: 0x00173140   size: 0x60 (96 bytes)
//======================================================================
int __fastcall Ogre::ParticleEmitter::newObject(Ogre::ParticleEmitter *this)
{
  int v1; // r4

  v1 = operator new(0x2BCu);
  Ogre::MovableObject::MovableObject((Ogre::MovableObject *)v1);
  *(_DWORD *)(v1 + 236) = 2;
  *(_DWORD *)(v1 + 240) = 0;
  *(_BYTE *)(v1 + 248) = 0;
  *(_DWORD *)(v1 + 244) = 3;
  *(_DWORD *)(v1 + 212) = 0;
  *(_BYTE *)(v1 + 232) = 0;
  *(_BYTE *)(v1 + 233) = 0;
  *(_DWORD *)v1 = &off_4576F0;
  *(_DWORD *)(v1 + 256) = 0;
  *(_DWORD *)(v1 + 260) = 0;
  *(_DWORD *)(v1 + 264) = 0;
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)(v1 + 324));
  Ogre::ParticleEmitterFrameData::ParticleEmitterFrameData((Ogre::ParticleEmitterFrameData *)(v1 + 460));
  return v1;
}


//======================================================================
// Ogre::ParticleEmitter::forceStopEmit(bool)
// address: 0x00173358   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::ParticleEmitter::forceStopEmit(int this, bool a2)
{
  *(_BYTE *)(this + 696) = a2;
  return this;
}


//======================================================================
// Ogre::ParticleEmitter::isForceStopEmit(void)
// address: 0x00173360   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::ParticleEmitter::isForceStopEmit(Ogre::ParticleEmitter *this)
{
  return *((unsigned __int8 *)this + 696);
}


//======================================================================
// Ogre::ParticleEmitter::getCollisionFaceTrans(Ogre::PECollisionFace &,Ogre::Matrix4 &)
// address: 0x001736D2   size: 0x2 (2 bytes)
//======================================================================
void Ogre::ParticleEmitter::getCollisionFaceTrans()
{
  ;
}


//======================================================================
// Ogre::ParticleEmitter::transformCollision(Ogre::Particle &,Ogre::Vector3,float)
// address: 0x001736D4   size: 0x1CA (458 bytes)
//======================================================================
int __fastcall Ogre::ParticleEmitter::transformCollision(int result, float *a2, const Ogre::Vector3 *a3, float a4)
{
  int i; // r1
  int v6; // r2
  int v7; // r3
  float v8; // r6
  float v9; // r6
  float v10; // r2
  float v11; // r5
  int v12; // [sp+Ch] [bp-E0h]
  float *v13; // [sp+10h] [bp-DCh]
  int v15; // [sp+20h] [bp-CCh]
  float v17; // [sp+2Ch] [bp-C0h] BYREF
  float v18; // [sp+30h] [bp-BCh]
  float v19; // [sp+34h] [bp-B8h]
  float v20; // [sp+38h] [bp-B4h] BYREF
  float v21; // [sp+3Ch] [bp-B0h]
  float v22; // [sp+44h] [bp-A8h] BYREF
  float v23; // [sp+48h] [bp-A4h]
  float v24; // [sp+4Ch] [bp-A0h]
  float v25[3]; // [sp+50h] [bp-9Ch] BYREF
  float v26[3]; // [sp+5Ch] [bp-90h] BYREF
  _BYTE v27[64]; // [sp+68h] [bp-84h] BYREF
  _BYTE v28[68]; // [sp+A8h] [bp-44h] BYREF

  v15 = result;
  for ( i = 0; ; i = v12 + 1 )
  {
    v12 = i;
    v6 = *(_DWORD *)(v15 + 252);
    v7 = *(_DWORD *)(v6 + 436);
    if ( i >= -1527099483 * ((*(_DWORD *)(v6 + 440) - v7) >> 2) )
      break;
    v13 = (float *)(v7 + 180 * i);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v27);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v28);
    Ogre::ParticleEmitter::getCollisionFaceTrans();
    Ogre::Matrix4::operator=(v28, v27);
    Ogre::Matrix4::inverse((Ogre::Matrix4 *)v28);
    Ogre::Matrix4::transformCoord((Ogre::Matrix4 *)v28, (Ogre::Vector3 *)&v17, (const Ogre::Vector3 *)a2);
    Ogre::Matrix4::transformCoord((Ogre::Matrix4 *)v28, (Ogre::Vector3 *)&v20, a3);
    Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v28, (Ogre::Vector3 *)&v22, (const Ogre::Vector3 *)(a2 + 10));
    result = (float)(v18 * v21) <= 0.0;
    if ( (float)(v18 * v21) <= 0.0 )
    {
      v8 = v13[10];
      result = v17 > (float)(COERCE_FLOAT(LODWORD(v8) + 0x80000000) * 0.5);
      if ( v17 > (float)(COERCE_FLOAT(LODWORD(v8) + 0x80000000) * 0.5) )
      {
        result = v17 < (float)(v8 * 0.5);
        if ( v17 < (float)(v8 * 0.5) )
        {
          v9 = v13[11];
          result = v19 > (float)(COERCE_FLOAT(LODWORD(v9) + 0x80000000) * 0.5);
          if ( v19 > (float)(COERCE_FLOAT(LODWORD(v9) + 0x80000000) * 0.5) )
          {
            result = v19 < (float)(v9 * 0.5);
            if ( v19 < (float)(v9 * 0.5) )
            {
              v10 = v23;
              LODWORD(v23) += 0x80000000;
              if ( (float)((float)(COERCE_FLOAT(LODWORD(v10) + 0x80000000) * COERCE_FLOAT(LODWORD(v10) + 0x80000000))
                         * a2[13]) >= 1.0 )
              {
                LODWORD(v18) += 0x80000000;
              }
              else
              {
                v23 = 0.0;
                Ogre::Normalize(&v22);
                v11 = a2[13];
                v25[0] = (float)(v11 * v22) * a4;
                v25[1] = (float)(v11 * v23) * a4;
                v25[2] = (float)(v11 * v24) * a4;
                Ogre::operator+(v26, &v20, v25);
                v18 = v26[1];
                v17 = v26[0];
                v19 = v26[2];
              }
              Ogre::Matrix4::transformNormal(
                (Ogre::Matrix4 *)v27,
                (Ogre::Vector3 *)(a2 + 10),
                (const Ogre::Vector3 *)&v22);
              a2[13] = a2[13] * v13[12];
              result = Ogre::Matrix4::transformCoord(
                         (Ogre::Matrix4 *)v27,
                         (Ogre::Vector3 *)a2,
                         (const Ogre::Vector3 *)&v17);
            }
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// Ogre::ParticleEmitter::transformParticle(Ogre::Particle &,float,Ogre::ParticleEmitterFrameData const&)
// address: 0x001738A4   size: 0x420 (1056 bytes)
//======================================================================
float __fastcall Ogre::ParticleEmitter::transformParticle(int a1, int a2, float a3, int a4)
{
  float v5; // r4
  float v6; // r6
  float v7; // r5
  float v8; // r4
  float v9; // r1
  float v10; // r0
  float v11; // r5
  int v12; // r5
  int i; // r1
  int v14; // r4
  int v15; // r3
  int v16; // r2
  float v17; // r5
  float v18; // r1
  float v19; // r4
  float v20; // r5
  float v21; // r0
  float v22; // r3
  float v23; // r1
  float v24; // r6
  float v25; // r5
  float v26; // r1
  float result; // r0
  int v28; // r5
  float v29; // r6
  float v30; // r2
  float v31; // r4
  float v33; // [sp+8h] [bp-E4h]
  float v34; // [sp+Ch] [bp-E0h]
  float v35; // [sp+Ch] [bp-E0h]
  float v36; // [sp+Ch] [bp-E0h]
  float v37; // [sp+10h] [bp-DCh]
  float *v38; // [sp+10h] [bp-DCh]
  float v39; // [sp+14h] [bp-D8h]
  float v40; // [sp+14h] [bp-D8h]
  int v41; // [sp+14h] [bp-D8h]
  int v42; // [sp+18h] [bp-D4h]
  float v43; // [sp+1Ch] [bp-D0h]
  float v45; // [sp+2Ch] [bp-C0h] BYREF
  float v46; // [sp+30h] [bp-BCh]
  float v47; // [sp+34h] [bp-B8h]
  float v48[3]; // [sp+38h] [bp-B4h] BYREF
  float v49[3]; // [sp+44h] [bp-A8h] BYREF
  float v50[3]; // [sp+50h] [bp-9Ch] BYREF
  float v51; // [sp+5Ch] [bp-90h] BYREF
  float v52; // [sp+60h] [bp-8Ch]
  float v53; // [sp+64h] [bp-88h]
  float v54[16]; // [sp+68h] [bp-84h] BYREF
  float v55; // [sp+A8h] [bp-44h] BYREF
  float v56; // [sp+ACh] [bp-40h]
  float v57; // [sp+B0h] [bp-3Ch]

  v5 = *(float *)(a1 + 316);
  v37 = *(float *)(*(_DWORD *)(a1 + 252) + 60);
  v6 = v5 * *(float *)(a4 + 160);
  v7 = *(float *)(a2 + 52);
  v8 = v5 * *(float *)(a4 + 184);
  v34 = *(float *)(a2 + 52) * *(float *)(a2 + 44);
  v39 = v7 * *(float *)(a2 + 48);
  v9 = *(float *)(a2 + 32);
  v50[0] = *(float *)(a2 + 40) * v7;
  v50[1] = v34;
  v50[2] = v39;
  v40 = (float)(v6 * *(float *)(a2 + 36)) * a3;
  v10 = v6 * *(float *)(a2 + 28);
  v52 = (float)(v6 * v9) * a3;
  v51 = v10 * a3;
  v53 = v40;
  Ogre::operator+(v54, v50, &v51);
  v35 = (float)(v8 * *(float *)(a2 + 44)) * a3;
  v11 = (float)(v8 * *(float *)(a2 + 48)) * a3;
  v55 = (float)(v8 * *(float *)(a2 + 40)) * a3;
  v56 = v35;
  v57 = v11;
  Ogre::operator-(&v45, v54, &v55);
  if ( *(float *)(a1 + 692) <= 0.03 )
  {
    v36 = 1.0;
  }
  else if ( v37 <= 0.0 )
  {
    v36 = 1.0;
  }
  else
  {
    v41 = (int)(float)(*(float *)(a1 + 692) / 0.03);
    v12 = 0;
    v36 = 1.0;
    while ( v12 < v41 )
    {
      v36 = j_expf(COERCE_FLOAT(LODWORD(v37) + 0x80000000) * *(float *)(a2 + 56));
      v45 = v45 * v36;
      v47 = v36 * v47;
      v46 = v36 * v46;
      ++v12;
    }
  }
  for ( i = 0; ; i = v42 + 1 )
  {
    v14 = a1 + 252;
    v15 = *(_DWORD *)(a1 + 252);
    v42 = i;
    v16 = *(_DWORD *)(v15 + 436);
    if ( i >= -1527099483 * ((*(_DWORD *)(v15 + 440) - v16) >> 2) )
      break;
    v38 = (float *)(v16 + 180 * i);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v54);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)&v55);
    Ogre::Matrix4::operator=(v54, v38 + 13);
    Ogre::Matrix4::operator=(&v55, v38 + 29);
    v53 = (float)(a3 * v47) * v36;
    v52 = (float)(a3 * v46) * v36;
    v51 = (float)(a3 * v45) * v36;
    Ogre::operator+(v50, (float *)a2, &v51);
    Ogre::Matrix4::transformCoord((Ogre::Matrix4 *)&v55, (Ogre::Vector3 *)v48, (const Ogre::Vector3 *)v50);
    Ogre::Matrix4::transformCoord((Ogre::Matrix4 *)&v55, (Ogre::Vector3 *)v49, (const Ogre::Vector3 *)a2);
    if ( (float)(v48[1] * v49[1]) <= 0.0 )
    {
      v43 = v38[10];
      if ( v48[0] > (float)(COERCE_FLOAT(LODWORD(v43) + 0x80000000) * 0.5) && v48[0] < (float)(v43 * 0.5) )
      {
        v17 = v38[11];
        if ( v48[2] > (float)(COERCE_FLOAT(LODWORD(v17) + 0x80000000) * 0.5) && v48[2] < (float)(v17 * 0.5) )
        {
          Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)&v55, (Ogre::Vector3 *)&v51, (const Ogre::Vector3 *)&v45);
          v18 = *(float *)(a2 + 52);
          LODWORD(v52) += 0x80000000;
          v19 = (float)(v52 * v18) * a3;
          if ( v19 < 20.0 && v19 > -20.0 )
            v52 = 0.0;
          Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v54, (Ogre::Vector3 *)&v45, (const Ogre::Vector3 *)&v51);
          v20 = v38[12];
          v45 = v45 * v20;
          v47 = v20 * v47;
          v46 = v20 * v46;
        }
      }
    }
  }
  v21 = Ogre::Vector3::length((Ogre::Vector3 *)&v45);
  *(float *)(a2 + 52) = v21;
  if ( v21 != 0.0 )
  {
    v22 = v46;
    v23 = v47;
    *(float *)(a2 + 40) = v45;
    *(float *)(a2 + 44) = v22;
    *(float *)(a2 + 48) = v23;
    Ogre::Normalize((float *)(a2 + 40));
  }
  v24 = (float)(a3 * v46) * v36;
  v25 = (float)(a3 * v47) * v36;
  v33 = (float)((float)(a3 * v45) * v36) + *(float *)a2;
  *(float *)a2 = v33;
  v26 = *(float *)(a2 + 8);
  *(float *)(a2 + 4) = *(float *)(a2 + 4) + v24;
  result = v25 + v26;
  *(float *)(a2 + 8) = v25 + v26;
  v28 = *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 96);
  if ( v28 != 0 && *(_BYTE *)(*(_DWORD *)v14 + 236) != 0 && *(_DWORD *)(*(_DWORD *)v14 + 20) == 5 )
  {
    LODWORD(v29) = *(unsigned __int8 *)(a2 + 24);
    if ( *(_BYTE *)(a2 + 24) == 0 )
    {
      v56 = 1.0;
      v54[0] = v29;
      v55 = 0.0;
      v57 = 0.0;
      (*(void (__fastcall **)(int, int, int, float *, float *, float))(*(_DWORD *)v28 + 76))(
        v28,
        (int)(float)(v33 * 10.0),
        (int)(float)(result * 10.0),
        v54,
        &v55,
        COERCE_FLOAT(LODWORD(v29)));
      LODWORD(result) = *(float *)(a2 + 4) <= (float)((float)((float)SLODWORD(v54[0]) / 10.0) + 8.0);
      if ( *(float *)(a2 + 4) <= (float)((float)((float)SLODWORD(v54[0]) / 10.0) + 8.0) )
        *(float *)(a2 + 4) = (float)((float)SLODWORD(v54[0]) / 10.0) + 8.0;
      v30 = v55;
      v31 = v57;
      *(float *)(a2 + 16) = v56;
      *(float *)(a2 + 12) = v30;
      *(float *)(a2 + 20) = v31;
    }
  }
  return result;
}


//======================================================================
// Ogre::ParticleEmitter::updateParticles(float,Ogre::ParticleEmitterFrameData const&)
// address: 0x00173D40   size: 0xFA (250 bytes)
//======================================================================
float __fastcall Ogre::ParticleEmitter::updateParticles(float this, float a2, const Ogre::ParticleEmitterFrameData *a3)
{
  int i; // r4
  _DWORD *v4; // r5
  int v5; // r6
  int v6; // r5
  int v7; // r3
  int v8; // r4
  int v9; // r6
  _DWORD *v10; // r0
  float v11; // [sp+4h] [bp-10h]

  v11 = this;
  for ( i = 0; ; ++i )
  {
    v4 = (_DWORD *)(LODWORD(v11) + 252);
    if ( i >= -1527099483
            * ((*(_DWORD *)(*(_DWORD *)(LODWORD(v11) + 252) + 440) - *(_DWORD *)(*(_DWORD *)(LODWORD(v11) + 252) + 436)) >> 2) )
      break;
    v5 = 180 * i;
    Ogre::ParticleEmitter::getCollisionFaceTrans();
    Ogre::Matrix4::operator=(*(_DWORD *)(*v4 + 436) + v5 + 116, *(_DWORD *)(*v4 + 436) + v5 + 52);
    this = COERCE_FLOAT(Ogre::Matrix4::inverse((Ogre::Matrix4 *)(*(_DWORD *)(*v4 + 436) + v5 + 116)));
  }
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_DWORD *)(LODWORD(v11) + 256);
    if ( v6 >= -1431655765 * ((*(_DWORD *)(LODWORD(v11) + 260) - v7) >> 5) )
      break;
    v8 = v7 + 96 * v6;
    v9 = *(_DWORD *)(v8 + 72);
    *(float *)(v8 + 56) = *(float *)(v8 + 56) + a2;
    if ( v9 != 0 )
      (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)v9 + 40))(v9, (unsigned int)(float)(a2 * 1000.0));
    if ( *(float *)(v8 + 56) < *(float *)(v8 + 60) )
    {
      this = Ogre::ParticleEmitter::transformParticle(SLODWORD(v11), v8, a2, (int)a3);
      ++v6;
    }
    else
    {
      Ogre::ParticleEmitter::transformParticle(SLODWORD(v11), v8, a2, (int)a3);
      v10 = *(_DWORD **)(v8 + 72);
      if ( v10 != nullptr )
      {
        Ogre::BaseObject::release(v10);
        *(_DWORD *)(v8 + 72) = 0;
      }
      this = COERCE_FLOAT(Ogre::Particle::operator=(v8, *(_DWORD *)(LODWORD(v11) + 260) - 96));
      *(_DWORD *)(LODWORD(v11) + 260) -= 96;
      --*(_DWORD *)(LODWORD(v11) + 268);
    }
  }
  return this;
}


//======================================================================
// Ogre::ParticleEmitter::renderObject(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x00173E48   size: 0x2DC (732 bytes)
//======================================================================
float __fastcall Ogre::ParticleEmitter::renderObject(
        float this,
        Ogre::SceneRenderer *a2,
        const Ogre::ShaderEnvData *a3)
{
  int v3; // r3
  int v4; // r4
  float v5; // r6
  int v6; // r2
  int v7; // r3
  int v8; // r2
  int v9; // r3
  int v10; // r2
  int v11; // r3
  int v12; // r6
  float v13; // r3
  float v14; // r7
  float v15; // r2
  float v16; // r1
  int v17; // r3
  int v18; // r7
  int v19; // r3
  float *v20; // r1
  float *v21; // r2
  float v22; // r0
  int v23; // r3
  float v24; // r5
  float v25; // r0
  char *WorldMatrix; // r0
  int *v27; // r5
  int v28; // r7
  int v29; // r6
  int v30; // r3
  float *v31; // r0
  float v32; // r3
  float v33; // r2
  float v34; // r1
  float v35; // r3
  float *v36; // r5
  float v37; // r3
  float v38; // [sp+4h] [bp-88h]
  Ogre::MovableObject *v39; // [sp+8h] [bp-84h]
  unsigned int i; // [sp+Ch] [bp-80h]
  int AlphaInLife; // [sp+10h] [bp-7Ch]
  float v42; // [sp+14h] [bp-78h]
  float v45; // [sp+24h] [bp-68h] BYREF
  float v46; // [sp+28h] [bp-64h]
  float v47; // [sp+2Ch] [bp-60h]
  int v48; // [sp+30h] [bp-5Ch] BYREF
  int v49; // [sp+34h] [bp-58h]
  int v50; // [sp+38h] [bp-54h]
  float v51; // [sp+3Ch] [bp-50h] BYREF
  float v52; // [sp+40h] [bp-4Ch]
  float v53; // [sp+44h] [bp-48h]
  _BYTE v54[16]; // [sp+48h] [bp-44h] BYREF
  float v55; // [sp+58h] [bp-34h] BYREF
  float v56; // [sp+5Ch] [bp-30h]
  float v57; // [sp+60h] [bp-2Ch]
  float v58; // [sp+64h] [bp-28h]
  float v59; // [sp+68h] [bp-24h] BYREF
  float v60; // [sp+6Ch] [bp-20h]
  float v61; // [sp+70h] [bp-1Ch]
  int v62; // [sp+74h] [bp-18h]
  float v63[5]; // [sp+78h] [bp-14h] BYREF

  v39 = (Ogre::MovableObject *)LODWORD(this);
  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)v39 + 64);
    if ( i >= -1431655765 * ((*((_DWORD *)v39 + 65) - v3) >> 5) )
      break;
    v4 = v3 + 96 * i;
    v5 = *(float *)(v4 + 56) / *(float *)(v4 + 60);
    Ogre::ParticleEmitterData::getColorInLife((Ogre::ParticleEmitterData *)v54, *((float *)v39 + 63), v5);
    AlphaInLife = Ogre::ParticleEmitterData::getAlphaInLife(*((Ogre::ParticleEmitterData **)v39 + 63), v5, v6, v7);
    v42 = COERCE_FLOAT(Ogre::ParticleEmitterData::getSizeInLife(*((Ogre::ParticleEmitterData **)v39 + 63), v5, v8, v9));
    Ogre::ParticleEmitterData::getAspectInLife(*((Ogre::ParticleEmitterData **)v39 + 63), v5, v10, v11);
    v12 = *((_DWORD *)v39 + 63);
    v13 = *(float *)v4;
    v14 = *(float *)(v12 + 64);
    v15 = *(float *)(v4 + 8);
    v46 = *(float *)(v4 + 4);
    v16 = *(float *)(v4 + 56);
    v45 = v13;
    v47 = v15;
    v17 = *(_DWORD *)(v12 + 20);
    v38 = v14 * v16;
    v55 = 0.0;
    v56 = 0.0;
    v57 = 0.0;
    v58 = 1.0;
    if ( v17 == 3 )
    {
      v18 = *(_DWORD *)(v4 + 40);
      v48 = 0;
      v49 = 1065353216;
      v50 = 0;
      if ( COERCE_FLOAT((unsigned int)(2 * v18) >> 1) >= 0.01
        || COERCE_FLOAT((unsigned int)(2 * *(_DWORD *)(v4 + 48)) >> 1) >= 0.01 )
      {
        if ( COERCE_FLOAT((unsigned int)(2 * *(_DWORD *)(v4 + 44)) >> 1) >= 0.01 )
        {
          v20 = (float *)(v4 + 40);
          v21 = (float *)&v48;
        }
        else
        {
          v19 = *(_DWORD *)(v4 + 48);
          v49 = 0;
          v48 = v18;
          v50 = v19;
          Ogre::Normalize((float *)&v48);
          v20 = (float *)&v48;
          v21 = (float *)(v4 + 40);
        }
        Ogre::CrossProduct(v63, v20, v21);
        v51 = v63[0];
        v52 = v63[1];
        v53 = v63[2];
      }
      else
      {
        v51 = 1.0;
        v52 = 0.0;
        v53 = 0.0;
      }
      Ogre::Normalize(&v51);
      v22 = j_acos(*(float *)(v4 + 44));
      Ogre::Quaternion::setAxisAngle(&v55, &v51, COERCE_FLOAT(COERCE_INT(v22 * 57.296) + 0x80000000));
      v23 = *((_DWORD *)v39 + 63);
      LODWORD(this) = *(float *)(v23 + 64) == 0.0;
      if ( *(float *)(v23 + 64) != 0.0 )
      {
        v62 = 1065353216;
        v59 = 0.0;
        v60 = 0.0;
        v61 = 0.0;
        Ogre::Quaternion::setAxisAngle(&v59, (float *)(v4 + 40), v38);
        this = COERCE_FLOAT(Ogre::operator*(v63, &v59, &v55));
        v56 = v63[1];
        v55 = v63[0];
        v57 = v63[2];
        v58 = v63[3];
      }
    }
    else
    {
      LODWORD(this) = v14 == 0.0;
      if ( v14 != 0.0 )
      {
        v52 = 1.0;
        v53 = 0.0;
        v51 = 0.0;
        Ogre::CrossProduct(v63, &v51, (float *)(v4 + 40));
        v59 = v63[0];
        v60 = v63[1];
        v61 = v63[2];
        Ogre::Normalize(&v59);
        v24 = Ogre::Vector3::length((Ogre::Vector3 *)&v59) - 1.0;
        if ( v24 >= 0.0 )
          v25 = v24;
        else
          LODWORD(v25) = LODWORD(v24) + 0x80000000;
        if ( v25 >= 0.00001 )
        {
          v59 = 0.0;
          v60 = 0.0;
          v61 = 1.0;
        }
        this = Ogre::Quaternion::setAxisAngle(&v55, &v59, v38);
      }
    }
    if ( (*(_DWORD *)(*((_DWORD *)v39 + 63) + 32) & 1) != 0 )
    {
      WorldMatrix = Ogre::MovableObject::getWorldMatrix(v39);
      Ogre::Matrix4::transformCoord((Ogre::Matrix4 *)WorldMatrix, (Ogre::Vector3 *)&v45, (const Ogre::Vector3 *)v4);
      this = COERCE_FLOAT(Ogre::operator*(v63, &v55, (float *)v39 + 5));
      v56 = v63[1];
      v55 = v63[0];
      v57 = v63[2];
      v58 = v63[3];
    }
    v27 = *(int **)(v4 + 72);
    if ( v27 != nullptr )
    {
      v28 = (int)(float)(v46 * 10.0);
      v29 = (int)(float)(v47 * 10.0);
      v30 = *v27;
      v27[2] = (int)(float)(v45 * 10.0);
      v27[3] = v28;
      v27[4] = v29;
      (*(void (__fastcall **)(int *))(v30 + 64))(v27);
      v31 = *(float **)(v4 + 72);
      v32 = v58;
      v33 = v56;
      v31[5] = v55;
      v34 = v57;
      v31[8] = v32;
      v35 = *v31;
      v31[6] = v33;
      v31[7] = v34;
      (*(void (**)(void))(LODWORD(v35) + 64))();
      v36 = *(float **)(v4 + 72);
      v37 = *v36;
      v36[9] = v42 / 10.0;
      v36[10] = v42 / 10.0;
      v36[11] = v42 / 10.0;
      (*(void (__fastcall **)(float *))(LODWORD(v37) + 64))(v36);
      this = COERCE_FLOAT(
               Ogre::BaseObject::isKindOf(
                 *(Ogre::BaseObject **)(v4 + 72),
                 (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI));
      if ( this != 0.0 )
      {
        *(_DWORD *)(*(_DWORD *)(v4 + 72) + 188) = AlphaInLife;
        this = COERCE_FLOAT(
                 (*(int (__fastcall **)(_DWORD, Ogre::SceneRenderer *, const Ogre::ShaderEnvData *))(**(_DWORD **)(v4 + 72) + 72))(
                   *(_DWORD *)(v4 + 72),
                   a2,
                   a3));
      }
    }
  }
  return this;
}


//======================================================================
// Ogre::ParticleEmitter::calWorldBounds(void)
// address: 0x0017413C   size: 0x222 (546 bytes)
//======================================================================
float __fastcall Ogre::ParticleEmitter::calWorldBounds(Ogre::ParticleEmitter *this)
{
  char *v1; // r4
  float result; // r0
  float *WorldMatrix; // r7
  int v4; // r3
  float *v5; // r3
  float v6; // r5
  float v7; // r4
  float v8; // r6
  float v9; // r6
  float v10; // r6
  float v11; // r3
  float v12; // r3
  float v13; // r5
  float v14; // r4
  float v15; // r0
  float v16; // r7
  float v17; // r6
  float v18; // [sp+8h] [bp-44h]
  float v19; // [sp+8h] [bp-44h]
  unsigned int i; // [sp+Ch] [bp-40h]
  float v22; // [sp+14h] [bp-38h]
  int v23; // [sp+18h] [bp-34h]
  float v24[3]; // [sp+20h] [bp-2Ch] BYREF
  float v25; // [sp+2Ch] [bp-20h] BYREF
  float v26; // [sp+30h] [bp-1Ch]
  float v27; // [sp+34h] [bp-18h]
  float v28; // [sp+38h] [bp-14h] BYREF
  float v29; // [sp+3Ch] [bp-10h]
  float v30; // [sp+40h] [bp-Ch]
  char v31; // [sp+44h] [bp-8h]

  v1 = (char *)this + 252;
  result = *((float *)this + 67);
  if ( result != 0.0 )
  {
    WorldMatrix = (float *)Ogre::MovableObject::getWorldMatrix(this);
    v23 = *(_DWORD *)(*(_DWORD *)v1 + 32) & 1;
    v31 = 0;
    for ( i = 0; ; ++i )
    {
      v4 = *((_DWORD *)this + 64);
      if ( i >= -1431655765 * ((*((_DWORD *)this + 65) - v4) >> 5) )
        break;
      v5 = (float *)(v4 + 96 * i);
      v6 = *v5;
      v7 = v5[1];
      v18 = v5[2];
      if ( v23 != 0 )
      {
        v22 = (float)((float)((float)(v6 * *WorldMatrix) + (float)(v7 * WorldMatrix[4])) + (float)(v18 * WorldMatrix[8]))
            + WorldMatrix[12];
        v8 = (float)((float)((float)(v6 * WorldMatrix[1]) + (float)(v7 * WorldMatrix[5])) + (float)(v18 * WorldMatrix[9]))
           + WorldMatrix[13];
        v18 = (float)((float)((float)(v6 * WorldMatrix[2]) + (float)(v7 * WorldMatrix[6]))
                    + (float)(v18 * WorldMatrix[10]))
            + WorldMatrix[14];
        v6 = v22;
        v7 = v8;
      }
      if ( v31 != 0 )
      {
        v9 = v25;
        if ( v25 >= v6 )
          v9 = v6;
        v25 = v9;
        v10 = v26;
        if ( v26 >= v7 )
          v10 = v7;
        v26 = v10;
        v11 = v27;
        if ( v27 >= v18 )
          v11 = v18;
        v27 = v11;
        v12 = v28;
        if ( v28 <= v6 )
          v12 = v6;
        v13 = v29;
        v28 = v12;
        if ( v29 <= v7 )
          v13 = v7;
        v14 = v30;
        v29 = v13;
        if ( v30 <= v18 )
          v14 = v18;
        v30 = v14;
      }
      else
      {
        v28 = v6;
        v29 = v7;
        v30 = v18;
        v25 = v6;
        v26 = v7;
        v27 = v18;
        v31 = 1;
      }
    }
    Ogre::operator+(v24, &v25, &v28);
    v19 = v24[0] * 0.5;
    v15 = v24[2] * 0.5;
    *((float *)this + 36) = v24[1] * 0.5;
    *((float *)this + 35) = v19;
    *((float *)this + 37) = v15;
    Ogre::operator-(v24, &v28, &v25);
    v16 = v24[0] * 0.5;
    v17 = v24[1] * 0.5;
    *((float *)this + 40) = v24[2] * 0.5;
    *((float *)this + 38) = v16;
    *((float *)this + 39) = v17;
    result = Ogre::Vector3::length((Ogre::ParticleEmitter *)((char *)this + 152));
    *((float *)this + 41) = result;
  }
  return result;
}


//======================================================================
// Ogre::ParticleEmitter::fillParticleVert(Ogre::ParticleVertex *,unsigned short,unsigned short *,Ogre::Particle &,Ogre::Matrix4 const&)
// address: 0x00174548   size: 0xB3A (2874 bytes)
//======================================================================
float __fastcall Ogre::ParticleEmitter::fillParticleVert(
        Ogre::MovableObject *a1,
        float *a2,
        int a3,
        int a4,
        Ogre::Vector3 *a5,
        Ogre::Matrix4 *a6)
{
  float v7; // r0
  float v8; // r1
  float v9; // r0
  float v10; // r5
  float v11; // r6
  int v12; // r2
  float v13; // r6
  float v14; // r4
  float v15; // r0
  float v16; // r1
  float v17; // r0
  unsigned int v18; // r1
  unsigned int v19; // r5
  char *v20; // r2
  char *v21; // r3
  int v22; // r2
  int v23; // r3
  int v24; // r2
  int v25; // r3
  float v26; // r6
  float v27; // r0
  float v28; // r4
  int v29; // r4
  float v30; // r5
  int v31; // r6
  int v32; // r5
  int v33; // r3
  int v34; // r4
  int v35; // r5
  int v36; // r0
  float v37; // r1
  float v38; // r5
  double v39; // r0
  float v40; // r0
  float v41; // r6
  int v42; // r3
  float v43; // r2
  float v44; // r1
  float v45; // r5
  float v46; // r5
  int v47; // r4
  float *v48; // r3
  char *WorldMatrix; // r0
  int v50; // r4
  float v51; // r5
  float v52; // r3
  int i; // r5
  float v54; // r1
  float v55; // r0
  float v56; // r1
  float v57; // r3
  float v58; // r5
  float v59; // r1
  float v60; // r2
  float v61; // r3
  float v62; // r0
  char *v63; // r3
  float v64; // r0
  Ogre::MovableObject *v65; // r5
  float v66; // r0
  float v67; // r1
  float v68; // r0
  float v69; // r1
  float v70; // r6
  float v71; // r0
  char *v72; // r3
  float v73; // r0
  Ogre::MovableObject *v74; // r6
  float v75; // r0
  float v76; // r1
  float v77; // r0
  float v78; // r1
  float v79; // r6
  float v80; // r0
  char *v81; // r3
  float v82; // r0
  Ogre::MovableObject *v83; // r6
  float v84; // r4
  float v85; // r0
  float v86; // r5
  float v87; // r0
  float v88; // r1
  float v89; // r6
  float v90; // r2
  float v91; // r1
  float v92; // r6
  char *v93; // r3
  float v94; // r0
  Ogre::MovableObject *v95; // r3
  float v96; // r0
  float v97; // r1
  float v98; // r2
  float v99; // r1
  Ogre::MovableObject *v100; // r3
  float v101; // r6
  float v102; // r0
  Ogre::MovableObject *v103; // r3
  float v104; // r0
  float v105; // r1
  float v106; // r6
  float v107; // r2
  float v108; // r1
  Ogre::MovableObject *v109; // r3
  float v110; // r0
  float v111; // r1
  float v112; // r3
  float v113; // r0
  float v114; // r1
  float v115; // r3
  float v116; // r6
  float v117; // r1
  float v118; // r4
  float v119; // r0
  char *v120; // r3
  float v121; // r0
  Ogre::MovableObject *v122; // r6
  float v123; // r4
  float result; // r0
  _WORD *v125; // r5
  _BYTE v126[12]; // [sp+0h] [bp-22Ch] BYREF
  float v127; // [sp+Ch] [bp-220h]
  float v128; // [sp+10h] [bp-21Ch]
  float v129; // [sp+14h] [bp-218h]
  float v130; // [sp+18h] [bp-214h]
  Ogre::MovableObject *v131; // [sp+1Ch] [bp-210h]
  float v132; // [sp+20h] [bp-20Ch]
  float v133; // [sp+24h] [bp-208h]
  float v134; // [sp+28h] [bp-204h]
  float v135; // [sp+2Ch] [bp-200h]
  float v136; // [sp+30h] [bp-1FCh]
  float v137; // [sp+34h] [bp-1F8h]
  float v138; // [sp+38h] [bp-1F4h]
  float v139; // [sp+3Ch] [bp-1F0h]
  float v140; // [sp+40h] [bp-1ECh]
  float v141; // [sp+44h] [bp-1E8h]
  int v142; // [sp+48h] [bp-1E4h]
  float v143; // [sp+4Ch] [bp-1E0h]
  int v144; // [sp+50h] [bp-1DCh]
  float v145; // [sp+54h] [bp-1D8h]
  float v146; // [sp+58h] [bp-1D4h]
  float *v147; // [sp+5Ch] [bp-1D0h]
  __int128 v148; // [sp+60h] [bp-1CCh] BYREF
  float v149[3]; // [sp+70h] [bp-1BCh] BYREF
  float v150[3]; // [sp+7Ch] [bp-1B0h] BYREF
  float v151; // [sp+88h] [bp-1A4h] BYREF
  float v152; // [sp+8Ch] [bp-1A0h]
  float v153; // [sp+90h] [bp-19Ch]
  float v154[3]; // [sp+94h] [bp-198h] BYREF
  float v155; // [sp+A0h] [bp-18Ch] BYREF
  float v156; // [sp+A4h] [bp-188h]
  float v157; // [sp+A8h] [bp-184h]
  float v158; // [sp+ACh] [bp-180h] BYREF
  float v159; // [sp+B0h] [bp-17Ch]
  float v160; // [sp+B4h] [bp-178h]
  float v161[3]; // [sp+B8h] [bp-174h] BYREF
  float v162[3]; // [sp+C4h] [bp-168h] BYREF
  __int128 v163; // [sp+D0h] [bp-15Ch] BYREF
  float v164[9]; // [sp+E0h] [bp-14Ch] BYREF
  float v165[9]; // [sp+104h] [bp-128h] BYREF
  float v166[16]; // [sp+128h] [bp-104h] BYREF
  float v167[16]; // [sp+168h] [bp-C4h] BYREF
  float v168[16]; // [sp+1A8h] [bp-84h] BYREF
  float v169; // [sp+1E8h] [bp-44h] BYREF
  float v170; // [sp+1ECh] [bp-40h]
  float v171; // [sp+1F0h] [bp-3Ch]

  v131 = a1;
  v144 = a3;
  v7 = *((float *)a5 + 14);
  v8 = *((float *)a5 + 15);
  v142 = a4;
  v9 = v7 / v8;
  v10 = *((float *)v131 + 63);
  v11 = v9;
  v12 = *(unsigned __int8 *)(LODWORD(v10) + 237);
  *(_QWORD *)&v163 = 0x3F8000003F800000LL;
  *((_QWORD *)&v163 + 1) = 0x3F8000003F800000LL;
  if ( v12 != 0 )
  {
    v127 = *(float *)(LODWORD(v10) + 56);
    if ( v9 > v127 )
    {
      v127 = (float)(v9 - v127) / (float)(1.0 - v127);
      Ogre::Lerp(
        (float *)&v148,
        (const Ogre::ColourValue *)(LODWORD(v10) + 100),
        (const Ogre::ColourValue *)(LODWORD(v10) + 116),
        v127);
      v163 = v148;
      v13 = *(float *)(LODWORD(v10) + 148);
      v14 = *(float *)(LODWORD(v10) + 136)
          + (float)((float)(*(float *)(LODWORD(v10) + 140) - *(float *)(LODWORD(v10) + 136)) * v127);
      v15 = *(float *)(LODWORD(v10) + 152) - v13;
      v16 = v127;
    }
    else
    {
      v128 = v9 / v127;
      v127 = COERCE_FLOAT(&v148);
      Ogre::Lerp(
        (float *)&v148,
        (const Ogre::ColourValue *)(LODWORD(v10) + 84),
        (const Ogre::ColourValue *)(LODWORD(v10) + 100),
        v128);
      v163 = v148;
      v13 = *(float *)(LODWORD(v10) + 144);
      v14 = *(float *)(LODWORD(v10) + 132)
          + (float)((float)(*(float *)(LODWORD(v10) + 136) - *(float *)(LODWORD(v10) + 132)) * v128);
      v15 = *(float *)(LODWORD(v10) + 148) - v13;
      v16 = v128;
    }
    v17 = v13 + (float)(v15 * v16);
  }
  else
  {
    if ( *(_DWORD *)(LODWORD(v10) + 360) == 3 )
    {
      v18 = *((_DWORD *)a5 + 21);
      v19 = *((_DWORD *)a5 + 22);
      LODWORD(v163) = *((_DWORD *)a5 + 20);
      *(_QWORD *)((char *)&v163 + 4) = __PAIR64__(v19, v18);
      v20 = (char *)&v163 + 12;
      v21 = *((char **)a5 + 23);
      HIDWORD(v163) = v21;
    }
    else
    {
      v127 = COERCE_FLOAT(&v148);
      Ogre::ParticleEmitterData::getColorInLife((Ogre::ParticleEmitterData *)&v148, v10, v9);
      v163 = v148;
      v21 = (char *)&v163 + 12;
      v20 = (char *)HIDWORD(v148);
    }
    HIDWORD(v163) = Ogre::ParticleEmitterData::getAlphaInLife(
                      *((Ogre::ParticleEmitterData **)v131 + 63),
                      v11,
                      (int)v20,
                      (int)v21);
    v14 = COERCE_FLOAT(Ogre::ParticleEmitterData::getSizeInLife(*((Ogre::ParticleEmitterData **)v131 + 63), v11, v22, v23));
    v17 = COERCE_FLOAT(Ogre::ParticleEmitterData::getAspectInLife(*((Ogre::ParticleEmitterData **)v131 + 63), v11, v24, v25));
  }
  v26 = v17;
  Ogre::ColorAddBlendAlpha(
    COERCE_FLOAT(&v163),
    *((Ogre::ColourValue **)v131 + 75),
    *(float *)(*((_DWORD *)v131 + 63) + 36),
    *((_DWORD *)v131 + 63));
  v27 = v14 * *((float *)a5 + 17);
  v28 = *((float *)v131 + 79);
  v127 = v27;
  v143 = v27 * v28;
  v136 = (float)(v27 * v26) * v28;
  Ogre::Matrix4::transformCoord(a6, (Ogre::Vector3 *)v149, a5);
  v29 = *((_DWORD *)v131 + 63);
  v30 = *(float *)(v29 + 76);
  v31 = *((_DWORD *)a5 + 16);
  if ( v30 > 0.00001 )
    v31 += (int)(float)(*((float *)a5 + 14) / v30);
  v127 = *(float *)(v29 + 68);
  v32 = *(_DWORD *)(v29 + 72);
  v129 = (float)(v31 % v32);
  v139 = v129 * (float)(1.0 / (float)v32);
  v140 = (float)(v31 / v32 % SLODWORD(v127)) * (float)(1.0 / (float)SLODWORD(v127));
  if ( *(_DWORD *)(v29 + 1220) != 0 )
  {
    v33 = v29;
    v34 = *(_DWORD *)(v29 + 220);
    v35 = *(_DWORD *)(v33 + 216);
    v127 = (float)(v31 % v34);
    v138 = v127 * (float)(1.0 / (float)v34);
    v137 = (float)(v31 / v34 % v35) * (float)(1.0 / (float)v35);
  }
  else
  {
    v137 = 0.0;
    v138 = 0.0;
  }
  v132 = COERCE_FLOAT(v166);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v166);
  Ogre::Matrix4::identity((Ogre::Matrix4 *)v166);
  v36 = *((_DWORD *)v131 + 63);
  v37 = *((float *)a5 + 14);
  LODWORD(v134) = (char *)v131 + 252;
  *(_DWORD *)&v126[8] = v36;
  Ogre::Matrix4::makeRotateZ((Ogre::Matrix4 *)v166, (float)(*(float *)(v36 + 64) * v37) + *((float *)a5 + 19));
  if ( (*(_DWORD *)(*((_DWORD *)v131 + 63) + 32) & 4) != 0 )
  {
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v167, (Ogre::MovableObject *)((char *)v131 + 324));
    Ogre::Matrix4::inverse((Ogre::Matrix4 *)v167);
    v127 = COERCE_FLOAT(&v169);
    v133 = COERCE_FLOAT(v149);
    Ogre::operator*(&v169, v149, v167);
    v150[0] = v169;
    v150[1] = v170;
    v150[2] = v171;
    v151 = 0.0;
    v152 = 0.0;
    v153 = 0.0;
    Ogre::operator*(&v169, &v151, v167);
    v153 = v171;
    v151 = v169;
    v152 = v170;
    Ogre::operator-(v154, &v151, v150);
    v38 = v154[1];
    v39 = (float)(v38 / Ogre::Vector3::length((Ogre::Vector3 *)v154));
    v40 = j_asin(v39);
    v41 = v40 * 57.296;
    v155 = 1.0;
    v156 = 0.0;
    v157 = 0.0;
    Ogre::Normalize(&v155);
    v129 = COERCE_FLOAT(v168);
    v42 = *(_DWORD *)(*(_DWORD *)LODWORD(v134) + 20);
    if ( v42 == 1 )
    {
      Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v168);
      LODWORD(v43) = LODWORD(v41) + 0x80000000;
    }
    else
    {
      if ( v42 != 2 )
      {
        switch ( v42 )
        {
          case 5:
            goto LABEL_28;
          case 3:
            Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v168);
            v158 = 0.0 - v149[0];
            v160 = 0.0 - v149[2];
            v159 = 0.0 - v149[1];
            Ogre::Normalize(&v158);
            Ogre::Matrix4::transformNormal(a6, (Ogre::Vector3 *)v161, (Ogre::Vector3 *)((char *)a5 + 40));
            Ogre::Normalize(v161);
            Ogre::CrossProduct(v162, &v158, v161);
            qmemcpy(v164, v161, 12);
            Ogre::CrossProduct(v165, v162, v164);
            Ogre::Matrix4::makeRotateMatrix(
              (Ogre::Matrix4 *)v168,
              (const Ogre::Vector3 *)v162,
              (const Ogre::Vector3 *)v164,
              (const Ogre::Vector3 *)v165);
            break;
          case 4:
            v44 = *((float *)a5 + 10);
            v45 = *((float *)a5 + 11);
            v165[3] = 1.0;
            v134 = v45;
            v46 = *((float *)a5 + 12);
            memset(v165, 0, 12);
            v133 = v44 * v44;
            v134 = (float)(v44 * v44) + (float)(v134 * v134);
            if ( (float)(v134 + (float)(v46 * v46)) <= 0.0 )
              goto LABEL_28;
            Ogre::Matrix4::transformNormal(a6, (Ogre::Vector3 *)v164, (Ogre::Vector3 *)((char *)a5 + 40));
            Ogre::Normalize(v164);
            v171 = 1.0;
            v169 = 0.0;
            v170 = 0.0;
            Ogre::Quaternion::setRotateArc(
              (Ogre::Quaternion *)v165,
              (const Ogre::Vector3 *)&v169,
              (const Ogre::Vector3 *)v164);
            Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v168);
            Ogre::Quaternion::getMatrix((Ogre::Quaternion *)v165, (Ogre::Matrix4 *)v168);
            break;
          default:
            goto LABEL_28;
        }
        goto LABEL_27;
      }
      Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v168);
      v43 = 90.0 - v41;
    }
    Ogre::Matrix4::makeRotateMatrix((Ogre::Matrix4 *)v168, (const Ogre::Vector3 *)&v155, v43);
LABEL_27:
    Ogre::operator*((Ogre::Matrix4 *)&v169, v166, v168);
    Ogre::Matrix4::operator=(v166, &v169);
  }
LABEL_28:
  v127 = COERCE_FLOAT(Ogre::ColourValue::getAsRGBA((Ogre::ColourValue *)&v163));
  v47 = *((_DWORD *)v131 + 63);
  v48 = (float *)(v47 + 228);
  if ( *(_BYTE *)(v47 + 224) != 0 )
  {
    v130 = *v48;
    v134 = *(float *)(v47 + 232);
  }
  else
  {
    v130 = v143 * *v48;
    v134 = v136 * *(float *)(v47 + 232);
  }
  if ( *(_DWORD *)(v47 + 20) == 5 )
  {
    WorldMatrix = Ogre::MovableObject::getWorldMatrix(v131);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v168, (const Ogre::Matrix4 *)WorldMatrix);
    Ogre::Matrix4::getMatrix3(v168, v164);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)&v169);
    Ogre::Matrix4::identity((Ogre::Matrix4 *)&v169);
    Ogre::Matrix4::makeRotateY(
      (Ogre::Matrix4 *)&v169,
      (float)(*(float *)(*((_DWORD *)v131 + 63) + 64) * *((float *)a5 + 14)) + *((float *)a5 + 19));
    Ogre::Matrix4::getMatrix3(&v169, v165);
    v129 = COERCE_FLOAT(v164);
    v50 = 0;
    v132 = COERCE_FLOAT(v165);
    v133 = COERCE_FLOAT(v167);
    do
    {
      v51 = v164[v50 + 1];
      v52 = v164[v50 + 2];
      v135 = *(float *)&v126[v50 * 4 + 224];
      v141 = v51;
      v146 = v52;
      for ( i = 0; i != 3; ++i )
      {
        v147 = &v167[v50];
        v54 = v165[i + 3];
        v145 = v135 * *(float *)&v126[i * 4 + 260];
        v55 = v141 * v54;
        v56 = v165[i + 6];
        v145 = v145 + v55;
        v147[i] = v145 + (float)(v146 * v56);
      }
      v50 += 3;
    }
    while ( v50 != 9 );
    j_memcpy(v164, v167, sizeof(v164));
    v57 = *(float *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 96);
    if ( v57 != 0.0 )
      LODWORD(v57) = *(unsigned __int8 *)(*((_DWORD *)v131 + 63) + 236);
    v58 = *((float *)a5 + 3);
    v129 = v57;
    v155 = v58;
    v156 = *((float *)a5 + 4);
    v157 = *((float *)a5 + 5);
    Ogre::Normalize(&v155);
    v128 = v130 - v143;
    v132 = v136 + v134;
    v158 = v130 - v143;
    v159 = 0.0;
    v160 = v136 + v134;
    v133 = COERCE_FLOAT(v161);
    Ogre::operator*(v161, &v158, v164);
    Ogre::operator+(v162, v149, v161);
    v59 = v162[1];
    v60 = v162[2];
    v61 = v129;
    *a2 = v162[0];
    a2[1] = v59;
    a2[2] = v60;
    if ( v61 != 0.0 )
    {
      Ogre::operator-(v162, a2, v149);
      a2[1] = a2[1]
            + (float)(COERCE_FLOAT(COERCE_INT((float)(v162[0] * v155) + (float)(v162[2] * v157)) + 0x80000000) / v156);
    }
    v62 = v140;
    v63 = (char *)v131 + 141;
    a2[3] = v127;
    v64 = v62 + *(float *)(v63 + 259);
    v65 = v131;
    a2[4] = v139 + *((float *)v131 + 99);
    a2[5] = v64;
    v66 = v138 + *((float *)v65 + 107);
    v67 = v136;
    a2[7] = v137 + *((float *)v65 + 108);
    a2[6] = v66;
    v134 = v134 - v67;
    v158 = v128;
    v159 = 0.0;
    v160 = v134;
    Ogre::operator*(v161, &v158, v164);
    Ogre::operator+(v162, v149, v161);
    v68 = v162[1];
    v69 = v162[2];
    a2[8] = v162[0];
    v70 = v129;
    a2[9] = v68;
    a2[10] = v69;
    if ( v70 != 0.0 )
    {
      Ogre::operator-(v162, a2 + 8, v149);
      a2[9] = a2[9]
            + (float)(COERCE_FLOAT(COERCE_INT((float)(v162[0] * v155) + (float)(v162[2] * v157)) + 0x80000000) / v156);
    }
    v71 = v140;
    v72 = (char *)v131 + 149;
    a2[11] = v127;
    v73 = v71 + *(float *)(v72 + 259);
    v74 = v131;
    a2[12] = v139 + *((float *)v131 + 101);
    a2[13] = v73;
    v75 = v138 + *((float *)v74 + 109);
    v76 = v130;
    a2[15] = v137 + *((float *)v74 + 110);
    a2[14] = v75;
    v128 = v143 + v76;
    v158 = v143 + v76;
    v159 = 0.0;
    v160 = v134;
    Ogre::operator*(v161, &v158, v164);
    Ogre::operator+(v162, v149, v161);
    v77 = v162[1];
    v78 = v162[2];
    a2[16] = v162[0];
    v79 = v129;
    a2[17] = v77;
    a2[18] = v78;
    if ( v79 != 0.0 )
    {
      Ogre::operator-(v162, a2 + 16, v149);
      a2[17] = a2[17]
             + (float)(COERCE_FLOAT(COERCE_INT((float)(v162[0] * v155) + (float)(v162[2] * v157)) + 0x80000000) / v156);
    }
    v80 = v140;
    v81 = (char *)v131 + 157;
    a2[19] = v127;
    v82 = v80 + *(float *)(v81 + 259);
    v83 = v131;
    a2[20] = v139 + *((float *)v131 + 103);
    a2[21] = v82;
    v84 = v137 + *((float *)v83 + 112);
    v85 = v138 + *((float *)v83 + 111);
    v158 = v128;
    v86 = v132;
    v159 = 0.0;
    a2[23] = v84;
    v160 = v86;
    a2[22] = v85;
    Ogre::operator*(v161, &v158, v164);
    Ogre::operator+(v162, v149, v161);
    v87 = v162[1];
    v88 = v162[2];
    a2[24] = v162[0];
    v89 = v129;
    a2[25] = v87;
    a2[26] = v88;
    if ( v89 != 0.0 )
    {
      Ogre::operator-(v162, a2 + 24, v149);
      a2[25] = a2[25]
             + (float)(COERCE_FLOAT(COERCE_INT((float)(v162[0] * v155) + (float)(v162[2] * v157)) + 0x80000000) / v156);
    }
  }
  else
  {
    v133 = v130 - v143;
    v167[2] = 0.0;
    v167[0] = v130 - v143;
    v135 = v136 + v134;
    v167[1] = v136 + v134;
    v128 = COERCE_FLOAT(v168);
    v129 = COERCE_FLOAT(v166);
    Ogre::operator*(v168, v167, v166);
    v132 = COERCE_FLOAT(v149);
    Ogre::operator+(&v169, v149, v168);
    v90 = v171;
    v91 = v170;
    v92 = v127;
    v93 = (char *)v131 + 141;
    *a2 = v169;
    a2[2] = v90;
    a2[3] = v92;
    a2[1] = v91;
    v94 = v140 + *(float *)(v93 + 259);
    v95 = v131;
    a2[4] = v139 + *((float *)v131 + 99);
    a2[5] = v94;
    v96 = v137 + *((float *)v95 + 108);
    v97 = v136;
    a2[6] = v138 + *((float *)v131 + 107);
    a2[7] = v96;
    v134 = v134 - v97;
    v167[1] = v134;
    v167[2] = 0.0;
    v167[0] = v133;
    Ogre::operator*((float *)LODWORD(v128), v167, (float *)LODWORD(v129));
    Ogre::operator+(&v169, (float *)LODWORD(v132), (float *)LODWORD(v128));
    v98 = v170;
    v99 = v169;
    a2[10] = v171;
    v100 = v131;
    v101 = v127;
    a2[9] = v98;
    a2[11] = v101;
    a2[8] = v99;
    v102 = v140 + *((float *)v100 + 102);
    v103 = v131;
    a2[12] = v139 + *((float *)v131 + 101);
    a2[13] = v102;
    v104 = v137 + *((float *)v103 + 110);
    v105 = v130;
    a2[14] = v138 + *((float *)v131 + 109);
    a2[15] = v104;
    v106 = v143 + v105;
    v167[0] = v143 + v105;
    v167[2] = 0.0;
    v167[1] = v134;
    Ogre::operator*((float *)LODWORD(v128), v167, (float *)LODWORD(v129));
    Ogre::operator+(&v169, (float *)LODWORD(v132), (float *)LODWORD(v128));
    v107 = v170;
    v108 = v169;
    a2[18] = v171;
    v109 = v131;
    v110 = v127;
    a2[17] = v107;
    a2[19] = v110;
    a2[16] = v108;
    v111 = *((float *)v131 + 103);
    v130 = v140 + *((float *)v109 + 104);
    v112 = v130;
    a2[20] = v139 + v111;
    v113 = v137;
    a2[21] = v112;
    v114 = *((float *)v131 + 111);
    v130 = v113 + *((float *)v131 + 112);
    v115 = v130;
    v167[0] = v106;
    v116 = v135;
    a2[22] = v138 + v114;
    a2[23] = v115;
    v167[2] = 0.0;
    v167[1] = v116;
    Ogre::operator*((float *)LODWORD(v128), v167, (float *)LODWORD(v129));
    Ogre::operator+(&v169, (float *)LODWORD(v132), (float *)LODWORD(v128));
    v117 = v169;
    v118 = v171;
    a2[25] = v170;
    a2[24] = v117;
    a2[26] = v118;
  }
  v119 = v140;
  v120 = (char *)v131 + 165;
  a2[27] = v127;
  v121 = v119 + *(float *)(v120 + 259);
  v122 = v131;
  a2[28] = v139 + *((float *)v131 + 105);
  a2[29] = v121;
  v123 = v137 + *((float *)v122 + 114);
  result = v138 + *((float *)v122 + 113);
  LOWORD(v122) = v144;
  v125 = (_WORD *)v142;
  a2[30] = result;
  LOWORD(v120) = (_WORD)v122 + 1;
  a2[31] = v123;
  *v125 = (_WORD)v122;
  v125[1] = (_WORD)v122 + 1;
  LOWORD(v122) = v144;
  LOWORD(v120) = (_WORD)v120 + 1;
  v125[2] = (_WORD)v120;
  v125[4] = (_WORD)v120;
  v125[3] = (_WORD)v122;
  v125[5] = (_WORD)v122 + 3;
  return result;
}


//======================================================================
// Ogre::ParticleEmitter::renderFace(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x00175084   size: 0x1DC (476 bytes)
//======================================================================
Ogre::Matrix4 *__fastcall Ogre::ParticleEmitter::renderFace(
        Ogre::Matrix4 *this,
        Ogre::DynamicBufferPool **a2,
        const Ogre::ShaderEnvData *a3)
{
  _DWORD *v3; // r6
  int v4; // r2
  Ogre::MovableObject *v5; // r4
  int v6; // r0
  float *WorldMatrix; // r0
  int v8; // r3
  char *v9; // r0
  unsigned int i; // r5
  int v11; // r3
  int v12; // r2
  Ogre::Material *v13; // r3
  int v14; // r1
  float *v15; // r5
  float *v16; // r0
  Ogre::ShaderContext *v17; // r5
  float *v18; // r0
  Ogre::DynamicIndexBuffer *v19; // [sp+18h] [bp-56Ch]
  int v21; // [sp+20h] [bp-564h]
  Ogre::DynamicVertexBuffer *v23; // [sp+28h] [bp-55Ch]
  int v24; // [sp+2Ch] [bp-558h]
  float v25[16]; // [sp+30h] [bp-554h] BYREF
  _DWORD v26[325]; // [sp+70h] [bp-514h] BYREF

  v3 = (_DWORD *)((char *)this + 252);
  v4 = *((_DWORD *)this + 67);
  v5 = this;
  if ( v4 != 0 )
  {
    v23 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                         a2,
                                         (const Ogre::VertexFormat *)&unk_4B9374,
                                         4 * v4);
    v19 = (Ogre::DynamicIndexBuffer *)Ogre::SceneRenderer::newDynamicIB(a2, 6 * v3[4]);
    v21 = Ogre::DynamicVertexBuffer::lock(v23);
    v6 = Ogre::DynamicIndexBuffer::lock(v19);
    v24 = v6;
    if ( v21 != 0 && v6 != 0 )
    {
      Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v25, (const Ogre::ShaderEnvData *)((char *)a3 + 956));
      if ( (*(_DWORD *)(*v3 + 32) & 1) != 0 )
      {
        WorldMatrix = (float *)Ogre::MovableObject::getWorldMatrix(v5);
        Ogre::operator*((Ogre::Matrix4 *)v26, WorldMatrix, v25);
        Ogre::Matrix4::operator=(v25, v26);
      }
      v8 = *((_DWORD *)v5 + 63);
      if ( *(_DWORD *)(v8 + 20) == 5 )
      {
        if ( (*(_DWORD *)(v8 + 32) & 1) != 0 )
        {
          v9 = Ogre::MovableObject::getWorldMatrix(v5);
          Ogre::Matrix4::operator=(v25, v9);
        }
        else
        {
          Ogre::Matrix4::identity((Ogre::Matrix4 *)v25);
        }
      }
      Ogre::Matrix4::operator=((char *)v5 + 324, (char *)a3 + 956);
      for ( i = 0; ; ++i )
      {
        v11 = *((_DWORD *)v5 + 64);
        if ( i >= -1431655765 * ((*((_DWORD *)v5 + 65) - v11) >> 5) )
          break;
        Ogre::ParticleEmitter::fillParticleVert(
          v5,
          (float *)(v21 + (i << 7)),
          (unsigned __int16)(4 * i),
          v24 + 12 * i,
          (Ogre::Vector3 *)(v11 + 96 * i),
          (Ogre::Matrix4 *)v25);
      }
    }
    *((_DWORD *)v19 + 5) = 4 * *((_DWORD *)v5 + 67);
    *((_DWORD *)v19 + 4) = 0;
    Ogre::ShaderEnvData::ShaderEnvData((Ogre::ShaderEnvData *)v26, a3);
    Ogre::ShaderEnvData::clearFlags((Ogre::ShaderEnvData *)v26);
    v12 = *((_DWORD *)v5 + 67);
    v13 = *((Ogre::Material **)v5 + 74);
    v14 = *((_DWORD *)v5 + 59);
    if ( *(_DWORD *)(*((_DWORD *)v5 + 63) + 20) == 5 )
    {
      v15 = (float *)Ogre::SceneRenderer::newContext((int)a2, v14, v26, v13, dword_4B9380, v23, v19, 4, 2 * v12, 1);
      Ogre::ShaderContext::setInstanceEnvData(
        (Ogre::ShaderContext *)v15,
        (Ogre::SceneRenderer *)a2,
        nullptr,
        a3,
        nullptr);
      v16 = (float *)Ogre::MovableObject::getWorldMatrix(v5);
      this = Ogre::operator*((Ogre::Matrix4 *)v25, v16, (float *)a3 + 239);
      v15[5] = v25[14];
    }
    else
    {
      v17 = Ogre::SceneRenderer::newContext((int)a2, v14, v26, v13, dword_4B9380, v23, v19, 4, 2 * v12, 1);
      v18 = (float *)Ogre::MovableObject::getWorldMatrix(v5);
      Ogre::operator*((Ogre::Matrix4 *)v25, v18, (float *)a3 + 239);
      *((float *)v17 + 5) = v25[14];
      return (Ogre::Matrix4 *)Ogre::ShaderContext::addValueParam((int)v17, 2, (char *)a3 + 1020, 7, 1);
    }
  }
  return this;
}


//======================================================================
// Ogre::ParticleEmitter::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x00175278   size: 0x36 (54 bytes)
//======================================================================
float __fastcall Ogre::ParticleEmitter::render(
        Ogre::MovableObject **this,
        Ogre::DynamicBufferPool **a2,
        const Ogre::ShaderEnvData *a3)
{
  float result; // r0
  unsigned int v7; // r3

  result = Ogre::MovableObject::getTransparent(this);
  *((float *)this + 75) = result;
  v7 = *((_DWORD *)*(this + 63) + 7);
  if ( v7 <= 1 )
    return COERCE_FLOAT(Ogre::ParticleEmitter::renderFace((Ogre::Matrix4 *)this, a2, a3));
  if ( v7 == 3 )
    return Ogre::ParticleEmitter::renderObject(*(float *)&this, (Ogre::SceneRenderer *)a2, a3);
  return result;
}


//======================================================================
// Ogre::ParticleEmitter::ParticleEmitter(Ogre::ParticleEmitterData *)
// address: 0x00175310   size: 0x27A (634 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15ParticleEmitterC2EPNS_19ParticleEmitterDataE'
Ogre::ParticleEmitter *__fastcall Ogre::ParticleEmitter::ParticleEmitter(
        Ogre::ParticleEmitter *this,
        Ogre::ParticleEmitterData *a2)
{
  unsigned int v3; // r4
  int v4; // r6
  int v5; // r5
  void *v6; // r0
  int v7; // r4
  Ogre::Material *ParticleMaterial; // r0
  float v9; // r0
  float v10; // r6
  int v12; // [sp+4h] [bp-48h]
  float v14; // [sp+Ch] [bp-40h]
  int v15; // [sp+14h] [bp-38h]
  float v16; // [sp+14h] [bp-38h]
  int v17; // [sp+18h] [bp-34h]
  int v18; // [sp+1Ch] [bp-30h]
  float v19[3]; // [sp+24h] [bp-28h] BYREF
  float v20[3]; // [sp+30h] [bp-1Ch] BYREF
  float v21[4]; // [sp+3Ch] [bp-10h] BYREF

  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_4576F0;
  *((_DWORD *)this + 63) = a2;
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 66) = 0;
  Ogre::Matrix4::Matrix4((Ogre::ParticleEmitter *)((char *)this + 324));
  Ogre::ParticleEmitterFrameData::ParticleEmitterFrameData((Ogre::ParticleEmitter *)((char *)this + 460));
  *((_BYTE *)this + 688) = 0;
  *((_BYTE *)this + 320) = 0;
  if ( a2 != nullptr )
  {
    (*(void (__fastcall **)(Ogre::ParticleEmitterData *))(*(_DWORD *)a2 + 4))(a2);
    v3 = *((_DWORD *)a2 + 13);
    if ( v3 > 0x2AAAAAA )
      sub_3BD058("vector::reserve");
    v4 = *((_DWORD *)this + 64);
    if ( -1431655765 * ((*((_DWORD *)this + 66) - v4) >> 5) < v3 )
    {
      v17 = *((_DWORD *)this + 65);
      v18 = -1431655765 * ((v17 - v4) >> 5);
      if ( v3 != 0 )
        v5 = operator new(96 * v3);
      else
        v5 = 0;
      v15 = v5;
      while ( v4 != v17 )
      {
        if ( v15 != 0 )
          Ogre::Particle::Particle(v15, v4);
        v4 += 96;
        v15 += 96;
      }
      v6 = *((void **)this + 64);
      if ( v6 != nullptr )
        operator delete(v6);
      *((_DWORD *)this + 64) = v5;
      *((_DWORD *)this + 65) = v5 + 96 * v18;
      *((_DWORD *)this + 66) = v5 + 96 * v3;
    }
    *((_DWORD *)this + 67) = 0;
    *((_DWORD *)this + 69) = 0;
    *((_DWORD *)this + 68) = 0;
    *((_DWORD *)this + 70) = 0;
    *((_DWORD *)this + 71) = 0;
    *((_DWORD *)this + 72) = 0;
    *((_DWORD *)this + 77) = 0;
    *((_DWORD *)this + 78) = 0;
    v7 = dword_4B9380;
    *((_DWORD *)this + 173) = 0;
    if ( v7 == 0 )
    {
      Ogre::VertexFormat::addElement(dword_4B9374, 2u, 1u, 0, 0, -1);
      Ogre::VertexFormat::addElement(dword_4B9374, 4u, 5u, 0, 0, -1);
      Ogre::VertexFormat::addElement(dword_4B9374, 1u, 7u, 0, 0, -1);
      Ogre::VertexFormat::addElement(dword_4B9374, 1u, 7u, 1, 0, -1);
      dword_4B9380 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton
                                                       + 36))(
                       Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
                       dword_4B9374);
    }
    ParticleMaterial = Ogre::CreateParticleMaterial(
                         *((Ogre **)a2 + 9),
                         *((Ogre::Texture **)a2 + 304),
                         *((Ogre::Texture **)a2 + 305),
                         *((Ogre::Texture **)a2 + 47),
                         *((_DWORD *)a2 + 51),
                         v12);
    v19[0] = -100.0;
    v19[1] = -100.0;
    v19[2] = -100.0;
    *((_DWORD *)this + 74) = ParticleMaterial;
    v20[0] = 100.0;
    v20[1] = 100.0;
    v20[2] = 100.0;
    Ogre::operator+(v21, v19, v20);
    v16 = v21[1] * 0.5;
    v9 = v21[0] * 0.5;
    *((float *)this + 37) = v21[2] * 0.5;
    *((float *)this + 35) = v9;
    *((float *)this + 36) = v16;
    Ogre::operator-(v21, v20, v19);
    v10 = v21[1] * 0.5;
    v14 = v21[2] * 0.5;
    *((float *)this + 38) = v21[0] * 0.5;
    *((float *)this + 39) = v10;
    *((float *)this + 40) = v14;
    *((float *)this + 41) = Ogre::Vector3::length((Ogre::ParticleEmitter *)((char *)this + 152));
    if ( *(_BYTE *)(*((_DWORD *)this + 63) + 185) != 0 )
      *((_DWORD *)this + 61) = 32;
    *((_BYTE *)this + 696) = 0;
    *((_DWORD *)this + 75) = 1065353216;
    *((_DWORD *)this + 76) = 0;
  }
  return this;
}


//======================================================================
// Ogre::ParticleEmitter::emitParticles(unsigned int,Ogre::ParticleEmitterFrameData const&)
// address: 0x001756C8   size: 0xF6 (246 bytes)
//======================================================================
unsigned int __fastcall Ogre::ParticleEmitter::emitParticles(
        Ogre::ParticleEmitter *this,
        signed int a2,
        const Ogre::ParticleEmitterFrameData *a3)
{
  int v3; // r2
  unsigned int result; // r0
  signed int v6; // r7
  unsigned int v7; // r6
  int v8; // r0
  unsigned int v9; // r3
  const Ogre::ParticleEmitterFrameData *v10; // r2
  int v11; // r1
  _DWORD v14[24]; // [sp+14h] [bp-148h] BYREF
  _BYTE v15[232]; // [sp+74h] [bp-E8h] BYREF

  v3 = *(_DWORD *)(*((_DWORD *)this + 63) + 32);
  result = 0;
  if ( (v3 & 2) == 0 )
  {
    v6 = 0;
    v7 = 0;
    while ( v6 < a2 )
    {
      v8 = *((_DWORD *)this + 63);
      v9 = *(_DWORD *)(v8 + 52);
      if ( (*(_DWORD *)(v8 + 32) & 0x10) != 0 && *((_DWORD *)this + 69) >= v9 )
        break;
      if ( -1431655765 * ((*((_DWORD *)this + 65) - *((_DWORD *)this + 64)) >> 5) < v9 )
      {
        v14[20] = 1065353216;
        v14[21] = 1065353216;
        v14[22] = 1065353216;
        v14[23] = 1065353216;
        LOBYTE(v14[6]) = 0;
        if ( *(_BYTE *)(v8 + 238) != 0 )
        {
          v10 = a3;
        }
        else
        {
          Ogre::ParticleEmitterFrameData::ParticleEmitterFrameData((Ogre::ParticleEmitterFrameData *)v15);
          Ogre::Lerp(
            (Ogre *)v15,
            (Ogre::ParticleEmitter *)((char *)this + 460),
            a3,
            COERCE_CONST_OGRE_PARTICLEEMITTERFRAMEDATA_((float)v7 / (float)(unsigned int)a2),
            COERCE_FLOAT(v15));
          v8 = *((_DWORD *)this + 63);
          v10 = (const Ogre::ParticleEmitterFrameData *)v15;
        }
        Ogre::ParticleEmitterData::genParticle(v8, (int)v14, (int)v10);
        v11 = *((_DWORD *)this + 65);
        if ( v11 == *((_DWORD *)this + 66) )
        {
          std::vector<Ogre::Particle>::_M_insert_aux((int *)this + 64, v11, (int)v14);
        }
        else
        {
          if ( v11 != 0 )
            Ogre::Particle::Particle(*((_DWORD *)this + 65), (int)v14);
          *((_DWORD *)this + 65) += 96;
        }
        ++v7;
        ++*((_DWORD *)this + 67);
        ++*((_DWORD *)this + 69);
      }
      ++v6;
    }
    return v7;
  }
  return result;
}


//======================================================================
// Ogre::ParticleEmitter::calculateUpdate(float,Ogre::Matrix4 const&)
// address: 0x001757C4   size: 0x65A (1626 bytes)
//======================================================================
int __fastcall Ogre::ParticleEmitter::calculateUpdate(Ogre::ParticleEmitter *this, float a2, const Ogre::Matrix4 *a3)
{
  char *v3; // r7
  int v4; // r5
  float v6; // r1
  float v7; // r6
  float v8; // r5
  float v9; // r1
  float v10; // r0
  float v11; // r0
  float v12; // r0
  float v13; // r0
  int v14; // r6
  float v15; // r1
  float v16; // r5
  float v17; // r6
  float v18; // r1
  float v19; // r0
  float v20; // r0
  float v21; // r0
  float v22; // r0
  char *v23; // r5
  Ogre::ParticleEmitterData *v24; // r0
  float v25; // r0
  int result; // r0
  int v27; // r1
  int v28; // r2
  int v29; // r6
  int v30; // r7
  float v31; // [sp+8h] [bp-11Ch]
  float v32; // [sp+8h] [bp-11Ch]
  float v33; // [sp+14h] [bp-110h]
  float v34; // [sp+18h] [bp-10Ch]
  float v35; // [sp+18h] [bp-10Ch]
  _BYTE v38[232]; // [sp+3Ch] [bp-E8h] BYREF

  v3 = (char *)this + 252;
  v4 = *((_DWORD *)this + 63);
  v31 = 1.0 / (float)*(int *)(v4 + 72);
  v7 = 1.0 / (float)*(int *)(v4 + 68);
  v8 = Ogre::fastSin(*(Ogre **)(v4 + 176), v6);
  v33 = Ogre::fastCos(*(Ogre **)(*(_DWORD *)v3 + 176), v9);
  *((float *)this + 99) = (float)(v33 * -0.5) + (float)(v8 * 0.5);
  *((float *)this + 100) = (float)(v8 * -0.5) + (float)(v33 * -0.5);
  Ogre::Vector2::operator*=((float *)this + 99, *(float *)(*(_DWORD *)v3 + 180));
  v10 = (float)(v7 / v31) * *((float *)this + 100);
  *((float *)this + 100) = v10;
  v34 = (float)(v7 / v31) * 0.5;
  *((float *)this + 99) = (float)(*((float *)this + 99) + 0.5) * v31;
  *((float *)this + 100) = (float)(v10 + v34) * v31;
  *((float *)this + 101) = (float)(v33 * -0.5) - (float)(v8 * 0.5);
  *((float *)this + 102) = (float)(v8 * -0.5) + (float)(v33 * 0.5);
  Ogre::Vector2::operator*=((float *)this + 101, *(float *)(*(_DWORD *)v3 + 180));
  v11 = (float)(v7 / v31) * *((float *)this + 102);
  *((float *)this + 102) = v11;
  *((float *)this + 101) = (float)(*((float *)this + 101) + 0.5) * v31;
  *((float *)this + 102) = (float)(v11 + v34) * v31;
  *((float *)this + 103) = (float)(v33 * 0.5) - (float)(v8 * 0.5);
  *((float *)this + 104) = (float)(v8 * 0.5) + (float)(v33 * 0.5);
  Ogre::Vector2::operator*=((float *)this + 103, *(float *)(*(_DWORD *)v3 + 180));
  v12 = (float)(v7 / v31) * *((float *)this + 104);
  *((float *)this + 104) = v12;
  *((float *)this + 103) = (float)(*((float *)this + 103) + 0.5) * v31;
  *((float *)this + 104) = (float)(v12 + v34) * v31;
  *((float *)this + 105) = (float)(v8 * 0.5) + (float)(v33 * 0.5);
  *((float *)this + 106) = (float)(v33 * -0.5) + (float)(v8 * 0.5);
  Ogre::Vector2::operator*=((float *)this + 105, *(float *)(*(_DWORD *)v3 + 180));
  v13 = (float)(v7 / v31) * *((float *)this + 106);
  *((float *)this + 106) = v13;
  *((float *)this + 105) = (float)(*((float *)this + 105) + 0.5) * v31;
  *((float *)this + 106) = (float)(v13 + v34) * v31;
  v14 = *(_DWORD *)v3;
  if ( *(_DWORD *)(*(_DWORD *)v3 + 1220) != 0 )
  {
    v32 = 1.0 / (float)*(int *)(v14 + 220);
    v16 = 1.0 / (float)*(int *)(v14 + 216);
    v17 = Ogre::fastSin(*(Ogre **)(v14 + 208), v15);
    v35 = Ogre::fastCos(*(Ogre **)(*(_DWORD *)v3 + 208), v18);
    *((float *)this + 107) = (float)(v35 * -0.5) + (float)(v17 * 0.5);
    *((float *)this + 108) = (float)(v17 * -0.5) + (float)(v35 * -0.5);
    Ogre::Vector2::operator*=((float *)this + 107, *(float *)(*(_DWORD *)v3 + 212));
    v19 = (float)(v16 / v32) * *((float *)this + 108);
    *((float *)this + 108) = v19;
    *((float *)this + 107) = (float)(*((float *)this + 107) + 0.5) * v32;
    *((float *)this + 108) = (float)(v19 + 0.5) * v32;
    *((float *)this + 109) = (float)(v35 * -0.5) - (float)(v17 * 0.5);
    *((float *)this + 110) = (float)(v17 * -0.5) + (float)(v35 * 0.5);
    Ogre::Vector2::operator*=((float *)this + 109, *(float *)(*(_DWORD *)v3 + 212));
    v20 = (float)(v16 / v32) * *((float *)this + 110);
    *((float *)this + 110) = v20;
    *((float *)this + 109) = (float)(*((float *)this + 109) + 0.5) * v32;
    *((float *)this + 110) = (float)(v20 + 0.5) * v32;
    *((float *)this + 111) = (float)(v35 * 0.5) - (float)(v17 * 0.5);
    *((float *)this + 112) = (float)(v17 * 0.5) + (float)(v35 * 0.5);
    Ogre::Vector2::operator*=((float *)this + 111, *(float *)(*(_DWORD *)v3 + 212));
    v21 = (float)(v16 / v32) * *((float *)this + 112);
    *((float *)this + 112) = v21;
    *((float *)this + 111) = (float)(*((float *)this + 111) + 0.5) * v32;
    *((float *)this + 112) = (float)(v21 + 0.5) * v32;
    *((float *)this + 113) = (float)(v17 * 0.5) + (float)(v35 * 0.5);
    *((float *)this + 114) = (float)(v35 * -0.5) + (float)(v17 * 0.5);
    Ogre::Vector2::operator*=((float *)this + 113, *(float *)(*(_DWORD *)v3 + 212));
    v22 = (float)(v16 / v32) * *((float *)this + 114);
    *((float *)this + 114) = v22;
    *((float *)this + 113) = (float)(*((float *)this + 113) + 0.5) * v32;
    *((float *)this + 114) = (float)(v22 + 0.5) * v32;
  }
  else
  {
    *((_DWORD *)this + 107) = 0;
    *((_DWORD *)this + 108) = 0;
    *((_DWORD *)this + 109) = 0;
    *((_DWORD *)this + 110) = 0;
    *((_DWORD *)this + 111) = 0;
    *((_DWORD *)this + 112) = 0;
    *((_DWORD *)this + 113) = 0;
    *((_DWORD *)this + 114) = 0;
  }
  v23 = v38;
  Ogre::ParticleEmitterFrameData::ParticleEmitterFrameData((Ogre::ParticleEmitterFrameData *)v38);
  v24 = *((Ogre::ParticleEmitterData **)this + 63);
  if ( *((_BYTE *)v24 + 238) != 0 )
  {
    Ogre::ParticleEmitterData::prepareSimpleGenParticle((int)v24, (_DWORD *)this + 115, (int)a3);
    v23 = (char *)this + 460;
  }
  else
  {
    Ogre::ParticleEmitterData::prepareGenParticle(
      v24,
      (Ogre::ParticleEmitterFrameData *)v38,
      *((_DWORD *)this + 78),
      *((_DWORD *)this + 77),
      a3);
  }
  *((_DWORD *)v23 + 53) = *((_DWORD *)this + 79);
  v25 = (float)(a2 * *((float *)v23 + 42)) + *((float *)this + 68);
  *((float *)this + 68) = v25;
  if ( (int)v25 > 0 )
  {
    if ( *((_BYTE *)this + 696) == 0 )
      Ogre::ParticleEmitter::emitParticles(this, (int)v25, (const Ogre::ParticleEmitterFrameData *)v23);
    *((_DWORD *)this + 68) = 0;
  }
  *((float *)this + 173) = *((float *)this + 173) + a2;
  Ogre::ParticleEmitter::updateParticles(*(float *)&this, a2, (const Ogre::ParticleEmitterFrameData *)v23);
  if ( *((float *)this + 173) > 0.03 )
    *((_DWORD *)this + 173) = 0;
  *((_BYTE *)this + 320) = 1;
  result = *((_DWORD *)a3 + 12);
  v27 = *((_DWORD *)a3 + 13);
  v28 = *((_DWORD *)a3 + 14);
  *((_DWORD *)this + 35) = result;
  *((_DWORD *)this + 36) = v27;
  *((_DWORD *)this + 37) = v28;
  if ( *(_BYTE *)(*((_DWORD *)this + 63) + 238) == 0 )
  {
    Ogre::Matrix4::operator=((char *)this + 460, v23);
    Ogre::Matrix4::operator=((char *)this + 524, v23 + 64);
    *((_DWORD *)this + 147) = *((_DWORD *)v23 + 32);
    *((_DWORD *)this + 148) = *((_DWORD *)v23 + 33);
    *((_DWORD *)this + 149) = *((_DWORD *)v23 + 34);
    *((_DWORD *)this + 150) = *((_DWORD *)v23 + 35);
    *((_DWORD *)this + 151) = *((_DWORD *)v23 + 36);
    *((_DWORD *)this + 152) = *((_DWORD *)v23 + 37);
    *((_DWORD *)this + 153) = *((_DWORD *)v23 + 38);
    *((_DWORD *)this + 154) = *((_DWORD *)v23 + 39);
    *((_DWORD *)this + 155) = *((_DWORD *)v23 + 40);
    *((_DWORD *)this + 156) = *((_DWORD *)v23 + 41);
    *((_DWORD *)this + 157) = *((_DWORD *)v23 + 42);
    *((_DWORD *)this + 158) = *((_DWORD *)v23 + 43);
    *((_DWORD *)this + 159) = *((_DWORD *)v23 + 44);
    *((_DWORD *)this + 160) = *((_DWORD *)v23 + 45);
    *((_DWORD *)this + 161) = *((_DWORD *)v23 + 46);
    v29 = *((_DWORD *)v23 + 48);
    v30 = *((_DWORD *)v23 + 49);
    *((_DWORD *)this + 162) = *((_DWORD *)v23 + 47);
    *((_DWORD *)this + 163) = v29;
    *((_DWORD *)this + 164) = v30;
    *((_DWORD *)this + 165) = *((_DWORD *)v23 + 50);
    *((_DWORD *)this + 166) = *((_DWORD *)v23 + 51);
    *((_DWORD *)this + 167) = *((_DWORD *)v23 + 52);
    *((_DWORD *)this + 168) = *((_DWORD *)v23 + 53);
    *((_DWORD *)this + 169) = *((_DWORD *)v23 + 54);
    *((_DWORD *)this + 170) = *((_DWORD *)v23 + 55);
    *((_DWORD *)this + 171) = *((_DWORD *)v23 + 56);
    return 672;
  }
  return result;
}


//======================================================================
// Ogre::ParticleEmitter::update(unsigned int)
// address: 0x00175E24   size: 0xFE (254 bytes)
//======================================================================
int __fastcall Ogre::ParticleEmitter::update(Ogre::ParticleEmitter *this, unsigned int a2)
{
  char *WorldMatrix; // r0
  Ogre::ParticleEmitterData **v5; // r6
  float v6; // r1
  Ogre::ParticleEmitterData *v7; // r7
  char *v8; // r0
  int *v9; // r3
  int v10; // r7
  char *v11; // r0
  int v13; // [sp+10h] [bp-10Ch]
  int v14; // [sp+10h] [bp-10Ch]
  unsigned int v15; // [sp+14h] [bp-108h]
  _BYTE v16[64]; // [sp+18h] [bp-104h] BYREF
  _DWORD v17[16]; // [sp+58h] [bp-C4h] BYREF
  _BYTE v18[64]; // [sp+98h] [bp-84h] BYREF
  _DWORD v19[17]; // [sp+D8h] [bp-44h] BYREF

  Ogre::MovableObject::update(this, a2);
  WorldMatrix = Ogre::MovableObject::getWorldMatrix(this);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v16, (const Ogre::Matrix4 *)WorldMatrix);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v17);
  Ogre::Matrix4::getScale((Ogre::Matrix4 *)v16, (Ogre::Matrix4 *)v17);
  v5 = (Ogre::ParticleEmitterData **)((char *)this + 252);
  *((_DWORD *)this + 79) = v17[0];
  v6 = (float)a2 / 1000.0;
  if ( *((_BYTE *)this + 688) != 0 )
  {
    if ( *((_BYTE *)this + 184) == 0 )
      *((_DWORD *)this + 77) += a2;
  }
  else
  {
    v7 = *v5;
    v13 = *((_DWORD *)this + 78);
    v15 = *((_DWORD *)this + 77);
    v8 = Ogre::MovableObject::getWorldMatrix(this);
    Ogre::ParticleEmitterData::prepareGenParticle(
      v7,
      (Ogre::ParticleEmitter *)((char *)this + 460),
      v13,
      v15,
      (const Ogre::Matrix4 *)v8);
    *((_DWORD *)this + 168) = *((_DWORD *)this + 79);
    *((_BYTE *)this + 688) = 1;
    if ( *v5 != nullptr )
    {
      v9 = (int *)((char *)*v5 + 240);
      if ( *v9 > 0 )
      {
        v10 = 0;
        v14 = (int)(float)((float)*v9 / 33.0);
        while ( v10 < v14 )
        {
          v11 = Ogre::MovableObject::getWorldMatrix(this);
          Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v18, (const Ogre::Matrix4 *)v11);
          Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v19);
          Ogre::Matrix4::getScale((Ogre::Matrix4 *)v18, (Ogre::Matrix4 *)v19);
          *((_DWORD *)this + 79) = v19[0];
          Ogre::ParticleEmitter::calculateUpdate(this, 0.033, (const Ogre::Matrix4 *)v18);
          ++v10;
        }
      }
    }
    v6 = 0.0;
  }
  return Ogre::ParticleEmitter::calculateUpdate(this, v6, (const Ogre::Matrix4 *)v16);
}

