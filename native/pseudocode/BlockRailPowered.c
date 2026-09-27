// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockRailPowered

//======================================================================
// BlockRailPowered::newObject(void)
// address: 0x002C1EA8   size: 0x2A (42 bytes)
//======================================================================
int __fastcall BlockRailPowered::newObject(BlockRailPowered *this)
{
  int v1; // r4

  v1 = operator new(0x3Cu);
  BlockMaterial::BlockMaterial((BlockMaterial *)v1);
  *(_BYTE *)(v1 + 48) = 1;
  *(_DWORD *)(v1 + 52) = 0;
  *(_DWORD *)(v1 + 56) = 0;
  *(_DWORD *)v1 = &off_461F38;
  return v1;
}


//======================================================================
// BlockRailPowered::~BlockRailPowered()
// address: 0x002EBE74   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16BlockRailPoweredD1Ev'
void __fastcall BlockRailPowered::~BlockRailPowered(BlockRailPowered *this)
{
  *(_DWORD *)this = &off_461F38;
  BlockRailBase::~BlockRailBase(this);
}


//======================================================================
// BlockRailPowered::~BlockRailPowered()
// address: 0x002EBE90   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockRailPowered::~BlockRailPowered(BlockRailPowered *this)
{
  BlockRailPowered::~BlockRailPowered(this);
  operator delete(this);
}


//======================================================================
// BlockRailPowered::checkNeighborPowered(World *,WCoord const&,bool,int,int)
// address: 0x002EBEA2   size: 0x7A (122 bytes)
//======================================================================
int __fastcall BlockRailPowered::checkNeighborPowered(
        BlockRailPowered *this,
        World *a2,
        const WCoord *a3,
        bool a4,
        int a5,
        int a6)
{
  int BlockID; // r0
  int v10; // r3
  int v11; // r2
  int isBlockIndirectlyGettingPowered; // r4
  int BlockData; // r0
  int v14; // r3
  int v16; // [sp+8h] [bp-Ch]

  BlockID = World::getBlockID(a2, a3, (int)a3, a4);
  v11 = *((_DWORD *)this + 8);
  isBlockIndirectlyGettingPowered = 0;
  if ( BlockID == v11 )
  {
    BlockData = World::getBlockData(a2, a3, v11, v10);
    v16 = BlockData;
    v14 = BlockData & 7;
    if ( a6 == 1 )
    {
      if ( (BlockData & 7) == 0 || (unsigned int)(v14 - 4) <= 1 )
        return isBlockIndirectlyGettingPowered;
    }
    else if ( a6 == 0 && (unsigned int)(v14 - 1) <= 2 )
    {
      return isBlockIndirectlyGettingPowered;
    }
    isBlockIndirectlyGettingPowered = 0;
    if ( (BlockData & 8) != 0 )
    {
      isBlockIndirectlyGettingPowered = World::isBlockIndirectlyGettingPowered(a2, a3);
      if ( isBlockIndirectlyGettingPowered == 0 )
        return BlockRailPowered::checkConnectPowered(this, a2, a3, v16, a4, a5 + 1);
    }
  }
  return isBlockIndirectlyGettingPowered;
}


//======================================================================
// BlockRailPowered::checkConnectPowered(World *,WCoord const&,int,bool,int)
// address: 0x002EBF1C   size: 0xFC (252 bytes)
//======================================================================
int __fastcall BlockRailPowered::checkConnectPowered(
        BlockRailPowered *this,
        World *a2,
        const WCoord *a3,
        char a4,
        bool a5,
        int a6)
{
  int result; // r0
  int v7; // r6
  int v8; // r1
  int v9; // r5
  int v10; // r6
  int v11; // r3
  int v12; // r3
  int v13; // r3
  int v16; // [sp+10h] [bp-1Ch] BYREF
  int v17; // [sp+14h] [bp-18h]
  int v18; // [sp+18h] [bp-14h]
  _DWORD v19[4]; // [sp+1Ch] [bp-10h] BYREF

  result = 0;
  if ( a6 <= 7 )
  {
    v7 = *((_DWORD *)a3 + 1);
    v8 = *(_DWORD *)a3;
    v18 = *((_DWORD *)a3 + 2);
    v17 = v7;
    v16 = v8;
    v9 = a4 & 7;
    v10 = 1;
    switch ( a4 & 7 )
    {
      case 0:
        if ( !a5 )
          goto LABEL_5;
        goto LABEL_4;
      case 1:
        if ( a5 )
          goto LABEL_8;
        goto LABEL_9;
      case 2:
        if ( a5 )
        {
LABEL_8:
          v12 = v16 - 1;
          goto LABEL_10;
        }
        v13 = v16 + 1;
        goto LABEL_15;
      case 3:
        if ( !a5 )
        {
LABEL_9:
          v12 = v16 + 1;
LABEL_10:
          v16 = v12;
          v10 = 1;
          goto LABEL_20;
        }
        v13 = v16 - 1;
LABEL_15:
        v16 = v13;
        v10 = 0;
        v9 = 1;
        ++v17;
        break;
      case 4:
        if ( a5 )
        {
LABEL_4:
          v11 = v18 + 1;
          goto LABEL_6;
        }
        v10 = 0;
        v9 = 0;
        --v18;
        ++v17;
        break;
      case 5:
        if ( a5 )
        {
          v10 = 0;
          ++v18;
          ++v17;
LABEL_20:
          v9 = v10;
        }
        else
        {
LABEL_5:
          v11 = v18 - 1;
LABEL_6:
          v18 = v11;
          v10 = 1;
          v9 = 0;
        }
        break;
      default:
        break;
    }
    result = BlockRailPowered::checkNeighborPowered(this, a2, (const WCoord *)&v16, a5, a6, v9);
    if ( result == 0 && v10 != 0 )
    {
      v19[1] = v17 + dword_51665C;
      v19[2] = v18 + dword_516660;
      v19[0] = v16 + dword_516658;
      return BlockRailPowered::checkNeighborPowered(this, a2, (const WCoord *)v19, a5, a6, v9);
    }
  }
  return result;
}


//======================================================================
// BlockRailPowered::updateNeighborChange(World *,WCoord const&,int,int,int)
// address: 0x002EC01C   size: 0xBE (190 bytes)
//======================================================================
void *__fastcall BlockRailPowered::updateNeighborChange(
        BlockRailPowered *this,
        World *a2,
        const WCoord *a3,
        char a4,
        int a5,
        int a6)
{
  void *result; // r0
  const WCoord *v10; // r1
  int v11; // r2
  World *v12; // r0
  int v13; // r3
  int v14; // r2
  int v15; // r0
  int v16; // r2
  int v17; // r3
  int v18; // r0
  _DWORD v20[4]; // [sp+14h] [bp-10h] BYREF

  result = (void *)World::isBlockIndirectlyGettingPowered(a2, a3);
  if ( result != nullptr
    || (result = (void *)BlockRailPowered::checkConnectPowered(this, a2, a3, a4, true, 0)) != nullptr
    || (result = (void *)BlockRailPowered::checkConnectPowered(this, a2, a3, a4, false, 0)) != nullptr )
  {
    if ( (a4 & 8) != 0 )
      return result;
    v10 = a3;
    v11 = a5 | 8;
    v12 = a2;
  }
  else
  {
    if ( (a4 & 8) == 0 )
      return result;
    v12 = a2;
    v11 = a5;
    v10 = a3;
  }
  World::setBlockData(v12, v10, v11, 3);
  v13 = *((_DWORD *)a3 + 2);
  v20[1] = *((_DWORD *)a3 + 1) + dword_51665C;
  v14 = *((_DWORD *)this + 8);
  v20[0] = *(_DWORD *)a3 + dword_516658;
  v20[2] = v13 + dword_516660;
  result = World::notifyBlocksOfNeighborChange(a2, (const WCoord *)v20, v14);
  if ( (unsigned int)(a5 - 2) <= 3 )
  {
    v15 = *((_DWORD *)a3 + 2);
    v20[1] = *((_DWORD *)a3 + 1) + dword_516668;
    v16 = *((_DWORD *)this + 8);
    v17 = v15 + dword_51666C;
    v18 = *(_DWORD *)a3;
    v20[2] = v17;
    v20[0] = v18 + dword_516664;
    return World::notifyBlocksOfNeighborChange(a2, (const WCoord *)v20, v16);
  }
  return result;
}

