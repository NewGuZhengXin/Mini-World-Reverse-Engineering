// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ReedMaterial

//======================================================================
// ReedMaterial::getTickRandomly(void)
// address: 0x002A81E4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ReedMaterial::getTickRandomly(ReedMaterial *this)
{
  return 1;
}


//======================================================================
// ReedMaterial::onFertilized(World *,WCoord const&,int)
// address: 0x002A81E8   size: 0x4 (4 bytes)
//======================================================================
int ReedMaterial::onFertilized()
{
  return 0;
}


//======================================================================
// ReedMaterial::~ReedMaterial()
// address: 0x002A81EC   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN12ReedMaterialD1Ev'
void __fastcall ReedMaterial::~ReedMaterial(ReedMaterial *this)
{
  *(_DWORD *)this = &off_45D5A0;
  ColorHerbMaterial::~ColorHerbMaterial(this);
}


//======================================================================
// ReedMaterial::~ReedMaterial()
// address: 0x002A8208   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ReedMaterial::~ReedMaterial(ReedMaterial *this)
{
  ReedMaterial::~ReedMaterial(this);
  operator delete(this);
}


//======================================================================
// ReedMaterial::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002A821A   size: 0x42 (66 bytes)
//======================================================================
__int64 __fastcall ReedMaterial::onNeighborBlockChange(__int64 this, const WCoord *a2, int a3)
{
  __int64 v6; // [sp+0h] [bp-Ch]

  v6 = this;
  if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)this + 152))(this) == 0 )
  {
    HIDWORD(v6) = 1065353216;
    (*(void (__fastcall **)(_DWORD, _DWORD, const WCoord *, _DWORD, int))(*(_DWORD *)this + 180))(
      this,
      HIDWORD(this),
      a2,
      0,
      1);
    World::setBlockAll((World *)HIDWORD(this), a2, 0, 0, 3);
  }
  return v6;
}


//======================================================================
// ReedMaterial::blockTick(World *,WCoord const&)
// address: 0x002A825C   size: 0x8A (138 bytes)
//======================================================================
int __fastcall ReedMaterial::blockTick(ReedMaterial *this, World *a2, const WCoord *a3)
{
  int v4; // r3
  int v5; // r1
  int v7; // r2
  int result; // r0
  int v10; // r3
  int BlockData; // r0
  World *v12; // r0
  const WCoord *v13; // r1
  int v14; // r2
  int v15; // [sp+Ch] [bp-20h]
  _DWORD v16[3]; // [sp+10h] [bp-1Ch] BYREF
  _DWORD v17[4]; // [sp+1Ch] [bp-10h] BYREF

  v4 = *((_DWORD *)a3 + 1);
  v5 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 2);
  v16[0] = v5;
  v16[1] = v4 + 1;
  v16[2] = v7;
  result = World::getBlockID(a2, (const WCoord *)v16);
  v15 = 1;
  if ( result == 0 )
  {
    while ( 1 )
    {
      v17[1] = *((_DWORD *)a3 + 1) - v15;
      v10 = *((_DWORD *)a3 + 2);
      v17[0] = *(_DWORD *)a3;
      v17[2] = v10;
      result = World::getBlockID(a2, (const WCoord *)v17);
      if ( result != *((_DWORD *)this + 8) )
        break;
      ++v15;
    }
    if ( v15 <= 2 )
    {
      BlockData = World::getBlockData(a2, a3);
      if ( BlockData == 15 )
      {
        World::setBlockAll(a2, (const WCoord *)v16, *((_DWORD *)this + 8), 0, 3);
        v12 = a2;
        v13 = a3;
        v14 = 0;
      }
      else
      {
        v14 = BlockData + 1;
        v13 = a3;
        v12 = a2;
      }
      return World::setBlockData(v12, v13, v14, 4);
    }
  }
  return result;
}


//======================================================================
// ReedMaterial::canPlaceBlockAt(World *,WCoord const&)
// address: 0x002A82E8   size: 0x84 (132 bytes)
//======================================================================
int __fastcall ReedMaterial::canPlaceBlockAt(ReedMaterial *this, World *a2, const WCoord *a3)
{
  int v4; // r0
  int *v5; // r4
  int v6; // r5
  int v8; // r2
  int BlockID; // r0
  int v11; // r2
  int v12; // r12
  int v13; // [sp+0h] [bp-1Ch] BYREF
  int v14; // [sp+4h] [bp-18h]
  int v15; // [sp+8h] [bp-14h]
  _DWORD v16[4]; // [sp+Ch] [bp-10h] BYREF

  v4 = *((_DWORD *)a3 + 1);
  v5 = g_DirectionCoord;
  v6 = *((_DWORD *)a3 + 2);
  v8 = *(_DWORD *)a3;
  v14 = v4 + dword_51665C;
  v15 = v6 + dword_516660;
  v13 = v8 + dword_516658;
  BlockID = World::getBlockID(a2, (const WCoord *)&v13);
  if ( BlockID == *((_DWORD *)this + 8) )
    return 1;
  if ( (unsigned int)(BlockID - 100) <= 1 || BlockID == 106 )
  {
    while ( 1 )
    {
      v11 = v14 + v5[1];
      v12 = v15 + v5[2];
      v16[0] = v13 + *v5;
      v16[1] = v11;
      v16[2] = v12;
      if ( (unsigned int)(World::getBlockID(a2, (const WCoord *)v16) - 3) <= 1 )
        break;
      v5 += 3;
      if ( v5 == &dword_516658 )
        return 0;
    }
    return 1;
  }
  return 0;
}


//======================================================================
// ReedMaterial::newObject(void)
// address: 0x002C18D0   size: 0x1C (28 bytes)
//======================================================================
ColorHerbMaterial *__fastcall ReedMaterial::newObject(ReedMaterial *this)
{
  ColorHerbMaterial *v1; // r4

  v1 = (ColorHerbMaterial *)operator new(0x50u);
  ColorHerbMaterial::ColorHerbMaterial(v1);
  *(_DWORD *)v1 = &off_45D5A0;
  return v1;
}

