// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MinecartLocoMotion

//======================================================================
// MinecartLocoMotion::~MinecartLocoMotion()
// address: 0x002A64C8   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN18MinecartLocoMotionD1Ev'
void __fastcall MinecartLocoMotion::~MinecartLocoMotion(MinecartLocoMotion *this)
{
  *(_DWORD *)this = &off_45D240;
  ActorLocoMotion::~ActorLocoMotion(this);
}


//======================================================================
// MinecartLocoMotion::~MinecartLocoMotion()
// address: 0x002A64E4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall MinecartLocoMotion::~MinecartLocoMotion(MinecartLocoMotion *this)
{
  MinecartLocoMotion::~MinecartLocoMotion(this);
  operator delete(this);
}


//======================================================================
// MinecartLocoMotion::MinecartLocoMotion(ClientActor *)
// address: 0x002A6928   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN18MinecartLocoMotionC1EP11ClientActor'
void __fastcall MinecartLocoMotion::MinecartLocoMotion(MinecartLocoMotion *this, ClientActor *a2)
{
  ActorLocoMotion::ActorLocoMotion(this, a2);
  *(_DWORD *)this = &off_45D240;
  *((_BYTE *)this + 160) = 0;
}


//======================================================================
// MinecartLocoMotion::interpolOnSlopeTrack(Ogre::Vector3 &,WCoord const&)
// address: 0x002A6970   size: 0xD6 (214 bytes)
//======================================================================
int __fastcall MinecartLocoMotion::interpolOnSlopeTrack(MinecartLocoMotion *this, Ogre::Vector3 *a2, const WCoord *a3)
{
  int v3; // r1
  int v4; // r3
  int v5; // r2
  BlockRailBase *v7; // r0
  int BlockID; // r0
  int v9; // r7
  int BlockData; // r6
  float v12; // r6
  float v13; // r0
  int v15; // [sp+Ch] [bp-28h] BYREF
  int v16; // [sp+10h] [bp-24h]
  int v17; // [sp+14h] [bp-20h]
  int v18; // [sp+18h] [bp-1Ch] BYREF
  int v19; // [sp+1Ch] [bp-18h]
  int v20; // [sp+20h] [bp-14h]
  _DWORD v21[4]; // [sp+24h] [bp-10h] BYREF

  v3 = *(_DWORD *)a3;
  v4 = *((_DWORD *)a3 + 1);
  v5 = *((_DWORD *)a3 + 2);
  v15 = v3;
  v16 = v4;
  v17 = v5;
  CoordDivBlock((const WCoord *)&v18, &v15);
  v21[1] = v19 + dword_51665C;
  v7 = *((BlockRailBase **)this + 27);
  v21[0] = v18 + dword_516658;
  v21[2] = v20 + dword_516660;
  if ( BlockRailBase::isRailBlockAt(v7, (World *)v21, (const WCoord *)(v20 + dword_516660)) )
    --v19;
  BlockID = World::getBlockID(*((World **)this + 27), (const WCoord *)&v18);
  v9 = BlockID;
  if ( BlockID != 725 && BlockID != 729 )
    return 0;
  BlockData = World::getBlockData(*((World **)this + 27), (const WCoord *)&v18);
  v16 = 100 * v19;
  if ( *(_BYTE *)(BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, v9)
                + 48) != 0 )
    BlockData &= 7u;
  if ( (unsigned int)(BlockData - 2) <= 3 )
    v16 = 100 * (v19 + 1);
  sub_2A63AC(&v15, &v18, BlockData, 1);
  v12 = (float)v16;
  v13 = (float)v17;
  *(float *)a2 = (float)v15;
  *((float *)a2 + 1) = v12;
  *((float *)a2 + 2) = v13;
  return 1;
}


//======================================================================
// MinecartLocoMotion::func_70495_a(Ogre::Vector3 &,WCoord const&,float)
// address: 0x002A6A58   size: 0x1BE (446 bytes)
//======================================================================
int __fastcall MinecartLocoMotion::func_70495_a(
        MinecartLocoMotion *this,
        Ogre::Vector3 *a2,
        const WCoord *a3,
        float a4)
{
  int v4; // r1
  int v5; // r3
  int v6; // r2
  BlockRailBase *v8; // r0
  int BlockID; // r0
  int v10; // r7
  int v12; // r3
  int *v13; // r7
  float v14; // r6
  float v15; // r1
  int v16; // r7
  int v17; // r6
  unsigned int v18; // r0
  unsigned int v19; // r0
  int v20; // r5
  unsigned int v21; // r0
  unsigned int v22; // r0
  int BlockData; // [sp+0h] [bp-54h]
  int v24; // [sp+4h] [bp-50h]
  float v25; // [sp+8h] [bp-4Ch]
  int v26; // [sp+Ch] [bp-48h]
  int v27; // [sp+10h] [bp-44h]
  int v28; // [sp+14h] [bp-40h]
  int v29; // [sp+18h] [bp-3Ch]
  float v30; // [sp+1Ch] [bp-38h]
  int v33; // [sp+2Ch] [bp-28h] BYREF
  int v34; // [sp+30h] [bp-24h]
  int v35; // [sp+34h] [bp-20h]
  int v36; // [sp+38h] [bp-1Ch] BYREF
  int v37; // [sp+3Ch] [bp-18h]
  int v38; // [sp+40h] [bp-14h]
  _DWORD v39[4]; // [sp+44h] [bp-10h] BYREF

  v4 = *(_DWORD *)a3;
  v5 = *((_DWORD *)a3 + 1);
  v6 = *((_DWORD *)a3 + 2);
  v33 = v4;
  v34 = v5;
  v35 = v6;
  CoordDivBlock((const WCoord *)&v36, &v33);
  v39[1] = v37 + dword_51665C;
  v8 = *((BlockRailBase **)this + 27);
  v39[0] = v36 + dword_516658;
  v39[2] = v38 + dword_516660;
  if ( BlockRailBase::isRailBlockAt(v8, (World *)v39, (const WCoord *)(v38 + dword_516660)) )
    --v37;
  BlockID = World::getBlockID(*((World **)this + 27), (const WCoord *)&v36);
  v10 = BlockID;
  if ( BlockID != 725 && BlockID != 729 )
    return 0;
  BlockData = World::getBlockData(*((World **)this + 27), (const WCoord *)&v36);
  if ( *(_BYTE *)(BlockMaterialMgr::getMaterial(
                    (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                    v10)
                + 48) != 0 )
    BlockData &= 7u;
  v12 = 100 * v37;
  if ( (unsigned int)(BlockData - 2) <= 3 )
    v12 += 100;
  v34 = v12;
  v13 = &dword_445FC8[6 * BlockData];
  v26 = v13[3];
  v27 = *v13;
  v14 = (float)(v26 - *v13);
  v28 = v13[5];
  v29 = v13[2];
  v25 = (float)(v28 - v29);
  v30 = Ogre::Sqrt(COERCE_OGRE_((float)(v14 * v14) + (float)(v25 * v25)), v15);
  v24 = (int)(float)((float)v33 + (float)((float)(v14 / v30) * a4));
  v33 = v24;
  v16 = v13[1];
  v17 = (int)(float)((float)v35 + (float)((float)(v25 / v30) * a4));
  v35 = v17;
  if ( v16 != 0 && (v18 = CoordDivBlock(v24)) - v36 == v27 && (v19 = CoordDivBlock(v17)) - v38 == v29 )
  {
    v34 += 100 * v16;
  }
  else
  {
    v20 = dword_445FC8[6 * BlockData + 4];
    if ( v20 != 0 )
    {
      v21 = CoordDivBlock(v24);
      if ( v21 - v36 == v26 )
      {
        v22 = CoordDivBlock(v17);
        if ( v22 - v38 == v28 )
          v34 += 100 * v20;
      }
    }
  }
  return MinecartLocoMotion::interpolOnSlopeTrack(this, a2, (const WCoord *)&v33);
}


//======================================================================
// MinecartLocoMotion::onActivatorRailPass(WCoord const&,bool)
// address: 0x002A6C30   size: 0x2 (2 bytes)
//======================================================================
void MinecartLocoMotion::onActivatorRailPass()
{
  ;
}


//======================================================================
// MinecartLocoMotion::updateNotOnTrack(float)
// address: 0x002A6C34   size: 0x7E (126 bytes)
//======================================================================
float __fastcall MinecartLocoMotion::updateNotOnTrack(MinecartLocoMotion *this, float a2)
{
  float v2; // r6
  unsigned int v4; // r3
  float v5; // r7
  float result; // r0

  LODWORD(v2) = LODWORD(a2) + 0x80000000;
  v4 = LODWORD(a2) + 0x80000000;
  if ( *((float *)this + 18) >= COERCE_FLOAT(LODWORD(a2) + 0x80000000) )
  {
    v4 = LODWORD(a2);
    if ( *((float *)this + 18) <= a2 )
      v4 = *((_DWORD *)this + 18);
  }
  v5 = *((float *)this + 20);
  *((_DWORD *)this + 18) = v4;
  if ( v5 >= v2 )
  {
    v2 = a2;
    if ( v5 <= a2 )
      v2 = v5;
  }
  *((float *)this + 20) = v2;
  if ( *((_BYTE *)this + 124) != 0 )
    Ogre::Vector3::operator*=((float *)this + 18, 0.5);
  result = COERCE_FLOAT(ActorLocoMotion::doMoveStep(this, (MinecartLocoMotion *)((char *)this + 72)));
  if ( *((_BYTE *)this + 124) == 0 )
    return Ogre::Vector3::operator*=((float *)this + 18, 0.95);
  return result;
}


//======================================================================
// MinecartLocoMotion::applyDrag(void)
// address: 0x002A6CB8   size: 0x44 (68 bytes)
//======================================================================
float __fastcall MinecartLocoMotion::applyDrag(MinecartLocoMotion *this)
{
  int v1; // r3
  float v3; // r0
  float v4; // r1
  float result; // r0

  v1 = *((_DWORD *)this + 28);
  v3 = *((float *)this + 18);
  if ( *(_DWORD *)(v1 + 84) != 0 )
  {
    *((float *)this + 18) = v3 * 0.997;
    v4 = 0.997;
  }
  else
  {
    *((float *)this + 18) = v3 * 0.96;
    v4 = 0.96;
  }
  *((float *)this + 19) = *((float *)this + 19) * 0.0;
  result = *((float *)this + 20) * v4;
  *((float *)this + 20) = result;
  return result;
}


//======================================================================
// MinecartLocoMotion::updateOnTrack(WCoord const&,float,float,int,int)
// address: 0x002A6D04   size: 0x52A (1322 bytes)
//======================================================================
float __fastcall MinecartLocoMotion::updateOnTrack(
        MinecartLocoMotion *this,
        const WCoord *a2,
        float a3,
        float a4,
        int a5,
        int a6)
{
  int v9; // r0
  float v10; // r0
  float v11; // r0
  float v12; // r0
  int *v13; // r5
  float v14; // r4
  float v15; // r1
  float v16; // r5
  int v17; // r3
  int v18; // r3
  const void *v19; // r0
  float *v20; // r0
  double v21; // r4
  double v22; // r4
  float v23; // r0
  float v24; // r0
  float *v25; // r0
  float v26; // r1
  float v27; // r5
  float v28; // r4
  int v29; // r4
  int v30; // r4
  int v31; // r4
  float v32; // r5
  float v33; // r4
  float v34; // r0
  float result; // r0
  float v36; // r5
  float v37; // r0
  World *v38; // r4
  float v39; // r5
  float v40; // r4
  int v41; // r3
  int v42; // r3
  float v43; // [sp+4h] [bp-58h]
  float v44; // [sp+4h] [bp-58h]
  float v45; // [sp+4h] [bp-58h]
  float v46; // [sp+4h] [bp-58h]
  unsigned int v47; // [sp+4h] [bp-58h]
  Ogre::Vector3 *v48; // [sp+8h] [bp-54h]
  float v50; // [sp+10h] [bp-4Ch]
  int v51; // [sp+10h] [bp-4Ch]
  _BOOL4 v52; // [sp+14h] [bp-48h]
  float v53; // [sp+14h] [bp-48h]
  float v54; // [sp+18h] [bp-44h]
  double v55; // [sp+18h] [bp-44h]
  unsigned int v56; // [sp+18h] [bp-44h]
  _BOOL4 v57; // [sp+20h] [bp-3Ch]
  int *v58; // [sp+24h] [bp-38h]
  int v59; // [sp+28h] [bp-34h]
  int v60; // [sp+2Ch] [bp-30h]
  int v61; // [sp+30h] [bp-2Ch]
  int v62; // [sp+34h] [bp-28h]
  int v63; // [sp+38h] [bp-24h]
  _BYTE v64[4]; // [sp+40h] [bp-1Ch] BYREF
  float v65; // [sp+44h] [bp-18h]
  unsigned int v66; // [sp+4Ch] [bp-10h] BYREF
  float v67; // [sp+50h] [bp-Ch]
  float v68; // [sp+54h] [bp-8h]

  v58 = (int *)((char *)this + 32);
  *((_DWORD *)this + 30) = 0;
  v9 = MinecartLocoMotion::interpolOnSlopeTrack(this, (Ogre::Vector3 *)v64, (MinecartLocoMotion *)((char *)this + 32));
  *((_DWORD *)this + 9) = 100 * *((_DWORD *)a2 + 1);
  v63 = v9;
  if ( a5 == 729 )
  {
    v57 = (a6 & 8) != 0;
    v52 = (a6 & 8) == 0;
  }
  else
  {
    v52 = false;
    v57 = false;
  }
  if ( *(_BYTE *)(BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, a5)
                + 48) != 0 )
    a6 &= 7u;
  if ( (unsigned int)(a6 - 2) <= 3 )
  {
    *((_DWORD *)this + 9) = 100 * (*((_DWORD *)a2 + 1) + 1);
    if ( a6 == 2 )
    {
      v10 = *((float *)this + 18) - a4;
LABEL_11:
      *((float *)this + 18) = v10;
      goto LABEL_16;
    }
    if ( a6 == 3 )
    {
      v10 = *((float *)this + 18) + a4;
      goto LABEL_11;
    }
    v11 = *((float *)this + 20);
    if ( a6 == 4 )
      v12 = v11 + a4;
    else
      v12 = v11 - a4;
    *((float *)this + 20) = v12;
  }
LABEL_16:
  v48 = (MinecartLocoMotion *)((char *)this + 72);
  v13 = &dword_445FC8[6 * a6];
  v59 = v13[3];
  v60 = *v13;
  v14 = (float)(v59 - *v13);
  v61 = v13[5];
  v62 = v13[2];
  v43 = (float)(v61 - v62);
  v54 = Ogre::Sqrt(COERCE_OGRE_((float)(v14 * v14) + (float)(v43 * v43)), v15);
  if ( (float)((float)(v14 * *((float *)this + 18)) + (float)(v43 * *((float *)this + 20))) < 0.0 )
  {
    LODWORD(v14) += 0x80000000;
    LODWORD(v43) += 0x80000000;
  }
  v16 = MotionLengthXZ(v48);
  if ( v16 > 200.0 )
    v16 = 200.0;
  v50 = (float)(v16 * v14) / v54;
  *((float *)this + 18) = v50;
  v17 = *((_DWORD *)this + 28);
  *((float *)this + 20) = (float)(v16 * v43) / v54;
  v44 = (float)(v16 * v43) / v54;
  v18 = *(_DWORD *)(v17 + 84);
  if ( v18 != 0
    && (v19 = *(const void **)(v18 + 68)) != nullptr
    && (v20 = (float *)_dynamic_cast(
                         v19,
                         (const struct __class_type_info *)&`typeinfo for'ActorLocoMotion,
                         (const struct __class_type_info *)&`typeinfo for'LivingLocoMotion,
                         0)) != nullptr
    && v20[37] > 0.0
    && (v21 = (float)(v20[1] * 0.017453),
        v55 = j_sin(v21),
        v22 = j_cos(v21),
        (float)((float)(v50 * v50) + (float)(v44 * v44)) < 100.0) )
  {
    v23 = v55;
    *((float *)this + 18) = v50 + (float)(COERCE_FLOAT(LODWORD(v23) + 0x80000000) * 10.0);
    v24 = v22;
    *((float *)this + 20) = v44 + (float)(COERCE_FLOAT(LODWORD(v24) + 0x80000000) * 10.0);
  }
  else if ( v52 )
  {
    if ( MotionLengthXZ(v48) >= 3.0 )
    {
      v25 = (float *)((char *)this + 72);
      v26 = 0.5;
    }
    else
    {
      v25 = (float *)((char *)this + 72);
      v26 = 0.0;
    }
    Ogre::Vector3::operator*=(v25, v26);
  }
  sub_2A63AC(v58, a2, a6, 0);
  ActorLocoMotion::setPosition(
    this,
    *((_DWORD *)this + 8),
    *((_DWORD *)this + 9) + *((_DWORD *)this + 7),
    *((_DWORD *)this + 10));
  v53 = *((float *)this + 20);
  v51 = *((_DWORD *)this + 18);
  if ( *(_DWORD *)(*((_DWORD *)this + 28) + 84) != 0 )
  {
    v27 = *((float *)this + 18) * 0.75;
    v45 = v53 * 0.75;
  }
  else
  {
    v27 = *((float *)this + 18);
    v45 = *((float *)this + 20);
  }
  LODWORD(v28) = LODWORD(a3) + 0x80000000;
  v56 = LODWORD(a3) + 0x80000000;
  if ( v27 >= COERCE_FLOAT(LODWORD(a3) + 0x80000000) )
  {
    v56 = LODWORD(a3);
    if ( v27 <= a3 )
      v56 = LODWORD(v27);
  }
  if ( v45 >= v28 )
  {
    v28 = a3;
    if ( v45 <= a3 )
      v28 = v45;
  }
  v67 = 0.0;
  v68 = v28;
  v66 = v56;
  ActorLocoMotion::doMoveStep(this, (const Ogre::Vector3 *)&v66);
  *((_DWORD *)this + 18) = v51;
  *((float *)this + 20) = v53;
  v29 = dword_445FC8[6 * a6 + 1];
  if ( v29 != 0
    && CoordDivBlock(*((_DWORD *)this + 8)) - *(_DWORD *)a2 == v60
    && CoordDivBlock(*((_DWORD *)this + 10)) - *((_DWORD *)a2 + 2) == v62 )
  {
    v30 = *((_DWORD *)this + 9) + 100 * v29;
LABEL_71:
    *((_DWORD *)this + 9) = v30;
    goto LABEL_48;
  }
  v31 = dword_445FC8[6 * a6 + 4];
  if ( v31 != 0
    && CoordDivBlock(*((_DWORD *)this + 8)) - *(_DWORD *)a2 == v59
    && CoordDivBlock(*((_DWORD *)this + 10)) - *((_DWORD *)a2 + 2) == v61 )
  {
    v30 = *((_DWORD *)this + 9) + 100 * v31;
    goto LABEL_71;
  }
LABEL_48:
  MinecartLocoMotion::applyDrag(this);
  if ( MinecartLocoMotion::interpolOnSlopeTrack(this, (Ogre::Vector3 *)&v66, (const WCoord *)v58) != 0 && v63 != 0 )
  {
    v32 = v67;
    v46 = v65;
    v33 = MotionLengthXZ(v48);
    if ( v33 > 0.0 )
    {
      v34 = v33 + (float)((float)(v46 - v32) * 0.05);
      *((float *)this + 18) = (float)(*((float *)this + 18) / v33) * v34;
      *((float *)this + 20) = (float)(*((float *)this + 20) / v33) * v34;
    }
    ActorLocoMotion::setPosition(this, *((_DWORD *)this + 8), (int)v67, *((_DWORD *)this + 10));
  }
  v47 = CoordDivBlock(*((_DWORD *)this + 8));
  result = COERCE_FLOAT(CoordDivBlock(*((_DWORD *)this + 10)));
  v36 = result;
  if ( v47 != *(_DWORD *)a2 || LODWORD(result) != *((_DWORD *)a2 + 2) )
  {
    v37 = MotionLengthXZ(v48);
    *((float *)this + 18) = v37 * (float)(int)(v47 - *(_DWORD *)a2);
    result = v37 * (float)(LODWORD(v36) - *((_DWORD *)a2 + 2));
    *((float *)this + 20) = result;
  }
  if ( v57 )
  {
    v38 = *((World **)this + 27);
    v39 = MotionLengthXZ(v48);
    LODWORD(result) = v39 > 1.0;
    if ( v39 > 1.0 )
    {
      v40 = *((float *)this + 20);
      *((float *)this + 18) = *((float *)this + 18) + (float)((float)(*((float *)this + 18) / v39) * 12.0);
      result = v40 + (float)((float)(v40 / v39) * 12.0);
      *((float *)this + 20) = result;
      return result;
    }
    if ( a6 == 1 )
    {
      result = COERCE_FLOAT(World::isBlockNormalCube(v38, *(_DWORD *)a2 - 1, *((_DWORD *)a2 + 1), *((_DWORD *)a2 + 2)));
      if ( result == 0.0 )
      {
        result = COERCE_FLOAT(World::isBlockNormalCube(v38, *(_DWORD *)a2 + 1, *((_DWORD *)a2 + 1), *((_DWORD *)a2 + 2)));
        if ( result == 0.0 )
          return result;
        v41 = -1073741824;
      }
      else
      {
        v41 = 0x40000000;
      }
      *((_DWORD *)this + 18) = v41;
    }
    else
    {
      if ( a6 != 0 )
        return result;
      result = COERCE_FLOAT(World::isBlockNormalCube(v38, *(_DWORD *)a2, *((_DWORD *)a2 + 1), *((_DWORD *)a2 + 2) - 1));
      if ( result == 0.0 )
      {
        result = COERCE_FLOAT(World::isBlockNormalCube(v38, *(_DWORD *)a2, *((_DWORD *)a2 + 1), *((_DWORD *)a2 + 2) + 1));
        if ( result == 0.0 )
          return result;
        v42 = -1073741824;
      }
      else
      {
        v42 = 0x40000000;
      }
      *((_DWORD *)this + 20) = v42;
    }
  }
  return result;
}


//======================================================================
// MinecartLocoMotion::tick(void)
// address: 0x002A723C   size: 0x21A (538 bytes)
//======================================================================
void __fastcall MinecartLocoMotion::tick(MinecartLocoMotion *this)
{
  int v2; // r1
  int v3; // r0
  int v4; // r2
  int v5; // r3
  int v6; // r5
  float v7; // r0
  BlockRailBase *v8; // r0
  int BlockID; // r0
  int v10; // r7
  int v11; // r3
  int v12; // r1
  int v13; // r6
  __int64 v14; // r0
  float v15; // r6
  int v16; // r0
  unsigned int i; // r5
  int v18; // r6
  const void *v19; // r5
  ClientActor *v20; // r0
  int BlockData; // [sp+8h] [bp-3Ch]
  unsigned int v22; // [sp+8h] [bp-3Ch]
  int v23; // [sp+Ch] [bp-38h]
  int v24; // [sp+10h] [bp-34h] BYREF
  int v25; // [sp+14h] [bp-30h]
  int v26; // [sp+18h] [bp-2Ch]
  void *v27; // [sp+1Ch] [bp-28h] BYREF
  int v28; // [sp+20h] [bp-24h]
  int v29; // [sp+24h] [bp-20h]
  float v30; // [sp+28h] [bp-1Ch] BYREF
  int v31; // [sp+2Ch] [bp-18h]
  float v32; // [sp+30h] [bp-14h]
  int v33; // [sp+34h] [bp-10h]
  int v34; // [sp+3Ch] [bp-8h]

  v2 = *((_DWORD *)this + 2);
  v3 = *((_DWORD *)this + 1);
  v4 = *((_DWORD *)this + 8);
  v5 = *((_DWORD *)this + 9);
  v6 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 4) = v2;
  *((_DWORD *)this + 14) = v4;
  *((_DWORD *)this + 15) = v5;
  *((_DWORD *)this + 3) = v3;
  *((_DWORD *)this + 16) = v6;
  v7 = *((float *)this + 19);
  *((_DWORD *)this + 17) = 0;
  *((float *)this + 19) = v7 - 4.0;
  CoordDivBlock((const WCoord *)&v24, (int *)this + 8);
  v31 = v25 + dword_51665C;
  v8 = *((BlockRailBase **)this + 27);
  LODWORD(v30) = v24 + dword_516658;
  LODWORD(v32) = v26 + dword_516660;
  if ( BlockRailBase::isRailBlockAt(v8, (World *)&v30, (const WCoord *)(v26 + dword_516660)) )
    --v25;
  BlockID = World::getBlockID(*((World **)this + 27), (const WCoord *)&v24);
  v10 = BlockID;
  if ( BlockID == 725 || BlockID == 729 )
  {
    BlockData = World::getBlockData(*((World **)this + 27), (const WCoord *)&v24);
    MinecartLocoMotion::updateOnTrack(this, (const WCoord *)&v24, 40.0, 0.78125, v10, BlockData);
    if ( v10 == 728 )
      MinecartLocoMotion::onActivatorRailPass();
  }
  else
  {
    MinecartLocoMotion::updateNotOnTrack(this, 40.0);
  }
  v11 = *((_DWORD *)this + 14);
  v12 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 2) = 0;
  v13 = *((_DWORD *)this + 16) - *((_DWORD *)this + 10);
  if ( v11 != v12 || v13 != 0 )
  {
    v30 = (float)(v11 - v12);
    v31 = 0;
    v32 = (float)v13;
    HIDWORD(v14) = (char *)this + 8;
    LODWORD(v14) = (char *)this + 4;
    Direction2PitchYaw(v14, (const Ogre::Vector3 *)&v30);
    if ( *((_BYTE *)this + 160) != 0 )
      *((float *)this + 1) = *((float *)this + 1) + 180.0;
  }
  v15 = COERCE_FLOAT(WrapAngleTo180(*((float *)this + 1) - *((float *)this + 3)));
  if ( v15 < -170.0 || v15 >= 170.0 )
  {
    *((float *)this + 1) = *((float *)this + 1) + 180.0;
    *((_BYTE *)this + 160) ^= 1u;
  }
  *((_DWORD *)this + 1) = WrapAngleTo180(*((float *)this + 1));
  ActorLocoMotion::getCollideBox(this, (CollideAABB *)&v30);
  v16 = *((_DWORD *)this + 27);
  LODWORD(v30) -= 20;
  LODWORD(v32) -= 20;
  v33 += 40;
  v34 += 40;
  v27 = nullptr;
  v28 = 0;
  v29 = 0;
  World::getActorsInBoxExclude(v16, &v27, &v30, *((_DWORD *)this + 28));
  v23 = *((_DWORD *)this + 28);
  for ( i = 0; ; i = v22 + 1 )
  {
    v22 = i;
    v18 = *(_DWORD *)(v23 + 84);
    if ( i >= (v28 - (int)v27) >> 2 )
      break;
    v19 = *((const void **)v27 + i);
    if ( v19 != (const void *)v18
      && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v19 + 88))(*((_DWORD *)v27 + v22)) != 0
      && _dynamic_cast(
           v19,
           (const struct __class_type_info *)&`typeinfo for'ClientActor,
           (const struct __class_type_info *)&`typeinfo for'ActorMinecart,
           0) != nullptr )
    {
      (*(void (__fastcall **)(const void *, _DWORD))(*(_DWORD *)v19 + 36))(v19, *((_DWORD *)this + 28));
    }
  }
  if ( v18 != 0 && *(int *)(v18 + 24) >= 0 )
  {
    v20 = *(ClientActor **)(v18 + 80);
    if ( v20 == *((ClientActor **)this + 28) )
    {
      if ( v20 != nullptr )
        ClientActor::release(v20);
      *(_DWORD *)(v18 + 80) = 0;
    }
    *(_DWORD *)(v23 + 84) = 0;
  }
  if ( v27 != nullptr )
    operator delete(v27);
}


//======================================================================
// MinecartLocoMotion::update(float)
// address: 0x002A7584   size: 0x19C (412 bytes)
//======================================================================
int __fastcall MinecartLocoMotion::update(MinecartLocoMotion *this, float a2)
{
  float v3; // r6
  float v4; // r0
  float v5; // r5
  float v6; // r0
  float v7; // r7
  int result; // r0
  __int64 v9; // r0
  float *v10; // r4
  float v11; // [sp+0h] [bp-54h]
  float v12; // [sp+4h] [bp-50h]
  float v13; // [sp+8h] [bp-4Ch]
  _DWORD v14[3]; // [sp+14h] [bp-40h] BYREF
  float v15[3]; // [sp+20h] [bp-34h] BYREF
  float v16; // [sp+2Ch] [bp-28h] BYREF
  float v17; // [sp+30h] [bp-24h]
  float v18; // [sp+34h] [bp-20h]
  float v19; // [sp+38h] [bp-1Ch] BYREF
  float v20; // [sp+3Ch] [bp-18h]
  float v21; // [sp+40h] [bp-14h]
  float v22; // [sp+44h] [bp-10h] BYREF
  float v23; // [sp+48h] [bp-Ch]
  float v24; // [sp+4Ch] [bp-8h]

  ActorLocoMotion::update(this, a2);
  v3 = (float)*((int *)this + 15);
  v4 = *((float *)this + 17) / 0.05;
  v5 = v4;
  v13 = (float)*((int *)this + 14) + (float)((float)((float)*((int *)this + 8) - (float)*((int *)this + 14)) * v4);
  v6 = v3 + (float)((float)((float)*((int *)this + 9) - v3) * v4);
  v7 = v3 + (float)((float)((float)*((int *)this + 9) - v3) * v5);
  v12 = (float)*((int *)this + 16) + (float)((float)((float)*((int *)this + 10) - (float)*((int *)this + 16)) * v5);
  v14[0] = (int)v13;
  v14[1] = (int)v6;
  v14[2] = (int)v12;
  result = MinecartLocoMotion::interpolOnSlopeTrack(this, (Ogre::Vector3 *)v15, (const WCoord *)v14);
  if ( result != 0 )
  {
    if ( MinecartLocoMotion::func_70495_a(this, (Ogre::Vector3 *)&v16, (const WCoord *)v14, 30.0) == 0 )
    {
      v16 = v15[0];
      v17 = v15[1];
      v18 = v15[2];
    }
    if ( MinecartLocoMotion::func_70495_a(this, (Ogre::Vector3 *)&v19, (const WCoord *)v14, -30.0) == 0 )
    {
      v19 = v15[0];
      v20 = v15[1];
      v21 = v15[2];
    }
    v13 = v15[0];
    v12 = v15[2];
    v7 = (float)(v17 + v17) * 0.5;
    v22 = v19 - v16;
    v24 = v21 - v18;
    v23 = v20 - v17;
    result = Ogre::Vector3::length((Ogre::Vector3 *)&v22) > 0.0;
    if ( result != 0 )
    {
      v11 = Ogre::Vector3::length((Ogre::Vector3 *)&v22);
      if ( v11 <= 0.00001 )
      {
        v22 = 0.0;
        v23 = 0.0;
        v24 = 0.0;
      }
      else
      {
        v22 = v22 * (float)(1.0 / v11);
        v23 = v23 * (float)(1.0 / v11);
        v24 = v24 * (float)(1.0 / v11);
      }
      LODWORD(v9) = (char *)this + 4;
      HIDWORD(v9) = (char *)this + 8;
      result = Direction2PitchYaw(v9, (const Ogre::Vector3 *)&v22);
    }
  }
  v10 = (float *)((char *)this + 148);
  *v10 = v13;
  v10[1] = v7;
  v10[2] = v12;
  return result;
}

