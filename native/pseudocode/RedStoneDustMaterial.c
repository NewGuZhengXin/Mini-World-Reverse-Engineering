// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: RedStoneDustMaterial

//======================================================================
// RedStoneDustMaterial::canProvidePower(void)
// address: 0x00266014   size: 0x6 (6 bytes)
//======================================================================
int __fastcall RedStoneDustMaterial::canProvidePower(RedStoneDustMaterial *this)
{
  return *((unsigned __int8 *)this + 64);
}


//======================================================================
// RedStoneDustMaterial::getGeomName(void)
// address: 0x0026601C   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall RedStoneDustMaterial::getGeomName(RedStoneDustMaterial *this)
{
  return "dustplane";
}


//======================================================================
// RedStoneDustMaterial::getDestroyTexture(Block *,BlockTexDesc &)
// address: 0x00266028   size: 0x12 (18 bytes)
//======================================================================
int __fastcall RedStoneDustMaterial::getDestroyTexture(int a1, int a2, int a3)
{
  *(_DWORD *)a3 = 1;
  *(_BYTE *)(a3 + 4) = 0;
  return BlockTexElement::getTexture(*(BlockTexElement **)(a1 + 48), 0);
}


//======================================================================
// RedStoneDustMaterial::isProvidingStrongPower(World *,WCoord const&,DirectionType)
// address: 0x002660C8   size: 0x1C (28 bytes)
//======================================================================
int __fastcall RedStoneDustMaterial::isProvidingStrongPower(_BYTE *a1)
{
  int v1; // r4

  v1 = 0;
  if ( a1[64] != 0 )
    return (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 168))(a1);
  return v1;
}


//======================================================================
// RedStoneDustMaterial::canPlaceBlockAt(World *,WCoord const&)
// address: 0x00266124   size: 0x1E (30 bytes)
//======================================================================
int __fastcall RedStoneDustMaterial::canPlaceBlockAt(RedStoneDustMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int v4; // r0
  int v5; // r4
  World *v6; // r2
  World *v8; // [sp+4h] [bp-Ch] BYREF
  const WCoord *v9; // [sp+8h] [bp-8h]
  int v10; // [sp+Ch] [bp-4h]

  v8 = a2;
  v9 = a3;
  v10 = a4;
  v4 = *((_DWORD *)a3 + 2);
  v5 = *((_DWORD *)a3 + 1);
  v6 = *(World **)a3;
  v10 = v4;
  v8 = v6;
  v9 = (const WCoord *)(v5 - 1);
  return World::doesBlockHaveSolidTopSurface(a2, (const WCoord *)&v8);
}


//======================================================================
// RedStoneDustMaterial::createCollideData(CollisionDetect *,World *,WCoord const&)
// address: 0x00266142   size: 0x36 (54 bytes)
//======================================================================
int __fastcall RedStoneDustMaterial::createCollideData(
        RedStoneDustMaterial *this,
        CollisionDetect *a2,
        World *a3,
        const WCoord *a4)
{
  int v4; // r4
  int v5; // r5
  _DWORD v7[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v8[3]; // [sp+Ch] [bp-Ch] BYREF

  v4 = 100 * *((_DWORD *)a4 + 2);
  v5 = 100 * *((_DWORD *)a4 + 1);
  v7[0] = 100 * *(_DWORD *)a4;
  v7[1] = v5;
  v7[2] = v4;
  v8[0] = v7[0] + 100;
  v8[1] = v5 + 10;
  v8[2] = v4 + 100;
  return CollisionDetect::addObstacle(a2, (const WCoord *)v7, (const WCoord *)v8);
}


//======================================================================
// RedStoneDustMaterial::randomDisplayTick(ClientWorld *,WCoord const&)
// address: 0x00266178   size: 0x68 (104 bytes)
//======================================================================
int __fastcall RedStoneDustMaterial::randomDisplayTick(RedStoneDustMaterial *this, ClientWorld *a2, const WCoord *a3)
{
  int result; // r0
  int v6; // r0
  int v7; // r2
  int v8; // r0
  EffectParticle *v9; // r4
  _DWORD v10[3]; // [sp+Ch] [bp-Ch] BYREF

  result = World::getBlockData(a2, a3);
  if ( result != 0 )
  {
    v6 = *((_DWORD *)a3 + 2);
    v10[1] = 100 * *((_DWORD *)a3 + 1);
    v7 = 100 * v6;
    v8 = *(_DWORD *)a3;
    v10[2] = v7 + 50;
    v10[0] = 100 * v8 + 50;
    v9 = (EffectParticle *)operator new(0x14u);
    EffectParticle::EffectParticle(v9, a2, "particles/item_706.ent", (const WCoord *)v10, 20);
    return EffectManager::addEffect((EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton, v9);
  }
  return result;
}


//======================================================================
// RedStoneDustMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002662D4   size: 0x180 (384 bytes)
//======================================================================
int __fastcall RedStoneDustMaterial::createBlockMesh(
        RedStoneDustMaterial *this,
        ClientSection *a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  int v7; // r1
  int v8; // r0
  int v9; // r3
  int v10; // r2
  __int16 *v11; // r3
  int v12; // r1
  char v13; // r0
  char *v14; // r2
  int v15; // r0
  int v16; // r2
  int v17; // r1
  int v18; // r4
  int v19; // r12
  int v20; // r3
  int v21; // r2
  int v22; // r1
  int result; // r0
  int v24; // r0
  int v25; // r4
  int v26; // [sp+14h] [bp-60h]
  int v27; // [sp+14h] [bp-60h]
  int v28; // [sp+18h] [bp-5Ch]
  int v29; // [sp+1Ch] [bp-58h]
  Ogre::Material *v30; // [sp+20h] [bp-54h]
  _BYTE v32[4]; // [sp+2Ch] [bp-48h] BYREF
  _DWORD v33[4]; // [sp+30h] [bp-44h] BYREF
  _BYTE v34[16]; // [sp+40h] [bp-34h] BYREF
  float v35[9]; // [sp+50h] [bp-24h] BYREF

  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  v10 = *((_DWORD *)a2 + 5);
  if ( v10 != 0 )
    v11 = (__int16 *)(v10 + 2 * ((16 * v9) | (v8 << 8) | v7));
  else
    v11 = &Section::m_EmptyBlock;
  v12 = 3 * ((int)(unsigned __int16)*v11 >> 12);
  v13 = byte_445B6F[v12];
  v14 = &byte_445B6F[v12];
  LOBYTE(v12) = byte_445B6F[v12 + 1];
  LOBYTE(v14) = v14[2];
  v32[0] = v13;
  v32[2] = (_BYTE)v14;
  v32[1] = v12;
  v32[3] = -1;
  v26 = sub_266204((int)a2, (int *)a3, 0);
  v33[0] = v26;
  v28 = sub_266204((int)a2, (int *)a3, 1);
  v33[1] = v28;
  v29 = sub_266204((int)a2, (int *)a3, 2);
  v33[2] = v29;
  v15 = sub_266204((int)a2, (int *)a3, 3);
  v33[3] = v15;
  if ( v29 == 0 && v15 == 0 && (v26 > 0 || v28 > 0) )
  {
    v16 = 4;
    v30 = *((Ogre::Material **)this + 15);
LABEL_14:
    v17 = 1065353216;
    v18 = 0;
    v19 = 1065353216;
    v20 = 0;
    goto LABEL_26;
  }
  if ( v26 == 0 && v28 == 0 && (v29 > 0 || v15 > 0) )
  {
    v16 = 5;
    v30 = *((Ogre::Material **)this + 15);
    goto LABEL_14;
  }
  v30 = *((Ogre::Material **)this + 14);
  if ( v26 != 0 )
    v20 = 0;
  else
    v20 = 1048576000;
  if ( v28 != 0 )
    v21 = 254;
  else
    v21 = 253;
  v19 = v21 << 22;
  v18 = 0;
  if ( v29 == 0 )
    v18 = 1048576000;
  v16 = 4;
  v22 = 254;
  if ( v15 == 0 )
    v22 = 253;
  v17 = v22 << 22;
LABEL_26:
  result = BlockGeomTemplate::getClippedFaceVerts(*((_DWORD *)this + 10), v34, v16, v20, v19, v18, v17);
  if ( result != 0 )
  {
    ClientSection::getBlockVertexLight(a2, a3, v35);
    v24 = BlockMaterial::blockMeshOutput(this, a4, a2, v30);
    SectionSubMesh::addGeomBlockLight(v24, v34, a3, v35, v32);
    result = SectionMesh::getSubMesh(*((SectionMesh **)a2 + 14), *((Ogre::Material **)this + 15));
    v25 = 0;
    v27 = result;
    do
    {
      if ( v33[v25] == 2 )
      {
        BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v34, v25);
        result = SectionSubMesh::addGeomBlockLight(v27, v34, a3, v35, v32);
      }
      ++v25;
    }
    while ( v25 != 4 );
  }
  return result;
}


//======================================================================
// RedStoneDustMaterial::isProvidingWeakPower(World *,WCoord const&,DirectionType)
// address: 0x0026645C   size: 0x1A4 (420 bytes)
//======================================================================
int __fastcall RedStoneDustMaterial::isProvidingWeakPower(int a1, World *a2, WCoord *a3, int a4)
{
  int i; // r7
  _BOOL4 v7; // r0
  bool v8; // r3
  int isBlockNormalCube; // r0
  int v10; // r2
  int v11; // r3
  int j; // r6
  int result; // r0
  int BlockData; // [sp+4h] [bp-38h]
  char v16; // [sp+10h] [bp-2Ch]
  char v17; // [sp+11h] [bp-2Bh]
  char v18; // [sp+12h] [bp-2Ah]
  char v19; // [sp+13h] [bp-29h]
  _DWORD v20[3]; // [sp+14h] [bp-28h] BYREF
  _DWORD v21[3]; // [sp+20h] [bp-1Ch] BYREF
  int v22; // [sp+2Ch] [bp-10h] BYREF
  int v23; // [sp+30h] [bp-Ch]
  int v24; // [sp+34h] [bp-8h]

  if ( *(_BYTE *)(a1 + 64) == 0 )
    return 0;
  BlockData = World::getBlockData(a2, a3);
  if ( BlockData == 0 )
    return 0;
  if ( a4 == 4 )
    return BlockData;
  for ( i = 0; i != 4; ++i )
  {
    operator+(&v22, (int *)a3, &g_DirectionCoord[3 * i]);
    v7 = sub_2660E4(a2, (const WCoord *)&v22, i);
    v8 = true;
    if ( !v7 )
    {
      isBlockNormalCube = World::isBlockNormalCube(a2, (const WCoord *)&v22);
      v8 = false;
      if ( isBlockNormalCube == 0 )
      {
        v20[0] = v22;
        v20[1] = v23 - 1;
        v20[2] = v24;
        v8 = sub_2660E4(a2, (const WCoord *)v20, -1);
      }
    }
    *(&v16 + i) = v8;
  }
  v10 = *(_DWORD *)a3;
  v23 = *((_DWORD *)a3 + 1) + 1;
  v11 = *((_DWORD *)a3 + 2);
  v22 = v10;
  v24 = v11;
  if ( World::isBlockNormalCube(a2, (const WCoord *)&v22) == 0 )
  {
    for ( j = 0; j != 4; ++j )
    {
      operator+(v21, (int *)a3, &g_DirectionCoord[3 * j]);
      if ( World::isBlockNormalCube(a2, (const WCoord *)v21) != 0 )
      {
        v23 = v21[1] + 1;
        v22 = v21[0];
        v24 = v21[2];
        if ( sub_2660E4(a2, (const WCoord *)&v22, -1) )
          *(&v16 + j) = 1;
      }
    }
  }
  if ( v18 == 0 && v17 == 0 && v16 == 0 && v19 == 0 )
  {
    if ( a4 < 0 )
      goto LABEL_36;
    result = BlockData;
    if ( a4 <= 3 )
      return result;
  }
  switch ( a4 )
  {
    case 2:
      if ( v19 != 0 && v16 == 0 && v17 == 0 )
        return BlockData;
      return 0;
    case 3:
      result = 0;
      if ( v18 != 0 && v16 == 0 )
        return v17 == 0 ? BlockData : 0;
      return result;
    case 0:
      result = 0;
      if ( v17 != 0 && v18 == 0 )
        return v19 == 0 ? BlockData : 0;
      return result;
    default:
      break;
  }
LABEL_36:
  result = 0;
  if ( a4 == 1 && v16 != 0 && v18 == 0 )
    return v19 == 0 ? BlockData : 0;
  return result;
}


//======================================================================
// RedStoneDustMaterial::init(int)
// address: 0x00266604   size: 0x186 (390 bytes)
//======================================================================
void __fastcall RedStoneDustMaterial::init(BlockTexElement **this, int a2)
{
  const char *v4; // r2
  int v5; // r2
  void *v6; // r1
  int v7; // r2
  Ogre::Material *v8; // r6
  void *v9; // r1
  Ogre::Material *v10; // r6
  int v11; // r2
  void *v12; // r1
  Ogre::Material *v13; // r6
  int v14; // r2
  Ogre::Texture *Texture; // r0
  void *v16; // r1
  BlockMaterialMgr *v17; // r6
  int v18; // r2
  void *v19; // r1
  int v20; // r2
  Ogre::Material *v21; // r4
  void *v22; // r1
  Ogre::Material *v23; // r4
  int v24; // r2
  void *v25; // r1
  Ogre::Material *v26; // r4
  int v27; // r2
  Ogre::Texture *v28; // r0
  void *v29; // r1
  BlockMaterialMgr *v30; // [sp+4h] [bp-118h]
  Ogre::FixedString *v31; // [sp+10h] [bp-10Ch] BYREF
  char s[256]; // [sp+14h] [bp-108h] BYREF

  BlockMaterial::init((BlockMaterial *)this, a2);
  v4 = (char *)*(this + 9) + 212;
  RedStoneDustMaterial::BLOCK_ID = a2;
  j_sprintf(s, "%s_cross", v4);
  v30 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v31, (Ogre::FixedString *)s, v5);
  *(this + 12) = (BlockTexElement *)BlockMaterialMgr::getTexElement(v30, (const Ogre::FixedString *)&v31, 1);
  Ogre::FixedString::~FixedString(&v31, v6);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v31, (Ogre::FixedString *)"block", v7);
  v8 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v8, (const Ogre::FixedString *)&v31);
  *(this + 14) = v8;
  Ogre::FixedString::~FixedString(&v31, v9);
  v10 = *(this + 14);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v31, (Ogre::FixedString *)"BLEND_MODE", v11);
  v12 = (void *)(Ogre::Material::setParamMacro(v10, (const Ogre::FixedString *)&v31, 1u) >> 32);
  Ogre::FixedString::~FixedString(&v31, v12);
  v13 = *(this + 14);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v31, (Ogre::FixedString *)"g_DiffuseTex", v14);
  Texture = (Ogre::Texture *)BlockTexElement::getTexture(*(this + 12), 0);
  Ogre::Material::setParamTexture(v13, (const Ogre::FixedString *)&v31, Texture, 0);
  Ogre::FixedString::~FixedString(&v31, v16);
  j_sprintf(s, "%s_line", (const char *)*(this + 9) + 212);
  v17 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v31, (Ogre::FixedString *)s, v18);
  *(this + 13) = (BlockTexElement *)BlockMaterialMgr::getTexElement(v17, (const Ogre::FixedString *)&v31, 1);
  Ogre::FixedString::~FixedString(&v31, v19);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v31, (Ogre::FixedString *)"block", v20);
  v21 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v21, (const Ogre::FixedString *)&v31);
  *(this + 15) = v21;
  Ogre::FixedString::~FixedString(&v31, v22);
  v23 = *(this + 15);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v31, (Ogre::FixedString *)"BLEND_MODE", v24);
  v25 = (void *)(Ogre::Material::setParamMacro(v23, (const Ogre::FixedString *)&v31, 1u) >> 32);
  Ogre::FixedString::~FixedString(&v31, v25);
  v26 = *(this + 15);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v31, (Ogre::FixedString *)"g_DiffuseTex", v27);
  v28 = (Ogre::Texture *)BlockTexElement::getTexture(*(this + 13), 0);
  Ogre::Material::setParamTexture(v26, (const Ogre::FixedString *)&v31, v28, 0);
  Ogre::FixedString::~FixedString(&v31, v29);
}


//======================================================================
// RedStoneDustMaterial::RedStoneDustMaterial(void)
// address: 0x002667F0   size: 0x30 (48 bytes)
//======================================================================
// Alternative name is '_ZN20RedStoneDustMaterialC1Ev'
void __fastcall RedStoneDustMaterial::RedStoneDustMaterial(RedStoneDustMaterial *this)
{
  BlockMaterial::BlockMaterial(this);
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *(_DWORD *)this = &off_45B610;
  j_memset((char *)this + 72, 0, 0x10u);
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 20) = (char *)this + 72;
  *((_DWORD *)this + 21) = (char *)this + 72;
}


//======================================================================
// RedStoneDustMaterial::notifyWireNeighborsOfNeighborChange(World *,WCoord const&)
// address: 0x00266824   size: 0x52 (82 bytes)
//======================================================================
int __fastcall RedStoneDustMaterial::notifyWireNeighborsOfNeighborChange(
        RedStoneDustMaterial *this,
        World *a2,
        const WCoord *a3)
{
  int result; // r0
  int *v7; // r4
  _DWORD v8[4]; // [sp+Ch] [bp-10h] BYREF

  result = World::getBlockID(a2, a3);
  if ( result == *((_DWORD *)this + 8) )
  {
    World::notifyBlocksOfNeighborChange(a2, a3, result);
    v7 = g_DirectionCoord;
    do
    {
      operator+(v8, (int *)a3, v7);
      result = World::notifyBlocksOfNeighborChange(a2, (const WCoord *)v8, *((_DWORD *)this + 8));
      v7 += 3;
    }
    while ( v7 != (int *)&slotelements );
  }
  return result;
}


//======================================================================
// RedStoneDustMaterial::getMaxCurrentStrength(World *,WCoord const&,int)
// address: 0x0026687C   size: 0x26 (38 bytes)
//======================================================================
int __fastcall RedStoneDustMaterial::getMaxCurrentStrength(
        RedStoneDustMaterial *this,
        World *a2,
        const WCoord *a3,
        int a4)
{
  int v6; // r3
  int result; // r0

  v6 = *(unsigned __int16 *)World::getBlock(a2, a3);
  result = a4;
  if ( (v6 & 0xFFF) == *((_DWORD *)this + 8) )
  {
    result = v6 >> 12;
    if ( v6 >> 12 < a4 )
      return a4;
  }
  return result;
}


//======================================================================
// RedStoneDustMaterial::~RedStoneDustMaterial()
// address: 0x002668C4   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZN20RedStoneDustMaterialD1Ev'
void __fastcall RedStoneDustMaterial::~RedStoneDustMaterial(RedStoneDustMaterial *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0

  *(_DWORD *)this = &off_45B610;
  v2 = *((_DWORD **)this + 14);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 14) = 0;
  }
  v3 = *((_DWORD **)this + 15);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 15) = 0;
  }
  std::_Rb_tree<WCoord,WCoord,std::_Identity<WCoord>,std::less<WCoord>,std::allocator<WCoord>>::_M_erase(
    (int)this + 68,
    *((_DWORD **)this + 19));
  BlockMaterial::~BlockMaterial(this);
}


//======================================================================
// RedStoneDustMaterial::~RedStoneDustMaterial()
// address: 0x00266908   size: 0x12 (18 bytes)
//======================================================================
void __fastcall RedStoneDustMaterial::~RedStoneDustMaterial(RedStoneDustMaterial *this)
{
  RedStoneDustMaterial::~RedStoneDustMaterial(this);
  operator delete(this);
}


//======================================================================
// RedStoneDustMaterial::calculatePower(World *,WCoord const&)
// address: 0x00266980   size: 0x1E4 (484 bytes)
//======================================================================
int *__fastcall RedStoneDustMaterial::calculatePower(RedStoneDustMaterial *this, World *a2, const WCoord *a3)
{
  int StrongestIndirectPower; // r0
  int v6; // r2
  int v7; // r3
  int *result; // r0
  char *v9; // r3
  int v10; // r3
  int v11; // r2
  int v12; // r5
  _DWORD *v13; // r0
  _DWORD *v14; // r4
  int *v15; // r5
  _DWORD *v16; // r0
  _DWORD *v17; // r4
  int MaxCurrentStrength; // [sp+0h] [bp-44h]
  _BOOL4 v19; // [sp+0h] [bp-44h]
  int v20; // [sp+0h] [bp-44h]
  int v21; // [sp+4h] [bp-40h]
  _BOOL4 v22; // [sp+8h] [bp-3Ch]
  int v24; // [sp+10h] [bp-34h]
  char *v25; // [sp+10h] [bp-34h]
  int *v26; // [sp+14h] [bp-30h]
  int BlockData; // [sp+18h] [bp-2Ch]
  int v28; // [sp+20h] [bp-24h] BYREF
  int v29; // [sp+24h] [bp-20h]
  int v30; // [sp+28h] [bp-1Ch] BYREF
  _DWORD *v31; // [sp+2Ch] [bp-18h]
  int v32; // [sp+30h] [bp-14h]
  int v33; // [sp+34h] [bp-10h] BYREF
  int v34; // [sp+38h] [bp-Ch]
  int v35; // [sp+3Ch] [bp-8h]

  BlockData = World::getBlockData(a2, a3);
  *((_BYTE *)this + 64) = 0;
  StrongestIndirectPower = World::getStrongestIndirectPower(a2, a3);
  v21 = StrongestIndirectPower;
  *((_BYTE *)this + 64) = 1;
  if ( StrongestIndirectPower <= 0 )
  {
    v24 = BlockData;
  }
  else
  {
    v24 = StrongestIndirectPower;
    if ( StrongestIndirectPower < BlockData )
      v24 = BlockData;
  }
  v26 = g_DirectionCoord;
  MaxCurrentStrength = 0;
  do
  {
    operator+(&v30, (int *)a3, v26);
    MaxCurrentStrength = RedStoneDustMaterial::getMaxCurrentStrength(this, a2, (const WCoord *)&v30, MaxCurrentStrength);
    if ( World::isBlockNormalCube(a2, (const WCoord *)&v30) != 0 )
    {
      v6 = *(_DWORD *)a3;
      v34 = *((_DWORD *)a3 + 1) + 1;
      v7 = *((_DWORD *)a3 + 2);
      v33 = v6;
      v35 = v7;
      result = (int *)World::isBlockNormalCube(a2, (const WCoord *)&v33);
      if ( result != nullptr )
        goto LABEL_11;
      v9 = (char *)v31 + 1;
      v35 = v32;
      v33 = v30;
    }
    else
    {
      v9 = (char *)v31 - 1;
      v33 = v30;
      v35 = v32;
    }
    v34 = (int)v9;
    result = (int *)RedStoneDustMaterial::getMaxCurrentStrength(this, a2, (const WCoord *)&v33, MaxCurrentStrength);
    MaxCurrentStrength = (int)result;
LABEL_11:
    v26 += 3;
  }
  while ( v26 != &dword_516658 );
  v10 = MaxCurrentStrength;
  if ( MaxCurrentStrength <= v24 && (v10 = v24, v24 <= 0) )
    v11 = 0;
  else
    v11 = v10 - 1;
  if ( v11 < v21 )
    v11 = v21;
  if ( BlockData != v11 )
  {
    World::setBlockData(a2, a3, v11, 2);
    std::_Rb_tree<WCoord,WCoord,std::_Identity<WCoord>,std::less<WCoord>,std::allocator<WCoord>>::_M_get_insert_unique_pos(
      &v28,
      (int)this + 68,
      a3);
    v12 = v29;
    if ( v29 != 0 )
    {
      v25 = (char *)this + 72;
      v19 = true;
      if ( v28 == 0 && (char *)v29 != v25 )
        v19 = operator<(a3, (_DWORD *)(v29 + 16));
      v13 = (_DWORD *)operator new(0x1Cu);
      v14 = v13;
      if ( v13 != nullptr )
      {
        j_memset(v13, 0, 0x10u);
        v14[4] = *(_DWORD *)a3;
        v14[5] = *((_DWORD *)a3 + 1);
        v14[6] = *((_DWORD *)a3 + 2);
      }
      sub_391E64(v19, v14, v12, v25);
      ++*((_DWORD *)this + 22);
    }
    v15 = g_DirectionCoord;
    do
    {
      operator+(&v33, (int *)a3, v15);
      result = std::_Rb_tree<WCoord,WCoord,std::_Identity<WCoord>,std::less<WCoord>,std::allocator<WCoord>>::_M_get_insert_unique_pos(
                 &v30,
                 (int)this + 68,
                 &v33);
      v20 = (int)v31;
      if ( v31 != nullptr )
      {
        v22 = true;
        if ( v30 == 0 && v31 != (_DWORD *)((char *)this + 72) )
          v22 = operator<(&v33, v31 + 4);
        v16 = (_DWORD *)operator new(0x1Cu);
        v17 = v16;
        if ( v16 != nullptr )
        {
          j_memset(v16, 0, 0x10u);
          v17[4] = v33;
          v17[5] = v34;
          v17[6] = v35;
        }
        result = (int *)sub_391E64(v22, v17, v20, (char *)this + 72);
        ++*((_DWORD *)this + 22);
      }
      v15 += 3;
    }
    while ( v15 != (int *)&slotelements );
  }
  return result;
}


//======================================================================
// RedStoneDustMaterial::updateAndPropagatePower(World *,WCoord const&)
// address: 0x00266B68   size: 0x9C (156 bytes)
//======================================================================
__int64 __fastcall RedStoneDustMaterial::updateAndPropagatePower(
        RedStoneDustMaterial *this,
        World *a2,
        const WCoord *a3)
{
  int *v4; // r0
  unsigned int v5; // r5
  _DWORD *v6; // r6
  int v7; // r7
  int v8; // r3
  unsigned int v9; // r3
  int i; // r6
  __int64 v12; // [sp+0h] [bp-Ch]

  LODWORD(v12) = a2;
  v4 = RedStoneDustMaterial::calculatePower(this, a2, a3);
  v5 = *((_DWORD *)this + 22);
  if ( v5 != 0 )
  {
    if ( v5 > 0x15555555 )
      sub_3BCEB4(v4);
    v5 = operator new(12 * v5);
  }
  v6 = *((_DWORD **)this + 20);
  v7 = 0;
  HIDWORD(v12) = (char *)this + 72;
  while ( v6 != (_DWORD *)HIDWORD(v12) )
  {
    v8 = 12 * v7++;
    *(_DWORD *)(v5 + v8) = v6[4];
    v9 = v5 + v8;
    *(_DWORD *)(v9 + 4) = v6[5];
    *(_DWORD *)(v9 + 8) = v6[6];
    v6 = (_DWORD *)sub_391E10(v6);
  }
  std::_Rb_tree<WCoord,WCoord,std::_Identity<WCoord>,std::less<WCoord>,std::allocator<WCoord>>::_M_erase(
    (int)this + 68,
    *((_DWORD **)this + 19));
  *((_DWORD *)this + 20) = v6;
  *((_DWORD *)this + 21) = v6;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 22) = 0;
  for ( i = 0; i != v7; ++i )
    World::notifyBlocksOfNeighborChange((World *)v12, (const WCoord *)(v5 + 12 * i), *((_DWORD *)this + 8));
  if ( v5 != 0 )
    operator delete((void *)v5);
  return v12;
}


//======================================================================
// RedStoneDustMaterial::onBlockAdded(World *,WCoord const&)
// address: 0x00266C08   size: 0xB4 (180 bytes)
//======================================================================
int __fastcall RedStoneDustMaterial::onBlockAdded(RedStoneDustMaterial *this, World *a2, const WCoord *a3)
{
  int v5; // r2
  int v6; // r3
  int v7; // r2
  int v8; // r2
  int v9; // r3
  int *v10; // r7
  int v11; // r7
  int result; // r0
  int *v13; // [sp+4h] [bp-28h]
  _DWORD v15[3]; // [sp+10h] [bp-1Ch] BYREF
  int v16; // [sp+1Ch] [bp-10h] BYREF
  int v17; // [sp+20h] [bp-Ch]
  int v18; // [sp+24h] [bp-8h]

  RedStoneDustMaterial::updateAndPropagatePower(this, a2, a3);
  v5 = *(_DWORD *)a3;
  v17 = *((_DWORD *)a3 + 1) + 1;
  v6 = *((_DWORD *)a3 + 2);
  v16 = v5;
  v7 = *((_DWORD *)this + 8);
  v18 = v6;
  World::notifyBlocksOfNeighborChange(a2, (const WCoord *)&v16, v7);
  v8 = *(_DWORD *)a3;
  v17 = *((_DWORD *)a3 + 1) - 1;
  v9 = *((_DWORD *)a3 + 2);
  v16 = v8;
  v18 = v9;
  World::notifyBlocksOfNeighborChange(a2, (const WCoord *)&v16, *((_DWORD *)this + 8));
  v10 = g_DirectionCoord;
  do
  {
    operator+(&v16, (int *)a3, v10);
    RedStoneDustMaterial::notifyWireNeighborsOfNeighborChange(this, a2, (const WCoord *)&v16);
    v10 += 3;
  }
  while ( v10 != &dword_516658 );
  v13 = g_DirectionCoord;
  do
  {
    operator+(v15, (int *)a3, v13);
    if ( World::isBlockNormalCube(a2, (const WCoord *)v15) != 0 )
      v11 = v15[1] + 1;
    else
      v11 = v15[1] - 1;
    v16 = v15[0];
    v18 = v15[2];
    v17 = v11;
    result = RedStoneDustMaterial::notifyWireNeighborsOfNeighborChange(this, a2, (const WCoord *)&v16);
    v13 += 3;
  }
  while ( v13 != &dword_516658 );
  return result;
}


//======================================================================
// RedStoneDustMaterial::onBlockRemoved(World *,WCoord const&,int,int)
// address: 0x00266CC0   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall RedStoneDustMaterial::onBlockRemoved(
        RedStoneDustMaterial *this,
        World *a2,
        const WCoord *a3,
        int a4,
        int a5)
{
  int *v6; // r4
  int *v7; // r5
  int *v8; // r5
  int v9; // r6
  int result; // r0
  _DWORD v13[3]; // [sp+10h] [bp-1Ch] BYREF
  _DWORD v14[4]; // [sp+1Ch] [bp-10h] BYREF

  v6 = g_DirectionCoord;
  v7 = g_DirectionCoord;
  do
  {
    operator+(v14, (int *)a3, v7);
    World::notifyBlocksOfNeighborChange(a2, (const WCoord *)v14, *((_DWORD *)this + 8));
    v7 += 3;
  }
  while ( v7 != (int *)&slotelements );
  RedStoneDustMaterial::updateAndPropagatePower(this, a2, a3);
  v8 = g_DirectionCoord;
  do
  {
    operator+(v14, (int *)a3, v8);
    RedStoneDustMaterial::notifyWireNeighborsOfNeighborChange(this, a2, (const WCoord *)v14);
    v8 += 3;
  }
  while ( v8 != &dword_516658 );
  do
  {
    operator+(v13, (int *)a3, v6);
    if ( World::isBlockNormalCube(a2, (const WCoord *)v13) != 0 )
      v9 = v13[1] + 1;
    else
      v9 = v13[1] - 1;
    v14[0] = v13[0];
    v14[2] = v13[2];
    v14[1] = v9;
    result = RedStoneDustMaterial::notifyWireNeighborsOfNeighborChange(this, a2, (const WCoord *)v14);
    v6 += 3;
  }
  while ( v6 != &dword_516658 );
  return result;
}


//======================================================================
// RedStoneDustMaterial::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x00266D6C   size: 0x4E (78 bytes)
//======================================================================
__int64 __fastcall RedStoneDustMaterial::onNeighborBlockChange(__int64 this, const WCoord *a2, int a3)
{
  __int64 v6; // [sp+0h] [bp-Ch]

  v6 = this;
  if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)this + 152))(this) != 0 )
  {
    RedStoneDustMaterial::updateAndPropagatePower((RedStoneDustMaterial *)this, (World *)HIDWORD(this), a2);
  }
  else
  {
    HIDWORD(v6) = 1065353216;
    (*(void (__fastcall **)(_DWORD, _DWORD, const WCoord *, _DWORD, int))(*(_DWORD *)this + 180))(
      this,
      HIDWORD(this),
      a2,
      0,
      1);
    World::setBlockAll((World *)HIDWORD(this), a2, 0, 0, 3);
  }
  return v6;
}


//======================================================================
// RedStoneDustMaterial::newObject(void)
// address: 0x002C151E   size: 0x12 (18 bytes)
//======================================================================
RedStoneDustMaterial *__fastcall RedStoneDustMaterial::newObject(RedStoneDustMaterial *this)
{
  RedStoneDustMaterial *v1; // r4

  v1 = (RedStoneDustMaterial *)operator new(0x5Cu);
  RedStoneDustMaterial::RedStoneDustMaterial(v1);
  return v1;
}

