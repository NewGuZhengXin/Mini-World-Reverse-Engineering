// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: NetherWartMaterial

//======================================================================
// NetherWartMaterial::newObject(void)
// address: 0x002C1954   size: 0x1C (28 bytes)
//======================================================================
WheatMaterial *__fastcall NetherWartMaterial::newObject(NetherWartMaterial *this)
{
  WheatMaterial *v1; // r4

  v1 = (WheatMaterial *)operator new(0x64u);
  WheatMaterial::WheatMaterial(v1);
  *(_DWORD *)v1 = &off_4616E8;
  return v1;
}


//======================================================================
// NetherWartMaterial::getMaxGrowStage(void)
// address: 0x002E4428   size: 0x4 (4 bytes)
//======================================================================
int __fastcall NetherWartMaterial::getMaxGrowStage(NetherWartMaterial *this)
{
  return 3;
}


//======================================================================
// NetherWartMaterial::getGeomName(void)
// address: 0x002E442C   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall NetherWartMaterial::getGeomName(NetherWartMaterial *this)
{
  return "hurbs";
}


//======================================================================
// NetherWartMaterial::canThisPlantGrowOnThisBlockID(int)
// address: 0x002E4438   size: 0xA (10 bytes)
//======================================================================
bool __fastcall NetherWartMaterial::canThisPlantGrowOnThisBlockID(NetherWartMaterial *this, int a2)
{
  return a2 == 125;
}


//======================================================================
// NetherWartMaterial::canBlockStay(World *,WCoord const&)
// address: 0x002E4444   size: 0x3E (62 bytes)
//======================================================================
int __fastcall NetherWartMaterial::canBlockStay(NetherWartMaterial *this, World *a2, const WCoord *a3)
{
  int (__fastcall *v4)(NetherWartMaterial *, int); // r5
  int v5; // r6
  int v6; // r0
  int v7; // r2
  int BlockID; // r0
  _DWORD v10[4]; // [sp+4h] [bp-10h] BYREF

  v4 = *(int (__fastcall **)(NetherWartMaterial *, int))(*(_DWORD *)this + 188);
  v5 = *((_DWORD *)a3 + 1) + dword_51665C;
  v6 = *((_DWORD *)a3 + 2);
  v7 = *(_DWORD *)a3;
  v10[2] = v6 + dword_516660;
  v10[0] = v7 + dword_516658;
  v10[1] = v5;
  BlockID = World::getBlockID(a2, (const WCoord *)v10, v7, (int)v10);
  return v4(this, BlockID);
}


//======================================================================
// NetherWartMaterial::~NetherWartMaterial()
// address: 0x002E4488   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN18NetherWartMaterialD1Ev'
void __fastcall NetherWartMaterial::~NetherWartMaterial(NetherWartMaterial *this)
{
  *(_DWORD *)this = &off_4616E8;
  WheatMaterial::~WheatMaterial(this);
}


//======================================================================
// NetherWartMaterial::~NetherWartMaterial()
// address: 0x002E44A4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall NetherWartMaterial::~NetherWartMaterial(NetherWartMaterial *this)
{
  NetherWartMaterial::~NetherWartMaterial(this);
  operator delete(this);
}


//======================================================================
// NetherWartMaterial::blockTick(World *,WCoord const&)
// address: 0x002E44B6   size: 0x3E (62 bytes)
//======================================================================
int __fastcall NetherWartMaterial::blockTick(NetherWartMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int BlockData; // r6

  BlockData = World::getBlockData(a2, a3, (int)a3, a4);
  if ( BlockData <= 2 && World::genRandomInt(a2, 0, 9) == 0 )
    World::setBlockData(a2, a3, BlockData + 1, 2);
  return HerbMaterial::blockTick(this, a2, a3);
}

