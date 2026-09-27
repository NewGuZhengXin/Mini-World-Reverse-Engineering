// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BackPackGrid

//======================================================================
// BackPackGrid::getDurationEnchant(void)
// address: 0x002FACE4   size: 0x38 (56 bytes)
//======================================================================
int __fastcall BackPackGrid::getDurationEnchant(BackPackGrid *this)
{
  int i; // r4
  char *EnchantDef; // r0

  for ( i = 0; i < *((_DWORD *)this + 7); ++i )
  {
    EnchantDef = DefManager::getEnchantDef(
                   (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton,
                   *((_DWORD *)this + i + 8));
    if ( EnchantDef != nullptr && *((_DWORD *)EnchantDef + 9) == 8 )
      return (int)*((float *)EnchantDef + 11);
  }
  return 0;
}


//======================================================================
// BackPackGrid::getDuration(void)
// address: 0x002FAD20   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BackPackGrid::getDuration(BackPackGrid *this)
{
  return *((_DWORD *)this + 3);
}


//======================================================================
// BackPackGrid::getMaxDuration(void)
// address: 0x002FAD60   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall BackPackGrid::getMaxDuration(BackPackGrid *this)
{
  int *v1; // r2
  _DWORD *result; // r0
  int v4; // r5

  v1 = *((int **)this + 1);
  if ( v1 == nullptr )
    return nullptr;
  result = DefDataTable<ToolDef>::GetRecord(Ogre::Singleton<DefManager>::ms_Singleton + 472, *v1);
  if ( result != nullptr )
  {
    v4 = result[15];
    return (_DWORD *)((BackPackGrid::getDurationEnchant(this) + 100) * v4 / 100);
  }
  return result;
}


//======================================================================
// BackPackGrid::onEnchantChange(int)
// address: 0x002FAD9C   size: 0x54 (84 bytes)
//======================================================================
int **__fastcall BackPackGrid::onEnchantChange(int **this, int a2)
{
  int *v2; // r2
  BackPackGrid *v3; // r4
  int v5; // r3

  v2 = *(this + 1);
  v3 = (BackPackGrid *)this;
  if ( v2 != nullptr )
  {
    this = (int **)DefDataTable<ToolDef>::GetRecord(Ogre::Singleton<DefManager>::ms_Singleton + 472, *v2);
    if ( this != nullptr )
    {
      *((_DWORD *)v3 + 3) += (int)*(this + 15) * (BackPackGrid::getDurationEnchant(v3) - a2) / 100;
      this = (int **)BackPackGrid::getMaxDuration(v3);
      v5 = *((_DWORD *)v3 + 3);
      if ( v5 <= 0 )
      {
        this = (int **)(&dword_0 + 1);
      }
      else if ( (int)this > v5 )
      {
        this = *((int ***)v3 + 3);
      }
      *((_DWORD *)v3 + 3) = this;
    }
  }
  return this;
}

