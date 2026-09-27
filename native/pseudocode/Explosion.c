// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Explosion

//======================================================================
// Explosion::Explosion(World *,ClientActor *,int,WCoord const&,bool,bool)
// address: 0x002BC744   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN9ExplosionC1EP5WorldP11ClientActoriRK6WCoordbb'
void __fastcall Explosion::Explosion(
        Explosion *this,
        World *a2,
        ClientActor *a3,
        int a4,
        const WCoord *a5,
        bool a6,
        bool a7)
{
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = a3;
  *((_DWORD *)this + 2) = *(_DWORD *)a5;
  *((_DWORD *)this + 3) = *((_DWORD *)a5 + 1);
  *((_DWORD *)this + 4) = *((_DWORD *)a5 + 2);
  *((_BYTE *)this + 24) = a7;
  *((float *)this + 5) = (float)a4;
  *((_BYTE *)this + 25) = a6;
}


//======================================================================
// Explosion::doExplosionB(bool)
// address: 0x002BC77C   size: 0x270 (624 bytes)
//======================================================================
float __fastcall Explosion::doExplosionB(World **this, int a2)
{
  float v3; // r5
  float v4; // r0
  EffectParticle *v5; // r5
  float result; // r0
  unsigned int v7; // r6
  int v8; // r3
  int v9; // r1
  int v10; // r3
  World *v11; // r0
  unsigned int v12; // r6
  unsigned int v13; // r0
  float v14; // r6
  float v15; // r5
  int Material; // r5
  BlockTNT *v17; // r0
  const WCoord *v18; // r5
  int v19; // r3
  int v20; // r12
  int v21; // r2
  World *v22; // r0
  int BlockID; // r0
  int v24; // r0
  EffectManager *v25; // [sp+Ch] [bp-38h]
  EffectManager *v26; // [sp+Ch] [bp-38h]
  unsigned int v27; // [sp+10h] [bp-34h]
  unsigned int i; // [sp+14h] [bp-30h]
  int v29; // [sp+18h] [bp-2Ch]
  int v30; // [sp+1Ch] [bp-28h]
  int BlockData; // [sp+1Ch] [bp-28h]
  int v32; // [sp+20h] [bp-24h]
  int v34; // [sp+28h] [bp-1Ch] BYREF
  int v35; // [sp+2Ch] [bp-18h]
  int v36; // [sp+30h] [bp-14h]
  float v37[4]; // [sp+34h] [bp-10h] BYREF

  v3 = GenRandomFloat();
  v4 = GenRandomFloat();
  v25 = (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton;
  EffectManager::playSound(
    (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton,
    (const WCoord *)(this + 2),
    "random.explode",
    4.0,
    (float)((float)((float)(v3 - v4) * 0.2) + 1.0) * 0.7,
    true);
  v5 = (EffectParticle *)operator new(0x14u);
  EffectParticle::EffectParticle(v5, *this, (Ogre::FixedString *)"particles/1005.ent", (const WCoord *)(this + 2), 100);
  result = COERCE_FLOAT(EffectManager::addEffect(v25, v5));
  if ( *((_BYTE *)this + 24) != 0 )
  {
    for ( i = 0; ; ++i )
    {
      v8 = (int)*(this + 7);
      if ( i >= -1431655765 * (((int)*(this + 8) - v8) >> 2) )
        break;
      v9 = *(_DWORD *)(12 * i + v8);
      v10 = v8 + 12 * i;
      v11 = *this;
      v34 = v9;
      v35 = *(_DWORD *)(v10 + 4);
      v36 = *(_DWORD *)(v10 + 8);
      result = COERCE_FLOAT(World::getBlockID(v11, (const WCoord *)&v34));
      v26 = (EffectManager *)LODWORD(result);
      if ( a2 != 0 )
      {
        v30 = 100 * v34;
        v29 = 100 * v35;
        v32 = 100 * v36;
        v27 = GenRandomInt(0x64u);
        v12 = GenRandomInt(0x64u);
        v13 = GenRandomInt(0x64u);
        v14 = (float)(int)(v29 + v12 - (_DWORD)*(this + 3));
        v15 = (float)(int)(v32 + v13 - (_DWORD)*(this + 4));
        v37[0] = (float)(int)(v30 + v27 - (_DWORD)*(this + 2));
        v37[1] = v14;
        v37[2] = v15;
        Ogre::Vector3::length((Ogre::Vector3 *)v37);
        GenRandomFloat();
        result = GenRandomFloat();
      }
      if ( (int)v26 > 0 )
      {
        if ( v26 != (EffectManager *)((char *)&stru_338.st_size + 2) )
        {
          Material = BlockMaterialMgr::getMaterial(
                       (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                       (int)v26);
          BlockData = World::getBlockData(*this, (const WCoord *)&v34);
          (*(void (__fastcall **)(int, World *, int *, int, int, _DWORD))(*(_DWORD *)Material + 180))(
            Material,
            *this,
            &v34,
            BlockData,
            1,
            100.0 / *((float *)this + 5));
        }
        result = COERCE_FLOAT(World::setBlockAll(*this, (const WCoord *)&v34, 0, 0, 3));
        if ( v26 == (EffectManager *)((char *)&stru_338.st_size + 2) )
        {
          v17 = (BlockTNT *)BlockMaterialMgr::getMaterial(
                              (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                              834);
          result = COERCE_FLOAT(BlockTNT::onBlockDestroyedByExplosion(v17, *this, (const WCoord *)&v34, (Explosion *)this));
        }
      }
    }
  }
  v7 = 0;
  if ( *((_BYTE *)this + 25) != 0 )
  {
    while ( 1 )
    {
      v19 = (int)*(this + 7);
      if ( v7 >= -1431655765 * (((int)*(this + 8) - v19) >> 2) )
        break;
      v18 = (const WCoord *)(v19 + 12 * v7);
      result = COERCE_FLOAT(World::getBlockID(*this, v18));
      if ( result == 0.0 )
      {
        v20 = *((_DWORD *)v18 + 2) + dword_516660;
        v21 = *(_DWORD *)v18;
        LODWORD(v37[1]) = *((_DWORD *)v18 + 1) + dword_51665C;
        LODWORD(v37[0]) = v21 + dword_516658;
        v22 = *this;
        LODWORD(v37[2]) = v20;
        BlockID = World::getBlockID(v22, (const WCoord *)v37);
        v24 = BlockMaterialMgr::getMaterial(
                (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                BlockID);
        result = COERCE_FLOAT((*(int (__fastcall **)(int))(*(_DWORD *)v24 + 60))(v24));
        if ( result != 0.0 )
        {
          result = COERCE_FLOAT(GenRandomInt(3u));
          if ( result == 0.0 )
            result = COERCE_FLOAT(World::setBlockAll(*this, v18, 500, 0, 3));
        }
      }
      ++v7;
    }
  }
  return result;
}


//======================================================================
// Explosion::getExploder(void)
// address: 0x002BCA20   size: 0x42 (66 bytes)
//======================================================================
const void *__fastcall Explosion::getExploder(Explosion *this)
{
  const void *v1; // r4
  _DWORD *v2; // r0

  v1 = *((const void **)this + 1);
  if ( v1 != nullptr )
  {
    v2 = _dynamic_cast(
           *((const void **)this + 1),
           (const struct __class_type_info *)&`typeinfo for'ClientActor,
           (const struct __class_type_info *)&`typeinfo for'ActorTNTPrimed,
           0);
    if ( v2 != nullptr )
      return (const void *)v2[44];
    else
      return _dynamic_cast(
               v1,
               (const struct __class_type_info *)&`typeinfo for'ClientActor,
               (const struct __class_type_info *)&`typeinfo for'ActorLiving,
               0) != nullptr
           ? v1
           : nullptr;
  }
  return v1;
}


//======================================================================
// Explosion::doExplosionA(void)
// address: 0x002BCC2C   size: 0x584 (1412 bytes)
//======================================================================
_DWORD *__fastcall Explosion::doExplosionA(Explosion *this)
{
  int j; // r5
  float v3; // r7
  float v4; // r4
  int v5; // r0
  int v6; // r2
  int v7; // r4
  int v8; // r1
  int BlockID; // r0
  int v10; // r7
  int v11; // r0
  int m; // r1
  _DWORD *v13; // r0
  _DWORD *v14; // r4
  _DWORD *v15; // r3
  float v16; // r0
  int v17; // r5
  int v18; // r0
  int v19; // r3
  void *v20; // r0
  int v21; // r7
  int v22; // r1
  float v23; // r5
  float v24; // r4
  int v25; // r5
  int v26; // r4
  int v27; // r2
  float v28; // r0
  float v29; // r5
  float *v30; // r4
  float v31; // r7
  int k; // [sp+Ch] [bp-C8h]
  int v34; // [sp+Ch] [bp-C8h]
  int v35; // [sp+Ch] [bp-C8h]
  float v36; // [sp+Ch] [bp-C8h]
  int v37; // [sp+10h] [bp-C4h]
  int v38; // [sp+10h] [bp-C4h]
  int i; // [sp+14h] [bp-C0h]
  int v40; // [sp+14h] [bp-C0h]
  unsigned int n; // [sp+14h] [bp-C0h]
  int v42; // [sp+18h] [bp-BCh]
  int v43; // [sp+1Ch] [bp-B8h]
  int v44; // [sp+1Ch] [bp-B8h]
  int v45; // [sp+20h] [bp-B4h]
  int v46; // [sp+28h] [bp-ACh]
  int v47; // [sp+2Ch] [bp-A8h]
  int v48; // [sp+30h] [bp-A4h]
  int v49; // [sp+34h] [bp-A0h]
  float v50; // [sp+38h] [bp-9Ch]
  int v51; // [sp+44h] [bp-90h]
  int v52; // [sp+48h] [bp-8Ch]
  int v53; // [sp+4Ch] [bp-88h]
  _BYTE v54[12]; // [sp+50h] [bp-84h] BYREF
  _BYTE v55[12]; // [sp+5Ch] [bp-78h] BYREF
  void *v56; // [sp+68h] [bp-6Ch] BYREF
  int v57; // [sp+6Ch] [bp-68h]
  int v58; // [sp+70h] [bp-64h]
  float v59; // [sp+74h] [bp-60h] BYREF
  float v60; // [sp+78h] [bp-5Ch]
  float v61; // [sp+7Ch] [bp-58h]
  float v62; // [sp+80h] [bp-54h] BYREF
  float v63; // [sp+84h] [bp-50h]
  float v64; // [sp+88h] [bp-4Ch]
  int v65; // [sp+8Ch] [bp-48h] BYREF
  void *v66; // [sp+90h] [bp-44h]
  int v67; // [sp+94h] [bp-40h]
  int v68; // [sp+98h] [bp-3Ch]
  int v69; // [sp+9Ch] [bp-38h] BYREF
  int v70; // [sp+A0h] [bp-34h]
  int v71; // [sp+A4h] [bp-30h]
  int v72; // [sp+A8h] [bp-2Ch]
  int v73; // [sp+ACh] [bp-28h]
  int v74; // [sp+B0h] [bp-24h]
  int v75; // [sp+B4h] [bp-20h] BYREF
  int v76; // [sp+B8h] [bp-1Ch]
  int v77; // [sp+BCh] [bp-18h]
  float v78; // [sp+C0h] [bp-14h] BYREF
  float v79; // [sp+C4h] [bp-10h]
  float v80; // [sp+C8h] [bp-Ch]
  float v81; // [sp+CCh] [bp-8h]

  v52 = *((_DWORD *)this + 5);
  v67 = 517;
  v68 = 0;
  v66 = (void *)operator new[](0x814u);
  j_memset(v66, 0, 0x814u);
  for ( i = 0; i != 16; ++i )
  {
    for ( j = 0; j != 16; ++j )
    {
      for ( k = 0; k != 16; ++k )
      {
        if ( i == 0 || i == 15 || j == 0 || j == 15 || k == 0 || k == 15 )
        {
          v62 = (float)((float)i * 0.13333) - 1.0;
          v63 = (float)((float)j * 0.13333) - 1.0;
          v64 = (float)((float)k * 0.13333) - 1.0;
          v3 = Ogre::Vector3::length((Ogre::Vector3 *)&v62);
          if ( v3 <= 0.00001 )
          {
            v62 = 0.0;
            v63 = 0.0;
            v64 = 0.0;
          }
          else
          {
            v62 = v62 * (float)(1.0 / v3);
            v63 = v63 * (float)(1.0 / v3);
            v64 = v64 * (float)(1.0 / v3);
          }
          v4 = *((float *)this + 5);
          v5 = (int)(float)(v4 * (float)((float)(GenRandomFloat() * 0.6) + 0.7));
          v6 = *((_DWORD *)this + 3);
          v7 = v5;
          v69 = *((_DWORD *)this + 2);
          v8 = *((_DWORD *)this + 4);
          v70 = v6;
          v71 = v8;
          while ( v7 > 0 )
          {
            CoordDivBlock((const WCoord *)&v75, &v69);
            BlockID = World::getBlockID(*(World **)this, (const WCoord *)&v75);
            v10 = BlockID;
            if ( BlockID <= 0
              || (v7 -= (int)(float)((float)((float)((float)*(int *)(DefManager::getBlockDef(
                                                                       (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton,
                                                                       BlockID)
                                                                   + 32)
                                                   / 5.0)
                                           + 0.3)
                                   * 30.0),
                  v7 > 0) )
            {
              v11 = *((_DWORD *)this + 1);
              if ( v11 == 0
                || (*(int (__fastcall **)(int, Explosion *, _DWORD, int *, int, int))(*(_DWORD *)v11 + 96))(
                     v11,
                     this,
                     *(_DWORD *)this,
                     &v75,
                     v10,
                     v7) != 0 )
              {
                *((_BYTE *)Ogre::HashTable<WCoord,bool,WCoordHashCoder>::insert(&v65, &v75) + 16) = 1;
              }
            }
            v69 += (int)(float)(v62 * 30.0);
            v7 -= 22;
            v70 += (int)(float)(v63 * 30.0);
            v71 += (int)(float)(v64 * 30.0);
          }
        }
      }
    }
  }
  for ( m = 0; ; m = (int)v14 )
  {
    v13 = (_DWORD *)Ogre::HashTable<WCoord,bool,WCoordHashCoder>::iterate((int)&v65, m);
    v14 = v13;
    if ( v13 == nullptr )
      break;
    v15 = *((_DWORD **)this + 8);
    if ( v15 == *((_DWORD **)this + 9) )
    {
      std::vector<WCoord>::_M_emplace_back_aux<WCoord const&>((int *)this + 7, v13);
    }
    else
    {
      if ( v15 != nullptr )
      {
        *v15 = *v13;
        v15[1] = v13[1];
        v15[2] = v13[2];
      }
      *((_DWORD *)this + 8) += 12;
    }
  }
  v16 = *((float *)this + 5) + *((float *)this + 5);
  *((float *)this + 5) = v16;
  v17 = (int)(float)(v16 + 100.0);
  v40 = *((_DWORD *)this + 2) - v17;
  v34 = *((_DWORD *)this + 2);
  v37 = *((_DWORD *)this + 3);
  v43 = *((_DWORD *)this + 4);
  v76 = v37 - v17;
  v75 = v40;
  v77 = v43 - v17;
  CoordDivBlock((const WCoord *)v54, &v75);
  v75 = v34 + v17;
  v76 = v37 + v17;
  v77 = v43 + v17;
  CoordDivBlock((const WCoord *)v55, &v75);
  v70 = v37 - v17;
  v69 = v40;
  v71 = v43 - v17;
  v57 = 0;
  v58 = 0;
  v18 = *(_DWORD *)this;
  v19 = *((_DWORD *)this + 1);
  v72 = 2 * v17;
  v73 = 2 * v17;
  v74 = 2 * v17;
  v56 = nullptr;
  World::getActorsInBoxExclude(v18, &v56, &v69, v19);
  for ( n = 0; ; ++n )
  {
    v20 = v56;
    if ( n >= (v57 - (int)v56) >> 2 )
      break;
    v21 = *((_DWORD *)v56 + n);
    ClientActor::getPosition((ClientActor *)&v62);
    v22 = *((_DWORD *)this + 4);
    v23 = (float)(LODWORD(v63) - *((_DWORD *)this + 3));
    v59 = (float)(LODWORD(v62) - *((_DWORD *)this + 2));
    v61 = (float)(LODWORD(v64) - v22);
    v60 = v23;
    v24 = Ogre::Vector3::length((Ogre::Vector3 *)&v59);
    v50 = v24 / *((float *)this + 5);
    if ( v50 <= 1.0 && v24 != 0.0 )
    {
      ActorLocoMotion::getCollideBox(*(ActorLocoMotion **)(v21 + 68), (CollideAABB *)&v69);
      v53 = *(_DWORD *)this;
      v49 = 10000 / (2 * (v72 + 50));
      v47 = 10000 / (2 * (v73 + 50));
      v48 = 10000 / (2 * (v74 + 50));
      v81 = 3.4028e38;
      v51 = v49 / 2;
      v42 = v49 / 2;
      v38 = 0;
      v35 = 0;
      do
      {
        v44 = v47 / 2;
        do
        {
          v46 = v48 / 2;
          do
          {
            v45 = v72 * v42 / 100 + v69;
            v25 = v73 * v44 / 100 + v70;
            v26 = v74 * v46 / 100 + v71;
            v75 = 10 * v45;
            v76 = 10 * v25;
            v27 = *((_DWORD *)this + 3);
            v77 = 10 * v26;
            v28 = (float)(*((_DWORD *)this + 4) - v26);
            v78 = (float)(*((_DWORD *)this + 2) - v45);
            v80 = v28;
            v79 = (float)(v27 - v25);
            v81 = Ogre::Vector3::length((Ogre::Vector3 *)&v78);
            if ( v81 == 0.0 )
            {
              ++v35;
            }
            else
            {
              v78 = v78 / v81;
              v79 = v79 / v81;
              v80 = v80 / v81;
              v35 += World::pickGround(v53, &v75, 0, 0) == 0;
            }
            ++v38;
            v46 += v48;
          }
          while ( v46 - v48 / 2 <= 100 );
          v44 += v47;
        }
        while ( v44 - v47 / 2 <= 100 );
        v42 += v49;
      }
      while ( v42 - v51 <= 100 );
      v29 = (float)(1.0 - v50) * (float)((float)v35 / (float)v38);
      ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))ClientActor::attackedFromType)(
        v21,
        2,
        (float)(int)(float)((float)((float)((float)((float)(v29 * v29) + v29) * 8.0)
                                  * (float)(*((float *)this + 5) / 200.0))
                          + 1.0),
        v42 - v51);
      v30 = *(float **)(v21 + 68);
      v36 = v29 * v60;
      v31 = v29 * v61;
      v30[18] = v30[18] + (float)(v29 * v59);
      v30[19] = v30[19] + v36;
      v30[20] = v30[20] + v31;
    }
  }
  *((_DWORD *)this + 5) = v52;
  if ( v20 != nullptr )
    operator delete(v20);
  return Ogre::HashTable<WCoord,bool,WCoordHashCoder>::~HashTable(&v65);
}

