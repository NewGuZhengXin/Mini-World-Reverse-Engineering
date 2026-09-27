// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BeamEmitterData

//======================================================================
// Ogre::BeamEmitterData::getRTTI(void)const
// address: 0x0016A494   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::BeamEmitterData::getRTTI(Ogre::BeamEmitterData *this)
{
  return &Ogre::BeamEmitterData::m_RTTI;
}


//======================================================================
// Ogre::BeamEmitterData::~BeamEmitterData()
// address: 0x0016A4B4   size: 0x9E (158 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15BeamEmitterDataD1Ev'
void __fastcall Ogre::BeamEmitterData::~BeamEmitterData(Ogre::BeamEmitterData *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  void *v4; // r1

  *(_DWORD *)this = &off_4570E8;
  v2 = *((_DWORD **)this + 175);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 175) = 0;
  }
  v3 = *((_DWORD **)this + 176);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 176) = 0;
  }
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BeamEmitterData *)((char *)this + 652));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BeamEmitterData *)((char *)this + 604));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BeamEmitterData *)((char *)this + 556));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BeamEmitterData *)((char *)this + 508));
  Ogre::KeyFrameArray<Ogre::Vector3>::~KeyFrameArray((Ogre::BeamEmitterData *)((char *)this + 460));
  Ogre::KeyFrameArray<Ogre::Vector3>::~KeyFrameArray((Ogre::BeamEmitterData *)((char *)this + 412));
  Ogre::KeyFrameArray<Ogre::Vector3>::~KeyFrameArray((Ogre::BeamEmitterData *)((char *)this + 364));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BeamEmitterData *)((char *)this + 316));
  Ogre::KeyFrameArray<Ogre::ColourValue>::~KeyFrameArray((Ogre::BeamEmitterData *)((char *)this + 268));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BeamEmitterData *)((char *)this + 220));
  Ogre::Resource::~Resource((Ogre::FixedString **)this, v4);
}


//======================================================================
// Ogre::BeamEmitterData::~BeamEmitterData()
// address: 0x0016A558   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::BeamEmitterData::~BeamEmitterData(Ogre::BeamEmitterData *this)
{
  Ogre::BeamEmitterData::~BeamEmitterData(this);
  operator delete(this);
}


//======================================================================
// Ogre::BeamEmitterData::BeamEmitterData(void)
// address: 0x0016A5BC   size: 0xCC (204 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15BeamEmitterDataC1Ev'
Ogre::BeamEmitterData *__fastcall Ogre::BeamEmitterData::BeamEmitterData(Ogre::BeamEmitterData *this)
{
  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &off_4570E8;
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 55);
  *((_DWORD *)this + 68) = 1;
  *((_DWORD *)this + 69) = 0;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  *((_DWORD *)this + 67) = &off_455A18;
  *((_DWORD *)this + 72) = 1;
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 78) = 0;
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 79);
  Ogre::KeyFrameArray<Ogre::Vector3>::KeyFrameArray((_DWORD *)this + 91);
  Ogre::KeyFrameArray<Ogre::Vector3>::KeyFrameArray((_DWORD *)this + 103);
  Ogre::KeyFrameArray<Ogre::Vector3>::KeyFrameArray((_DWORD *)this + 115);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 127);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 139);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 151);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 163);
  *((_DWORD *)this + 175) = 0;
  *((_DWORD *)this + 176) = 0;
  *((_BYTE *)this + 16) = 0;
  return this;
}


//======================================================================
// Ogre::BeamEmitterData::newObject(void)
// address: 0x0016A694   size: 0x14 (20 bytes)
//======================================================================
Ogre::BeamEmitterData *__fastcall Ogre::BeamEmitterData::newObject(Ogre::BeamEmitterData *this)
{
  Ogre::BeamEmitterData *v1; // r4

  v1 = (Ogre::BeamEmitterData *)operator new(0x2C4u);
  Ogre::BeamEmitterData::BeamEmitterData(v1);
  return v1;
}


//======================================================================
// Ogre::BeamEmitterData::_serialize(Ogre::Archive &,int)
// address: 0x0016A6BC   size: 0xFC (252 bytes)
//======================================================================
int __fastcall Ogre::BeamEmitterData::_serialize(Ogre::BeamEmitterData *this, Ogre::Archive *a2, int a3)
{
  Ogre::Archive *v6; // r6
  Ogre::TextureData **v7; // r2
  int result; // r0
  Ogre::TextureData **v9; // r2
  Ogre::TextureData **v10; // r2
  _DWORD v11[40]; // [sp+4h] [bp-A0h] BYREF

  v6 = (Ogre::BeamEmitterData *)((char *)this + 700);
  if ( a3 == 100 )
  {
    v11[18] = 1065353216;
    v11[19] = 1065353216;
    v11[20] = 1065353216;
    v11[21] = 1065353216;
    v11[22] = 1065353216;
    v11[23] = 1065353216;
    v11[24] = 1065353216;
    v11[25] = 1065353216;
    v11[26] = 1065353216;
    v11[27] = 1065353216;
    v11[28] = 1065353216;
    v11[29] = 1065353216;
    Ogre::Archive::serialize(a2, v11, 0x9Cu);
    return Ogre::SerializeExternalTexture(a2, v6, v7);
  }
  else
  {
    Ogre::Archive::serialize(a2, (char *)this + 84, 0x88u);
    Ogre::operator<<<float>((int)a2, (int)this + 220);
    (*(void (__fastcall **)(char *, Ogre::Archive *, int))(*((_DWORD *)this + 67) + 12))((char *)this + 268, a2, 100);
    Ogre::operator<<<float>((int)a2, (int)this + 316);
    Ogre::operator<<<Ogre::Vector3>((int)a2, (int)this + 364);
    Ogre::operator<<<Ogre::Vector3>((int)a2, (int)this + 412);
    Ogre::operator<<<Ogre::Vector3>((int)a2, (int)this + 460);
    Ogre::operator<<<float>((int)a2, (int)this + 508);
    Ogre::operator<<<float>((int)a2, (int)this + 556);
    Ogre::operator<<<float>((int)a2, (int)this + 604);
    Ogre::operator<<<float>((int)a2, (int)this + 652);
    Ogre::SerializeExternalTexture(a2, v6, v9);
    result = Ogre::SerializeExternalTexture(a2, (Ogre::BeamEmitterData *)((char *)this + 704), v10);
    if ( a3 <= 101 && *((_DWORD *)a2 + 2) == 1 )
    {
      *((_DWORD *)this + 37) = 0;
      *((_DWORD *)this + 46) = 1;
    }
  }
  return result;
}


//======================================================================
// Ogre::BeamEmitterData::PrepareData(unsigned int)
// address: 0x0016A7B8   size: 0x96 (150 bytes)
//======================================================================
int __fastcall Ogre::BeamEmitterData::PrepareData(Ogre::BeamEmitterData *this, unsigned int a2)
{
  int v5; // [sp+0h] [bp-8h]

  Ogre::KeyFrameArray<Ogre::Vector3>::getValue(
    (_DWORD *)this + 91,
    0,
    a2,
    COERCE_FLOAT((Ogre::BeamEmitterData *)((char *)this + 32)),
    1);
  Ogre::KeyFrameArray<Ogre::Vector3>::getValue(
    (_DWORD *)this + 103,
    0,
    a2,
    COERCE_FLOAT((Ogre::BeamEmitterData *)((char *)this + 44)),
    1);
  Ogre::KeyFrameArray<Ogre::Vector3>::getValue(
    (_DWORD *)this + 115,
    0,
    a2,
    COERCE_FLOAT((Ogre::BeamEmitterData *)((char *)this + 56)),
    1);
  Ogre::KeyFrameArray<float>::getValue((int)this + 556, 0, a2, (int *)this + 18, 1);
  Ogre::KeyFrameArray<float>::getValue((int)this + 604, 0, a2, (int *)this + 19, 1);
  Ogre::KeyFrameArray<float>::getValue((int)this + 508, 0, a2, (int *)this + 17, 1);
  Ogre::KeyFrameArray<float>::getValue((int)this + 652, 0, a2, (int *)this + 20, 1);
  return v5;
}


//======================================================================
// Ogre::BeamEmitterData::GernerateLFPoints(std::vector<float,std::allocator<float>> &,int,Ogre::BEAM_WAVE_TYPE,float,float,float)
// address: 0x0016AAA4   size: 0xB2 (178 bytes)
//======================================================================
int __fastcall Ogre::BeamEmitterData::GernerateLFPoints(
        int result,
        unsigned int a2,
        float a3,
        int a4,
        float a5,
        Ogre *a6,
        int a7)
{
  int v7; // r7
  int v9; // r4
  float v10; // r4
  int v11; // r4
  float v12; // r1
  float v14[2]; // [sp+Ch] [bp-8h] BYREF

  v7 = result;
  v9 = a4;
  if ( a4 != 0 )
  {
    v10 = 0.0;
    if ( a4 == 2 )
    {
      while ( SLODWORD(v10) < SLODWORD(a3) )
      {
        v14[0] = 0.0;
        ++LODWORD(v10);
        result = std::vector<float>::push_back(__SPAIR64__(v14, a2));
      }
    }
    else
    {
      v11 = 0;
      if ( a4 == 1 )
      {
        while ( v11 < SLODWORD(a3) )
        {
          v14[0] = a5
                 * Ogre::fastSin(
                     COERCE_OGRE_(
                       (float)((float)((float)(*(float *)&a7 * 360.0) * (float)v11) / (float)SLODWORD(a3))
                     + *(float *)&a6),
                     v12);
          result = std::vector<float>::push_back(__SPAIR64__(v14, a2));
          ++v11;
        }
      }
    }
  }
  else
  {
    while ( v9 < SLODWORD(a3) )
    {
      if ( v9 != 0 && v9 != *(_DWORD *)(v7 + 104) - 1 )
        v14[0] = Ogre::RandFlt(a6, a5, a3);
      else
        v14[0] = 0.0;
      result = std::vector<float>::push_back(__SPAIR64__(v14, a2));
      ++v9;
    }
  }
  return result;
}


//======================================================================
// Ogre::BeamEmitterData::EmitBeam(Ogre::BEAM_DATA *)
// address: 0x0016AB5C   size: 0x3D8 (984 bytes)
//======================================================================
void **__fastcall Ogre::BeamEmitterData::EmitBeam(int a1, unsigned int a2)
{
  float v2; // r2
  float v5; // r0
  float v6; // r1
  float v7; // r0
  float v8; // r1
  float v9; // r2
  float v10; // r0
  float v11; // r1
  float v12; // r0
  float v13; // r1
  float v14; // r2
  float v15; // r0
  float v16; // r1
  float v17; // r0
  int v18; // r3
  int v19; // r2
  int v20; // r3
  float v21; // r5
  float v22; // r0
  float v23; // r6
  float v24; // r1
  int v25; // r3
  float v26; // r2
  int v27; // r5
  float v28; // r0
  float v29; // r5
  float v30; // r5
  int v31; // r2
  int v32; // r5
  float v33; // r0
  float v34; // r2
  float v35; // r5
  float v36; // r2
  float v37; // r0
  float v38; // r5
  float v39; // r2
  float v41; // [sp+0h] [bp-ECh]
  Ogre *v42; // [sp+4h] [bp-E8h]
  int v43; // [sp+8h] [bp-E4h]
  int i; // [sp+18h] [bp-D4h]
  int v45; // [sp+20h] [bp-CCh]
  float v46; // [sp+24h] [bp-C8h]
  float v47; // [sp+28h] [bp-C4h]
  float v48; // [sp+2Ch] [bp-C0h]
  float v49; // [sp+34h] [bp-B8h] BYREF
  float v50; // [sp+38h] [bp-B4h]
  float v51; // [sp+3Ch] [bp-B0h]
  float v52[3]; // [sp+40h] [bp-ACh] BYREF
  float v53[3]; // [sp+4Ch] [bp-A0h] BYREF
  float v54[3]; // [sp+58h] [bp-94h] BYREF
  float v55[3]; // [sp+64h] [bp-88h] BYREF
  float v56; // [sp+70h] [bp-7Ch] BYREF
  float v57; // [sp+74h] [bp-78h]
  float v58; // [sp+78h] [bp-74h]
  float v59; // [sp+7Ch] [bp-70h] BYREF
  float v60; // [sp+80h] [bp-6Ch]
  float v61; // [sp+84h] [bp-68h]
  void *v62[3]; // [sp+88h] [bp-64h] BYREF
  void *v63[3]; // [sp+94h] [bp-58h] BYREF
  float v64; // [sp+A0h] [bp-4Ch] BYREF
  float v65; // [sp+A4h] [bp-48h]
  float v66; // [sp+A8h] [bp-44h]
  float v67[3]; // [sp+ACh] [bp-40h] BYREF
  float v68; // [sp+B8h] [bp-34h] BYREF
  float v69; // [sp+BCh] [bp-30h]
  float v70; // [sp+C0h] [bp-2Ch]
  float v71[3]; // [sp+C4h] [bp-28h] BYREF
  float v72[3]; // [sp+D0h] [bp-1Ch] BYREF
  float v73; // [sp+DCh] [bp-10h] BYREF
  float v74; // [sp+E0h] [bp-Ch]
  float v75; // [sp+E4h] [bp-8h]

  v2 = *(float *)a2;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)a2;
  v5 = Ogre::RandFlt((Ogre *)(*(_DWORD *)(a1 + 32) + 0x80000000), *(float *)(a1 + 32), v2);
  v6 = *(float *)(a1 + 36);
  v49 = v5;
  v7 = Ogre::RandFlt((Ogre *)(LODWORD(v6) + 0x80000000), v6, -0.0);
  v8 = *(float *)(a1 + 40);
  v50 = v7;
  v10 = Ogre::RandFlt((Ogre *)(LODWORD(v8) + 0x80000000), v8, v9);
  v11 = *(float *)(a1 + 44);
  v51 = v10;
  v12 = Ogre::RandFlt((Ogre *)(LODWORD(v11) + 0x80000000), v11, -0.0);
  v13 = *(float *)(a1 + 48);
  v52[0] = v12;
  v15 = Ogre::RandFlt((Ogre *)(LODWORD(v13) + 0x80000000), v13, v14);
  v16 = *(float *)(a1 + 52);
  v52[1] = v15;
  v17 = Ogre::RandFlt((Ogre *)(LODWORD(v16) + 0x80000000), v16, -0.0);
  v18 = *(unsigned __int8 *)(a1 + 16);
  v52[2] = v17;
  if ( v18 != 0 )
  {
    v19 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 20);
    v20 = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 60) = v19;
    *(_DWORD *)(a1 + 64) = v20;
  }
  Ogre::operator+(v53, (float *)(a1 + 56), v52);
  v21 = v53[1];
  v22 = v53[0];
  v23 = v53[2];
  *(float *)(a2 + 52) = v53[1];
  v24 = v49;
  *(float *)(a2 + 56) = v23;
  *(float *)(a2 + 48) = v22;
  v46 = v22 - v24;
  v47 = v21 - v50;
  v48 = v23 - v51;
  v54[2] = v23 - v51;
  v54[0] = v22 - v24;
  v54[1] = v21 - v50;
  Ogre::Normalize(v54);
  v55[0] = 0.0;
  v55[1] = 1.0;
  v55[2] = 0.0;
  Ogre::CrossProduct(&v56, v54, v55);
  Ogre::CrossProduct(&v59, v54, &v56);
  v41 = *(float *)(a1 + 112);
  v42 = *(Ogre **)(a1 + 116);
  v43 = *(_DWORD *)(a1 + 120);
  v25 = *(_DWORD *)(a1 + 108);
  v26 = *(float *)(a1 + 104);
  memset(v62, 0, sizeof(v62));
  memset(v63, 0, sizeof(v63));
  Ogre::BeamEmitterData::GernerateLFPoints(a1, (unsigned int)v62, v26, v25, v41, v42, v43);
  Ogre::BeamEmitterData::GernerateLFPoints(
    a1,
    (unsigned int)v63,
    *(float *)(a1 + 104),
    *(_DWORD *)(a1 + 124),
    *(float *)(a1 + 128),
    *(Ogre **)(a1 + 132),
    *(_DWORD *)(a1 + 136));
  for ( i = 0; ; ++i )
  {
    v27 = *(_DWORD *)(a1 + 104);
    if ( i >= v27 )
      break;
    v28 = (float)i / (float)(v27 - 1);
    v73 = v46 * v28;
    v74 = v47 * v28;
    v75 = v48 * v28;
    Ogre::operator+(v67, &v49, &v73);
    v29 = *((float *)v62[0] + i);
    v71[0] = v59 * v29;
    v71[1] = v29 * v60;
    v71[2] = v29 * v61;
    Ogre::operator+(v72, v67, v71);
    v30 = *((float *)v63[0] + i);
    v73 = v56 * v30;
    v74 = v30 * v57;
    v75 = v30 * v58;
    Ogre::operator+(&v68, v72, &v73);
    v31 = 1;
    if ( i != 0 )
    {
      while ( 1 )
      {
        v45 = v31;
        v32 = *(_DWORD *)(a1 + 92);
        if ( v31 >= v32 )
          break;
        v33 = (float)v31 / (float)v32;
        v73 = (float)(v68 - v64) * v33;
        v74 = (float)(v69 - v65) * v33;
        v75 = (float)(v70 - v66) * v33;
        Ogre::operator+(v72, &v64, &v73);
        v35 = Ogre::RandFlt(*(Ogre **)(a1 + 96), *(float *)(a1 + 100), v34);
        v73 = v59 * v35;
        v75 = v35 * v61;
        v74 = v35 * v60;
        Ogre::Vector3::operator+=(v72, &v73);
        v37 = Ogre::RandFlt(*(Ogre **)(a1 + 96), *(float *)(a1 + 100), v36);
        v73 = v56 * v37;
        v74 = v37 * v57;
        v75 = v37 * v58;
        Ogre::Vector3::operator+=(v72, &v73);
        std::vector<Ogre::Vector3>::push_back(__SPAIR64__(v72, a2));
        v31 = v45 + 1;
      }
    }
    v64 = v68;
    v65 = v69;
    v66 = v70;
    std::vector<Ogre::Vector3>::push_back(__SPAIR64__(&v68, a2));
  }
  *(_DWORD *)(a2 + 16) = 0;
  v38 = *(float *)(a1 + 72);
  *(float *)(a2 + 12) = v38
                      * (float)(Ogre::RandFlt((Ogre *)(*(_DWORD *)(a1 + 76) + 0x80000000), *(float *)(a1 + 76), -0.0)
                              + 1.0);
  Ogre::KeyFrameArray<Ogre::ColourValue>::getValue((_DWORD *)(a1 + 268), 0, 0, (float *)(a2 + 20), 1);
  Ogre::KeyFrameArray<float>::getValue(a1 + 220, 0, 0, (int *)(a2 + 36), 1);
  Ogre::KeyFrameArray<float>::getValue(a1 + 316, 0, 0, (int *)(a2 + 32), 1);
  if ( *(_BYTE *)(a1 + 142) != 0 )
    *(_DWORD *)(a2 + 60) = (int)Ogre::RandFlt(nullptr, (float)*(int *)(a1 + 164) * (float)*(int *)(a1 + 160), v39);
  else
    *(_DWORD *)(a2 + 60) = *(unsigned __int8 *)(a1 + 142);
  *(_DWORD *)(a2 + 64) = 0;
  *(_DWORD *)(a2 + 68) = 0;
  *(_DWORD *)(a2 + 72) = 0;
  *(_DWORD *)(a2 + 76) = 0;
  *(_DWORD *)(a2 + 80) = 0;
  *(float *)(a2 + 44) = Ogre::RandFlt((Ogre *)(*(_DWORD *)(a1 + 68) + 0x80000000), *(float *)(a1 + 68), -0.0) + 1.0;
  std::_Vector_base<float>::~_Vector_base(v63);
  return std::_Vector_base<float>::~_Vector_base(v62);
}


//======================================================================
// Ogre::BeamEmitterData::UpdatePos(Ogre::BEAM_DATA *)
// address: 0x0016AF34   size: 0x310 (784 bytes)
//======================================================================
void **__fastcall Ogre::BeamEmitterData::UpdatePos(int a1, unsigned int a2)
{
  float v2; // r2
  float v4; // r0
  float v5; // r1
  float v6; // r0
  float v7; // r1
  float v8; // r2
  float v9; // r0
  float v10; // r1
  float v11; // r0
  float v12; // r1
  float v13; // r2
  float v14; // r0
  float v15; // r1
  float v16; // r0
  int v17; // r3
  int v18; // r2
  int v19; // r3
  float v20; // r5
  float v21; // r0
  float v22; // r6
  int v23; // r3
  float v24; // r2
  int v25; // r5
  float v26; // r0
  float v27; // r5
  float v28; // r5
  int v29; // r5
  float v30; // r0
  float v31; // r2
  float v32; // r5
  float v33; // r2
  float v34; // r5
  float v36; // [sp+0h] [bp-F4h]
  Ogre *v37; // [sp+4h] [bp-F0h]
  int v38; // [sp+8h] [bp-ECh]
  int i; // [sp+18h] [bp-DCh]
  int j; // [sp+24h] [bp-D0h]
  float v42; // [sp+2Ch] [bp-C8h]
  float v43; // [sp+30h] [bp-C4h]
  float v44; // [sp+34h] [bp-C0h]
  float v45; // [sp+3Ch] [bp-B8h] BYREF
  float v46; // [sp+40h] [bp-B4h]
  float v47; // [sp+44h] [bp-B0h]
  float v48[3]; // [sp+48h] [bp-ACh] BYREF
  float v49[3]; // [sp+54h] [bp-A0h] BYREF
  float v50[3]; // [sp+60h] [bp-94h] BYREF
  float v51[3]; // [sp+6Ch] [bp-88h] BYREF
  float v52; // [sp+78h] [bp-7Ch] BYREF
  float v53; // [sp+7Ch] [bp-78h]
  float v54; // [sp+80h] [bp-74h]
  float v55; // [sp+84h] [bp-70h] BYREF
  float v56; // [sp+88h] [bp-6Ch]
  float v57; // [sp+8Ch] [bp-68h]
  void *v58[3]; // [sp+90h] [bp-64h] BYREF
  void *v59[3]; // [sp+9Ch] [bp-58h] BYREF
  float v60; // [sp+A8h] [bp-4Ch] BYREF
  float v61; // [sp+ACh] [bp-48h]
  float v62; // [sp+B0h] [bp-44h]
  float v63[3]; // [sp+B4h] [bp-40h] BYREF
  float v64; // [sp+C0h] [bp-34h] BYREF
  float v65; // [sp+C4h] [bp-30h]
  float v66; // [sp+C8h] [bp-2Ch]
  float v67[3]; // [sp+CCh] [bp-28h] BYREF
  float v68[3]; // [sp+D8h] [bp-1Ch] BYREF
  float v69; // [sp+E4h] [bp-10h] BYREF
  float v70; // [sp+E8h] [bp-Ch]
  float v71; // [sp+ECh] [bp-8h]

  v2 = *(float *)a2;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)a2;
  v4 = Ogre::RandFlt((Ogre *)(*(_DWORD *)(a1 + 32) + 0x80000000), *(float *)(a1 + 32), v2);
  v5 = *(float *)(a1 + 36);
  v45 = v4;
  v6 = Ogre::RandFlt((Ogre *)(LODWORD(v5) + 0x80000000), v5, -0.0);
  v7 = *(float *)(a1 + 40);
  v46 = v6;
  v9 = Ogre::RandFlt((Ogre *)(LODWORD(v7) + 0x80000000), v7, v8);
  v10 = *(float *)(a1 + 44);
  v47 = v9;
  v11 = Ogre::RandFlt((Ogre *)(LODWORD(v10) + 0x80000000), v10, -0.0);
  v12 = *(float *)(a1 + 48);
  v48[0] = v11;
  v14 = Ogre::RandFlt((Ogre *)(LODWORD(v12) + 0x80000000), v12, v13);
  v15 = *(float *)(a1 + 52);
  v48[1] = v14;
  v16 = Ogre::RandFlt((Ogre *)(LODWORD(v15) + 0x80000000), v15, -0.0);
  v17 = *(unsigned __int8 *)(a1 + 16);
  v48[2] = v16;
  if ( v17 != 0 )
  {
    v18 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 20);
    v19 = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 60) = v18;
    *(_DWORD *)(a1 + 64) = v19;
  }
  Ogre::operator+(v49, (float *)(a1 + 56), v48);
  v20 = v49[1];
  v21 = v49[0];
  v22 = v49[2];
  *(float *)(a2 + 52) = v49[1];
  *(float *)(a2 + 48) = v21;
  *(float *)(a2 + 56) = v22;
  v42 = v21 - v45;
  v43 = v20 - v46;
  v44 = v22 - v47;
  v50[2] = v22 - v47;
  v50[1] = v20 - v46;
  v50[0] = v21 - v45;
  Ogre::Normalize(v50);
  v51[1] = 1.0;
  v51[2] = 0.0;
  v51[0] = 0.0;
  Ogre::CrossProduct(&v52, v50, v51);
  Ogre::CrossProduct(&v55, v50, &v52);
  v36 = *(float *)(a1 + 112);
  v37 = *(Ogre **)(a1 + 116);
  v38 = *(_DWORD *)(a1 + 120);
  v23 = *(_DWORD *)(a1 + 108);
  v24 = *(float *)(a1 + 104);
  memset(v58, 0, sizeof(v58));
  memset(v59, 0, sizeof(v59));
  Ogre::BeamEmitterData::GernerateLFPoints(a1, (unsigned int)v58, v24, v23, v36, v37, v38);
  Ogre::BeamEmitterData::GernerateLFPoints(
    a1,
    (unsigned int)v59,
    *(float *)(a1 + 104),
    *(_DWORD *)(a1 + 124),
    *(float *)(a1 + 128),
    *(Ogre **)(a1 + 132),
    *(_DWORD *)(a1 + 136));
  for ( i = 0; ; ++i )
  {
    v25 = *(_DWORD *)(a1 + 104);
    if ( i >= v25 )
      break;
    v26 = (float)i / (float)(v25 - 1);
    v69 = v42 * v26;
    v70 = v43 * v26;
    v71 = v44 * v26;
    Ogre::operator+(v63, &v45, &v69);
    v27 = *((float *)v58[0] + i);
    v67[0] = v55 * v27;
    v67[1] = v27 * v56;
    v67[2] = v27 * v57;
    Ogre::operator+(v68, v63, v67);
    v28 = *((float *)v59[0] + i);
    v69 = v52 * v28;
    v70 = v28 * v53;
    v71 = v28 * v54;
    Ogre::operator+(&v64, v68, &v69);
    if ( i != 0 )
    {
      for ( j = 1; ; ++j )
      {
        v29 = *(_DWORD *)(a1 + 92);
        if ( j >= v29 )
          break;
        v30 = (float)j / (float)v29;
        v69 = (float)(v64 - v60) * v30;
        v70 = (float)(v65 - v61) * v30;
        v71 = (float)(v66 - v62) * v30;
        Ogre::operator+(v68, &v60, &v69);
        v32 = Ogre::RandFlt(*(Ogre **)(a1 + 96), *(float *)(a1 + 100), v31);
        v69 = v55 * v32;
        v70 = v32 * v56;
        v71 = v32 * v57;
        Ogre::Vector3::operator+=(v68, &v69);
        v34 = Ogre::RandFlt(*(Ogre **)(a1 + 96), *(float *)(a1 + 100), v33);
        v69 = v52 * v34;
        v70 = v34 * v53;
        v71 = v34 * v54;
        Ogre::Vector3::operator+=(v68, &v69);
        std::vector<Ogre::Vector3>::push_back(__SPAIR64__(v68, a2));
      }
    }
    v61 = v65;
    v60 = v64;
    v62 = v66;
    std::vector<Ogre::Vector3>::push_back(__SPAIR64__(&v64, a2));
  }
  std::_Vector_base<float>::~_Vector_base(v59);
  return std::_Vector_base<float>::~_Vector_base(v58);
}

