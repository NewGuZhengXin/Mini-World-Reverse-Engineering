// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MapGenStructure

//======================================================================
// MapGenStructure::getCoordList(std::vector<WCoord,std::allocator<WCoord>> &)
// address: 0x002BD1D0   size: 0x4 (4 bytes)
//======================================================================
int MapGenStructure::getCoordList()
{
  return 0;
}


//======================================================================
// MapGenStructure::generateStructuresInChunk(World *,ChunkRandGen &,int,int)
// address: 0x002BD212   size: 0x8E (142 bytes)
//======================================================================
int __fastcall MapGenStructure::generateStructuresInChunk(
        MapGenStructure *this,
        World *a2,
        ChunkRandGen *a3,
        int a4,
        int a5)
{
  _DWORD *v6; // r5
  int v7; // r6
  StructureStart *v8; // r4
  int v10; // [sp+0h] [bp-34h]
  int v11; // [sp+4h] [bp-30h]
  int v12; // [sp+8h] [bp-2Ch]
  _DWORD v15[7]; // [sp+18h] [bp-1Ch] BYREF

  v6 = *((_DWORD **)this + 8);
  v11 = 16 * a4;
  v10 = 16 * a5;
  v12 = 16 * a4 + 8;
  v7 = 0;
  while ( v6 != (_DWORD *)((char *)this + 24) )
  {
    v8 = (StructureStart *)v6[6];
    if ( (*(int (__fastcall **)(StructureStart *))(*(_DWORD *)v8 + 8))(v8) != 0
      && *((_DWORD *)v8 + 7) >= v12
      && *((_DWORD *)v8 + 4) <= v11 + 23
      && *((_DWORD *)v8 + 9) >= 16 * a5 + 8
      && *((_DWORD *)v8 + 6) <= v10 + 23 )
    {
      v7 = 1;
      v15[0] = v12;
      v15[5] = v10 + 23;
      v15[2] = 16 * a5 + 8;
      v15[3] = v11 + 23;
      v15[4] = 512;
      v15[1] = 1;
      StructureStart::generateStructure(v8, a2, a3, (StructureBoundingBox *)v15);
    }
    v6 = (_DWORD *)sub_391DDC(v6);
  }
  return v7;
}


//======================================================================
// MapGenStructure::hasStructureAt(int,int,int)
// address: 0x002BD2A0   size: 0x80 (128 bytes)
//======================================================================
int __fastcall MapGenStructure::hasStructureAt(MapGenStructure *this, int a2, int a3, int a4)
{
  _DWORD *i; // r5
  _DWORD *v7; // r4
  int result; // r0
  int j; // r2
  _DWORD *v10; // r3

  for ( i = *((_DWORD **)this + 8); i != (_DWORD *)((char *)this + 24); i = (_DWORD *)sub_391DDC(i) )
  {
    v7 = (_DWORD *)i[6];
    result = (*(int (__fastcall **)(_DWORD *))(*v7 + 8))(v7);
    if ( result != 0 && v7[7] >= a2 && v7[4] <= a2 && v7[9] >= a4 && v7[6] <= a4 )
    {
      for ( j = v7[1]; j != v7[2]; j += 4 )
      {
        v10 = *(_DWORD **)j;
        if ( a2 >= *(_DWORD *)(*(_DWORD *)j + 4)
          && a2 <= v10[4]
          && a4 >= v10[3]
          && a4 <= v10[6]
          && a3 >= v10[2]
          && a3 <= v10[5] )
        {
          return result;
        }
      }
    }
  }
  return 0;
}


//======================================================================
// MapGenStructure::func_142038_b(int,int,int)
// address: 0x002BD320   size: 0x52 (82 bytes)
//======================================================================
int __fastcall MapGenStructure::func_142038_b(MapGenStructure *this, int a2, int a3, int a4)
{
  _DWORD **i; // r4
  _DWORD *v8; // r3
  int result; // r0

  for ( i = *((_DWORD ***)this + 8); ; i = (_DWORD **)sub_391DDC(i) )
  {
    if ( i == (_DWORD **)((char *)this + 24) )
      return 0;
    if ( (*(int (__fastcall **)(_DWORD *, int, int))(*i[6] + 8))(i[6], a2, a3) != 0 )
      break;
  }
  v8 = i[6];
  result = 0;
  if ( v8[7] >= a2 && v8[4] <= a2 && v8[9] >= a4 )
    return (unsigned __int8)((a4 >> 31) + ((unsigned int)a4 >= v8[6]) + ((int)v8[6] < 0));
  return result;
}


//======================================================================
// MapGenStructure::getNearestInstance(World *,int,int,int)
// address: 0x002BD378   size: 0x250 (592 bytes)
//======================================================================
MapGenStructure *__fastcall MapGenStructure::getNearestInstance(
        MapGenStructure *this,
        World *a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  unsigned int v8; // r2
  unsigned __int16 *v10; // r6
  __int64 v11; // r2
  __int64 v12; // r0
  __int64 v13; // r2
  __int64 v14; // r0
  unsigned __int64 v15; // r0
  int v16; // r6
  _DWORD **v17; // r5
  _DWORD *v18; // r3
  int v19; // r5
  int *v20; // r6
  double v21; // r4
  int v23; // [sp+14h] [bp-40h]
  _DWORD *v24; // [sp+14h] [bp-40h]
  int v25; // [sp+14h] [bp-40h]
  int v26; // [sp+18h] [bp-3Ch]
  double v27; // [sp+18h] [bp-3Ch]
  int v28; // [sp+20h] [bp-34h]
  int v29; // [sp+20h] [bp-34h]
  unsigned int v30; // [sp+24h] [bp-30h]
  int v31; // [sp+24h] [bp-30h]
  int v32; // [sp+24h] [bp-30h]
  int v33; // [sp+28h] [bp-2Ch]
  int v34; // [sp+28h] [bp-2Ch]
  int v35; // [sp+28h] [bp-2Ch]
  int v36; // [sp+2Ch] [bp-28h]
  int v37; // [sp+2Ch] [bp-28h]
  int v38; // [sp+30h] [bp-24h]
  void *v40; // [sp+40h] [bp-14h] BYREF
  void *v41; // [sp+44h] [bp-10h]
  int *v42; // [sp+48h] [bp-Ch]
  int v43; // [sp+4Ch] [bp-8h]

  *((_DWORD *)a2 + 4) = a3;
  v8 = *(_DWORD *)(a3 + 48);
  v10 = (unsigned __int16 *)((char *)a2 + 8);
  HIDWORD(v11) = v8 >> 20;
  LODWORD(v11) = (v8 << 12) ^ *(_DWORD *)(a3 + 44);
  ChunkRandGen::setSeed64((int)a2 + 8, v11);
  ChunkRandGen::_dorand48(v10);
  v30 = *((unsigned __int16 *)a2 + 6);
  v33 = (*((unsigned __int16 *)a2 + 5) << 16) | *((unsigned __int16 *)a2 + 4);
  ChunkRandGen::_dorand48(v10);
  HIDWORD(v12) = a6 >> 31;
  HIDWORD(v13) = *((unsigned __int16 *)a2 + 6);
  LODWORD(v13) = (*((unsigned __int16 *)a2 + 5) << 16) | *((unsigned __int16 *)a2 + 4);
  LODWORD(v12) = a6 >> 4;
  v14 = v12 * v13;
  v26 = *(_DWORD *)(a3 + 44) ^ (*(_DWORD *)(a3 + 48) << 12) ^ v14;
  v23 = ((unsigned __int64)*(unsigned int *)(a3 + 48) >> 20) ^ HIDWORD(v14);
  HIDWORD(v14) = a4 >> 31;
  LODWORD(v14) = a4 >> 4;
  v15 = v14 * __PAIR64__(v30, v33);
  LODWORD(v13) = v26 ^ v15;
  HIDWORD(v13) = v23 ^ HIDWORD(v15);
  ChunkRandGen::setSeed64((int)v10, v13);
  v40 = nullptr;
  (*(void (__fastcall **)(World *, int, int, int, _DWORD, _DWORD, void **))(*(_DWORD *)a2 + 8))(
    a2,
    a3,
    a4 >> 4,
    a6 >> 4,
    0,
    0,
    &v40);
  v16 = 0x7FFFFFFF;
  v27 = 1.79769313e308;
  v24 = *((_DWORD **)a2 + 8);
  v36 = 0x7FFFFFFF;
  v28 = 0x7FFFFFFF;
  while ( v24 != (_DWORD *)((char *)a2 + 24) )
  {
    v17 = (_DWORD **)v24[6];
    if ( ((int (__fastcall *)(_DWORD **))(*v17)[2])(v17) != 0 )
    {
      v18 = (_DWORD *)*v17[1];
      v31 = v18[1] + (v18[4] - v18[1] + 1) / 2;
      v34 = v18[2] + (v18[5] - v18[2] + 1) / 2;
      v19 = v18[3] + (v18[6] - v18[3] + 1) / 2;
      if ( (double)((v31 - a4) * (v31 - a4) + (v34 - a5) * (v34 - a5) + (v19 - a6) * (v19 - a6)) < v27 )
      {
        v27 = (double)((v31 - a4) * (v31 - a4) + (v34 - a5) * (v34 - a5) + (v19 - a6) * (v19 - a6));
        v16 = v18[3] + (v18[6] - v18[3] + 1) / 2;
        v36 = v18[2] + (v18[5] - v18[2] + 1) / 2;
        v28 = v18[1] + (v18[4] - v18[1] + 1) / 2;
      }
    }
    v24 = (_DWORD *)sub_391DDC(v24);
  }
  if ( v28 == 0x7FFFFFFF )
  {
    v41 = nullptr;
    v42 = nullptr;
    v43 = 0;
    if ( (*(int (__fastcall **)(World *))(*(_DWORD *)a2 + 12))(a2) != 0 )
    {
      v20 = (int *)v41;
      v25 = 0x7FFFFFFF;
      v29 = 0x7FFFFFFF;
      v38 = 0x7FFFFFFF;
      while ( v20 != v42 )
      {
        v37 = *v20;
        v35 = v20[1];
        v32 = v20[2];
        v21 = (double)((*v20 - a4) * (*v20 - a4) + (v35 - a5) * (v35 - a5) + (v32 - a6) * (v32 - a6));
        if ( v21 >= v27 )
        {
          v32 = v25;
          v35 = v29;
          v37 = v38;
          v21 = v27;
        }
        v20 += 3;
        v25 = v32;
        v29 = v35;
        v38 = v37;
        v27 = v21;
      }
      *(_DWORD *)this = v38;
      *((_DWORD *)this + 1) = v29;
      *((_DWORD *)this + 2) = v25;
    }
    else
    {
      *(_DWORD *)this = 0x7FFFFFFF;
      *((_DWORD *)this + 1) = 0x7FFFFFFF;
      *((_DWORD *)this + 2) = 0x7FFFFFFF;
    }
    if ( v41 != nullptr )
      operator delete(v41);
  }
  else
  {
    *(_DWORD *)this = v28;
    *((_DWORD *)this + 2) = v16;
    *((_DWORD *)this + 1) = v36;
  }
  if ( v40 != nullptr )
    operator delete[](v40);
  return this;
}


//======================================================================
// MapGenStructure::recursiveGenerate(World *,int,int,int,int,ChunkGenData &)
// address: 0x002BD770   size: 0xE4 (228 bytes)
//======================================================================
int *__fastcall MapGenStructure::recursiveGenerate(int *result, int a2, int a3, int a4)
{
  int *v5; // r5
  int *v6; // r4
  int *v7; // r3
  int v8; // r0
  int v9; // r5
  _DWORD *v10; // r7
  _DWORD *v11; // r3
  int *v12; // [sp+Ch] [bp-20h]
  int *v13; // [sp+10h] [bp-1Ch]
  int v14; // [sp+10h] [bp-1Ch]
  int *v16; // [sp+1Ch] [bp-10h] BYREF
  int v17[3]; // [sp+20h] [bp-Ch] BYREF

  v17[0] = a3;
  v5 = (int *)result[7];
  v6 = result;
  v17[1] = a4;
  v13 = result + 6;
  v12 = result + 6;
  while ( v5 != nullptr )
  {
    result = (int *)sub_2BD1F0(v5 + 4, v17);
    if ( result != nullptr )
    {
      v7 = (int *)v5[3];
      v5 = v12;
    }
    else
    {
      v7 = (int *)v5[2];
    }
    v12 = v5;
    v5 = v7;
  }
  if ( v12 != v13 )
  {
    result = (int *)sub_2BD1F0(v17, v12 + 4);
    if ( result != nullptr )
      v12 = v13;
  }
  if ( v12 == v13 )
  {
    ChunkRandGen::_dorand48((unsigned __int16 *)v6 + 4);
    result = (int *)(*(int (__fastcall **)(int *, int, int))(*v6 + 16))(v6, a3, a4);
    if ( result != nullptr )
    {
      v8 = (*(int (__fastcall **)(int *, int, int))(*v6 + 20))(v6, a3, a4);
      v17[0] = a3;
      v9 = (int)v12;
      v10 = (_DWORD *)v6[7];
      v14 = v8;
      v17[1] = a4;
      while ( v10 != nullptr )
      {
        if ( sub_2BD1F0(v10 + 4, v17) )
        {
          v11 = (_DWORD *)v10[3];
          v10 = (_DWORD *)v9;
        }
        else
        {
          v11 = (_DWORD *)v10[2];
        }
        v9 = (int)v10;
        v10 = v11;
      }
      if ( (int *)v9 == v12 || (result = (int *)sub_2BD1F0(v17, (int *)(v9 + 16))) != nullptr )
      {
        v16 = v17;
        result = std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,StructureStart *>,std::_Select1st<std::pair<ChunkIndex const,StructureStart *>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,StructureStart *>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<ChunkIndex&&>,std::tuple<>>(
                   v6 + 5,
                   v9,
                   (int)&unk_446420,
                   &v16);
        v9 = (int)result;
      }
      *(_DWORD *)(v9 + 24) = v14;
    }
  }
  return result;
}


//======================================================================
// MapGenStructure::~MapGenStructure()
// address: 0x002BD878   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN15MapGenStructureD1Ev'
void __fastcall MapGenStructure::~MapGenStructure(MapGenStructure *this)
{
  *(_DWORD *)this = &off_45EA70;
  std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,StructureStart *>,std::_Select1st<std::pair<ChunkIndex const,StructureStart *>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,StructureStart *>>>::_M_erase(
    (int)this + 20,
    *((_DWORD **)this + 7));
  *(_DWORD *)this = &off_45EA48;
}


//======================================================================
// MapGenStructure::~MapGenStructure()
// address: 0x002BD8A4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall MapGenStructure::~MapGenStructure(MapGenStructure *this)
{
  MapGenStructure::~MapGenStructure(this);
  operator delete(this);
}

