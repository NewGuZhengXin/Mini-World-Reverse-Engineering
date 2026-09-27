// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: StructureComponent

//======================================================================
// StructureComponent::findIntersecting(std::vector<StructureComponent*,std::allocator<StructureComponent*>> &,StructureBoundingBox const&)
// address: 0x0029C488   size: 0x48 (72 bytes)
//======================================================================
_DWORD *__fastcall StructureComponent::findIntersecting(int *a1, _DWORD *a2)
{
  int v2; // r2
  int i; // r3
  _DWORD *result; // r0

  v2 = a1[1];
  for ( i = *a1; i != v2; i += 4 )
  {
    result = *(_DWORD **)i;
    if ( *(_DWORD *)(*(_DWORD *)i + 16) >= *a2
      && result[1] <= a2[3]
      && result[6] >= a2[2]
      && result[3] <= a2[5]
      && result[5] >= a2[1]
      && result[2] <= a2[4] )
    {
      return result;
    }
  }
  return nullptr;
}


//======================================================================
// StructureComponent::isLiquidInStructureBoundingBox(World *,StructureBoundingBox const&)
// address: 0x0029C4D0   size: 0x1A0 (416 bytes)
//======================================================================
int __fastcall StructureComponent::isLiquidInStructureBoundingBox(
        StructureComponent *this,
        World *a2,
        const StructureBoundingBox *a3)
{
  int v3; // r4
  int i; // r7
  int j; // r6
  int BlockID; // r1
  int Material; // r0
  int k; // r7
  int m; // r6
  int v11; // r1
  int v12; // r0
  int v13; // r1
  int v14; // r1
  int v15; // r0
  int n; // r6
  int v17; // r0
  int v18; // r1
  int v19; // r0
  int v20; // r1
  int v21; // r0
  int v22; // [sp+0h] [bp-2Ch]
  int v24; // [sp+8h] [bp-24h]
  int v25; // [sp+Ch] [bp-20h]
  int v26; // [sp+10h] [bp-1Ch]
  int v27; // [sp+14h] [bp-18h]
  _DWORD v28[4]; // [sp+1Ch] [bp-10h] BYREF

  v27 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 < *((_DWORD *)this + 1) - 1 )
    v27 = *((_DWORD *)this + 1) - 1;
  v26 = *((_DWORD *)a3 + 1);
  if ( v26 < *((_DWORD *)this + 2) - 1 )
    v26 = *((_DWORD *)this + 2) - 1;
  v3 = *((_DWORD *)a3 + 2);
  if ( v3 < *((_DWORD *)this + 3) - 1 )
    v3 = *((_DWORD *)this + 3) - 1;
  v25 = *((_DWORD *)a3 + 3);
  if ( v25 > *((_DWORD *)this + 4) + 1 )
    v25 = *((_DWORD *)this + 4) + 1;
  v22 = *((_DWORD *)a3 + 4);
  if ( v22 > *((_DWORD *)this + 5) + 1 )
    v22 = *((_DWORD *)this + 5) + 1;
  v24 = *((_DWORD *)a3 + 5);
  if ( v24 > *((_DWORD *)this + 6) + 1 )
    v24 = *((_DWORD *)this + 6) + 1;
  for ( i = v27; i <= v25; ++i )
  {
    for ( j = v3; j <= v24; ++j )
    {
      v28[1] = v26;
      v28[2] = j;
      v28[0] = i;
      BlockID = World::getBlockID(a2, (const WCoord *)v28);
      if ( BlockID > 0 )
      {
        Material = BlockMaterialMgr::getMaterial(
                     (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                     BlockID);
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)Material + 48))(Material) != 0 )
          return 1;
      }
      v28[1] = v22;
      v28[2] = j;
      v28[0] = i;
      v18 = World::getBlockID(a2, (const WCoord *)v28);
      if ( v18 > 0 )
      {
        v19 = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, v18);
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 48))(v19) != 0 )
          return 1;
      }
    }
  }
  for ( k = v27; k <= v25; ++k )
  {
    for ( m = v26; m <= v22; ++m )
    {
      v28[1] = m;
      v28[2] = v3;
      v28[0] = k;
      v11 = World::getBlockID(a2, (const WCoord *)v28);
      if ( v11 > 0 )
      {
        v12 = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, v11);
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 48))(v12) != 0 )
          return 1;
      }
      v28[1] = m;
      v28[2] = v24;
      v28[0] = k;
      v20 = World::getBlockID(a2, (const WCoord *)v28);
      if ( v20 > 0 )
      {
        v21 = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, v20);
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v21 + 48))(v21) != 0 )
          return 1;
      }
    }
  }
  while ( v3 <= v24 )
  {
    for ( n = v26; n <= v22; ++n )
    {
      v28[0] = v27;
      v28[1] = n;
      v28[2] = v3;
      v13 = World::getBlockID(a2, (const WCoord *)v28);
      if ( v13 <= 0
        || (v17 = BlockMaterialMgr::getMaterial(
                    (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                    v13),
            (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 48))(v17) == 0) )
      {
        v28[0] = v25;
        v28[1] = n;
        v28[2] = v3;
        v14 = World::getBlockID(a2, (const WCoord *)v28);
        if ( v14 <= 0 )
          continue;
        v15 = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, v14);
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 48))(v15) == 0 )
          continue;
      }
      return 1;
    }
    ++v3;
  }
  return 0;
}


//======================================================================
// StructureComponent::getXWithOffset(int,int)
// address: 0x0029C678   size: 0x28 (40 bytes)
//======================================================================
int __fastcall StructureComponent::getXWithOffset(StructureComponent *this, int a2, int a3)
{
  int result; // r0

  switch ( *((_DWORD *)this + 7) )
  {
    case 0:
    case 2:
      result = a2 + *((_DWORD *)this + 1);
      break;
    case 1:
      result = *((_DWORD *)this + 4) - a3;
      break;
    case 3:
      result = a3 + *((_DWORD *)this + 1);
      break;
    default:
      result = a2;
      break;
  }
  return result;
}


//======================================================================
// StructureComponent::getYWithOffset(int)
// address: 0x0029C6A0   size: 0x12 (18 bytes)
//======================================================================
int __fastcall StructureComponent::getYWithOffset(StructureComponent *this, int a2)
{
  if ( *((_DWORD *)this + 7) == -1 )
    return a2;
  else
    return a2 + *((_DWORD *)this + 2);
}


//======================================================================
// StructureComponent::getZWithOffset(int,int)
// address: 0x0029C6B2   size: 0x28 (40 bytes)
//======================================================================
int __fastcall StructureComponent::getZWithOffset(StructureComponent *this, int a2, int a3)
{
  int result; // r0

  switch ( *((_DWORD *)this + 7) )
  {
    case 0:
      result = a3 + *((_DWORD *)this + 3);
      break;
    case 1:
    case 3:
      result = a2 + *((_DWORD *)this + 3);
      break;
    case 2:
      result = *((_DWORD *)this + 6) - a3;
      break;
    default:
      result = a3;
      break;
  }
  return result;
}


//======================================================================
// StructureComponent::getMetadataWithOffset(int,int)
// address: 0x0029C6DC   size: 0x178 (376 bytes)
//======================================================================
int __fastcall StructureComponent::getMetadataWithOffset(StructureComponent *this, int a2, int a3)
{
  int v3; // r3
  int result; // r0
  char v5; // r0

  v3 = *((_DWORD *)this + 7);
  if ( a2 == 725 )
  {
    result = a3;
    if ( (v3 & 0xFFFFFFFD) == 1 )
      return a3 != 1;
    return result;
  }
  if ( (a2 & 0xFFFFFFFD) != 0x32C )
  {
    if ( (unsigned int)(a2 - 520) <= 5 || (unsigned int)(a2 - 527) <= 4 )
    {
      result = *((_DWORD *)this + 7);
      if ( v3 == 0 )
      {
LABEL_25:
        result = 3;
        if ( a3 != 2 )
        {
          result = a3;
          if ( a3 == 3 )
            return 2;
        }
        return result;
      }
      if ( v3 == 1 )
      {
        if ( a3 != 0 )
        {
          if ( a3 != 1 )
          {
            if ( a3 == 2 )
              return 0;
            if ( a3 == 3 )
              return result;
            return a3;
          }
          return 3;
        }
        return 2;
      }
      if ( v3 != 3 )
        return a3;
      if ( a3 == 0 )
        return 2;
      if ( a3 == 1 )
        return result;
      if ( a3 != 2 )
        return a3 != 3 ? a3 : 0;
      return 1;
    }
    if ( a2 == 813 )
    {
      if ( v3 == 0 )
        goto LABEL_25;
      if ( v3 == 1 )
      {
        result = 4;
        if ( a3 == 2 )
          return result;
        result = 5;
        if ( a3 == 3 )
          return result;
        result = 2;
      }
      else
      {
        result = a3;
        if ( v3 != 3 )
          return result;
        result = 5;
        if ( a3 == 2 )
          return result;
        result = 4;
        if ( a3 == 3 )
          return result;
        result = 2;
      }
      if ( a3 == 4 )
        return result;
      result = a3;
      if ( a3 != 5 )
        return result;
      return 3;
    }
    if ( a2 != 716 )
    {
      result = *((_DWORD *)this + 7);
      switch ( v3 )
      {
        case 0:
          result = a3;
          if ( (a3 & 0xFFFFFFFD) == 0 )
          {
            result = a3 + 1;
            if ( (a3 & 1) != 0 )
              return a3 - 1;
          }
          return result;
        case 1:
          if ( a3 == 2 )
            return result;
          result = 3;
          break;
        case 3:
          if ( a3 == 2 )
            return result;
          result = 1;
          break;
        default:
          return a3;
      }
      if ( a3 == 0 )
        return result;
      result = 2;
      if ( a3 == 1 )
        return result;
      return a3 != 3 ? a3 : 0;
    }
    result = *((_DWORD *)this + 7);
    switch ( v3 )
    {
      case 0:
        result = 4;
        if ( a3 == 3 )
          return result;
        result = a3;
        if ( a3 != 4 )
          return result;
        return 3;
      case 1:
        if ( a3 == 3 )
          return result;
        result = 2;
        if ( a3 == 4 )
          return result;
        result = 3;
        break;
      case 3:
        if ( a3 == 3 )
          return 2;
        if ( a3 == 4 )
          return 1;
        break;
      default:
        return a3;
    }
    if ( a3 != 2 )
    {
      result = a3;
      if ( a3 == 1 )
        return 4;
    }
    return result;
  }
  result = *((_DWORD *)this + 7);
  if ( v3 != 0 )
  {
    if ( v3 == 1 )
    {
      v5 = a3 + 1;
    }
    else
    {
      result = a3;
      if ( v3 != 3 )
        return result;
      v5 = a3 + 3;
    }
    return v5 & 3;
  }
  if ( a3 == 0 )
    return 2;
  if ( a3 != 2 )
    return a3;
  return result;
}


//======================================================================
// StructureComponent::placeBlockAtCurrentPosition(World *,int,int,int,int,int,StructureBoundingBox const&)
// address: 0x0029C864   size: 0x56 (86 bytes)
//======================================================================
int __fastcall StructureComponent::placeBlockAtCurrentPosition(
        StructureComponent *this,
        World *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        const StructureBoundingBox *a8)
{
  int XWithOffset; // r6
  int YWithOffset; // r5
  int ZWithOffset; // r4
  int result; // r0
  _DWORD v16[4]; // [sp+14h] [bp-10h] BYREF

  XWithOffset = StructureComponent::getXWithOffset(this, a5, a7);
  YWithOffset = StructureComponent::getYWithOffset(this, a6);
  ZWithOffset = StructureComponent::getZWithOffset(this, a5, a7);
  result = StructureBoundingBox::isVecInside(a8, XWithOffset, YWithOffset, ZWithOffset);
  if ( result != 0 )
  {
    v16[1] = YWithOffset;
    v16[2] = ZWithOffset;
    v16[0] = XWithOffset;
    return World::setBlockAll(a2, (const WCoord *)v16, a3, a4, 2);
  }
  return result;
}


//======================================================================
// StructureComponent::getBlockIdAtCurrentPosition(World *,int,int,int,StructureBoundingBox const&)
// address: 0x0029C8BA   size: 0x52 (82 bytes)
//======================================================================
int __fastcall StructureComponent::getBlockIdAtCurrentPosition(
        StructureComponent *this,
        World *a2,
        int a3,
        int a4,
        int a5,
        const StructureBoundingBox *a6)
{
  int XWithOffset; // r6
  int YWithOffset; // r5
  int ZWithOffset; // r4
  int isVecInside; // r3
  int result; // r0
  _DWORD v15[4]; // [sp+Ch] [bp-10h] BYREF

  XWithOffset = StructureComponent::getXWithOffset(this, a3, a5);
  YWithOffset = StructureComponent::getYWithOffset(this, a4);
  ZWithOffset = StructureComponent::getZWithOffset(this, a3, a5);
  isVecInside = StructureBoundingBox::isVecInside(a6, XWithOffset, YWithOffset, ZWithOffset);
  result = 0;
  if ( isVecInside != 0 )
  {
    v15[0] = XWithOffset;
    v15[1] = YWithOffset;
    v15[2] = ZWithOffset;
    return World::getBlockID(a2, (const WCoord *)v15);
  }
  return result;
}


//======================================================================
// StructureComponent::fillWithAir(World *,StructureBoundingBox const&,int,int,int,int,int,int)
// address: 0x0029C90C   size: 0x4A (74 bytes)
//======================================================================
int __fastcall StructureComponent::fillWithAir(
        int this,
        World *a2,
        const StructureBoundingBox *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int i; // r4
  int j; // r6
  StructureComponent *v13; // [sp+14h] [bp-10h]

  v13 = (StructureComponent *)this;
  while ( a5 <= a8 )
  {
    for ( i = a4; i <= a7; ++i )
    {
      for ( j = a6; j <= a9; ++j )
        this = StructureComponent::placeBlockAtCurrentPosition(v13, a2, 0, 0, i, a5, j, a3);
    }
    ++a5;
  }
  return this;
}


//======================================================================
// StructureComponent::fillWithBlocks(World *,StructureBoundingBox const&,int,int,int,int,int,int,int,int,bool)
// address: 0x0029C956   size: 0xA2 (162 bytes)
//======================================================================
int __fastcall StructureComponent::fillWithBlocks(
        int this,
        World *a2,
        const StructureBoundingBox *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        bool a12)
{
  int v12; // r4
  StructureComponent *v13; // r7
  int i; // r5
  int j; // r6

  v12 = a5;
  v13 = (StructureComponent *)this;
  while ( v12 <= a8 )
  {
    for ( i = a4; i <= a7; ++i )
    {
      for ( j = a6; j <= a9; ++j )
      {
        if ( a12 )
        {
          this = StructureComponent::getBlockIdAtCurrentPosition(v13, a2, i, v12, j, a3);
          if ( this == 0 )
            continue;
        }
        if ( v12 == a5 || v12 == a8 || i == a4 || i == a7 || j == a6 || j == a9 )
          this = StructureComponent::placeBlockAtCurrentPosition(v13, a2, a10, 0, i, v12, j, a3);
        else
          this = StructureComponent::placeBlockAtCurrentPosition(v13, a2, a11, 0, i, v12, j, a3);
      }
    }
    ++v12;
  }
  return this;
}


//======================================================================
// StructureComponent::fillWithMetadataBlocks(World *,StructureBoundingBox const&,int,int,int,int,int,int,int,int,int,int,bool)
// address: 0x0029C9F8   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall StructureComponent::fillWithMetadataBlocks(
        int this,
        World *a2,
        const StructureBoundingBox *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        bool a14)
{
  int v14; // r4
  StructureComponent *v15; // r7
  int i; // r5
  int j; // r6

  v14 = a5;
  v15 = (StructureComponent *)this;
  while ( v14 <= a8 )
  {
    for ( i = a4; i <= a7; ++i )
    {
      for ( j = a6; j <= a9; ++j )
      {
        if ( a14 )
        {
          this = StructureComponent::getBlockIdAtCurrentPosition(v15, a2, i, v14, j, a3);
          if ( this == 0 )
            continue;
        }
        if ( v14 == a5 || v14 == a8 || i == a4 || i == a7 || j == a6 || j == a9 )
          this = StructureComponent::placeBlockAtCurrentPosition(v15, a2, a10, a11, i, v14, j, a3);
        else
          this = StructureComponent::placeBlockAtCurrentPosition(v15, a2, a12, a13, i, v14, j, a3);
      }
    }
    ++v14;
  }
  return this;
}


//======================================================================
// StructureComponent::fillWithRandomizedBlocks(World *,StructureBoundingBox const&,int,int,int,int,int,int,bool,ChunkRandGen &,StructurePieceBlockSelector *)
// address: 0x0029CA9E   size: 0x2 (2 bytes)
//======================================================================
void StructureComponent::fillWithRandomizedBlocks()
{
  ;
}


//======================================================================
// StructureComponent::randomlyFillWithBlocks(World *,StructureBoundingBox const&,ChunkRandGen,float,int,int,int,int,int,int,int,int,bool)
// address: 0x0029CAA0   size: 0xBA (186 bytes)
//======================================================================
int __fastcall StructureComponent::randomlyFillWithBlocks(
        int result,
        World *a2,
        const StructureBoundingBox *a3,
        int a4,
        int a5,
        float a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        char a15)
{
  int v15; // r4
  StructureComponent *v16; // r7
  int i; // r5
  int j; // r6
  int varg_r3; // [sp+3Ch] [bp+18h] BYREF

  v15 = a8;
  v16 = (StructureComponent *)result;
  while ( v15 <= a11 )
  {
    for ( i = a7; i <= a10; ++i )
    {
      for ( j = a9; j <= a12; ++j )
      {
        result = ChunkRandGen::getFloat((ChunkRandGen *)&varg_r3) <= a6;
        if ( result != 0
          && (a15 == 0 || (result = StructureComponent::getBlockIdAtCurrentPosition(v16, a2, i, v15, j, a3)) != 0) )
        {
          if ( v15 == a8 || v15 == a11 || i == a7 || i == a10 || j == a9 || j == a12 )
            result = StructureComponent::placeBlockAtCurrentPosition(v16, a2, a13, 0, i, v15, j, a3);
          else
            result = StructureComponent::placeBlockAtCurrentPosition(v16, a2, a14, 0, i, v15, j, a3);
        }
      }
    }
    ++v15;
  }
  return result;
}


//======================================================================
// StructureComponent::randomlyPlaceBlock(World *,StructureBoundingBox const&,ChunkRandGen &,float,int,int,int,int,int)
// address: 0x0029CB5A   size: 0x34 (52 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> StructureComponent::randomlyPlaceBlock(
        StructureComponent *this,
        World *a2,
        const StructureBoundingBox *a3,
        ChunkRandGen *a4,
        float a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  if ( ChunkRandGen::getFloat(a4) < a5 )
    StructureComponent::placeBlockAtCurrentPosition(this, a2, a9, a10, a6, a7, a8, a3);
}


//======================================================================
// StructureComponent::randomlyRareFillWithBlocks(World *,StructureBoundingBox const&,int,int,int,int,int,int,int,bool)
// address: 0x0029CB90   size: 0x12E (302 bytes)
//======================================================================
float __fastcall StructureComponent::randomlyRareFillWithBlocks(
        StructureComponent *this,
        World *a2,
        const StructureBoundingBox *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        bool a11)
{
  float result; // r0
  int i; // r6
  int v14; // r7
  int j; // r4
  float v16; // [sp+14h] [bp-38h]
  float v17; // [sp+18h] [bp-34h]
  float v18; // [sp+1Ch] [bp-30h]
  float v19; // [sp+28h] [bp-24h]
  float v23; // [sp+38h] [bp-14h]
  float v24; // [sp+3Ch] [bp-10h]

  v23 = (float)(a8 - a5 + 1);
  v17 = (float)(a7 - a4 + 1) * 0.5;
  v24 = (float)a4 + v17;
  v18 = (float)(a9 - a6 + 1) * 0.5;
  result = (float)a6 + v18;
  for ( i = a5; i <= a8; ++i )
  {
    v14 = a4;
    result = (float)(i - a5) / v23;
    while ( v14 <= a7 )
    {
      result = (float)((float)v14 - v24) / v17;
      for ( j = a6; j <= a9; ++j )
      {
        v19 = (float)((float)j - (float)((float)a6 + v18)) / v18;
        if ( a11 )
        {
          result = COERCE_FLOAT(StructureComponent::getBlockIdAtCurrentPosition(this, a2, v14, i, j, a3));
          if ( result == 0.0 )
            continue;
        }
        v16 = (float)((float)((float)((float)v14 - v24) / v17) * (float)((float)((float)v14 - v24) / v17))
            + (float)((float)((float)(i - a5) / v23) * (float)((float)(i - a5) / v23));
        LODWORD(result) = (float)(v16 + (float)(v19 * v19)) <= 1.05;
        if ( (float)(v16 + (float)(v19 * v19)) <= 1.05 )
          result = COERCE_FLOAT(StructureComponent::placeBlockAtCurrentPosition(this, a2, a10, 0, v14, i, j, a3));
      }
      ++v14;
    }
  }
  return result;
}


//======================================================================
// StructureComponent::clearCurrentPositionBlocksUpwards(World *,int,int,int,StructureBoundingBox)
// address: 0x0029CCC4   size: 0x72 (114 bytes)
//======================================================================
int __fastcall StructureComponent::clearCurrentPositionBlocksUpwards(
        StructureComponent *a1,
        World *a2,
        int a3,
        int a4,
        int a5,
        StructureBoundingBox *a6)
{
  int XWithOffset; // r7
  int YWithOffset; // r5
  int ZWithOffset; // r6
  int result; // r0
  int v14; // [sp+14h] [bp-10h] BYREF
  int v15; // [sp+18h] [bp-Ch]
  int v16; // [sp+1Ch] [bp-8h]

  XWithOffset = StructureComponent::getXWithOffset(a1, a3, a5);
  YWithOffset = StructureComponent::getYWithOffset(a1, a4);
  ZWithOffset = StructureComponent::getZWithOffset(a1, a3, a5);
  result = StructureBoundingBox::isVecInside(a6, XWithOffset, YWithOffset, ZWithOffset);
  if ( result != 0 )
  {
    while ( 1 )
    {
      v14 = XWithOffset;
      v15 = YWithOffset;
      v16 = ZWithOffset;
      result = World::getBlockID(a2, (const WCoord *)&v14);
      if ( result == 0 || YWithOffset > 254 )
        break;
      v15 = YWithOffset;
      v14 = XWithOffset;
      v16 = ZWithOffset;
      World::setBlockAll(a2, (const WCoord *)&v14, 0, 0, 2);
      ++YWithOffset;
    }
  }
  return result;
}


//======================================================================
// StructureComponent::fillCurrentPositionBlocksDownwards(World *,int,int,int,int,int,StructureBoundingBox)
// address: 0x0029CD36   size: 0x7E (126 bytes)
//======================================================================
int __fastcall StructureComponent::fillCurrentPositionBlocksDownwards(
        StructureComponent *a1,
        World *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        StructureBoundingBox *a8)
{
  int result; // r0
  int BlockMaterial; // r0
  int XWithOffset; // [sp+14h] [bp-10h] BYREF
  int YWithOffset; // [sp+18h] [bp-Ch]
  int ZWithOffset; // [sp+1Ch] [bp-8h]

  XWithOffset = StructureComponent::getXWithOffset(a1, a5, a7);
  YWithOffset = StructureComponent::getYWithOffset(a1, a6);
  ZWithOffset = StructureComponent::getZWithOffset(a1, a5, a7);
  result = StructureBoundingBox::isVecInside(a8, XWithOffset, YWithOffset, ZWithOffset);
  if ( result != 0 )
  {
    while ( 1 )
    {
      result = World::getBlockID(a2, (const WCoord *)&XWithOffset);
      if ( result != 0 )
      {
        BlockMaterial = World::getBlockMaterial(a2, (const WCoord *)&XWithOffset);
        result = (*(int (__fastcall **)(int))(*(_DWORD *)BlockMaterial + 48))(BlockMaterial);
        if ( result == 0 )
          break;
      }
      if ( YWithOffset <= 1 )
        break;
      World::setBlockAll(a2, (const WCoord *)&XWithOffset, a3, a4, 2);
      --YWithOffset;
    }
  }
  return result;
}


//======================================================================
// StructureComponent::generateStructureChestContents(World *,StructureBoundingBox const&,ChunkRandGen &,int,int,int,std::vector<WeightedRandomChestContent,std::allocator<WeightedRandomChestContent>> &,int)
// address: 0x0029CDB4   size: 0x6C (108 bytes)
//======================================================================
int __fastcall StructureComponent::generateStructureChestContents(
        StructureComponent *a1,
        WorldContainerMgr **a2,
        StructureBoundingBox *a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int isVecInside; // r6
  int XWithOffset; // [sp+Ch] [bp-10h] BYREF
  int YWithOffset; // [sp+10h] [bp-Ch]
  int ZWithOffset; // [sp+14h] [bp-8h]

  XWithOffset = StructureComponent::getXWithOffset(a1, a5, a7);
  YWithOffset = StructureComponent::getYWithOffset(a1, a6);
  ZWithOffset = StructureComponent::getZWithOffset(a1, a5, a7);
  isVecInside = StructureBoundingBox::isVecInside(a3, XWithOffset, YWithOffset, ZWithOffset);
  if ( isVecInside == 0 || World::getBlockID((World *)a2, (const WCoord *)&XWithOffset) == 801 )
    return 0;
  World::setBlockAll((World *)a2, (const WCoord *)&XWithOffset, 801, 0, 2);
  WorldContainerMgr::addStorageBox(a2[32], XWithOffset, YWithOffset, ZWithOffset);
  return isVecInside;
}


//======================================================================
// StructureComponent::generateStructureDispenserContents(World *,StructureBoundingBox const&,ChunkRandGen,int,int,int,int,std::vector<WeightedRandomChestContent,std::allocator<WeightedRandomChestContent>> &,int)
// address: 0x0029CE24   size: 0x30 (48 bytes)
//======================================================================
int __fastcall StructureComponent::generateStructureDispenserContents(
        StructureComponent *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  StructureComponent::getXWithOffset(a1, a6, a8);
  StructureComponent::getYWithOffset(a1, a7);
  StructureComponent::getZWithOffset(a1, a6, a8);
  return 0;
}


//======================================================================
// StructureComponent::placeDoorAtCurrentPosition(World *,StructureBoundingBox const&,ChunkRandGen,int,int,int,int)
// address: 0x0029CE54   size: 0x2E (46 bytes)
//======================================================================
int __fastcall StructureComponent::placeDoorAtCurrentPosition(
        StructureComponent *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  StructureComponent::getXWithOffset(a1, a6, a8);
  StructureComponent::getYWithOffset(a1, a7);
  return StructureComponent::getZWithOffset(a1, a6, a8);
}

