// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockTickMgr

//======================================================================
// BlockTickMgr::onInsertChunk(Chunk *)
// address: 0x002ED8AE   size: 0x2 (2 bytes)
//======================================================================
void __fastcall BlockTickMgr::onInsertChunk(BlockTickMgr *this, Chunk *a2)
{
  ;
}


//======================================================================
// BlockTickMgr::onEraseChunk(Chunk *)
// address: 0x002ED8B0   size: 0x2 (2 bytes)
//======================================================================
void __fastcall BlockTickMgr::onEraseChunk(BlockTickMgr *this, Chunk *a2)
{
  ;
}


//======================================================================
// BlockTickMgr::flushFrameChangeBlocks(void)
// address: 0x002ED8B2   size: 0x2 (2 bytes)
//======================================================================
void __fastcall BlockTickMgr::flushFrameChangeBlocks(BlockTickMgr *this)
{
  ;
}


//======================================================================
// BlockTickMgr::onBlockEventReceived(BlockEventData const&)
// address: 0x002ED8B4   size: 0x36 (54 bytes)
//======================================================================
int __fastcall BlockTickMgr::onBlockEventReceived(World **a1, const WCoord *a2, int a3, int a4)
{
  int BlockID; // r1
  int result; // r0
  int Material; // r0

  BlockID = World::getBlockID(*a1, a2, a3, a4);
  result = 0;
  if ( BlockID == *((_DWORD *)a2 + 3) )
  {
    Material = BlockMaterialMgr::getMaterial(
                 (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                 BlockID);
    return (*(int (__fastcall **)(int, World *, const WCoord *, _DWORD))(*(_DWORD *)Material + 132))(
             Material,
             *a1,
             a2,
             *((_DWORD *)a2 + 4));
  }
  return result;
}


//======================================================================
// BlockTickMgr::isBlockTickScheduledThisTick(WCoord const&,int)
// address: 0x002ED988   size: 0x22 (34 bytes)
//======================================================================
bool __fastcall BlockTickMgr::isBlockTickScheduledThisTick(BlockTickMgr *this, const WCoord *a2, int a3)
{
  _DWORD *v5; // [sp+0h] [bp-24h] BYREF
  _DWORD v6[8]; // [sp+4h] [bp-20h] BYREF

  ScheduleBlock::ScheduleBlock(v6, a2, a3);
  v5 = v6;
  return Ogre::HashTable<ScheduleBlock const*,int,ScheduleBlockHashCoder>::find((int)this + 56, (int *)&v5) != nullptr;
}


//======================================================================
// BlockTickMgr::getActiveChunks(void)
// address: 0x002ED9EC   size: 0x14A (330 bytes)
//======================================================================
void __fastcall BlockTickMgr::getActiveChunks(BlockTickMgr *this)
{
  _DWORD *v2; // r2
  int i; // r2
  signed int j; // r7
  int *v5; // r5
  int *v6; // r4
  _BOOL4 v7; // r0
  int *v8; // r3
  int v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r5
  _BOOL4 v12; // [sp+4h] [bp-30h]
  int v13; // [sp+8h] [bp-2Ch]
  int *v14; // [sp+Ch] [bp-28h]
  unsigned int v15; // [sp+10h] [bp-24h]
  int v16; // [sp+14h] [bp-20h]
  unsigned int v17; // [sp+18h] [bp-1Ch]
  unsigned int v18; // [sp+1Ch] [bp-18h]
  int v19; // [sp+24h] [bp-10h] BYREF
  signed int v20; // [sp+28h] [bp-Ch]
  int v21; // [sp+2Ch] [bp-8h]

  std::_Rb_tree<ChunkIndex,ChunkIndex,std::_Identity<ChunkIndex>,std::less<ChunkIndex>,std::allocator<ChunkIndex>>::_M_erase(
    (int)this + 96,
    *((_DWORD **)this + 26));
  v2 = *(_DWORD **)this;
  *((_DWORD *)this + 27) = (char *)this + 100;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 28) = (char *)this + 100;
  *((_DWORD *)this + 29) = 0;
  v14 = (int *)((char *)this + 100);
  v15 = 0;
  v16 = v2[33];
LABEL_2:
  if ( v15 < (*(_DWORD *)(v16 + 20) - *(_DWORD *)(v16 + 16)) >> 2 )
  {
    ClientActor::getPosition((ClientActor *)&v19);
    v17 = v19 / 1600 - ((unsigned int)(v19 % 1600) >> 31);
    ClientActor::getPosition((ClientActor *)&v19);
    v18 = v21 / 1600 - ((unsigned int)(v21 % 1600) >> 31);
    for ( i = v17 - 3; ; i = v13 + 1 )
    {
      v13 = i;
      if ( i > (int)(v17 + 3) )
      {
        ++v15;
        goto LABEL_2;
      }
      for ( j = v18 - 3; j <= (int)(v18 + 3); ++j )
      {
        v5 = *((int **)this + 26);
        v6 = (int *)((char *)this + 100);
        v19 = v13;
        v20 = j;
        v7 = true;
        while ( v5 != nullptr )
        {
          v7 = sub_2ED7EE(&v19, v5 + 4);
          if ( v7 )
            v8 = (int *)v5[2];
          else
            v8 = (int *)v5[3];
          v6 = v5;
          v5 = v8;
        }
        if ( !v7 )
        {
          v9 = (int)v6;
LABEL_17:
          if ( !sub_2ED7EE((int *)(v9 + 16), &v19) )
            continue;
          goto LABEL_18;
        }
        if ( v6 != *((int **)this + 27) )
        {
          v9 = sub_391E44(v6);
          goto LABEL_17;
        }
LABEL_18:
        v12 = v6 == v14 || sub_2ED7EE(&v19, v6 + 4);
        v10 = (_DWORD *)operator new(0x18u);
        v11 = v10;
        if ( v10 != nullptr )
        {
          j_memset(v10, 0, 0x10u);
          v11[4] = v19;
          v11[5] = v20;
        }
        sub_391E64(v12, v11, v6, v14);
        ++*((_DWORD *)this + 29);
      }
    }
  }
}


//======================================================================
// BlockTickMgr::tickBlocks(void)
// address: 0x002EDB3C   size: 0x16A (362 bytes)
//======================================================================
unsigned int __fastcall BlockTickMgr::tickBlocks(BlockTickMgr *this)
{
  unsigned int result; // r0
  int v3; // r3
  int v4; // r6
  unsigned int v5; // r4
  unsigned int v6; // r0
  _DWORD *v7; // r4
  char *v8; // r7
  _DWORD *v9; // r3
  int v10; // r3
  int v11; // r4
  unsigned int v12; // r3
  unsigned int v13; // r7
  int v14; // r1
  int v15; // r3
  int v16; // r7
  int v17; // r2
  __int16 *v18; // r3
  int Material; // r6
  int v20; // r7
  void (__fastcall *v21)(int, _DWORD); // r12
  int v22; // r1
  char *v23; // [sp+4h] [bp-38h]
  int i; // [sp+4h] [bp-38h]
  int j; // [sp+8h] [bp-34h]
  unsigned int v26; // [sp+Ch] [bp-30h]
  int *v27; // [sp+10h] [bp-2Ch]
  int v28; // [sp+14h] [bp-28h]
  int v29; // [sp+18h] [bp-24h]
  int v30; // [sp+1Ch] [bp-20h]
  int v31[6]; // [sp+24h] [bp-18h] BYREF

  BlockTickMgr::getActiveChunks(this);
  v26 = 0;
  v30 = 3 * *((_DWORD *)this + 2);
  while ( 1 )
  {
    result = v26;
    v3 = *(_DWORD *)(*(_DWORD *)this + 32);
    if ( v26 >= (*(_DWORD *)(*(_DWORD *)this + 36) - v3) >> 2 )
      break;
    v4 = *(_DWORD *)(4 * v26 + v3) + 252;
    v27 = *(int **)(4 * v26 + v3);
    v5 = BlockDivSection(v27[69]);
    v6 = BlockDivSection(*(_DWORD *)(v4 + 32));
    v31[0] = v5;
    v7 = *((_DWORD **)this + 26);
    v31[1] = v6;
    v23 = (char *)this + 100;
    v8 = (char *)this + 100;
    while ( v7 != nullptr )
    {
      if ( sub_2ED7EE(v7 + 4, v31) )
      {
        v9 = (_DWORD *)v7[3];
        v7 = v8;
      }
      else
      {
        v9 = (_DWORD *)v7[2];
      }
      v8 = (char *)v7;
      v7 = v9;
    }
    if ( v8 != v23 && sub_2ED7EE(v31, (int *)v8 + 4) )
      v8 = (char *)this + 100;
    if ( v8 != v23 )
    {
      Chunk::updateSkylight((int)v27);
      Chunk::updateRelightChecks((Chunk *)v27);
      v10 = *(_DWORD *)(v4 + 20) + 1;
      *(_DWORD *)(v4 + 20) = v10;
      if ( v10 >= 0 )
      {
        for ( i = 0; i != 16; ++i )
        {
          v11 = v27[i + 342];
          if ( *(_WORD *)(v11 + 36) != 0 )
          {
            for ( j = 0; j < v30; ++j )
            {
              v12 = 3 * *((_DWORD *)this + 4) + 1013904223;
              *((_DWORD *)this + 4) = v12;
              v13 = v12 >> 10;
              v14 = (v12 >> 2) & 0xF;
              v15 = (v12 >> 18) & 0xF;
              v16 = v13 & 0xF;
              v17 = *(_DWORD *)(v11 + 20);
              v28 = v14;
              v29 = v15;
              if ( v17 != 0 )
                v18 = (__int16 *)(v17 + 2 * ((v16 << 8) | (16 * v15) | v14));
              else
                v18 = &Section::m_EmptyBlock;
              Material = BlockMaterialMgr::getMaterial(
                           (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                           *v18 & 0xFFF);
              if ( (*(int (__fastcall **)(int))(*(_DWORD *)Material + 88))(Material) != 0 )
              {
                v20 = v16 + *(_DWORD *)(v11 + 12);
                v21 = *(void (__fastcall **)(int, _DWORD))(*(_DWORD *)Material + 92);
                v22 = v29 + *(_DWORD *)(v11 + 16);
                v31[2] = v28 + *(_DWORD *)(v11 + 8);
                v31[4] = v22;
                v31[3] = v20;
                v21(Material, *(_DWORD *)this);
              }
            }
          }
        }
      }
    }
    ++v26;
  }
  return result;
}


//======================================================================
// BlockTickMgr::~BlockTickMgr()
// address: 0x002EDCB4   size: 0x56 (86 bytes)
//======================================================================
// Alternative name is '_ZN12BlockTickMgrD2Ev'
void __fastcall BlockTickMgr::~BlockTickMgr(BlockTickMgr *this)
{
  void **v1; // r6
  void **v3; // r5
  void *v4; // r0

  v1 = (void **)((char *)this + 120);
  g_BlockTickMgr = 0;
  if ( this != (BlockTickMgr *)-120 )
  {
    v3 = (void **)((char *)this + 144);
    while ( v3 != v1 )
    {
      v3 -= 3;
      if ( *v3 != nullptr )
        operator delete(*v3);
    }
  }
  std::_Rb_tree<ChunkIndex,ChunkIndex,std::_Identity<ChunkIndex>,std::less<ChunkIndex>,std::allocator<ChunkIndex>>::_M_erase(
    (int)this + 96,
    *((_DWORD **)this + 26));
  std::_Rb_tree<ScheduleBlock const*,ScheduleBlock const*,std::_Identity<ScheduleBlock const*>,ScheduleBlockCompare,std::allocator<ScheduleBlock const*>>::_M_erase(
    (int)this + 72,
    *((_DWORD **)this + 20));
  Ogre::HashTable<ScheduleBlock const*,int,ScheduleBlockHashCoder>::~HashTable((_DWORD *)this + 14);
  v4 = *((void **)this + 5);
  if ( v4 != nullptr )
    operator delete(v4);
}


//======================================================================
// BlockTickMgr::BlockTickMgr(World *)
// address: 0x002EDD10   size: 0x80 (128 bytes)
//======================================================================
// Alternative name is '_ZN12BlockTickMgrC1EP5World'
void __fastcall BlockTickMgr::BlockTickMgr(BlockTickMgr *this, World *a2)
{
  void *v3; // r0
  size_t v4; // r2

  *((_DWORD *)this + 2) = 1;
  *(_DWORD *)this = a2;
  *((_BYTE *)this + 4) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 16) = 256;
  *((_DWORD *)this + 17) = 0;
  v3 = (void *)operator new[](0x400u);
  v4 = 4 * *((_DWORD *)this + 16);
  *((_DWORD *)this + 15) = v3;
  j_memset(v3, 0, v4);
  j_memset((char *)this + 76, 0, 0x10u);
  *((_DWORD *)this + 21) = (char *)this + 76;
  *((_DWORD *)this + 22) = (char *)this + 76;
  *((_DWORD *)this + 23) = 0;
  j_memset((char *)this + 100, 0, 0x10u);
  *((_DWORD *)this + 27) = (char *)this + 100;
  *((_DWORD *)this + 28) = (char *)this + 100;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = 0;
  g_BlockTickMgr = (int)this;
  *((_DWORD *)this + 4) = j_lrand48();
}


//======================================================================
// BlockTickMgr::addBlockChange(WCoord const&,int,int)
// address: 0x002EDEA8   size: 0x84 (132 bytes)
//======================================================================
void __fastcall BlockTickMgr::addBlockChange(BlockTickMgr *this, const WCoord *a2, int a3, int a4)
{
  _DWORD *v4; // r7
  int *v5; // r5
  int i; // r1
  int v9; // r0
  int v10; // r0
  int v11; // r6
  _DWORD *v12; // r0
  int v13; // r2
  int v14; // r5
  int v15; // r5
  int v16; // [sp+4h] [bp-30h]
  int *v18; // [sp+Ch] [bp-28h]
  int v19; // [sp+10h] [bp-24h]
  int v21; // [sp+1Ch] [bp-18h] BYREF
  int v22; // [sp+20h] [bp-14h]
  int v23; // [sp+24h] [bp-10h]
  int v24; // [sp+28h] [bp-Ch]
  int v25; // [sp+2Ch] [bp-8h]

  v4 = *((_DWORD **)this + 6);
  v5 = *((int **)this + 5);
  v19 = -858993459 * (v4 - v5);
  for ( i = 0; ; i = v16 + 1 )
  {
    v16 = i;
    if ( i == v19 )
      break;
    v18 = v5;
    v9 = operator==(v5, a2);
    v5 += 5;
    if ( v9 != 0 )
    {
      v18[4] = a4;
      return;
    }
  }
  v10 = *((_DWORD *)a2 + 1);
  v21 = *(_DWORD *)a2;
  v22 = v10;
  v11 = *((_DWORD *)a2 + 2);
  v24 = a3;
  v12 = *((_DWORD **)this + 7);
  v23 = v11;
  v25 = a4;
  if ( v4 == v12 )
  {
    std::vector<BlockTickMgr::FrameBlockChange>::_M_emplace_back_aux<BlockTickMgr::FrameBlockChange const&>(
      (int *)this + 5,
      &v21);
  }
  else
  {
    if ( v4 != nullptr )
    {
      v13 = v22;
      v14 = v23;
      *v4 = v21;
      v4[1] = v13;
      v4[2] = v14;
      v15 = v25;
      v4[3] = v24;
      v4[4] = v15;
    }
    *((_DWORD *)this + 6) += 20;
  }
}


//======================================================================
// BlockTickMgr::scheduleBlockUpdate(WCoord const&,int,int,int)
// address: 0x002EDFD8   size: 0x16C (364 bytes)
//======================================================================
void __fastcall BlockTickMgr::scheduleBlockUpdate(World **this, const WCoord *a2, int a3, int a4, int a5)
{
  _DWORD *v7; // r4
  int v8; // r0
  int v9; // r0
  int v10; // r2
  int v11; // r3
  World *v12; // r0
  int v13; // r2
  int v14; // r3
  int Material; // r0
  int **v16; // r7
  int *v17; // r6
  int *v18; // r0
  int *v19; // r0
  unsigned int v22; // [sp+Ch] [bp-20h]
  _DWORD *v23[3]; // [sp+10h] [bp-1Ch] BYREF
  int v24[4]; // [sp+1Ch] [bp-10h] BYREF

  v7 = (_DWORD *)operator new(0x1Cu);
  ScheduleBlock::ScheduleBlock(v7, a2, a3);
  if ( *((_BYTE *)this + 4) != 0
    && a3 > 0
    && (v8 = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, a3),
        a4 = 1,
        (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 104))(v8) != 0) )
  {
    v9 = *(_DWORD *)a2;
    v10 = *((_DWORD *)a2 + 1);
    v11 = *((_DWORD *)a2 + 2);
    v23[0] = (_DWORD *)(*(_DWORD *)a2 - 8);
    v23[1] = (_DWORD *)(v10 - 8);
    v23[2] = (_DWORD *)(v11 - 8);
    v24[0] = v9 + 8;
    v24[1] = v10 + 8;
    v12 = *this;
    v24[2] = v11 + 8;
    if ( World::checkChunksExist(v12, (const WCoord *)v23, (const WCoord *)v24)
      && World::getBlockID(*this, a2, v13, v14) == a3 )
    {
      Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, a3);
      (*(void (__fastcall **)(int, World *, const WCoord *))(*(_DWORD *)Material + 92))(Material, *this, a2);
    }
  }
  else
  {
    if ( World::getChunk(*this, a2) == 0 )
      goto LABEL_19;
    if ( a4 > 0 )
    {
      v7[4] = (char *)*(this + 3) + a4;
      v7[5] = a5;
    }
    v24[0] = (int)v7;
    if ( Ogre::HashTable<ScheduleBlock const*,int,ScheduleBlockHashCoder>::find((int)(this + 14), v24) != nullptr )
    {
LABEL_19:
      if ( v7 != nullptr )
        operator delete(v7);
    }
    else
    {
      v22 = -1640531535 * (-1640531535 * *v7 + v7[2]) + v7[1];
      v16 = (int **)((char *)*(this + 15) + 4 * (v22 % (unsigned int)*(this + 16)));
      v17 = *v16;
      if ( *v16 != nullptr )
      {
        while ( ScheduleBlock::isEqual(*v17, (int)v7) == 0 )
        {
          if ( v17[3] == 0 )
          {
            v19 = (int *)operator new(0x10u);
            *v19 = (int)v7;
            v19[3] = 0;
            v17[3] = (int)v19;
            v17 = v19;
            break;
          }
          v17 = (int *)v17[3];
        }
      }
      else
      {
        v18 = (int *)operator new(0x10u);
        *v18 = (int)v7;
        v17 = v18;
        v18[3] = 0;
        *v16 = v18;
      }
      *(this + 17) = (World *)((char *)*(this + 17) + 1);
      v17[1] = v22;
      v17[2] = 1;
      v23[0] = v7;
      std::_Rb_tree<ScheduleBlock const*,ScheduleBlock const*,std::_Identity<ScheduleBlock const*>,ScheduleBlockCompare,std::allocator<ScheduleBlock const*>>::_M_insert_unique<ScheduleBlock const*>(
        (int)v24,
        this + 18,
        v23);
    }
  }
}


//======================================================================
// BlockTickMgr::updateScheduleBlocks(void)
// address: 0x002EE1D8   size: 0x146 (326 bytes)
//======================================================================
void __fastcall BlockTickMgr::updateScheduleBlocks(BlockTickMgr *this)
{
  int v2; // r3
  int v3; // r0
  int v4; // r2
  void *v5; // r0
  int *v6; // r5
  int v7; // r7
  int v8; // r6
  int *v9; // r2
  int *v10; // r3
  int i; // r3
  unsigned int j; // r6
  BlockMaterial **v13; // r5
  int v14; // r2
  int Chunk; // r3
  BlockMaterial *BlockID; // r0
  int v17; // r2
  int v18; // r7
  int Material; // r0
  int v20; // [sp+10h] [bp-1Ch]
  unsigned int v21; // [sp+14h] [bp-18h]
  int v22; // [sp+18h] [bp-14h] BYREF
  void *v23; // [sp+1Ch] [bp-10h] BYREF
  char *v24; // [sp+20h] [bp-Ch]
  char *v25; // [sp+24h] [bp-8h]

  v21 = *((_DWORD *)this + 23);
  if ( v21 > 0x3E8 )
    v21 = 1000;
  v2 = 0;
  v23 = nullptr;
  v24 = nullptr;
  v25 = nullptr;
  while ( 1 )
  {
    v20 = v2;
    if ( v2 == v21 )
      break;
    v3 = *((_DWORD *)this + 21);
    v4 = *((_DWORD *)this + 3);
    v22 = *(_DWORD *)(v3 + 16);
    if ( *(_DWORD *)(v22 + 16) > v4 )
      break;
    v5 = (void *)sub_391F50(v3, (char *)this + 76);
    operator delete(v5);
    --*((_DWORD *)this + 23);
    v6 = Ogre::HashTable<ScheduleBlock const*,int,ScheduleBlockHashCoder>::find((int)this + 56, &v22);
    v7 = (unsigned int)v6[1] % *((_DWORD *)this + 16);
    v8 = v6[3];
    v9 = (int *)(*((_DWORD *)this + 15) + 4 * v7);
    v10 = (int *)*v9;
    if ( (int *)*v9 == v6 )
    {
      *v9 = v8;
    }
    else
    {
      while ( (int *)v10[3] != v6 )
        v10 = (int *)v10[3];
      v10[3] = v8;
    }
    operator delete(v6);
    --*((_DWORD *)this + 17);
    for ( i = 4 * v7; v8 == 0; v8 = *(_DWORD *)(*((_DWORD *)this + 15) + i) )
    {
      ++v7;
      i += 4;
      if ( v7 == *((_DWORD *)this + 16) )
        break;
    }
    if ( v24 == v25 )
    {
      std::vector<ScheduleBlock const*>::_M_emplace_back_aux<ScheduleBlock const* const&>((int)&v23, &v22);
    }
    else
    {
      if ( v24 != nullptr )
        *(_DWORD *)v24 = v22;
      v24 += 4;
    }
    v2 = v20 + 1;
  }
  for ( j = 0; j < (v24 - (_BYTE *)v23) >> 2; ++j )
  {
    v13 = *((BlockMaterial ***)v23 + j);
    Chunk = World::getChunk(*(World **)this, (const WCoord *)v13);
    if ( Chunk != 0 )
    {
      BlockID = (BlockMaterial *)World::getBlockID(*(World **)this, (const WCoord *)v13, v14, Chunk);
      v18 = (int)BlockID;
      if ( (int)BlockID > 0 && BlockMaterial::isAssociatedBlockID(BlockID, v13[3], v17) != 0 )
      {
        Material = BlockMaterialMgr::getMaterial(
                     (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                     v18);
        (*(void (__fastcall **)(int, _DWORD, BlockMaterial **))(*(_DWORD *)Material + 92))(
          Material,
          *(_DWORD *)this,
          v13);
      }
    }
    else
    {
      BlockTickMgr::scheduleBlockUpdate((World **)this, (const WCoord *)v13, (int)v13[3], 0, 0);
    }
    operator delete(v13);
  }
  if ( v23 != nullptr )
    operator delete(v23);
}


//======================================================================
// BlockTickMgr::addBlockEvent(WCoord const&,int,int,int)
// address: 0x002EE414   size: 0xA2 (162 bytes)
//======================================================================
void __fastcall BlockTickMgr::addBlockEvent(BlockTickMgr *this, const WCoord *a2, int a3, int a4, int a5)
{
  int v5; // r4
  int v6; // r6
  char *v7; // r6
  int v8; // r1
  _DWORD *v9; // r4
  int *v10; // r5
  int i; // r7
  int v12; // r1
  int v13; // r5
  int *v14; // r3
  int v15; // r1
  int v16; // r4
  int v17; // [sp+0h] [bp-2Ch]
  int v20; // [sp+10h] [bp-1Ch] BYREF
  int v21; // [sp+14h] [bp-18h]
  int v22; // [sp+18h] [bp-14h]
  int v23; // [sp+1Ch] [bp-10h]
  int v24; // [sp+20h] [bp-Ch]
  int v25; // [sp+24h] [bp-8h]

  v5 = *((_DWORD *)a2 + 1);
  v20 = *(_DWORD *)a2;
  v6 = *((_DWORD *)this + 36);
  v21 = v5;
  v23 = a3;
  v7 = (char *)this + 12 * v6 + 120;
  v8 = *((_DWORD *)a2 + 2);
  v24 = a4;
  v25 = a5;
  v9 = *((_DWORD **)v7 + 1);
  v10 = *(int **)v7;
  v22 = v8;
  v17 = -1431655765 * (((char *)v9 - (char *)v10) >> 3);
  for ( i = 0; i != v17; ++i )
  {
    if ( operator==(v10, &v20) != 0 && v10[3] == a3 && v10[4] == a4 && v10[5] == a5 )
      return;
    v10 += 6;
  }
  if ( v9 == *((_DWORD **)v7 + 2) )
  {
    std::vector<BlockEventData>::_M_emplace_back_aux<BlockEventData const&>((char **)v7, &v20);
  }
  else
  {
    if ( v9 != nullptr )
    {
      v12 = v21;
      v13 = v22;
      *v9 = v20;
      v9[1] = v12;
      v9[2] = v13;
      v14 = v9 + 3;
      v15 = v24;
      v16 = v25;
      *v14 = v23;
      v14[1] = v15;
      v14[2] = v16;
    }
    *((_DWORD *)v7 + 1) += 24;
  }
}


//======================================================================
// BlockTickMgr::sendApplyBlockEvents(void)
// address: 0x002EE5B8   size: 0x4C (76 bytes)
//======================================================================
int __fastcall BlockTickMgr::sendApplyBlockEvents(BlockTickMgr *this)
{
  int v2; // r3
  int *v3; // r4
  int result; // r0
  unsigned int i; // r5
  int v6; // r3
  unsigned int v7; // r2

  while ( 1 )
  {
    v2 = *((_DWORD *)this + 36);
    v3 = (int *)((char *)this + 12 * v2 + 120);
    result = v3[1];
    if ( *v3 == result )
      break;
    *((_DWORD *)this + 36) = 1 - v2;
    for ( i = 0; ; ++i )
    {
      v6 = *v3;
      v7 = -1431655765 * ((v3[1] - *v3) >> 3);
      if ( i >= v7 )
        break;
      BlockTickMgr::onBlockEventReceived((World **)this, (const WCoord *)(v6 + 24 * i), v7, v6);
    }
    if ( v7 != 0 )
      v3[1] = v6;
  }
  return result;
}


//======================================================================
// BlockTickMgr::tick(void)
// address: 0x002EE608   size: 0x22 (34 bytes)
//======================================================================
void __fastcall BlockTickMgr::tick(BlockTickMgr *this)
{
  ++*((_DWORD *)this + 3);
  BlockTickMgr::tickBlocks(this);
  BlockTickMgr::updateScheduleBlocks(this);
  BlockTickMgr::sendApplyBlockEvents(this);
  BlockTickMgr::flushFrameChangeBlocks(this);
}

