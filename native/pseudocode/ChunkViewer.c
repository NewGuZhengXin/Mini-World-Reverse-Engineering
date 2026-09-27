// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ChunkViewer

//======================================================================
// ChunkViewer::ChunkViewer(void)
// address: 0x002BB5FC   size: 0x14 (20 bytes)
//======================================================================
// Alternative name is '_ZN11ChunkViewerC2Ev'
void __fastcall ChunkViewer::ChunkViewer(ChunkViewer *this)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = -1;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
}


//======================================================================
// ChunkViewer::~ChunkViewer()
// address: 0x002BB610   size: 0xE (14 bytes)
//======================================================================
// Alternative name is '_ZN11ChunkViewerD2Ev'
void __fastcall ChunkViewer::~ChunkViewer(void **this)
{
  sub_2BB5AC(*(this + 3));
}


//======================================================================
// ChunkViewer::leaveWorld(World *)
// address: 0x002BB61E   size: 0x38 (56 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ChunkViewer::leaveWorld(ChunkViewer *this, World *a2)
{
  int i; // r5
  int v5; // r6
  int j; // r6
  int v7; // r2

  for ( i = -*((_DWORD *)this + 2); ; ++i )
  {
    v5 = *((_DWORD *)this + 2);
    if ( i > v5 )
      break;
    for ( j = -v5; j <= *((_DWORD *)this + 2); ++j )
    {
      v7 = j + *((_DWORD *)this + 1);
      World::unloadChunk(a2, *(_DWORD *)this + i, v7, this);
    }
  }
  *((_DWORD *)this + 2) = -1;
}


//======================================================================
// ChunkViewer::sortLoadChunks(void)
// address: 0x002BB834   size: 0x176 (374 bytes)
//======================================================================
void __fastcall ChunkViewer::sortLoadChunks(ChunkViewer *this)
{
  int v3; // r1
  int v4; // r0
  unsigned int v5; // r5
  char *v6; // r1
  char *v7; // r0
  _DWORD *v8; // r2
  char *i; // r3
  int v10; // r3
  int v11; // r6
  int v12; // r3
  int v13; // r0
  _DWORD *v14; // r7
  int j; // r6
  int v16; // r3
  int v17; // [sp+0h] [bp-34h]
  int v18; // [sp+4h] [bp-30h]
  int v19; // [sp+8h] [bp-2Ch]
  _DWORD *v20; // [sp+10h] [bp-24h]
  int v21; // [sp+14h] [bp-20h]
  int v22; // [sp+14h] [bp-20h]
  int v23; // [sp+18h] [bp-1Ch]
  int v24; // [sp+1Ch] [bp-18h]
  char *v25; // [sp+20h] [bp-14h]
  int v26; // [sp+24h] [bp-10h]
  int v27; // [sp+28h] [bp-Ch] BYREF
  int v28; // [sp+2Ch] [bp-8h]

  v3 = *((_DWORD *)this + 3);
  v4 = *((_DWORD *)this + 4);
  v25 = (char *)this + 12;
  v5 = (v4 - v3) >> 3;
  if ( v5 != 0 )
  {
    if ( v5 > 0x1FFFFFFF )
      sub_3BCEB4(v4);
    v5 = operator new(8 * v5);
  }
  v6 = *((char **)this + 3);
  v7 = *((char **)this + 4);
  v8 = (_DWORD *)v5;
  for ( i = v6; i != v7; i += 8 )
  {
    if ( v8 != nullptr )
    {
      *v8 = *(_DWORD *)i;
      v8[1] = *((_DWORD *)i + 1);
    }
    v8 += 2;
  }
  v20 = (_DWORD *)(v5 + 8 * ((unsigned int)(i - v6) >> 3));
  v10 = *((_DWORD *)this + 3);
  if ( (*((_DWORD *)this + 4) - v10) >> 3 != 0 )
    *((_DWORD *)this + 4) = v10;
  v23 = *(_DWORD *)this;
  v24 = *((_DWORD *)this + 1);
  v27 = *(_DWORD *)this;
  v28 = v24;
  if ( std::__find<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex>>,ChunkIndex>(
         (_DWORD *)v5,
         (int)v20,
         &v27) != v20 )
  {
    v28 = v24;
    v27 = v23;
    std::vector<ChunkIndex>::emplace_back<ChunkIndex>((int)v25, &v27);
  }
  v21 = 1;
  v11 = 0;
  v17 = 0;
  v19 = 0;
  while ( v21 <= 2 * *((_DWORD *)this + 2) )
  {
    v26 = v11 + 2;
    do
    {
      v12 = 2 * (v11++ & 3);
      v13 = 0;
      v14 = &dword_468B54[v12];
      while ( 1 )
      {
        v18 = v13;
        if ( v13 >= v21 )
          break;
        v19 += *v14;
        v17 += v14[1];
        v27 = v23 + v19;
        v28 = v24 + v17;
        if ( v20 != std::__find<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex>>,ChunkIndex>(
                      (_DWORD *)v5,
                      (int)v20,
                      &v27) )
          std::vector<ChunkIndex>::push_back((int)v25, &v27);
        v13 = v18 + 1;
      }
    }
    while ( v11 != v26 );
    ++v21;
  }
  v22 = v11 & 3;
  for ( j = 0; j < 2 * *((_DWORD *)this + 2); ++j )
  {
    v16 = dword_468B54[2 * v22 + 1];
    v19 += dword_468B54[2 * v22];
    v27 = v23 + v19;
    v17 += v16;
    v28 = v24 + v17;
    if ( v20 != std::__find<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex>>,ChunkIndex>(
                  (_DWORD *)v5,
                  (int)v20,
                  &v27) )
      std::vector<ChunkIndex>::push_back((int)v25, &v27);
  }
  sub_2BB5AC((void *)v5);
}


//======================================================================
// ChunkViewer::onMoveViewFrustum(World *,WCoord const&)
// address: 0x002BB9C0   size: 0xB4 (180 bytes)
//======================================================================
void __fastcall ChunkViewer::onMoveViewFrustum(ChunkViewer *this, World *a2, const WCoord *a3)
{
  unsigned int v5; // r7
  int i; // r6
  int v7; // r5
  int j; // r5
  int v9; // r3
  signed int v10; // r2
  int v11; // r12
  int v12; // r1
  int v13; // r2
  int v14; // r3
  unsigned int v15; // [sp+8h] [bp-14h]
  int v17; // [sp+10h] [bp-Ch] BYREF
  unsigned int v18; // [sp+14h] [bp-8h]

  v15 = CoordDivSection(*(_DWORD *)a3);
  v5 = CoordDivSection(*((_DWORD *)a3 + 2));
  for ( i = -*((_DWORD *)this + 2); ; ++i )
  {
    v7 = *((_DWORD *)this + 2);
    if ( i > v7 )
      break;
    for ( j = -v7; ; ++j )
    {
      v9 = *((_DWORD *)this + 2);
      if ( j > v9 )
        break;
      v10 = j + v5;
      v11 = *((_DWORD *)this + 1);
      if ( (int)(i + v15) < *(_DWORD *)this - v9
        || (int)(i + v15) > *(_DWORD *)this + v9
        || v10 < v11 - v9
        || v10 > v9 + v11 )
      {
        v17 = i + v15;
        v18 = j + v5;
        std::vector<ChunkIndex>::emplace_back<ChunkIndex>((int)this + 12, &v17);
      }
      v12 = i + *(_DWORD *)this;
      v13 = j + *((_DWORD *)this + 1);
      v14 = *((_DWORD *)this + 2);
      if ( v12 < (int)(v15 - v14) || v12 > (int)(v15 + v14) || v13 < (int)(v5 - v14) || v13 > (int)(v5 + v14) )
      {
        v17 = i + *(_DWORD *)this;
        v18 = v13;
        World::unloadChunk(a2, v12, v13, this);
      }
    }
  }
  *((_DWORD *)this + 1) = v5;
  *(_DWORD *)this = v15;
  ChunkViewer::sortLoadChunks(this);
}


//======================================================================
// ChunkViewer::onResetViewFrustum(World *,WCoord const&,int)
// address: 0x002BBA74   size: 0x88 (136 bytes)
//======================================================================
void __fastcall ChunkViewer::onResetViewFrustum(ChunkViewer *this, World *a2, const WCoord *a3, int a4)
{
  int i; // r5
  int v7; // r6
  int j; // r6
  int v9; // r3
  int k; // r5
  int v11; // r6
  int v12; // r6
  int v13; // r3
  int v16; // [sp+8h] [bp-Ch] BYREF
  int v17; // [sp+Ch] [bp-8h]

  for ( i = -*((_DWORD *)this + 2); ; ++i )
  {
    v7 = *((_DWORD *)this + 2);
    if ( i > v7 )
      break;
    for ( j = -v7; j <= *((_DWORD *)this + 2); ++j )
    {
      v9 = *(_DWORD *)this;
      v17 = j + *((_DWORD *)this + 1);
      v16 = v9 + i;
      World::unloadChunk(a2, v9 + i, v17, this);
    }
  }
  *((_DWORD *)this + 2) = a4;
  *(_DWORD *)this = CoordDivSection(*(_DWORD *)a3);
  *((_DWORD *)this + 1) = CoordDivSection(*((_DWORD *)a3 + 2));
  for ( k = -a4; ; ++k )
  {
    v11 = *((_DWORD *)this + 2);
    if ( k > v11 )
      break;
    v12 = -v11;
    while ( v12 <= *((_DWORD *)this + 2) )
    {
      v13 = v12 + *((_DWORD *)this + 1);
      ++v12;
      v16 = *(_DWORD *)this + k;
      v17 = v13;
      std::vector<ChunkIndex>::emplace_back<ChunkIndex>((int)this + 12, &v16);
    }
  }
  ChunkViewer::sortLoadChunks(this);
}


//======================================================================
// ChunkViewer::enterWorld(World *,WCoord const&,int)
// address: 0x002BBAFC   size: 0x8 (8 bytes)
//======================================================================
void __fastcall ChunkViewer::enterWorld(ChunkViewer *this, World *a2, const WCoord *a3, int a4)
{
  ChunkViewer::onResetViewFrustum(this, a2, a3, a4);
}


//======================================================================
// ChunkViewer::updateChunkView(World *,WCoord const&,int)
// address: 0x002BBB04   size: 0x7C (124 bytes)
//======================================================================
void __fastcall ChunkViewer::updateChunkView(char **this, World *a2, const WCoord *a3, char *a4)
{
  unsigned int v6; // r6
  int i; // r5
  char *v8; // r2
  char *v9; // r3
  char *v10; // r5
  int v11; // r5
  _DWORD *v12; // r0
  char *v13; // r1
  int v14; // r6

  if ( a4 == *(this + 2) )
    ChunkViewer::onMoveViewFrustum((ChunkViewer *)this, a2, a3);
  else
    ChunkViewer::onResetViewFrustum((ChunkViewer *)this, a2, a3, (int)a4);
  v6 = (*(this + 4) - *(this + 3)) >> 3;
  if ( v6 > 3 )
    v6 = 4;
  for ( i = 0; ; ++i )
  {
    v8 = *(this + 3);
    if ( i == v6 )
      break;
    World::tryLoadChunk(a2, *(_DWORD *)&v8[8 * i], *(_DWORD *)&v8[8 * i + 4], this);
  }
  v9 = &v8[8 * i];
  if ( v8 != v9 )
  {
    v10 = *(this + 4);
    if ( v9 != v10 )
    {
      v11 = (v10 - v9) >> 3;
      v12 = *(this + 3);
      v13 = v9;
      while ( v11 > 0 )
      {
        --v11;
        *v12 = *(_DWORD *)v13;
        v14 = *((_DWORD *)v13 + 1);
        v13 += 8;
        v12[1] = v14;
        v12 += 2;
      }
    }
    *(this + 4) = &v8[8 * ((*(this + 4) - v9) >> 3)];
  }
}


//======================================================================
// ChunkViewer::sortLoadChunks2(void)
// address: 0x002BBE98   size: 0x6A (106 bytes)
//======================================================================
__int64 __fastcall ChunkViewer::sortLoadChunks2(__int64 this)
{
  int *v1; // r6
  int v2; // r5
  int *v3; // r3
  unsigned int v4; // r0
  int v5; // r1
  int v6; // r3
  int v7; // r0
  int *v8; // r4
  __int64 v9; // r0
  __int64 v11; // [sp+0h] [bp-Ch]

  v11 = this;
  v1 = *(int **)(this + 16);
  v2 = *(_DWORD *)(this + 12);
  v3 = (int *)this;
  v4 = ((int)v1 - v2) >> 3;
  if ( v4 > 1 )
  {
    v5 = *v3;
    v6 = v3[1];
    dword_513488 = v5;
    dword_51348C = v6;
    if ( (int *)v2 != v1 )
    {
      v7 = j___clzsi2(v4);
      std::__introsort_loop<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex>>,int,bool (*)(ChunkIndex,ChunkIndex)>(
        v2,
        v1,
        2 * (31 - v7),
        (int (__fastcall *)(int, int, int, int))LessThan);
      HIDWORD(v11) = LessThan;
      if ( (int)v1 - v2 <= 135 )
      {
        std::__insertion_sort<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex>>,bool (*)(ChunkIndex,ChunkIndex)>(
          __SPAIR64__((unsigned int)v1, v2),
          (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))LessThan);
      }
      else
      {
        v8 = (int *)(v2 + 128);
        LODWORD(v9) = v2;
        HIDWORD(v9) = v2 + 128;
        std::__insertion_sort<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex>>,bool (*)(ChunkIndex,ChunkIndex)>(
          v9,
          (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))LessThan);
        while ( v8 != v1 )
        {
          std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex>>,bool (*)(ChunkIndex,ChunkIndex)>(
            v8,
            (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))LessThan);
          v8 += 2;
        }
      }
    }
  }
  return v11;
}

