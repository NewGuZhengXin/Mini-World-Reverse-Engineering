// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockEnchantTable

//======================================================================
// BlockEnchantTable::getGeomName(void)
// address: 0x0029D124   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall BlockEnchantTable::getGeomName(BlockEnchantTable *this)
{
  return "enchanttable";
}


//======================================================================
// BlockEnchantTable::~BlockEnchantTable()
// address: 0x0029D130   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN17BlockEnchantTableD1Ev'
void __fastcall BlockEnchantTable::~BlockEnchantTable(BlockEnchantTable *this)
{
  *(_DWORD *)this = &off_45C430;
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// BlockEnchantTable::~BlockEnchantTable()
// address: 0x0029D14C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockEnchantTable::~BlockEnchantTable(BlockEnchantTable *this)
{
  BlockEnchantTable::~BlockEnchantTable(this);
  operator delete(this);
}


//======================================================================
// BlockEnchantTable::randomDisplayTick(ClientWorld *,WCoord const&)
// address: 0x0029D160   size: 0x4E (78 bytes)
//======================================================================
int __fastcall BlockEnchantTable::randomDisplayTick(BlockEnchantTable *this, ClientWorld *a2, const WCoord *a3)
{
  int v4; // r4
  int v5; // r1
  int v6; // r2
  EffectParticle *v7; // r4
  _DWORD v9[3]; // [sp+Ch] [bp-Ch] BYREF

  v4 = *((_DWORD *)a3 + 2);
  v5 = *((_DWORD *)a3 + 1);
  v6 = *(_DWORD *)a3;
  v9[1] = 100 * v5;
  v9[0] = 100 * v6 + 50;
  v9[2] = 100 * v4 + 50;
  v7 = (EffectParticle *)operator new(0x14u);
  EffectParticle::EffectParticle(v7, a2, (Ogre::FixedString *)"particles/item_833.ent", (const WCoord *)v9, 20);
  return EffectManager::addEffect((EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton, v7);
}


//======================================================================
// BlockEnchantTable::BlockEnchantTable(void)
// address: 0x0029D1C0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN17BlockEnchantTableC1Ev'
void __fastcall BlockEnchantTable::BlockEnchantTable(BlockEnchantTable *this)
{
  ModelBlockMaterial::ModelBlockMaterial(this);
  *(_DWORD *)this = &off_45C430;
}


//======================================================================
// BlockEnchantTable::newObject(void)
// address: 0x002C143E   size: 0x12 (18 bytes)
//======================================================================
BlockEnchantTable *__fastcall BlockEnchantTable::newObject(BlockEnchantTable *this)
{
  BlockEnchantTable *v1; // r4

  v1 = (BlockEnchantTable *)operator new(0x3Cu);
  BlockEnchantTable::BlockEnchantTable(v1);
  return v1;
}

