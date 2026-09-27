// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: PathFinder

//======================================================================
// PathFinder::openPoint(WCoord const&)
// address: 0x002D5C48   size: 0xCC (204 bytes)
//======================================================================
unsigned int *__fastcall PathFinder::openPoint(PathFinder *this, const WCoord *a2)
{
  unsigned int **v4; // r7
  unsigned int *i; // r4
  unsigned int *v6; // r0
  int v7; // r0
  unsigned int Hash; // [sp+8h] [bp-Ch]

  Hash = PathFinderNode::makeHash((int)a2);
  v4 = (unsigned int **)(*((_DWORD *)this + 2) + 4 * (Hash % *((_DWORD *)this + 3)));
  if ( *v4 != nullptr )
  {
    i = *v4;
    while ( *i != Hash )
    {
      i = (unsigned int *)i[12];
      if ( i == nullptr )
      {
        for ( i = *v4; *i != Hash; i = (unsigned int *)i[12] )
        {
          if ( i[12] == 0 )
          {
            v6 = (unsigned int *)operator new(0x34u);
            v6[12] = 0;
            *v6 = Hash;
            i[12] = (unsigned int)v6;
            i = v6;
            goto LABEL_11;
          }
        }
        goto LABEL_11;
      }
    }
  }
  else
  {
    i = (unsigned int *)operator new(0x34u);
    *i = Hash;
    i[12] = 0;
    *v4 = i;
LABEL_11:
    ++*((_DWORD *)this + 4);
    i[1] = Hash;
    i[2] = *(_DWORD *)a2;
    i[3] = *((_DWORD *)a2 + 1);
    i[4] = *((_DWORD *)a2 + 2);
    v7 = PathFinderNode::makeHash((int)a2);
    i[6] = -1;
    i[5] = v7;
    i[10] = 0;
    *((_BYTE *)i + 44) = 0;
    if ( g_DoSetBlock != 0 )
      World::setBlockAll((World *)g_World, a2, 603, 0, 2);
    if ( *((int *)a2 + 1) > 10 )
      DoSomethin();
  }
  return i + 2;
}


//======================================================================
// PathFinder::getStandingFlags(ClientActor *,WCoord const&,WCoord const&,bool,bool,bool)
// address: 0x002D5D20   size: 0x122 (290 bytes)
//======================================================================
int __fastcall PathFinder::getStandingFlags(
        PathFinder *this,
        ClientActor *a2,
        const WCoord *a3,
        const WCoord *a4,
        bool a5,
        bool a6,
        bool a7)
{
  int v8; // r7
  int BlockID; // r0
  int v11; // r4
  int Material; // r0
  int v14; // r0
  int i; // [sp+0h] [bp-3Ch]
  int j; // [sp+4h] [bp-38h]
  int v17; // [sp+8h] [bp-34h]
  int v18; // [sp+Ch] [bp-30h]
  int v19; // [sp+10h] [bp-2Ch]
  int v20; // [sp+14h] [bp-28h]
  World *v21; // [sp+18h] [bp-24h]
  _DWORD v23[4]; // [sp+2Ch] [bp-10h] BYREF

  v18 = *(_DWORD *)a2;
  v8 = *(_DWORD *)a2;
  v20 = *((_DWORD *)a2 + 2);
  v19 = *((_DWORD *)a2 + 1);
  v17 = 0;
  v21 = *((World **)this + 13);
  while ( v8 < v18 + *(_DWORD *)a3 )
  {
    for ( i = v19; i < v19 + *((_DWORD *)a3 + 1); ++i )
    {
      for ( j = v20; j < v20 + *((_DWORD *)a3 + 2); ++j )
      {
        v23[0] = v8;
        v23[1] = i;
        v23[2] = j;
        BlockID = World::getBlockID(v21, (const WCoord *)v23, j, i);
        v11 = BlockID;
        if ( BlockID > 0 )
        {
          if ( BlockID == 731 )
          {
            v17 = 1;
          }
          else if ( (unsigned int)(BlockID - 3) <= 1 )
          {
            if ( a4 != nullptr )
            {
              v14 = 1;
              return -v14;
            }
            v17 = 1;
          }
          else if ( !a6 && BlockID == 812 )
          {
            return 0;
          }
          Material = BlockMaterialMgr::getMaterial(
                       (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                       BlockID);
          if ( (*(int (__fastcall **)(int, World *, _DWORD *))(*(_DWORD *)Material + 80))(Material, v21, v23) != 0
            && (!a5 || v11 != 812) )
          {
            if ( (unsigned int)(v11 - 534) <= 1 || (unsigned int)(v11 - 548) <= 1 )
            {
              v14 = 3;
              return -v14;
            }
            if ( v11 == 731 )
            {
              v14 = 4;
              return -v14;
            }
            if ( (unsigned int)(v11 - 5) > 1 )
              return 0;
            if ( ActorLocoMotion::handleLavaMovement(*((ActorLocoMotion **)this + 17)) == 0 )
            {
              v14 = 2;
              return -v14;
            }
          }
        }
      }
    }
    ++v8;
  }
  return (((unsigned int)v17 | 0x200000000uLL) - 1) >> 32;
}


//======================================================================
// PathFinder::getVerticalOffset(ClientActor *,WCoord const&,WCoord const&)
// address: 0x002D5E54   size: 0x24 (36 bytes)
//======================================================================
int __fastcall PathFinder::getVerticalOffset(PathFinder *this, ClientActor *a2, const WCoord *a3, const WCoord *a4)
{
  return PathFinder::getStandingFlags(
           a2,
           a3,
           a4,
           (const WCoord *)*((unsigned __int8 *)this + 150),
           *((_BYTE *)this + 149),
           *((_BYTE *)this + 148),
           (bool)a3);
}


//======================================================================
// PathFinder::getSafePoint(ClientActor *,WCoord const&,WCoord const&,int)
// address: 0x002D5E78   size: 0xF6 (246 bytes)
//======================================================================
unsigned int *__fastcall PathFinder::getSafePoint(
        PathFinder *this,
        ClientActor *a2,
        const WCoord *a3,
        const WCoord *a4,
        int a5)
{
  int v6; // r0
  int v7; // r3
  int v8; // r2
  int VerticalOffset; // r0
  unsigned int *v12; // r7
  int v13; // r4
  int v14; // r0
  int v16; // [sp+8h] [bp-1Ch] BYREF
  int v17; // [sp+Ch] [bp-18h]
  int v18; // [sp+10h] [bp-14h]
  _DWORD v19[4]; // [sp+14h] [bp-10h] BYREF

  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  v8 = *((_DWORD *)a3 + 2);
  v16 = v6;
  v17 = v7;
  v18 = v8;
  VerticalOffset = PathFinder::getVerticalOffset(this, a2, (const WCoord *)&v16, a4);
  if ( VerticalOffset == 2 )
    return PathFinder::openPoint(this, (const WCoord *)&v16);
  if ( VerticalOffset == 1 )
  {
    v12 = PathFinder::openPoint(this, (const WCoord *)&v16);
    if ( v12 != nullptr )
      goto LABEL_10;
    if ( a5 <= 0 )
      return nullptr;
  }
  else if ( a5 <= 0 || (unsigned int)(VerticalOffset + 4) <= 1 )
  {
    return nullptr;
  }
  v17 += a5;
  if ( PathFinder::getVerticalOffset(this, a2, (const WCoord *)&v16, a4) != 1 )
    return nullptr;
  v12 = PathFinder::openPoint(this, (const WCoord *)&v16);
  if ( v12 == nullptr )
    return nullptr;
LABEL_10:
  v13 = 0;
  while ( v17 > 0 )
  {
    v19[0] = v16 + dword_516658;
    v19[1] = dword_51665C + v17;
    v19[2] = v18 + dword_516660;
    v14 = PathFinder::getVerticalOffset(this, a2, (const WCoord *)v19, a4);
    if ( *((_BYTE *)this + 150) != 0 && v14 == -1 )
      return nullptr;
    if ( v14 != 1 )
    {
      if ( v14 == -2 )
        return nullptr;
      return v12;
    }
    if ( v13 >= (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)a2 + 108))(a2) )
      return nullptr;
    if ( --v17 > 0 )
      v12 = PathFinder::openPoint(this, (const WCoord *)&v16);
    ++v13;
  }
  return v12;
}


//======================================================================
// PathFinder::findPathOptions(ClientActor *,PathFinderNode *,WCoord const&,PathFinderNode *,int)
// address: 0x002D5F74   size: 0x1A2 (418 bytes)
//======================================================================
int __fastcall PathFinder::findPathOptions(
        PathFinder *this,
        ClientActor *a2,
        int *a3,
        const WCoord *a4,
        _DWORD *a5,
        int a6)
{
  int v8; // r3
  int v9; // r12
  int v10; // r0
  int v11; // r12
  int v12; // r2
  int v13; // r12
  int v14; // r0
  int v15; // r1
  int v16; // r0
  unsigned int *v17; // r5
  int v18; // r6
  int v19; // r4
  unsigned int *v21; // [sp+8h] [bp-2Ch]
  unsigned int *SafePoint; // [sp+Ch] [bp-28h]
  unsigned int *v23; // [sp+10h] [bp-24h]
  _BOOL4 v26; // [sp+1Ch] [bp-18h]
  int v27; // [sp+24h] [bp-10h] BYREF
  int v28; // [sp+28h] [bp-Ch]
  int v29; // [sp+2Ch] [bp-8h]

  v8 = a3[2];
  v28 = a3[1] + dword_516668;
  v27 = *a3 + dword_516664;
  v29 = v8 + dword_51666C;
  v26 = PathFinder::getVerticalOffset(this, a2, (const WCoord *)&v27, a4) == 1;
  v9 = a3[1] + dword_516650;
  v10 = *a3;
  v29 = a3[2] + dword_516654;
  v27 = v10 + dword_51664C;
  v28 = v9;
  SafePoint = PathFinder::getSafePoint(this, a2, (const WCoord *)&v27, a4, v26);
  v11 = a3[1] + dword_51662C;
  v12 = *a3;
  v29 = a3[2] + dword_516630;
  v27 = v12 + g_DirectionCoord[0];
  v28 = v11;
  v21 = PathFinder::getSafePoint(this, a2, (const WCoord *)&v27, a4, v26);
  v13 = a3[1] + dword_516638;
  v14 = *a3;
  v29 = a3[2] + dword_51663C;
  v27 = v14 + dword_516634;
  v28 = v13;
  v23 = PathFinder::getSafePoint(this, a2, (const WCoord *)&v27, a4, v26);
  v15 = a3[2];
  v28 = a3[1] + dword_516644;
  v16 = *a3;
  v29 = v15 + dword_516648;
  v27 = v16 + dword_516640;
  v17 = PathFinder::getSafePoint(this, a2, (const WCoord *)&v27, a4, v26);
  v18 = a6 * a6;
  if ( SafePoint != nullptr )
  {
    v19 = 0;
    if ( *((_BYTE *)SafePoint + 36) == 0 && WCoord::squareDistanceTo(SafePoint, a5) < v18 )
    {
      v19 = 1;
      *((_DWORD *)this + 5) = SafePoint;
    }
  }
  else
  {
    v19 = 0;
  }
  if ( v21 != nullptr && *((_BYTE *)v21 + 36) == 0 && WCoord::squareDistanceTo(v21, a5) < v18 )
  {
    *((_DWORD *)this + v19 + 5) = v21;
    ++v19;
  }
  if ( v23 != nullptr && *((_BYTE *)v23 + 36) == 0 && WCoord::squareDistanceTo(v23, a5) < v18 )
  {
    *((_DWORD *)this + v19 + 5) = v23;
    ++v19;
  }
  if ( v17 != nullptr && *((_BYTE *)v17 + 36) == 0 && WCoord::squareDistanceTo(v17, a5) < v18 )
  {
    *((_DWORD *)this + v19 + 5) = v17;
    ++v19;
  }
  return v19;
}


//======================================================================
// PathFinder::createEntityPath(PathFinderNode *,PathFinderNode *)
// address: 0x002D611C   size: 0xBA (186 bytes)
//======================================================================
_DWORD *__fastcall PathFinder::createEntityPath(int a1, int a2, int *a3)
{
  int *v3; // r4
  int *v4; // r5
  unsigned int i; // r7
  _DWORD *v6; // r0
  int v7; // r1
  char *v8; // r2
  char *v9; // r3
  int j; // r3
  char *v11; // r2
  char *v12; // r2
  _DWORD *v13; // r4
  int v15; // [sp+4h] [bp-18h]
  void *v16; // [sp+Ch] [bp-10h] BYREF
  _DWORD *v17; // [sp+10h] [bp-Ch]
  _DWORD *v18; // [sp+14h] [bp-8h]

  v3 = a3;
  v4 = a3;
  for ( i = 1; ; ++i )
  {
    v4 = (int *)v4[8];
    if ( v4 == nullptr )
      break;
  }
  v16 = nullptr;
  v17 = nullptr;
  v18 = nullptr;
  if ( i > 0x15555555 )
    sub_3BCEB4(a1);
  v15 = 12 * i;
  v6 = (_DWORD *)operator new(12 * i);
  v16 = v6;
  v18 = &v6[3 * i];
  do
  {
    if ( v6 != nullptr )
    {
      *v6 = 0;
      v6[1] = 0;
      v6[2] = 0;
    }
    --i;
    v6 += 3;
  }
  while ( i != 0 );
  v7 = *v3;
  v8 = (char *)v16;
  v17 = v18;
  *(_DWORD *)((char *)v16 + v15 - 12) = v7;
  v9 = &v8[v15 - 12];
  *((_DWORD *)v9 + 1) = v3[1];
  *((_DWORD *)v9 + 2) = v3[2];
  for ( j = v15 - 24; ; j -= 12 )
  {
    v3 = (int *)v3[8];
    if ( v3 == nullptr )
      break;
    v11 = (char *)v16;
    *(_DWORD *)((char *)v16 + j) = *v3;
    v12 = &v11[j];
    *((_DWORD *)v12 + 1) = v3[1];
    *((_DWORD *)v12 + 2) = v3[2];
  }
  v13 = (_DWORD *)operator new(0x18u);
  PathEntity::PathEntity(v13, (char **)&v16);
  if ( v16 != nullptr )
    operator delete(v16);
  return v13;
}


//======================================================================
// PathFinder::addToPath(ClientActor *,PathFinderNode *,PathFinderNode *,WCoord const&,int)
// address: 0x002D6BD4   size: 0x174 (372 bytes)
//======================================================================
_DWORD *__fastcall PathFinder::addToPath(int a1, ClientActor *a2, int *a3, int *a4, const WCoord *a5, int a6)
{
  int v8; // r0
  int *v9; // r3
  int *v10; // r2
  int v11; // r4
  int v12; // r5
  int v13; // r0
  int v14; // r1
  int *v15; // r2
  _DWORD *v17; // r5
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r3
  int v22; // [sp+10h] [bp-24h]
  int i; // [sp+14h] [bp-20h]
  void **v25; // [sp+1Ch] [bp-18h]
  int v26; // [sp+20h] [bp-14h]
  int *v27; // [sp+24h] [bp-10h]
  int PathOptions; // [sp+28h] [bp-Ch]

  a3[5] = 0;
  v8 = WCoord::squareDistanceTo(a3, a4);
  a3[6] = v8;
  a3[7] = v8;
  v25 = (void **)(a1 + 152);
  std::vector<PathFinderNode *>::resize((void **)(a1 + 152), 0);
  PathFinderPath::addPoint((PathFinderPath *)(a1 + 152), (int)a3);
  v27 = a3;
  do
  {
    v9 = *(int **)(a1 + 152);
    v10 = *(int **)(a1 + 156);
    if ( v9 == v10 )
      break;
    v11 = *v9;
    *v9 = *(v10 - 1);
    std::vector<PathFinderNode *>::resize(v25, ((*(_DWORD *)(a1 + 156) - *(_DWORD *)(a1 + 152)) >> 2) - 1);
    if ( *(_DWORD *)(a1 + 152) != *(_DWORD *)(a1 + 156) )
      PathFinderPath::sortForward((int *)v25, 0);
    *(_DWORD *)(v11 + 16) = -1;
    if ( *(_DWORD *)(v11 + 12) == a4[3]
      && *(_DWORD *)v11 == *a4
      && *(_DWORD *)(v11 + 4) == a4[1]
      && *(_DWORD *)(v11 + 8) == a4[2] )
    {
      v13 = a1;
      v14 = (int)a3;
      v15 = a4;
      return PathFinder::createEntityPath(v13, v14, v15);
    }
    v12 = WCoord::squareDistanceTo((_DWORD *)v11, a4);
    if ( v12 < WCoord::squareDistanceTo(v27, a4) )
      v27 = (int *)v11;
    *(_BYTE *)(v11 + 36) = 1;
    PathOptions = PathFinder::findPathOptions((PathFinder *)a1, a2, (int *)v11, a5, a4, a6);
    for ( i = 0; i < PathOptions; ++i )
    {
      v17 = *(_DWORD **)(a1 + 4 * i + 20);
      v18 = WCoord::squareDistanceTo((_DWORD *)v11, v17) + *(_DWORD *)(v11 + 20);
      v26 = v18;
      v22 = v17[4];
      if ( v22 < 0 || v18 < v17[5] )
      {
        v17[8] = v11;
        v17[5] = v18;
        v19 = WCoord::squareDistanceTo(v17, a4);
        v17[6] = v19;
        v20 = v26 + v19;
        if ( v22 < 0 )
        {
          v17[7] = v20;
          PathFinderPath::addPoint((PathFinderPath *)v25, (int)v17);
        }
        else
        {
          v21 = v17[7];
          v17[7] = v20;
          if ( v20 >= v21 )
            PathFinderPath::sortForward((int *)v25, v22);
          else
            PathFinderPath::sortBack((PathFinderPath *)v25, v22);
        }
      }
    }
  }
  while ( *(_DWORD *)(a1 + 16) <= 0x100u );
  if ( v27 == a3 )
    return nullptr;
  v13 = a1;
  v14 = (int)a3;
  v15 = v27;
  return PathFinder::createEntityPath(v13, v14, v15);
}


//======================================================================
// PathFinder::createEntityPathTo(ClientActor *,WCoord const&,int)
// address: 0x002D6D48   size: 0x13C (316 bytes)
//======================================================================
_DWORD *__fastcall PathFinder::createEntityPathTo(void **this, ClientActor *a2, const WCoord *a3, int a4)
{
  unsigned int v6; // r5
  unsigned int v7; // r6
  unsigned int v8; // r0
  int v9; // r3
  int v10; // r1
  int v11; // r0
  int *v12; // r7
  unsigned int v13; // r0
  _DWORD *result; // r0
  int v15; // r2
  int v16; // r3
  int BlockID; // r0
  int *v18; // [sp+10h] [bp-5Ch]
  char v20; // [sp+18h] [bp-54h]
  _DWORD v22[3]; // [sp+20h] [bp-4Ch] BYREF
  _BYTE v23[12]; // [sp+2Ch] [bp-40h] BYREF
  _BYTE v24[4]; // [sp+38h] [bp-34h] BYREF
  unsigned int v25; // [sp+3Ch] [bp-30h]
  int v26; // [sp+44h] [bp-28h] BYREF
  int v27; // [sp+48h] [bp-24h]
  int v28; // [sp+4Ch] [bp-20h]
  int v29; // [sp+50h] [bp-1Ch] BYREF
  int v30; // [sp+54h] [bp-18h]
  int v31; // [sp+58h] [bp-14h]
  int v32; // [sp+5Ch] [bp-10h]
  int v33; // [sp+60h] [bp-Ch]
  int v34; // [sp+64h] [bp-8h]

  g_World = *((_DWORD *)a2 + 13);
  std::vector<PathFinderNode *>::resize(this + 38, 0);
  Ogre::HashTable<int,PathFinderNode,Ogre::UIntHashCoder>::clear(this + 1);
  v20 = *((_BYTE *)this + 150);
  ActorLocoMotion::getCollideBox(*((ActorLocoMotion **)a2 + 17), (CollideAABB *)&v29);
  if ( *((_BYTE *)this + 151) != 0 && ClientActor::isInWater(a2) != 0 )
  {
    v27 = v30 + 50;
    v26 = v29 + v32 / 2;
    v28 = v34 / 2 + v31;
    CoordDivBlock((const WCoord *)v24, &v26);
    while ( 1 )
    {
      BlockID = World::getBlockID((World *)*this, (const WCoord *)v24, v15, v16);
      v6 = v25;
      if ( (unsigned int)(BlockID - 3) > 1 )
        break;
      ++v25;
    }
    *((_BYTE *)this + 150) = 0;
  }
  else
  {
    v6 = CoordDivBlock(v30 + 50);
  }
  v7 = CoordDivBlock(v29);
  v8 = CoordDivBlock(v31);
  v9 = *((_DWORD *)a3 + 2);
  v22[2] = v8;
  v10 = *((_DWORD *)a3 + 1);
  v22[1] = v6;
  v11 = *(_DWORD *)a3;
  v27 = v10;
  v22[0] = v7;
  v26 = v11 - v32 / 2;
  v28 = v9 - v34 / 2;
  CoordDivBlock((const WCoord *)v23, &v26);
  v18 = (int *)PathFinder::openPoint((PathFinder *)this, (const WCoord *)v22);
  v12 = (int *)PathFinder::openPoint((PathFinder *)this, (const WCoord *)v23);
  v26 = v32 + 100;
  v27 = v33 + 100;
  v28 = v34 + 100;
  CoordDivBlock((const WCoord *)v24, &v26);
  v13 = CoordDivBlock(a4);
  result = PathFinder::addToPath((int)this, a2, v18, v12, (const WCoord *)v24, v13);
  *((_BYTE *)this + 150) = v20;
  return result;
}


//======================================================================
// PathFinder::createEntityPathTo(ClientActor *,ClientActor *,int)
// address: 0x002D6E88   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall PathFinder::createEntityPathTo(void **this, ClientActor *a2, ClientActor *a3, int a4)
{
  _BYTE v8[16]; // [sp+4h] [bp-10h] BYREF

  ClientActor::getPosition((ClientActor *)v8);
  return PathFinder::createEntityPathTo(this, a2, (const WCoord *)v8, a4);
}

