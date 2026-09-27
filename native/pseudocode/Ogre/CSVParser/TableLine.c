// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::CSVParser::TableLine

//======================================================================
// Ogre::CSVParser::TableLine::TableLine(void)
// address: 0x00142C3C   size: 0x2 (2 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9CSVParser9TableLineC1Ev'
void __fastcall Ogre::CSVParser::TableLine::TableLine(Ogre::CSVParser::TableLine *this)
{
  ;
}


//======================================================================
// Ogre::CSVParser::TableLine::operator[](char const*)const
// address: 0x002A9692   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::CSVParser::TableLine::operator[](int a1, char *a2, int a3)
{
  const char *String; // r0
  _DWORD v5[2]; // [sp+4h] [bp-8h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  String = (const char *)Ogre::CSVParser::GetString(*(Ogre::CSVParser **)a1, *(_DWORD *)(a1 + 4), a2);
  Ogre::CSVParser::TableItem::TableItem(v5, String);
  return v5[0];
}

