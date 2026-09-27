// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RibbonEmitter

//======================================================================
// Ogre::RibbonEmitter::getRTTI(void)const
// address: 0x0014F1E0   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::RibbonEmitter::getRTTI(Ogre::RibbonEmitter *this)
{
  return &Ogre::RibbonEmitter::m_RTTI;
}


//======================================================================
// Ogre::RibbonEmitter::getRenderPassRequired(Ogre::RenderPassDesc &)
// address: 0x0014F1EC   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::RibbonEmitter::getRenderPassRequired(int a1, _DWORD *a2)
{
  int result; // r0

  result = a1 + 252;
  if ( *(_BYTE *)(*(_DWORD *)(result + 4) + 40) != 0 )
    *a2 |= 0x20u;
  return result;
}


//======================================================================
// Ogre::RibbonEmitter::~RibbonEmitter()
// address: 0x0014F2AC   size: 0x6A (106 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13RibbonEmitterD1Ev'
void __fastcall Ogre::RibbonEmitter::~RibbonEmitter(Ogre::RibbonEmitter *this)
{
  char *v1; // r5
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  void *v5; // r0
  void *v6; // r0

  v1 = (char *)this + 252;
  *(_DWORD *)this = &off_4561D0;
  v3 = *((_DWORD **)this + 71);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)v1 + 8) = 0;
  }
  v4 = *((_DWORD **)v1 + 1);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)v1 + 1) = 0;
  }
  Ogre::RibbonSegBuffer::~RibbonSegBuffer((Ogre::RibbonEmitter *)((char *)this + 392));
  v5 = *((void **)this + 97);
  if ( v5 != nullptr )
    operator delete[](v5);
  Ogre::VertexFormat::~VertexFormat((Ogre::RibbonEmitter *)((char *)this + 288));
  v6 = *((void **)this + 67);
  if ( v6 != nullptr )
    operator delete(v6);
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// Ogre::RibbonEmitter::~RibbonEmitter()
// address: 0x0014F31C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::RibbonEmitter::~RibbonEmitter(Ogre::RibbonEmitter *this)
{
  Ogre::RibbonEmitter::~RibbonEmitter(this);
  operator delete(this);
}


//======================================================================
// Ogre::RibbonEmitter::RibbonEmitter(Ogre::RibbonEmitterData *)
// address: 0x0014F4F8   size: 0x1D0 (464 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13RibbonEmitterC1EPNS_17RibbonEmitterDataE'
Ogre::RibbonEmitter *__fastcall Ogre::RibbonEmitter::RibbonEmitter(
        Ogre::RibbonEmitter *this,
        Ogre::RibbonEmitterData *a2)
{
  unsigned int *v4; // r5
  int v5; // r3
  int v6; // r3
  int v7; // r0
  int v8; // r6
  Ogre *v9; // r0
  int v10; // r7
  _DWORD *v11; // r3
  int v13; // [sp+4h] [bp-10h]
  char *v14; // [sp+8h] [bp-Ch]

  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_DWORD *)this + 53) = 0;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  v4 = (unsigned int *)((char *)this + 252);
  *(_DWORD *)this = &off_4561D0;
  *((_DWORD *)this + 64) = a2;
  *((_DWORD *)this + 67) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 69) = 0;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  v14 = (char *)this + 288;
  Ogre::VertexFormat::VertexFormat((Ogre::RibbonEmitter *)((char *)this + 288));
  Ogre::Matrix4::Matrix4((Ogre::RibbonEmitter *)((char *)this + 312));
  *((_DWORD *)this + 97) = 0;
  Ogre::RibbonSegBuffer::RibbonSegBuffer((_DWORD *)this + 98);
  *((_DWORD *)this + 116) = 1065353216;
  *((_DWORD *)this + 117) = 1065353216;
  *((_DWORD *)this + 118) = 1065353216;
  *((_DWORD *)this + 119) = 1065353216;
  Ogre::Matrix4::Matrix4((Ogre::RibbonEmitter *)((char *)this + 532));
  *((_BYTE *)this + 596) = 0;
  if ( a2 == nullptr )
    return this;
  (*(void (__fastcall **)(Ogre::RibbonEmitterData *))(*(_DWORD *)a2 + 4))(a2);
  *((_DWORD *)this + 66) = 20;
  *v4 = (*((_DWORD *)a2 + 9) + 1) * *((_DWORD *)a2 + 8) + 3;
  v5 = *((_DWORD *)a2 + 9);
  if ( v5 <= 1 )
  {
    v6 = 1;
LABEL_6:
    *((_DWORD *)a2 + 9) = v6;
    goto LABEL_7;
  }
  if ( v5 > 99 )
  {
    v6 = 100;
    goto LABEL_6;
  }
LABEL_7:
  Ogre::RibbonSectionDesc::GetLineSegCount((Ogre::RibbonEmitterData *)((char *)a2 + 60));
  Ogre::RibbonSegBuffer::Create((Ogre::RibbonEmitter *)((char *)this + 392), *v4);
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 76) = 0;
  Ogre::VertexFormat::addElement(v14, 2, 1, 0, 0, -1);
  Ogre::VertexFormat::addElement(v14, 4, 5, 0, 0, -1);
  Ogre::VertexFormat::addElement(v14, 1, 7, 0, 0, -1);
  Ogre::VertexFormat::addElement(v14, 1, 7, 1, 0, -1);
  v7 = (*(int (__fastcall **)(int, char *))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 36))(
         Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
         v14);
  v8 = *((_DWORD *)this + 64);
  *((_DWORD *)this + 70) = v7;
  v9 = *((Ogre **)a2 + 7);
  v10 = 0;
  *((_DWORD *)this + 71) = Ogre::CreateParticleMaterial(
                             v9,
                             *(_DWORD *)(v8 + 768),
                             *(Ogre::Texture **)(v8 + 772),
                             *(Ogre::Texture **)(v8 + 44),
                             *(_DWORD *)(v8 + 48),
                             v13);
  *((_DWORD *)this + 97) = operator new[](0x70u);
  do
  {
    v11 = (_DWORD *)(*((_DWORD *)this + 97) + v10);
    v10 += 28;
    *v11 = 0;
    v11[1] = 0;
    v11[2] = 0;
    v11[3] = 0;
    v11[4] = 0;
    v11[5] = 0;
    v11[6] = 0;
  }
  while ( v10 != 112 );
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 95) = 0;
  *((_DWORD *)this + 96) = 4;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 1120403456;
  *((_DWORD *)this + 39) = 1120403456;
  *((_DWORD *)this + 40) = 1120403456;
  *((float *)this + 41) = Ogre::Vector3::length((Ogre::RibbonEmitter *)((char *)this + 152));
  if ( *(_BYTE *)(*((_DWORD *)this + 64) + 40) != 0 )
    *((_DWORD *)this + 61) = 32;
  return this;
}


//======================================================================
// Ogre::RibbonEmitter::newObject(void)
// address: 0x0014F6D4   size: 0x16 (22 bytes)
//======================================================================
Ogre::RibbonEmitter *__fastcall Ogre::RibbonEmitter::newObject(Ogre::RibbonEmitter *this)
{
  Ogre::RibbonEmitter *v1; // r4

  v1 = (Ogre::RibbonEmitter *)operator new(0x258u);
  Ogre::RibbonEmitter::RibbonEmitter(v1, nullptr);
  return v1;
}


//======================================================================
// Ogre::RibbonEmitter::EmitteRibbon(unsigned int,Ogre::RibbonEmitterFrameData const&)
// address: 0x0014F6EC   size: 0x52E (1326 bytes)
//======================================================================
unsigned int __fastcall Ogre::RibbonEmitter::EmitteRibbon(int a1, unsigned int a2, float *a3)
{
  unsigned int result; // r0
  float v4; // r0
  float v5; // r4
  float v6; // r0
  float v7; // r5
  float v8; // r0
  float v9; // r5
  float v10; // r0
  float v11; // r5
  float v12; // r0
  float v13; // r5
  float v14; // r0
  float v15; // r5
  float v16; // r0
  float v17; // r5
  float v18; // r5
  float v19; // r0
  float v20; // r5
  float v21; // r0
  float v22; // r5
  float v23; // r0
  float v24; // r5
  float v25; // r0
  float v26; // r5
  float v27; // r0
  float v28; // r7
  float v29; // r0
  float v30; // r7
  float v31; // r0
  float v32; // r7
  int v33; // r0
  float v34; // r2
  int v35; // r7
  float v36; // r1
  float v37; // r4
  float v38; // r0
  float v39; // r3
  int v40; // r2
  int v41; // r3
  float *v42; // r6
  float v43; // r5
  float v44; // r5
  float v45; // r6
  float v46; // r6
  float v47; // r0
  float v48; // [sp+4h] [bp-E8h]
  unsigned int j; // [sp+4h] [bp-E8h]
  float v52; // [sp+10h] [bp-DCh]
  unsigned int i; // [sp+14h] [bp-D8h]
  int v55; // [sp+1Ch] [bp-D0h]
  float v56; // [sp+24h] [bp-C8h] BYREF
  float v57; // [sp+28h] [bp-C4h]
  float v58; // [sp+2Ch] [bp-C0h]
  int v59; // [sp+30h] [bp-BCh]
  float v60; // [sp+34h] [bp-B8h]
  float v61; // [sp+38h] [bp-B4h]
  float v62; // [sp+3Ch] [bp-B0h]
  int v63; // [sp+40h] [bp-ACh]
  float v64; // [sp+44h] [bp-A8h]
  float v65; // [sp+48h] [bp-A4h]
  float v66; // [sp+4Ch] [bp-A0h]
  int v67; // [sp+50h] [bp-9Ch]
  float v68; // [sp+54h] [bp-98h]
  float v69; // [sp+58h] [bp-94h]
  float v70; // [sp+5Ch] [bp-90h]
  int v71; // [sp+60h] [bp-8Ch]
  float v72; // [sp+64h] [bp-88h]
  float v73; // [sp+68h] [bp-84h]
  float v74; // [sp+6Ch] [bp-80h]
  float v75; // [sp+70h] [bp-7Ch]
  float v76; // [sp+74h] [bp-78h]
  float v77; // [sp+78h] [bp-74h]
  float v78; // [sp+7Ch] [bp-70h]
  float v79; // [sp+80h] [bp-6Ch]
  float v80; // [sp+84h] [bp-68h]
  float v81; // [sp+88h] [bp-64h]
  float v82; // [sp+8Ch] [bp-60h]
  float v83; // [sp+90h] [bp-5Ch]
  float v84; // [sp+94h] [bp-58h]
  float v85; // [sp+98h] [bp-54h]
  float v86; // [sp+9Ch] [bp-50h]
  float v87; // [sp+A0h] [bp-4Ch]
  float v88; // [sp+A4h] [bp-48h]
  float v89[17]; // [sp+A8h] [bp-44h] BYREF

  v55 = *(_DWORD *)(a1 + 256);
  v72 = 1.0;
  v73 = 1.0;
  v74 = 1.0;
  v75 = 1.0;
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v89);
  for ( i = 1; ; ++i )
  {
    result = a2;
    if ( i > a2 )
      break;
    v4 = (float)i / (float)a2;
    v5 = v4;
    v48 = *(float *)(a1 + 468) + (float)((float)(a3[1] - *(float *)(a1 + 468)) * v4);
    v52 = *(float *)(a1 + 472) + (float)((float)(a3[2] - *(float *)(a1 + 472)) * v4);
    v6 = *(float *)(a1 + 476) + (float)((float)(a3[3] - *(float *)(a1 + 476)) * v4);
    v72 = *(float *)(a1 + 464) + (float)((float)(*a3 - *(float *)(a1 + 464)) * v5);
    v73 = v48;
    v74 = v52;
    v7 = *(float *)(a1 + 480);
    v75 = v6;
    v8 = v7 + (float)((float)(a3[4] - v7) * v5);
    v9 = *(float *)(a1 + 484);
    v76 = v8;
    v10 = v9 + (float)((float)(a3[5] - v9) * v5);
    v11 = *(float *)(a1 + 488);
    v77 = v10;
    v12 = v11 + (float)((float)(a3[6] - v11) * v5);
    v13 = *(float *)(a1 + 492);
    v78 = v12;
    v14 = v13 + (float)((float)(a3[7] - v13) * v5);
    v15 = *(float *)(a1 + 496);
    v79 = v14;
    v16 = v15 + (float)((float)(a3[8] - v15) * v5);
    v17 = *(float *)(a1 + 500);
    v80 = v16;
    v81 = v17 + (float)((float)(a3[9] - v17) * v5);
    v18 = *(float *)(a1 + 508);
    v82 = *(float *)(a1 + 504) + (float)((float)(a3[10] - *(float *)(a1 + 504)) * v5);
    v19 = v18 + (float)((float)(a3[11] - v18) * v5);
    v20 = *(float *)(a1 + 512);
    v83 = v19;
    v21 = v20 + (float)((float)(a3[12] - v20) * v5);
    v22 = *(float *)(a1 + 516);
    v84 = v21;
    v23 = v22 + (float)((float)(a3[13] - v22) * v5);
    v24 = *(float *)(a1 + 520);
    v85 = v23;
    v25 = v24 + (float)((float)(a3[14] - v24) * v5);
    v26 = *(float *)(a1 + 524);
    v86 = v25;
    v87 = v26 + (float)((float)(a3[15] - v26) * v5);
    v88 = *(float *)(a1 + 528) + (float)((float)(a3[16] - *(float *)(a1 + 528)) * v5);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)&v56);
    v56 = *(float *)(a1 + 532) + (float)((float)(a3[17] - *(float *)(a1 + 532)) * v5);
    v57 = *(float *)(a1 + 536) + (float)((float)(a3[18] - *(float *)(a1 + 536)) * v5);
    v27 = *(float *)(a1 + 540) + (float)((float)(a3[19] - *(float *)(a1 + 540)) * v5);
    v28 = *(float *)(a1 + 548);
    v59 = 0;
    v58 = v27;
    v60 = v28 + (float)((float)(a3[21] - v28) * v5);
    v61 = *(float *)(a1 + 552) + (float)((float)(a3[22] - *(float *)(a1 + 552)) * v5);
    v29 = *(float *)(a1 + 556) + (float)((float)(a3[23] - *(float *)(a1 + 556)) * v5);
    v30 = *(float *)(a1 + 564);
    v63 = 0;
    v62 = v29;
    v64 = v30 + (float)((float)(a3[25] - v30) * v5);
    v65 = *(float *)(a1 + 568) + (float)((float)(a3[26] - *(float *)(a1 + 568)) * v5);
    v31 = *(float *)(a1 + 572) + (float)((float)(a3[27] - *(float *)(a1 + 572)) * v5);
    v32 = *(float *)(a1 + 580);
    v67 = 0;
    v66 = v31;
    v68 = v32 + (float)((float)(a3[29] - v32) * v5);
    v69 = *(float *)(a1 + 584) + (float)((float)(a3[30] - *(float *)(a1 + 584)) * v5);
    v70 = *(float *)(a1 + 588) + (float)((float)(a3[31] - *(float *)(a1 + 588)) * v5);
    v71 = 1065353216;
    Ogre::Matrix4::operator=(v89, &v56);
    v33 = Ogre::RibbonSegBuffer::PushHead((int *)(a1 + 392), i != a2);
    v34 = v77;
    *(float *)(v33 + 24) = v76;
    *(float *)(v33 + 28) = v34;
    v35 = v33;
    v36 = v73;
    v37 = v74;
    *(float *)(v33 + 32) = v72;
    *(float *)(v33 + 36) = v36;
    *(float *)(v33 + 40) = v37;
    *(float *)(v33 + 44) = v75;
    *(float *)(v33 + 52) = *(float *)(v55 + 20) - v88;
    v38 = v89[12];
    v39 = v89[14];
    *(float *)(v35 + 4) = v89[13];
    *(float *)v35 = v38;
    *(float *)(v35 + 8) = v39;
    v57 = v89[1];
    v58 = v89[2];
    v56 = v89[0];
    Ogre::Vector3::length((Ogre::Vector3 *)&v56);
    for ( j = 0; ; ++j )
    {
      v40 = *(_DWORD *)(a1 + 256);
      v41 = *(_DWORD *)(v40 + 60);
      if ( j >= (*(_DWORD *)(v40 + 64) - v41) >> 3 )
        break;
      v42 = (float *)(v41 + 8 * j);
      v43 = (float)(v42[1] * v77) / 50.0;
      v58 = (float)(*v42 * v76) / 50.0;
      v56 = 0.0;
      v57 = v43;
      v44 = Ogre::Vector3::length((Ogre::Vector3 *)&v56);
      if ( v44 > 0.0 )
      {
        v56 = v56 / v44;
        v57 = v57 / v44;
        v58 = v58 / v44;
      }
      Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v89, (Ogre::Vector3 *)&v56, (const Ogre::Vector3 *)&v56);
      v45 = Ogre::Vector3::length((Ogre::Vector3 *)&v56);
      if ( v45 <= 0.00001 )
      {
        v56 = 0.0;
        v57 = 0.0;
        v58 = 0.0;
      }
      else
      {
        v56 = v56 * (float)(1.0 / v45);
        v57 = v57 * (float)(1.0 / v45);
        v58 = v58 * (float)(1.0 / v45);
      }
      v46 = v44 * v57;
      v47 = v56 * v44;
      *(float *)(v35 + 64) = v44 * v58;
      *(float *)(v35 + 56) = v47;
      *(float *)(v35 + 60) = v46;
      v35 += 12;
    }
  }
  return result;
}


//======================================================================
// Ogre::RibbonEmitter::UpdateRibbonLife(unsigned int)
// address: 0x0014FC24   size: 0x5E (94 bytes)
//======================================================================
int __fastcall Ogre::RibbonEmitter::UpdateRibbonLife(Ogre::RibbonEmitter *this, unsigned int a2)
{
  Ogre::RibbonSegBuffer *v2; // r4
  int Current; // r0
  int result; // r0

  v2 = (Ogre::RibbonEmitter *)((char *)this + 392);
  Ogre::RibbonSegBuffer::BeginIterate((int)this + 392);
  while ( Ogre::RibbonSegBuffer::Next(v2) )
  {
    Current = Ogre::RibbonSegBuffer::GetCurrent(v2);
    *(float *)(Current + 52) = *(float *)(Current + 52) - (float)((float)a2 / 1000.0);
  }
  while ( 1 )
  {
    result = Ogre::RibbonSegBuffer::GetCount(v2);
    if ( result <= 0 )
      break;
    result = *(float *)(Ogre::RibbonSegBuffer::GetTail(v2) + 52) <= 0.0;
    if ( result == 0 )
      break;
    Ogre::RibbonSegBuffer::PopTail(v2);
  }
  return result;
}


//======================================================================
// Ogre::RibbonEmitter::update(unsigned int)
// address: 0x0014FC88   size: 0x1F6 (502 bytes)
//======================================================================
int __fastcall Ogre::RibbonEmitter::update(Ogre::RibbonEmitter *this, unsigned int a2)
{
  char *WorldMatrix; // r0
  char *v5; // r0
  char *v6; // r0
  float v7; // r1
  float v8; // r1
  int v9; // r0
  int v10; // r2
  float v11; // r1
  float v12; // r1
  int v13; // r0
  int v14; // r2
  int v15; // r1
  int v16; // r2
  int v17; // r7
  unsigned int v18; // r1
  unsigned int v19; // r0
  char *v20; // r0
  int v21; // r6
  int v22; // r2
  int v23; // r1
  int v24; // r6
  float v25; // r0
  int v26; // r2
  Ogre *v27; // r6
  int v28; // r1
  Ogre *v29; // r0
  int v30; // r2
  int v31; // r6
  int v32; // r1
  int v33; // r0
  int v34; // r2
  int v35; // r6
  int v36; // r4
  int v38; // [sp+0h] [bp-D4h]
  int v39; // [sp+0h] [bp-D4h]
  _DWORD v40[16]; // [sp+Ch] [bp-C8h] BYREF
  int v41; // [sp+4Ch] [bp-88h] BYREF
  int v42; // [sp+50h] [bp-84h]
  int v43; // [sp+54h] [bp-80h]
  int v44; // [sp+58h] [bp-7Ch]
  int v45; // [sp+5Ch] [bp-78h]
  int v46; // [sp+60h] [bp-74h]
  Ogre *v47; // [sp+64h] [bp-70h]
  float v48; // [sp+68h] [bp-6Ch]
  int v49; // [sp+6Ch] [bp-68h]
  int v50; // [sp+70h] [bp-64h]
  int v51; // [sp+74h] [bp-60h]
  Ogre *v52; // [sp+78h] [bp-5Ch]
  int v53; // [sp+7Ch] [bp-58h]
  int v54; // [sp+80h] [bp-54h]
  int v55; // [sp+84h] [bp-50h]
  int v56; // [sp+88h] [bp-4Ch]
  int v57; // [sp+8Ch] [bp-48h]
  _BYTE v58[68]; // [sp+90h] [bp-44h] BYREF

  Ogre::MovableObject::update(this, a2);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v40);
  WorldMatrix = Ogre::MovableObject::getWorldMatrix(this);
  Ogre::Matrix4::getScale((Ogre::Matrix4 *)WorldMatrix, (Ogre::Matrix4 *)v40);
  *((_DWORD *)this + 77) = v40[0];
  if ( *((_BYTE *)this + 596) == 0 )
  {
    Ogre::RibbonEmitterData::PrepareGenRibbon(
      *((_DWORD *)this + 64),
      (int)this + 464,
      *((_DWORD *)this + 76),
      *((_DWORD *)this + 65));
    v5 = Ogre::MovableObject::getWorldMatrix(this);
    Ogre::Matrix4::operator=((char *)this + 532, v5);
    *((_BYTE *)this + 596) = 1;
  }
  if ( *((_BYTE *)this + 184) == 0 )
    *((_DWORD *)this + 65) += a2;
  *((_DWORD *)this + 75) += a2;
  v42 = 1065353216;
  v43 = 1065353216;
  v44 = 1065353216;
  v41 = 1065353216;
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v58);
  Ogre::RibbonEmitterData::PrepareGenRibbon(
    *((_DWORD *)this + 64),
    (int)&v41,
    *((_DWORD *)this + 76),
    *((_DWORD *)this + 65));
  v6 = Ogre::MovableObject::getWorldMatrix(this);
  Ogre::Matrix4::operator=(v58, v6);
  *((float *)this + 132) = (float)a2 / 1000.0;
  v57 = 0;
  v38 = Ogre::fastSin(v47, v7);
  v9 = Ogre::fastCos(v47, v8);
  *((_DWORD *)this + 104) = v38;
  v10 = v50;
  *((_DWORD *)this + 105) = v9;
  *((_DWORD *)this + 108) = v10;
  v11 = v48;
  *((_DWORD *)this + 109) = v51;
  *((float *)this + 106) = v11;
  *((_DWORD *)this + 107) = v49;
  v39 = Ogre::fastSin(v52, v11);
  v13 = Ogre::fastCos(v52, v12);
  *((_DWORD *)this + 110) = v39;
  v14 = v55;
  *((_DWORD *)this + 111) = v13;
  *((_DWORD *)this + 114) = v14;
  v15 = v53;
  *((_DWORD *)this + 115) = v56;
  v16 = v54;
  *((_DWORD *)this + 112) = v15;
  *((_DWORD *)this + 113) = v16;
  Ogre::RibbonEmitter::UpdateRibbonLife(this, a2);
  v17 = *((_DWORD *)this + 64);
  v18 = (unsigned int)(float)((float)(1.0 / *(float *)(v17 + 24)) * 1000.0);
  v19 = *((_DWORD *)this + 75);
  if ( v19 > v18 )
  {
    *((_DWORD *)this + 75) = v19 % v18;
    Ogre::RibbonEmitter::EmitteRibbon((int)this, *(_DWORD *)(v17 + 36), (float *)&v41);
  }
  v20 = Ogre::MovableObject::getWorldMatrix(this);
  v21 = *((_DWORD *)v20 + 12);
  v22 = *((_DWORD *)v20 + 14);
  *((_DWORD *)this + 36) = *((_DWORD *)v20 + 13);
  *((_DWORD *)this + 35) = v21;
  *((_DWORD *)this + 37) = v22;
  *((_DWORD *)this + 38) = 1120403456;
  *((_DWORD *)this + 39) = 1120403456;
  *((_DWORD *)this + 40) = 1120403456;
  *((float *)this + 41) = Ogre::Vector3::length((Ogre::RibbonEmitter *)((char *)this + 152));
  v23 = v42;
  v24 = v43;
  *((_DWORD *)this + 116) = v41;
  *((_DWORD *)this + 117) = v23;
  *((_DWORD *)this + 118) = v24;
  *((_DWORD *)this + 119) = v44;
  v25 = v48;
  *((_DWORD *)this + 120) = v45;
  v26 = v46;
  v27 = v47;
  v28 = v49;
  *((float *)this + 123) = v25;
  v29 = v52;
  *((_DWORD *)this + 121) = v26;
  *((_DWORD *)this + 122) = v27;
  *((_DWORD *)this + 124) = v28;
  v30 = v50;
  v31 = v51;
  v32 = v53;
  *((_DWORD *)this + 127) = v29;
  v33 = v56;
  *((_DWORD *)this + 125) = v30;
  *((_DWORD *)this + 126) = v31;
  v34 = v54;
  *((_DWORD *)this + 128) = v32;
  v35 = v55;
  v36 = v57;
  *((_DWORD *)this + 131) = v33;
  *((_DWORD *)this + 129) = v34;
  *((_DWORD *)this + 130) = v35;
  *((_DWORD *)this + 132) = v36;
  return Ogre::Matrix4::operator=((char *)this + 532, v58);
}


//======================================================================
// Ogre::RibbonEmitter::FillSingleVert(Ogre::RIBBON_T &,Ogre::RIBBON_VERT &,Ogre::Vector3 const&,Ogre::Vector2 const&)
// address: 0x0014FE88   size: 0x28E (654 bytes)
//======================================================================
float __fastcall Ogre::RibbonEmitter::FillSingleVert(int a1, float *a2, int a3, float *a4, float *a5)
{
  float v6; // r5
  float Transparent; // r0
  int v9; // r4
  int v10; // r5
  int v11; // r6
  int v12; // r0
  float v13; // r0
  float v14; // r4
  float v15; // r0
  float v16; // r5
  float v17; // r0
  float v18; // r4
  float v19; // r0
  float v20; // r5
  float result; // r0
  float v22; // r0
  float v23; // r4
  float v24; // r0
  float v25; // r5
  float v26; // r0
  float v27; // r4
  float v28; // r0
  float v29; // r5
  float v31; // [sp+4h] [bp-20h]
  float *TransparentColor; // [sp+4h] [bp-20h]
  int v33; // [sp+8h] [bp-1Ch]
  float v34; // [sp+Ch] [bp-18h]
  float v35[4]; // [sp+14h] [bp-10h] BYREF

  v6 = *(float *)(a1 + 308);
  v33 = a1 + 252;
  v31 = (float)(v6 * a4[1]) + a2[1];
  v34 = (float)(v6 * a4[2]) + a2[2];
  v35[0] = *a2 + (float)(v6 * *a4);
  v35[1] = v31;
  v35[2] = v34;
  Ogre::Matrix4::transformCoord((Ogre::Matrix4 *)(a1 + 312), (Ogre::Vector3 *)a3, (const Ogre::Vector3 *)v35);
  Transparent = Ogre::MovableObject::getTransparent((Ogre::MovableObject **)a1);
  TransparentColor = (float *)Ogre::GetTransparentColor(
                                (Ogre *)(a2 + 8),
                                (const Ogre::ColourValue *)LODWORD(Transparent),
                                *(float *)(*(_DWORD *)(v33 + 4) + 28),
                                *(_DWORD *)(v33 + 4));
  v9 = (int)(float)(*TransparentColor * 255.0);
  if ( v9 > 255 )
    v9 = 255;
  v10 = (int)(float)(TransparentColor[1] * 255.0);
  if ( v10 > 255 )
    v10 = 255;
  v11 = (int)(float)(TransparentColor[2] * 255.0);
  if ( v11 > 255 )
    v11 = 255;
  v12 = (int)(float)(TransparentColor[3] * 255.0);
  if ( v12 > 255 )
    v12 = 255;
  *(_BYTE *)(a3 + 12) = v11 & (~v11 >> 31);
  *(_BYTE *)(a3 + 13) = v10 & (~v10 >> 31);
  *(_BYTE *)(a3 + 14) = v9 & (~v9 >> 31);
  *(_BYTE *)(a3 + 15) = v12 & (~v12 >> 31);
  v13 = (float)((float)(*a5 - 0.5) * *(float *)(a1 + 420)) - (float)((float)(a5[1] - 0.5) * *(float *)(a1 + 416));
  *(float *)(a3 + 16) = v13;
  v14 = v13;
  v15 = (float)((float)(*a5 - 0.5) * *(float *)(a1 + 416)) + (float)((float)(a5[1] - 0.5) * *(float *)(a1 + 420));
  *(float *)(a3 + 20) = v15;
  v16 = v15;
  v17 = v14 * *(float *)(a1 + 424);
  *(float *)(a3 + 16) = v17;
  v18 = v17;
  v19 = v16 * *(float *)(a1 + 428);
  *(float *)(a3 + 20) = v19;
  v20 = (float)(v19 + 0.5) + *(float *)(a1 + 436);
  result = (float)(v18 + 0.5) + *(float *)(a1 + 432);
  *(float *)(a3 + 16) = result;
  *(float *)(a3 + 20) = v20;
  if ( *(_DWORD *)(*(_DWORD *)(v33 + 4) + 772) != 0 )
  {
    v22 = (float)((float)(*a5 - 0.5) * *(float *)(a1 + 444)) - (float)((float)(a5[1] - 0.5) * *(float *)(a1 + 440));
    *(float *)(a3 + 24) = v22;
    v23 = v22;
    v24 = (float)((float)(*a5 - 0.5) * *(float *)(a1 + 440)) + (float)((float)(a5[1] - 0.5) * *(float *)(a1 + 444));
    *(float *)(a3 + 28) = v24;
    v25 = v24;
    v26 = v23 * *(float *)(a1 + 448);
    *(float *)(a3 + 24) = v26;
    v27 = v26;
    v28 = v25 * *(float *)(a1 + 452);
    *(float *)(a3 + 28) = v28;
    v29 = (float)(v28 + 0.5) + *(float *)(a1 + 460);
    result = (float)(v27 + 0.5) + *(float *)(a1 + 456);
    *(float *)(a3 + 24) = result;
    *(float *)(a3 + 28) = v29;
  }
  else
  {
    *(_DWORD *)(a3 + 24) = 0;
    *(_DWORD *)(a3 + 28) = 0;
  }
  return result;
}


//======================================================================
// Ogre::RibbonEmitter::fillVertex(Ogre::SceneRenderer *,Ogre::VertexBuffer *&,Ogre::IndexBuffer *&)
// address: 0x0015011C   size: 0x23E (574 bytes)
//======================================================================
int __fastcall Ogre::RibbonEmitter::fillVertex(
        Ogre::RibbonEmitter *this,
        Ogre::SceneRenderer *a2,
        Ogre::VertexBuffer **a3,
        Ogre::IndexBuffer **a4)
{
  Ogre::RibbonSegBuffer *v4; // r6
  int v6; // r0
  int LineSegCount; // r7
  unsigned int v8; // r4
  Ogre::DynamicIndexBuffer *v9; // r0
  int v10; // r7
  float *Current; // r5
  int i; // r4
  float v13; // r2
  int v14; // r0
  int v15; // r4
  int v16; // r0
  int v17; // r1
  int v18; // r5
  int v19; // r4
  int v21; // [sp+8h] [bp-5Ch]
  int v22; // [sp+Ch] [bp-58h]
  int v23; // [sp+Ch] [bp-58h]
  int Count; // [sp+14h] [bp-50h]
  int v25; // [sp+14h] [bp-50h]
  int v26; // [sp+18h] [bp-4Ch]
  float *v28; // [sp+20h] [bp-44h]
  int v29; // [sp+20h] [bp-44h]
  float v30; // [sp+24h] [bp-40h]
  Ogre::DynamicIndexBuffer *v31; // [sp+28h] [bp-3Ch]
  int v32; // [sp+2Ch] [bp-38h]
  int v33; // [sp+30h] [bp-34h]
  float v34; // [sp+38h] [bp-2Ch]
  float v35; // [sp+3Ch] [bp-28h]
  Ogre::DynamicVertexBuffer *v36; // [sp+40h] [bp-24h]
  int v37; // [sp+44h] [bp-20h]
  int v38; // [sp+48h] [bp-1Ch]
  float v41[3]; // [sp+58h] [bp-Ch] BYREF

  v4 = (Ogre::RibbonEmitter *)((char *)this + 392);
  if ( Ogre::RibbonSegBuffer::GetCount((Ogre::RibbonEmitter *)((char *)this + 392)) <= 1 )
    return 0;
  v6 = *((_DWORD *)this + 64);
  v33 = (*(_DWORD *)(v6 + 64) - *(_DWORD *)(v6 + 60)) >> 3;
  LineSegCount = Ogre::RibbonSectionDesc::GetLineSegCount((Ogre::RibbonSectionDesc *)(v6 + 60));
  v8 = v33 * Ogre::RibbonSegBuffer::GetCount(v4);
  Count = Ogre::RibbonSegBuffer::GetCount(v4);
  v36 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                       a2,
                                       (Ogre::RibbonEmitter *)((char *)this + 288),
                                       v8);
  v9 = (Ogre::DynamicIndexBuffer *)Ogre::SceneRenderer::newDynamicIB(a2, (Count - 1) * 6 * LineSegCount);
  *((_DWORD *)v9 + 4) = 0;
  v31 = v9;
  *((_DWORD *)v9 + 5) = v8;
  v37 = Ogre::DynamicVertexBuffer::lock(v36);
  v32 = Ogre::DynamicIndexBuffer::lock(v31);
  if ( Ogre::RibbonSegBuffer::GetTail(v4) != 0 )
    v34 = *(float *)(Ogre::RibbonSegBuffer::GetTail(v4) + 52);
  else
    v34 = 0.0;
  v35 = *(float *)(*((_DWORD *)this + 64) + 20);
  if ( Ogre::RibbonSegBuffer::GetHead(v4) != 0 )
    v35 = *(float *)(Ogre::RibbonSegBuffer::GetHead(v4) + 52);
  Ogre::RibbonSegBuffer::BeginIterate((int)v4);
  v38 = Ogre::RibbonSegBuffer::GetCount(v4);
  v25 = 0;
  v26 = 0;
  v10 = 0;
  while ( Ogre::RibbonSegBuffer::Next(v4) )
  {
    Current = (float *)Ogre::RibbonSegBuffer::GetCurrent(v4);
    v28 = Current + 14;
    v30 = (float)(Current[13] - v34) / (float)(v35 - v34);
    for ( i = 0; i < v33; ++i )
    {
      v13 = *(float *)(4 * i + *(_DWORD *)(*((_DWORD *)this + 64) + 72));
      v41[0] = v30;
      v41[1] = v13;
      Ogre::RibbonEmitter::FillSingleVert((int)this, Current, v37 + 32 * (i + v26), v28, v41);
      v28 += 3;
    }
    v21 = 0;
    v29 = 0;
    while ( 1 )
    {
      v14 = *((_DWORD *)this + 64);
      v15 = *(_DWORD *)(v14 + 84);
      if ( v21 >= (*(_DWORD *)(v14 + 88) - v15) >> 2 )
        break;
      v16 = 4 * v21;
      v17 = *(_DWORD *)(v15 + 4 * v21);
      if ( v17 < 0 )
      {
        v29 = 0;
      }
      else if ( v29 != 0 )
      {
        if ( v25 != 0 )
        {
          v18 = 2 * v10;
          v10 += 3;
          *(_WORD *)(v32 + v18) = v26 - v33 + v17;
          v19 = v32 + v18;
          *(_WORD *)(v19 + 2) = v26 + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 64) + 84) + v16 - 4);
          *(_WORD *)(v19 + 4) = v26 + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 64) + 84) + 4 * v21);
        }
        if ( v25 < v38 - 1 )
        {
          v22 = 2 * v10;
          v10 += 3;
          *(_WORD *)(v32 + v22) = v26 + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 64) + 84) + v16 - 4);
          v23 = v32 + v22;
          *(_WORD *)(v23 + 2) = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 64) + 84) + v16 - 4) + v33 * (v25 + 1);
          *(_WORD *)(v23 + 4) = v26 + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 64) + 84) + 4 * v21);
        }
      }
      else
      {
        v29 = 1;
      }
      ++v21;
    }
    v26 += v33;
    ++v25;
  }
  *a3 = v36;
  *a4 = v31;
  return v10 / 3;
}


//======================================================================
// Ogre::RibbonEmitter::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x0015035A   size: 0xFA (250 bytes)
//======================================================================
int __fastcall Ogre::RibbonEmitter::render(
        Ogre::RibbonEmitter *this,
        Ogre::SceneRenderer *a2,
        const Ogre::ShaderEnvData *a3)
{
  int result; // r0
  int v6; // r0
  float *WorldMatrix; // r5
  float *v8; // r4
  int j; // r6
  float v10; // r7
  float v11; // r0
  int i; // [sp+20h] [bp-64h]
  int v14; // [sp+28h] [bp-5Ch]
  Ogre::VertexBuffer *v15; // [sp+38h] [bp-4Ch] BYREF
  Ogre::IndexBuffer *v16; // [sp+3Ch] [bp-48h] BYREF
  _BYTE v17[56]; // [sp+40h] [bp-44h] BYREF
  int v18; // [sp+78h] [bp-Ch]

  result = Ogre::RibbonSegBuffer::GetCount((Ogre::RibbonEmitter *)((char *)this + 392));
  if ( result > 1 )
  {
    Ogre::Matrix4::operator=((char *)this + 312, (char *)a3 + 956);
    v6 = Ogre::RibbonEmitter::fillVertex(this, a2, &v15, &v16);
    v14 = Ogre::SceneRenderer::newContext(a2, 2, a3, *((_DWORD *)this + 71), *((_DWORD *)this + 70), v15, v16, 4, v6, 1);
    WorldMatrix = (float *)Ogre::MovableObject::getWorldMatrix(this);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v17);
    for ( i = 0; i != 64; i += 16 )
    {
      v8 = (float *)((char *)a3 + 956);
      for ( j = 0; j != 16; j += 4 )
      {
        v10 = (float)((float)(*WorldMatrix * *v8) + (float)(WorldMatrix[1] * v8[4])) + (float)(WorldMatrix[2] * v8[8]);
        v11 = WorldMatrix[3] * v8[12];
        ++v8;
        *(float *)&v17[i + j] = v10 + v11;
      }
      WorldMatrix += 4;
    }
    *(_DWORD *)(v14 + 20) = v18;
    return Ogre::ShaderContext::addValueParam(v14, 2, (char *)a3 + 1020, 7, 1);
  }
  return result;
}

