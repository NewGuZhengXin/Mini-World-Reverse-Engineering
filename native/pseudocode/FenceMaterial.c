// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: FenceMaterial

//======================================================================
// FenceMaterial::canBlocksMovement(World *,WCoord const&)
// address: 0x002C1356   size: 0x4 (4 bytes)
//======================================================================
int FenceMaterial::canBlocksMovement()
{
  return 1;
}


//======================================================================
// FenceMaterial::~FenceMaterial()
// address: 0x002C1378   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN13FenceMaterialD1Ev'
void __fastcall FenceMaterial::~FenceMaterial(FenceMaterial *this)
{
  *(_DWORD *)this = &off_460FA8;
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// FenceMaterial::~FenceMaterial()
// address: 0x002C1394   size: 0x12 (18 bytes)
//======================================================================
void __fastcall FenceMaterial::~FenceMaterial(FenceMaterial *this)
{
  FenceMaterial::~FenceMaterial(this);
  operator delete(this);
}


//======================================================================
// FenceMaterial::newObject(void)
// address: 0x002C1D1C   size: 0x1C (28 bytes)
//======================================================================
ModelBlockMaterial *__fastcall FenceMaterial::newObject(FenceMaterial *this)
{
  ModelBlockMaterial *v1; // r4

  v1 = (ModelBlockMaterial *)operator new(0x3Cu);
  ModelBlockMaterial::ModelBlockMaterial(v1);
  *(_DWORD *)v1 = &off_460FA8;
  return v1;
}


//======================================================================
// FenceMaterial::singleNeedCross(void)
// address: 0x002DA810   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FenceMaterial::singleNeedCross(FenceMaterial *this)
{
  return 0;
}


//======================================================================
// FenceMaterial::getGeomName(void)
// address: 0x002DA814   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall FenceMaterial::getGeomName(FenceMaterial *this)
{
  return "fence";
}


//======================================================================
// FenceMaterial::getProtoBlockGeomID(int *,int *)
// address: 0x002DA820   size: 0x16 (22 bytes)
//======================================================================
int __fastcall FenceMaterial::getProtoBlockGeomID(FenceMaterial *this, int *a2, int *a3)
{
  *a2 = 0;
  *a3 = 2;
  a2[1] = 1;
  a3[1] = 0;
  a2[2] = 1;
  a3[2] = 1;
  return 3;
}


//======================================================================
// FenceMaterial::getBlockGeomID(int *,int *,Section *,WCoord const&)
// address: 0x002DA836   size: 0x64 (100 bytes)
//======================================================================
int __fastcall FenceMaterial::getBlockGeomID(FenceMaterial *this, int *a2, int *a3, Section *a4, const WCoord *a5)
{
  int v8; // r4
  int v9; // r3
  int v10; // r2
  int v11; // r3
  int v12; // r2
  int v14[5]; // [sp+8h] [bp-14h] BYREF

  v8 = 1;
  WallNeighborFlags(v14, this, a4, a5);
  v9 = 0;
  *a2 = 0;
  *a3 = 2;
  do
  {
    if ( v14[v9] > 0 )
    {
      v10 = v8;
      a2[v10] = 1;
      ++v8;
      a3[v10] = v9;
    }
    ++v9;
  }
  while ( v9 != 4 );
  if ( v8 == 1 && (*(int (__fastcall **)(FenceMaterial *))(*(_DWORD *)this + 200))(this) != 0 )
  {
    do
    {
      v11 = v8;
      v12 = v8++ - 1;
      a2[v11] = 1;
      a3[v11] = v12;
    }
    while ( v8 != 5 );
  }
  return v8;
}


//======================================================================
// FenceMaterial::createCollideData(CollisionDetect *,World *,WCoord const&)
// address: 0x002DA89A   size: 0xCA (202 bytes)
//======================================================================
int __fastcall FenceMaterial::createCollideData(FenceMaterial *this, CollisionDetect *a2, World *a3, const WCoord *a4)
{
  _DWORD *Section; // r0
  int (__fastcall *v7)(FenceMaterial *, _DWORD *, _DWORD *); // r6
  int v8; // r1
  int v9; // r2
  int v10; // r7
  int result; // r0
  int v12; // r6
  int v13; // r4
  int v14; // [sp+14h] [bp-88h]
  int v15; // [sp+18h] [bp-84h]
  int v16; // [sp+20h] [bp-7Ch]
  int v18[3]; // [sp+28h] [bp-74h] BYREF
  int v19[3]; // [sp+34h] [bp-68h] BYREF
  _DWORD v20[3]; // [sp+40h] [bp-5Ch] BYREF
  int v21; // [sp+4Ch] [bp-50h] BYREF
  int v22; // [sp+50h] [bp-4Ch]
  int v23; // [sp+54h] [bp-48h]
  _DWORD v24[8]; // [sp+58h] [bp-44h] BYREF
  _DWORD v25[9]; // [sp+78h] [bp-24h] BYREF

  Section = (_DWORD *)World::getSection(a3, a4);
  v7 = *(int (__fastcall **)(FenceMaterial *, _DWORD *, _DWORD *))(*(_DWORD *)this + 192);
  v8 = *((_DWORD *)a4 + 2) - Section[4];
  v9 = Section[2];
  v10 = *(_DWORD *)a4;
  v22 = *((_DWORD *)a4 + 1) - Section[3];
  v23 = v8;
  v21 = v10 - v9;
  result = v7(this, v24, v25);
  v14 = 100 * *(_DWORD *)a4;
  v16 = result;
  v15 = 100 * *((_DWORD *)a4 + 1);
  v12 = 100 * *((_DWORD *)a4 + 2);
  v13 = 0;
  while ( v13 < v16 )
  {
    BlockGeomTemplate::getBoundBox(*((_DWORD **)this + 10), v18, v19, v24[v13], 1.0, v25[v13], 0);
    ++v13;
    v20[0] = v18[0] + v14;
    v20[2] = v12 + v18[2];
    v20[1] = v15 + v18[1];
    v21 = v19[0] + v14;
    v22 = v15 + v19[1] + 60;
    v23 = v12 + v19[2];
    result = CollisionDetect::addObstacle(a2, (const WCoord *)v20, (const WCoord *)&v21);
  }
  return result;
}

