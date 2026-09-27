// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::CSVParser::TableItem

//======================================================================
// Ogre::CSVParser::TableItem::TableItem(char const*)
// address: 0x00142C38   size: 0x4 (4 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9CSVParser9TableItemC1EPKc'
_DWORD *__fastcall Ogre::CSVParser::TableItem::TableItem(_DWORD *this, const char *a2)
{
  *this = a2;
  return this;
}


//======================================================================
// Ogre::CSVParser::TableItem::Bool(void)const
// address: 0x002A965C   size: 0xE (14 bytes)
//======================================================================
bool __fastcall Ogre::CSVParser::TableItem::Bool(const char **this)
{
  return j_atoi(*this) != 0;
}


//======================================================================
// Ogre::CSVParser::TableItem::Short(void)const
// address: 0x002A966A   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::CSVParser::TableItem::Short(const char **this)
{
  return (__int16)j_atoi(*this);
}


//======================================================================
// Ogre::CSVParser::TableItem::Int(void)const
// address: 0x002A9678   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::CSVParser::TableItem::Int(const char **this)
{
  return j_atoi(*this);
}


//======================================================================
// Ogre::CSVParser::TableItem::Float(void)const
// address: 0x002A9682   size: 0x10 (16 bytes)
//======================================================================
float __fastcall Ogre::CSVParser::TableItem::Float(const char **this)
{
  return j_strtod(*this, nullptr);
}

