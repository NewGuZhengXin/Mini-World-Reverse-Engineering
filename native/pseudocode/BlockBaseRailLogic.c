// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockBaseRailLogic

//======================================================================
// BlockBaseRailLogic::isMinecartTrack(WCoord const&)
// address: 0x002DC85C   size: 0x54 (84 bytes)
//======================================================================
bool __fastcall BlockBaseRailLogic::isMinecartTrack(BlockRailBase **this, const WCoord *a2, const WCoord *a3)
{
  const WCoord *v6; // r2
  BlockRailBase *v7; // r7
  const WCoord *v8; // r2
  BlockRailBase *v9; // [sp+4h] [bp-18h]
  _DWORD v10[4]; // [sp+Ch] [bp-10h] BYREF

  if ( BlockRailBase::isRailBlockAt(*this, a2, a3) )
    return true;
  v9 = *this;
  operator+(v10, (int *)a2, &dword_516664);
  if ( BlockRailBase::isRailBlockAt(v9, (World *)v10, v6) )
    return true;
  v7 = *this;
  operator+(v10, (int *)a2, &dword_516658);
  return BlockRailBase::isRailBlockAt(v7, (World *)v10, v8);
}


//======================================================================
// BlockBaseRailLogic::isRailChunkPositionCorrect(BlockBaseRailLogic*)
// address: 0x002DC8B4   size: 0x34 (52 bytes)
//======================================================================
int __fastcall BlockBaseRailLogic::isRailChunkPositionCorrect(int a1, int a2)
{
  _DWORD *v2; // r3
  int v3; // r0
  int i; // r2

  v2 = *(_DWORD **)(a1 + 20);
  v3 = -1431655765 * ((*(_DWORD *)(a1 + 24) - (int)v2) >> 2);
  for ( i = 0; i != v3; ++i )
  {
    if ( *v2 == *(_DWORD *)(a2 + 4) && v2[2] == *(_DWORD *)(a2 + 12) )
      return 1;
    v2 += 3;
  }
  return 0;
}


//======================================================================
// BlockBaseRailLogic::isPartOfTrack(WCoord const&)
// address: 0x002DC8EC   size: 0x34 (52 bytes)
//======================================================================
int __fastcall BlockBaseRailLogic::isPartOfTrack(int a1, _DWORD *a2)
{
  _DWORD *v2; // r3
  int v3; // r0
  int i; // r2

  v2 = *(_DWORD **)(a1 + 20);
  v3 = -1431655765 * ((*(_DWORD *)(a1 + 24) - (int)v2) >> 2);
  for ( i = 0; i != v3; ++i )
  {
    if ( *v2 == *a2 && v2[2] == a2[2] )
      return 1;
    v2 += 3;
  }
  return 0;
}


//======================================================================
// BlockBaseRailLogic::getNumberOfAdjacentTracks(void)
// address: 0x002DC924   size: 0x38 (56 bytes)
//======================================================================
int __fastcall BlockBaseRailLogic::getNumberOfAdjacentTracks(BlockBaseRailLogic *this)
{
  int v1; // r4
  int v3; // r6
  const WCoord *v4; // r2
  _DWORD v6[4]; // [sp+Ch] [bp-10h] BYREF

  v1 = 0;
  v3 = 0;
  do
  {
    operator+(v6, (int *)this + 1, &g_DirectionCoord[v1]);
    v1 += 3;
    v3 += BlockBaseRailLogic::isMinecartTrack((BlockRailBase **)this, (const WCoord *)v6, v4);
  }
  while ( v1 != 12 );
  return v3;
}


//======================================================================
// BlockBaseRailLogic::canConnectTo(BlockBaseRailLogic*)
// address: 0x002DC960   size: 0x20 (32 bytes)
//======================================================================
int __fastcall BlockBaseRailLogic::canConnectTo(int a1, int a2)
{
  int result; // r0

  result = BlockBaseRailLogic::isRailChunkPositionCorrect(a1, a2);
  if ( result == 0 )
    return -1431655765 * ((*(_DWORD *)(a1 + 24) - *(_DWORD *)(a1 + 20)) >> 2)
         - 2
         - (-1431655765 * ((*(_DWORD *)(a1 + 24) - *(_DWORD *)(a1 + 20)) >> 2)
          - 3
          + (-1431655765 * ((*(_DWORD *)(a1 + 24) - *(_DWORD *)(a1 + 20)) >> 2) == 2));
  return result;
}


//======================================================================
// BlockBaseRailLogic::setBasicRail(int)
// address: 0x002DCA54   size: 0x176 (374 bytes)
//======================================================================
__int64 __fastcall BlockBaseRailLogic::setBasicRail(__int64 this, int a2, int a3)
{
  _DWORD *v3; // r4
  int v4; // r2
  int v5; // r6
  int v6; // r3
  int v7; // r2
  int v8; // r3
  int v9; // r3
  int v10; // r2
  int v11; // r3
  int v12; // r2
  int v13; // r3
  int v14; // r2
  int v15; // r3
  int v16; // r2
  int v17; // r3
  int v18; // r3
  int v19; // r3
  __int64 v21; // [sp+0h] [bp-10h] BYREF
  int v22; // [sp+8h] [bp-8h]
  int v23; // [sp+Ch] [bp-4h]

  v21 = this;
  v22 = a2;
  v23 = a3;
  v3 = (_DWORD *)this;
  *(_DWORD *)(this + 24) = *(_DWORD *)(this + 20);
  switch ( HIDWORD(this) )
  {
    case 0:
      v4 = *(_DWORD *)(this + 8);
      v5 = this + 20;
      v6 = *(_DWORD *)(this + 12) - 1;
      HIDWORD(v21) = *(_DWORD *)(this + 4);
      v23 = v6;
      v22 = v4;
      std::vector<WCoord>::emplace_back<WCoord>(this + 20, (_DWORD *)&v21 + 1);
      v22 = v3[2];
LABEL_20:
      v17 = v3[3] + 1;
LABEL_26:
      HIDWORD(v21) = v3[1];
      goto LABEL_27;
    case 1:
      HIDWORD(this) = *(_DWORD *)(this + 8);
      v5 = this + 20;
      HIDWORD(v21) = *(_DWORD *)(this + 4) - 1;
      v22 = HIDWORD(this);
LABEL_9:
      v23 = *(_DWORD *)(this + 12);
      std::vector<WCoord>::emplace_back<WCoord>(v5, (_DWORD *)&v21 + 1);
      v22 = v3[2];
      v23 = v3[3];
      HIDWORD(v21) = v3[1] + 1;
      goto LABEL_28;
    case 2:
      v7 = *(_DWORD *)(this + 8);
      HIDWORD(v21) = *(_DWORD *)(this + 4) - 1;
      v8 = *(_DWORD *)(this + 12);
      v5 = this + 20;
      v22 = v7;
      v23 = v8;
      std::vector<WCoord>::emplace_back<WCoord>(this + 20, (_DWORD *)&v21 + 1);
      v9 = v3[2] + 1;
      v10 = v3[1] + 1;
      v23 = v3[3];
      HIDWORD(v21) = v10;
      v22 = v9;
LABEL_28:
      std::vector<WCoord>::emplace_back<WCoord>(v5, (_DWORD *)&v21 + 1);
      return v21;
    case 3:
      v11 = *(_DWORD *)(this + 8) + 1;
      v5 = this + 20;
      HIDWORD(v21) = *(_DWORD *)(this + 4) - 1;
      v22 = v11;
      goto LABEL_9;
    case 4:
      v12 = *(_DWORD *)(this + 8) + 1;
      v13 = *(_DWORD *)(this + 12) - 1;
      v5 = this + 20;
      HIDWORD(v21) = *(_DWORD *)(this + 4);
      v22 = v12;
      v23 = v13;
LABEL_19:
      std::vector<WCoord>::emplace_back<WCoord>(v5, (_DWORD *)&v21 + 1);
      v22 = v3[2];
      goto LABEL_20;
    case 5:
      v14 = *(_DWORD *)(this + 8);
      v5 = this + 20;
      v15 = *(_DWORD *)(this + 12) - 1;
      HIDWORD(v21) = *(_DWORD *)(this + 4);
      v22 = v14;
      v23 = v15;
      std::vector<WCoord>::emplace_back<WCoord>(this + 20, (_DWORD *)&v21 + 1);
      v16 = v3[2];
      v17 = v3[3] + 1;
      HIDWORD(v21) = v3[1];
      v22 = v16 + 1;
LABEL_27:
      v23 = v17;
      goto LABEL_28;
    case 6:
      v5 = this + 20;
      v18 = *(_DWORD *)(this + 4) + 1;
LABEL_18:
      HIDWORD(v21) = v18;
      v22 = *(_DWORD *)(this + 8);
      v23 = *(_DWORD *)(this + 12);
      goto LABEL_19;
    case 7:
      v5 = this + 20;
      v18 = *(_DWORD *)(this + 4) - 1;
      goto LABEL_18;
    case 8:
      v5 = this + 20;
      v19 = *(_DWORD *)(this + 4) - 1;
LABEL_25:
      HIDWORD(v21) = v19;
      v22 = *(_DWORD *)(this + 8);
      v23 = *(_DWORD *)(this + 12);
      std::vector<WCoord>::emplace_back<WCoord>(v5, (_DWORD *)&v21 + 1);
      v22 = v3[2];
      v17 = v3[3] - 1;
      goto LABEL_26;
    case 9:
      v5 = this + 20;
      v19 = *(_DWORD *)(this + 4) + 1;
      goto LABEL_25;
    default:
      break;
  }
  return v21;
}


//======================================================================
// BlockBaseRailLogic::BlockBaseRailLogic(BlockRailBase *,World *,WCoord const&)
// address: 0x002DCBCC   size: 0x62 (98 bytes)
//======================================================================
// Alternative name is '_ZN18BlockBaseRailLogicC2EP13BlockRailBaseP5WorldRK6WCoord'
void __fastcall BlockBaseRailLogic::BlockBaseRailLogic(
        BlockBaseRailLogic *this,
        BlockRailBase *a2,
        World *a3,
        const WCoord *a4)
{
  int v5; // r3
  int BlockID; // r6
  int v7; // r2
  int v8; // r3
  __int64 v9; // r4
  _BYTE *v10; // r0
  int v11; // r2
  int v12; // r3

  v9 = __PAIR64__((unsigned int)a4, (unsigned int)this);
  *(_DWORD *)this = a3;
  *((_DWORD *)this + 1) = *(_DWORD *)a4;
  *((_DWORD *)this + 2) = *((_DWORD *)a4 + 1);
  v5 = *((_DWORD *)a4 + 2);
  *((_DWORD *)this + 8) = a2;
  *((_DWORD *)this + 3) = v5;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  BlockID = World::getBlockID(a3, (const WCoord *)HIDWORD(v9), (int)a3, 0);
  HIDWORD(v9) = World::getBlockData(a3, (const WCoord *)HIDWORD(v9), v7, v8);
  v10 = (_BYTE *)(BlockMaterialMgr::getMaterial(
                    (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                    BlockID)
                + 48);
  v12 = (unsigned __int8)*v10;
  if ( *v10 != 0 )
  {
    *(_BYTE *)(v9 + 16) = 1;
    v12 = 8;
    HIDWORD(v9) &= ~8u;
  }
  else
  {
    *(_BYTE *)(v9 + 16) = v12;
  }
  BlockBaseRailLogic::setBasicRail(v9, v11, v12);
}


//======================================================================
// BlockBaseRailLogic::getRailLogic(WCoord const&)
// address: 0x002DCC40   size: 0x9C (156 bytes)
//======================================================================
bool __fastcall BlockBaseRailLogic::getRailLogic(BlockRailBase **this, const WCoord **a2, const WCoord *a3)
{
  BlockBaseRailLogic *v5; // r6
  _BOOL4 result; // r0
  const WCoord *v7; // r3
  const WCoord *v8; // r2
  BlockRailBase *v9; // r0
  BlockBaseRailLogic *v10; // r5
  const WCoord *v11; // r3
  const WCoord *v12; // r2
  BlockRailBase *v13; // r0
  _DWORD v14[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v15[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( BlockRailBase::isRailBlockAt(*this, (World *)a2, a3) )
  {
    v5 = (BlockBaseRailLogic *)operator new(0x24u);
    BlockBaseRailLogic::BlockBaseRailLogic(v5, *(this + 8), *this, (const WCoord *)a2);
    return (bool)v5;
  }
  v7 = a2[1];
  v8 = a2[2];
  v14[0] = *a2;
  v9 = *this;
  v14[1] = (char *)v7 + 1;
  v14[2] = v8;
  if ( BlockRailBase::isRailBlockAt(v9, (World *)v14, v8) )
  {
    v10 = (BlockBaseRailLogic *)operator new(0x24u);
    BlockBaseRailLogic::BlockBaseRailLogic(v10, *(this + 8), *this, (const WCoord *)v14);
  }
  else
  {
    v11 = a2[2];
    v12 = (const WCoord *)((char *)a2[1] - 1);
    v13 = *this;
    v15[0] = *a2;
    v15[1] = v12;
    v15[2] = v11;
    result = BlockRailBase::isRailBlockAt(v13, (World *)v15, v12);
    if ( !result )
      return result;
    v10 = (BlockBaseRailLogic *)operator new(0x24u);
    BlockBaseRailLogic::BlockBaseRailLogic(v10, *(this + 8), *this, (const WCoord *)v15);
  }
  return (bool)v10;
}


//======================================================================
// BlockBaseRailLogic::refreshConnectedTracks(void)
// address: 0x002DCCDC   size: 0x6C (108 bytes)
//======================================================================
int __fastcall BlockBaseRailLogic::refreshConnectedTracks(int this, int a2, int a3)
{
  int v3; // r4
  int v4; // r5
  _DWORD *v5; // r6
  int v6; // r7
  _DWORD *v7; // r3
  _DWORD *v8; // r1

  v3 = *(_DWORD *)(this + 20);
  v4 = this;
  while ( v3 != *(_DWORD *)(v4 + 24) )
  {
    this = BlockBaseRailLogic::getRailLogic((BlockRailBase **)v4, (const WCoord **)v3, (const WCoord *)a3);
    v5 = (_DWORD *)this;
    v6 = v3 + 12;
    if ( this != 0 && (this = BlockBaseRailLogic::isRailChunkPositionCorrect(this, v4)) != 0 )
    {
      this = v5[1];
      *(_DWORD *)v3 = this;
      *(_DWORD *)(v3 + 4) = v5[2];
      *(_DWORD *)(v3 + 8) = v5[3];
      v3 += 12;
    }
    else
    {
      a3 = *(_DWORD *)(v4 + 24);
      v7 = (_DWORD *)(v3 + 12);
      if ( v6 != a3 )
      {
        a3 = -1431655765 * ((a3 - v6) >> 2);
        while ( a3 > 0 )
        {
          v8 = v7 - 3;
          *v8 = *v7;
          --a3;
          v8[1] = v7[1];
          this = v7[2];
          v7 += 3;
          v8[2] = this;
        }
      }
      *(_DWORD *)(v4 + 24) -= 12;
    }
  }
  return this;
}


//======================================================================
// BlockBaseRailLogic::canConnectFrom(WCoord const&)
// address: 0x002DCD4C   size: 0x1C (28 bytes)
//======================================================================
int __fastcall BlockBaseRailLogic::canConnectFrom(BlockRailBase **this, const WCoord **a2, const WCoord *a3)
{
  int result; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r4

  result = BlockBaseRailLogic::getRailLogic(this, a2, a3);
  v7 = result;
  if ( result != 0 )
  {
    BlockBaseRailLogic::refreshConnectedTracks(result, v5, v6);
    return BlockBaseRailLogic::canConnectTo(v7, (int)this);
  }
  return result;
}


//======================================================================
// BlockBaseRailLogic::connectToNeighbor(BlockBaseRailLogic*)
// address: 0x002DCD68   size: 0x21A (538 bytes)
//======================================================================
unsigned int *__fastcall BlockBaseRailLogic::connectToNeighbor(BlockBaseRailLogic *this, BlockBaseRailLogic *a2)
{
  _DWORD *v3; // r3
  unsigned int v5; // r0
  unsigned int v6; // r7
  _DWORD *v7; // r6
  _DWORD *v8; // r3
  _DWORD *v9; // r5
  void *v10; // r0
  _DWORD *v11; // r5
  int v12; // r0
  int v13; // r6
  int v14; // r2
  int v15; // r2
  int v16; // r3
  BlockRailBase *v17; // r0
  int v18; // r2
  int v19; // r3
  BlockRailBase *v20; // r0
  int v21; // r3
  BlockRailBase *v22; // r0
  const WCoord *v23; // r2
  int v24; // r2
  BlockRailBase *v25; // r0
  int v26; // r3
  int isPartOfTrack; // [sp+4h] [bp-20h]
  int v29; // [sp+8h] [bp-1Ch]
  int v30; // [sp+Ch] [bp-18h]
  _DWORD v31[4]; // [sp+14h] [bp-10h] BYREF

  v3 = *((_DWORD **)this + 6);
  if ( v3 == *((_DWORD **)this + 7) )
  {
    v5 = std::vector<WCoord>::_M_check_len((_DWORD *)this + 5, 1u, (int)"vector::_M_emplace_back_aux");
    v6 = v5;
    if ( v5 != 0 )
    {
      if ( v5 > 0x15555555 )
        sub_3BCEB4(v5);
      v7 = (_DWORD *)operator new(12 * v5);
    }
    else
    {
      v7 = nullptr;
    }
    v8 = &v7[(*((_DWORD *)this + 6) - *((_DWORD *)this + 5)) >> 2];
    if ( v8 != nullptr )
    {
      *v8 = *((_DWORD *)a2 + 1);
      v8[1] = *((_DWORD *)a2 + 2);
      v8[2] = *((_DWORD *)a2 + 3);
    }
    v9 = sub_2DC824(*((char **)this + 5), *((char **)this + 6), v7);
    v10 = *((void **)this + 5);
    v11 = v9 + 3;
    if ( v10 != nullptr )
      operator delete(v10);
    *((_DWORD *)this + 5) = v7;
    *((_DWORD *)this + 6) = v11;
    *((_DWORD *)this + 7) = &v7[3 * v6];
  }
  else
  {
    if ( v3 != nullptr )
    {
      *v3 = *((_DWORD *)a2 + 1);
      v3[1] = *((_DWORD *)a2 + 2);
      v3[2] = *((_DWORD *)a2 + 3);
    }
    *((_DWORD *)this + 6) += 12;
  }
  operator+(v31, (int *)this + 1, &dword_516640);
  isPartOfTrack = BlockBaseRailLogic::isPartOfTrack((int)this, v31);
  operator+(v31, (int *)this + 1, &dword_51664C);
  v29 = BlockBaseRailLogic::isPartOfTrack((int)this, v31);
  operator+(v31, (int *)this + 1, g_DirectionCoord);
  v30 = BlockBaseRailLogic::isPartOfTrack((int)this, v31);
  operator+(v31, (int *)this + 1, &dword_516634);
  v12 = BlockBaseRailLogic::isPartOfTrack((int)this, v31);
  v13 = 0;
  if ( isPartOfTrack == 0 )
    v13 = -((unsigned __int8)v29 ^ 1);
  if ( v30 != 0 || v12 != 0 )
    v13 = 1;
  if ( *((_BYTE *)this + 16) == 0 )
  {
    v14 = v29;
    if ( v29 != 0 )
    {
      if ( v12 != 0 )
      {
        if ( isPartOfTrack == 0 && v30 == 0 )
        {
          v13 = 6;
          goto LABEL_44;
        }
        goto LABEL_33;
      }
      if ( v30 != 0 )
      {
        v14 = isPartOfTrack;
        if ( isPartOfTrack == 0 )
        {
          v13 = 7;
          goto LABEL_44;
        }
        goto LABEL_33;
      }
    }
    if ( isPartOfTrack != 0 )
    {
      if ( v30 != 0 )
      {
        v14 = v29;
        if ( v29 == 0 && v12 == 0 )
        {
          v13 = 8;
          goto LABEL_44;
        }
      }
      else if ( v12 != 0 && v29 == 0 )
      {
        v13 = 9;
        goto LABEL_44;
      }
    }
  }
LABEL_33:
  if ( v13 != 0 )
    goto LABEL_37;
  v15 = *((_DWORD *)this + 2);
  v16 = *((_DWORD *)this + 3);
  v31[0] = *((_DWORD *)this + 1);
  v17 = *(BlockRailBase **)this;
  v31[1] = v15 + 1;
  v31[2] = v16 - 1;
  if ( BlockRailBase::isRailBlockAt(v17, (World *)v31, (const WCoord *)(v15 + 1)) )
    v13 = 4;
  v18 = *((_DWORD *)this + 2);
  v19 = *((_DWORD *)this + 3);
  v31[0] = *((_DWORD *)this + 1);
  v20 = *(BlockRailBase **)this;
  v31[1] = v18 + 1;
  v31[2] = v19 + 1;
  if ( BlockRailBase::isRailBlockAt(v20, (World *)v31, (const WCoord *)(v18 + 1)) )
  {
    v13 = 5;
  }
  else
  {
LABEL_37:
    if ( v13 == 1 )
    {
      v21 = *((_DWORD *)this + 2);
      v22 = *(BlockRailBase **)this;
      v31[0] = *((_DWORD *)this + 1) + 1;
      v23 = *((const WCoord **)this + 3);
      v31[1] = v21 + 1;
      v31[2] = v23;
      if ( BlockRailBase::isRailBlockAt(v22, (World *)v31, v23) )
        v13 = 2;
      v24 = *((_DWORD *)this + 1);
      v25 = *(BlockRailBase **)this;
      v31[1] = *((_DWORD *)this + 2) + 1;
      v26 = *((_DWORD *)this + 3);
      v31[0] = v24 - 1;
      v31[2] = v26;
      if ( BlockRailBase::isRailBlockAt(v25, (World *)v31, (const WCoord *)(v24 - 1)) )
        v13 = 3;
    }
    else
    {
      v14 = v13;
      v13 &= -(v13 != -1);
    }
  }
LABEL_44:
  if ( *((_BYTE *)this + 16) != 0 )
    v13 |= World::getBlockData(
             *(World **)this,
             (BlockBaseRailLogic *)((char *)this + 4),
             v14,
             *((unsigned __int8 *)this + 16))
         & 8;
  return World::setBlockData(*(World **)this, (BlockBaseRailLogic *)((char *)this + 4), v13, 3);
}


//======================================================================
// BlockBaseRailLogic::updateBlock(bool,bool)
// address: 0x002DCF90   size: 0x288 (648 bytes)
//======================================================================
unsigned int *__fastcall BlockBaseRailLogic::updateBlock(BlockBaseRailLogic *this, int a2, int a3)
{
  const WCoord *v3; // r2
  const WCoord *v4; // r3
  __int64 v5; // r4
  int canConnectFrom; // r0
  const WCoord *v7; // r2
  const WCoord *v8; // r3
  int v9; // r0
  const WCoord *v10; // r1
  const WCoord *v11; // r3
  const WCoord *v12; // r2
  int v13; // r0
  const WCoord *v14; // r2
  const WCoord *v15; // r3
  int v16; // r7
  int v17; // r0
  int v18; // r3
  int v19; // r2
  int v20; // r2
  int v21; // r3
  BlockRailBase *v22; // r0
  int v23; // r2
  int v24; // r3
  BlockRailBase *v25; // r0
  int v26; // r3
  BlockRailBase *v27; // r0
  const WCoord *v28; // r2
  int v29; // r2
  BlockRailBase *v30; // r0
  const WCoord *v31; // r3
  int v32; // r2
  int v33; // r3
  char BlockData; // r0
  unsigned int *result; // r0
  int v36; // r3
  unsigned int v37; // r2
  int v38; // r1
  int v39; // r2
  BlockBaseRailLogic *v40; // r6
  int v41; // [sp+0h] [bp-24h]
  int v42; // [sp+4h] [bp-20h]
  const WCoord *v45[4]; // [sp+14h] [bp-10h] BYREF

  v3 = *((const WCoord **)this + 2);
  v4 = (const WCoord *)(*((_DWORD *)this + 3) - 1);
  v45[0] = *((const WCoord **)this + 1);
  LODWORD(v5) = this;
  v45[1] = v3;
  v45[2] = v4;
  canConnectFrom = BlockBaseRailLogic::canConnectFrom((BlockRailBase **)this, v45, v3);
  v7 = *(const WCoord **)(v5 + 8);
  v42 = canConnectFrom;
  v8 = (const WCoord *)(*(_DWORD *)(v5 + 12) + 1);
  v45[0] = *(const WCoord **)(v5 + 4);
  v45[1] = v7;
  v45[2] = v8;
  v9 = BlockBaseRailLogic::canConnectFrom((BlockRailBase **)v5, v45, v7);
  v10 = *(const WCoord **)(v5 + 12);
  v41 = v9;
  v45[0] = (const WCoord *)(*(_DWORD *)(v5 + 4) - 1);
  v11 = *(const WCoord **)(v5 + 8);
  v45[2] = v10;
  v45[1] = v11;
  v13 = BlockBaseRailLogic::canConnectFrom((BlockRailBase **)v5, v45, v12);
  v14 = *(const WCoord **)(v5 + 8);
  v45[0] = (const WCoord *)(*(_DWORD *)(v5 + 4) + 1);
  v15 = *(const WCoord **)(v5 + 12);
  v16 = v13;
  v45[1] = v14;
  v45[2] = v15;
  v17 = BlockBaseRailLogic::canConnectFrom((BlockRailBase **)v5, v45, v14);
  if ( v42 == 0 && v41 == 0 )
  {
    HIDWORD(v5) = 1;
    if ( v16 != 0 )
      goto LABEL_11;
    HIDWORD(v5) = -1;
LABEL_7:
    if ( v17 == 0 )
      goto LABEL_11;
    goto LABEL_8;
  }
  HIDWORD(v5) = -v17;
  if ( v16 == 0 )
    goto LABEL_7;
  HIDWORD(v5) = -1;
LABEL_8:
  if ( v42 == 0 && v41 == 0 )
    HIDWORD(v5) = 1;
LABEL_11:
  v18 = *(unsigned __int8 *)(v5 + 16);
  if ( *(_BYTE *)(v5 + 16) != 0 )
    goto LABEL_24;
  v19 = v41;
  if ( v41 != 0 )
  {
    if ( v17 != 0 )
    {
      if ( v42 == 0 && v16 == 0 )
        goto LABEL_74;
      goto LABEL_24;
    }
    if ( v16 != 0 )
    {
      v19 = v42;
      if ( v42 == 0 )
      {
        HIDWORD(v5) = 7;
        goto LABEL_64;
      }
      goto LABEL_24;
    }
  }
  if ( v42 != 0 )
  {
    if ( v16 != 0 )
    {
      v19 = v41;
      if ( v41 == 0 && v17 == 0 )
        goto LABEL_73;
    }
    else if ( v17 != 0 && v41 == 0 )
    {
      HIDWORD(v5) = 9;
      goto LABEL_64;
    }
  }
LABEL_24:
  v19 = HIDWORD(v5) + 1;
  if ( HIDWORD(v5) != -1 )
    goto LABEL_53;
  HIDWORD(v5) = 0;
  if ( v42 == 0 )
  {
    v19 = v41;
    HIDWORD(v5) = -((unsigned __int8)v41 ^ 1);
  }
  if ( v16 != 0 || v17 != 0 )
    HIDWORD(v5) = 1;
  if ( *(_BYTE *)(v5 + 16) != 0 )
    goto LABEL_53;
  v18 = a2;
  if ( a2 != 0 )
  {
    if ( v41 != 0 )
    {
      if ( v17 != 0 )
        HIDWORD(v5) = 6;
      if ( v16 != 0 )
        HIDWORD(v5) = 7;
    }
    if ( v17 != 0 )
    {
      v19 = v42;
      if ( v42 != 0 )
      {
        HIDWORD(v5) = 9;
        goto LABEL_41;
      }
    }
    else
    {
      v18 = v42;
      if ( v42 != 0 )
      {
LABEL_41:
        if ( v16 == 0 )
          goto LABEL_53;
LABEL_73:
        HIDWORD(v5) = 8;
        goto LABEL_64;
      }
    }
  }
  else
  {
    if ( v42 != 0 )
    {
      if ( v16 != 0 )
        HIDWORD(v5) = 8;
      if ( v17 != 0 )
        HIDWORD(v5) = 9;
    }
    if ( v16 != 0 )
    {
      v19 = v41;
      if ( v41 == 0 )
        goto LABEL_53;
      HIDWORD(v5) = 7;
    }
    else
    {
      v18 = v41;
      if ( v41 == 0 )
        goto LABEL_53;
    }
    if ( v17 != 0 )
    {
LABEL_74:
      HIDWORD(v5) = 6;
      goto LABEL_64;
    }
  }
LABEL_53:
  if ( HIDWORD(v5) != 0 )
    goto LABEL_57;
  v20 = *(_DWORD *)(v5 + 8);
  v21 = *(_DWORD *)(v5 + 12);
  v45[0] = *(const WCoord **)(v5 + 4);
  v22 = *(BlockRailBase **)v5;
  v45[1] = (const WCoord *)(v20 + 1);
  v45[2] = (const WCoord *)(v21 - 1);
  if ( BlockRailBase::isRailBlockAt(v22, (World *)v45, (const WCoord *)(v20 + 1)) )
    HIDWORD(v5) = 4;
  v23 = *(_DWORD *)(v5 + 8);
  v24 = *(_DWORD *)(v5 + 12);
  v45[0] = *(const WCoord **)(v5 + 4);
  v25 = *(BlockRailBase **)v5;
  v45[1] = (const WCoord *)(v23 + 1);
  v45[2] = (const WCoord *)(v24 + 1);
  if ( BlockRailBase::isRailBlockAt(v25, (World *)v45, (const WCoord *)(v23 + 1)) )
  {
    HIDWORD(v5) = 5;
  }
  else
  {
LABEL_57:
    if ( HIDWORD(v5) == 1 )
    {
      v26 = *(_DWORD *)(v5 + 8);
      v27 = *(BlockRailBase **)v5;
      v45[0] = (const WCoord *)(*(_DWORD *)(v5 + 4) + 1);
      v28 = *(const WCoord **)(v5 + 12);
      v45[1] = (const WCoord *)(v26 + 1);
      v45[2] = v28;
      if ( BlockRailBase::isRailBlockAt(v27, (World *)v45, v28) )
        HIDWORD(v5) = 2;
      v29 = *(_DWORD *)(v5 + 4);
      v30 = *(BlockRailBase **)v5;
      v45[1] = (const WCoord *)(*(_DWORD *)(v5 + 8) + 1);
      v31 = *(const WCoord **)(v5 + 12);
      v45[0] = (const WCoord *)(v29 - 1);
      v45[2] = v31;
      if ( BlockRailBase::isRailBlockAt(v30, (World *)v45, (const WCoord *)(v29 - 1)) )
        HIDWORD(v5) = 3;
    }
    else
    {
      v18 = ~HIDWORD(v5) >> 31;
      HIDWORD(v5) &= v18;
    }
  }
LABEL_64:
  BlockBaseRailLogic::setBasicRail(v5, v19, v18);
  v33 = *(unsigned __int8 *)(v5 + 16);
  if ( *(_BYTE *)(v5 + 16) != 0 )
  {
    BlockData = World::getBlockData(*(World **)v5, (const WCoord *)(v5 + 4), v32, v33);
    v33 = 8;
    HIDWORD(v5) |= BlockData & 8;
  }
  if ( a3 != 0
    || (result = (unsigned int *)World::getBlockData(*(World **)v5, (const WCoord *)(v5 + 4), v32, v33)) != (unsigned int *)HIDWORD(v5) )
  {
    result = World::setBlockData(*(World **)v5, (const WCoord *)(v5 + 4), SHIDWORD(v5), 3);
    for ( HIDWORD(v5) = 0; ; ++HIDWORD(v5) )
    {
      v36 = *(_DWORD *)(v5 + 20);
      v37 = -1431655765 * ((*(_DWORD *)(v5 + 24) - v36) >> 2);
      if ( HIDWORD(v5) >= v37 )
        break;
      result = (unsigned int *)BlockBaseRailLogic::getRailLogic(
                                 (BlockRailBase **)v5,
                                 (const WCoord **)(v36 + 12 * HIDWORD(v5)),
                                 (const WCoord *)v37);
      v40 = (BlockBaseRailLogic *)result;
      if ( result != nullptr )
      {
        BlockBaseRailLogic::refreshConnectedTracks((int)result, v38, v39);
        result = (unsigned int *)BlockBaseRailLogic::canConnectTo((int)v40, v5);
        if ( result != nullptr )
          result = BlockBaseRailLogic::connectToNeighbor(v40, (BlockBaseRailLogic *)v5);
      }
    }
  }
  return result;
}

