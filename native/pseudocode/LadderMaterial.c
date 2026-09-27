// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: LadderMaterial

//======================================================================
// LadderMaterial::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x00267CD0   size: 0x82 (130 bytes)
//======================================================================
int __fastcall LadderMaterial::onNeighborBlockChange(LadderMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int BlockData; // r0
  int *v8; // r3
  int v9; // r0
  int v10; // r1
  int v11; // r3
  int v12; // r2
  int v13; // r7
  int v15; // [sp+8h] [bp-1Ch]
  _DWORD v17[4]; // [sp+14h] [bp-10h] BYREF

  BlockData = World::getBlockData(a2, a3);
  v8 = &g_DirectionCoord[3 * BlockData];
  v15 = BlockData;
  v9 = *((_DWORD *)a3 + 1) + v8[1];
  v10 = v8[2];
  v11 = *v8;
  v12 = *((_DWORD *)a3 + 2) + v10;
  v13 = *(_DWORD *)a3;
  v17[1] = v9;
  v17[0] = v13 + v11;
  v17[2] = v12;
  if ( World::isBlockNormalCube(a2, (const WCoord *)v17) == 0 )
  {
    (*(void (__fastcall **)(LadderMaterial *, World *, const WCoord *, int, int, int))(*(_DWORD *)this + 180))(
      this,
      a2,
      a3,
      v15,
      1,
      1065353216);
    World::setBlockAll(a2, a3, 0, 0, 3);
  }
  return BlockMaterial::onNeighborBlockChange(this, a2, a3, a4);
}


//======================================================================
// LadderMaterial::~LadderMaterial()
// address: 0x00267D58   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN14LadderMaterialD1Ev'
void __fastcall LadderMaterial::~LadderMaterial(LadderMaterial *this)
{
  *(_DWORD *)this = &off_45BA40;
  FlatPieceMaterial::~FlatPieceMaterial(this);
}


//======================================================================
// LadderMaterial::~LadderMaterial()
// address: 0x00267D74   size: 0x12 (18 bytes)
//======================================================================
void __fastcall LadderMaterial::~LadderMaterial(LadderMaterial *this)
{
  LadderMaterial::~LadderMaterial(this);
  operator delete(this);
}


//======================================================================
// LadderMaterial::canPlaceBlockAt(World *,WCoord const&)
// address: 0x00267D88   size: 0x44 (68 bytes)
//======================================================================
int __fastcall LadderMaterial::canPlaceBlockAt(LadderMaterial *this, World *a2, const WCoord *a3)
{
  int *v4; // r4
  int v6; // r2
  int v7; // r12
  int result; // r0
  _DWORD v9[4]; // [sp+4h] [bp-10h] BYREF

  v4 = g_DirectionCoord;
  do
  {
    v6 = *((_DWORD *)a3 + 1) + v4[1];
    v7 = *((_DWORD *)a3 + 2) + v4[2];
    v9[0] = *(_DWORD *)a3 + *v4;
    v9[1] = v6;
    v9[2] = v7;
    result = World::isBlockNormalCube(a2, (const WCoord *)v9);
    if ( result != 0 )
      break;
    v4 += 3;
  }
  while ( v4 != &dword_516658 );
  return result;
}


//======================================================================
// LadderMaterial::onBlockPlaced(World *,WCoord const&,DirectionType,float,float,float,int)
// address: 0x00267DD0   size: 0x78 (120 bytes)
//======================================================================
int __fastcall LadderMaterial::onBlockPlaced(int a1, World *a2, _DWORD *a3, int a4)
{
  int v4; // r7
  int *v5; // r5
  int *v8; // r3
  int v9; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r2
  int v13; // r12
  _DWORD v15[4]; // [sp+4h] [bp-10h] BYREF

  v4 = a4;
  v5 = g_DirectionCoord;
  v8 = &g_DirectionCoord[3 * a4];
  v9 = a3[1] + v8[1];
  v10 = a3[2] + v8[2];
  v11 = *a3 + *v8;
  v15[1] = v9;
  v15[0] = v11;
  v15[2] = v10;
  if ( World::isBlockNormalCube(a2, (const WCoord *)v15) == 0 )
  {
    v4 = 0;
    while ( 1 )
    {
      v12 = a3[1] + v5[1];
      v13 = a3[2] + v5[2];
      v15[0] = *a3 + *v5;
      v15[2] = v13;
      v15[1] = v12;
      if ( World::isBlockNormalCube(a2, (const WCoord *)v15) != 0 )
        break;
      ++v4;
      v5 += 3;
      if ( v4 == 4 )
        return 0;
    }
  }
  return v4;
}


//======================================================================
// LadderMaterial::newObject(void)
// address: 0x002C1D48   size: 0x1C (28 bytes)
//======================================================================
FlatPieceMaterial *__fastcall LadderMaterial::newObject(LadderMaterial *this)
{
  FlatPieceMaterial *v1; // r4

  v1 = (FlatPieceMaterial *)operator new(0x38u);
  FlatPieceMaterial::FlatPieceMaterial(v1);
  *(_DWORD *)v1 = &off_45BA40;
  return v1;
}

