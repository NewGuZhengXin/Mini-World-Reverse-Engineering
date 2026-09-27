// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: NavigationPath

//======================================================================
// NavigationPath::NavigationPath(ClientActor *)
// address: 0x002D61DC   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN14NavigationPathC2EP11ClientActor'
void __fastcall NavigationPath::NavigationPath(NavigationPath *this, ClientActor *a2)
{
  *((_DWORD *)this + 1) = 1065353216;
  *((_DWORD *)this + 2) = 1065353216;
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 3) = 0;
  *((_BYTE *)this + 16) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
}


//======================================================================
// NavigationPath::~NavigationPath()
// address: 0x002D61F8   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZN14NavigationPathD2Ev'
void __fastcall NavigationPath::~NavigationPath(NavigationPath *this)
{
  PathEntity *v1; // r0

  v1 = *((PathEntity **)this + 3);
  if ( v1 != nullptr )
    PathEntity::release(v1);
}


//======================================================================
// NavigationPath::getPathSearchRange(void)
// address: 0x002D620A   size: 0x1C (28 bytes)
//======================================================================
int __fastcall NavigationPath::getPathSearchRange(NavigationPath *this)
{
  return (int)(float)((float)(*(int (__fastcall **)(_DWORD))(**(_DWORD **)this + 112))(*(_DWORD *)this)
                    * *((float *)this + 2));
}


//======================================================================
// NavigationPath::canNavigate(void)
// address: 0x002D6226   size: 0x30 (48 bytes)
//======================================================================
int __fastcall NavigationPath::canNavigate(ClientActor **this)
{
  ClientActor *v1; // r3
  _BYTE *v3; // r2
  int result; // r0

  v1 = *this;
  v3 = (_BYTE *)(*((_DWORD *)*this + 17) + 124);
  result = (unsigned __int8)*v3;
  if ( *v3 != 0 )
    return 1;
  if ( *((_BYTE *)v1 + 117) != 0 )
  {
    if ( ClientActor::isInWater(v1) != 0 )
      return 1;
    return ClientActor::handleLavaMovement(*this);
  }
  return result;
}


//======================================================================
// NavigationPath::getPathableYPos(void)
// address: 0x002D6256   size: 0x92 (146 bytes)
//======================================================================
int __fastcall NavigationPath::getPathableYPos(ClientActor **this)
{
  ClientActor *v2; // r0
  _DWORD *v3; // r6
  int v4; // r0
  int v5; // r2
  int v6; // r3
  int v7; // r0
  int v8; // r0
  int v9; // r4
  unsigned int v11; // r7
  int v12; // r2
  int v13; // r3
  int BlockID; // r0
  int v15; // r2
  unsigned int v16; // [sp+4h] [bp-20h]
  World *v17; // [sp+8h] [bp-1Ch]
  int v18; // [sp+Ch] [bp-18h]
  _DWORD v19[4]; // [sp+14h] [bp-10h] BYREF

  v2 = *this;
  v3 = *((_DWORD **)v2 + 17);
  v17 = *((World **)v2 + 13);
  v4 = ClientActor::isInWater(v2);
  v5 = v3[9];
  v6 = v3[7];
  if ( v4 != 0 && *((_BYTE *)*this + 117) != 0 )
  {
    v9 = (v5 - v6) / 100;
    v11 = CoordDivBlock(v3[8]);
    v16 = CoordDivBlock(v3[10]);
    v19[2] = v16;
    v19[0] = v11;
    v19[1] = v9;
    BlockID = World::getBlockID(v17, (const WCoord *)v19, v12, v13);
    v18 = v9 + 17;
    do
    {
      if ( (unsigned int)(BlockID - 3) > 1 )
      {
        v8 = 100;
        return v8 * v9;
      }
      ++v9;
      v19[2] = v16;
      v19[0] = v11;
      v19[1] = v9;
      BlockID = World::getBlockID(v17, (const WCoord *)v19, v15, v16);
    }
    while ( v9 != v18 );
    v7 = v3[9] - v3[7];
  }
  else
  {
    v7 = v5 - v6 + 50;
  }
  v8 = v7 / 100;
  v9 = 100;
  return v8 * v9;
}


//======================================================================
// NavigationPath::getEntityPosition(void)
// address: 0x002D62E8   size: 0x1C (28 bytes)
//======================================================================
NavigationPath *__fastcall NavigationPath::getEntityPosition(NavigationPath *this, ClientActor **a2)
{
  int v3; // r3
  int v4; // r5
  int v5; // r6
  int PathableYPos; // r0

  v3 = *((_DWORD *)*a2 + 17);
  v4 = *(_DWORD *)(v3 + 32);
  v5 = *(_DWORD *)(v3 + 40);
  PathableYPos = NavigationPath::getPathableYPos(a2);
  *(_DWORD *)this = v4;
  *((_DWORD *)this + 1) = PathableYPos;
  *((_DWORD *)this + 2) = v5;
  return this;
}


//======================================================================
// NavigationPath::removeSunnyPath(void)
// address: 0x002D6304   size: 0x66 (102 bytes)
//======================================================================
__int64 __fastcall NavigationPath::removeSunnyPath(NavigationPath *this)
{
  _DWORD *v2; // r5
  World *v3; // r7
  int v4; // r6
  _DWORD *TopHeight; // r0
  int v6; // r5
  _DWORD *v7; // r2
  int *v8; // r3
  int v9; // r6
  __int64 v11; // [sp+0h] [bp-Ch]

  LODWORD(v11) = this;
  v2 = *(_DWORD **)(*(_DWORD *)this + 68);
  v3 = *(World **)(*(_DWORD *)this + 52);
  v4 = (v2[9] + 50) / 100;
  HIDWORD(v11) = v2[8] / 100;
  TopHeight = World::getTopHeight(v3, SHIDWORD(v11), v2[10] / 100);
  v6 = 0;
  if ( v4 < (int)TopHeight )
  {
    while ( 1 )
    {
      v7 = *((_DWORD **)this + 3);
      if ( v6 >= v7[4] )
        break;
      v8 = (int *)(*v7 + 12 * v6);
      v9 = v8[1];
      if ( v9 >= (int)World::getTopHeight(v3, *v8, v8[2]) )
      {
        *(_DWORD *)(*((_DWORD *)this + 3) + 16) = v6 - 1;
        return v11;
      }
      ++v6;
    }
  }
  return v11;
}


//======================================================================
// NavigationPath::setPath(PathEntity *,float)
// address: 0x002D636C   size: 0xB8 (184 bytes)
//======================================================================
int __fastcall NavigationPath::setPath(NavigationPath *this, PathEntity *a2, float a3)
{
  PathEntity *v5; // r0
  _DWORD *v6; // r2
  _DWORD *v7; // r3
  int i; // r1
  _DWORD *v9; // r12
  int v10; // r6
  int v12; // r5
  int v13; // [sp+4h] [bp-20h]
  _DWORD *v14; // [sp+8h] [bp-1Ch]
  _DWORD v16[5]; // [sp+10h] [bp-14h] BYREF

  if ( a2 == nullptr )
  {
    *((_BYTE *)this + 16) = 0;
    return 0;
  }
  v5 = *((PathEntity **)this + 3);
  if ( v5 == nullptr )
    goto LABEL_11;
  v6 = *(_DWORD **)v5;
  v7 = *(_DWORD **)a2;
  v13 = -1431655765 * ((*((_DWORD *)v5 + 1) - *(_DWORD *)v5) >> 2);
  if ( v13 != -1431655765 * ((*((_DWORD *)a2 + 1) - *(_DWORD *)a2) >> 2) )
  {
LABEL_10:
    PathEntity::release(v5);
LABEL_11:
    ++*((_DWORD *)a2 + 5);
    *((_DWORD *)this + 3) = a2;
    goto LABEL_12;
  }
  for ( i = 0; i != v13; ++i )
  {
    v9 = v7;
    v14 = v6;
    if ( *v7 != *v6 )
      goto LABEL_10;
    if ( v7[1] != v6[1] )
      goto LABEL_10;
    v7 += 3;
    v6 += 3;
    if ( v9[2] != v14[2] )
      goto LABEL_10;
  }
LABEL_12:
  if ( *(_BYTE *)(*(_DWORD *)this + 123) != 0 )
    NavigationPath::removeSunnyPath(this);
  if ( *(int *)(*((_DWORD *)this + 3) + 16) > 0 )
  {
    *((float *)this + 1) = a3;
    NavigationPath::getEntityPosition((NavigationPath *)v16, (ClientActor **)this);
    v10 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 7) = v16[0];
    *((_DWORD *)this + 8) = v16[1];
    v12 = v16[2];
    *((_DWORD *)this + 6) = v10;
    *((_BYTE *)this + 16) = 1;
    *((_DWORD *)this + 9) = v12;
    return 1;
  }
  return 0;
}


//======================================================================
// NavigationPath::getPath(void)
// address: 0x002D6428   size: 0x10 (16 bytes)
//======================================================================
int __fastcall NavigationPath::getPath(NavigationPath *this)
{
  if ( *((_BYTE *)this + 16) != 0 )
    return *((_DWORD *)this + 3);
  else
    return *((unsigned __int8 *)this + 16);
}


//======================================================================
// NavigationPath::isPositionClear(WCoord const&,WCoord const&,WCoord const&,float,float)
// address: 0x002D6438   size: 0xF8 (248 bytes)
//======================================================================
int __fastcall NavigationPath::isPositionClear(
        NavigationPath *this,
        const WCoord *a2,
        const WCoord *a3,
        const WCoord *a4,
        float a5,
        float a6)
{
  int v8; // r2
  int j; // r5
  int v10; // r2
  int BlockID; // r1
  int Material; // r0
  int (__fastcall *v13)(int, World *, int *); // r3
  int v15; // [sp+4h] [bp-28h]
  int i; // [sp+8h] [bp-24h]
  World *v17; // [sp+Ch] [bp-20h]
  float v18; // [sp+10h] [bp-1Ch]
  float v19; // [sp+14h] [bp-18h]
  int v20; // [sp+1Ch] [bp-10h] BYREF
  int v21; // [sp+20h] [bp-Ch]
  int v22; // [sp+24h] [bp-8h]

  v17 = *(World **)(*(_DWORD *)this + 52);
  v18 = (float)*(int *)a4 / 100.0;
  v19 = (float)*((int *)a4 + 2) / 100.0;
  for ( i = *(_DWORD *)a2; ; ++i )
  {
    if ( i >= *(_DWORD *)a2 + *(_DWORD *)a3 )
      return 1;
    v8 = *((_DWORD *)a2 + 1);
LABEL_4:
    v15 = v8;
    if ( v8 < *((_DWORD *)a2 + 1) + *((_DWORD *)a3 + 1) )
      break;
  }
  for ( j = *((_DWORD *)a2 + 2); ; ++j )
  {
    v10 = *((_DWORD *)a2 + 2);
    if ( j >= v10 + *((_DWORD *)a3 + 2) )
    {
      v8 = v15 + 1;
      goto LABEL_4;
    }
    if ( (float)((float)((float)((float)((float)i + 0.5) - v18) * a5)
               + (float)((float)((float)((float)j + 0.5) - v19) * a6)) >= 0.0 )
    {
      v21 = v15;
      v20 = i;
      v22 = j;
      BlockID = World::getBlockID(v17, (const WCoord *)&v20, v10, i);
      if ( BlockID > 0 )
      {
        Material = BlockMaterialMgr::getMaterial(
                     (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                     BlockID);
        v13 = *(int (__fastcall **)(int, World *, int *))(*(_DWORD *)Material + 80);
        v20 = i;
        v21 = v15;
        v22 = j;
        if ( v13(Material, v17, &v20) != 0 )
          break;
      }
    }
  }
  return 0;
}


//======================================================================
// NavigationPath::isSafeToStandAt(WCoord const&,WCoord const&,WCoord const&,float,float)
// address: 0x002D6538   size: 0x12A (298 bytes)
//======================================================================
int __fastcall NavigationPath::isSafeToStandAt(
        NavigationPath *this,
        const WCoord *a2,
        const WCoord *a3,
        const WCoord *a4,
        float a5,
        float a6)
{
  int v9; // r2
  int BlockID; // r0
  int v11; // r6
  int v13; // [sp+8h] [bp-34h]
  int i; // [sp+Ch] [bp-30h]
  int isPositionClear; // [sp+14h] [bp-28h]
  int v16; // [sp+18h] [bp-24h]
  int v17; // [sp+1Ch] [bp-20h]
  World *v19; // [sp+24h] [bp-18h]
  _DWORD v20[4]; // [sp+2Ch] [bp-10h] BYREF

  v16 = *(_DWORD *)a2 - *(_DWORD *)a3 / 2;
  v17 = *((_DWORD *)a2 + 2) - *((_DWORD *)a3 + 2) / 2;
  v9 = *((_DWORD *)a2 + 1);
  v20[0] = v16;
  v20[1] = v9;
  v20[2] = v17;
  isPositionClear = NavigationPath::isPositionClear(this, (const WCoord *)v20, a3, a4, a5, a6);
  if ( isPositionClear == 0 )
    return 0;
  v13 = v16;
  v19 = *(World **)(*(_DWORD *)this + 52);
  while ( v13 < v16 + *(_DWORD *)a3 )
  {
    for ( i = v17; i < v17 + *((_DWORD *)a3 + 2); ++i )
    {
      if ( (float)((float)((float)((float)((float)v13 + 0.5) - (float)((float)*(int *)a4 / 100.0)) * a5)
                 + (float)((float)((float)((float)i + 0.5) - (float)((float)*((int *)a4 + 2) / 100.0)) * a6)) >= 0.0 )
      {
        v20[1] = *((_DWORD *)a2 + 1) - 1;
        v20[0] = v13;
        v20[2] = i;
        BlockID = World::getBlockID(v19, (const WCoord *)v20, v13, i);
        v11 = BlockID;
        if ( BlockID <= 0 || (unsigned int)(BlockID - 3) <= 1 && ClientActor::isInWater(*(ClientActor **)this) == 0 )
          return 0;
        if ( (unsigned int)(v11 - 5) <= 1 )
          return 0;
      }
    }
    ++v13;
  }
  return isPositionClear;
}


//======================================================================
// NavigationPath::isDirectPathBetweenPoints(WCoord const&,WCoord const&,WCoord const&)
// address: 0x002D6668   size: 0x21C (540 bytes)
//======================================================================
int __fastcall NavigationPath::isDirectPathBetweenPoints(
        NavigationPath *this,
        const WCoord *a2,
        const WCoord *a3,
        const WCoord *a4)
{
  float v6; // r0
  float v7; // r4
  float v8; // r0
  float v9; // r0
  int v10; // r3
  int v11; // r1
  float v12; // r7
  float v13; // r1
  float v14; // r1
  float v15; // r4
  int v16; // r4
  float v18; // [sp+10h] [bp-54h]
  float v19; // [sp+10h] [bp-54h]
  float v20; // [sp+14h] [bp-50h]
  float v21; // [sp+14h] [bp-50h]
  float v22; // [sp+18h] [bp-4Ch]
  int v24; // [sp+1Ch] [bp-48h]
  int isSafeToStandAt; // [sp+20h] [bp-44h]
  int v26; // [sp+24h] [bp-40h]
  int v27; // [sp+28h] [bp-3Ch]
  int v28; // [sp+2Ch] [bp-38h]
  int v29; // [sp+30h] [bp-34h]
  int v30; // [sp+34h] [bp-30h]
  int v31; // [sp+38h] [bp-2Ch]
  float v33; // [sp+40h] [bp-24h]
  float v34; // [sp+44h] [bp-20h]
  _DWORD v35[2]; // [sp+48h] [bp-1Ch] BYREF
  int v36; // [sp+50h] [bp-14h]
  _DWORD v37[2]; // [sp+54h] [bp-10h] BYREF
  int v38; // [sp+5Ch] [bp-8h]

  CoordDivBlock((const WCoord *)v35, (int *)a2);
  v20 = (float)(*(_DWORD *)a3 - *(_DWORD *)a2);
  v6 = (float)(*((_DWORD *)a3 + 2) - *((_DWORD *)a2 + 2));
  v7 = v6;
  if ( (float)((float)(v20 * v20) + (float)(v6 * v6)) < 0.1 )
    return 0;
  v8 = j_sqrt((float)((float)(v20 * v20) + (float)(v6 * v6)));
  v9 = 1.0 / v8;
  v21 = v20 * v9;
  v10 = *((_DWORD *)a4 + 2);
  v11 = *((_DWORD *)a4 + 1);
  v37[0] = *(_DWORD *)a4 + 2;
  v38 = v10 + 2;
  v37[1] = v11;
  v12 = v7 * v9;
  isSafeToStandAt = NavigationPath::isSafeToStandAt(this, (const WCoord *)v35, (const WCoord *)v37, a2, v21, v7 * v9);
  if ( isSafeToStandAt == 0 )
    return 0;
  if ( v21 >= 0.0 )
    v13 = v21;
  else
    LODWORD(v13) = LODWORD(v21) + 0x80000000;
  v33 = 1.0 / v13;
  v14 = v12;
  if ( v12 < 0.0 )
    LODWORD(v14) = LODWORD(v12) + 0x80000000;
  v34 = 1.0 / v14;
  v27 = v35[0];
  v18 = (float)(100 * v35[0] - *(_DWORD *)a2) / 100.0;
  v30 = v36;
  v15 = (float)(100 * v36 - *((_DWORD *)a2 + 2)) / 100.0;
  if ( v21 >= 0.0 )
    v18 = v18 + 1.0;
  if ( v12 >= 0.0 )
    v15 = v15 + 1.0;
  v19 = v18 / v21;
  v22 = v15 / v12;
  v26 = v21 < 0.0 ? -1 : 1;
  v28 = v12 < 0.0 ? -1 : 1;
  CoordDivBlock((const WCoord *)v37, (int *)a3);
  v29 = v37[0];
  v31 = v38;
  v24 = v37[0] - v27;
  v16 = v38 - v30;
  while ( v26 * v24 > 0 || v28 * v16 > 0 )
  {
    if ( v19 >= v22 )
    {
      v22 = v22 + v34;
      v36 += v28;
      v16 = v31 - v36;
    }
    else
    {
      v19 = v19 + v33;
      v35[0] += v26;
      v24 = v29 - v35[0];
    }
    if ( NavigationPath::isSafeToStandAt(this, (const WCoord *)v35, a4, a2, v21, v12) == 0 )
      return 0;
  }
  return isSafeToStandAt;
}


//======================================================================
// NavigationPath::noPath(void)
// address: 0x002D688C   size: 0x20 (32 bytes)
//======================================================================
int __fastcall NavigationPath::noPath(NavigationPath *this)
{
  int v1; // r2
  int result; // r0

  v1 = *((unsigned __int8 *)this + 16);
  result = 1;
  if ( v1 != 0 )
    return (unsigned __int8)((*(int *)(*((_DWORD *)this + 3) + 16) < 0)
                           + (*(_DWORD *)(*((_DWORD *)this + 3) + 12) >= *(_DWORD *)(*((_DWORD *)this + 3) + 16))
                           + (*(int *)(*((_DWORD *)this + 3) + 12) >> 31));
  return result;
}


//======================================================================
// NavigationPath::clearPathEntity(void)
// address: 0x002D68AC   size: 0x6 (6 bytes)
//======================================================================
int __fastcall NavigationPath::clearPathEntity(int this)
{
  *(_BYTE *)(this + 16) = 0;
  return this;
}


//======================================================================
// NavigationPath::pathFollow(void)
// address: 0x002D68B4   size: 0x106 (262 bytes)
//======================================================================
int __fastcall NavigationPath::pathFollow(ClientActor **this)
{
  _DWORD *v2; // r5
  int v3; // r6
  int i; // r7
  int v5; // r3
  int v6; // r3
  int v7; // r6
  unsigned int v8; // r6
  int result; // r0
  int j; // r5
  ClientActor *v11; // r1
  ClientActor *v12; // r2
  ClientActor *v13; // r1
  ClientActor *v14; // r5
  int v15; // [sp+0h] [bp-3Ch]
  int v16; // [sp+0h] [bp-3Ch]
  int v17; // [sp+4h] [bp-38h]
  int v18; // [sp+4h] [bp-38h]
  int v19; // [sp+Ch] [bp-30h]
  _DWORD v20[3]; // [sp+14h] [bp-28h] BYREF
  _BYTE v21[12]; // [sp+20h] [bp-1Ch] BYREF
  _DWORD v22[4]; // [sp+2Ch] [bp-10h] BYREF

  NavigationPath::getEntityPosition((NavigationPath *)v20, this);
  v2 = *(this + 3);
  v19 = v20[1];
  v3 = 12 * v2[3];
  v17 = v2[4];
  v15 = v2[3];
  for ( i = v15; i < v17; ++i )
  {
    v5 = *(_DWORD *)(*v2 + v3 + 4);
    v3 += 12;
    if ( v5 != CoordDivBlock(v19) )
      goto LABEL_6;
  }
  i = v17;
LABEL_6:
  v6 = *((_DWORD *)*this + 17);
  v7 = *(_DWORD *)(v6 + 20);
  v18 = *(_DWORD *)(v6 + 24);
  while ( v15 < i )
  {
    PathEntity::getVectorFromIndex((PathEntity *)v22, *(this + 3), (int)*this, v15);
    if ( WCoord::squareDistanceTo(v20, v22) < v7 * v7 )
      *((_DWORD *)*(this + 3) + 3) = v15 + 1;
    ++v15;
  }
  v8 = CoordDivBlock(v7 + 100);
  result = CoordDivBlock(v18) + 1;
  v16 = result;
  for ( j = i - 1; ; --j )
  {
    v11 = *(this + 3);
    if ( j < *((_DWORD *)v11 + 3) )
      break;
    PathEntity::getVectorFromIndex((PathEntity *)v21, v11, (int)*this, j);
    v22[1] = v16;
    v22[0] = v8;
    v22[2] = v8;
    result = NavigationPath::isDirectPathBetweenPoints(
               (NavigationPath *)this,
               (const WCoord *)v20,
               (const WCoord *)v21,
               (const WCoord *)v22);
    if ( result != 0 )
    {
      *((_DWORD *)*(this + 3) + 3) = j;
      break;
    }
  }
  if ( *(this + 5) - *(this + 6) > 100 )
  {
    result = WCoord::squareDistanceTo(v20, this + 7);
    if ( result <= 22499 )
      result = NavigationPath::clearPathEntity((int)this);
    v12 = (ClientActor *)v20[1];
    v13 = (ClientActor *)v20[0];
    v14 = (ClientActor *)v20[2];
    *(this + 6) = *(this + 5);
    *(this + 7) = v13;
    *(this + 8) = v12;
    *(this + 9) = v14;
  }
  return result;
}


//======================================================================
// NavigationPath::onUpdateNavigation(void)
// address: 0x002D69C0   size: 0x52 (82 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> NavigationPath::onUpdateNavigation(NavigationPath *this, int a2, int a3, int a4)
{
  int v5; // r6
  _DWORD v6[3]; // [sp+4h] [bp-Ch] BYREF

  v6[1] = a3;
  v6[2] = a4;
  ++*((_DWORD *)this + 5);
  v5 = *(_DWORD *)(*(_DWORD *)this + 68);
  *(_DWORD *)(v5 + 148) = 0;
  if ( NavigationPath::noPath(this) == 0 )
  {
    if ( NavigationPath::canNavigate((ClientActor **)this) != 0 )
      NavigationPath::pathFollow((ClientActor **)this);
    if ( NavigationPath::noPath(this) == 0 )
    {
      PathEntity::getVectorFromIndex(
        (PathEntity *)v6,
        *((ClientActor **)this + 3),
        *(_DWORD *)this,
        *(_DWORD *)(*((_DWORD *)this + 3) + 12));
      LivingLocoMotion::setTarget(v5, v6, *((_DWORD *)this + 1));
    }
  }
}


//======================================================================
// NavigationPath::getEntityPathToXYZ(ClientActor *,WCoord const&,int,bool,bool,bool,bool)
// address: 0x002D6EAC   size: 0xC0 (192 bytes)
//======================================================================
_DWORD *__fastcall NavigationPath::getEntityPathToXYZ(
        NavigationPath *this,
        ClientActor *a2,
        const WCoord *a3,
        int a4,
        bool a5,
        bool a6,
        bool a7,
        bool a8)
{
  _DWORD *v9; // r0
  _DWORD *v10; // r4
  void *v11; // r0
  int v12; // r3
  char *v13; // r6
  _DWORD *EntityPathTo; // r6
  _DWORD *v16; // [sp+0h] [bp-24h]
  int v17; // [sp+4h] [bp-20h]

  v17 = *((_DWORD *)a2 + 13);
  v9 = (_DWORD *)operator new(0xA4u);
  v16 = v9 + 1;
  v10 = v9;
  v9[3] = 513;
  v9[4] = 0;
  v11 = (void *)operator new[](0x804u);
  v12 = v10[3];
  v10[2] = v11;
  j_memset(v11, 0, 4 * v12);
  v10[38] = 0;
  v10[39] = 0;
  v10[40] = 0;
  v13 = (char *)operator new(0x1000u);
  std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<PathFinderNode *>(nullptr, 0, v13);
  sub_2D5A2C((void *)v10[38]);
  v10[38] = v13;
  v10[39] = v13;
  v10[40] = v13 + 4096;
  *v10 = v17;
  *((_BYTE *)v10 + 148) = a5;
  *((_BYTE *)v10 + 149) = a6;
  *((_BYTE *)v10 + 150) = a7;
  *((_BYTE *)v10 + 151) = a8;
  EntityPathTo = PathFinder::createEntityPathTo((void **)v10, a2, a3, a4);
  sub_2D5A2C((void *)v10[38]);
  Ogre::HashTable<int,PathFinderNode,Ogre::UIntHashCoder>::~HashTable(v16);
  operator delete(v10);
  return EntityPathTo;
}


//======================================================================
// NavigationPath::getPathToXYZ(int,int,int)
// address: 0x002D6F8C   size: 0x52 (82 bytes)
//======================================================================
_DWORD *__fastcall NavigationPath::getPathToXYZ(ClientActor **this, int a2, int a3, int a4)
{
  _DWORD *result; // r0
  int PathSearchRange; // r0
  _DWORD v10[4]; // [sp+14h] [bp-10h] BYREF

  result = (_DWORD *)NavigationPath::canNavigate(this);
  if ( result != nullptr )
  {
    v10[0] = a2;
    v10[1] = a3;
    v10[2] = a4;
    PathSearchRange = NavigationPath::getPathSearchRange((NavigationPath *)this);
    return NavigationPath::getEntityPathToXYZ(
             (NavigationPath *)this,
             *this,
             (const WCoord *)v10,
             PathSearchRange,
             *((_BYTE *)*this + 118),
             *((_BYTE *)*this + 119),
             *((_BYTE *)*this + 116),
             *((_BYTE *)*this + 117));
  }
  return result;
}


//======================================================================
// NavigationPath::tryMoveToXYZ(int,int,int,float)
// address: 0x002D6FDE   size: 0x14 (20 bytes)
//======================================================================
int __fastcall NavigationPath::tryMoveToXYZ(ClientActor **this, int a2, int a3, int a4, float a5)
{
  PathEntity *PathToXYZ; // r0

  PathToXYZ = (PathEntity *)NavigationPath::getPathToXYZ(this, a2, a3, a4);
  return NavigationPath::setPath((NavigationPath *)this, PathToXYZ, a5);
}


//======================================================================
// NavigationPath::getPathEntityToEntity(ClientActor *,ClientActor *,int,bool,bool,bool,bool)
// address: 0x002D6FF2   size: 0x3E (62 bytes)
//======================================================================
_DWORD *__fastcall NavigationPath::getPathEntityToEntity(
        NavigationPath *this,
        ClientActor *a2,
        ClientActor *a3,
        int a4,
        bool a5,
        bool a6,
        bool a7,
        bool a8)
{
  _DWORD *v8; // r4
  int v9; // r5
  int v10; // r4
  _DWORD v12[4]; // [sp+1Ch] [bp-10h] BYREF

  v8 = *((_DWORD **)a3 + 17);
  v12[0] = v8[8];
  v9 = v8[9];
  v10 = v8[10];
  v12[1] = v9;
  v12[2] = v10;
  return NavigationPath::getEntityPathToXYZ(this, a2, (const WCoord *)v12, a4, a5, a6, a7, a8);
}


//======================================================================
// NavigationPath::getPathToEntityLiving(ClientActor *)
// address: 0x002D7030   size: 0x46 (70 bytes)
//======================================================================
_DWORD *__fastcall NavigationPath::getPathToEntityLiving(ClientActor **this, ClientActor *a2)
{
  _DWORD *result; // r0
  int PathSearchRange; // r0

  result = (_DWORD *)NavigationPath::canNavigate(this);
  if ( result != nullptr )
  {
    PathSearchRange = NavigationPath::getPathSearchRange((NavigationPath *)this);
    return NavigationPath::getPathEntityToEntity(
             (NavigationPath *)this,
             *this,
             a2,
             PathSearchRange,
             *((_BYTE *)*this + 118),
             *((_BYTE *)*this + 119),
             *((_BYTE *)*this + 116),
             *((_BYTE *)*this + 117));
  }
  return result;
}


//======================================================================
// NavigationPath::tryMoveToEntityLiving(ClientActor *,float)
// address: 0x002D7076   size: 0x16 (22 bytes)
//======================================================================
int __fastcall NavigationPath::tryMoveToEntityLiving(ClientActor **this, ClientActor *a2, float a3)
{
  PathEntity *PathToEntityLiving; // r0

  PathToEntityLiving = (PathEntity *)NavigationPath::getPathToEntityLiving(this, a2);
  return NavigationPath::setPath((NavigationPath *)this, PathToEntityLiving, a3);
}

