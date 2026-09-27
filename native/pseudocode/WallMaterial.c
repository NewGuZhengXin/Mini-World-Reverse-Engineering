// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WallMaterial

//======================================================================
// WallMaterial::getGeomName(void)
// address: 0x0026B8AC   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall WallMaterial::getGeomName(WallMaterial *this)
{
  return "wall";
}


//======================================================================
// WallMaterial::getProtoBlockGeomID(int *,int *)
// address: 0x0026B8B8   size: 0x16 (22 bytes)
//======================================================================
int __fastcall WallMaterial::getProtoBlockGeomID(WallMaterial *this, int *a2, int *a3)
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
// WallMaterial::~WallMaterial()
// address: 0x0026B8D0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN12WallMaterialD1Ev'
void __fastcall WallMaterial::~WallMaterial(WallMaterial *this)
{
  *(_DWORD *)this = &off_45BF98;
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// WallMaterial::~WallMaterial()
// address: 0x0026B8EC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall WallMaterial::~WallMaterial(WallMaterial *this)
{
  WallMaterial::~WallMaterial(this);
  operator delete(this);
}


//======================================================================
// WallMaterial::getBlockGeomID(int *,int *,Section *,WCoord const&)
// address: 0x0026B980   size: 0x7C (124 bytes)
//======================================================================
int __fastcall WallMaterial::getBlockGeomID(WallMaterial *this, int *a2, int *a3, Section *a4, const WCoord *a5)
{
  int v7; // r3
  int result; // r0
  int v9; // r3
  int v10; // r2
  int v11; // [sp+0h] [bp-14h] BYREF
  int v12; // [sp+4h] [bp-10h]
  int v13; // [sp+8h] [bp-Ch]
  int v14; // [sp+Ch] [bp-8h]

  WallNeighborFlags(&v11, this, a4, a5);
  if ( v11 != 0 )
  {
    if ( v11 > 0 && v12 > 0 && v13 == 0 )
    {
      v7 = v14;
      if ( v14 == 0 )
      {
        *a2 = 2;
        goto LABEL_11;
      }
    }
  }
  else if ( v12 == 0 && v13 > 0 && v14 > 0 )
  {
    v7 = 2;
    *a2 = 2;
LABEL_11:
    *a3 = v7;
    return 1;
  }
  v9 = 0;
  result = 1;
  *a2 = 0;
  *a3 = 2;
  do
  {
    if ( *(&v11 + v9) > 0 )
    {
      v10 = result;
      a2[v10] = 1;
      ++result;
      a3[v10] = v9;
    }
    ++v9;
  }
  while ( v9 != 4 );
  return result;
}


//======================================================================
// WallMaterial::newObject(void)
// address: 0x002C1C98   size: 0x1C (28 bytes)
//======================================================================
ModelBlockMaterial *__fastcall WallMaterial::newObject(WallMaterial *this)
{
  ModelBlockMaterial *v1; // r4

  v1 = (ModelBlockMaterial *)operator new(0x3Cu);
  ModelBlockMaterial::ModelBlockMaterial(v1);
  *(_DWORD *)v1 = &off_45BF98;
  return v1;
}

