// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BeamEmitter

//======================================================================
// Ogre::BeamEmitter::getRTTI(void)const
// address: 0x0014C4D0   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::BeamEmitter::getRTTI(Ogre::BeamEmitter *this)
{
  return &Ogre::BeamEmitter::m_RTTI;
}


//======================================================================
// Ogre::BeamEmitter::getRenderPassRequired(Ogre::RenderPassDesc &)
// address: 0x0014C4DC   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::BeamEmitter::getRenderPassRequired(int a1, _DWORD *a2)
{
  int result; // r0

  result = a1 + 252;
  if ( *(_BYTE *)(*(_DWORD *)result + 141) != 0 )
    *a2 |= 0x20u;
  return result;
}


//======================================================================
// Ogre::BeamEmitter::~BeamEmitter()
// address: 0x0014C524   size: 0x88 (136 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11BeamEmitterD1Ev'
void __fastcall Ogre::BeamEmitter::~BeamEmitter(Ogre::BeamEmitter *this)
{
  char *v1; // r5
  _DWORD *v3; // r0
  _DWORD *i; // r5
  void *v5; // r0
  _DWORD *v6; // r6
  void *v7; // r0
  void *v8; // r0
  void *v9; // r0

  v1 = (char *)this + 252;
  *(_DWORD *)this = &off_455EE0;
  v3 = *((_DWORD **)this + 90);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)v1 + 27) = 0;
  }
  if ( *(_DWORD *)v1 != 0 )
  {
    Ogre::BaseObject::release(*(_DWORD **)v1);
    *(_DWORD *)v1 = 0;
  }
  for ( i = *((_DWORD **)this + 82); i != (_DWORD *)((char *)this + 328); i = v6 )
  {
    v5 = (void *)i[2];
    v6 = (_DWORD *)*i;
    if ( v5 != nullptr )
      operator delete(v5);
    operator delete(i);
  }
  v7 = *((void **)this + 79);
  if ( v7 != nullptr )
    operator delete(v7);
  v8 = *((void **)this + 76);
  if ( v8 != nullptr )
    operator delete(v8);
  v9 = *((void **)this + 73);
  if ( v9 != nullptr )
    operator delete(v9);
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// Ogre::BeamEmitter::~BeamEmitter()
// address: 0x0014C5B0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::BeamEmitter::~BeamEmitter(Ogre::BeamEmitter *this)
{
  Ogre::BeamEmitter::~BeamEmitter(this);
  operator delete(this);
}


//======================================================================
// Ogre::BeamEmitter::BeamEmitter(Ogre::BeamEmitterData *)
// address: 0x0014C5E4   size: 0x13C (316 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11BeamEmitterC1EPNS_15BeamEmitterDataE'
Ogre::BeamEmitter *__fastcall Ogre::BeamEmitter::BeamEmitter(Ogre::BeamEmitter *this, Ogre::BeamEmitterData *a2)
{
  int v5; // [sp+4h] [bp-10h]

  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 59) = 2;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_DWORD *)this + 53) = 0;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_455EE0;
  *((_DWORD *)this + 63) = a2;
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 78) = 0;
  *((_DWORD *)this + 79) = 0;
  *((_DWORD *)this + 80) = 0;
  *((_DWORD *)this + 81) = 0;
  *((_DWORD *)this + 82) = (char *)this + 328;
  *((_DWORD *)this + 83) = (char *)this + 328;
  *((_DWORD *)this + 90) = 0;
  if ( a2 != nullptr )
  {
    (*(void (__fastcall **)(Ogre::BeamEmitterData *))(*(_DWORD *)a2 + 4))(a2);
    *((_DWORD *)this + 92) = 0;
    *((_DWORD *)this + 84) = 0;
    *((_DWORD *)this + 91) = 0;
    *((_DWORD *)this + 93) = 1065353216;
    *((_DWORD *)this + 71) = *((_DWORD *)a2 + 22);
    if ( dword_47264C == 0 )
    {
      Ogre::VertexFormat::addElement(&unk_472650, 2, 1, 0, 0, -1);
      Ogre::VertexFormat::addElement(&unk_472650, 4, 5, 0, 0, -1);
      Ogre::VertexFormat::addElement(&unk_472650, 1, 7, 0, 0, -1);
      Ogre::VertexFormat::addElement(&unk_472650, 1, 7, 1, 0, -1);
      dword_47264C = (*(int (__fastcall **)(int, void *))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton
                                                        + 36))(
                       Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
                       &unk_472650);
    }
    *((_DWORD *)this + 90) = Ogre::CreateParticleMaterial(
                               *((Ogre **)a2 + 21),
                               *((_DWORD *)a2 + 175),
                               *((Ogre::Texture **)a2 + 176),
                               *((Ogre::Texture **)a2 + 37),
                               *((_DWORD *)a2 + 46),
                               v5);
    if ( *(_BYTE *)(*((_DWORD *)this + 63) + 141) != 0 )
      *((_DWORD *)this + 61) = 32;
  }
  return this;
}


//======================================================================
// Ogre::BeamEmitter::newObject(void)
// address: 0x0014C72C   size: 0x16 (22 bytes)
//======================================================================
Ogre::BeamEmitter *__fastcall Ogre::BeamEmitter::newObject(Ogre::BeamEmitter *this)
{
  Ogre::BeamEmitter *v1; // r4

  v1 = (Ogre::BeamEmitter *)operator new(0x178u);
  Ogre::BeamEmitter::BeamEmitter(v1, nullptr);
  return v1;
}


//======================================================================
// Ogre::BeamEmitter::SetTargetPos(Ogre::Vector3)
// address: 0x0014C742   size: 0x5E (94 bytes)
//======================================================================
float __fastcall Ogre::BeamEmitter::SetTargetPos(_DWORD *a1, _DWORD *a2)
{
  float *v2; // r6
  float **v3; // r7
  char *WorldMatrix; // r0
  float v6; // r6
  float result; // r0
  float *v8; // r7
  float v9; // [sp+4h] [bp-48h]
  float v10[17]; // [sp+8h] [bp-44h] BYREF

  a1[64] = *a2;
  v2 = (float *)(a1 + 64);
  v3 = (float **)(a1 + 63);
  a1[65] = a2[1];
  a1[66] = a2[2];
  *(_BYTE *)(a1[63] + 16) = 1;
  WorldMatrix = Ogre::MovableObject::getWorldMatrix((Ogre::MovableObject *)a1);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v10, (const Ogre::Matrix4 *)WorldMatrix);
  v9 = v2[1] - v10[13];
  v6 = v2[2] - v10[14];
  result = *((float *)a1 + 64) - v10[12];
  v8 = *v3;
  v8[5] = result;
  v8[6] = v9;
  v8[7] = v6;
  return result;
}


//======================================================================
// Ogre::BeamEmitter::EmitBeam(void)
// address: 0x0014C7A0   size: 0x11A (282 bytes)
//======================================================================
void __fastcall Ogre::BeamEmitter::EmitBeam(Ogre::BeamEmitter *this)
{
  int v1; // r0
  _DWORD *v2; // r4
  char *v3; // r1
  _BYTE *v4; // r2
  unsigned int v5; // r7
  int v6; // r0
  char *v7; // r1
  char *v8; // r6
  char *v9; // r3
  _DWORD *v10; // r2
  int v11; // r1
  int v12; // r6
  int v13; // r7
  int v14; // r2
  int v15; // r3
  int v16; // r6
  int v17; // r7
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r6
  int v23; // r7
  void *v25; // [sp+Ch] [bp-58h] BYREF
  char *v26; // [sp+10h] [bp-54h]
  int v27; // [sp+14h] [bp-50h]
  int v28; // [sp+18h] [bp-4Ch]
  int v29; // [sp+1Ch] [bp-48h]
  int v30; // [sp+20h] [bp-44h]
  int v31; // [sp+24h] [bp-40h]
  int v32; // [sp+28h] [bp-3Ch]
  int v33; // [sp+2Ch] [bp-38h]
  int v34; // [sp+30h] [bp-34h]
  int v35; // [sp+34h] [bp-30h]
  int v36; // [sp+38h] [bp-2Ch]
  int v37; // [sp+3Ch] [bp-28h]
  int v38; // [sp+40h] [bp-24h]
  int v39; // [sp+44h] [bp-20h]
  int v40; // [sp+48h] [bp-1Ch]
  int v41; // [sp+4Ch] [bp-18h]
  int v42; // [sp+50h] [bp-14h]
  int v43; // [sp+54h] [bp-10h]
  int v44; // [sp+58h] [bp-Ch]
  int v45; // [sp+5Ch] [bp-8h]

  v30 = 1065353216;
  v31 = 1065353216;
  v32 = 1065353216;
  v33 = 1065353216;
  v1 = *((_DWORD *)this + 63);
  v26 = nullptr;
  v27 = 0;
  v25 = nullptr;
  Ogre::BeamEmitterData::EmitBeam(v1, &v25);
  v2 = (_DWORD *)operator new(0x5Cu);
  if ( v2 != (_DWORD *)-8 )
  {
    v3 = v26;
    v4 = v25;
    v2[2] = 0;
    v5 = -1431655765 * ((v3 - v4) >> 2);
    v2[3] = 0;
    v2[4] = 0;
    if ( v5 != 0 )
    {
      if ( v5 > 0x15555555 )
        sub_3BCEB4();
      v6 = operator new(4 * ((v3 - v4) >> 2));
    }
    else
    {
      v6 = -1431655765 * ((v3 - v4) >> 2);
    }
    v7 = (char *)v25;
    v8 = v26;
    v2[2] = v6;
    v2[3] = v6;
    v2[4] = v6 + 12 * v5;
    v9 = v7;
    v10 = (_DWORD *)v6;
    while ( v9 != v8 )
    {
      if ( v10 != nullptr )
      {
        *v10 = *(_DWORD *)v9;
        v10[1] = *((_DWORD *)v9 + 1);
        v10[2] = *((_DWORD *)v9 + 2);
      }
      v10 += 3;
      v9 += 12;
    }
    v2[3] = v6 + 12 * ((-1431655764 * ((unsigned int)(v9 - v7) >> 2)) >> 2);
    v11 = v29;
    v2[5] = v28;
    v2[6] = v11;
    v12 = v31;
    v13 = v32;
    v2[7] = v30;
    v2[8] = v12;
    v2[9] = v13;
    v2[10] = v33;
    v14 = v35;
    v2[11] = v34;
    v15 = v36;
    v2[12] = v14;
    v16 = v37;
    v2[13] = v15;
    v17 = v38;
    v2[14] = v16;
    v18 = v39;
    v2[15] = v17;
    v19 = v40;
    v2[16] = v18;
    v20 = v41;
    v2[17] = v19;
    v21 = v42;
    v2[18] = v20;
    v22 = v43;
    v2[19] = v21;
    v23 = v44;
    v2[20] = v22;
    v2[21] = v23;
    v2[22] = v45;
  }
  sub_392244(v2, (char *)this + 328);
  if ( *(_BYTE *)(*((_DWORD *)this + 63) + 140) != 0 )
    --*((_DWORD *)this + 71);
  if ( v25 != nullptr )
    operator delete(v25);
}


//======================================================================
// Ogre::BeamEmitter::ComputeUV(Ogre::Vector2,int,int,int,float,float,float,float,float)
// address: 0x0014C8C8   size: 0x134 (308 bytes)
//======================================================================
float *__fastcall Ogre::BeamEmitter::ComputeUV(
        float *a1,
        float a2,
        float a3,
        float a4,
        int a5,
        int a6,
        int a7,
        Ogre *a8,
        float a9,
        float a10,
        float a11,
        float a12)
{
  float v14; // r1
  float v15; // r4
  float v16; // r6
  float v17; // r5
  float v20; // [sp+8h] [bp-1Ch]
  float v21; // [sp+Ch] [bp-18h]

  v20 = COERCE_FLOAT(Ogre::fastSin(a8, a2));
  v21 = COERCE_FLOAT(Ogre::fastCos(a8, v14));
  v15 = 1.0 / (float)a5;
  v16 = a3 - 0.5;
  v17 = a4 - 0.5;
  *a1 = (float)((float)((float)((float)((float)(v16 * v21) - (float)(v17 * v20)) * a11) + 0.5) * v15)
      + (float)((float)((float)(a7 % a5) * v15) + a9);
  a1[1] = (float)((float)((float)((float)((float)(v16 * v20) + (float)(v17 * v21))
                                * (float)(a12 * (float)((float)(1.0 / (float)a6) / v15)))
                        + (float)((float)((float)(1.0 / (float)a6) / v15) * 0.5))
                * v15)
        + (float)((float)((float)(a7 / a5 % a6) * (float)(1.0 / (float)a6)) + a10);
  return a1;
}


//======================================================================
// Ogre::BeamEmitter::FillBeamVert(Ogre::BEAM_VERT *,unsigned short *,unsigned int,Ogre::BEAM_DATA &)
// address: 0x0014C9FC   size: 0x6BA (1722 bytes)
//======================================================================
int __fastcall Ogre::BeamEmitter::FillBeamVert(float a1, int a2, int a3, __int16 a4, int a5)
{
  int result; // r0
  char *WorldMatrix; // r0
  int v7; // r5
  int v8; // r4
  int v9; // r3
  float v10; // r4
  float v11; // r5
  float v12; // r5
  float v13; // r4
  float v14; // r6
  float v15; // r0
  float Transparent; // r0
  float *TransparentColor; // r4
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r6
  float *v27; // r2
  int v28; // r3
  float v29; // r0
  float v30; // r5
  int v31; // r1
  float v32; // r5
  float v33; // r4
  int v34; // r4
  float v35; // r5
  float v36; // r2
  int v37; // r1
  int v38; // r0
  int v39; // r1
  int v40; // r4
  float v41; // r2
  int v42; // r1
  int v43; // r1
  float v44; // r4
  int v45; // r4
  float v46; // r0
  int v47; // r1
  float v48; // r2
  int v49; // r1
  int v50; // r4
  float v51; // r0
  int v52; // r1
  float v53; // r2
  int v54; // r1
  __int16 v55; // r4
  _WORD *v56; // r2
  __int16 v57; // r0
  int v58; // [sp+0h] [bp-FCh]
  int v59; // [sp+0h] [bp-FCh]
  int v60; // [sp+0h] [bp-FCh]
  int v61; // [sp+0h] [bp-FCh]
  int v62; // [sp+4h] [bp-F8h]
  int v63; // [sp+4h] [bp-F8h]
  float v64; // [sp+24h] [bp-D8h]
  float v65; // [sp+24h] [bp-D8h]
  float v66; // [sp+24h] [bp-D8h]
  float v67; // [sp+28h] [bp-D4h]
  float v68; // [sp+28h] [bp-D4h]
  float v69; // [sp+28h] [bp-D4h]
  float v70; // [sp+2Ch] [bp-D0h]
  float v71; // [sp+2Ch] [bp-D0h]
  float *v72; // [sp+2Ch] [bp-D0h]
  float v73; // [sp+30h] [bp-CCh]
  float v74; // [sp+30h] [bp-CCh]
  float v75; // [sp+30h] [bp-CCh]
  float v76; // [sp+30h] [bp-CCh]
  float v78; // [sp+38h] [bp-C4h]
  int v79; // [sp+38h] [bp-C4h]
  float v80; // [sp+3Ch] [bp-C0h]
  float v81; // [sp+3Ch] [bp-C0h]
  float v82; // [sp+3Ch] [bp-C0h]
  char v83; // [sp+3Ch] [bp-C0h]
  float v84; // [sp+40h] [bp-BCh]
  float v85; // [sp+44h] [bp-B8h]
  float v86; // [sp+48h] [bp-B4h]
  float v87; // [sp+48h] [bp-B4h]
  char v88; // [sp+48h] [bp-B4h]
  float v89; // [sp+4Ch] [bp-B0h]
  char v91; // [sp+54h] [bp-A8h]
  char v92; // [sp+58h] [bp-A4h]
  _BYTE *v93; // [sp+5Ch] [bp-A0h]
  _BYTE *v94; // [sp+60h] [bp-9Ch]
  _BYTE *v95; // [sp+64h] [bp-98h]
  _BYTE *v96; // [sp+68h] [bp-94h]
  int v97; // [sp+6Ch] [bp-90h]
  float v98; // [sp+70h] [bp-8Ch]
  float v99; // [sp+74h] [bp-88h]
  __int64 v102; // [sp+84h] [bp-78h] BYREF
  float v103; // [sp+8Ch] [bp-70h]
  float v104; // [sp+90h] [bp-6Ch]
  float v105; // [sp+94h] [bp-68h]
  float v106; // [sp+98h] [bp-64h]
  float v107; // [sp+9Ch] [bp-60h]
  float v108; // [sp+A0h] [bp-5Ch]
  float v109; // [sp+A4h] [bp-58h]
  float v110; // [sp+A8h] [bp-54h]
  float v111; // [sp+ACh] [bp-50h] BYREF
  float v112; // [sp+B0h] [bp-4Ch]
  float v113; // [sp+B4h] [bp-48h]
  float v114[17]; // [sp+B8h] [bp-44h] BYREF

  result = *(_DWORD *)(a5 + 4);
  if ( result - *(_DWORD *)a5 > 11 )
  {
    WorldMatrix = Ogre::MovableObject::getWorldMatrix((Ogre::MovableObject *)LODWORD(a1));
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v114, (const Ogre::Matrix4 *)WorldMatrix);
    v7 = LODWORD(a1) + 252;
    v8 = *(_DWORD *)(LODWORD(a1) + 252);
    v78 = v114[13];
    v70 = v114[12];
    v64 = v114[14];
    if ( *(_BYTE *)(v8 + 16) != 0 )
    {
      v73 = *(float *)(LODWORD(a1) + 260) - v114[13];
      v80 = *(float *)(LODWORD(a1) + 264) - v114[14];
      *(float *)(v8 + 20) = *(float *)(LODWORD(a1) + 256) - v114[12];
      *(float *)(v8 + 24) = v73;
      *(float *)(v8 + 28) = v80;
      v9 = *(_DWORD *)v7;
      *(_DWORD *)(a5 + 48) = *(_DWORD *)(*(_DWORD *)v7 + 20);
      *(_DWORD *)(a5 + 52) = *(_DWORD *)(v9 + 24);
      *(_DWORD *)(a5 + 56) = *(_DWORD *)(v9 + 28);
      v10 = *(float *)(LODWORD(a1) + 260);
      v11 = *(float *)(LODWORD(a1) + 264);
      v86 = *(float *)(LODWORD(a1) + 256);
    }
    else
    {
      v12 = *(float *)(a5 + 48);
      v74 = *(float *)(a5 + 52);
      v81 = *(float *)(a5 + 56);
      v86 = (float)((float)((float)(v12 * v114[0]) + (float)(v74 * v114[4])) + (float)(v81 * v114[8])) + v114[12];
      v10 = (float)((float)((float)(v12 * v114[1]) + (float)(v74 * v114[5])) + (float)(v81 * v114[9])) + v114[13];
      v11 = (float)((float)((float)(v12 * v114[2]) + (float)(v74 * v114[6])) + (float)(v81 * v114[10])) + v114[14];
    }
    v75 = v86 - v70;
    v82 = v10 - v78;
    v87 = v70 - *(float *)(LODWORD(a1) + 340);
    v13 = v78 - *(float *)(LODWORD(a1) + 344);
    v71 = (float)(v82 * (float)(v64 - *(float *)(LODWORD(a1) + 348))) - (float)((float)(v11 - v64) * v13);
    v14 = (float)((float)(v11 - v64) * v87) - (float)(v75 * (float)(v64 - *(float *)(LODWORD(a1) + 348)));
    v15 = j_sqrt((float)((float)((float)(v71 * v71) + (float)(v14 * v14))
                       + (float)((float)((float)(v75 * v13) - (float)(v82 * v87))
                               * (float)((float)(v75 * v13) - (float)(v82 * v87)))));
    if ( v15 <= 0.00001 )
    {
      v76 = 0.0;
      v99 = 0.0;
      v98 = 0.0;
    }
    else
    {
      v98 = v71 * (float)(1.0 / v15);
      v99 = v14 * (float)(1.0 / v15);
      v76 = (float)((float)(v75 * v13) - (float)(v82 * v87)) * (float)(1.0 / v15);
    }
    Transparent = Ogre::MovableObject::getTransparent((Ogre::MovableObject **)LODWORD(a1));
    TransparentColor = (float *)Ogre::GetTransparentColor(
                                  (Ogre *)(a5 + 20),
                                  (const Ogre::ColourValue *)LODWORD(Transparent),
                                  *(float *)(*(_DWORD *)(LODWORD(a1) + 252) + 84),
                                  *(_DWORD *)(LODWORD(a1) + 252));
    v18 = (int)(float)(*TransparentColor * 255.0);
    if ( v18 <= 255 )
      v19 = v18 & (~v18 >> 31);
    else
      LOBYTE(v19) = -1;
    v83 = v19;
    v20 = (int)(float)(TransparentColor[1] * 255.0);
    if ( v20 <= 255 )
      v21 = v20 & (~v20 >> 31);
    else
      LOBYTE(v21) = -1;
    v88 = v21;
    v22 = (int)(float)(TransparentColor[2] * 255.0);
    if ( v22 <= 255 )
      v23 = v22 & (~v22 >> 31);
    else
      LOBYTE(v23) = -1;
    v91 = v23;
    v24 = (int)(float)(TransparentColor[3] * 255.0);
    if ( v24 <= 255 )
      v25 = v24 & (~v24 >> 31);
    else
      LOBYTE(v25) = -1;
    v92 = v25;
    v26 = 0;
    v79 = 0;
    v72 = (float *)a2;
    v96 = (_BYTE *)(a2 + 12);
    v95 = (_BYTE *)(a2 + 13);
    v94 = (_BYTE *)(a2 + 14);
    v93 = (_BYTE *)(a2 + 15);
    v97 = 0;
    while ( 1 )
    {
      result = v79;
      if ( v79 >= -1431655765 * ((*(_DWORD *)(a5 + 4) - *(_DWORD *)a5) >> 2) )
        break;
      v27 = (float *)(*(_DWORD *)a5 + 12 * v79);
      v28 = *(_DWORD *)(LODWORD(a1) + 252);
      v29 = *v27;
      v30 = v27[1];
      v65 = v27[2];
      v113 = v65;
      v31 = *(unsigned __int8 *)(v28 + 16);
      v111 = v29;
      v112 = v30;
      if ( v31 != 0 )
      {
        v111 = v29 + v114[12];
        v112 = v30 + v114[13];
        v113 = v65 + v114[14];
      }
      else
      {
        Ogre::Matrix4::transformCoord((Ogre::Matrix4 *)v114, (Ogre::Vector3 *)&v111, (const Ogre::Vector3 *)v27);
      }
      v32 = *(float *)(a5 + 36);
      v33 = *(float *)(a5 + 44);
      v84 = (float)v79 / (float)(unsigned int)(-1431655765 * ((*(_DWORD *)(a5 + 4) - *(_DWORD *)a5) >> 2) - 1);
      v89 = (float)((float)(v99 * v32) * v33) + v112;
      v67 = (float)((float)(v76 * v32) * v33) + v113;
      *v72 = v111 + (float)((float)(v98 * v32) * v33);
      v72[1] = v89;
      v72[2] = v67;
      *v96 = v91;
      *v95 = v88;
      *v94 = v83;
      *v93 = v92;
      v34 = *(_DWORD *)(LODWORD(a1) + 252);
      v35 = *(float *)(v34 + 180) + 1.0;
      v36 = *(float *)(v34 + 156);
      v58 = *(_DWORD *)(v34 + 164);
      v37 = *(_DWORD *)(v34 + 160);
      v103 = v84 + *(float *)(v34 + 176);
      v62 = v37;
      v38 = *(_DWORD *)(a5 + 64);
      v39 = *(_DWORD *)(a5 + 60);
      v104 = v35;
      Ogre::BeamEmitter::ComputeUV(
        (float *)&v102,
        a1,
        v103,
        v35,
        v58,
        v62,
        v39 + v38,
        *(Ogre **)(v34 + 152),
        *(float *)(a5 + 68),
        *(float *)(a5 + 72),
        v36,
        v36);
      *(_QWORD *)(a2 + 16 + v26) = v102;
      v40 = *(_DWORD *)(LODWORD(a1) + 252);
      v68 = *(float *)(v40 + 216) + 1.0;
      v41 = *(float *)(v40 + 192);
      v59 = *(_DWORD *)(v40 + 200);
      v42 = *(_DWORD *)(v40 + 196);
      v105 = v84 + *(float *)(v40 + 212);
      v63 = v42;
      v43 = *(_DWORD *)(a5 + 60);
      v106 = v68;
      Ogre::BeamEmitter::ComputeUV(
        (float *)&v102,
        a1,
        v105,
        v68,
        v59,
        v63,
        v43 + *(_DWORD *)(a5 + 64),
        *(Ogre **)(v40 + 188),
        *(float *)(a5 + 76),
        *(float *)(a5 + 80),
        v41,
        v41);
      *(_QWORD *)(a2 + 24 + v26) = v102;
      v44 = *(float *)(a5 + 44);
      v69 = *(float *)(a5 + 36);
      v85 = v112 - (float)((float)(v99 * v69) * v44);
      v66 = v113 - (float)((float)(v76 * v69) * v44);
      v72[8] = v111 - (float)((float)(v98 * v69) * v44);
      v72[10] = v66;
      v72[9] = v85;
      v96[32] = v91;
      v95[32] = v88;
      v94[32] = v83;
      v93[32] = v92;
      v45 = *(_DWORD *)(LODWORD(a1) + 252);
      v46 = v84 + *(float *)(v45 + 176);
      v47 = *(_DWORD *)(v45 + 164);
      v108 = *(float *)(v45 + 180) + 0.0;
      v48 = *(float *)(v45 + 156);
      v60 = v47;
      v49 = *(_DWORD *)(v45 + 160);
      v107 = v46;
      Ogre::BeamEmitter::ComputeUV(
        (float *)&v102,
        a1,
        v46,
        v108,
        v60,
        v49,
        *(_DWORD *)(a5 + 60) + *(_DWORD *)(a5 + 64),
        *(Ogre **)(v45 + 152),
        *(float *)(a5 + 68),
        *(float *)(a5 + 72),
        v48,
        v48);
      *(_QWORD *)(a2 + 48 + v26) = v102;
      v50 = *(_DWORD *)(LODWORD(a1) + 252);
      v51 = v84 + *(float *)(v50 + 212);
      v52 = *(_DWORD *)(v50 + 200);
      v110 = *(float *)(v50 + 216) + 0.0;
      v53 = *(float *)(v50 + 192);
      v61 = v52;
      v54 = *(_DWORD *)(v50 + 196);
      v109 = v51;
      Ogre::BeamEmitter::ComputeUV(
        (float *)&v102,
        a1,
        v51,
        v110,
        v61,
        v54,
        *(_DWORD *)(a5 + 60) + *(_DWORD *)(a5 + 64),
        *(Ogre **)(v50 + 188),
        *(float *)(a5 + 76),
        *(float *)(a5 + 80),
        v53,
        v53);
      *(_QWORD *)(a2 + 56 + v26) = v102;
      if ( v79 != 0 )
      {
        v55 = 2 * v79 + a4 - 2;
        *(_WORD *)(a3 + 2 * v97) = v55;
        v56 = (_WORD *)(a3 + 2 * v97);
        v56[1] = 2 * v79 + a4 - 1;
        v57 = 2 * v79 + a4 + 1;
        v56[2] = v57;
        v56[4] = v57;
        v56[3] = v55;
        v97 += 6;
        v56[5] = 2 * v79 + a4;
      }
      ++v79;
      v72 += 16;
      v26 += 64;
      v96 += 64;
      v95 += 64;
      v94 += 64;
      v93 += 64;
    }
  }
  return result;
}


//======================================================================
// Ogre::BeamEmitter::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x0014D0BC   size: 0x1E2 (482 bytes)
//======================================================================
int __fastcall Ogre::BeamEmitter::render(
        Ogre::BeamEmitter *this,
        Ogre::SceneRenderer *a2,
        const Ogre::ShaderEnvData *a3)
{
  char *v3; // r3
  unsigned int v4; // r6
  int result; // r0
  Ogre::DynamicIndexBuffer *v7; // r7
  int v8; // r0
  char *v9; // r4
  int v10; // r0
  float *v11; // r5
  int i; // r6
  float *v13; // r4
  float v14; // r0
  unsigned int v15; // r1
  unsigned int v16; // [sp+18h] [bp-6Ch]
  unsigned int v17; // [sp+18h] [bp-6Ch]
  int v18; // [sp+1Ch] [bp-68h]
  int v19; // [sp+1Ch] [bp-68h]
  int v21; // [sp+24h] [bp-60h]
  float v22; // [sp+24h] [bp-60h]
  float v24; // [sp+28h] [bp-5Ch]
  Ogre::DynamicVertexBuffer *v25; // [sp+2Ch] [bp-58h]
  float v26; // [sp+2Ch] [bp-58h]
  int v27; // [sp+30h] [bp-54h]
  float v28; // [sp+30h] [bp-54h]
  int v29; // [sp+34h] [bp-50h]
  char *v30; // [sp+3Ch] [bp-48h]
  _BYTE v31[68]; // [sp+40h] [bp-44h] BYREF

  v3 = *((char **)this + 82);
  v4 = 0;
  v16 = 0;
  v30 = (char *)this + 328;
  result = 6;
  while ( v3 != v30 )
  {
    if ( -1431655765 * ((*((_DWORD *)v3 + 3) - *((_DWORD *)v3 + 2)) >> 2) != 0 )
    {
      v4 += 2 * ((*((_DWORD *)v3 + 3) - *((_DWORD *)v3 + 2)) >> 2) - 6;
      v16 += 1431655766 * ((*((_DWORD *)v3 + 3) - *((_DWORD *)v3 + 2)) >> 2);
    }
    v3 = *(char **)v3;
  }
  if ( v16 != 0 )
  {
    *((_DWORD *)this + 85) = *((_DWORD *)a3 + 287);
    *((_DWORD *)this + 86) = *((_DWORD *)a3 + 288);
    *((_DWORD *)this + 87) = *((_DWORD *)a3 + 289);
    v7 = (Ogre::DynamicIndexBuffer *)Ogre::SceneRenderer::newDynamicIB(a2, v4);
    v25 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                         a2,
                                         (const Ogre::VertexFormat *)&unk_472650,
                                         v16);
    v27 = Ogre::DynamicVertexBuffer::lock(v25);
    v8 = Ogre::DynamicIndexBuffer::lock(v7);
    v29 = v8;
    if ( v27 != 0 && v8 != 0 )
    {
      v21 = 0;
      v9 = *((char **)this + 82);
      v18 = 0;
      while ( v9 != v30 )
      {
        if ( -1431655765 * ((*((_DWORD *)v9 + 3) - *((_DWORD *)v9 + 2)) >> 2) != 0 )
        {
          Ogre::BeamEmitter::FillBeamVert(*(float *)&this, v27 + 32 * v18, v29 + 2 * v21, v18, (int)(v9 + 8));
          v18 += 1431655766 * ((*((_DWORD *)v9 + 3) - *((_DWORD *)v9 + 2)) >> 2);
          v21 += 2 * ((*((_DWORD *)v9 + 3) - *((_DWORD *)v9 + 2)) >> 2) - 6;
        }
        v9 = *(char **)v9;
      }
      *((_DWORD *)v7 + 4) = 0;
      *((_DWORD *)v7 + 5) = v16;
    }
    v10 = Ogre::nVertex2nPrimitive(4, v4);
    v19 = Ogre::SceneRenderer::newContext(
            a2,
            *((_DWORD *)this + 59),
            a3,
            *((_DWORD *)this + 90),
            dword_47264C,
            v25,
            v7,
            4,
            v10,
            1);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v31);
    v11 = (float *)((char *)a3 + 956);
    for ( i = 0; i != 64; i += 16 )
    {
      v22 = *v11;
      v24 = v11[1];
      v26 = v11[2];
      v13 = (float *)((char *)a3 + 1020);
      v28 = v11[3];
      v17 = 0;
      do
      {
        v14 = (float)((float)((float)(v22 * *v13) + (float)(v24 * v13[4])) + (float)(v26 * v13[8]))
            + (float)(v28 * v13[12]);
        v15 = v17;
        ++v13;
        *(float *)&v31[i + v17] = v14;
        v17 += 4;
      }
      while ( v15 != 12 );
      v11 += 4;
    }
    return Ogre::ShaderContext::addValueParam(v19, 2, v31, 7, 1);
  }
  return result;
}


//======================================================================
// Ogre::BeamEmitter::UpdateBeamLife(unsigned int)
// address: 0x0014D2B0   size: 0x190 (400 bytes)
//======================================================================
void __fastcall Ogre::BeamEmitter::UpdateBeamLife(Ogre::BeamEmitter *this, unsigned int a2)
{
  int *v2; // r7
  float v3; // r0
  float v4; // r1
  unsigned int v5; // r6
  char *v6; // r4
  int v7; // r0
  int v8; // r1
  int v9; // r2
  float *v10; // r3
  float v11; // r5
  float *i; // r5
  void *v13; // r0
  float v15; // [sp+14h] [bp-18h]
  int v16; // [sp+18h] [bp-14h] BYREF
  int v17; // [sp+1Ch] [bp-10h]
  int v18; // [sp+20h] [bp-Ch]
  int v19; // [sp+24h] [bp-8h]

  v2 = *((int **)this + 82);
  v15 = (float)((float)a2 / 1000.0) * *((float *)this + 93);
  while ( v2 != (int *)((char *)this + 328) )
  {
    v3 = v15 + *((float *)v2 + 6);
    v4 = *((float *)v2 + 5);
    *((float *)v2 + 6) = v3;
    v5 = (unsigned int)(float)((float)(v3 / v4) * 100.0);
    v6 = (char *)this + 252;
    Ogre::BeamEmitterData::UpdatePos(*((_DWORD *)this + 63), v2 + 2);
    Ogre::KeyFrameArray<float>::getValue(*((_DWORD *)this + 63) + 220, 0, v5, v2 + 11, 1);
    Ogre::KeyFrameArray<float>::getValue(*((_DWORD *)this + 63) + 316, 0, v5, v2 + 12, 1);
    v7 = *((_DWORD *)this + 63);
    v16 = 1065353216;
    v17 = 1065353216;
    v18 = 1065353216;
    v19 = 1065353216;
    Ogre::KeyFrameArray<Ogre::ColourValue>::getValue((_DWORD *)(v7 + 268), 0, v5, (float *)&v16, 1);
    v8 = v17;
    v9 = v18;
    v2[7] = v16;
    v2[8] = v8;
    v2[9] = v9;
    v2[10] = v19;
    v10 = (float *)(*((_DWORD *)this + 63) + 144);
    if ( *v10 > 0.0001 )
      v2[18] = (int)(float)(*((float *)v2 + 6) / *v10);
    v11 = *((float *)v2 + 6);
    *((float *)v2 + 19) = (float)(v11 * *(float *)(*(_DWORD *)v6 + 168)) / (float)*(int *)(*(_DWORD *)v6 + 164);
    *((float *)v2 + 20) = (float)(v11 * *(float *)(*(_DWORD *)v6 + 172)) / (float)*(int *)(*(_DWORD *)v6 + 160);
    *((float *)v2 + 21) = (float)(v11 * *(float *)(*(_DWORD *)v6 + 204)) / (float)*(int *)(*(_DWORD *)v6 + 200);
    *((float *)v2 + 22) = (float)(v11 * *(float *)(*(_DWORD *)v6 + 208)) / (float)*(int *)(*(_DWORD *)v6 + 196);
    v2 = (int *)*v2;
  }
LABEL_12:
  for ( i = *((float **)this + 82); i != (float *)((char *)this + 328); i = *(float **)i )
  {
    if ( i[6] > i[5] )
    {
      sub_392254(i);
      v13 = *((void **)i + 2);
      if ( v13 != nullptr )
        operator delete(v13);
      operator delete(i);
      goto LABEL_12;
    }
  }
}


//======================================================================
// Ogre::BeamEmitter::update(unsigned int)
// address: 0x0014D44C   size: 0x8E (142 bytes)
//======================================================================
bool __fastcall Ogre::BeamEmitter::update(Ogre::BeamEmitter *this, unsigned int a2)
{
  char *v4; // r4
  float v5; // r0
  unsigned int v6; // r1
  float i; // r6
  _BOOL4 result; // r0
  Ogre::BeamEmitter *v9; // r2
  int v10; // r3

  v4 = (char *)this + 252;
  v5 = (float)((float)a2 / 1000.0) * *((float *)this + 93);
  if ( *((_BYTE *)this + 184) == 0 )
    *((_DWORD *)v4 + 28) += a2;
  v6 = *((_DWORD *)v4 + 28);
  *((float *)v4 + 29) = *((float *)v4 + 29) + v5;
  Ogre::BeamEmitterData::PrepareData(*(Ogre::BeamEmitterData **)v4, v6);
  Ogre::BeamEmitter::UpdateBeamLife(this, a2);
  for ( i = 1.0 / *(float *)(*(_DWORD *)v4 + 80); ; *((float *)v4 + 29) = *((float *)v4 + 29) - i )
  {
    result = *((float *)v4 + 29) > i;
    if ( *((float *)v4 + 29) <= i )
      break;
    v9 = *((Ogre::BeamEmitter **)v4 + 19);
    v10 = 0;
    while ( v9 != (Ogre::BeamEmitter *)((char *)this + 328) )
    {
      v9 = *(Ogre::BeamEmitter **)v9;
      ++v10;
    }
    if ( v10 < *((_DWORD *)v4 + 8) )
      Ogre::BeamEmitter::EmitBeam(this);
  }
  return result;
}

