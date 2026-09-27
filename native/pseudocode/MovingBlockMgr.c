// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MovingBlockMgr

//======================================================================
// MovingBlockMgr::MovingBlockMgr(ClientWorld *)
// address: 0x002D83C4   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZN14MovingBlockMgrC1EP11ClientWorld'
void __fastcall MovingBlockMgr::MovingBlockMgr(MovingBlockMgr *this, ClientWorld *a2)
{
  int v2; // r1

  *(_DWORD *)this = a2;
  v2 = *((_DWORD *)a2 + 60);
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 1) = v2;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
}


//======================================================================
// MovingBlockMgr::~MovingBlockMgr()
// address: 0x002D83D6   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZN14MovingBlockMgrD1Ev'
void __fastcall MovingBlockMgr::~MovingBlockMgr(MovingBlockMgr *this)
{
  void *v1; // r0

  v1 = *((void **)this + 2);
  if ( v1 != nullptr )
    operator delete(v1);
}


//======================================================================
// MovingBlockMgr::updateMovingBlock(MovingBlock *,float)
// address: 0x002D83E8   size: 0x11C (284 bytes)
//======================================================================
int __fastcall MovingBlockMgr::updateMovingBlock(World **a1, int a2, float a3, int a4)
{
  float v4; // r5
  float v7; // r0
  float v8; // r0
  int v9; // r6
  int v10; // r2
  World *v11; // r0
  __int16 *Block; // r0
  World *v13; // r0
  int v14; // r3
  int v16; // r2
  int v17; // r1
  int v18; // r1
  int Material; // r0
  int v20; // r6
  int *v21; // r3
  int v22; // r5
  int v23; // r2
  int v24; // [sp+8h] [bp-34h]
  int v25; // [sp+14h] [bp-28h] BYREF
  int v26; // [sp+18h] [bp-24h]
  int v27; // [sp+1Ch] [bp-20h]
  _DWORD *Section; // [sp+20h] [bp-1Ch] BYREF
  int v29; // [sp+24h] [bp-18h]
  int v30; // [sp+28h] [bp-14h]
  int v31; // [sp+2Ch] [bp-10h]
  int v32; // [sp+30h] [bp-Ch]
  int v33; // [sp+34h] [bp-8h]

  v4 = *(float *)(a2 + 16);
  v7 = *(float *)(a2 + 20) - (float)(a3 * 900.0);
  *(float *)(a2 + 20) = v7;
  v8 = v4 + (float)(v7 * a3);
  *(float *)(a2 + 16) = v8;
  v9 = (int)v8 / 100;
  if ( (int)v4 / 100 != v9 && v9 >= 0 )
  {
    v10 = *(_DWORD *)(a2 + 12);
    Section = *(_DWORD **)(a2 + 8);
    v11 = *a1;
    v30 = v10;
    v29 = v9;
    Block = World::getBlock(v11, (const WCoord *)&Section, v10, a4);
    v24 = Block::moveCollide((Block *)Block);
    v13 = *a1;
    v14 = *(_DWORD *)(a2 + 12);
    if ( v24 == 1 )
    {
      Section = *(_DWORD **)(a2 + 8);
      v30 = v14;
      v29 = (int)v4 / 100;
      World::setBlockAll(v13, (const WCoord *)&Section, *(_WORD *)(a2 + 4) & 0xFFF, 4, 3);
      return 1;
    }
    v25 = *(_DWORD *)(a2 + 8);
    v27 = v14;
    v26 = v9;
    Section = (_DWORD *)World::getSection(v13, (const WCoord *)&v25);
    v16 = v26 - Section[3];
    v17 = Section[2];
    v31 = v27 - Section[4];
    v29 = v25 - v17;
    v30 = v16;
    v32 = a2 + 4;
    v18 = *(_WORD *)(a2 + 4) & 0xFFF;
    v33 = *(_DWORD *)(*(_DWORD *)(a2 + 24) + 288);
    Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, v18);
    (*(void (__fastcall **)(int, _DWORD **))(*(_DWORD *)Material + 28))(Material, &Section);
  }
  v20 = 1000 * *(_DWORD *)(a2 + 12);
  v21 = *(int **)(a2 + 24);
  v22 = 1000 * *(_DWORD *)(a2 + 8);
  v23 = *v21;
  v21[3] = (int)(float)(*(float *)(a2 + 16) * 10.0);
  v21[2] = v22;
  v21[4] = v20;
  (*(void (__fastcall **)(int *))(v23 + 64))(v21);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a2 + 24) + 68))(*(_DWORD *)(a2 + 24));
  return 0;
}


//======================================================================
// MovingBlockMgr::update(float)
// address: 0x002D85E8   size: 0x72 (114 bytes)
//======================================================================
__int64 __fastcall MovingBlockMgr::update(__int64 this)
{
  int v1; // r4
  unsigned int v2; // r5
  int v3; // r3
  _DWORD **v4; // r6
  int v5; // r1
  unsigned int v6; // r2

  v1 = this;
  v2 = 0;
  while ( 1 )
  {
    v3 = *(_DWORD *)(v1 + 8);
    if ( v2 >= (*(_DWORD *)(v1 + 12) - v3) >> 2 )
      break;
    v4 = *(_DWORD ***)(v3 + 4 * v2);
    if ( MovingBlockMgr::updateMovingBlock((World **)v1, (int)v4, *((float *)&this + 1), v3) != 0 )
    {
      (*(void (__fastcall **)(_DWORD *))(*v4[6] + 52))(v4[6]);
      Ogre::BaseObject::release(v4[6]);
      operator delete(v4);
      *(_DWORD *)(*(_DWORD *)(v1 + 8) + 4 * v2) = *(_DWORD *)(*(_DWORD *)(v1 + 12) - 4);
      v5 = *(_DWORD *)(v1 + 8);
      v6 = (*(_DWORD *)(v1 + 12) - v5) >> 2;
      if ( v6 - 1 < v6 )
        *(_DWORD *)(v1 + 12) = v5 + 4 * (v6 - 1);
      else
        std::vector<MovingBlock *>::_M_default_append((void **)(v1 + 8), 0xFFFFFFFF);
    }
    else
    {
      ++v2;
    }
  }
  return this;
}


//======================================================================
// MovingBlockMgr::addMovingBlock(WCoord const&,Block const&,BLOCK_MOVE_TYPE)
// address: 0x002D865C   size: 0x18E (398 bytes)
//======================================================================
void __fastcall MovingBlockMgr::addMovingBlock(int a1, const WCoord *a2, _WORD *a3)
{
  int v5; // r0
  _DWORD *v6; // r5
  int v7; // r2
  World *v8; // r0
  int v9; // r2
  __int16 v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r6
  int v14; // r3
  int v15; // r1
  SectionMesh *v16; // r7
  BlockMesh *v17; // r6
  float v18; // r0
  int v19; // r3
  _DWORD *v20; // r3
  unsigned int v21; // r0
  int v22; // r7
  unsigned int v23; // r6
  _DWORD *v24; // r3
  int v25; // r5
  void *v26; // r0
  int Material; // [sp+0h] [bp-24h]
  int v28; // [sp+0h] [bp-24h]
  _DWORD *Section; // [sp+8h] [bp-1Ch] BYREF
  int v31; // [sp+Ch] [bp-18h]
  int v32; // [sp+10h] [bp-14h]
  int v33; // [sp+14h] [bp-10h]
  _DWORD *v34; // [sp+18h] [bp-Ch]
  int v35; // [sp+1Ch] [bp-8h]

  v5 = operator new(0x1Cu);
  *(_WORD *)(v5 + 4) = 0;
  v6 = (_DWORD *)v5;
  v7 = *((_DWORD *)a2 + 2) / 16 - ((unsigned int)(*((_DWORD *)a2 + 2) % 16) >> 31);
  v8 = *(World **)a1;
  Section = (_DWORD *)(*(_DWORD *)a2 / 16 - ((unsigned int)(*(_DWORD *)a2 % 16) >> 31));
  v31 = v7;
  *v6 = World::getChunk((int)v8, (int)Section, v7);
  *((_WORD *)v6 + 2) = *a3;
  v6[2] = *(_DWORD *)a2;
  v6[3] = *((_DWORD *)a2 + 2);
  v9 = *((_DWORD *)a2 + 1);
  v6[5] = 0;
  v10 = *((_WORD *)v6 + 2);
  *((float *)v6 + 4) = (float)(100 * v9);
  Material = BlockMaterialMgr::getMaterial(
               (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
               v10 & 0xFFF);
  Section = (_DWORD *)World::getSection(*(World **)a1, a2);
  v11 = *((_DWORD *)a2 + 1) - Section[3];
  v12 = *((_DWORD *)a2 + 2);
  v13 = *(_DWORD *)a2;
  v14 = v12 - Section[4];
  v15 = Section[2];
  v32 = v11;
  v33 = v14;
  v31 = v13 - v15;
  v35 = 0;
  v34 = v6 + 1;
  v16 = (SectionMesh *)(*(int (__fastcall **)(int, _DWORD **))(*(_DWORD *)Material + 28))(Material, &Section);
  v17 = (BlockMesh *)operator new(0x144u);
  BlockMesh::BlockMesh(v17, v16);
  Ogre::BaseObject::release(v16);
  v18 = *((float *)v6 + 4);
  v28 = 1000 * (v6[3] + *(_DWORD *)(*v6 + 284));
  *((_DWORD *)v17 + 2) = 1000 * (v6[2] + *(_DWORD *)(*v6 + 276));
  v19 = *(_DWORD *)v17;
  *((_DWORD *)v17 + 3) = (int)(float)(v18 * 10.0);
  *((_DWORD *)v17 + 4) = v28;
  (*(void (__fastcall **)(BlockMesh *))(v19 + 64))(v17);
  (*(void (__fastcall **)(BlockMesh *, _DWORD, _DWORD))(*(_DWORD *)v17 + 48))(v17, *(_DWORD *)(a1 + 4), 0);
  v6[6] = v17;
  v20 = *(_DWORD **)(a1 + 12);
  if ( v20 == *(_DWORD **)(a1 + 16) )
  {
    v21 = std::vector<MovingBlock *>::_M_check_len((_DWORD *)(a1 + 8), 1u, (int)"vector::_M_emplace_back_aux");
    v22 = 4 * v21;
    if ( v21 != 0 )
    {
      if ( v21 > 0x3FFFFFFF )
        sub_3BCEB4(v21);
      v21 = operator new(4 * v21);
    }
    v23 = v21;
    v24 = (_DWORD *)(v21 + 4 * ((*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2));
    if ( v24 != nullptr )
      *v24 = v6;
    v25 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<MovingBlock *>(
            *(void **)(a1 + 8),
            *(_DWORD *)(a1 + 12),
            (void *)v21)
        + 4;
    v26 = *(void **)(a1 + 8);
    if ( v26 != nullptr )
      operator delete(v26);
    *(_DWORD *)(a1 + 8) = v23;
    *(_DWORD *)(a1 + 12) = v25;
    *(_DWORD *)(a1 + 16) = v23 + v22;
  }
  else
  {
    if ( v20 != nullptr )
      *v20 = v6;
    *(_DWORD *)(a1 + 12) += 4;
  }
}

