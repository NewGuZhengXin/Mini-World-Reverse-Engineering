// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockCake

//======================================================================
// BlockCake::newObject(void)
// address: 0x002C1422   size: 0x12 (18 bytes)
//======================================================================
BlockCake *__fastcall BlockCake::newObject(BlockCake *this)
{
  BlockCake *v1; // r4

  v1 = (BlockCake *)operator new(0x3Cu);
  BlockCake::BlockCake(v1);
  return v1;
}


//======================================================================
// BlockCake::getGeomName(void)
// address: 0x002EA37C   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall BlockCake::getGeomName(BlockCake *this)
{
  return "cake";
}


//======================================================================
// BlockCake::getProtoBlockGeomID(int *,int *)
// address: 0x002EA388   size: 0xC (12 bytes)
//======================================================================
int __fastcall BlockCake::getProtoBlockGeomID(BlockCake *this, int *a2, int *a3)
{
  *a2 = 0;
  *a3 = 2;
  return 1;
}


//======================================================================
// BlockCake::~BlockCake()
// address: 0x002EA394   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN9BlockCakeD1Ev'
void __fastcall BlockCake::~BlockCake(BlockCake *this)
{
  *(_DWORD *)this = &off_461DA0;
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// BlockCake::~BlockCake()
// address: 0x002EA3B0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockCake::~BlockCake(BlockCake *this)
{
  BlockCake::~BlockCake(this);
  operator delete(this);
}


//======================================================================
// BlockCake::onBlockActivated(World *,WCoord const&,DirectionType,ClientPlayer *)
// address: 0x002EA3C4   size: 0x6C (108 bytes)
//======================================================================
int __fastcall BlockCake::onBlockActivated(int a1, World *this, WCoord *a3, int a4, int a5)
{
  int v7; // r2
  EffectManager *v8; // r7
  _BYTE v10[16]; // [sp+Ch] [bp-10h] BYREF

  v7 = World::getBlockData(this, a3, (int)a3, a4) + 1;
  if ( v7 <= 5 )
    World::setBlockData(this, a3, v7, 3);
  else
    World::setBlockAll(this, a3, 0, 0, 3);
  PlayerAttrib::eatFood(*(_DWORD *)(a5 + 76), 830, 0);
  v8 = (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton;
  ClientActor::getPosition((ClientActor *)v10);
  EffectManager::playSound(v8, (const WCoord *)v10, "random.burp", 1.0, 1.0, true);
  return 1;
}


//======================================================================
// BlockCake::getBlockGeomID(int *,int *,Section *,WCoord const&)
// address: 0x002EA43C   size: 0x2E (46 bytes)
//======================================================================
int __fastcall BlockCake::getBlockGeomID(int a1, int *a2, _DWORD *a3, int a4, _DWORD *a5)
{
  int v5; // r3
  int result; // r0

  v5 = *(_DWORD *)(a4 + 20);
  if ( v5 == 0
    || (result = 0,
        (unsigned int)(v5 = (int)*(unsigned __int16 *)(2 * ((16 * a5[2]) | (a5[1] << 8) | *a5) + v5) >> 12) <= 5) )
  {
    *a2 = v5;
    *a3 = 2;
    return 1;
  }
  return result;
}


//======================================================================
// BlockCake::BlockCake(void)
// address: 0x002EA46C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN9BlockCakeC2Ev'
void __fastcall BlockCake::BlockCake(BlockCake *this)
{
  ModelBlockMaterial::ModelBlockMaterial(this);
  *(_DWORD *)this = &off_461DA0;
}

