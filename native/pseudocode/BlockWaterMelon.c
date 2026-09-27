// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockWaterMelon

//======================================================================
// BlockWaterMelon::~BlockWaterMelon()
// address: 0x002BD940   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN15BlockWaterMelonD1Ev'
void __fastcall BlockWaterMelon::~BlockWaterMelon(BlockWaterMelon *this)
{
  *(_DWORD *)this = &off_45EB88;
  LogBlockMaterial::~LogBlockMaterial(this);
}


//======================================================================
// BlockWaterMelon::~BlockWaterMelon()
// address: 0x002BD95C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockWaterMelon::~BlockWaterMelon(BlockWaterMelon *this)
{
  BlockWaterMelon::~BlockWaterMelon(this);
  operator delete(this);
}


//======================================================================
// BlockWaterMelon::dropBlockAsItem(World *,WCoord const&,int,BLOCK_MINE_TYPE,float)
// address: 0x002BD99E   size: 0x44 (68 bytes)
//======================================================================
int __fastcall BlockWaterMelon::dropBlockAsItem(
        BlockMaterial *a1,
        World *a2,
        const WCoord *a3,
        int a4,
        float a5,
        float a6)
{
  int result; // r0
  int v10; // r4
  int v11; // [sp+Ch] [bp-8h]

  result = GenRandomFloat() > a6;
  v10 = result;
  if ( result == 0 )
  {
    result = GenRandomInt(3, 7);
    v11 = result;
    while ( v10 < v11 )
    {
      result = BlockMaterial::doDropItem(a1, a2, a3, *(unsigned __int16 *)(*((_DWORD *)a1 + 9) + 84), 1);
      ++v10;
    }
  }
  return result;
}


//======================================================================
// BlockWaterMelon::newObject(void)
// address: 0x002C179C   size: 0x1C (28 bytes)
//======================================================================
CubeBlockMaterial *__fastcall BlockWaterMelon::newObject(BlockWaterMelon *this)
{
  CubeBlockMaterial *v1; // r4

  v1 = (CubeBlockMaterial *)operator new(0x6Cu);
  CubeBlockMaterial::CubeBlockMaterial(v1);
  *(_DWORD *)v1 = &off_45EB88;
  return v1;
}

