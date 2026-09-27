// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AIEatGrass

//======================================================================
// AIEatGrass::resetTask(void)
// address: 0x00301FEC   size: 0xE (14 bytes)
//======================================================================
int __fastcall AIEatGrass::resetTask(int this)
{
  int v1; // r2

  v1 = *(_DWORD *)(this + 12);
  *(_DWORD *)(this + 16) = 0;
  *(_BYTE *)(*(_DWORD *)(v1 + 64) + 85) = 0;
  return this;
}


//======================================================================
// AIEatGrass::~AIEatGrass()
// address: 0x00301FFC   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN10AIEatGrassD1Ev'
void __fastcall AIEatGrass::~AIEatGrass(AIEatGrass *this)
{
  *(_DWORD *)this = &off_462F58;
  AIBase::~AIBase(this);
}


//======================================================================
// AIEatGrass::~AIEatGrass()
// address: 0x00302018   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AIEatGrass::~AIEatGrass(AIEatGrass *this)
{
  AIEatGrass::~AIEatGrass(this);
  operator delete(this);
}


//======================================================================
// AIEatGrass::startExecuting(void)
// address: 0x0030202A   size: 0x1E (30 bytes)
//======================================================================
int __fastcall AIEatGrass::startExecuting(AIEatGrass *this)
{
  int result; // r0

  *((_DWORD *)this + 4) = 40;
  result = NavigationPath::clearPathEntity(*(_DWORD *)(*((_DWORD *)this + 3) + 136));
  *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 3) + 64) + 85) = 1;
  return result;
}


//======================================================================
// AIEatGrass::continueExecuting(void)
// address: 0x00302048   size: 0x6C (108 bytes)
//======================================================================
unsigned int __fastcall AIEatGrass::continueExecuting(AIEatGrass *this)
{
  int v1; // r2
  _DWORD *v2; // r3
  World *v3; // r7
  int v5; // r1
  int v6; // r3
  int v7; // r2
  int v8; // r3
  World *v9; // r7
  int v10; // r2
  int v11; // r3
  int BlockID; // r3
  unsigned int result; // r0
  int v14; // [sp+4h] [bp-28h] BYREF
  int v15; // [sp+8h] [bp-24h]
  int v16; // [sp+Ch] [bp-20h]
  int v17[3]; // [sp+10h] [bp-1Ch] BYREF
  _BYTE v18[16]; // [sp+1Ch] [bp-10h] BYREF

  v1 = *((_DWORD *)this + 3);
  v2 = *(_DWORD **)(v1 + 68);
  v3 = *(World **)(v1 + 52);
  v14 = v2[8];
  v5 = v2[9];
  v6 = v2[10];
  v15 = v5;
  v16 = v6;
  CoordDivBlock((const WCoord *)v18, &v14);
  if ( World::getBlockID(v3, (const WCoord *)v18, v7, v8) == 224 )
  {
    *((_DWORD *)this + 5) = 224;
  }
  else
  {
    v9 = *(World **)(*((_DWORD *)this + 3) + 52);
    v17[0] = v14;
    v17[2] = v16;
    v17[1] = v15 - 1;
    CoordDivBlock((const WCoord *)v18, v17);
    BlockID = World::getBlockID(v9, (const WCoord *)v18, v10, v11);
    result = 0;
    if ( BlockID != 100 )
      return result;
    *((_DWORD *)this + 5) = 100;
  }
  return (unsigned int)((*((int *)this + 4) >> 31) - *((_DWORD *)this + 4)) >> 31;
}


//======================================================================
// AIEatGrass::shouldExecute(void)
// address: 0x003020B4   size: 0x82 (130 bytes)
//======================================================================
int __fastcall AIEatGrass::shouldExecute(AIEatGrass *this)
{
  int v2; // r1
  int v3; // r0
  int v4; // r3
  int v5; // r2
  _DWORD *v6; // r3
  World *v7; // r7
  int v8; // r1
  int v9; // r3
  int v10; // r2
  int v11; // r3
  int BlockID; // r0
  World *v13; // r7
  int v14; // r2
  int v15; // r3
  int v17; // [sp+4h] [bp-28h] BYREF
  int v18; // [sp+8h] [bp-24h]
  int v19; // [sp+Ch] [bp-20h]
  _BYTE v20[12]; // [sp+10h] [bp-1Ch] BYREF
  int v21[4]; // [sp+1Ch] [bp-10h] BYREF

  if ( *(int *)(*((_DWORD *)this + 3) + 196) < 0 )
    v2 = 49;
  else
    v2 = 999;
  v3 = GenRandomInt(0, v2);
  v4 = 0;
  if ( v3 == 0 )
  {
    v5 = *((_DWORD *)this + 3);
    v6 = *(_DWORD **)(v5 + 68);
    v7 = *(World **)(v5 + 52);
    v17 = v6[8];
    v8 = v6[9];
    v9 = v6[10];
    v18 = v8;
    v19 = v9;
    CoordDivBlock((const WCoord *)v21, &v17);
    BlockID = World::getBlockID(v7, (const WCoord *)v21, v10, v11);
    if ( BlockID == 224
      || (v13 = *(World **)(*((_DWORD *)this + 3) + 52),
          v21[0] = v17,
          v21[2] = v19,
          v21[1] = v18 - 1,
          CoordDivBlock((const WCoord *)v20, v21),
          BlockID = World::getBlockID(v13, (const WCoord *)v20, v14, v15),
          v4 = 0,
          BlockID == 100) )
    {
      *((_DWORD *)this + 5) = BlockID;
      return 1;
    }
  }
  return v4;
}


//======================================================================
// AIEatGrass::AIEatGrass(ClientActor *)
// address: 0x0030213C   size: 0x3C (60 bytes)
//======================================================================
// Alternative name is '_ZN10AIEatGrassC2EP11ClientActor'
void __fastcall AIEatGrass::AIEatGrass(AIEatGrass *this, ClientActor *lpsrc)
{
  ClientActor *v3; // r0

  *(_DWORD *)this = &off_462F58;
  v3 = lpsrc;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = -1;
  if ( lpsrc != nullptr )
    v3 = (ClientActor *)_dynamic_cast(
                          lpsrc,
                          (const struct __class_type_info *)&`typeinfo for'ClientActor,
                          (const struct __class_type_info *)&`typeinfo for'ClientMob,
                          0);
  *((_DWORD *)this + 3) = v3;
  *((_DWORD *)this + 2) = 7;
}


//======================================================================
// AIEatGrass::eatGrassBonus(void)
// address: 0x00302184   size: 0x26 (38 bytes)
//======================================================================
int __fastcall AIEatGrass::eatGrassBonus(ClientMob **this)
{
  int result; // r0
  int *v3; // r2
  int v4; // r3

  result = ClientMob::setSheared(*(this + 3), 0);
  v3 = (int *)((char *)*(this + 3) + 196);
  if ( *v3 < 0 )
  {
    v4 = *v3 + 1200;
    if ( v4 >= 0 )
      v4 = -1;
    *v3 = v4;
  }
  return result;
}


//======================================================================
// AIEatGrass::updateTask(void)
// address: 0x003021AA   size: 0x84 (132 bytes)
//======================================================================
ClientMob **__fastcall AIEatGrass::updateTask(ClientMob **this)
{
  ClientMob **v1; // r4
  int v2; // r3
  int v3; // r3
  int v4; // r2
  World *v5; // r5
  _DWORD *v6; // r2
  int v7; // r2
  _DWORD *v8; // r3
  World *v9; // r5
  int v10; // r1
  int v11; // r2
  int v12; // r3
  _BYTE v13[12]; // [sp+8h] [bp-18h] BYREF
  int v14; // [sp+14h] [bp-Ch] BYREF
  int v15; // [sp+18h] [bp-8h]
  int v16; // [sp+1Ch] [bp-4h]

  v1 = this;
  v2 = (int)*(this + 4) - 1;
  if ( v2 < 0 )
    v2 = 0;
  *(this + 4) = (ClientMob *)v2;
  if ( *(this + 4) == (ClientMob *)&byte_4 )
  {
    v3 = (int)*(this + 5);
    if ( v3 == 224 )
    {
      v4 = (int)*(this + 3);
      v5 = *(World **)(v4 + 52);
      v6 = *(_DWORD **)(v4 + 68);
      v14 = v6[8];
      v15 = v6[9];
      v16 = v6[10];
      CoordDivBlock((const WCoord *)v13, &v14);
      World::setBlockAll(v5, (const WCoord *)v13, 0, 0, 3);
    }
    else
    {
      if ( v3 != 100 )
        return this;
      v7 = (int)*(this + 3);
      v8 = *(_DWORD **)(v7 + 68);
      v9 = *(World **)(v7 + 52);
      v10 = v8[10];
      v11 = v8[9];
      v12 = v8[8];
      v16 = v10;
      v14 = v12;
      v15 = v11 - 1;
      CoordDivBlock((const WCoord *)v13, &v14);
      World::setBlockAll(v9, (const WCoord *)v13, 101, 0, 3);
    }
    return (ClientMob **)AIEatGrass::eatGrassBonus(v1);
  }
  return this;
}

