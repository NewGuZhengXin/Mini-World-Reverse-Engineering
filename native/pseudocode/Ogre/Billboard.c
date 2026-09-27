// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Billboard

//======================================================================
// Ogre::Billboard::getRTTI(void)const
// address: 0x0016C248   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::Billboard::getRTTI(Ogre::Billboard *this)
{
  return &Ogre::Billboard::m_RTTI;
}


//======================================================================
// Ogre::Billboard::getRenderPassRequired(Ogre::RenderPassDesc &)
// address: 0x0016C254   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::Billboard::getRenderPassRequired(int a1, _DWORD *a2)
{
  int result; // r0

  result = a1 + 252;
  if ( *(_BYTE *)(*(_DWORD *)result + 160) != 0 )
    *a2 |= 0x20u;
  return result;
}


//======================================================================
// Ogre::Billboard::resetUpdate(bool,unsigned int)
// address: 0x0016C26C   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::Billboard::resetUpdate(int this, bool a2, unsigned int a3)
{
  *(_BYTE *)(this + 184) = a2;
  if ( a3 != -1 )
  {
    this += 252;
    *(_DWORD *)(this + 4) = a3;
  }
  return this;
}


//======================================================================
// Ogre::Billboard::~Billboard()
// address: 0x0016C280   size: 0x38 (56 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9BillboardD1Ev'
void __fastcall Ogre::Billboard::~Billboard(Ogre::Billboard *this)
{
  char *v1; // r5
  _DWORD *v3; // r0

  v1 = (char *)this + 252;
  *(_DWORD *)this = &off_4572B0;
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
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// Ogre::Billboard::~Billboard()
// address: 0x0016C2BC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Billboard::~Billboard(Ogre::Billboard *this)
{
  Ogre::Billboard::~Billboard(this);
  operator delete(this);
}


//======================================================================
// Ogre::Billboard::Billboard(Ogre::BillboardData *)
// address: 0x0016C2D0   size: 0x146 (326 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9BillboardC2EPNS_13BillboardDataE'
Ogre::Billboard *__fastcall Ogre::Billboard::Billboard(Ogre::Billboard *this, Ogre::BillboardData *a2)
{
  int v5; // [sp+4h] [bp-10h]

  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_DWORD *)this + 53) = 0;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_4572B0;
  *((_DWORD *)this + 63) = a2;
  *((_DWORD *)this + 68) = 1065353216;
  *((_DWORD *)this + 69) = 1065353216;
  *((_DWORD *)this + 70) = 1065353216;
  *((_DWORD *)this + 71) = 1065353216;
  *((_DWORD *)this + 74) = 0;
  Ogre::Matrix4::Matrix4((Ogre::Billboard *)((char *)this + 300));
  if ( a2 != nullptr )
  {
    (*(void (__fastcall **)(Ogre::BillboardData *))(*(_DWORD *)a2 + 4))(a2);
    *((_DWORD *)this + 64) = 0;
    *((_DWORD *)this + 65) = (unsigned int)(float)((float)((float)(*((_DWORD *)a2 + 12) * *((_DWORD *)a2 + 11))
                                                         * *((float *)a2 + 13))
                                                 * 1000.0);
    if ( dword_4B9304 == 0 )
    {
      Ogre::VertexFormat::addElement(dword_4B9308, 2u, 1u, 0, 0, -1);
      Ogre::VertexFormat::addElement(dword_4B9308, 4u, 5u, 0, 0, -1);
      Ogre::VertexFormat::addElement(dword_4B9308, 1u, 7u, 0, 0, -1);
      Ogre::VertexFormat::addElement(dword_4B9308, 1u, 7u, 1, 0, -1);
      dword_4B9304 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton
                                                       + 36))(
                       Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
                       dword_4B9308);
    }
    *((_DWORD *)this + 74) = Ogre::CreateParticleMaterial(
                               *((Ogre **)a2 + 14),
                               *((_DWORD *)a2 + 275),
                               *((Ogre::Texture **)a2 + 276),
                               *((Ogre::Texture **)a2 + 41),
                               *((_DWORD *)a2 + 44),
                               v5);
    *((_DWORD *)this + 35) = 0;
    *((_DWORD *)this + 36) = 0;
    *((_DWORD *)this + 37) = 0;
    *((_DWORD *)this + 38) = 1120403456;
    *((_DWORD *)this + 39) = 1120403456;
    *((_DWORD *)this + 40) = 1120403456;
    *((float *)this + 41) = Ogre::Vector3::length((Ogre::Billboard *)((char *)this + 152));
    if ( *(_BYTE *)(*((_DWORD *)this + 63) + 160) != 0 )
      *((_DWORD *)this + 61) = 32;
  }
  return this;
}


//======================================================================
// Ogre::Billboard::newObject(void)
// address: 0x0016C430   size: 0x16 (22 bytes)
//======================================================================
Ogre::Billboard *__fastcall Ogre::Billboard::newObject(Ogre::Billboard *this)
{
  Ogre::Billboard *v1; // r4

  v1 = (Ogre::Billboard *)operator new(0x1ACu);
  Ogre::Billboard::Billboard(v1, nullptr);
  return v1;
}


//======================================================================
// Ogre::Billboard::updateBillboard2(unsigned int)
// address: 0x0016C448   size: 0x472 (1138 bytes)
//======================================================================
float __fastcall Ogre::Billboard::updateBillboard2(Ogre::Billboard *this, unsigned int a2)
{
  float *v3; // r6
  Ogre *v4; // r5
  float v5; // r1
  float v6; // r4
  float v7; // r1
  float v8; // r0
  float v9; // r4
  float v10; // r4
  float result; // r0
  Ogre::BillboardData *v12; // r4
  Ogre *v13; // r5
  float v14; // r1
  float v15; // r6
  float v16; // r4
  float v17; // r1
  float v18; // r0
  float v19; // r0
  float v20; // r0
  float v21; // r5
  float v22; // [sp+4h] [bp-30h]
  float v23; // [sp+4h] [bp-30h]
  float v24; // [sp+8h] [bp-2Ch]
  float v25; // [sp+8h] [bp-2Ch]
  float v26; // [sp+Ch] [bp-28h]
  float v27; // [sp+Ch] [bp-28h]
  float v28; // [sp+Ch] [bp-28h]
  float v29; // [sp+10h] [bp-24h]
  float v30; // [sp+10h] [bp-24h]
  float v31; // [sp+14h] [bp-20h]
  float v32; // [sp+14h] [bp-20h]
  float v33; // [sp+14h] [bp-20h]
  float v34; // [sp+14h] [bp-20h]
  float v35; // [sp+18h] [bp-1Ch]
  float v36; // [sp+18h] [bp-1Ch]
  float v37; // [sp+18h] [bp-1Ch]
  float v38; // [sp+18h] [bp-1Ch]
  float v39; // [sp+1Ch] [bp-18h]
  float v40; // [sp+1Ch] [bp-18h]
  float v41; // [sp+20h] [bp-14h]
  float v42; // [sp+20h] [bp-14h]
  float v43; // [sp+24h] [bp-10h]
  float v44; // [sp+28h] [bp-Ch]
  float v45; // [sp+2Ch] [bp-8h]

  v3 = (float *)((char *)this + 252);
  if ( *((_BYTE *)this + 184) == 0 )
    *((_DWORD *)this + 64) += a2;
  Ogre::BillboardData::PrepareData(*(Ogre::BillboardData **)v3, *((_DWORD *)this + 64));
  v4 = *(Ogre **)(*(_DWORD *)v3 + 1052);
  v29 = *(float *)(*(_DWORD *)v3 + 1056);
  v31 = *(float *)(*(_DWORD *)v3 + 1060);
  v35 = *(float *)(*(_DWORD *)v3 + 1064);
  v45 = *(float *)(*(_DWORD *)v3 + 1068);
  v22 = 1.0 / (float)*(int *)(*(_DWORD *)v3 + 48);
  v24 = 1.0 / (float)*(int *)(*(_DWORD *)v3 + 44);
  v6 = Ogre::fastSin(v4, v5);
  v41 = Ogre::fastCos(v4, v7);
  v26 = v24 / v22;
  v25 = v6 * 0.5;
  v43 = (float)(v41 * -0.5) + (float)(v6 * 0.5);
  v3[28] = v43 * v29;
  v32 = v26 * v31;
  v8 = (float)((float)(v6 * -0.5) + (float)(v41 * -0.5)) * v32;
  v3[29] = v8;
  v36 = v35 + 0.5;
  v27 = (float)(v26 * 0.5) + v45;
  *((float *)this + 91) = (float)((float)(v43 * v29) + v36) * v22;
  *((float *)this + 92) = (float)(v8 + v27) * v22;
  v39 = (float)((float)(v41 * -0.5) - (float)(v6 * 0.5)) * v29;
  v3[30] = v39;
  v9 = (float)((float)(v6 * -0.5) + (float)(v41 * 0.5)) * v32;
  v3[31] = v9;
  *((float *)this + 93) = (float)(v39 + v36) * v22;
  *((float *)this + 94) = (float)(v9 + v27) * v22;
  v10 = v25 + (float)(v41 * 0.5);
  *((float *)this + 95) = (float)((float)(v41 * 0.5) - v25) * v29;
  *((float *)this + 96) = v10 * v32;
  *((float *)this + 95) = (float)((float)((float)((float)(v41 * 0.5) - v25) * v29) + v36) * v22;
  *((float *)this + 96) = (float)((float)(v10 * v32) + v27) * v22;
  *((float *)this + 97) = v10 * v29;
  *((float *)this + 98) = v43 * v32;
  *((float *)this + 97) = (float)((float)(v10 * v29) + v36) * v22;
  result = (float)((float)(v43 * v32) + v27) * v22;
  *((float *)this + 98) = result;
  v12 = *(Ogre::BillboardData **)v3;
  if ( *(_DWORD *)(*(_DWORD *)v3 + 1104) != 0 )
  {
    v13 = *((Ogre **)v12 + 269);
    v30 = *((float *)v12 + 270);
    v33 = *((float *)v12 + 271);
    v37 = *((float *)v12 + 272);
    v44 = *((float *)v12 + 273);
    v23 = 1.0 / (float)*((int *)v12 + 46);
    v15 = 1.0 / (float)*((int *)v12 + 45);
    v16 = Ogre::fastSin(v13, v14);
    v40 = Ogre::fastCos(v13, v17);
    v42 = (float)(v40 * -0.5) + (float)(v16 * 0.5);
    *((float *)this + 99) = v42 * v30;
    v34 = (float)(v15 / v23) * v33;
    v18 = (float)((float)(v16 * -0.5) + (float)(v40 * -0.5)) * v34;
    *((float *)this + 100) = v18;
    v38 = v37 + 0.5;
    v28 = (float)((float)(v15 / v23) * 0.5) + v44;
    *((float *)this + 99) = (float)((float)(v42 * v30) + v38) * v23;
    *((float *)this + 100) = (float)(v18 + v28) * v23;
    *((float *)this + 101) = (float)((float)(v40 * -0.5) - (float)(v16 * 0.5)) * v30;
    v19 = (float)((float)(v16 * -0.5) + (float)(v40 * 0.5)) * v34;
    *((float *)this + 102) = v19;
    *((float *)this + 101) = (float)((float)((float)((float)(v40 * -0.5) - (float)(v16 * 0.5)) * v30) + v38) * v23;
    *((float *)this + 102) = (float)(v19 + v28) * v23;
    *((float *)this + 103) = (float)((float)(v40 * 0.5) - (float)(v16 * 0.5)) * v30;
    v20 = (float)((float)(v16 * 0.5) + (float)(v40 * 0.5)) * v34;
    *((float *)this + 104) = v20;
    *((float *)this + 103) = (float)((float)((float)((float)(v40 * 0.5) - (float)(v16 * 0.5)) * v30) + v38) * v23;
    *((float *)this + 104) = (float)(v20 + v28) * v23;
    v21 = (float)((float)(v16 * 0.5) + (float)(v40 * 0.5)) * v30;
    *((float *)this + 105) = v21;
    *((float *)this + 106) = v42 * v34;
    *((float *)this + 105) = (float)(v21 + v38) * v23;
    result = (float)((float)(v42 * v34) + v28) * v23;
    *((float *)this + 106) = result;
  }
  else
  {
    *((_DWORD *)this + 105) = 0;
    *((_DWORD *)this + 106) = 0;
    *((_DWORD *)this + 103) = 0;
    *((_DWORD *)this + 104) = 0;
    *((_DWORD *)this + 101) = 0;
    *((_DWORD *)this + 102) = 0;
    *((_DWORD *)this + 99) = 0;
    *((_DWORD *)this + 100) = 0;
  }
  return result;
}


//======================================================================
// Ogre::Billboard::update(unsigned int)
// address: 0x0016C8BC   size: 0x54 (84 bytes)
//======================================================================
float __fastcall Ogre::Billboard::update(Ogre::Billboard *this, unsigned int a2)
{
  float v4; // r5
  char *WorldMatrix; // r0
  int v6; // r1
  int v7; // r2
  float result; // r0

  Ogre::MovableObject::update(this, a2);
  Ogre::Billboard::updateBillboard2(this, a2);
  v4 = *(float *)(*((_DWORD *)this + 63) + 1036);
  if ( v4 < 50.0 )
    v4 = 50.0;
  WorldMatrix = Ogre::MovableObject::getWorldMatrix(this);
  v6 = *((_DWORD *)WorldMatrix + 13);
  v7 = *((_DWORD *)WorldMatrix + 14);
  *((_DWORD *)this + 35) = *((_DWORD *)WorldMatrix + 12);
  *((_DWORD *)this + 36) = v6;
  *((_DWORD *)this + 37) = v7;
  *((float *)this + 38) = v4;
  *((float *)this + 39) = v4;
  *((float *)this + 40) = v4;
  result = Ogre::Vector3::length((Ogre::Billboard *)((char *)this + 152));
  *((float *)this + 41) = result;
  return result;
}


//======================================================================
// Ogre::Billboard::fillBillboardVert2(Ogre::BillboardVerts *,unsigned short *)
// address: 0x0016C918   size: 0x43A (1082 bytes)
//======================================================================
float __fastcall Ogre::Billboard::fillBillboardVert2(int a1, int a2, _WORD *a3)
{
  float Transparent; // r0
  int *v7; // r6
  int v8; // r3
  float *TransparentColor; // r5
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r5
  int v19; // r0
  int v20; // r1
  int v21; // r6
  int v22; // r0
  int v23; // r1
  int v24; // r3
  int v25; // r2
  float *v26; // r5
  float *v27; // r3
  float v28; // r5
  float v29; // r0
  float v30; // r0
  float v31; // r0
  float v32; // r0
  float v33; // r0
  float v34; // r0
  float v35; // r5
  float result; // r0
  int v37; // [sp+0h] [bp-3Ch]
  float v38; // [sp+0h] [bp-3Ch]
  float v39; // [sp+0h] [bp-3Ch]
  int v40; // [sp+4h] [bp-38h]
  int v41; // [sp+4h] [bp-38h]
  float v42; // [sp+4h] [bp-38h]
  int v43; // [sp+8h] [bp-34h]
  float v44; // [sp+8h] [bp-34h]
  char v45; // [sp+Ch] [bp-30h]
  char v46; // [sp+10h] [bp-2Ch]
  char v47; // [sp+14h] [bp-28h]
  char v48; // [sp+18h] [bp-24h]
  float v50; // [sp+20h] [bp-1Ch]
  int v51; // [sp+24h] [bp-18h]
  float v52; // [sp+28h] [bp-14h]
  float v53; // [sp+2Ch] [bp-10h]
  float v54; // [sp+30h] [bp-Ch]
  float v55; // [sp+34h] [bp-8h]

  Transparent = Ogre::MovableObject::getTransparent((Ogre::MovableObject **)a1);
  v7 = (int *)(a1 + 252);
  TransparentColor = (float *)Ogre::GetTransparentColor(
                                (Ogre *)(*v7 + 1020),
                                (const Ogre::ColourValue *)LODWORD(Transparent),
                                *(float *)(*v7 + 56),
                                v8);
  v10 = (int)(float)(*TransparentColor * 255.0);
  if ( v10 <= 255 )
    v11 = v10 & (~v10 >> 31);
  else
    LOBYTE(v11) = -1;
  v45 = v11;
  v12 = (int)(float)(TransparentColor[1] * 255.0);
  if ( v12 <= 255 )
    v13 = v12 & (~v12 >> 31);
  else
    LOBYTE(v13) = -1;
  v46 = v13;
  v14 = (int)(float)(TransparentColor[2] * 255.0);
  if ( v14 <= 255 )
    v15 = v14 & (~v14 >> 31);
  else
    LOBYTE(v15) = -1;
  v47 = v15;
  v16 = (int)(float)(TransparentColor[3] * 255.0);
  if ( v16 <= 255 )
    v17 = v16 & (~v16 >> 31);
  else
    LOBYTE(v17) = -1;
  v18 = *v7;
  v48 = v17;
  v52 = *(float *)(*v7 + 1036);
  if ( *(_BYTE *)(*v7 + 201) != 0 )
  {
    v52 = *(float *)(v18 + 1044);
    v53 = *(float *)(v18 + 1048);
  }
  else
  {
    v53 = v52 * *(float *)(v18 + 1040);
  }
  v40 = *(_DWORD *)(v18 + 44);
  v37 = *(_DWORD *)(v18 + 48);
  v43 = *(_DWORD *)(v18 + 156);
  if ( v43 != 0 )
  {
    v20 = v37 * v40;
    v19 = *(_DWORD *)(v18 + 1072);
    goto LABEL_20;
  }
  if ( *(float *)(v18 + 52) > 0.00001 )
  {
    v19 = (int)(float)((float)((float)*(unsigned int *)(a1 + 256) / 1000.0) / *(float *)(v18 + 52));
    v20 = v37 * v40;
LABEL_20:
    v21 = v19 % v20;
    goto LABEL_22;
  }
  v21 = 0;
LABEL_22:
  v50 = (float)(v21 % v37) * (float)(1.0 / (float)v37);
  v54 = (float)(v21 / v37) * (float)(1.0 / (float)v40);
  if ( *(_DWORD *)(v18 + 1104) != 0 )
  {
    v51 = *(_DWORD *)(v18 + 180);
    v41 = *(_DWORD *)(v18 + 184);
    if ( v43 != 0 )
    {
      v23 = v41 * v51;
      v22 = *(_DWORD *)(v18 + 1096);
    }
    else
    {
      v38 = *(float *)(v18 + 52);
      if ( v38 <= 0.00001 )
      {
LABEL_28:
        v39 = (float)(v21 % v41) * (float)(1.0 / (float)v41);
        v42 = (float)(v21 / v41) * (float)(1.0 / (float)v51);
        goto LABEL_30;
      }
      v22 = (int)(float)((float)((float)*(unsigned int *)(a1 + 256) / 1000.0) / v38);
      v23 = v41 * v51;
    }
    v21 = v22 % v23;
    goto LABEL_28;
  }
  v42 = 0.0;
  v39 = 0.0;
LABEL_30:
  v24 = v18 + 188;
  v25 = *(unsigned __int8 *)(v18 + 188);
  v26 = (float *)(v18 + 196);
  v27 = (float *)(v24 + 4);
  if ( v25 != 0 )
  {
    v28 = *v26;
    v44 = *v27;
  }
  else
  {
    v44 = v52 * *v27;
    v28 = v53 * *v26;
  }
  *(_DWORD *)(a2 + 8) = 0;
  *(_BYTE *)(a2 + 12) = v47;
  *(_BYTE *)(a2 + 14) = v45;
  *(_BYTE *)(a2 + 15) = v48;
  *(float *)a2 = v44 - v52;
  *(float *)(a2 + 4) = v53 + v28;
  *(_BYTE *)(a2 + 13) = v46;
  v29 = v50 + *(float *)(a1 + 364);
  *(float *)(a2 + 20) = v54 + *(float *)(a1 + 368);
  *(float *)(a2 + 16) = v29;
  v55 = v42 + *(float *)(a1 + 400);
  *(float *)(a2 + 24) = v39 + *(float *)(a1 + 396);
  *(float *)(a2 + 28) = v55;
  *(_DWORD *)(a2 + 40) = 0;
  *(float *)(a2 + 32) = v44 - v52;
  *(float *)(a2 + 36) = v28 - v53;
  *(_BYTE *)(a2 + 44) = v47;
  *(_BYTE *)(a2 + 45) = v46;
  *(_BYTE *)(a2 + 46) = v45;
  *(_BYTE *)(a2 + 47) = v48;
  v30 = v54 + *(float *)(a1 + 376);
  *(float *)(a2 + 48) = v50 + *(float *)(a1 + 372);
  *(float *)(a2 + 52) = v30;
  v31 = v42 + *(float *)(a1 + 408);
  *(float *)(a2 + 56) = v39 + *(float *)(a1 + 404);
  *(float *)(a2 + 60) = v31;
  *(_DWORD *)(a2 + 72) = 0;
  *(float *)(a2 + 64) = v52 + v44;
  *(float *)(a2 + 68) = v28 - v53;
  *(_BYTE *)(a2 + 76) = v47;
  *(_BYTE *)(a2 + 77) = v46;
  *(_BYTE *)(a2 + 78) = v45;
  *(_BYTE *)(a2 + 79) = v48;
  v32 = v54 + *(float *)(a1 + 384);
  *(float *)(a2 + 80) = v50 + *(float *)(a1 + 380);
  *(float *)(a2 + 84) = v32;
  v33 = v42 + *(float *)(a1 + 416);
  *(float *)(a2 + 88) = v39 + *(float *)(a1 + 412);
  *(float *)(a2 + 92) = v33;
  *(float *)(a2 + 100) = v53 + v28;
  *(_DWORD *)(a2 + 104) = 0;
  *(float *)(a2 + 96) = v52 + v44;
  *(_BYTE *)(a2 + 108) = v47;
  *(_BYTE *)(a2 + 109) = v46;
  *(_BYTE *)(a2 + 110) = v45;
  *(_BYTE *)(a2 + 111) = v48;
  v34 = v54 + *(float *)(a1 + 392);
  *(float *)(a2 + 112) = v50 + *(float *)(a1 + 388);
  *(float *)(a2 + 116) = v34;
  v35 = v42 + *(float *)(a1 + 424);
  result = v39 + *(float *)(a1 + 420);
  *(float *)(a2 + 120) = result;
  *(float *)(a2 + 124) = v35;
  *a3 = 0;
  a3[1] = 1;
  a3[2] = 2;
  a3[4] = 2;
  a3[3] = 0;
  a3[5] = 3;
  return result;
}


//======================================================================
// Ogre::Billboard::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x0016CD54   size: 0x270 (624 bytes)
//======================================================================
int __fastcall Ogre::Billboard::render(
        Ogre::Billboard *this,
        Ogre::DynamicBufferPool **a2,
        const Ogre::ShaderEnvData *a3)
{
  float *WorldMatrix; // r0
  char *v4; // r0
  char *v5; // r0
  int v6; // r3
  int v7; // r2
  int v8; // r0
  int v9; // r3
  float v10; // r2
  float v11; // r4
  float *v12; // r1
  float *v13; // r2
  float v14; // r4
  float *v15; // r2
  float *v16; // r3
  float v17; // r4
  char *v18; // r1
  Ogre::DynamicIndexBuffer *v19; // r4
  Ogre::DynamicVertexBuffer *v20; // r5
  int v21; // r7
  _WORD *v22; // r0
  Ogre::ShaderContext *v23; // r0
  float v28[3]; // [sp+3Ch] [bp-180h] BYREF
  _DWORD v29[3]; // [sp+48h] [bp-174h] BYREF
  float v30; // [sp+54h] [bp-168h] BYREF
  float v31; // [sp+58h] [bp-164h]
  float v32; // [sp+5Ch] [bp-160h]
  float v33[3]; // [sp+60h] [bp-15Ch] BYREF
  float v34[3]; // [sp+6Ch] [bp-150h] BYREF
  float v35[16]; // [sp+78h] [bp-144h] BYREF
  float v36[16]; // [sp+B8h] [bp-104h] BYREF
  float v37[16]; // [sp+F8h] [bp-C4h] BYREF
  float v38[16]; // [sp+138h] [bp-84h] BYREF
  float v39[17]; // [sp+178h] [bp-44h] BYREF

  WorldMatrix = (float *)Ogre::MovableObject::getWorldMatrix(this);
  Ogre::operator*((Ogre::Matrix4 *)v39, WorldMatrix, (float *)a3 + 239);
  Ogre::Matrix4::operator=((char *)this + 300, v39);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v35);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v36);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v37);
  v4 = Ogre::MovableObject::getWorldMatrix(this);
  Ogre::Matrix4::getScale((Ogre::Matrix4 *)v4, (Ogre::Matrix4 *)v36);
  v28[1] = v36[0];
  v28[2] = v36[0];
  v28[0] = v36[0];
  Ogre::Matrix4::makeScaleMatrix((Ogre::Matrix4 *)v36, (const Ogre::Vector3 *)v28);
  v5 = Ogre::MovableObject::getWorldMatrix(this);
  v6 = *((_DWORD *)v5 + 14);
  v7 = *((_DWORD *)v5 + 13);
  v8 = *((_DWORD *)v5 + 12);
  v29[2] = v6;
  v29[0] = v8;
  v29[1] = v7;
  Ogre::Matrix4::makeTranslateMatrix((Ogre::Matrix4 *)v37, (const Ogre::Vector3 *)v29);
  v9 = *(_DWORD *)(*((_DWORD *)this + 63) + 16);
  switch ( v9 )
  {
    case 0:
      v10 = *((float *)a3 + 245);
      v11 = *((float *)a3 + 241);
      v32 = *((float *)a3 + 249);
      v31 = v10;
      v30 = v11;
      Ogre::Normalize(&v30);
      v39[2] = v32 + 0.0;
      v39[0] = v30 + 0.0;
      v39[1] = v31 + 1.0;
      Ogre::CrossProduct(v33, v39, &v30);
      Ogre::Normalize(v33);
      v12 = &v30;
      v13 = v33;
LABEL_5:
      Ogre::CrossProduct(v34, v12, v13);
      Ogre::Normalize(v34);
      v15 = v34;
      v16 = &v30;
LABEL_8:
      Ogre::Matrix4::makeRotateMatrix(
        (Ogre::Matrix4 *)v35,
        (const Ogre::Vector3 *)v33,
        (const Ogre::Vector3 *)v15,
        (const Ogre::Vector3 *)v16);
      Ogre::operator*((Ogre::Matrix4 *)v38, v35, v36);
      Ogre::operator*((Ogre::Matrix4 *)v39, v38, v37);
      v18 = (char *)v39;
LABEL_11:
      Ogre::Matrix4::operator=(v35, v18);
      break;
    case 1:
      v14 = *((float *)a3 + 241);
      v32 = *((float *)a3 + 249);
      v30 = v14;
      v31 = 0.0;
      Ogre::Normalize(&v30);
      v39[0] = v30 + 0.0;
      v39[1] = v31 + 1.0;
      v39[2] = v32 + 0.0;
      Ogre::CrossProduct(v33, &v30, v39);
      Ogre::Normalize(v33);
      v12 = v33;
      v13 = &v30;
      goto LABEL_5;
    case 2:
      v17 = *((float *)a3 + 241);
      v32 = *((float *)a3 + 249);
      v30 = v17;
      v31 = 0.0;
      Ogre::Normalize(&v30);
      v39[0] = v30 + 0.0;
      v39[1] = v31 + 1.0;
      v39[2] = v32 + 0.0;
      Ogre::CrossProduct(v33, &v30, v39);
      Ogre::Normalize(v33);
      Ogre::CrossProduct(v34, v33, &v30);
      Ogre::Normalize(v34);
      v15 = &v30;
      v16 = v34;
      goto LABEL_8;
    case 3:
      v18 = Ogre::MovableObject::getWorldMatrix(this);
      goto LABEL_11;
    default:
      break;
  }
  Ogre::Matrix4::operator*=(v35, (char *)a3 + 1084);
  v19 = (Ogre::DynamicIndexBuffer *)Ogre::SceneRenderer::newDynamicIB(a2, 6u);
  v20 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(a2, (const Ogre::VertexFormat *)dword_4B9308, 4u);
  v21 = Ogre::DynamicVertexBuffer::lock(v20);
  v22 = (_WORD *)Ogre::DynamicIndexBuffer::lock(v19);
  Ogre::Billboard::fillBillboardVert2((int)this, v21, v22);
  *((_DWORD *)v19 + 4) = 0;
  *((_DWORD *)v19 + 5) = 4;
  v23 = Ogre::SceneRenderer::newContext(
          (int)a2,
          *((_DWORD *)this + 59),
          a3,
          *((Ogre::Material **)this + 74),
          dword_4B9304,
          v20,
          v19,
          4,
          2,
          1);
  *((_DWORD *)v23 + 5) = *((_DWORD *)this + 89);
  return Ogre::ShaderContext::addValueParam((int)v23, 2, v35, 7, 1);
}

