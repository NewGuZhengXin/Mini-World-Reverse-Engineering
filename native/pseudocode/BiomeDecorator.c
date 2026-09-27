// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BiomeDecorator

//======================================================================
// BiomeDecorator::~BiomeDecorator()
// address: 0x002A0D04   size: 0x164 (356 bytes)
//======================================================================
// Alternative name is '_ZN14BiomeDecoratorD1Ev'
void __fastcall BiomeDecorator::~BiomeDecorator(BiomeDecorator *this)
{
  unsigned int v2; // r5
  void **v3; // r6
  int v4; // r3
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int i; // r5
  int v12; // r0
  int j; // r5
  int v14; // r0
  int k; // r5
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0

  v2 = 0;
  *(_DWORD *)this = &off_45CAB8;
  while ( 1 )
  {
    v3 = (void **)((char *)this + 140);
    v4 = *((_DWORD *)this + 35);
    if ( v2 >= -1431655765 * ((*((_DWORD *)this + 36) - v4) >> 3) )
      break;
    v5 = *(_DWORD *)(24 * v2 + v4);
    if ( v5 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
    ++v2;
  }
  v6 = *((_DWORD *)this + 32);
  if ( v6 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
  v7 = *((_DWORD *)this + 33);
  if ( v7 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
  v8 = *((_DWORD *)this + 34);
  if ( v8 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
  v9 = *((_DWORD *)this + 29);
  if ( v9 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 4))(v9);
  v10 = *((_DWORD *)this + 30);
  if ( v10 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 4))(v10);
  for ( i = 0; i != 16; i += 4 )
  {
    v12 = *(_DWORD *)((char *)this + i + 152);
    if ( v12 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 4))(v12);
  }
  for ( j = 0; j != 16; j += 4 )
  {
    v14 = *(_DWORD *)((char *)this + j + 168);
    if ( v14 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 4))(v14);
  }
  for ( k = 0; k != 12; k += 4 )
  {
    v16 = *(_DWORD *)((char *)this + k + 216);
    if ( v16 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 4))(v16);
  }
  v17 = *((_DWORD *)this + 46);
  if ( v17 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 4))(v17);
  v18 = *((_DWORD *)this + 47);
  if ( v18 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 4))(v18);
  v19 = *((_DWORD *)this + 48);
  if ( v19 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 4))(v19);
  v20 = *((_DWORD *)this + 49);
  if ( v20 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 4))(v20);
  v21 = *((_DWORD *)this + 50);
  if ( v21 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 4))(v21);
  v22 = *((_DWORD *)this + 51);
  if ( v22 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 4))(v22);
  v23 = *((_DWORD *)this + 52);
  if ( v23 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 4))(v23);
  v24 = *((_DWORD *)this + 53);
  if ( v24 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 4))(v24);
  v25 = *((_DWORD *)this + 57);
  if ( v25 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 4))(v25);
  if ( *v3 != nullptr )
    operator delete(*v3);
}


//======================================================================
// BiomeDecorator::~BiomeDecorator()
// address: 0x002A0E70   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BiomeDecorator::~BiomeDecorator(BiomeDecorator *this)
{
  BiomeDecorator::~BiomeDecorator(this);
  operator delete(this);
}


//======================================================================
// BiomeDecorator::genStandardOre1(int,WorldGenerator *,int,int)
// address: 0x002A0F14   size: 0x6C (108 bytes)
//======================================================================
int __fastcall BiomeDecorator::genStandardOre1(int this, int a2, WorldGenerator *a3, int a4, int a5)
{
  int v5; // r4
  int v6; // r7
  unsigned int v7; // r1
  ChunkRandGen *v8; // r0
  int v9; // r7
  char v10; // r0
  int v11; // r3
  int i; // [sp+0h] [bp-24h]
  _DWORD v16[4]; // [sp+14h] [bp-10h] BYREF

  v5 = this;
  for ( i = 0; i < a2; ++i )
  {
    v6 = *(_DWORD *)(v5 + 108);
    v16[0] = v6 + (ChunkRandGen::get(*(ChunkRandGen **)(v5 + 104)) & 0xF);
    v7 = ChunkRandGen::get(*(ChunkRandGen **)(v5 + 104)) % (unsigned int)(a5 - a4);
    v8 = *(ChunkRandGen **)(v5 + 104);
    v16[1] = v7 + a4;
    v9 = *(_DWORD *)(v5 + 112);
    v10 = ChunkRandGen::get(v8);
    v11 = *(_DWORD *)a3;
    v16[2] = v9 + (v10 & 0xF);
    this = (*(int (__fastcall **)(WorldGenerator *, _DWORD, _DWORD, _DWORD *))(v11 + 8))(
             a3,
             *(_DWORD *)(v5 + 100),
             *(_DWORD *)(v5 + 104),
             v16);
  }
  return this;
}


//======================================================================
// BiomeDecorator::genStandardOre2(int,WorldGenerator *,int,int)
// address: 0x002A0F80   size: 0x80 (128 bytes)
//======================================================================
int __fastcall BiomeDecorator::genStandardOre2(int this, int a2, WorldGenerator *a3, int a4, unsigned int a5)
{
  int v5; // r4
  int i; // r1
  int v8; // r6
  int v9; // r6
  ChunkRandGen *v10; // r0
  unsigned int v11; // r6
  ChunkRandGen *v12; // r0
  int v13; // r6
  char v14; // r0
  int v15; // r3
  unsigned int v16; // [sp+0h] [bp-24h]
  int v17; // [sp+4h] [bp-20h]
  _DWORD v20[4]; // [sp+14h] [bp-10h] BYREF

  v5 = this;
  for ( i = 0; ; i = v17 + 1 )
  {
    v17 = i;
    if ( i >= a2 )
      break;
    v8 = *(_DWORD *)(v5 + 108);
    v9 = v8 + (ChunkRandGen::get(*(ChunkRandGen **)(v5 + 104)) & 0xF);
    v10 = *(ChunkRandGen **)(v5 + 104);
    v20[0] = v9;
    v11 = ChunkRandGen::get(v10);
    v16 = ChunkRandGen::get(*(ChunkRandGen **)(v5 + 104));
    v12 = *(ChunkRandGen **)(v5 + 104);
    v20[1] = v11 % a5 + v16 % a5 + a4 - a5;
    v13 = *(_DWORD *)(v5 + 112);
    v14 = ChunkRandGen::get(v12);
    v15 = *(_DWORD *)a3;
    v20[2] = v13 + (v14 & 0xF);
    this = (*(int (__fastcall **)(WorldGenerator *, _DWORD, _DWORD, _DWORD *))(v15 + 8))(
             a3,
             *(_DWORD *)(v5 + 100),
             *(_DWORD *)(v5 + 104),
             v20);
  }
  return this;
}


//======================================================================
// BiomeDecorator::generateOres(int)
// address: 0x002A1000   size: 0x4E (78 bytes)
//======================================================================
__int64 __fastcall BiomeDecorator::generateOres(__int64 this)
{
  unsigned int i; // r5
  int v3; // r3
  int v4; // r4
  int v5; // r1
  WorldGenerator *v6; // r2
  int v7; // r3
  __int64 v9; // [sp+0h] [bp-Ch]
  int v10; // [sp+0h] [bp-Ch]

  v9 = this;
  for ( i = 0; ; ++i )
  {
    v3 = *(_DWORD *)(this + 140);
    if ( i >= -1431655765 * ((*(_DWORD *)(this + 144) - v3) >> 3) )
      break;
    v4 = v3 + 24 * i;
    if ( *(_DWORD *)(v4 + 4) == HIDWORD(this) )
    {
      v5 = *(_DWORD *)(v4 + 16);
      v6 = *(WorldGenerator **)v4;
      v7 = *(_DWORD *)(v4 + 8);
      v10 = *(_DWORD *)(v4 + 12);
      if ( *(_DWORD *)(v4 + 20) != 0 )
        BiomeDecorator::genStandardOre2(this, v5, v6, v7, v10);
      else
        BiomeDecorator::genStandardOre1(this, v5, v6, v7, v10);
    }
  }
  return v9;
}


//======================================================================
// BiomeDecorator::decorate(void)
// address: 0x002A1054   size: 0x58E (1422 bytes)
//======================================================================
int __fastcall BiomeDecorator::decorate(__int64 this)
{
  int v1; // r7
  int v2; // r4
  int v3; // r6
  ChunkRandGen *v4; // r5
  int i; // r4
  int v6; // r6
  ChunkRandGen *v7; // r5
  int j; // r4
  int v9; // r6
  ChunkRandGen *v10; // r5
  int v11; // r4
  int v12; // r4
  int v13; // r5
  int *v14; // r6
  int v15; // r5
  int v16; // r5
  int v17; // r4
  int *v18; // r6
  int v19; // r5
  int v20; // r5
  int v21; // r4
  int *v22; // r6
  int v23; // r5
  int v24; // r5
  int m; // r4
  int v26; // r6
  int n; // r4
  int v28; // r6
  int ii; // r4
  int v30; // r6
  int jj; // r4
  int v32; // r6
  int kk; // r4
  int v34; // r6
  int mm; // r4
  int result; // r0
  unsigned int v37; // r1
  int *v38; // r1
  int v39; // r5
  void (__fastcall *v40)(int, World *, ChunkRandGen *, _DWORD *); // r6
  int v41; // r4
  int nn; // r5
  World *v43; // r0
  int v44; // r6
  int v45; // r6
  int v46; // r6
  int v47; // r0
  int i1; // r6
  int v49; // r5
  int v50; // r5
  int v51; // r5
  int v52; // r0
  int k; // [sp+8h] [bp-34h]
  void (__fastcall *v54)(int, World *, ChunkRandGen *, _DWORD *); // [sp+8h] [bp-34h]
  void (__fastcall *v55)(int, World *, ChunkRandGen *, _DWORD *); // [sp+8h] [bp-34h]
  void (__fastcall *v56)(int, World *, ChunkRandGen *, _DWORD *); // [sp+8h] [bp-34h]
  void (__fastcall *v57)(int, World *, ChunkRandGen *, _DWORD *); // [sp+8h] [bp-34h]
  void (__fastcall *v58)(int, World *, ChunkRandGen *, _DWORD *); // [sp+8h] [bp-34h]
  unsigned int v59; // [sp+8h] [bp-34h]
  unsigned int v60; // [sp+8h] [bp-34h]
  ChunkRandGen *v61; // [sp+Ch] [bp-30h]
  World *v62; // [sp+10h] [bp-2Ch]
  World *v63; // [sp+10h] [bp-2Ch]
  World *v64; // [sp+10h] [bp-2Ch]
  World *v65; // [sp+10h] [bp-2Ch]
  World *v66; // [sp+10h] [bp-2Ch]
  World *v67; // [sp+10h] [bp-2Ch]
  World *v68; // [sp+10h] [bp-2Ch]
  World *v69; // [sp+10h] [bp-2Ch]
  World *v70; // [sp+10h] [bp-2Ch]
  World *v71; // [sp+10h] [bp-2Ch]
  World *v72; // [sp+10h] [bp-2Ch]
  World *v73; // [sp+10h] [bp-2Ch]
  World *v74; // [sp+10h] [bp-2Ch]
  unsigned int v75; // [sp+10h] [bp-2Ch]
  int v76; // [sp+14h] [bp-28h]
  int v77; // [sp+14h] [bp-28h]
  void (__fastcall *v78)(int, int, ChunkRandGen *, _DWORD *); // [sp+14h] [bp-28h]
  void (__fastcall *v79)(int, World *, ChunkRandGen *, _DWORD *); // [sp+18h] [bp-24h]
  void (__fastcall *v80)(int, int, ChunkRandGen *, _DWORD *); // [sp+18h] [bp-24h]
  void (__fastcall *v81)(int, int, ChunkRandGen *, _DWORD *); // [sp+18h] [bp-24h]
  int v82; // [sp+18h] [bp-24h]
  int v83; // [sp+1Ch] [bp-20h]
  int v84; // [sp+1Ch] [bp-20h]
  int v85; // [sp+1Ch] [bp-20h]
  int v86; // [sp+20h] [bp-1Ch] BYREF
  int v87; // [sp+24h] [bp-18h]
  int v88; // [sp+28h] [bp-14h]
  _DWORD v89[2]; // [sp+2Ch] [bp-10h] BYREF
  int v90; // [sp+34h] [bp-8h]

  HIDWORD(this) = *(unsigned __int16 *)(*(_DWORD *)(this + 100) + 60);
  v61 = *(ChunkRandGen **)(this + 104);
  v1 = this;
  BiomeDecorator::generateOres(this);
  v2 = 0;
  while ( v2 < *(_DWORD *)(v1 + 92) )
  {
    v3 = *(_DWORD *)(v1 + 132);
    v4 = *(ChunkRandGen **)(v1 + 100);
    ++v2;
    v62 = *(World **)(*(_DWORD *)v3 + 8);
    TopSolidRandomPos((World *)v89, v4, v61, *(_DWORD *)(v1 + 108), *(_DWORD *)(v1 + 112));
    ((void (__fastcall *)(int, ChunkRandGen *, ChunkRandGen *, _DWORD *))v62)(v3, v4, v61, v89);
  }
  for ( i = 0; i < *(_DWORD *)(v1 + 96); ++i )
  {
    v6 = *(_DWORD *)(v1 + 128);
    v7 = *(ChunkRandGen **)(v1 + 100);
    v63 = *(World **)(*(_DWORD *)v6 + 8);
    TopSolidRandomPos((World *)v89, v7, v61, *(_DWORD *)(v1 + 108), *(_DWORD *)(v1 + 112));
    ((void (__fastcall *)(int, ChunkRandGen *, ChunkRandGen *, _DWORD *))v63)(v6, v7, v61, v89);
  }
  for ( j = 0; j < *(_DWORD *)(v1 + 88); ++j )
  {
    v9 = *(_DWORD *)(v1 + 132);
    v10 = *(ChunkRandGen **)(v1 + 100);
    v64 = *(World **)(*(_DWORD *)v9 + 8);
    TopSolidRandomPos((World *)v89, v10, v61, *(_DWORD *)(v1 + 108), *(_DWORD *)(v1 + 112));
    ((void (__fastcall *)(int, ChunkRandGen *, ChunkRandGen *, _DWORD *))v64)(v9, v10, v61, v89);
  }
  if ( IsGenProbable(*(_DWORD *)(v1 + 12)) )
  {
    for ( k = 0; k < (*(_DWORD *)(v1 + 12) + 99) / 100; ++k )
    {
      v12 = (*(int (__fastcall **)(_DWORD, ChunkRandGen *))(**(_DWORD **)(v1 + 124) + 16))(*(_DWORD *)(v1 + 124), v61);
      (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v12 + 12))(v12, 1065353216, 1065353216, 1065353216);
      v83 = *(_DWORD *)(v1 + 112);
      v79 = *(void (__fastcall **)(int, World *, ChunkRandGen *, _DWORD *))(*(_DWORD *)v12 + 8);
      v65 = *(World **)(v1 + 100);
      v13 = *(_DWORD *)(v1 + 108);
      v77 = v13 + (ChunkRandGen::get(v61) & 0xF) + 8;
      v89[0] = v77;
      v90 = v83 + (ChunkRandGen::get(v61) & 0xF) + 8;
      v89[1] = World::getTopHeight(v65, v77, v90);
      v79(v12, v65, v61, v89);
    }
  }
  v76 = v1 + 16;
  v11 = v1;
  do
  {
    v14 = (int *)(v11 + 168);
    if ( *(_DWORD *)(v11 + 168) != 0 )
    {
      v15 = 0;
      if ( IsGenProbable(*(_DWORD *)(v11 + 16)) )
      {
        while ( 1 )
        {
          v66 = (World *)v15;
          if ( v15 >= (*(_DWORD *)(v11 + 16) + 99) / 100 )
            break;
          v16 = *v14;
          v84 = *(_DWORD *)(v1 + 100);
          v80 = *(void (__fastcall **)(int, int, ChunkRandGen *, _DWORD *))(*(_DWORD *)*v14 + 8);
          ChunkRandomPos((ChunkRandGen *)v89, v61, *(_DWORD *)(v1 + 108), *(_DWORD *)(v1 + 112));
          v80(v16, v84, v61, v89);
          v15 = (int)v66 + 1;
        }
      }
    }
    v11 += 4;
  }
  while ( v11 != v76 );
  v17 = v1;
  do
  {
    v18 = (int *)(v17 + 152);
    if ( *(_DWORD *)(v17 + 152) != 0 )
    {
      v19 = 0;
      if ( IsGenProbable(*(_DWORD *)(v17 + 32)) )
      {
        while ( 1 )
        {
          v67 = (World *)v19;
          if ( v19 >= (*(_DWORD *)(v17 + 32) + 99) / 100 )
            break;
          v20 = *v18;
          v85 = *(_DWORD *)(v1 + 100);
          v81 = *(void (__fastcall **)(int, int, ChunkRandGen *, _DWORD *))(*(_DWORD *)*v18 + 8);
          ChunkRandomPos((ChunkRandGen *)v89, v61, *(_DWORD *)(v1 + 108), *(_DWORD *)(v1 + 112));
          v81(v20, v85, v61, v89);
          v19 = (int)v67 + 1;
        }
      }
    }
    v17 += 4;
  }
  while ( v17 != v76 );
  v21 = v1;
  do
  {
    v22 = (int *)(v21 + 216);
    if ( *(_DWORD *)(v21 + 216) != 0 )
    {
      v23 = 0;
      if ( IsGenProbable(*(_DWORD *)(v21 + 76)) )
      {
        while ( 1 )
        {
          v68 = (World *)v23;
          if ( v23 >= (*(_DWORD *)(v21 + 76) + 99) / 100 )
            break;
          v24 = *v22;
          v82 = *(_DWORD *)(v1 + 100);
          v78 = *(void (__fastcall **)(int, int, ChunkRandGen *, _DWORD *))(*(_DWORD *)*v22 + 8);
          ChunkRandomPos((ChunkRandGen *)v89, v61, *(_DWORD *)(v1 + 108), *(_DWORD *)(v1 + 112));
          v78(v24, v82, v61, v89);
          v23 = (int)v68 + 1;
        }
      }
    }
    v21 += 4;
  }
  while ( v21 != v1 + 12 );
  if ( IsGenProbable(*(_DWORD *)(v1 + 48)) )
  {
    for ( m = 0; m < (*(_DWORD *)(v1 + 48) + 99) / 100; ++m )
    {
      v26 = *(_DWORD *)(v1 + 184);
      v69 = *(World **)(v1 + 100);
      v54 = *(void (__fastcall **)(int, World *, ChunkRandGen *, _DWORD *))(*(_DWORD *)v26 + 8);
      ChunkRandomPos((ChunkRandGen *)v89, v61, *(_DWORD *)(v1 + 108), *(_DWORD *)(v1 + 112));
      v54(v26, v69, v61, v89);
    }
  }
  if ( IsGenProbable(*(_DWORD *)(v1 + 52)) )
  {
    for ( n = 0; n < (*(_DWORD *)(v1 + 52) + 99) / 100; ++n )
    {
      v28 = *(_DWORD *)(v1 + 188);
      v70 = *(World **)(v1 + 100);
      v55 = *(void (__fastcall **)(int, World *, ChunkRandGen *, _DWORD *))(*(_DWORD *)v28 + 8);
      ChunkRandomPos((ChunkRandGen *)v89, v61, *(_DWORD *)(v1 + 108), *(_DWORD *)(v1 + 112));
      v55(v28, v70, v61, v89);
    }
  }
  if ( IsGenProbable(*(_DWORD *)(v1 + 56)) )
  {
    for ( ii = 0; ii < (*(_DWORD *)(v1 + 56) + 99) / 100; ++ii )
    {
      v30 = *(_DWORD *)(v1 + 192);
      v71 = *(World **)(v1 + 100);
      v56 = *(void (__fastcall **)(int, World *, ChunkRandGen *, _DWORD *))(*(_DWORD *)v30 + 8);
      ChunkRandomPos((ChunkRandGen *)v89, v61, *(_DWORD *)(v1 + 108), *(_DWORD *)(v1 + 112));
      v56(v30, v71, v61, v89);
    }
  }
  if ( IsGenProbable(*(_DWORD *)(v1 + 60)) )
  {
    for ( jj = 0; jj < (*(_DWORD *)(v1 + 60) + 99) / 100; ++jj )
    {
      v32 = *(_DWORD *)(v1 + 196);
      v72 = *(World **)(v1 + 100);
      v57 = *(void (__fastcall **)(int, World *, ChunkRandGen *, _DWORD *))(*(_DWORD *)v32 + 8);
      ChunkRandomPos((ChunkRandGen *)v89, v61, *(_DWORD *)(v1 + 108), *(_DWORD *)(v1 + 112));
      v57(v32, v72, v61, v89);
    }
  }
  if ( IsGenProbable(*(_DWORD *)(v1 + 64)) )
  {
    for ( kk = 0; kk < (*(_DWORD *)(v1 + 64) + 99) / 100; ++kk )
    {
      v34 = *(_DWORD *)(v1 + 200);
      v73 = *(World **)(v1 + 100);
      v58 = *(void (__fastcall **)(int, World *, ChunkRandGen *, _DWORD *))(*(_DWORD *)v34 + 8);
      ChunkRandomPos((ChunkRandGen *)v89, v61, *(_DWORD *)(v1 + 108), *(_DWORD *)(v1 + 112));
      v58(v34, v73, v61, v89);
    }
  }
  if ( IsGenProbable(*(_DWORD *)(v1 + 68)) )
  {
    for ( mm = 0; mm < (*(_DWORD *)(v1 + 68) + 99) / 100; ++mm )
    {
      v37 = ChunkRandGen::get(v61) % 3u;
      v74 = *(World **)(v1 + 100);
      if ( v37 != 0 )
        v38 = (int *)(v1 + 204);
      else
        v38 = (int *)(v1 + 208);
      v39 = *v38;
      v40 = *(void (__fastcall **)(int, World *, ChunkRandGen *, _DWORD *))(*(_DWORD *)*v38 + 8);
      ChunkRandomPos((ChunkRandGen *)v89, v61, *(_DWORD *)(v1 + 108), *(_DWORD *)(v1 + 112));
      v40(v39, v74, v61, v89);
    }
  }
  result = IsGenProbable(*(_DWORD *)(v1 + 8));
  if ( result != 0 )
  {
    for ( nn = 0; ; ++nn )
    {
      result = (*(_DWORD *)(v1 + 8) + 99) / 100;
      if ( nn >= result )
        break;
      ChunkRandomPos((ChunkRandGen *)&v86, v61, *(_DWORD *)(v1 + 108), *(_DWORD *)(v1 + 112));
      while ( v87 > 0 )
      {
        v89[1] = v87 - 1;
        v43 = *(World **)(v1 + 100);
        v89[0] = v86;
        v90 = v88;
        if ( World::getBlockID(v43, (const WCoord *)v89) != 0 )
          break;
        --v87;
      }
      (*(void (__fastcall **)(_DWORD, _DWORD, ChunkRandGen *, int *))(**(_DWORD **)(v1 + 228) + 8))(
        *(_DWORD *)(v1 + 228),
        *(_DWORD *)(v1 + 100),
        v61,
        &v86);
    }
  }
  v41 = 50;
  if ( *(_BYTE *)(v1 + 4) != 0 )
  {
    do
    {
      v44 = *(_DWORD *)(v1 + 108);
      v89[0] = v44 + (ChunkRandGen::get(v61) & 0xF) + 8;
      v59 = ChunkRandGen::get(v61);
      v89[1] = ChunkRandGen::get(v61) % (v59 % 0x78 + 8);
      v45 = *(_DWORD *)(v1 + 112);
      v46 = v45 + (ChunkRandGen::get(v61) & 0xF);
      v47 = *(_DWORD *)(v1 + 116);
      v90 = v46 + 8;
      --v41;
      (*(void (__fastcall **)(int, _DWORD, ChunkRandGen *, _DWORD *))(*(_DWORD *)v47 + 8))(
        v47,
        *(_DWORD *)(v1 + 100),
        v61,
        v89);
    }
    while ( v41 != 0 );
    for ( i1 = 20; i1 != 0; --i1 )
    {
      v49 = *(_DWORD *)(v1 + 108);
      v89[0] = v49 + (ChunkRandGen::get(v61) & 0xF) + 8;
      v60 = ChunkRandGen::get(v61);
      v75 = ChunkRandGen::get(v61);
      v89[1] = ChunkRandGen::get(v61) % (v75 % (v60 % 0x70 + 8) + 8);
      v50 = *(_DWORD *)(v1 + 112);
      v51 = v50 + (ChunkRandGen::get(v61) & 0xF);
      v52 = *(_DWORD *)(v1 + 120);
      v90 = v51 + 8;
      result = (*(int (__fastcall **)(int, _DWORD, ChunkRandGen *, _DWORD *))(*(_DWORD *)v52 + 8))(
                 v52,
                 *(_DWORD *)(v1 + 100),
                 v61,
                 v89);
    }
  }
  return result;
}


//======================================================================
// BiomeDecorator::decorate(World *,ChunkRandGen *,int,int)
// address: 0x002A15E2   size: 0x1A (26 bytes)
//======================================================================
int __fastcall BiomeDecorator::decorate(__int64 this, ChunkRandGen *a2, int a3, int a4)
{
  int v4; // r4
  int result; // r0

  *(_DWORD *)(this + 108) = a3;
  *(_DWORD *)(this + 100) = HIDWORD(this);
  *(_DWORD *)(this + 104) = a2;
  *(_DWORD *)(this + 112) = a4;
  v4 = this;
  result = BiomeDecorator::decorate(this);
  *(_DWORD *)(v4 + 100) = 0;
  *(_DWORD *)(v4 + 104) = 0;
  return result;
}


//======================================================================
// BiomeDecorator::initOreGens(void)
// address: 0x002A16A0   size: 0xAE (174 bytes)
//======================================================================
int __fastcall BiomeDecorator::initOreGens(BiomeDecorator *this)
{
  int result; // r0
  int i; // r4
  int v3; // r0
  int v4; // r7
  int v5; // r1
  int v6; // r3
  int v7; // r7
  _DWORD *v8; // r1
  _DWORD *v9; // r2
  int v10; // r3
  int v11; // r7
  int v12; // r3
  int v13; // r7
  __int64 v14; // r0
  int v16; // [sp+8h] [bp-1Ch] BYREF
  int v17; // [sp+Ch] [bp-18h]
  int v18; // [sp+10h] [bp-14h]
  int v19; // [sp+14h] [bp-10h]
  int v20; // [sp+18h] [bp-Ch]
  int v21; // [sp+1Ch] [bp-8h]

  result = Ogre::Singleton<DefManager>::ms_Singleton;
  for ( i = *(_DWORD *)(Ogre::Singleton<DefManager>::ms_Singleton + 408);
        i != Ogre::Singleton<DefManager>::ms_Singleton + 400;
        i = result )
  {
    v3 = operator new(0x14u);
    v4 = *(unsigned __int16 *)(i + 20);
    v5 = *(_DWORD *)(i + 52);
    *(_DWORD *)(v3 + 16) = *(_DWORD *)(i + 56);
    *(_DWORD *)v3 = &off_462D00;
    *(_BYTE *)(v3 + 4) = 0;
    *(_DWORD *)(v3 + 8) = v4;
    *(_DWORD *)(v3 + 12) = v5;
    v17 = *(int *)(i + 20) >> 16;
    v6 = *(_DWORD *)(i + 24);
    v16 = v3;
    if ( v6 < 0 )
      v18 = 0;
    else
      v18 = v6;
    if ( *(_DWORD *)(i + 28) + 1 > 128 )
      v19 = 128;
    else
      v19 = *(_DWORD *)(i + 28) + 1;
    v7 = *(_DWORD *)(i + 40);
    v8 = *((_DWORD **)this + 36);
    v9 = *((_DWORD **)this + 37);
    v20 = *(_DWORD *)(i + 48);
    v21 = v7;
    if ( v8 == v9 )
    {
      HIDWORD(v14) = &v16;
      LODWORD(v14) = (char *)this + 140;
      std::vector<BiomeDecorator::MinableGen>::_M_emplace_back_aux<BiomeDecorator::MinableGen const&>(v14);
    }
    else
    {
      if ( v8 != nullptr )
      {
        v10 = v17;
        v11 = v18;
        *v8 = v16;
        v8[1] = v10;
        v8[2] = v11;
        v12 = v20;
        v13 = v21;
        v8[3] = v19;
        v8[4] = v12;
        v8[5] = v13;
      }
      *((_DWORD *)this + 36) += 24;
    }
    result = sub_391DDC(i);
  }
  return result;
}


//======================================================================
// BiomeDecorator::BiomeDecorator(BiomeGenBase *,BiomeDef const*)
// address: 0x002A1758   size: 0x354 (852 bytes)
//======================================================================
// Alternative name is '_ZN14BiomeDecoratorC1EP12BiomeGenBasePK8BiomeDef'
int __fastcall BiomeDecorator::BiomeDecorator(int a1, int a2, _DWORD *a3)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  _DWORD *v9; // r5
  int i; // r3
  int v11; // r6
  int v12; // r0
  int v13; // r6
  _DWORD *v14; // r5
  int k; // r3
  int v16; // r6
  int n; // r3
  int v18; // r5
  int v19; // r3
  int v20; // r0
  int v21; // r3
  int v22; // r0
  int v23; // r2
  int v24; // r0
  int v25; // r3
  int v26; // r0
  int v27; // r3
  int v28; // r0
  int v29; // r3
  WorldGenFlowers *v30; // r6
  WorldGenFlowers *v31; // r6
  int v32; // r0
  _DWORD *v35; // [sp+Ch] [bp-18h]
  int v36; // [sp+10h] [bp-14h]
  int v37; // [sp+10h] [bp-14h]
  WorldGenJar *v38; // [sp+10h] [bp-14h]
  int v39; // [sp+14h] [bp-10h]
  int j; // [sp+14h] [bp-10h]
  int v41; // [sp+14h] [bp-10h]
  WorldGenTallgrass *v42; // [sp+18h] [bp-Ch]
  int v43; // [sp+18h] [bp-Ch]
  int m; // [sp+18h] [bp-Ch]
  int v45; // [sp+1Ch] [bp-8h]
  WorldGenFlowers *v46; // [sp+1Ch] [bp-8h]

  *(_DWORD *)a1 = &off_45CAB8;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 124) = a2;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  BiomeDecorator::initOreGens((BiomeDecorator *)a1);
  v4 = operator new(0xCu);
  *(_BYTE *)(v4 + 4) = 0;
  *(_DWORD *)v4 = &off_45C890;
  *(_DWORD *)(v4 + 8) = 4;
  *(_DWORD *)(a1 + 116) = v4;
  v5 = operator new(0xCu);
  *(_BYTE *)(v5 + 4) = 0;
  *(_DWORD *)v5 = &off_45C890;
  *(_DWORD *)(v5 + 8) = 6;
  *(_DWORD *)(a1 + 120) = v5;
  v6 = operator new(0x10u);
  *(_BYTE *)(v6 + 4) = 0;
  *(_DWORD *)v6 = &off_4618C0;
  *(_DWORD *)(v6 + 8) = 114;
  *(_DWORD *)(v6 + 12) = 4;
  *(_DWORD *)(a1 + 128) = v6;
  v7 = operator new(0x10u);
  *(_BYTE *)(v7 + 4) = 0;
  *(_DWORD *)v7 = &off_45D578;
  *(_DWORD *)(v7 + 8) = 106;
  *(_DWORD *)(v7 + 12) = 7;
  *(_DWORD *)(a1 + 132) = v7;
  v8 = operator new(0x10u);
  *(_DWORD *)(v8 + 8) = 107;
  *(_DWORD *)(v8 + 12) = 6;
  *(_DWORD *)v8 = &off_45D578;
  *(_BYTE *)(v8 + 4) = 0;
  *(_DWORD *)(a1 + 136) = v8;
  *(_DWORD *)(a1 + 12) = a3[17];
  *(_DWORD *)(a1 + 56) = a3[36];
  *(_DWORD *)(a1 + 60) = a3[37];
  *(_DWORD *)(a1 + 64) = a3[38];
  *(_DWORD *)(a1 + 68) = a3[39];
  *(_DWORD *)(a1 + 72) = a3[40];
  *(_DWORD *)(a1 + 48) = a3[34];
  *(_DWORD *)(a1 + 52) = a3[35];
  j_memset((void *)(a1 + 152), 0, 0x10u);
  j_memset((void *)(a1 + 168), 0, 0x10u);
  j_memset((void *)(a1 + 216), 0, 0xCu);
  v9 = a3;
  v36 = a1;
  v45 = 0;
  v35 = (_DWORD *)Ogre::Singleton<DefManager>::ms_Singleton;
  do
  {
    v39 = v9[18];
    if ( v39 == 0 )
      break;
    for ( i = 0; ; ++i )
    {
      v11 = v35[i + 4];
      if ( v11 == 0 )
        break;
      if ( v11 == v39 )
      {
        v11 = v35[i + 12];
        break;
      }
    }
    v42 = (WorldGenTallgrass *)operator new(0x14u);
    WorldGenTallgrass::WorldGenTallgrass(v42, v39, v11);
    ++v9;
    *(_DWORD *)(v36 + 152) = v42;
    v12 = v45;
    *(_DWORD *)(v36 + 32) = v9[21];
    ++v45;
    v36 += 4;
  }
  while ( v12 != 3 );
  v13 = a1;
  v14 = a3;
  for ( j = 4; j != 0; --j )
  {
    v43 = v14[26];
    if ( v43 == 0 )
      break;
    for ( k = 0; ; ++k )
    {
      v37 = v35[k + 20];
      if ( v37 == 0 )
        break;
      if ( v37 == v43 )
      {
        v37 = v35[k + 52];
        break;
      }
    }
    v46 = (WorldGenFlowers *)operator new(0x14u);
    WorldGenFlowers::WorldGenFlowers(v46, v43, v37);
    *(_DWORD *)(v13 + 168) = v46;
    v13 += 4;
    *(_DWORD *)(v13 + 12) = v14[30];
    ++v14;
  }
  v16 = a1;
  for ( m = 0; m != 3; ++m )
  {
    v41 = a3[41];
    if ( v41 == 0 )
      break;
    for ( n = 0; ; ++n )
    {
      v18 = v35[n + 91];
      if ( v18 == 0 )
        break;
      if ( v18 == v41 )
      {
        v18 = v35[n + 95];
        break;
      }
    }
    v38 = (WorldGenJar *)operator new(0x10u);
    WorldGenJar::WorldGenJar(v38, v41, v18);
    *(_DWORD *)(v16 + 216) = v38;
    v16 += 4;
    v19 = a3[44];
    ++a3;
    *(_DWORD *)(v16 + 72) = v19;
  }
  v20 = operator new(0x10u);
  v21 = v35[84];
  *(_BYTE *)(v20 + 4) = 0;
  *(_DWORD *)(v20 + 12) = v21;
  *(_DWORD *)v20 = &off_4613D8;
  *(_DWORD *)(v20 + 8) = 230;
  *(_DWORD *)(a1 + 184) = v20;
  v22 = operator new(0x10u);
  v23 = v35[85];
  *(_BYTE *)(v22 + 4) = 0;
  *(_DWORD *)(v22 + 8) = 239;
  *(_DWORD *)(v22 + 12) = v23;
  *(_DWORD *)v22 = &off_4613D8;
  *(_DWORD *)(a1 + 188) = v22;
  v24 = operator new(0x10u);
  v25 = v35[86];
  *(_BYTE *)(v24 + 4) = 0;
  *(_DWORD *)(v24 + 12) = v25;
  *(_DWORD *)v24 = &off_4627B8;
  *(_DWORD *)(v24 + 8) = 225;
  *(_DWORD *)(a1 + 192) = v24;
  v26 = operator new(0xCu);
  v27 = v35[87];
  *(_BYTE *)(v26 + 4) = 0;
  *(_DWORD *)(v26 + 8) = v27;
  *(_DWORD *)v26 = &off_45CCB0;
  *(_DWORD *)(a1 + 196) = v26;
  v28 = operator new(0xCu);
  v29 = v35[88];
  *(_BYTE *)(v28 + 4) = 0;
  *(_DWORD *)(v28 + 8) = v29;
  *(_DWORD *)v28 = &off_45E3D8;
  *(_DWORD *)(a1 + 200) = v28;
  v30 = (WorldGenFlowers *)operator new(0x14u);
  WorldGenFlowers::WorldGenFlowers(v30, 226, v35[89]);
  *(_DWORD *)(a1 + 204) = v30;
  v31 = (WorldGenFlowers *)operator new(0x14u);
  WorldGenFlowers::WorldGenFlowers(v31, 227, v35[89]);
  *(_DWORD *)(a1 + 208) = v31;
  *(_DWORD *)(a1 + 212) = 0;
  v32 = operator new(8u);
  *(_BYTE *)(v32 + 4) = 0;
  *(_DWORD *)v32 = &off_45DFC8;
  *(_DWORD *)(a1 + 228) = v32;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 88) = 1;
  *(_DWORD *)(a1 + 92) = 3;
  *(_DWORD *)(a1 + 96) = 1;
  *(_BYTE *)(a1 + 4) = 1;
  return a1;
}

