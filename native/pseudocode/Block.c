// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Block

//======================================================================
// Block::moveCollide(void)const
// address: 0x002D0CEC   size: 0x1A (26 bytes)
//======================================================================
int __fastcall Block::moveCollide(Block *this)
{
  return *(_DWORD *)(DefManager::getBlockDef(
                       (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton,
                       *(_WORD *)this & 0xFFF)
                   + 12);
}


//======================================================================
// Block::clickCollide(void)const
// address: 0x002D0D0C   size: 0x1A (26 bytes)
//======================================================================
int __fastcall Block::clickCollide(Block *this)
{
  return *(_DWORD *)(DefManager::getBlockDef(
                       (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton,
                       *(_WORD *)this & 0xFFF)
                   + 8);
}


//======================================================================
// Block::lightSource(void)const
// address: 0x002D0D2C   size: 0x1A (26 bytes)
//======================================================================
int __fastcall Block::lightSource(Block *this)
{
  return *(_DWORD *)(DefManager::getBlockDef(
                       (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton,
                       *(_WORD *)this & 0xFFF)
                   + 68);
}


//======================================================================
// Block::lightAtten(void)const
// address: 0x002D0D4C   size: 0x1A (26 bytes)
//======================================================================
int __fastcall Block::lightAtten(Block *this)
{
  return *(_DWORD *)(DefManager::getBlockDef(
                       (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton,
                       *(_WORD *)this & 0xFFF)
                   + 64);
}


//======================================================================
// Block::getHeight(void)const
// address: 0x002D0D6C   size: 0x1E (30 bytes)
//======================================================================
float __fastcall Block::getHeight(Block *this)
{
  return (float)*(int *)(DefManager::getBlockDef(
                           (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton,
                           *(_WORD *)this & 0xFFF)
                       + 76);
}


//======================================================================
// Block::placeDir(void)const
// address: 0x002D0D90   size: 0x1A (26 bytes)
//======================================================================
int __fastcall Block::placeDir(Block *this)
{
  return *(_DWORD *)(DefManager::getBlockDef(
                       (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton,
                       *(_WORD *)this & 0xFFF)
                   + 4);
}


//======================================================================
// Block::gravityEffect(void)const
// address: 0x002D0DB0   size: 0x1A (26 bytes)
//======================================================================
int __fastcall Block::gravityEffect(Block *this)
{
  return *(_DWORD *)(DefManager::getBlockDef(
                       (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton,
                       *(_WORD *)this & 0xFFF)
                   + 24);
}


//======================================================================
// Block::clear(void)
// address: 0x002D0DD0   size: 0x6 (6 bytes)
//======================================================================
_WORD *__fastcall Block::clear(_WORD *this)
{
  *this = 0;
  return this;
}


//======================================================================
// Block::setData(int)
// address: 0x002D0DD6   size: 0xE (14 bytes)
//======================================================================
_WORD *__fastcall Block::setData(_WORD *this, __int16 a2)
{
  *this = (a2 << 12) | *this & 0xFFF;
  return this;
}


//======================================================================
// Block::setAll(int,int)
// address: 0x002D0DE4   size: 0x8 (8 bytes)
//======================================================================
_WORD *__fastcall Block::setAll(_WORD *this, __int16 a2, __int16 a3)
{
  *this = a2 | (a3 << 12);
  return this;
}


//======================================================================
// Block::setAllData(int)
// address: 0x002D0DEC   size: 0x4 (4 bytes)
//======================================================================
_WORD *__fastcall Block::setAllData(_WORD *this, __int16 a2)
{
  *this = a2;
  return this;
}

