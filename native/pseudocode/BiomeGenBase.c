// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BiomeGenBase

//======================================================================
// BiomeGenBase::getRandomWorldGenForTrees(ChunkRandGen *)
// address: 0x002B4D16   size: 0x1C (28 bytes)
//======================================================================
int __fastcall BiomeGenBase::getRandomWorldGenForTrees(BiomeGenBase *this, ChunkRandGen *a2)
{
  if ( ChunkRandGen::get(a2) % 0xAu != 0 )
    return *((_DWORD *)this + 18);
  else
    return *((_DWORD *)this + 19);
}


//======================================================================
// BiomeGenBase::decorate(World *,ChunkRandGen *,int,int)
// address: 0x002E6E08   size: 0xE (14 bytes)
//======================================================================
int __fastcall BiomeGenBase::decorate(__int64 this, ChunkRandGen *a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-8h]

  LODWORD(this) = *(_DWORD *)(this + 88);
  BiomeDecorator::decorate(this, a2, a3, a4);
  return v5;
}


//======================================================================
// BiomeGenBase::~BiomeGenBase()
// address: 0x002E6E18   size: 0x68 (104 bytes)
//======================================================================
// Alternative name is '_ZN12BiomeGenBaseD1Ev'
void __fastcall BiomeGenBase::~BiomeGenBase(BiomeGenBase *this)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  void **v7; // r5

  *(_DWORD *)this = &off_461B98;
  v2 = *((_DWORD *)this + 18);
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = *((_DWORD *)this + 19);
  if ( v3 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  v4 = *((_DWORD *)this + 20);
  if ( v4 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  v5 = *((_DWORD *)this + 21);
  if ( v5 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
  v6 = *((_DWORD *)this + 22);
  if ( v6 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
  v7 = (void **)((char *)this + 56);
  while ( v7 != (void **)((char *)this + 8) )
  {
    v7 -= 3;
    if ( *v7 != nullptr )
      operator delete(*v7);
  }
}


//======================================================================
// BiomeGenBase::~BiomeGenBase()
// address: 0x002E6E84   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BiomeGenBase::~BiomeGenBase(BiomeGenBase *this)
{
  BiomeGenBase::~BiomeGenBase(this);
  operator delete(this);
}


//======================================================================
// BiomeGenBase::BiomeGenBase(void)
// address: 0x002E6F8C   size: 0x30 (48 bytes)
//======================================================================
// Alternative name is '_ZN12BiomeGenBaseC1Ev'
void __fastcall BiomeGenBase::BiomeGenBase(BiomeGenBase *this)
{
  _DWORD *v1; // r3

  *(_DWORD *)this = &off_461B98;
  v1 = (_DWORD *)((char *)this + 8);
  do
  {
    *v1 = 0;
    v1[1] = 0;
    v1[2] = 0;
    v1 += 3;
  }
  while ( v1 != (_DWORD *)((char *)this + 56) );
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
}


//======================================================================
// BiomeGenBase::createBiomeGen(BiomeDef const*)
// address: 0x002E6FC0   size: 0x10A (266 bytes)
//======================================================================
BiomeGenDesert *__fastcall BiomeGenBase::createBiomeGen(int *a1)
{
  int v1; // r3
  BiomeGenDesert *v3; // r4
  int **v4; // r3
  int v5; // r0
  int v6; // r0

  v1 = *a1;
  if ( *a1 == 2 || v1 == 13 )
  {
    v3 = (BiomeGenDesert *)operator new(0x60u);
    BiomeGenDesert::BiomeGenDesert(v3);
    goto LABEL_19;
  }
  if ( v1 == 3 || v1 == 14 )
  {
    v3 = (BiomeGenDesert *)operator new(0x5Cu);
    BiomeGenBase::BiomeGenBase(v3);
    v4 = `vtable for'BiomeGenForest;
LABEL_9:
    *(_DWORD *)v3 = *v4 + 2;
    goto LABEL_19;
  }
  if ( (v1 & 0xFFFFFFEF) == 4 )
  {
    v3 = (BiomeGenDesert *)operator new(0x5Cu);
    BiomeGenBase::BiomeGenBase(v3);
    v4 = `vtable for'BiomeGenHills;
    goto LABEL_9;
  }
  switch ( v1 )
  {
    case 7:
    case 17:
      v3 = (BiomeGenDesert *)operator new(0x68u);
      BiomeGenJungle::BiomeGenJungle(v3);
      break;
    case 5:
      v3 = (BiomeGenDesert *)operator new(0x5Cu);
      BiomeGenBase::BiomeGenBase(v3);
      v4 = `vtable for'BiomeGenSwamp;
      goto LABEL_9;
    case 6:
    case 15:
      v3 = (BiomeGenDesert *)operator new(0x64u);
      BiomeGenBase::BiomeGenBase(v3);
      *(_DWORD *)v3 = &off_461B70;
      v5 = operator new(8u);
      *(_BYTE *)(v5 + 4) = 0;
      *(_DWORD *)v5 = &off_4610D8;
      *((_DWORD *)v3 + 23) = v5;
      v6 = operator new(8u);
      *(_BYTE *)(v6 + 4) = 0;
      *(_DWORD *)v6 = &off_45C408;
      *((_DWORD *)v3 + 24) = v6;
      break;
    default:
      v3 = (BiomeGenDesert *)operator new(0x5Cu);
      BiomeGenBase::BiomeGenBase(v3);
      break;
  }
LABEL_19:
  (*(void (__fastcall **)(BiomeGenDesert *, int *))(*(_DWORD *)v3 + 8))(v3, a1);
  return v3;
}


//======================================================================
// BiomeGenBase::getGrassColor(void)
// address: 0x002E70E8   size: 0x56 (86 bytes)
//======================================================================
int __fastcall BiomeGenBase::getGrassColor(BiomeGenBase *this)
{
  unsigned int GrassColor; // r0

  GrassColor = BlockMaterialMgr::getGrassColor(
                 (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                 1.0 - *(float *)(*((_DWORD *)this + 1) + 44),
                 1.0 - (float)(*(float *)(*((_DWORD *)this + 1) + 44) * *(float *)(*((_DWORD *)this + 1) + 48)));
  return (BYTE1(GrassColor) << 8) | (unsigned __int8)GrassColor | (BYTE2(GrassColor) << 16) | (HIBYTE(GrassColor) << 24);
}


//======================================================================
// BiomeGenBase::getLeafColor(void)
// address: 0x002E7144   size: 0x56 (86 bytes)
//======================================================================
int __fastcall BiomeGenBase::getLeafColor(BiomeGenBase *this)
{
  unsigned int LeafColor; // r0

  LeafColor = BlockMaterialMgr::getLeafColor(
                (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                1.0 - *(float *)(*((_DWORD *)this + 1) + 44),
                1.0 - (float)(*(float *)(*((_DWORD *)this + 1) + 44) * *(float *)(*((_DWORD *)this + 1) + 48)));
  return (BYTE1(LeafColor) << 8) | (unsigned __int8)LeafColor | (BYTE2(LeafColor) << 16) | (HIBYTE(LeafColor) << 24);
}


//======================================================================
// BiomeGenBase::getSpawnMobs(MOB_TYPE)
// address: 0x002E71A0   size: 0x4A (74 bytes)
//======================================================================
int __fastcall BiomeGenBase::getSpawnMobs(int a1, int a2)
{
  unsigned int v3; // r0
  signed int v6; // r0
  int *v7; // r4
  int v8; // r2
  int v9; // r3
  signed int v10; // r1
  int v11; // r4
  int v12; // r6
  int v13; // r5

  v3 = *(_DWORD *)(4 * (a2 + 14) + a1);
  if ( v3 != 0 )
  {
    v6 = GenRandomInt(v3);
    v7 = (int *)(a1 + 12 * a2 + 8);
    v8 = *v7;
    v9 = 0;
    v10 = 0;
    v11 = (v7[1] - *v7) >> 3;
    while ( v9 != v11 )
    {
      v12 = *(_DWORD *)(v8 + 4);
      v13 = v8;
      v8 += 8;
      v10 += v12;
      if ( v6 < v10 )
        return *(_DWORD *)v13;
      ++v9;
    }
  }
  return -1;
}


//======================================================================
// BiomeGenBase::init(BiomeDef const*)
// address: 0x002E7270   size: 0x11E (286 bytes)
//======================================================================
_DWORD *__fastcall BiomeGenBase::init(_DWORD *a1, _DWORD *a2)
{
  int v4; // r6
  int v5; // r0
  WorldGenBigTree *v6; // r7
  int v7; // r0
  int v8; // r0
  _DWORD *result; // r0
  _DWORD *i; // r5
  int v11; // r3
  _DWORD *v12; // r7
  int v13; // r2
  _DWORD *v14; // r3
  int v15; // r0
  int v16; // r7
  int v17; // r0
  _DWORD *v18; // r3
  int v19; // [sp+8h] [bp-Ch] BYREF
  int v20; // [sp+Ch] [bp-8h]

  a1[1] = a2;
  v4 = operator new(0xE8u);
  BiomeDecorator::BiomeDecorator(v4, (int)a1, a2);
  a1[22] = v4;
  v5 = operator new(0x18u);
  *(_BYTE *)(v5 + 4) = 0;
  *(_BYTE *)(v5 + 12) = 0;
  *(_DWORD *)v5 = &off_461BF8;
  *(_DWORD *)(v5 + 8) = 4;
  *(_DWORD *)(v5 + 16) = 200;
  *(_DWORD *)(v5 + 20) = 218;
  a1[18] = v5;
  v6 = (WorldGenBigTree *)operator new(0x50u);
  WorldGenBigTree::WorldGenBigTree(v6, false);
  a1[19] = v6;
  v7 = operator new(8u);
  *(_BYTE *)(v7 + 4) = 0;
  *(_DWORD *)v7 = &off_462B98;
  a1[20] = v7;
  v8 = operator new(8u);
  *(_BYTE *)(v8 + 4) = 0;
  *(_DWORD *)v8 = &off_45D868;
  a1[21] = v8;
  result = j_memset(a1 + 14, 0, 0x10u);
  for ( i = *(_DWORD **)(Ogre::Singleton<DefManager>::ms_Singleton + 532);
        i != (_DWORD *)(Ogre::Singleton<DefManager>::ms_Singleton + 524);
        i = result )
  {
    v11 = i[31];
    if ( v11 <= 3 && *((_BYTE *)i + 56) != 0 )
    {
      v12 = (_DWORD *)a1[1];
      if ( *((_WORD *)i + *v12 + 157) != 0 )
      {
        v13 = i[5];
        v14 = &a1[v11];
        v19 = v13;
        v15 = *((unsigned __int16 *)i + *v12 + 157);
        v16 = v14[14];
        v20 = v15;
        v14[14] = v16 + v15;
        v17 = (int)&a1[3 * i[31] + 2];
        v18 = *(_DWORD **)(v17 + 4);
        if ( v18 == *(_DWORD **)(v17 + 8) )
        {
          std::vector<BiomeSpawnEntry>::_M_emplace_back_aux<BiomeSpawnEntry const&>(v17, &v19);
        }
        else
        {
          if ( v18 != nullptr )
          {
            *v18 = v13;
            v18[1] = v20;
          }
          *(_DWORD *)(v17 + 4) += 8;
        }
      }
    }
    result = (_DWORD *)sub_391DDC(i);
  }
  return result;
}

