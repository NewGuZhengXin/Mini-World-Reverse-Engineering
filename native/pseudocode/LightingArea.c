// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: LightingArea

//======================================================================
// LightingArea::Coord2Index(WCoord const&)
// address: 0x002F2770   size: 0x18 (24 bytes)
//======================================================================
int __fastcall LightingArea::Coord2Index(int a1, _DWORD *a2)
{
  return *(_DWORD *)(a1 + 24) * (*(_DWORD *)(a1 + 32) * a2[1] + a2[2]) + *a2;
}


//======================================================================
// LightingArea::setBlockLight(WCoord const&,int,int)
// address: 0x002F2788   size: 0x26 (38 bytes)
//======================================================================
_WORD *__fastcall LightingArea::setBlockLight(int a1, _DWORD *a2, char a3, __int16 a4)
{
  _WORD *result; // r0

  result = (_WORD *)(*(_DWORD *)(a1 + 36) + 2 * LightingArea::Coord2Index(a1, a2));
  *result = *result & ~(unsigned __int16)(15 << (4 * a3)) | (a4 << (4 * a3));
  return result;
}


//======================================================================
// LightingArea::getBlockLight(WCoord const&,int)
// address: 0x002F27AE   size: 0x1A (26 bytes)
//======================================================================
int __fastcall LightingArea::getBlockLight(int a1, _DWORD *a2, char a3)
{
  return ((int)*(unsigned __int16 *)(2 * LightingArea::Coord2Index(a1, a2) + *(_DWORD *)(a1 + 36)) >> (4 * a3)) & 0xF;
}


//======================================================================
// LightingArea::getBlockLightAtten(WCoord const&)
// address: 0x002F27C8   size: 0x14 (20 bytes)
//======================================================================
unsigned int __fastcall LightingArea::getBlockLightAtten(int a1, _DWORD *a2)
{
  return (unsigned int)(*(unsigned __int16 *)(2 * LightingArea::Coord2Index(a1, a2) + *(_DWORD *)(a1 + 36)) << 20) >> 28;
}


//======================================================================
// LightingArea::LightingArea(void)
// address: 0x002F27DC   size: 0x10 (16 bytes)
//======================================================================
// Alternative name is '_ZN12LightingAreaC1Ev'
void __fastcall LightingArea::LightingArea(LightingArea *this)
{
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
}


//======================================================================
// LightingArea::~LightingArea()
// address: 0x002F27EC   size: 0x18 (24 bytes)
//======================================================================
// Alternative name is '_ZN12LightingAreaD1Ev'
void __fastcall LightingArea::~LightingArea(void **this)
{
  void *v2; // r0

  sub_2F2764(*(this + 12));
  v2 = *(this + 9);
  if ( v2 != nullptr )
    operator delete(v2);
}


//======================================================================
// LightingArea::blockInputLocalLight(WCoord const&,int)
// address: 0x002F2804   size: 0x36 (54 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> LightingArea::blockInputLocalLight(int *a1, int *a2, int a3, int a4)
{
  int v6; // r6
  _DWORD v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[1] = a3;
  v7[2] = a4;
  operator-(v7, a2, a1);
  v6 = a3 - LightingArea::getBlockLightAtten((int)a1, v7);
  if ( v6 > LightingArea::getBlockLight((int)a1, v7, 1) )
    LightingArea::setBlockLight((int)a1, v7, 1, v6);
}


//======================================================================
// LightingArea::fillSkyLight(World *)
// address: 0x002F283C   size: 0x1AE (430 bytes)
//======================================================================
int *__fastcall LightingArea::fillSkyLight(int *this, World *a2)
{
  int v2; // r1
  int *v3; // r4
  int v4; // r2
  int v5; // r7
  int v6; // r5
  int v7; // r7
  signed int v8; // r6
  signed int v9; // r5
  int BlockDef; // r0
  int v11; // r3
  int v12; // r0
  __int16 v13; // r3
  int v14; // r0
  int v15; // r3
  int v16; // r2
  int v17; // [sp+0h] [bp-44h]
  Chunk *v18; // [sp+4h] [bp-40h]
  int i; // [sp+8h] [bp-3Ch]
  int v20; // [sp+Ch] [bp-38h]
  __int16 *Block; // [sp+10h] [bp-34h]
  int v22; // [sp+14h] [bp-30h]
  int v23; // [sp+18h] [bp-2Ch]
  int v24; // [sp+1Ch] [bp-28h]
  int v25; // [sp+20h] [bp-24h]
  int v27[3]; // [sp+28h] [bp-1Ch] BYREF
  int v28[4]; // [sp+34h] [bp-10h] BYREF

  v2 = *(this + 2);
  v3 = this;
  while ( 1 )
  {
    v20 = v2;
    if ( v2 > v3[5] )
      break;
    for ( i = *v3; i <= v3[3]; ++i )
    {
      v28[0] = i;
      v28[1] = 0;
      v28[2] = v20;
      this = (int *)World::getChunk(a2, (const WCoord *)v28);
      v18 = (Chunk *)this;
      if ( this != nullptr )
      {
        v22 = i - *(this + 69);
        v4 = v3[4];
        v23 = v20 - *(this + 71);
        if ( v4 > 254 )
        {
          v24 = 0;
          v7 = 15;
        }
        else
        {
          v5 = (unsigned __int8)*Chunk::getBlockLight((Chunk *)this, v22, v4 + 1, v20 - *(this + 71));
          v6 = v5 >> 4;
          v7 = v5 & 0xF;
          v24 = v6;
        }
        v8 = *((unsigned __int8 *)v18 + ((16 * v23) | v22) + 292);
        if ( v8 < v3[1] )
          v8 = v3[1];
        v9 = v3[4];
        if ( v7 == 15 )
        {
          if ( v9 >= v8 )
            v9 = v8 - 1;
        }
        else
        {
          while ( v9 >= v8 )
          {
            v27[0] = i;
            v27[2] = v20;
            v27[1] = v9;
            operator-(v28, v27, v3);
            LightingArea::setBlockLight((int)v3, v28, 0, v7);
            --v9;
          }
        }
        while ( v9 >= v3[1] )
        {
          Block = Chunk::getBlock(v18, v22, v9, v23);
          BlockDef = DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, *Block & 0xFFF);
          v11 = *(_DWORD *)(BlockDef + 64);
          v28[0] = i;
          v25 = BlockDef;
          v28[2] = v20;
          v17 = v11;
          v28[1] = v9;
          operator-(v27, v28, v3);
          if ( v7 <= 0 )
          {
            v12 = (int)v3;
            v13 = 0;
          }
          else
          {
            if ( ((((unsigned __int16)*Block << 16) & 0xFFFFFFFu) - 196608) >> 16 > 1 || v7 > 5 )
              v7 = (v7 - v17) & (~(v7 - v17) >> 31);
            v12 = (int)v3;
            v13 = v7;
          }
          LightingArea::setBlockLight(v12, v27, 0, v13);
          if ( v17 == 0 )
            LOWORD(v17) = 1;
          v14 = LightingArea::Coord2Index((int)v3, v27);
          *(_WORD *)(v3[9] + 2 * v14) = *(_WORD *)(v3[9] + 2 * v14) & 0xF0FF | ((_WORD)v17 << 8);
          v15 = *(_DWORD *)(v25 + 68);
          if ( v15 > 0 )
            LightingArea::setBlockLight((int)v3, v27, 1, v15);
          --v9;
        }
        v16 = v3[4];
        v28[0] = i;
        v28[1] = v16;
        this = v3;
        v28[2] = v20;
        LightingArea::blockInputLocalLight(v3, v28, v24, v20);
      }
    }
    v2 = v20 + 1;
  }
  return this;
}


//======================================================================
// LightingArea::setBorderBlockLight(World *,WCoord const&,WCoord const&)
// address: 0x002F29F8   size: 0x68 (104 bytes)
//======================================================================
_WORD *__fastcall LightingArea::setBorderBlockLight(LightingArea *this, World *a2, const WCoord *a3, const WCoord *a4)
{
  int v6; // r6
  unsigned int BlockLightAtten; // r0
  int v8; // r7
  signed int v9; // r6
  _WORD *result; // r0
  _DWORD v11[4]; // [sp+4h] [bp-10h] BYREF

  v6 = (unsigned __int8)*World::getBlockLight(a2, a4);
  operator-(v11, (int *)a3, (int *)this);
  BlockLightAtten = LightingArea::getBlockLightAtten((int)this, v11);
  v8 = (v6 & 0xF) - BlockLightAtten;
  v9 = (v6 >> 4) - BlockLightAtten;
  if ( v8 > LightingArea::getBlockLight((int)this, v11, 0) )
    LightingArea::setBlockLight((int)this, v11, 0, v8);
  result = (_WORD *)LightingArea::getBlockLight((int)this, v11, 1);
  if ( v9 > (int)result )
    return LightingArea::setBlockLight((int)this, v11, 1, v9);
  return result;
}


//======================================================================
// LightingArea::addBorderLight(World *)
// address: 0x002F2A60   size: 0x106 (262 bytes)
//======================================================================
LightingArea *__fastcall LightingArea::addBorderLight(LightingArea *this, World *a2)
{
  LightingArea *v2; // r4
  int i; // r5
  int j; // r6
  int m; // r5
  int ii; // r5
  int k; // [sp+0h] [bp-24h]
  int n; // [sp+0h] [bp-24h]
  int v10; // [sp+8h] [bp-1Ch] BYREF
  int v11; // [sp+Ch] [bp-18h]
  int v12; // [sp+10h] [bp-14h]
  int v13; // [sp+14h] [bp-10h] BYREF
  int v14; // [sp+18h] [bp-Ch]
  int v15; // [sp+1Ch] [bp-8h]

  v2 = this;
  if ( *((int *)this + 1) > 0 )
  {
    for ( i = *((_DWORD *)this + 2); i <= *((_DWORD *)v2 + 5); ++i )
    {
      for ( j = *(_DWORD *)v2; j <= *((_DWORD *)v2 + 3); ++j )
      {
        v11 = *((_DWORD *)v2 + 1);
        v14 = v11 - 1;
        v10 = j;
        v13 = j;
        v12 = i;
        v15 = i;
        this = (LightingArea *)LightingArea::setBorderBlockLight(v2, a2, (const WCoord *)&v10, (const WCoord *)&v13);
      }
    }
  }
  for ( k = *((_DWORD *)v2 + 1); k <= *((_DWORD *)v2 + 4); ++k )
  {
    for ( m = *(_DWORD *)v2; m <= *((_DWORD *)v2 + 3); ++m )
    {
      v12 = *((_DWORD *)v2 + 5);
      v11 = k;
      v14 = k;
      v15 = v12 + 1;
      v10 = m;
      v13 = m;
      LightingArea::setBorderBlockLight(v2, a2, (const WCoord *)&v10, (const WCoord *)&v13);
      v12 = *((_DWORD *)v2 + 2);
      v11 = k;
      v14 = k;
      v15 = v12 - 1;
      v10 = m;
      v13 = m;
      this = (LightingArea *)LightingArea::setBorderBlockLight(v2, a2, (const WCoord *)&v10, (const WCoord *)&v13);
    }
  }
  for ( n = *((_DWORD *)v2 + 2); n <= *((_DWORD *)v2 + 5); ++n )
  {
    for ( ii = *((_DWORD *)v2 + 1); ii <= *((_DWORD *)v2 + 4); ++ii )
    {
      v10 = *((_DWORD *)v2 + 3);
      v12 = n;
      v13 = v10 + 1;
      v15 = n;
      v11 = ii;
      v14 = ii;
      LightingArea::setBorderBlockLight(v2, a2, (const WCoord *)&v10, (const WCoord *)&v13);
      v10 = *(_DWORD *)v2;
      v12 = n;
      v13 = v10 - 1;
      v15 = n;
      v11 = ii;
      v14 = ii;
      this = (LightingArea *)LightingArea::setBorderBlockLight(v2, a2, (const WCoord *)&v10, (const WCoord *)&v13);
    }
  }
  return this;
}


//======================================================================
// LightingArea::saveBackSection(Chunk *,WCoord const&,WCoord const&)
// address: 0x002F2B66   size: 0x132 (306 bytes)
//======================================================================
int __fastcall LightingArea::saveBackSection(int *a1, int a2, int *a3, int *a4)
{
  int v5; // r4
  int j; // r5
  int v7; // r7
  int m; // r4
  int n; // r4
  char *v10; // r0
  int k; // [sp+0h] [bp-4Ch]
  int i; // [sp+4h] [bp-48h]
  int v14; // [sp+4h] [bp-48h]
  int BlockLight; // [sp+Ch] [bp-40h]
  int v19; // [sp+18h] [bp-34h]
  int v20; // [sp+1Ch] [bp-30h]
  int v21[3]; // [sp+24h] [bp-28h] BYREF
  int v22[3]; // [sp+30h] [bp-1Ch] BYREF
  int v23[4]; // [sp+3Ch] [bp-10h] BYREF

  v5 = *(unsigned __int8 *)(a2 + 268);
  if ( *(_BYTE *)(a2 + 268) != 0 )
  {
    for ( i = a3[1]; i <= a4[1]; ++i )
    {
      for ( j = a3[2]; j <= a4[2]; ++j )
      {
        for ( k = *a3; k <= *a4; ++k )
        {
          v22[1] = i;
          v22[0] = k;
          v22[2] = j;
          operator-(v23, v22, (int *)(a2 + 276));
          *Chunk::getBlockLight((Chunk *)a2, v23[0], v23[1], v23[2]) = -1;
        }
      }
    }
  }
  else
  {
    v7 = a3[1];
    v19 = 0;
    while ( v7 <= a4[1] )
    {
      for ( m = a3[2]; ; m = v14 + 1 )
      {
        v14 = m;
        if ( m > a4[2] )
          break;
        for ( n = *a3; n <= *a4; ++n )
        {
          v21[0] = n;
          v21[2] = v14;
          v21[1] = v7;
          operator-(v22, v21, a1);
          BlockLight = LightingArea::getBlockLight((int)a1, v22, 0);
          v20 = LightingArea::getBlockLight((int)a1, v22, 1);
          operator-(v23, v21, (int *)(a2 + 276));
          v10 = Chunk::getBlockLight((Chunk *)a2, v23[0], v23[1], v23[2]);
          if ( (*v10 & 0xF) != BlockLight || (int)(unsigned __int8)*v10 >> 4 != v20 )
          {
            *v10 = BlockLight & 0xF | (16 * v20);
            v19 = 1;
          }
        }
      }
      ++v7;
    }
    return v19;
  }
  return v5;
}


//======================================================================
// LightingArea::saveBack(World *)
// address: 0x002F2C98   size: 0x106 (262 bytes)
//======================================================================
unsigned int *__fastcall LightingArea::saveBack(LightingArea *this, World *a2)
{
  unsigned int *result; // r0
  signed int v4; // r7
  int i; // r2
  signed int v6; // r5
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r6
  int v10; // [sp+0h] [bp-54h]
  int Chunk; // [sp+4h] [bp-50h]
  int v12; // [sp+8h] [bp-4Ch]
  int v13; // [sp+Ch] [bp-48h]
  int v14; // [sp+10h] [bp-44h]
  int v15; // [sp+18h] [bp-3Ch]
  unsigned int v17[2]; // [sp+20h] [bp-34h] BYREF
  int v18; // [sp+28h] [bp-2Ch]
  unsigned int v19[2]; // [sp+2Ch] [bp-28h] BYREF
  unsigned int *v20; // [sp+34h] [bp-20h]
  int v21; // [sp+38h] [bp-1Ch] BYREF
  int v22; // [sp+3Ch] [bp-18h]
  int v23; // [sp+40h] [bp-14h]
  int v24; // [sp+44h] [bp-10h] BYREF
  int v25; // [sp+48h] [bp-Ch]
  int v26; // [sp+4Ch] [bp-8h]

  BlockDivSection(v17, (int *)this);
  result = BlockDivSection(v19, (int *)this + 3);
  v13 = v17[1];
  v4 = 16 * v17[1];
  while ( v13 <= (int)v19[1] )
  {
    v14 = v18;
    for ( i = 16 * v18; ; i = v10 + 16 )
    {
      result = v20;
      v10 = i;
      if ( v14 > (int)v20 )
        break;
      v12 = v17[0];
      v15 = i + 15;
      v6 = 16 * v17[0];
      while ( v12 <= (int)v19[0] )
      {
        v23 = v10;
        v25 = v4 + 15;
        v7 = *(_DWORD *)this;
        ++v12;
        v21 = v6;
        v22 = v4;
        v24 = v6 + 15;
        v26 = v10 + 15;
        if ( v6 < v7 )
          v21 = v7;
        if ( v4 < *((_DWORD *)this + 1) )
          v22 = *((_DWORD *)this + 1);
        if ( v10 < *((_DWORD *)this + 2) )
          v23 = *((_DWORD *)this + 2);
        if ( v6 + 15 > *((_DWORD *)this + 3) )
          v24 = *((_DWORD *)this + 3);
        if ( v4 + 15 > *((_DWORD *)this + 4) )
          v25 = *((_DWORD *)this + 4);
        if ( v15 > *((_DWORD *)this + 5) )
          v26 = *((_DWORD *)this + 5);
        Chunk = World::getChunk(a2, (const WCoord *)&v21);
        if ( Chunk != 0 )
        {
          v8 = BlockDivSection(v22);
          if ( v8 > 0xF )
            v9 = 0;
          else
            v9 = *(_DWORD *)(4 * (v8 + 342) + Chunk);
          LightingArea::saveBackSection((int *)this, Chunk, &v21, &v24);
          if ( *(_WORD *)(v9 + 38) == 1 )
            *(_WORD *)(v9 + 38) = 2;
        }
        v6 += 16;
      }
      ++v14;
    }
    v4 += 16;
    ++v13;
  }
  return result;
}


//======================================================================
// LightingArea::pushSeed(WCoord const&)
// address: 0x002F2DA0   size: 0x76 (118 bytes)
//======================================================================
void __fastcall LightingArea::pushSeed(LightingArea *this, const WCoord *a2)
{
  int v3; // r0
  int *v4; // r3
  int v5; // r7
  unsigned int v6; // r0
  int v7; // r6
  unsigned int v8; // r5
  int *v9; // r3
  int v10; // r7

  v3 = LightingArea::Coord2Index((int)this, a2);
  v4 = *((int **)this + 13);
  v5 = v3;
  if ( v4 == *((int **)this + 14) )
  {
    v6 = std::vector<int>::_M_check_len((_DWORD *)this + 12, 1u, (int)"vector::_M_emplace_back_aux");
    v7 = 4 * v6;
    if ( v6 != 0 )
    {
      if ( v6 > 0x3FFFFFFF )
        sub_3BCEB4(v6);
      v6 = operator new(4 * v6);
    }
    v8 = v6;
    v9 = (int *)(v6 + 4 * ((*((_DWORD *)this + 13) - *((_DWORD *)this + 12)) >> 2));
    if ( v9 != nullptr )
      *v9 = v5;
    v10 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<int>(
            *((void **)this + 12),
            *((_DWORD *)this + 13),
            (void *)v6);
    sub_2F2764(*((void **)this + 12));
    *((_DWORD *)this + 12) = v8;
    *((_DWORD *)this + 13) = v10 + 4;
    *((_DWORD *)this + 14) = v8 + v7;
  }
  else
  {
    if ( v4 != nullptr )
      *v4 = v3;
    *((_DWORD *)this + 13) += 4;
  }
}


//======================================================================
// LightingArea::collectSeeds(void)
// address: 0x002F2E20   size: 0x100 (256 bytes)
//======================================================================
int __fastcall LightingArea::collectSeeds(LightingArea *this)
{
  int v2; // r3
  int result; // r0
  int i; // r7
  int *v5; // r5
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r12
  unsigned int BlockLightAtten; // [sp+4h] [bp-38h]
  int j; // [sp+8h] [bp-34h]
  int k; // [sp+Ch] [bp-30h]
  int v13; // [sp+10h] [bp-2Ch]
  int BlockLight; // [sp+14h] [bp-28h]
  int v15; // [sp+18h] [bp-24h]
  _DWORD v16[3]; // [sp+20h] [bp-1Ch] BYREF
  _DWORD v17[4]; // [sp+2Ch] [bp-10h] BYREF

  v2 = *((_DWORD *)this + 12);
  result = *((_DWORD *)this + 13);
  if ( (result - v2) >> 2 != 0 )
    *((_DWORD *)this + 13) = v2;
  for ( i = 0; i < *((_DWORD *)this + 7); ++i )
  {
    for ( j = 0; ; ++j )
    {
      result = *((_DWORD *)this + 8);
      if ( j >= result )
        break;
      for ( k = 0; ; ++k )
      {
        v13 = *((_DWORD *)this + 6);
        if ( k >= v13 )
          break;
        v16[0] = k;
        v16[2] = j;
        v16[1] = i;
        BlockLight = LightingArea::getBlockLight((int)this, v16, 0);
        v15 = LightingArea::getBlockLight((int)this, v16, 1);
        v5 = g_DirectionCoord;
        while ( 1 )
        {
          v6 = k + *v5;
          v7 = i + v5[1];
          v8 = v5[2];
          v17[0] = v6;
          v17[1] = v7;
          v9 = j + v8;
          v17[2] = j + v8;
          if ( v6 >= 0 && v6 < v13 && v7 >= 0 && v7 < *((_DWORD *)this + 7) && v9 >= 0 && v9 < *((_DWORD *)this + 8) )
          {
            BlockLightAtten = LightingArea::getBlockLightAtten((int)this, v17);
            if ( BlockLightAtten != 15
              && ((int)(BlockLight - BlockLightAtten) > LightingArea::getBlockLight((int)this, v17, 0)
               || (int)(v15 - BlockLightAtten) > LightingArea::getBlockLight((int)this, v17, 1)) )
            {
              break;
            }
          }
          v5 += 3;
          if ( v5 == (int *)&slotelements )
            goto LABEL_20;
        }
        LightingArea::pushSeed(this, (const WCoord *)v16);
LABEL_20:
        ;
      }
    }
  }
  return result;
}


//======================================================================
// LightingArea::flushSeeds(void)
// address: 0x002F2F24   size: 0x114 (276 bytes)
//======================================================================
int __fastcall LightingArea::flushSeeds(LightingArea *this)
{
  int v2; // r3
  int result; // r0
  int *v4; // r3
  int v5; // r5
  int v6; // r6
  int v7; // r5
  int *v8; // r4
  int v9; // r1
  int v10; // r0
  int v11; // r2
  int v12; // r5
  int v13; // r3
  int v14; // [sp+4h] [bp-30h]
  int v15; // [sp+4h] [bp-30h]
  int v16; // [sp+8h] [bp-2Ch]
  unsigned int BlockLightAtten; // [sp+8h] [bp-2Ch]
  int BlockLight; // [sp+10h] [bp-24h]
  int v19; // [sp+14h] [bp-20h]
  int v20; // [sp+18h] [bp-1Ch] BYREF
  int v21; // [sp+1Ch] [bp-18h]
  int v22; // [sp+20h] [bp-14h]
  _DWORD v23[4]; // [sp+24h] [bp-10h] BYREF

LABEL_1:
  v2 = *((_DWORD *)this + 13);
  result = *((_DWORD *)this + 12);
  if ( result != v2 )
  {
    v4 = (int *)(v2 - 4);
    v5 = *v4;
    v6 = *((_DWORD *)this + 6);
    *((_DWORD *)this + 13) = v4;
    v14 = v5;
    v7 = v5 / v6;
    v16 = *((_DWORD *)this + 8);
    v20 = v14 % v6;
    v21 = v7 / v16;
    v22 = v7 % v16;
    BlockLight = LightingArea::getBlockLight((int)this, &v20, 0);
    v19 = LightingArea::getBlockLight((int)this, &v20, 1);
    v8 = g_DirectionCoord;
    while ( 1 )
    {
      v9 = v20 + *v8;
      v10 = v8[1];
      v23[0] = v9;
      v11 = v21 + v10;
      v12 = v8[2];
      v23[1] = v21 + v10;
      v13 = v22 + v12;
      v23[2] = v22 + v12;
      if ( v9 >= 0
        && v9 < *((_DWORD *)this + 6)
        && v11 >= 0
        && v11 < *((_DWORD *)this + 7)
        && v13 >= 0
        && v13 < *((_DWORD *)this + 8) )
      {
        BlockLightAtten = LightingArea::getBlockLightAtten((int)this, v23);
        v15 = 0;
        if ( (int)(BlockLight - BlockLightAtten) > LightingArea::getBlockLight((int)this, v23, 0) )
        {
          LightingArea::setBlockLight((int)this, v23, 0, BlockLight - BlockLightAtten);
          v15 = 1;
        }
        if ( (int)(v19 - BlockLightAtten) > LightingArea::getBlockLight((int)this, v23, 1) )
          break;
        if ( v15 != 0 )
          goto LABEL_14;
      }
LABEL_15:
      v8 += 3;
      if ( v8 == (int *)&slotelements )
        goto LABEL_1;
    }
    LightingArea::setBlockLight((int)this, v23, 1, v19 - BlockLightAtten);
LABEL_14:
    LightingArea::pushSeed(this, (const WCoord *)v23);
    goto LABEL_15;
  }
  return result;
}


//======================================================================
// LightingArea::calLighting(void)
// address: 0x002F303C   size: 0x10 (16 bytes)
//======================================================================
int __fastcall LightingArea::calLighting(LightingArea *this)
{
  LightingArea::collectSeeds(this);
  return LightingArea::flushSeeds(this);
}


//======================================================================
// LightingArea::reset(World *,WCoord const&,WCoord const&)
// address: 0x002F304C   size: 0x168 (360 bytes)
//======================================================================
unsigned int *__fastcall LightingArea::reset(LightingArea *this, World *a2, const WCoord *a3, const WCoord *a4)
{
  int v6; // r1
  int v7; // r2
  int v8; // r1
  unsigned int v9; // r2
  unsigned int v10; // r0
  unsigned int v11; // r2
  int v12; // r5
  int v13; // r1
  unsigned int v14; // r0
  int v15; // r3
  unsigned int v16; // r5
  void *v17; // r7
  unsigned int *result; // r0
  int v19; // r4
  unsigned int i; // r3
  int v21; // r5
  int j; // r1
  int v23; // r7
  unsigned int k; // r2
  int v25; // [sp+0h] [bp-3Ch]
  int v26; // [sp+0h] [bp-3Ch]
  int v27; // [sp+4h] [bp-38h]
  int v28; // [sp+8h] [bp-34h]
  unsigned int v29; // [sp+8h] [bp-34h]
  int v30; // [sp+Ch] [bp-30h]
  __int16 v31; // [sp+12h] [bp-2Ah] BYREF
  unsigned int v32[2]; // [sp+14h] [bp-28h] BYREF
  int v33; // [sp+1Ch] [bp-20h]
  unsigned int v34[3]; // [sp+20h] [bp-1Ch] BYREF
  unsigned int v35; // [sp+2Ch] [bp-10h] BYREF
  unsigned int v36; // [sp+30h] [bp-Ch]
  int v37; // [sp+34h] [bp-8h]

  *(_DWORD *)this = *(_DWORD *)a3;
  v6 = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 1) = v6;
  *((_DWORD *)this + 2) = *((_DWORD *)a3 + 2);
  if ( v6 < 0 )
    *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = *(_DWORD *)a4;
  v7 = *((_DWORD *)a4 + 1);
  *((_DWORD *)this + 4) = v7;
  *((_DWORD *)this + 5) = *((_DWORD *)a4 + 2);
  if ( v7 > 255 )
    *((_DWORD *)this + 4) = 255;
  operator-(&v35, (int *)this + 3, (int *)this);
  v8 = v37;
  v9 = v36 + 1;
  v10 = v35 + 1;
  *((_DWORD *)this + 7) = v36 + 1;
  *((_DWORD *)this + 8) = ++v8;
  v31 = 271;
  v11 = v9 * v10 * v8;
  v12 = *((_DWORD *)this + 9);
  v13 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 6) = v10;
  v14 = (v13 - v12) >> 1;
  if ( v11 <= v14 )
  {
    if ( v11 < v14 )
      *((_DWORD *)this + 10) = v12 + 2 * v11;
  }
  else
  {
    std::vector<unsigned short>::_M_fill_insert((int)this + 36, v13, v11 - v14, &v31);
  }
  v15 = (*((_DWORD *)this + 10) - *((_DWORD *)this + 9)) >> 1;
  v16 = (unsigned int)v15 >> 1;
  if ( v15 < 0 )
    sub_3BD058("vector::reserve");
  v17 = *((void **)this + 12);
  if ( (*((_DWORD *)this + 14) - (int)v17) >> 2 < v16 )
  {
    v30 = (*((_DWORD *)this + 13) - (int)v17) >> 2;
    v25 = *((_DWORD *)this + 13);
    v28 = 4 * v16;
    if ( v16 != 0 )
      v16 = operator new(4 * v16);
    std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<int>(v17, v25, (void *)v16);
    sub_2F2764(*((void **)this + 12));
    *((_DWORD *)this + 12) = v16;
    *((_DWORD *)this + 13) = v16 + 4 * v30;
    *((_DWORD *)this + 14) = v16 + v28;
  }
  LightingArea::fillSkyLight((int *)this, a2);
  LightingArea::addBorderLight(this, a2);
  BlockDivSection(v32, (int *)this);
  result = BlockDivSection(v34, (int *)this + 3);
  v19 = v32[1];
  for ( i = 16 * v32[1]; ; i = v29 + 16 )
  {
    v29 = i;
    if ( v19 > (int)v34[1] )
      break;
    v21 = v33;
    for ( j = 16 * v33; ; j = v27 + 16 )
    {
      v27 = j;
      if ( v21 > (int)v34[2] )
        break;
      v23 = v32[0];
      for ( k = 16 * v32[0]; ; k = v26 + 16 )
      {
        v26 = k;
        if ( v23 > (int)v34[0] )
          break;
        v35 = k;
        v36 = v29;
        v37 = v27;
        result = (unsigned int *)World::getSection(a2, (const WCoord *)&v35);
        if ( result != nullptr && *((_WORD *)result + 19) != 0 )
          *((_WORD *)result + 19) = 1;
        ++v23;
      }
      ++v21;
    }
    ++v19;
  }
  return result;
}

