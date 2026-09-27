// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: DefManager

//======================================================================
// DefManager::getBiomeDef(int,int)
// address: 0x002A9738   size: 0x12 (18 bytes)
//======================================================================
char *__fastcall DefManager::getBiomeDef(DefManager *this, int a2, int a3)
{
  return (char *)this + 3232 * a3 + 32 * a2 + 796;
}


//======================================================================
// DefManager::getEnchantDef(int)
// address: 0x002A974A   size: 0x3E (62 bytes)
//======================================================================
char *__fastcall DefManager::getEnchantDef(DefManager *this, int a2)
{
  char *v2; // r3
  char *v3; // r0
  char *v4; // r2
  char *v5; // r4
  char *result; // r0

  v2 = *((char **)this + 162);
  v3 = (char *)this + 644;
  v4 = v3;
  while ( v2 != nullptr )
  {
    if ( *((_DWORD *)v2 + 4) < a2 )
    {
      v5 = *((char **)v2 + 3);
      v2 = v4;
    }
    else
    {
      v5 = *((char **)v2 + 2);
    }
    v4 = v2;
    v2 = v5;
  }
  if ( v4 == v3 )
    return nullptr;
  result = nullptr;
  if ( a2 >= *((_DWORD *)v4 + 4) )
    return v4 + 20;
  return result;
}


//======================================================================
// DefManager::getCurAccordEnchantsNum(void)
// address: 0x002A9788   size: 0x14 (20 bytes)
//======================================================================
int __fastcall DefManager::getCurAccordEnchantsNum(DefManager *this)
{
  return (*((_DWORD *)this + 185) - *((_DWORD *)this + 184)) >> 2;
}


//======================================================================
// DefManager::getCurAccordEnchantDef(int)
// address: 0x002A979C   size: 0xC (12 bytes)
//======================================================================
int __fastcall DefManager::getCurAccordEnchantDef(DefManager *this, int a2)
{
  return *(_DWORD *)(4 * a2 + *((_DWORD *)this + 184));
}


//======================================================================
// DefManager::getEnchantMentDef(int)
// address: 0x002A97A8   size: 0x3E (62 bytes)
//======================================================================
char *__fastcall DefManager::getEnchantMentDef(DefManager *this, int a2)
{
  char *v2; // r3
  char *v3; // r0
  char *v4; // r2
  char *v5; // r4
  char *result; // r0

  v2 = *((char **)this + 168);
  v3 = (char *)this + 668;
  v4 = v3;
  while ( v2 != nullptr )
  {
    if ( *((_DWORD *)v2 + 4) < a2 )
    {
      v5 = *((char **)v2 + 3);
      v2 = v4;
    }
    else
    {
      v5 = *((char **)v2 + 2);
    }
    v4 = v2;
    v2 = v5;
  }
  if ( v4 == v3 )
    return nullptr;
  result = nullptr;
  if ( a2 >= *((_DWORD *)v4 + 4) )
    return v4 + 20;
  return result;
}


//======================================================================
// DefManager::getBuffDef(int,int)
// address: 0x002A97E6   size: 0x46 (70 bytes)
//======================================================================
char *__fastcall DefManager::getBuffDef(DefManager *this, int a2, int a3)
{
  int v3; // r2
  char *v4; // r3
  char *v5; // r0
  char *v6; // r4
  char *v7; // r1
  char *result; // r0

  v3 = 1000 * a2 + a3;
  v4 = *((char **)this + 144);
  v5 = (char *)this + 572;
  v6 = v5;
  while ( v4 != nullptr )
  {
    if ( *((_DWORD *)v4 + 4) < v3 )
    {
      v7 = *((char **)v4 + 3);
      v4 = v6;
    }
    else
    {
      v7 = *((char **)v4 + 2);
    }
    v6 = v4;
    v4 = v7;
  }
  if ( v6 == v5 )
    return nullptr;
  result = nullptr;
  if ( v3 >= *((_DWORD *)v6 + 4) )
    return v6 + 20;
  return result;
}


//======================================================================
// DefManager::getBiomeDef(int)
// address: 0x002A982C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall DefManager::getBiomeDef(DefManager *this, int a2)
{
  return *(_DWORD *)(4 * a2 + *(_DWORD *)this);
}


//======================================================================
// DefManager::clearRandomNames(void)
// address: 0x002A9834   size: 0x72 (114 bytes)
//======================================================================
void __fastcall DefManager::clearRandomNames(DefManager *this)
{
  unsigned int i; // r5
  int v3; // r3
  unsigned int j; // r5
  int v5; // r3
  unsigned int k; // r5
  int v7; // r3

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 172);
    if ( i >= (*((_DWORD *)this + 173) - v3) >> 2 )
      break;
    j_free(*(void **)(4 * i + v3));
  }
  for ( j = 0; ; ++j )
  {
    v5 = *((_DWORD *)this + 175);
    if ( j >= (*((_DWORD *)this + 176) - v5) >> 2 )
      break;
    j_free(*(void **)(4 * j + v5));
  }
  for ( k = 0; ; ++k )
  {
    v7 = *((_DWORD *)this + 178);
    if ( k >= (*((_DWORD *)this + 179) - v7) >> 2 )
      break;
    j_free(*(void **)(4 * k + v7));
  }
}


//======================================================================
// DefManager::getVoxlPalette(int)
// address: 0x002A98BC   size: 0x26 (38 bytes)
//======================================================================
int __fastcall DefManager::getVoxlPalette(DefManager *this, int a2)
{
  int v2; // r3

  if ( a2 >= 0 && (v2 = *((_DWORD *)this + 181), a2 < (*((_DWORD *)this + 182) - v2) >> 2) )
    return *(_DWORD *)(4 * a2 + v2);
  else
    return 0;
}


//======================================================================
// DefManager::findCrafting(int)
// address: 0x002A98E2   size: 0x2A (42 bytes)
//======================================================================
int __fastcall DefManager::findCrafting(DefManager *this, int a2)
{
  int v3; // r0
  char *v5; // r4

  v3 = *((_DWORD *)this + 127);
  v5 = (char *)this + 500;
  while ( (char *)v3 != v5 )
  {
    if ( a2 == *(_DWORD *)(v3 + 28) )
      return v3 + 20;
    v3 = sub_391DDC(v3);
  }
  return 0;
}


//======================================================================
// DefManager::getRandomName(int)
// address: 0x002A990C   size: 0x7A (122 bytes)
//======================================================================
DefManager *__fastcall DefManager::getRandomName(DefManager *this, int a2, int a3)
{
  unsigned int v6; // r0
  int v7; // r0
  unsigned int v8; // r0
  int v9; // r3

  v6 = j_lrand48();
  sub_3BF0BC(
    (int)this,
    *(char **)(4 * (v6 % ((*(_DWORD *)(a2 + 692) - *(_DWORD *)(a2 + 688)) >> 2)) + *(_DWORD *)(a2 + 688)));
  v7 = j_lrand48();
  if ( a3 != 1 && (a3 == 2 || v7 % 2 != 0) )
  {
    v8 = j_lrand48();
    v9 = 178;
  }
  else
  {
    v8 = j_lrand48();
    v9 = 175;
  }
  sub_3BE96C(
    (int)this,
    *(char **)(4 * (v8 % ((*(_DWORD *)(a2 + 4 * v9 + 4) - *(_DWORD *)(a2 + 4 * v9)) >> 2)) + *(_DWORD *)(a2 + 4 * v9)));
  return this;
}


//======================================================================
// DefManager::getBlockDef(int)
// address: 0x002A9994   size: 0xC (12 bytes)
//======================================================================
int __fastcall DefManager::getBlockDef(DefManager *this, int a2)
{
  return *(_DWORD *)(4 * a2 + *((_DWORD *)this + 105));
}


//======================================================================
// DefManager::getFoodDef(int)
// address: 0x002A99E0   size: 0x3E (62 bytes)
//======================================================================
char *__fastcall DefManager::getFoodDef(DefManager *this, int a2)
{
  char *v2; // r3
  char *v3; // r0
  char *v4; // r2
  char *v5; // r4
  char *result; // r0

  v2 = *((char **)this + 138);
  v3 = (char *)this + 548;
  v4 = v3;
  while ( v2 != nullptr )
  {
    if ( *((_DWORD *)v2 + 4) < a2 )
    {
      v5 = *((char **)v2 + 3);
      v2 = v4;
    }
    else
    {
      v5 = *((char **)v2 + 2);
    }
    v4 = v2;
    v2 = v5;
  }
  if ( v4 == v3 )
    return nullptr;
  result = nullptr;
  if ( a2 >= *((_DWORD *)v4 + 4) )
    return v4 + 20;
  return result;
}


//======================================================================
// DefManager::getAchievementDef(int)
// address: 0x002A9A1E   size: 0x3E (62 bytes)
//======================================================================
char *__fastcall DefManager::getAchievementDef(DefManager *this, int a2)
{
  char *v2; // r3
  char *v3; // r0
  char *v4; // r2
  char *v5; // r4
  char *result; // r0

  v2 = *((char **)this + 156);
  v3 = (char *)this + 620;
  v4 = v3;
  while ( v2 != nullptr )
  {
    if ( *((_DWORD *)v2 + 4) < a2 )
    {
      v5 = *((char **)v2 + 3);
      v2 = v4;
    }
    else
    {
      v5 = *((char **)v2 + 2);
    }
    v4 = v2;
    v2 = v5;
  }
  if ( v4 == v3 )
    return nullptr;
  result = nullptr;
  if ( a2 >= *((_DWORD *)v4 + 4) )
    return v4 + 20;
  return result;
}


//======================================================================
// DefManager::getAchievementDefNum(void)
// address: 0x002A9A5C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall DefManager::getAchievementDefNum(DefManager *this)
{
  return *((_DWORD *)this + 159);
}


//======================================================================
// DefManager::getTreeDefID(char const*)
// address: 0x002A9A64   size: 0x3E (62 bytes)
//======================================================================
int __fastcall DefManager::getTreeDefID(DefManager *this, const char *a2)
{
  int v2; // r3
  int v4; // r4
  char *v5; // r6

  v2 = 0;
  if ( *a2 != 0 )
  {
    v4 = *((_DWORD *)this + 112);
    v5 = (char *)this + 440;
    while ( (char *)v4 != v5 )
    {
      if ( j_strcmp(a2, (const char *)(v4 + 24)) == 0 )
        return *(_DWORD *)(v4 + 20);
      v4 = sub_391DDC(v4);
    }
    return 0;
  }
  return v2;
}


//======================================================================
// DefManager::getTreeDef(int)
// address: 0x002A9AA2   size: 0x3C (60 bytes)
//======================================================================
char *__fastcall DefManager::getTreeDef(DefManager *this, int a2)
{
  char *v2; // r3
  char *v3; // r0
  char *v4; // r2
  char *v5; // r4
  char *result; // r0

  v2 = *((char **)this + 111);
  v3 = (char *)this + 440;
  v4 = v3;
  while ( v2 != nullptr )
  {
    if ( *((_DWORD *)v2 + 4) < a2 )
    {
      v5 = *((char **)v2 + 3);
      v2 = v4;
    }
    else
    {
      v5 = *((char **)v2 + 2);
    }
    v4 = v2;
    v2 = v5;
  }
  if ( v4 == v3 )
    return nullptr;
  result = nullptr;
  if ( a2 >= *((_DWORD *)v4 + 4) )
    return v4 + 20;
  return result;
}


//======================================================================
// DefManager::getItemDef(int)
// address: 0x002A9ADE   size: 0xC (12 bytes)
//======================================================================
int __fastcall DefManager::getItemDef(DefManager *this, int a2)
{
  return *(_DWORD *)(4 * a2 + *((_DWORD *)this + 115));
}


//======================================================================
// DefManager::findCrafting(int,int,int const*,int const*,int &)
// address: 0x002A9AEC   size: 0x144 (324 bytes)
//======================================================================
int __fastcall DefManager::findCrafting(DefManager *this, int a2, int a3, const int *a4, const int *a5, int *a6)
{
  int i; // r4
  _DWORD *v7; // r7
  unsigned int v8; // r3
  int v9; // r2
  int v10; // r3
  int result; // r0
  int v12; // [sp+Ch] [bp-40h]
  int ItemDef; // [sp+10h] [bp-3Ch]
  int v14; // [sp+14h] [bp-38h]
  int j; // [sp+18h] [bp-34h]
  const int *v16; // [sp+1Ch] [bp-30h]
  int v18; // [sp+24h] [bp-28h]
  int v19; // [sp+28h] [bp-24h]
  int v20; // [sp+2Ch] [bp-20h]
  const int *v23; // [sp+40h] [bp-Ch]

  *a6 = 0;
  for ( i = *((_DWORD *)this + 127); ; i = sub_391DDC(i) )
  {
    if ( (DefManager *)i == (DefManager *)((char *)this + 500) )
      return 0;
    if ( *(_DWORD *)(i + 48) == a2 && *(_DWORD *)(i + 52) == a3 )
      break;
LABEL_25:
    ;
  }
  v16 = a5;
  v12 = 0;
  v18 = 0;
  v20 = 10000000;
  while ( 1 )
  {
    result = i + 20;
    if ( v18 >= a3 )
      break;
    v23 = &a4[v12];
    v7 = (_DWORD *)(result + 4 * (v12 + 18) + 4);
    for ( j = 0; j < a2; ++j )
    {
      v14 = *(v7 - 9);
      v19 = v23[j];
      if ( v14 != 0 )
      {
        if ( *v7 > v16[j] )
          goto LABEL_25;
        ItemDef = DefManager::getItemDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, v14);
        if ( ItemDef == 0 )
        {
          Ogre::LogSetCurParam(
            (int)"D:/work/oworldsrc/client/iworld/defmanager.cpp",
            (const char *)&stru_5B8.st_shndx,
            8,
            v8);
          Ogre::LogMessage((Ogre *)&unk_420E20, *(const char **)(i + 20), v14);
          goto LABEL_25;
        }
        if ( *(int *)(ItemDef + 452) <= 0 )
        {
          v9 = v19;
          v10 = v14;
        }
        else
        {
          v9 = *(_DWORD *)(DefManager::getItemDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, v19) + 452);
          v10 = *(_DWORD *)(ItemDef + 452);
        }
        if ( v9 != v10 )
          goto LABEL_25;
        if ( v20 > v16[j] / *v7 )
          v20 = v16[j] / *v7;
      }
      else if ( v23[j] != 0 )
      {
        goto LABEL_25;
      }
      ++v7;
    }
    ++v18;
    v12 += a2;
    v16 += a2;
  }
  *a6 = v20;
  return result;
}


//======================================================================
// DefManager::getItemNum(void)
// address: 0x002A9C44   size: 0x14 (20 bytes)
//======================================================================
int __fastcall DefManager::getItemNum(DefManager *this)
{
  return (*((_DWORD *)this + 116) - *((_DWORD *)this + 115)) >> 2;
}


//======================================================================
// DefManager::getFurnaceDef(int)
// address: 0x002A9C58   size: 0x3E (62 bytes)
//======================================================================
char *__fastcall DefManager::getFurnaceDef(DefManager *this, int a2)
{
  char *v2; // r3
  char *v3; // r0
  char *v4; // r2
  char *v5; // r4
  char *result; // r0

  v2 = *((char **)this + 150);
  v3 = (char *)this + 596;
  v4 = v3;
  while ( v2 != nullptr )
  {
    if ( *((_DWORD *)v2 + 4) < a2 )
    {
      v5 = *((char **)v2 + 3);
      v2 = v4;
    }
    else
    {
      v5 = *((char **)v2 + 2);
    }
    v4 = v2;
    v2 = v5;
  }
  if ( v4 == v3 )
    return nullptr;
  result = nullptr;
  if ( a2 >= *((_DWORD *)v4 + 4) )
    return v4 + 20;
  return result;
}


//======================================================================
// DefManager::getToolDef(int)
// address: 0x002A9C96   size: 0x3C (60 bytes)
//======================================================================
char *__fastcall DefManager::getToolDef(DefManager *this, int a2)
{
  char *v2; // r3
  char *v3; // r0
  char *v4; // r2
  char *v5; // r4
  char *result; // r0

  v2 = *((char **)this + 120);
  v3 = (char *)this + 476;
  v4 = v3;
  while ( v2 != nullptr )
  {
    if ( *((_DWORD *)v2 + 4) < a2 )
    {
      v5 = *((char **)v2 + 3);
      v2 = v4;
    }
    else
    {
      v5 = *((char **)v2 + 2);
    }
    v4 = v2;
    v2 = v5;
  }
  if ( v4 == v3 )
    return nullptr;
  result = nullptr;
  if ( a2 >= *((_DWORD *)v4 + 4) )
    return v4 + 20;
  return result;
}


//======================================================================
// DefManager::getStringDef(int)
// address: 0x002A9CD4   size: 0x5A (90 bytes)
//======================================================================
void *__fastcall DefManager::getStringDef(DefManager *this, int a2)
{
  _DWORD *v2; // r2
  _DWORD *v3; // r3
  _DWORD *v4; // r5

  v2 = *((_DWORD **)this + 189);
  v3 = (_DWORD *)((char *)this + 752);
  while ( v2 != nullptr )
  {
    if ( v2[4] < a2 )
    {
      v4 = (_DWORD *)v2[3];
      v2 = v3;
    }
    else
    {
      v4 = (_DWORD *)v2[2];
    }
    v3 = v2;
    v2 = v4;
  }
  if ( v3 == (_DWORD *)((char *)this + 752) )
    return &unk_3FB8EA;
  if ( a2 < v3[4] )
    return &unk_3FB8EA;
  if ( v3 == (_DWORD *)-20 )
    return &unk_3FB8EA;
  if ( *((_DWORD *)this + 81807) == 1 )
    return (void *)v3[7];
  return (void *)v3[6];
}


//======================================================================
// DefManager::clear(void)
// address: 0x002A9E58   size: 0xE2 (226 bytes)
//======================================================================
void __fastcall DefManager::clear(DefManager *this)
{
  unsigned int v2; // r5
  int v3; // r3
  unsigned int v4; // r5
  int v5; // r3
  unsigned int i; // r5
  int v7; // r3

  DefManager::clearRandomNames(this);
  std::_Rb_tree<int,std::pair<int const,TreeDef>,std::_Select1st<std::pair<int const,TreeDef>>,std::less<int>,std::allocator<std::pair<int const,TreeDef>>>::_M_erase(
    (int)this + 436,
    *((_DWORD **)this + 111));
  *((_DWORD *)this + 112) = (char *)this + 440;
  v2 = 0;
  *((_DWORD *)this + 111) = 0;
  *((_DWORD *)this + 113) = (char *)this + 440;
  *((_DWORD *)this + 114) = 0;
  std::_Rb_tree<int,std::pair<int const,OreDef>,std::_Select1st<std::pair<int const,OreDef>>,std::less<int>,std::allocator<std::pair<int const,OreDef>>>::_M_erase(
    (int)this + 396,
    *((_DWORD **)this + 101));
  *((_DWORD *)this + 102) = (char *)this + 400;
  *((_DWORD *)this + 101) = 0;
  *((_DWORD *)this + 103) = (char *)this + 400;
  *((_DWORD *)this + 104) = 0;
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 105);
    if ( v2 >= (*((_DWORD *)this + 106) - v3) >> 2 )
      break;
    operator delete(*(void **)(4 * v2++ + v3));
  }
  *((_DWORD *)this + 106) = v3;
  Ogre::DeletePointerArray<BiomeDef>((int *)this);
  Ogre::DeletePointerArray<ItemDef>((int *)this + 115);
  v4 = 0;
  *((_DWORD *)this + 108) = 0;
  while ( 1 )
  {
    v5 = *((_DWORD *)this + 181);
    if ( v4 >= (*((_DWORD *)this + 182) - v5) >> 2 )
      break;
    operator delete(*(void **)(4 * v4++ + v5));
  }
  for ( i = 0; ; ++i )
  {
    v7 = *((_DWORD *)this + 184);
    if ( i >= (*((_DWORD *)this + 185) - v7) >> 2 )
      break;
    operator delete(*(void **)(4 * i + v7));
  }
}


//======================================================================
// DefManager::~DefManager()
// address: 0x002AA09C   size: 0x146 (326 bytes)
//======================================================================
// Alternative name is '_ZN10DefManagerD1Ev'
void __fastcall DefManager::~DefManager(void **this)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0

  DefManager::clear((DefManager *)this);
  std::_Rb_tree<int,std::pair<int const,ChestDef>,std::_Select1st<std::pair<int const,ChestDef>>,std::less<int>,std::allocator<std::pair<int const,ChestDef>>>::_M_erase(
    (int)(this + 193),
    *(this + 195));
  std::_Rb_tree<int,std::pair<int const,StringDef>,std::_Select1st<std::pair<int const,StringDef>>,std::less<int>,std::allocator<std::pair<int const,StringDef>>>::_M_erase(
    (int)(this + 187),
    *(this + 189));
  v2 = *(this + 184);
  if ( v2 != nullptr )
    operator delete(v2);
  v3 = *(this + 181);
  if ( v3 != nullptr )
    operator delete(v3);
  std::_Vector_base<char *>::~_Vector_base(this + 178);
  std::_Vector_base<char *>::~_Vector_base(this + 175);
  std::_Vector_base<char *>::~_Vector_base(this + 172);
  std::_Rb_tree<int,std::pair<int const,EnchantMentDef>,std::_Select1st<std::pair<int const,EnchantMentDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantMentDef>>>::_M_erase(
    (int)(this + 166),
    *(this + 168));
  std::_Rb_tree<int,std::pair<int const,EnchantDef>,std::_Select1st<std::pair<int const,EnchantDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantDef>>>::_M_erase(
    (int)(this + 160),
    *(this + 162));
  std::_Rb_tree<int,std::pair<int const,AchievementDef>,std::_Select1st<std::pair<int const,AchievementDef>>,std::less<int>,std::allocator<std::pair<int const,AchievementDef>>>::_M_erase(
    (int)(this + 154),
    *(this + 156));
  std::_Rb_tree<int,std::pair<int const,FurnaceDef>,std::_Select1st<std::pair<int const,FurnaceDef>>,std::less<int>,std::allocator<std::pair<int const,FurnaceDef>>>::_M_erase(
    (int)(this + 148),
    *(this + 150));
  std::_Rb_tree<int,std::pair<int const,BuffDef>,std::_Select1st<std::pair<int const,BuffDef>>,std::less<int>,std::allocator<std::pair<int const,BuffDef>>>::_M_erase(
    (int)(this + 142),
    *(this + 144));
  std::_Rb_tree<int,std::pair<int const,FoodDef>,std::_Select1st<std::pair<int const,FoodDef>>,std::less<int>,std::allocator<std::pair<int const,FoodDef>>>::_M_erase(
    (int)(this + 136),
    *(this + 138));
  std::_Rb_tree<int,std::pair<int const,MonsterDef>,std::_Select1st<std::pair<int const,MonsterDef>>,std::less<int>,std::allocator<std::pair<int const,MonsterDef>>>::_M_erase(
    (int)(this + 130),
    *(this + 132));
  std::_Rb_tree<int,std::pair<int const,CraftingDef>,std::_Select1st<std::pair<int const,CraftingDef>>,std::less<int>,std::allocator<std::pair<int const,CraftingDef>>>::_M_erase(
    (int)(this + 124),
    *(this + 126));
  std::_Rb_tree<int,std::pair<int const,ToolDef>,std::_Select1st<std::pair<int const,ToolDef>>,std::less<int>,std::allocator<std::pair<int const,ToolDef>>>::_M_erase(
    (int)(this + 118),
    *(this + 120));
  v4 = *(this + 115);
  if ( v4 != nullptr )
    operator delete(v4);
  std::_Rb_tree<int,std::pair<int const,TreeDef>,std::_Select1st<std::pair<int const,TreeDef>>,std::less<int>,std::allocator<std::pair<int const,TreeDef>>>::_M_erase(
    (int)(this + 109),
    *(this + 111));
  v5 = *(this + 105);
  if ( v5 != nullptr )
    operator delete(v5);
  std::_Rb_tree<int,std::pair<int const,OreDef>,std::_Select1st<std::pair<int const,OreDef>>,std::less<int>,std::allocator<std::pair<int const,OreDef>>>::_M_erase(
    (int)(this + 99),
    *(this + 101));
  if ( *this != nullptr )
    operator delete(*this);
  Ogre::Singleton<DefManager>::ms_Singleton = 0;
}


//======================================================================
// DefManager::DefManager(void)
// address: 0x002AA1E8   size: 0x212 (530 bytes)
//======================================================================
// Alternative name is '_ZN10DefManagerC1Ev'
void __fastcall DefManager::DefManager(DefManager *this)
{
  char *v1; // r6
  time_t v3; // r0
  _DWORD *v4; // [sp+4h] [bp-20h]
  time_t timer; // [sp+1Ch] [bp-8h] BYREF

  Ogre::Singleton<DefManager>::ms_Singleton = (int)this;
  v1 = (char *)this + 400;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v4 = (_DWORD *)((char *)this + 396);
  j_memset((char *)this + 400, 0, 0x10u);
  v4[5] = 0;
  v4[3] = v1;
  v4[4] = v1;
  *((_DWORD *)this + 105) = 0;
  *((_DWORD *)this + 106) = 0;
  *((_DWORD *)this + 107) = 0;
  j_memset((char *)this + 440, 0, 0x10u);
  *((_DWORD *)this + 114) = 0;
  *((_DWORD *)this + 112) = (char *)this + 440;
  *((_DWORD *)this + 113) = (char *)this + 440;
  *((_DWORD *)this + 115) = 0;
  *((_DWORD *)this + 116) = 0;
  *((_DWORD *)this + 117) = 0;
  j_memset((char *)this + 476, 0, 0x10u);
  *((_DWORD *)this + 123) = 0;
  *((_DWORD *)this + 121) = (char *)this + 476;
  *((_DWORD *)this + 122) = (char *)this + 476;
  j_memset((char *)this + 500, 0, 0x10u);
  *((_DWORD *)this + 129) = 0;
  *((_DWORD *)this + 127) = (char *)this + 500;
  *((_DWORD *)this + 128) = (char *)this + 500;
  j_memset((char *)this + 524, 0, 0x10u);
  *((_DWORD *)this + 135) = 0;
  *((_DWORD *)this + 133) = (char *)this + 524;
  *((_DWORD *)this + 134) = (char *)this + 524;
  j_memset((char *)this + 548, 0, 0x10u);
  *((_DWORD *)this + 139) = (char *)this + 548;
  *((_DWORD *)this + 140) = (char *)this + 548;
  *((_DWORD *)this + 141) = 0;
  j_memset((char *)this + 572, 0, 0x10u);
  *((_DWORD *)this + 145) = (char *)this + 572;
  *((_DWORD *)this + 146) = (char *)this + 572;
  *((_DWORD *)this + 147) = 0;
  j_memset((char *)this + 596, 0, 0x10u);
  *((_DWORD *)this + 151) = (char *)this + 596;
  *((_DWORD *)this + 152) = (char *)this + 596;
  *((_DWORD *)this + 153) = 0;
  j_memset((char *)this + 620, 0, 0x10u);
  *((_DWORD *)this + 157) = (char *)this + 620;
  *((_DWORD *)this + 158) = (char *)this + 620;
  *((_DWORD *)this + 159) = 0;
  j_memset((char *)this + 644, 0, 0x10u);
  *((_DWORD *)this + 163) = (char *)this + 644;
  *((_DWORD *)this + 164) = (char *)this + 644;
  *((_DWORD *)this + 165) = 0;
  j_memset((char *)this + 668, 0, 0x10u);
  *((_DWORD *)this + 171) = 0;
  *((_DWORD *)this + 169) = (char *)this + 668;
  *((_DWORD *)this + 170) = (char *)this + 668;
  *((_DWORD *)this + 172) = 0;
  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  *((_DWORD *)this + 175) = 0;
  *((_DWORD *)this + 176) = 0;
  *((_DWORD *)this + 177) = 0;
  *((_DWORD *)this + 178) = 0;
  *((_DWORD *)this + 179) = 0;
  *((_DWORD *)this + 180) = 0;
  *((_DWORD *)this + 181) = 0;
  *((_DWORD *)this + 182) = 0;
  *((_DWORD *)this + 183) = 0;
  *((_DWORD *)this + 184) = 0;
  *((_DWORD *)this + 185) = 0;
  *((_DWORD *)this + 186) = 0;
  j_memset((char *)this + 752, 0, 0x10u);
  *((_DWORD *)this + 190) = (char *)this + 752;
  *((_DWORD *)this + 191) = (char *)this + 752;
  *((_DWORD *)this + 192) = 0;
  j_memset((char *)this + 776, 0, 0x10u);
  *((_DWORD *)this + 198) = 0;
  *((_DWORD *)this + 196) = (char *)this + 776;
  *((_DWORD *)this + 197) = (char *)this + 776;
  *((_DWORD *)this + 81807) = 0;
  v3 = j_time(&timer);
  j_srand48(v3);
}


//======================================================================
// DefManager::setCurAccordEnchants(int)
// address: 0x002AA5A0   size: 0x6A (106 bytes)
//======================================================================
__int64 __fastcall DefManager::setCurAccordEnchants(__int64 this, int a2)
{
  int i; // r4
  int j; // r6
  _DWORD *v5; // r3
  _DWORD *v6; // r1
  __int64 v8; // [sp+0h] [bp-Ch] BYREF
  int v9; // [sp+8h] [bp-4h]

  v8 = this;
  v9 = a2;
  *(_DWORD *)(this + 740) = *(_DWORD *)(this + 736);
  for ( i = *(_DWORD *)(this + 652); i != (_DWORD)this + 644; i = sub_391DDC(i) )
  {
    for ( j = 0; j != 48; j += 4 )
    {
      if ( *(_DWORD *)(i + j + 344) == HIDWORD(this) )
      {
        v5 = *(_DWORD **)(this + 740);
        v6 = *(_DWORD **)(this + 744);
        HIDWORD(v8) = i + 20;
        if ( v5 == v6 )
        {
          std::vector<EnchantDef *>::_M_emplace_back_aux<EnchantDef *>(this + 736, (_DWORD *)&v8 + 1);
        }
        else
        {
          if ( v5 != nullptr )
            *v5 = i + 20;
          *(_DWORD *)(this + 740) += 4;
        }
      }
    }
  }
  return v8;
}


//======================================================================
// DefManager::getMonsterDef(int)
// address: 0x002AA6F0   size: 0x24 (36 bytes)
//======================================================================
char *__fastcall DefManager::getMonsterDef(DefManager *this, int a2)
{
  DefManager *v3; // r0
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  v3 = (DefManager *)std::_Rb_tree<int,std::pair<int const,MonsterDef>,std::_Select1st<std::pair<int const,MonsterDef>>,std::less<int>,std::allocator<std::pair<int const,MonsterDef>>>::find(
                       (int)this + 520,
                       &v5);
  if ( v3 == (DefManager *)((char *)this + 524) )
    return nullptr;
  else
    return (char *)v3 + 20;
}


//======================================================================
// DefManager::calBiomeMap(void)
// address: 0x002AC08C   size: 0x19C (412 bytes)
//======================================================================
float __fastcall DefManager::calBiomeMap(DefManager *this)
{
  float v2; // r5
  int v3; // r4
  int v4; // r2
  unsigned int v5; // r12
  unsigned int j; // r3
  int v7; // r5
  int v8; // r0
  int v9; // r6
  float v10; // r5
  float v11; // r0
  float result; // r0
  float *v13; // r6
  float *v14; // r6
  int v15; // r0
  __int64 v16; // r0
  float *k; // r5
  int v18; // r6
  int v19; // r4
  int v20; // r4
  int v21; // r5
  _BYTE v23[8]; // [sp+0h] [bp-A4h] BYREF
  float v24; // [sp+8h] [bp-9Ch]
  int i; // [sp+Ch] [bp-98h]
  int v26; // [sp+10h] [bp-94h]
  _DWORD *v27; // [sp+14h] [bp-90h]
  int v28; // [sp+18h] [bp-8Ch]
  char *v29; // [sp+1Ch] [bp-88h]
  _DWORD v30[32]; // [sp+20h] [bp-84h] BYREF
  char v31; // [sp+A0h] [bp-4h] BYREF

  j_memset((char *)this + 796, 0, 0x4FB20u);
  for ( i = 0; i != 101; ++i )
  {
    v28 = i * i;
    v29 = (char *)this + 3232 * i;
    v26 = 100;
    do
    {
      v2 = j_sqrtf((float)(v28 + v26 * v26));
      v3 = v2 >= 100.0;
      if ( v2 < 100.0 )
      {
        v4 = *(_DWORD *)this;
        v5 = (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2;
        for ( j = 1; j < v5; ++j )
        {
          v7 = *(_DWORD *)(v4 + 4 * j);
          if ( v7 != 0 )
          {
            v8 = 2 * v3;
            v30[v8] = v7;
            ++v3;
            v30[v8 + 1] = 1065353216;
            if ( v3 > 14 )
              break;
          }
        }
      }
      else
      {
        v3 = 1;
        v30[0] = **(_DWORD **)this;
        v30[1] = 1065353216;
      }
      v9 = 0;
      v10 = 0.0;
      v24 = COERCE_FLOAT(v30);
      while ( v9 < v3 )
      {
        v11 = v10 + *(float *)&v30[2 * v9++ + 1];
        v10 = v11;
      }
      LODWORD(result) = v10 < 1.0;
      if ( v10 < 1.0 )
      {
        v30[2 * v3] = **(_DWORD **)this;
        v13 = (float *)&v30[2 * v3];
        result = 1.0 - v10;
        ++v3;
        v13[1] = 1.0 - v10;
      }
      v14 = (float *)&v30[2 * v3];
      if ( v14 != (float *)v30 )
      {
        LODWORD(v24) = 8 * v3;
        v15 = j___clzsi2((8 * v3) >> 3);
        std::__introsort_loop<BiomeSortUnit *,int>((int)v30, &v30[2 * v3], 2 * (31 - v15));
        LODWORD(v16) = v30;
        if ( SLODWORD(v24) <= 135 )
        {
          HIDWORD(v16) = &v30[2 * v3];
          LODWORD(result) = std::__insertion_sort<BiomeSortUnit *>(v16);
        }
        else
        {
          HIDWORD(v16) = &v31;
          LODWORD(result) = std::__insertion_sort<BiomeSortUnit *>(v16);
          for ( k = (float *)&v31; k != v14; k += 2 )
            LODWORD(result) = std::__unguarded_linear_insert<BiomeSortUnit *>(k);
        }
      }
      v18 = v3;
      if ( v3 > 4 )
        v18 = 4;
      v19 = 0;
      v24 = 0.0;
      while ( v19 < v18 )
      {
        result = v24 + *(float *)&v30[2 * v19++ + 1];
        v24 = result;
      }
      v20 = 0;
      v21 = (int)&v29[-32 * v26 + 3996];
      v27 = v30;
      while ( v20 < v18 )
      {
        *(_DWORD *)v21 = *(_DWORD *)&v23[8 * v20 + 32];
        result = *(float *)&v30[2 * v20++ + 1] / v24;
        *(float *)(v21 + 16) = result;
        v21 += 4;
      }
    }
    while ( v26-- != 0 );
  }
  return result;
}


//======================================================================
// DefManager::loadRandomNames(char const*)
// address: 0x002AC60C   size: 0xD0 (208 bytes)
//======================================================================
int __fastcall DefManager::loadRandomNames(DefManager *this, char *a2)
{
  int v4; // r2
  int v5; // r5
  int v6; // r0
  int v7; // r2
  int v8; // r0
  int v9; // r2
  int v10; // r0
  int v12; // [sp+8h] [bp-44h]
  int v13; // [sp+Ch] [bp-40h]
  const char *v14; // [sp+10h] [bp-3Ch] BYREF
  char *v15; // [sp+14h] [bp-38h] BYREF
  _BYTE v16[20]; // [sp+18h] [bp-34h] BYREF
  int v17; // [sp+2Ch] [bp-20h]
  int v18; // [sp+38h] [bp-14h]
  int v19; // [sp+40h] [bp-Ch]

  Ogre::CSVParser::CSVParser((Ogre::CSVParser *)v16);
  sub_3BF0BC((int)&v14, a2);
  v12 = Ogre::CSVParser::Load((Ogre::CSVParser *)v16, &v14);
  sub_3BDF80(&v14);
  if ( v12 != 0 )
  {
    v19 = 1;
    v5 = 2;
    v15 = &byte_55FB88;
    v13 = v18;
    while ( v5 < v13 )
    {
      v6 = Ogre::CSVParser::TableLine::operator[](v17 + 8 * v5, "Surname", v4);
      sub_2AA68C(__SPAIR64__(v6, (unsigned int)this + 688));
      v8 = Ogre::CSVParser::TableLine::operator[](v17 + 8 * v5, "Male", v7);
      sub_2AA68C(__SPAIR64__(v8, (unsigned int)this + 700));
      v10 = Ogre::CSVParser::TableLine::operator[](v17 + 8 * v5, "Female", v9);
      sub_2AA68C(__SPAIR64__(v10, (unsigned int)this + 712));
      ++v5;
    }
    sub_3BDF80(&v15);
  }
  Ogre::CSVParser::~CSVParser((Ogre::CSVParser *)v16);
  return v12;
}


//======================================================================
// DefManager::loadBiomeCSV(char const*)
// address: 0x002AC6EC   size: 0x494 (1172 bytes)
//======================================================================
int __fastcall DefManager::loadBiomeCSV(DefManager *this, char *a2)
{
  const char *v3; // r0
  int v4; // r2
  int v5; // r4
  int v6; // r2
  int v7; // r2
  int v8; // r2
  int v9; // r2
  int v10; // r2
  int v11; // r2
  int v12; // r2
  int v13; // r0
  int v14; // r3
  int v15; // r5
  const char *v16; // r4
  int v17; // r7
  int v18; // r4
  const char *v19; // r0
  int v20; // r2
  float v21; // r0
  int v22; // r2
  float v23; // r0
  int v24; // r3
  int v25; // r2
  float v26; // r0
  int v27; // r2
  float v28; // r0
  int v29; // r3
  int v30; // r2
  int v31; // r0
  int v32; // r2
  int v33; // r0
  int v34; // r3
  int v35; // r2
  const char *v36; // r0
  int v37; // r0
  int v38; // r2
  int v39; // r0
  int v40; // r2
  int v41; // r0
  int v42; // r2
  int v43; // r2
  int v44; // r0
  int v45; // r2
  int v46; // r2
  int v47; // r0
  int v48; // r2
  int v49; // r2
  int v50; // r0
  int v51; // r2
  int v52; // r2
  int v53; // r0
  int v54; // r2
  _DWORD *v55; // r1
  int v56; // r0
  unsigned int v57; // r2
  unsigned int v58; // r3
  char *v61; // [sp+Ch] [bp-74h]
  int v62; // [sp+10h] [bp-70h]
  int v63; // [sp+14h] [bp-6Ch]
  const char *v64; // [sp+1Ch] [bp-64h] BYREF
  const char *v65; // [sp+20h] [bp-60h] BYREF
  const char *v66; // [sp+24h] [bp-5Ch] BYREF
  const char *v67; // [sp+28h] [bp-58h] BYREF
  const char *v68; // [sp+2Ch] [bp-54h] BYREF
  const char *v69; // [sp+30h] [bp-50h] BYREF
  const char *v70; // [sp+34h] [bp-4Ch] BYREF
  const char *v71; // [sp+38h] [bp-48h] BYREF
  const char *v72; // [sp+3Ch] [bp-44h] BYREF
  const char *v73; // [sp+40h] [bp-40h] BYREF
  const char *v74; // [sp+44h] [bp-3Ch] BYREF
  const char *v75; // [sp+48h] [bp-38h] BYREF
  const char *v76; // [sp+4Ch] [bp-34h] BYREF
  const char *v77; // [sp+50h] [bp-30h] BYREF
  const char *v78; // [sp+54h] [bp-2Ch] BYREF
  const char *v79; // [sp+58h] [bp-28h] BYREF
  const char *v80; // [sp+5Ch] [bp-24h] BYREF
  const char *v81; // [sp+60h] [bp-20h] BYREF
  const char *v82; // [sp+64h] [bp-1Ch] BYREF
  const char *v83; // [sp+68h] [bp-18h] BYREF
  const char *v84; // [sp+6Ch] [bp-14h] BYREF
  const char *v85; // [sp+70h] [bp-10h] BYREF
  const char *v86; // [sp+74h] [bp-Ch] BYREF
  const char *v87; // [sp+78h] [bp-8h] BYREF
  int v88; // [sp+7Ch] [bp-4h] BYREF
  _BYTE v89[20]; // [sp+80h] [bp+0h] BYREF
  int v90; // [sp+94h] [bp+14h]
  int v91; // [sp+A0h] [bp+20h]
  int v92; // [sp+A8h] [bp+28h]

  Ogre::CSVParser::CSVParser((Ogre::CSVParser *)v89);
  sub_3BF0BC((int)&v64, a2);
  v62 = Ogre::CSVParser::Load((Ogre::CSVParser *)v89, &v64);
  sub_3BDF80(&v64);
  if ( v62 != 0
    && (Ogre::DeletePointerArray<BiomeDef>((int *)this),
        v92 = 1,
        v63 = v91,
        v3 = (const char *)Ogre::CSVParser::TableLine::operator[](v90 + 16, "TypeName", v91),
        j_strcmp(v3, "Times") == 0) )
  {
    v5 = v90 + 16;
    v88 = Ogre::CSVParser::TableLine::operator[](v90 + 16, "ChunkTrees", v4);
    *((_DWORD *)this + 3) = Ogre::CSVParser::TableItem::Int((const char **)&v88);
    sub_2A96AC((char *)this + 16, (char *)this + 48, 8, v5, dword_468AE0, "ChunkGrass");
    sub_2A96AC((char *)this + 80, (char *)this + 208, 32, v5, dword_468AF0, "ChunkFlowers");
    sub_2A96AC((char *)this + 364, (char *)this + 380, 4, v5, dword_468B2C, "ChunkJar");
    v87 = (const char *)Ogre::CSVParser::TableLine::operator[](v5, "ChunkPumpkin", v6);
    *((_DWORD *)this + 84) = Ogre::CSVParser::TableItem::Int(&v87);
    v86 = (const char *)Ogre::CSVParser::TableLine::operator[](v5, "ChunkWatermelon", v7);
    *((_DWORD *)this + 85) = Ogre::CSVParser::TableItem::Int(&v86);
    v85 = (const char *)Ogre::CSVParser::TableLine::operator[](v5, "ChunkDeadBush", v8);
    *((_DWORD *)this + 86) = Ogre::CSVParser::TableItem::Int(&v85);
    v84 = (const char *)Ogre::CSVParser::TableLine::operator[](v5, "ChunkReeds", v9);
    *((_DWORD *)this + 87) = Ogre::CSVParser::TableItem::Int(&v84);
    v83 = (const char *)Ogre::CSVParser::TableLine::operator[](v5, "ChunkCactus", v10);
    *((_DWORD *)this + 88) = Ogre::CSVParser::TableItem::Int(&v83);
    v82 = (const char *)Ogre::CSVParser::TableLine::operator[](v5, "ChunkMushroom", v11);
    *((_DWORD *)this + 89) = Ogre::CSVParser::TableItem::Int(&v82);
    v81 = (const char *)Ogre::CSVParser::TableLine::operator[](v5, "ChunkBigMushroom", v12);
    v13 = Ogre::CSVParser::TableItem::Int(&v81);
    v14 = 3;
    *((_DWORD *)this + 90) = v13;
    while ( 1 )
    {
      v61 = (char *)v14;
      if ( v14 >= v63 )
        break;
      v15 = 8 * v14;
      v16 = (const char *)Ogre::CSVParser::TableLine::operator[](v90 + 8 * v14, "TypeName", v14);
      v17 = 0;
      while ( j_strcmp(v16, off_4536DC[v17]) != 0 )
      {
        if ( ++v17 == 22 )
          goto LABEL_16;
      }
      v18 = operator new(0xBCu);
      v19 = (const char *)Ogre::CSVParser::TableLine::operator[](v90 + v15, "Name", v90);
      MyStringCpy((char *)(v18 + 4), 0x20u, v19);
      *(_DWORD *)v18 = v17;
      v65 = (const char *)Ogre::CSVParser::TableLine::operator[](v90 + v15, "MinHeight", v20);
      v21 = Ogre::CSVParser::TableItem::Float(&v65);
      v22 = v90;
      *(float *)(v18 + 36) = v21;
      v66 = (const char *)Ogre::CSVParser::TableLine::operator[](v22 + v15, "MaxHeight", v22);
      v23 = Ogre::CSVParser::TableItem::Float(&v66);
      v24 = v90;
      *(float *)(v18 + 40) = v23;
      v67 = (const char *)Ogre::CSVParser::TableLine::operator[](v24 + v15, "Heat", v25);
      v26 = Ogre::CSVParser::TableItem::Float(&v67);
      v27 = v90;
      *(float *)(v18 + 44) = v26 / 100.0;
      v68 = (const char *)Ogre::CSVParser::TableLine::operator[](v27 + v15, "Humid", v27);
      v28 = Ogre::CSVParser::TableItem::Float(&v68);
      v29 = v90;
      *(float *)(v18 + 48) = v28 / 100.0;
      v69 = (const char *)Ogre::CSVParser::TableLine::operator[](v29 + v15, "FillBlock", v30);
      v31 = Ogre::CSVParser::TableItem::Int(&v69);
      v32 = v90;
      *(_DWORD *)(v18 + 52) = v31;
      v70 = (const char *)Ogre::CSVParser::TableLine::operator[](v32 + v15, "TopBlock", v32);
      v33 = Ogre::CSVParser::TableItem::Int(&v70);
      v34 = v90;
      *(_DWORD *)(v18 + 56) = v33;
      v36 = (const char *)Ogre::CSVParser::TableLine::operator[](v34 + v15, "WaterColor", v35);
      j_sscanf(v36, "%x", v18 + 60);
      v71 = (const char *)Ogre::CSVParser::TableLine::operator[](v90 + v15, "EnableRain", v90);
      v37 = Ogre::CSVParser::TableItem::Int(&v71);
      *(_BYTE *)(v18 + 64) = (v37 >> 31) - v37 < 0;
      v72 = (const char *)Ogre::CSVParser::TableLine::operator[](v90 + v15, "EnableSnow", v38);
      v39 = Ogre::CSVParser::TableItem::Int(&v72);
      v40 = v90;
      *(_BYTE *)(v18 + 65) = (v39 >> 31) - v39 < 0;
      v73 = (const char *)Ogre::CSVParser::TableLine::operator[](v40 + v15, "ChunkTrees", v40);
      v41 = Ogre::CSVParser::TableItem::Int(&v73);
      v42 = v90;
      *(_DWORD *)(v18 + 68) = v41;
      sub_2A96AC((char *)(v18 + 72), (char *)(v18 + 88), 4, v42 + v15, dword_468AE0, "ChunkGrass");
      sub_2A96AC((char *)(v18 + 104), (char *)(v18 + 120), 4, v90 + v15, dword_468AF0, "ChunkFlowers");
      v74 = (const char *)Ogre::CSVParser::TableLine::operator[](v90 + v15, "ChunkPumpkin", v43);
      v44 = Ogre::CSVParser::TableItem::Int(&v74);
      v45 = v90;
      *(_DWORD *)(v18 + 136) = v44;
      v75 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v15, "ChunkWatermelon", v45);
      *(_DWORD *)(v18 + 140) = Ogre::CSVParser::TableItem::Int(&v75);
      v76 = (const char *)Ogre::CSVParser::TableLine::operator[](v90 + v15, "ChunkDeadBush", v46);
      v47 = Ogre::CSVParser::TableItem::Int(&v76);
      v48 = v90;
      *(_DWORD *)(v18 + 144) = v47;
      v77 = (const char *)Ogre::CSVParser::TableLine::operator[](v48 + v15, "ChunkReeds", v48);
      *(_DWORD *)(v18 + 148) = Ogre::CSVParser::TableItem::Int(&v77);
      v78 = (const char *)Ogre::CSVParser::TableLine::operator[](v90 + v15, "ChunkCactus", v49);
      v50 = Ogre::CSVParser::TableItem::Int(&v78);
      v51 = v90;
      *(_DWORD *)(v18 + 152) = v50;
      v79 = (const char *)Ogre::CSVParser::TableLine::operator[](v51 + v15, "ChunkMushroom", v51);
      *(_DWORD *)(v18 + 156) = Ogre::CSVParser::TableItem::Int(&v79);
      v80 = (const char *)Ogre::CSVParser::TableLine::operator[](v90 + v15, "ChunkBigMushroom", v52);
      v53 = Ogre::CSVParser::TableItem::Int(&v80);
      v54 = v90;
      *(_DWORD *)(v18 + 160) = v53;
      sub_2A96AC((char *)(v18 + 164), (char *)(v18 + 176), 3, v54 + v15, dword_468B2C, "ChunkJar");
      sub_2A99A0(v18, *(_DWORD *)(v18 + 52));
      sub_2A99A0(v18, *(_DWORD *)(v18 + 56));
      v55 = *((_DWORD **)this + 1);
      v56 = *(_DWORD *)this;
      v57 = ((int)v55 - *(_DWORD *)this) >> 2;
      if ( *(_DWORD *)v18 >= (signed int)v57 )
      {
        v58 = *(_DWORD *)v18 + 1;
        v88 = 0;
        if ( v58 <= v57 )
        {
          if ( v58 < v57 )
            *((_DWORD *)this + 1) = v56 + 4 * v58;
        }
        else
        {
          std::vector<BiomeDef *>::_M_fill_insert((int)this, v55, v58 - v57, (void **)&v88);
        }
      }
      *(_DWORD *)(4 * *(_DWORD *)v18 + *(_DWORD *)this) = v18;
LABEL_16:
      v14 = (int)(v61 + 1);
    }
  }
  else
  {
    v62 = 0;
  }
  Ogre::CSVParser::~CSVParser((Ogre::CSVParser *)v89);
  return v62;
}


//======================================================================
// DefManager::loadBlockDefCSV(char const*)
// address: 0x002ACBE8   size: 0x59C (1436 bytes)
//======================================================================
int __fastcall DefManager::loadBlockDefCSV(DefManager *this, char *a2)
{
  int v3; // r4
  _DWORD *v4; // r1
  unsigned int v5; // r3
  int v6; // r2
  int i; // r5
  int v8; // r7
  char *v9; // r4
  int v10; // r2
  int v11; // r0
  int v12; // r3
  int v13; // r2
  int v14; // r2
  int v15; // r2
  int v16; // r2
  int v17; // r0
  int v18; // r5
  int v19; // r2
  int v20; // r0
  int v21; // r1
  int v22; // r2
  float v23; // r0
  int v24; // r2
  float v25; // r0
  int v26; // r3
  int v27; // r2
  int v28; // r0
  int v29; // r5
  int v30; // r2
  int v31; // r0
  int v32; // r1
  int v33; // r2
  int v34; // r0
  int v35; // r2
  int v36; // r0
  int v37; // r3
  int v38; // r2
  int v39; // r0
  int v40; // r5
  int v41; // r2
  int v42; // r0
  int v43; // r1
  int v44; // r2
  int v45; // r0
  int v46; // r2
  int v47; // r0
  int v48; // r3
  int v49; // r2
  int v50; // r5
  int v51; // r2
  __int16 v52; // r0
  int v53; // r2
  __int16 v54; // r0
  int v55; // r5
  int v56; // r2
  __int16 v57; // r0
  int v58; // r1
  int v59; // r2
  int v60; // r0
  int v61; // r2
  int v62; // r0
  int v63; // r3
  int v64; // r2
  int v65; // r0
  int v66; // r5
  int v67; // r2
  int v68; // r0
  int v69; // r1
  int v70; // r2
  const char *v71; // r0
  int v72; // r2
  const char *v73; // r0
  int v74; // r2
  const char *v75; // r0
  int v76; // r2
  const char *v77; // r0
  const char *v78; // r0
  int v79; // r2
  const char *v80; // r0
  const char *v81; // r0
  int v82; // r2
  const char *v83; // r0
  const char *v84; // r0
  _DWORD *v85; // r4
  char *v87; // [sp+4h] [bp-8Ch]
  int v88; // [sp+8h] [bp-88h]
  char *v90; // [sp+Ch] [bp-84h]
  int v91; // [sp+14h] [bp-7Ch]
  int v92; // [sp+18h] [bp-78h]
  const char *v93; // [sp+20h] [bp-70h] BYREF
  const char *v94; // [sp+24h] [bp-6Ch] BYREF
  const char *v95; // [sp+28h] [bp-68h] BYREF
  const char *v96; // [sp+2Ch] [bp-64h] BYREF
  const char *v97; // [sp+30h] [bp-60h] BYREF
  const char *v98; // [sp+34h] [bp-5Ch] BYREF
  const char *v99; // [sp+38h] [bp-58h] BYREF
  const char *v100; // [sp+3Ch] [bp-54h] BYREF
  const char *v101; // [sp+40h] [bp-50h] BYREF
  const char *v102; // [sp+44h] [bp-4Ch] BYREF
  const char *v103; // [sp+48h] [bp-48h] BYREF
  const char *v104; // [sp+4Ch] [bp-44h] BYREF
  const char *v105; // [sp+50h] [bp-40h] BYREF
  const char *v106; // [sp+54h] [bp-3Ch] BYREF
  const char *v107; // [sp+58h] [bp-38h] BYREF
  const char *v108; // [sp+5Ch] [bp-34h] BYREF
  const char *v109; // [sp+60h] [bp-30h] BYREF
  const char *v110; // [sp+64h] [bp-2Ch] BYREF
  const char *v111; // [sp+68h] [bp-28h] BYREF
  const char *v112; // [sp+6Ch] [bp-24h] BYREF
  const char *v113; // [sp+70h] [bp-20h] BYREF
  const char *v114; // [sp+74h] [bp-1Ch] BYREF
  const char *v115; // [sp+78h] [bp-18h] BYREF
  const char *v116; // [sp+7Ch] [bp-14h] BYREF
  const char *v117; // [sp+80h] [bp-10h] BYREF
  const char *v118; // [sp+84h] [bp-Ch] BYREF
  const char *v119; // [sp+88h] [bp-8h] BYREF
  const char *v120; // [sp+8Ch] [bp-4h] BYREF
  int v121; // [sp+90h] [bp+0h] BYREF
  _BYTE v122[20]; // [sp+94h] [bp+4h] BYREF
  int v123; // [sp+A8h] [bp+18h]
  int v124; // [sp+B4h] [bp+24h]
  int v125; // [sp+BCh] [bp+2Ch]
  char s[64]; // [sp+C4h] [bp+34h] BYREF

  Ogre::CSVParser::CSVParser((Ogre::CSVParser *)v122);
  sub_3BF0BC((int)&v93, a2);
  v91 = Ogre::CSVParser::Load((Ogre::CSVParser *)v122, &v93);
  sub_3BDF80(&v93);
  if ( v91 != 0 )
  {
    v3 = *((_DWORD *)this + 105);
    v4 = *((_DWORD **)this + 106);
    v121 = 0;
    v5 = ((int)v4 - v3) >> 2;
    v6 = 4096;
    if ( v5 > 0xFFF )
    {
      if ( v5 != 4096 )
        *((_DWORD *)this + 106) = v3 + 0x4000;
    }
    else
    {
      std::vector<BlockDef *>::_M_fill_insert((int)this + 420, v4, 4096 - v5, (void **)&v121);
    }
    v125 = 1;
    v92 = v124;
    for ( i = 2; ; i = (int)(v90 + 1) )
    {
      v90 = (char *)i;
      if ( i >= v92 )
        break;
      v8 = 8 * i;
      v94 = (const char *)Ogre::CSVParser::TableLine::operator[](v123 + 8 * i, "ID", v6);
      v88 = Ogre::CSVParser::TableItem::Int(&v94);
      if ( v88 != 0 || *(_BYTE *)Ogre::CSVParser::TableLine::operator[](v123 + v8, "ID", v123) != 0 )
      {
        v9 = (char *)operator new(0x174u);
        j_memset(v9, 0, 0x174u);
        if ( v88 > *((_DWORD *)this + 108) )
          *((_DWORD *)this + 108) = v88;
        *(_DWORD *)v9 = v88;
        v95 = (const char *)Ogre::CSVParser::TableLine::operator[](v123 + v8, "PlaceDir", v10);
        *((_DWORD *)v9 + 1) = Ogre::CSVParser::TableItem::Int(&v95);
        v96 = (const char *)Ogre::CSVParser::TableLine::operator[](v123 + v8, "Replaceable", v123);
        v11 = Ogre::CSVParser::TableItem::Int(&v96);
        v12 = v123;
        *((_DWORD *)v9 + 7) = v11;
        v97 = (const char *)Ogre::CSVParser::TableLine::operator[](v12 + v8, "ClickCollide", v13);
        *((_DWORD *)v9 + 2) = Ogre::CSVParser::TableItem::Int(&v97);
        v98 = (const char *)Ogre::CSVParser::TableLine::operator[](v123 + v8, "MoveCollide", v14);
        *((_DWORD *)v9 + 3) = Ogre::CSVParser::TableItem::Int(&v98);
        v99 = (const char *)Ogre::CSVParser::TableLine::operator[](v123 + v8, "BlockFlow", v15);
        *((_DWORD *)v9 + 4) = Ogre::CSVParser::TableItem::Int(&v99);
        v100 = (const char *)Ogre::CSVParser::TableLine::operator[](v123 + v8, "PushFlag", v123);
        *((_DWORD *)v9 + 5) = Ogre::CSVParser::TableItem::Int(&v100);
        v101 = (const char *)Ogre::CSVParser::TableLine::operator[](v123 + v8, "GravityEffect", v16);
        v17 = Ogre::CSVParser::TableItem::Int(&v101);
        v18 = v123;
        *((_DWORD *)v9 + 6) = v17;
        v102 = (const char *)Ogre::CSVParser::TableLine::operator[](v18 + v8, "AntiExplode", v19);
        v20 = Ogre::CSVParser::TableItem::Int(&v102);
        v21 = v123;
        *((_DWORD *)v9 + 8) = v20;
        v103 = (const char *)Ogre::CSVParser::TableLine::operator[](v21 + v8, "Hardness", v22);
        v23 = Ogre::CSVParser::TableItem::Float(&v103);
        v24 = v123;
        *((float *)v9 + 9) = v23;
        v104 = (const char *)Ogre::CSVParser::TableLine::operator[](v24 + v8, "Slipperiness", v24);
        v25 = Ogre::CSVParser::TableItem::Float(&v104);
        v26 = v123;
        *((float *)v9 + 10) = v25;
        v105 = (const char *)Ogre::CSVParser::TableLine::operator[](v26 + v8, "Reborn", v27);
        v28 = Ogre::CSVParser::TableItem::Int(&v105);
        v29 = v123;
        *((_DWORD *)v9 + 11) = v28;
        v106 = (const char *)Ogre::CSVParser::TableLine::operator[](v29 + v8, "BurnSpeed", v30);
        v31 = Ogre::CSVParser::TableItem::Int(&v106);
        v32 = v123;
        *((_DWORD *)v9 + 12) = v31;
        v107 = (const char *)Ogre::CSVParser::TableLine::operator[](v32 + v8, "CatchFire", v33);
        v34 = Ogre::CSVParser::TableItem::Int(&v107);
        v35 = v123;
        *((_DWORD *)v9 + 13) = v34;
        v108 = (const char *)Ogre::CSVParser::TableLine::operator[](v35 + v8, "PowerState", v35);
        v36 = Ogre::CSVParser::TableItem::Int(&v108);
        v37 = v123;
        *((_DWORD *)v9 + 14) = v36;
        v109 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v8, "CoverNeighbor", v38);
        v39 = Ogre::CSVParser::TableItem::Int(&v109);
        v40 = v123;
        *((_DWORD *)v9 + 15) = v39;
        v110 = (const char *)Ogre::CSVParser::TableLine::operator[](v40 + v8, "LightAtten", v41);
        v42 = Ogre::CSVParser::TableItem::Int(&v110);
        v43 = v123;
        *((_DWORD *)v9 + 16) = v42;
        v111 = (const char *)Ogre::CSVParser::TableLine::operator[](v43 + v8, "LightSrc", v44);
        v45 = Ogre::CSVParser::TableItem::Int(&v111);
        v46 = v123;
        *((_DWORD *)v9 + 17) = v45;
        v112 = (const char *)Ogre::CSVParser::TableLine::operator[](v46 + v8, "UseNeighborLight", v46);
        v47 = Ogre::CSVParser::TableItem::Int(&v112);
        v48 = v123;
        *((_DWORD *)v9 + 18) = v47;
        v113 = (const char *)Ogre::CSVParser::TableLine::operator[](v48 + v8, "Height", v49);
        v50 = 0;
        *((_DWORD *)v9 + 19) = Ogre::CSVParser::TableItem::Int(&v113);
        v87 = v9;
        do
        {
          j_sprintf(s, "ToolMineDrop%d", ++v50);
          v114 = (const char *)Ogre::CSVParser::TableLine::operator[](v123 + v8, s, v123);
          *((_WORD *)v87 + 42) = Ogre::CSVParser::TableItem::Int(&v114);
          j_sprintf(s, "ToolMineProb%d", v50);
          v115 = (const char *)Ogre::CSVParser::TableLine::operator[](v123 + v8, s, v51);
          v52 = Ogre::CSVParser::TableItem::Int(&v115);
          v53 = (int)(v87 + 4);
          *((_WORD *)v87 + 43) = v52;
          v87 += 4;
        }
        while ( v50 != 2 );
        v116 = (const char *)Ogre::CSVParser::TableLine::operator[](v123 + v8, "HandMineDrop", v53);
        v54 = Ogre::CSVParser::TableItem::Int(&v116);
        v55 = v123;
        *((_WORD *)v9 + 46) = v54;
        v117 = (const char *)Ogre::CSVParser::TableLine::operator[](v55 + v8, "HandMineProb", v56);
        v57 = Ogre::CSVParser::TableItem::Int(&v117);
        v58 = v123;
        *((_WORD *)v9 + 47) = v57;
        v118 = (const char *)Ogre::CSVParser::TableLine::operator[](v58 + v8, "PreciseDrop", v59);
        v60 = Ogre::CSVParser::TableItem::Int(&v118);
        v61 = v123;
        *((_DWORD *)v9 + 24) = v60;
        v119 = (const char *)Ogre::CSVParser::TableLine::operator[](v61 + v8, "MineTool", v61);
        v62 = Ogre::CSVParser::TableItem::Int(&v119);
        v63 = v123;
        *((_DWORD *)v9 + 27) = v62;
        v120 = (const char *)Ogre::CSVParser::TableLine::operator[](v63 + v8, "MineExp", v64);
        v65 = Ogre::CSVParser::TableItem::Int(&v120);
        v66 = v123;
        *((_DWORD *)v9 + 25) = v65;
        v121 = Ogre::CSVParser::TableLine::operator[](v66 + v8, "MineExpOdds", v67);
        v68 = Ogre::CSVParser::TableItem::Int((const char **)&v121);
        v69 = v123;
        *((_DWORD *)v9 + 26) = v68;
        v121 = 0;
        v71 = (const char *)Ogre::CSVParser::TableLine::operator[](v69 + v8, "MiniColor", v70);
        j_sscanf(v71, "%x", &v121);
        v72 = v123;
        *((_DWORD *)v9 + 28) = v121 & 0xFF00 | ((unsigned __int8)v121 << 16) | ((unsigned int)(v121 << 8) >> 24);
        v73 = (const char *)Ogre::CSVParser::TableLine::operator[](v72 + v8, "Name", v72);
        MyStringCpy(v9 + 116, 0x20u, v73);
        v75 = (const char *)Ogre::CSVParser::TableLine::operator[](v123 + v8, "Type", v74);
        MyStringCpy(v9 + 148, 0x20u, v75);
        v77 = (const char *)Ogre::CSVParser::TableLine::operator[](v123 + v8, "OpUseScript", v76);
        MyStringCpy(v9 + 180, 0x20u, v77);
        v78 = (const char *)Ogre::CSVParser::TableLine::operator[](v123 + v8, "Texture1", v123);
        MyStringCpy(v9 + 212, 0x20u, v78);
        v80 = (const char *)Ogre::CSVParser::TableLine::operator[](v123 + v8, "Texture2", v79);
        MyStringCpy(v9 + 244, 0x20u, v80);
        v81 = (const char *)Ogre::CSVParser::TableLine::operator[](v123 + v8, "WalkSound", v123);
        MyStringCpy(v9 + 276, 0x20u, v81);
        v83 = (const char *)Ogre::CSVParser::TableLine::operator[](v123 + v8, "DigSound", v82);
        MyStringCpy(v9 + 308, 0x20u, v83);
        v84 = (const char *)Ogre::CSVParser::TableLine::operator[](v123 + v8, "PlaceSound", 340);
        MyStringCpy(v9 + 340, 0x20u, v84);
        v6 = 4 * v88;
        *(_DWORD *)(4 * v88 + *((_DWORD *)this + 105)) = v9;
      }
    }
    v85 = (_DWORD *)operator new(0x174u);
    j_memset(v85, 0, 0x174u);
    v85[3] = 1;
    *v85 = 4095;
    v85[5] = 2;
    v85[4] = 1;
    v85[19] = 1;
    v85[8] = 18000000;
    v85[9] = -1082130432;
    *(_DWORD *)(*((_DWORD *)this + 105) + 16380) = v85;
  }
  Ogre::CSVParser::~CSVParser((Ogre::CSVParser *)v122);
  return v91;
}


//======================================================================
// DefManager::loadOreCSV(char const*)
// address: 0x002AD194   size: 0x178 (376 bytes)
//======================================================================
int __fastcall DefManager::loadOreCSV(DefManager *this, char *a2)
{
  int v3; // r2
  int v4; // r7
  int v5; // r5
  int v6; // r0
  int v7; // r2
  int v8; // r2
  int v9; // r2
  int v10; // r2
  int v11; // r2
  int v12; // r2
  int v13; // r2
  int v14; // r2
  int v15; // r2
  int v17; // [sp+4h] [bp-98h]
  int v18; // [sp+8h] [bp-94h]
  const char *v20; // [sp+14h] [bp-88h] BYREF
  const char *v21; // [sp+18h] [bp-84h] BYREF
  const char *v22; // [sp+1Ch] [bp-80h] BYREF
  const char *v23; // [sp+20h] [bp-7Ch] BYREF
  const char *v24; // [sp+24h] [bp-78h] BYREF
  const char *v25; // [sp+28h] [bp-74h] BYREF
  const char *v26; // [sp+2Ch] [bp-70h] BYREF
  const char *v27; // [sp+30h] [bp-6Ch] BYREF
  const char *v28; // [sp+34h] [bp-68h] BYREF
  const char *v29; // [sp+38h] [bp-64h] BYREF
  const char *v30; // [sp+3Ch] [bp-60h] BYREF
  const char *v31[10]; // [sp+40h] [bp-5Ch] BYREF
  _BYTE v32[20]; // [sp+68h] [bp-34h] BYREF
  int v33; // [sp+7Ch] [bp-20h]
  int v34; // [sp+88h] [bp-14h]
  int v35; // [sp+90h] [bp-Ch]

  Ogre::CSVParser::CSVParser((Ogre::CSVParser *)v32);
  sub_3BF0BC((int)v31, a2);
  v17 = Ogre::CSVParser::Load((Ogre::CSVParser *)v32, v31);
  sub_3BDF80(v31);
  if ( v17 != 0 )
  {
    v35 = 1;
    v4 = 2;
    v18 = v34;
    while ( v4 < v18 )
    {
      v5 = 8 * v4;
      v20 = (const char *)Ogre::CSVParser::TableLine::operator[](v33 + 8 * v4, "ID", v3);
      v31[0] = (const char *)Ogre::CSVParser::TableItem::Int(&v20);
      if ( v31[0] != nullptr )
      {
        v21 = (const char *)Ogre::CSVParser::TableLine::operator[](v33 + v5, "MapID", v3);
        v6 = Ogre::CSVParser::TableItem::Int(&v21);
        v31[0] = (const char *)((int)v31[0] | (v6 << 16));
        v22 = (const char *)Ogre::CSVParser::TableLine::operator[](v33 + v5, "MinHeight", v7);
        v31[1] = (const char *)Ogre::CSVParser::TableItem::Int(&v22);
        v23 = (const char *)Ogre::CSVParser::TableLine::operator[](v33 + v5, "MaxHeight", v8);
        v31[2] = (const char *)Ogre::CSVParser::TableItem::Int(&v23);
        v24 = (const char *)Ogre::CSVParser::TableLine::operator[](v33 + v5, "MinFalloff", v9);
        v31[3] = (const char *)Ogre::CSVParser::TableItem::Int(&v24);
        v25 = (const char *)Ogre::CSVParser::TableLine::operator[](v33 + v5, "MaxFalloff", v10);
        v31[4] = (const char *)Ogre::CSVParser::TableItem::Int(&v25);
        v26 = (const char *)Ogre::CSVParser::TableLine::operator[](v33 + v5, "GenMethod", v11);
        v31[5] = (const char *)Ogre::CSVParser::TableItem::Int(&v26);
        v27 = (const char *)Ogre::CSVParser::TableLine::operator[](v33 + v5, "Odds", v12);
        v31[6] = (const char *)Ogre::CSVParser::TableItem::Int(&v27);
        v28 = (const char *)Ogre::CSVParser::TableLine::operator[](v33 + v5, "Lode", v13);
        v31[7] = (const char *)Ogre::CSVParser::TableItem::Int(&v28);
        v29 = (const char *)Ogre::CSVParser::TableLine::operator[](v33 + v5, "MaxNum", v14);
        v31[8] = (const char *)Ogre::CSVParser::TableItem::Int(&v29);
        v30 = (const char *)Ogre::CSVParser::TableLine::operator[](v33 + v5, "ReplaceBlock", v15);
        v31[9] = (const char *)Ogre::CSVParser::TableItem::Int(&v30);
        DefDataTable<OreDef>::AddRecord((_DWORD *)this + 99, (int)v31[0], (int *)v31);
      }
      ++v4;
    }
  }
  Ogre::CSVParser::~CSVParser((Ogre::CSVParser *)v32);
  return v17;
}


//======================================================================
// DefManager::loadOneTreeGeomCSV(TreeDef &,char const*)
// address: 0x002AD338   size: 0x102 (258 bytes)
//======================================================================
int __fastcall DefManager::loadOneTreeGeomCSV(int a1, int a2, char *a3)
{
  int v4; // r7
  int i; // r5
  int j; // r4
  int k; // r6
  int v8; // r2
  int v9; // r3
  char v10; // r3
  int v12; // [sp+0h] [bp-74h]
  const char *v14; // [sp+28h] [bp-4Ch] BYREF
  _BYTE v15[20]; // [sp+2Ch] [bp-48h] BYREF
  int v16; // [sp+40h] [bp-34h]
  int v17; // [sp+4Ch] [bp-28h]
  int v18; // [sp+54h] [bp-20h]
  char s[16]; // [sp+5Ch] [bp-18h] BYREF

  Ogre::CSVParser::CSVParser((Ogre::CSVParser *)v15);
  sub_3BF0BC((int)&v14, a3);
  v12 = Ogre::CSVParser::Load((Ogre::CSVParser *)v15, &v14);
  sub_3BDF80(&v14);
  if ( v12 != 0 )
  {
    v18 = 0;
    v4 = v17 / 8;
    if ( v17 / 8 > 5 )
      v4 = 5;
    for ( i = 0; i < v4; ++i )
    {
      for ( j = 0; j != 7; ++j )
      {
        for ( k = 0; k != 7; *(_BYTE *)(a2 + 49 * i + 7 * j + k + 191) = v10 )
        {
          j_sprintf(s, "%d", ++k);
          v9 = *(unsigned __int8 *)Ogre::CSVParser::TableLine::operator[](v16 + 8 * (8 * i + 1 + j), s, v8);
          switch ( v9 )
          {
            case '#':
              v10 = 2;
              break;
            case 'x':
              v10 = 1;
              break;
            case '+':
              v10 = 3;
              break;
            default:
              v10 = 4 * (v9 == 42);
              break;
          }
        }
      }
    }
  }
  Ogre::CSVParser::~CSVParser((Ogre::CSVParser *)v15);
  return v12;
}


//======================================================================
// DefManager::loadTreeCSV(char const*)
// address: 0x002AD444   size: 0x1BA (442 bytes)
//======================================================================
int __fastcall DefManager::loadTreeCSV(DefManager *this, char *a2)
{
  int v3; // r2
  int v4; // r6
  int v5; // r4
  const char *v6; // r0
  int v7; // r2
  const char *v8; // r0
  int v9; // r2
  int v10; // r2
  int v11; // r2
  int v12; // r2
  int v13; // r2
  int v14; // r2
  int v15; // r5
  int HasColumn; // r0
  int v17; // r2
  int *v18; // r3
  int v21; // [sp+4h] [bp-340h]
  int v22; // [sp+8h] [bp-33Ch]
  const char *v23; // [sp+10h] [bp-334h] BYREF
  const char *v24; // [sp+14h] [bp-330h] BYREF
  const char *v25; // [sp+18h] [bp-32Ch] BYREF
  const char *v26; // [sp+1Ch] [bp-328h] BYREF
  const char *v27; // [sp+20h] [bp-324h] BYREF
  const char *v28; // [sp+24h] [bp-320h] BYREF
  const char *v29; // [sp+28h] [bp-31Ch] BYREF
  const char *v30; // [sp+2Ch] [bp-318h] BYREF
  const char *v31; // [sp+30h] [bp-314h] BYREF
  _BYTE v32[20]; // [sp+34h] [bp-310h] BYREF
  int v33; // [sp+48h] [bp-2FCh]
  int v34; // [sp+54h] [bp-2F0h]
  int v35; // [sp+5Ch] [bp-2E8h]
  char s[32]; // [sp+64h] [bp-2E0h] BYREF
  char v37[256]; // [sp+84h] [bp-2C0h] BYREF
  int v38; // [sp+184h] [bp-1C0h] BYREF
  char v39[32]; // [sp+188h] [bp-1BCh] BYREF
  char v40[32]; // [sp+1A8h] [bp-19Ch] BYREF
  int v41; // [sp+1C8h] [bp-17Ch]
  int v42; // [sp+1CCh] [bp-178h]
  int v43; // [sp+1D0h] [bp-174h]
  int v44; // [sp+1D4h] [bp-170h]
  int v45; // [sp+1D8h] [bp-16Ch]
  int v46; // [sp+1DCh] [bp-168h]

  Ogre::CSVParser::CSVParser((Ogre::CSVParser *)v32);
  sub_3BF0BC((int)&v23, a2);
  v21 = Ogre::CSVParser::Load((Ogre::CSVParser *)v32, &v23);
  sub_3BDF80(&v23);
  if ( v21 != 0 )
  {
    v35 = 1;
    v4 = 2;
    v22 = v34;
    while ( v4 < v22 )
    {
      v5 = 8 * v4;
      v24 = (const char *)Ogre::CSVParser::TableLine::operator[](v33 + 8 * v4, "ID", v3);
      v38 = Ogre::CSVParser::TableItem::Int(&v24);
      if ( v38 != 0 )
      {
        v6 = (const char *)Ogre::CSVParser::TableLine::operator[](v33 + v5, "Name", v3);
        MyStringCpy(v39, 0x20u, v6);
        v8 = (const char *)Ogre::CSVParser::TableLine::operator[](v33 + v5, "Model", v7);
        MyStringCpy(v40, 0x20u, v8);
        v25 = (const char *)Ogre::CSVParser::TableLine::operator[](v33 + v5, "MinHeight", v9);
        v41 = Ogre::CSVParser::TableItem::Int(&v25);
        v26 = (const char *)Ogre::CSVParser::TableLine::operator[](v33 + v5, "MaxHeight", v10);
        v42 = Ogre::CSVParser::TableItem::Int(&v26);
        v27 = (const char *)Ogre::CSVParser::TableLine::operator[](v33 + v5, "LeafBlock", v11);
        v43 = Ogre::CSVParser::TableItem::Int(&v27);
        v28 = (const char *)Ogre::CSVParser::TableLine::operator[](v33 + v5, "WoodBlock", v12);
        v44 = Ogre::CSVParser::TableItem::Int(&v28);
        v29 = (const char *)Ogre::CSVParser::TableLine::operator[](v33 + v5, "MinLayers", v13);
        v45 = Ogre::CSVParser::TableItem::Int(&v29);
        v30 = (const char *)Ogre::CSVParser::TableLine::operator[](v33 + v5, "MaxLayers", v14);
        v15 = 0;
        v46 = Ogre::CSVParser::TableItem::Int(&v30);
        do
        {
          j_sprintf(s, "Layer1%d", v15);
          HasColumn = Ogre::CSVParser::HasColumn((Ogre::CSVParser *)v32, s);
          if ( HasColumn != 0 )
          {
            v31 = (const char *)Ogre::CSVParser::TableLine::operator[](v33 + v5, s, v17);
            HasColumn = Ogre::CSVParser::TableItem::Int(&v31);
          }
          v18 = (int *)&v39[4 * v15++ - 4];
          v18[23] = HasColumn;
        }
        while ( v15 != 5 );
        j_sprintf(v37, "csvdef/tree%d.csv", v38);
        DefManager::loadOneTreeGeomCSV((int)this, (int)&v38, v37);
        DefDataTable<TreeDef>::AddRecord((_DWORD *)this + 109, v38, &v38);
      }
      ++v4;
    }
  }
  Ogre::CSVParser::~CSVParser((Ogre::CSVParser *)v32);
  return v21;
}


//======================================================================
// DefManager::loadItemCSV(char const*)
// address: 0x002AD634   size: 0x2BA (698 bytes)
//======================================================================
int __fastcall DefManager::loadItemCSV(DefManager *this, char *a2)
{
  int i; // r7
  int v5; // r7
  int v6; // r6
  int *v7; // r0
  int *v8; // r4
  int v9; // r2
  int v10; // r2
  int v11; // r2
  const char *v12; // r0
  int v13; // r2
  const char *v14; // r0
  const char *v15; // r0
  const char *v16; // r0
  int v17; // r2
  const char *v18; // r0
  const char *v19; // r0
  int v20; // r2
  float v21; // r0
  int v22; // r2
  int v23; // r2
  int v24; // r0
  int v25; // r1
  int v26; // r2
  int v27; // r0
  int v28; // r2
  int v29; // r2
  int v30; // r0
  int v31; // r1
  int v32; // r2
  int v33; // r0
  int v34; // r2
  int v35; // r0
  int v36; // r3
  int v37; // r2
  _DWORD *v38; // r1
  int v39; // r0
  unsigned int v40; // r2
  unsigned int v41; // r3
  int v43; // [sp+8h] [bp-7Ch]
  int v44; // [sp+10h] [bp-74h]
  int v45; // [sp+14h] [bp-70h]
  const char *v46; // [sp+18h] [bp-6Ch] BYREF
  const char *v47; // [sp+1Ch] [bp-68h] BYREF
  const char *v48; // [sp+20h] [bp-64h] BYREF
  const char *v49; // [sp+24h] [bp-60h] BYREF
  const char *v50; // [sp+28h] [bp-5Ch] BYREF
  const char *v51; // [sp+2Ch] [bp-58h] BYREF
  const char *v52; // [sp+30h] [bp-54h] BYREF
  const char *v53; // [sp+34h] [bp-50h] BYREF
  const char *v54; // [sp+38h] [bp-4Ch] BYREF
  const char *v55; // [sp+3Ch] [bp-48h] BYREF
  const char *v56; // [sp+40h] [bp-44h] BYREF
  const char *v57; // [sp+44h] [bp-40h] BYREF
  const char *v58; // [sp+48h] [bp-3Ch] BYREF
  int v59; // [sp+4Ch] [bp-38h] BYREF
  _BYTE v60[20]; // [sp+50h] [bp-34h] BYREF
  int v61; // [sp+64h] [bp-20h]
  int v62; // [sp+70h] [bp-14h]
  int v63; // [sp+78h] [bp-Ch]

  Ogre::CSVParser::CSVParser((Ogre::CSVParser *)v60);
  sub_3BF0BC((int)&v46, a2);
  v44 = Ogre::CSVParser::Load((Ogre::CSVParser *)v60, &v46);
  sub_3BDF80(&v46);
  if ( v44 != 0 )
  {
    Ogre::DeletePointerArray<ItemDef>((int *)this + 115);
    v63 = 1;
    v45 = v62;
    for ( i = 2; ; i = v43 + 1 )
    {
      v43 = i;
      if ( i >= v45 )
        break;
      v5 = 8 * i;
      v47 = (const char *)Ogre::CSVParser::TableLine::operator[](v61 + 8 * v43, "ID", v61);
      v6 = Ogre::CSVParser::TableItem::Int(&v47);
      if ( v6 != 0 )
      {
        v7 = (int *)operator new(0x1D4u);
        *v7 = v6;
        v8 = v7;
        v48 = (const char *)Ogre::CSVParser::TableLine::operator[](v61 + v5, "Type", v9);
        v8[1] = Ogre::CSVParser::TableItem::Int(&v48);
        v49 = (const char *)Ogre::CSVParser::TableLine::operator[](v61 + v5, "CreateType", v10);
        v8[2] = Ogre::CSVParser::TableItem::Int(&v49);
        v50 = (const char *)Ogre::CSVParser::TableLine::operator[](v61 + v5, "SortId", v61);
        v8[3] = Ogre::CSVParser::TableItem::Int(&v50);
        v12 = (const char *)Ogre::CSVParser::TableLine::operator[](v61 + v5, "Name", v11);
        MyStringCpy((char *)v8 + 16, 0x20u, v12);
        v14 = (const char *)Ogre::CSVParser::TableLine::operator[](v61 + v5, "Desc", v13);
        MyStringCpy((char *)v8 + 48, 0x100u, v14);
        v15 = (const char *)Ogre::CSVParser::TableLine::operator[](v61 + v5, "Icon", 304);
        MyStringCpy((char *)v8 + 304, 0x20u, v15);
        v16 = (const char *)Ogre::CSVParser::TableLine::operator[](v61 + v5, "PlaceSound", v61);
        MyStringCpy((char *)v8 + 336, 0x20u, v16);
        v18 = (const char *)Ogre::CSVParser::TableLine::operator[](v61 + v5, "WieldImage", v17);
        MyStringCpy((char *)v8 + 368, 0x20u, v18);
        v19 = (const char *)Ogre::CSVParser::TableLine::operator[](v61 + v5, "UseScript", 400);
        MyStringCpy((char *)v8 + 400, 0x20u, v19);
        v51 = (const char *)Ogre::CSVParser::TableLine::operator[](v61 + v5, "WieldScale", v20);
        v21 = Ogre::CSVParser::TableItem::Float(&v51);
        v22 = v61;
        *((float *)v8 + 108) = v21;
        v52 = (const char *)Ogre::CSVParser::TableLine::operator[](v22 + v5, "WieldPeriod", v22);
        v8[109] = Ogre::CSVParser::TableItem::Int(&v52);
        v53 = (const char *)Ogre::CSVParser::TableLine::operator[](v61 + v5, "StackMax", v23);
        v24 = Ogre::CSVParser::TableItem::Int(&v53);
        v25 = v61;
        v8[110] = v24;
        v54 = (const char *)Ogre::CSVParser::TableLine::operator[](v25 + v5, "Usable", v26);
        v27 = Ogre::CSVParser::TableItem::Int(&v54);
        v28 = v61;
        v8[111] = v27;
        v55 = (const char *)Ogre::CSVParser::TableLine::operator[](v28 + v5, "Range", v28);
        v8[112] = Ogre::CSVParser::TableItem::Int(&v55);
        v56 = (const char *)Ogre::CSVParser::TableLine::operator[](v61 + v5, "ItemGroup", v29);
        v30 = Ogre::CSVParser::TableItem::Int(&v56);
        v31 = v61;
        v8[113] = v30;
        v57 = (const char *)Ogre::CSVParser::TableLine::operator[](v31 + v5, "EnchantTag", v32);
        v33 = Ogre::CSVParser::TableItem::Int(&v57);
        v34 = v61;
        v8[114] = v33;
        v58 = (const char *)Ogre::CSVParser::TableLine::operator[](v34 + v5, "StuffType", v34);
        v35 = Ogre::CSVParser::TableItem::Int(&v58);
        v36 = v61;
        v8[115] = v35;
        v59 = Ogre::CSVParser::TableLine::operator[](v36 + v5, "EnchantAfterID", v37);
        v8[116] = Ogre::CSVParser::TableItem::Int((const char **)&v59);
        v38 = *((_DWORD **)this + 116);
        v39 = *((_DWORD *)this + 115);
        v40 = ((int)v38 - v39) >> 2;
        if ( *v8 >= (int)v40 )
        {
          v41 = *v8 + 1;
          v59 = 0;
          if ( v41 <= v40 )
          {
            if ( v41 < v40 )
              *((_DWORD *)this + 116) = v39 + 4 * v41;
          }
          else
          {
            std::vector<ItemDef *>::_M_fill_insert((int)this + 460, v38, v41 - v40, (void **)&v59);
          }
        }
        *(_DWORD *)(4 * *v8 + *((_DWORD *)this + 115)) = v8;
      }
    }
  }
  Ogre::CSVParser::~CSVParser((Ogre::CSVParser *)v60);
  return v44;
}


//======================================================================
// DefManager::loadToolCSV(char const*)
// address: 0x002AD93C   size: 0x254 (596 bytes)
//======================================================================
int __fastcall DefManager::loadToolCSV(DefManager *this, char *a2)
{
  int v3; // r2
  int v4; // r7
  int v5; // r4
  int v6; // r0
  int v7; // r2
  const char *v8; // r0
  int v9; // r2
  int v10; // r2
  int v11; // r2
  int v12; // r2
  int v13; // r2
  int v14; // r2
  int v15; // r2
  int v16; // r2
  int v17; // r5
  int *v18; // r6
  int v19; // r2
  char *v22; // [sp+8h] [bp-50h]
  int v23; // [sp+Ch] [bp-4Ch]
  int v24; // [sp+10h] [bp-48h]
  const char *v25; // [sp+18h] [bp-40h] BYREF
  const char *v26; // [sp+1Ch] [bp-3Ch] BYREF
  const char *v27; // [sp+20h] [bp-38h] BYREF
  const char *v28; // [sp+24h] [bp-34h] BYREF
  const char *v29; // [sp+28h] [bp-30h] BYREF
  const char *v30; // [sp+2Ch] [bp-2Ch] BYREF
  const char *v31; // [sp+30h] [bp-28h] BYREF
  const char *v32; // [sp+34h] [bp-24h] BYREF
  const char *v33; // [sp+38h] [bp-20h] BYREF
  const char *v34; // [sp+3Ch] [bp-1Ch] BYREF
  const char *v35; // [sp+40h] [bp-18h] BYREF
  const char *v36; // [sp+44h] [bp-14h] BYREF
  const char *v37; // [sp+48h] [bp-10h] BYREF
  const char *v38; // [sp+4Ch] [bp-Ch] BYREF
  const char *v39; // [sp+50h] [bp-8h] BYREF
  const char *v40; // [sp+54h] [bp-4h] BYREF
  _BYTE v41[20]; // [sp+58h] [bp+0h] BYREF
  int v42; // [sp+6Ch] [bp+14h]
  int v43; // [sp+78h] [bp+20h]
  int v44; // [sp+80h] [bp+28h]
  char s[64]; // [sp+88h] [bp+30h] BYREF
  int v46; // [sp+C8h] [bp+70h] BYREF
  char v47[32]; // [sp+CCh] [bp+74h] BYREF
  int v48; // [sp+ECh] [bp+94h]
  int v49; // [sp+F0h] [bp+98h]
  int v50; // [sp+F4h] [bp+9Ch]
  __int16 v51; // [sp+F8h] [bp+A0h]
  __int16 v52; // [sp+FAh] [bp+A2h]
  __int16 v53; // [sp+FCh] [bp+A4h]
  __int16 v54; // [sp+FEh] [bp+A6h]
  __int16 v55; // [sp+100h] [bp+A8h]
  int v56; // [sp+104h] [bp+ACh]
  int v57; // [sp+108h] [bp+B0h]
  int v58; // [sp+10Ch] [bp+B4h]
  int v59; // [sp+110h] [bp+B8h]

  Ogre::CSVParser::CSVParser((Ogre::CSVParser *)v41);
  sub_3BF0BC((int)&v25, a2);
  v23 = Ogre::CSVParser::Load((Ogre::CSVParser *)v41, &v25);
  sub_3BDF80(&v25);
  if ( v23 != 0 )
  {
    v22 = (char *)this + 472;
    std::_Rb_tree<int,std::pair<int const,ToolDef>,std::_Select1st<std::pair<int const,ToolDef>>,std::less<int>,std::allocator<std::pair<int const,ToolDef>>>::_M_erase(
      (int)this + 472,
      *((_DWORD **)this + 120));
    *((_DWORD *)this + 121) = (char *)this + 476;
    *((_DWORD *)this + 120) = 0;
    *((_DWORD *)this + 122) = (char *)this + 476;
    v3 = v43;
    v4 = 2;
    *((_DWORD *)this + 123) = 0;
    v44 = 1;
    v24 = v3;
    while ( v4 < v24 )
    {
      v5 = 8 * v4;
      v26 = (const char *)Ogre::CSVParser::TableLine::operator[](v42 + 8 * v4, "ID", v24);
      v6 = Ogre::CSVParser::TableItem::Int(&v26);
      if ( v6 != 0 )
      {
        v46 = v6;
        v8 = (const char *)Ogre::CSVParser::TableLine::operator[](v42 + v5, "Name", v7);
        MyStringCpy(v47, 0x20u, v8);
        v27 = (const char *)Ogre::CSVParser::TableLine::operator[](v42 + v5, "Type", v42);
        v48 = Ogre::CSVParser::TableItem::Int(&v27);
        v28 = (const char *)Ogre::CSVParser::TableLine::operator[](v42 + v5, "Level", v9);
        v49 = Ogre::CSVParser::TableItem::Int(&v28);
        v29 = (const char *)Ogre::CSVParser::TableLine::operator[](v42 + v5, "Efficiency", v10);
        v50 = Ogre::CSVParser::TableItem::Int(&v29);
        v30 = (const char *)Ogre::CSVParser::TableLine::operator[](v42 + v5, "AttackType", v42);
        v51 = Ogre::CSVParser::TableItem::Short(&v30);
        v31 = (const char *)Ogre::CSVParser::TableLine::operator[](v42 + v5, "Attack", v11);
        v52 = Ogre::CSVParser::TableItem::Short(&v31);
        v32 = (const char *)Ogre::CSVParser::TableLine::operator[](v42 + v5, "ArmorPunch", v12);
        v53 = Ogre::CSVParser::TableItem::Short(&v32);
        v33 = (const char *)Ogre::CSVParser::TableLine::operator[](v42 + v5, "ArmorRange", v42);
        v54 = Ogre::CSVParser::TableItem::Short(&v33);
        v34 = (const char *)Ogre::CSVParser::TableLine::operator[](v42 + v5, "ArmorExplode", v13);
        v55 = Ogre::CSVParser::TableItem::Short(&v34);
        v35 = (const char *)Ogre::CSVParser::TableLine::operator[](v42 + v5, "Duration", v14);
        v56 = Ogre::CSVParser::TableItem::Int(&v35);
        v36 = (const char *)Ogre::CSVParser::TableLine::operator[](v42 + v5, "CollectDuration", v42);
        v57 = Ogre::CSVParser::TableItem::Int(&v36);
        v37 = (const char *)Ogre::CSVParser::TableLine::operator[](v42 + v5, "AtkDuration", v15);
        v58 = Ogre::CSVParser::TableItem::Int(&v37);
        v38 = (const char *)Ogre::CSVParser::TableLine::operator[](v42 + v5, "RepairExp", v16);
        v17 = 0;
        v59 = Ogre::CSVParser::TableItem::Int(&v38);
        do
        {
          j_sprintf(s, "RepairID%d", ++v17);
          v39 = (const char *)Ogre::CSVParser::TableLine::operator[](v42 + v5, s, v42);
          v18 = (int *)&v47[4 * v17 - 4];
          v18[18] = Ogre::CSVParser::TableItem::Int(&v39);
          j_sprintf(s, "RepairAmount%d", v17);
          v40 = (const char *)Ogre::CSVParser::TableLine::operator[](v42 + v5, s, v19);
          v18[24] = Ogre::CSVParser::TableItem::Int(&v40);
        }
        while ( v17 != 6 );
        DefDataTable<ToolDef>::AddRecord(v22, v46, &v46);
      }
      ++v4;
    }
  }
  Ogre::CSVParser::~CSVParser((Ogre::CSVParser *)v41);
  return v23;
}


//======================================================================
// DefManager::loadCraftingCSV(char const*)
// address: 0x002ADBD4   size: 0x228 (552 bytes)
//======================================================================
int __fastcall DefManager::loadCraftingCSV(DefManager *this, char *a2)
{
  int v3; // r2
  int v4; // r7
  int v5; // r4
  const char *v6; // r0
  int v7; // r2
  int v8; // r2
  int v9; // r2
  int v10; // r2
  int v11; // r2
  int v12; // r2
  int v13; // r0
  int i; // r5
  char *j; // r1
  int v16; // r2
  char *v19; // [sp+4h] [bp-50h]
  char *v20; // [sp+Ch] [bp-48h]
  _DWORD *v21; // [sp+10h] [bp-44h]
  int v22; // [sp+14h] [bp-40h]
  int v23; // [sp+18h] [bp-3Ch]
  const char *v24; // [sp+24h] [bp-30h] BYREF
  const char *v25; // [sp+28h] [bp-2Ch] BYREF
  const char *v26; // [sp+2Ch] [bp-28h] BYREF
  const char *v27; // [sp+30h] [bp-24h] BYREF
  const char *v28; // [sp+34h] [bp-20h] BYREF
  const char *v29; // [sp+38h] [bp-1Ch] BYREF
  const char *v30; // [sp+3Ch] [bp-18h] BYREF
  const char *v31; // [sp+40h] [bp-14h] BYREF
  const char *v32; // [sp+44h] [bp-10h] BYREF
  const char *v33; // [sp+48h] [bp-Ch] BYREF
  const char *v34; // [sp+4Ch] [bp-8h] BYREF
  const char *v35; // [sp+50h] [bp-4h] BYREF
  _BYTE v36[20]; // [sp+54h] [bp+0h] BYREF
  int v37; // [sp+68h] [bp+14h]
  int v38; // [sp+74h] [bp+20h]
  int v39; // [sp+7Ch] [bp+28h]
  const char *v40[7]; // [sp+84h] [bp+30h] BYREF
  int v41; // [sp+A0h] [bp+4Ch]
  int v42; // [sp+A4h] [bp+50h]
  bool v43; // [sp+A8h] [bp+54h]
  char s[64]; // [sp+F4h] [bp+A0h] BYREF

  Ogre::CSVParser::CSVParser((Ogre::CSVParser *)v36);
  sub_3BF0BC((int)&v24, a2);
  v22 = Ogre::CSVParser::Load((Ogre::CSVParser *)v36, &v24);
  sub_3BDF80(&v24);
  if ( v22 != 0 )
  {
    v21 = (_DWORD *)((char *)this + 496);
    std::_Rb_tree<int,std::pair<int const,CraftingDef>,std::_Select1st<std::pair<int const,CraftingDef>>,std::less<int>,std::allocator<std::pair<int const,CraftingDef>>>::_M_erase(
      (int)this + 496,
      *((_DWORD **)this + 126));
    *((_DWORD *)this + 127) = (char *)this + 500;
    *((_DWORD *)this + 126) = 0;
    *((_DWORD *)this + 128) = (char *)this + 500;
    v3 = v38;
    v4 = 2;
    *((_DWORD *)this + 129) = 0;
    v39 = 1;
    v23 = v3;
    while ( v4 < v23 )
    {
      v5 = 8 * v4;
      v40[0] = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + 8 * v4, "ID", v23);
      v6 = (const char *)Ogre::CSVParser::TableItem::Int(v40);
      if ( v6 != nullptr )
      {
        v40[0] = v6;
        v25 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, "Type", v7);
        v40[1] = (const char *)Ogre::CSVParser::TableItem::Int(&v25);
        v26 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, "ResultID", v37);
        v40[2] = (const char *)Ogre::CSVParser::TableItem::Int(&v26);
        v27 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, "ResultCount", v8);
        v40[3] = (const char *)Ogre::CSVParser::TableItem::Int(&v27);
        v28 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, "UseExp", v9);
        v40[4] = (const char *)Ogre::CSVParser::TableItem::Int(&v28);
        v29 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, "MoneyID", v37);
        v40[6] = (const char *)Ogre::CSVParser::TableItem::Int(&v29);
        v30 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, "MoneyCount", v10);
        v40[5] = (const char *)Ogre::CSVParser::TableItem::Int(&v30);
        v31 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, "GridX", v11);
        v41 = Ogre::CSVParser::TableItem::Int(&v31);
        v32 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, "GridY", v37);
        v42 = Ogre::CSVParser::TableItem::Int(&v32);
        v33 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, "IsGroup", v12);
        v13 = Ogre::CSVParser::TableItem::Int(&v33);
        v43 = (v13 >> 31) - v13 < 0;
        for ( i = 0; i < v42; ++i )
        {
          for ( j = nullptr; ; j = v19 + 1 )
          {
            v19 = j;
            if ( (int)j >= v41 )
              break;
            v20 = &j[v41 * i];
            j_sprintf(s, "MaterialID%d", v20 + 1);
            v34 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, s, v37);
            v40[(_DWORD)(v20 + 10)] = (const char *)Ogre::CSVParser::TableItem::Int(&v34);
            j_sprintf(s, "MaterialCount%d", v20 + 1);
            v35 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, s, v16);
            v40[(_DWORD)(v20 + 18) + 1] = (const char *)Ogre::CSVParser::TableItem::Int(&v35);
          }
        }
        DefDataTable<CraftingDef>::AddRecord(v21, (int)v40[0], v40);
      }
      ++v4;
    }
  }
  Ogre::CSVParser::~CSVParser((Ogre::CSVParser *)v36);
  return v22;
}


//======================================================================
// DefManager::loadMonsterCSV(char const*)
// address: 0x002ADE30   size: 0x690 (1680 bytes)
//======================================================================
int __fastcall DefManager::loadMonsterCSV(DefManager *this, char *a2)
{
  int v3; // r2
  int i; // r3
  int v5; // r4
  int v6; // r0
  int v7; // r2
  const char *v8; // r0
  int v9; // r2
  const char *v10; // r0
  const char *v11; // r0
  int v12; // r2
  int v13; // r2
  int v14; // r2
  const char *v15; // r0
  int v16; // r2
  int v17; // r2
  int v18; // r2
  int v19; // r2
  int v20; // r2
  int v21; // r2
  int v22; // r2
  int v23; // r2
  int v24; // r2
  int v25; // r2
  int v26; // r2
  int v27; // r2
  int v28; // r2
  int v29; // r0
  int v30; // r2
  int v31; // r2
  int v32; // r5
  int v33; // r2
  int j; // r5
  int v35; // r2
  int v36; // r2
  int v37; // r2
  int v38; // r2
  int v39; // r2
  int v40; // r2
  const char *v41; // r0
  const char *v42; // r0
  int v43; // r2
  const char *v44; // r0
  int v45; // r2
  const char *v46; // r0
  const char *v47; // r0
  char *v50; // [sp+4h] [bp-C4h]
  _DWORD *v51; // [sp+8h] [bp-C0h]
  int v52; // [sp+Ch] [bp-BCh]
  int v53; // [sp+10h] [bp-B8h]
  const char *v54; // [sp+1Ch] [bp-ACh] BYREF
  const char *v55; // [sp+20h] [bp-A8h] BYREF
  const char *v56; // [sp+24h] [bp-A4h] BYREF
  const char *v57; // [sp+28h] [bp-A0h] BYREF
  const char *v58; // [sp+2Ch] [bp-9Ch] BYREF
  const char *v59; // [sp+30h] [bp-98h] BYREF
  const char *v60; // [sp+34h] [bp-94h] BYREF
  const char *v61; // [sp+38h] [bp-90h] BYREF
  const char *v62; // [sp+3Ch] [bp-8Ch] BYREF
  const char *v63; // [sp+40h] [bp-88h] BYREF
  const char *v64; // [sp+44h] [bp-84h] BYREF
  const char *v65; // [sp+48h] [bp-80h] BYREF
  const char *v66; // [sp+4Ch] [bp-7Ch] BYREF
  const char *v67; // [sp+50h] [bp-78h] BYREF
  const char *v68; // [sp+54h] [bp-74h] BYREF
  const char *v69; // [sp+58h] [bp-70h] BYREF
  const char *v70; // [sp+5Ch] [bp-6Ch] BYREF
  const char *v71; // [sp+60h] [bp-68h] BYREF
  const char *v72; // [sp+64h] [bp-64h] BYREF
  const char *v73; // [sp+68h] [bp-60h] BYREF
  const char *v74; // [sp+6Ch] [bp-5Ch] BYREF
  const char *v75; // [sp+70h] [bp-58h] BYREF
  const char *v76; // [sp+74h] [bp-54h] BYREF
  const char *v77; // [sp+78h] [bp-50h] BYREF
  const char *v78; // [sp+7Ch] [bp-4Ch] BYREF
  const char *v79; // [sp+80h] [bp-48h] BYREF
  const char *v80; // [sp+84h] [bp-44h] BYREF
  const char *v81; // [sp+88h] [bp-40h] BYREF
  const char *v82; // [sp+8Ch] [bp-3Ch] BYREF
  const char *v83; // [sp+90h] [bp-38h] BYREF
  const char *v84; // [sp+94h] [bp-34h] BYREF
  const char *v85; // [sp+98h] [bp-30h] BYREF
  const char *v86; // [sp+9Ch] [bp-2Ch] BYREF
  const char *v87; // [sp+A0h] [bp-28h] BYREF
  const char *v88; // [sp+A4h] [bp-24h] BYREF
  const char *v89; // [sp+A8h] [bp-20h] BYREF
  const char *v90; // [sp+ACh] [bp-1Ch] BYREF
  const char *v91; // [sp+B0h] [bp-18h] BYREF
  const char *v92; // [sp+B4h] [bp-14h] BYREF
  const char *v93; // [sp+B8h] [bp-10h] BYREF
  const char *v94; // [sp+BCh] [bp-Ch] BYREF
  const char *v95; // [sp+C0h] [bp-8h] BYREF
  const char *v96; // [sp+C4h] [bp-4h] BYREF
  _BYTE v97[20]; // [sp+C8h] [bp+0h] BYREF
  int v98; // [sp+DCh] [bp+14h]
  int v99; // [sp+E8h] [bp+20h]
  int v100; // [sp+F0h] [bp+28h]
  char s[64]; // [sp+F8h] [bp+30h] BYREF
  int v102; // [sp+138h] [bp+70h] BYREF
  char v103[32]; // [sp+13Ch] [bp+74h] BYREF
  char v104[32]; // [sp+15Ch] [bp+94h] BYREF
  char v105[32]; // [sp+17Ch] [bp+B4h] BYREF
  int v106; // [sp+19Ch] [bp+D4h]
  int v107; // [sp+1A0h] [bp+D8h]
  int v108; // [sp+1A4h] [bp+DCh]
  int v109; // [sp+1A8h] [bp+E0h]
  _WORD v110[26]; // [sp+1ACh] [bp+E4h] BYREF
  int v111; // [sp+1E0h] [bp+118h]
  int v112; // [sp+1E4h] [bp+11Ch]
  int v113; // [sp+1E8h] [bp+120h]
  int v114; // [sp+1ECh] [bp+124h]
  int v115; // [sp+1F0h] [bp+128h]
  int v116; // [sp+1F4h] [bp+12Ch]
  int v117; // [sp+1F8h] [bp+130h]
  int v118; // [sp+1FCh] [bp+134h]
  int v119; // [sp+200h] [bp+138h]
  int v120; // [sp+204h] [bp+13Ch]
  int v121; // [sp+208h] [bp+140h]
  int v122; // [sp+20Ch] [bp+144h]
  int v123; // [sp+210h] [bp+148h]
  _DWORD v124[17]; // [sp+214h] [bp+14Ch]
  bool v125; // [sp+258h] [bp+190h]
  bool v126; // [sp+259h] [bp+191h]
  bool v127; // [sp+25Ah] [bp+192h]
  bool v128; // [sp+25Bh] [bp+193h]
  bool v129; // [sp+25Ch] [bp+194h]
  _BYTE v130[44]; // [sp+25Eh] [bp+196h] BYREF
  char v131[32]; // [sp+28Ah] [bp+1C2h] BYREF
  char v132[32]; // [sp+2AAh] [bp+1E2h] BYREF
  char v133[32]; // [sp+2CAh] [bp+202h] BYREF
  char v134[32]; // [sp+2EAh] [bp+222h] BYREF
  char v135[34]; // [sp+30Ah] [bp+242h] BYREF

  Ogre::CSVParser::CSVParser((Ogre::CSVParser *)v97);
  sub_3BF0BC((int)&v54, a2);
  v52 = Ogre::CSVParser::Load((Ogre::CSVParser *)v97, &v54);
  sub_3BDF80(&v54);
  if ( v52 != 0 )
  {
    v51 = (_DWORD *)((char *)this + 520);
    std::_Rb_tree<int,std::pair<int const,MonsterDef>,std::_Select1st<std::pair<int const,MonsterDef>>,std::less<int>,std::allocator<std::pair<int const,MonsterDef>>>::_M_erase(
      (int)this + 520,
      *((_DWORD **)this + 132));
    *((_DWORD *)this + 133) = (char *)this + 524;
    *((_DWORD *)this + 132) = 0;
    *((_DWORD *)this + 134) = (char *)this + 524;
    v3 = v99;
    *((_DWORD *)this + 135) = 0;
    v100 = 1;
    v53 = v3;
    for ( i = 2; ; i = (int)(v50 + 1) )
    {
      v50 = (char *)i;
      if ( i >= v53 )
        break;
      v5 = 8 * i;
      v55 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + 8 * i, "ID", v98);
      v6 = Ogre::CSVParser::TableItem::Int(&v55);
      if ( v6 != 0 )
      {
        v102 = v6;
        j_memset(v130, 0, sizeof(v130));
        v8 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "Name", v7);
        MyStringCpy(v103, 0x20u, v8);
        v10 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "Model", v9);
        MyStringCpy(v104, 0x20u, v10);
        v11 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "Model2", v98);
        MyStringCpy(v105, 0x20u, v11);
        v106 = 1065353216;
        v56 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "Type", v12);
        v107 = Ogre::CSVParser::TableItem::Int(&v56);
        v57 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "ChildAge", v13);
        v108 = (int)(float)(Ogre::CSVParser::TableItem::Float(&v57) / 0.05);
        v58 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "TickPeriod", v98);
        v109 = Ogre::CSVParser::TableItem::Int(&v58);
        v15 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "TickScript", v14);
        MyStringCpy((char *)v110, 0x20u, v15);
        v59 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "Life", v16);
        v110[16] = Ogre::CSVParser::TableItem::Int(&v59);
        v60 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "ArmorPunch", v98);
        v110[17] = Ogre::CSVParser::TableItem::Short(&v60);
        v61 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "ArmorRange", v17);
        v110[18] = Ogre::CSVParser::TableItem::Short(&v61);
        v62 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "ArmorExplode", v18);
        v110[19] = Ogre::CSVParser::TableItem::Short(&v62);
        v63 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "AttackType", v98);
        v110[20] = Ogre::CSVParser::TableItem::Short(&v63);
        v64 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "Attack", v19);
        v110[21] = Ogre::CSVParser::TableItem::Short(&v64);
        v65 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "AttackFire", v20);
        v110[22] = Ogre::CSVParser::TableItem::Short(&v65);
        v66 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "AttackPoison", v98);
        v110[23] = Ogre::CSVParser::TableItem::Short(&v66);
        v67 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "AttackWither", v21);
        v110[24] = Ogre::CSVParser::TableItem::Short(&v67);
        v68 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "Height", v22);
        v111 = Ogre::CSVParser::TableItem::Int(&v68);
        v69 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "Width", v98);
        v112 = Ogre::CSVParser::TableItem::Int(&v69);
        v70 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "AttackDistance", v23);
        v114 = Ogre::CSVParser::TableItem::Int(&v70);
        v71 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "ViewDistance", v24);
        v113 = Ogre::CSVParser::TableItem::Int(&v71);
        v72 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "Thickness", v98);
        v115 = Ogre::CSVParser::TableItem::Int(&v72);
        v73 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "Speed", v25);
        v116 = Ogre::CSVParser::TableItem::Int(&v73);
        v74 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "SpawnMaxLight", v26);
        v117 = Ogre::CSVParser::TableItem::Int(&v74);
        v75 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "SpawnSunLight", v98);
        v118 = Ogre::CSVParser::TableItem::Int(&v75);
        v76 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "SpawnMinHeight", v27);
        v119 = Ogre::CSVParser::TableItem::Int(&v76);
        v77 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "SpawnMaxHeight", v28);
        v29 = Ogre::CSVParser::TableItem::Int(&v77);
        v120 = v29;
        if ( v119 == 0 && v29 == 0 )
          v120 = 255;
        v78 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "PackNum", v119);
        v121 = Ogre::CSVParser::TableItem::Int(&v78);
        v79 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "PickItemOdds", v30);
        v122 = Ogre::CSVParser::TableItem::Int(&v79);
        v80 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "EquipGroup", v98);
        v123 = Ogre::CSVParser::TableItem::Int(&v80);
        v81 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "EquipOdds", v31);
        v32 = 0;
        v124[0] = Ogre::CSVParser::TableItem::Int(&v81);
        do
        {
          j_sprintf(s, "DropGroup%d", ++v32);
          v82 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, s, v33);
          v124[v32] = Ogre::CSVParser::TableItem::Int(&v82);
          j_sprintf(s, "DropGroupOdds%d", v32);
          v83 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, s, v98);
          v124[v32 + 2] = Ogre::CSVParser::TableItem::Int(&v83);
        }
        while ( v32 != 2 );
        for ( j = 0; j != 3; v124[j + 7] = Ogre::CSVParser::TableItem::Int(&v85) )
        {
          j_sprintf(s, "DropItem%d", ++j);
          v84 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, s, v35);
          v124[j + 4] = Ogre::CSVParser::TableItem::Int(&v84);
          j_sprintf(s, "DropItemOdds%d", j);
          v85 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, s, v36);
        }
        v86 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "BurnDropItem", v98);
        v124[11] = Ogre::CSVParser::TableItem::Int(&v86);
        v87 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "BurnDropItemOdds", v37);
        v124[12] = Ogre::CSVParser::TableItem::Int(&v87);
        v88 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "FeedItem", v38);
        v124[15] = Ogre::CSVParser::TableItem::Int(&v88);
        v89 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "FeedOdds", v98);
        v124[16] = Ogre::CSVParser::TableItem::Int(&v89);
        v90 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "DropExp", v39);
        v124[13] = Ogre::CSVParser::TableItem::Int(&v90);
        v91 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "DropExpOdds", v40);
        v124[14] = Ogre::CSVParser::TableItem::Int(&v91);
        v92 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "ActiveAtk", v98);
        v125 = Ogre::CSVParser::TableItem::Bool(&v92);
        v93 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "CanTame", (int)&v102);
        v126 = Ogre::CSVParser::TableItem::Bool(&v93);
        v94 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "CanBreed", (int)&v102);
        v127 = Ogre::CSVParser::TableItem::Bool(&v94);
        v95 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "CanRide", v98);
        v128 = Ogre::CSVParser::TableItem::Bool(&v95);
        v96 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "CanTalk", (int)&v102);
        v129 = Ogre::CSVParser::TableItem::Bool(&v96);
        v41 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "HurtSound", (int)&v102);
        MyStringCpy(v131, 0x20u, v41);
        v42 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "DeathSound", v98);
        MyStringCpy(v132, 0x20u, v42);
        v44 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "SaySound", v43);
        MyStringCpy(v133, 0x20u, v44);
        v46 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "StepSound", v45);
        MyStringCpy(v134, 0x20u, v46);
        v47 = (const char *)Ogre::CSVParser::TableLine::operator[](v98 + v5, "Effect", v98);
        MyStringCpy(v135, 0x20u, v47);
        DefDataTable<MonsterDef>::AddRecord(v51, v102, &v102);
      }
    }
  }
  Ogre::CSVParser::~CSVParser((Ogre::CSVParser *)v97);
  return v52;
}


//======================================================================
// DefManager::loadMonsterBiomeCSV(char const*)
// address: 0x002AE520   size: 0xD6 (214 bytes)
//======================================================================
int __fastcall DefManager::loadMonsterBiomeCSV(DefManager *this, char *a2)
{
  int v3; // r7
  int v4; // r2
  int i; // r5
  int v6; // r0
  DefManager *v7; // r0
  DefManager *v8; // r6
  int j; // r4
  int v12; // [sp+Ch] [bp-48h]
  const char *v13; // [sp+10h] [bp-44h] BYREF
  const char *v14; // [sp+14h] [bp-40h] BYREF
  const char *v15; // [sp+18h] [bp-3Ch] BYREF
  int v16; // [sp+1Ch] [bp-38h] BYREF
  _BYTE v17[20]; // [sp+20h] [bp-34h] BYREF
  int v18; // [sp+34h] [bp-20h]
  int v19; // [sp+40h] [bp-14h]
  int v20; // [sp+48h] [bp-Ch]

  Ogre::CSVParser::CSVParser((Ogre::CSVParser *)v17);
  sub_3BF0BC((int)&v13, a2);
  v3 = Ogre::CSVParser::Load((Ogre::CSVParser *)v17, &v13);
  sub_3BDF80(&v13);
  if ( v3 != 0 )
  {
    v4 = v19;
    v20 = 1;
    v12 = v19;
    for ( i = 2; i < v12; ++i )
    {
      v14 = (const char *)Ogre::CSVParser::TableLine::operator[](v18 + 8 * i, "ID", v4);
      v6 = Ogre::CSVParser::TableItem::Int(&v14);
      if ( v6 != 0 )
      {
        v16 = v6;
        v7 = (DefManager *)std::_Rb_tree<int,std::pair<int const,MonsterDef>,std::_Select1st<std::pair<int const,MonsterDef>>,std::less<int>,std::allocator<std::pair<int const,MonsterDef>>>::find(
                             (int)this + 520,
                             &v16);
        v4 = 524;
        v8 = v7;
        if ( v7 != (DefManager *)((char *)this + 524) && v7 != (DefManager *)-20 )
        {
          for ( j = 0; j != 22; ++j )
          {
            v15 = (const char *)Ogre::CSVParser::TableLine::operator[](v18 + 8 * i, off_4536DC[j], (int)off_4536DC);
            if ( *v15 != 0 )
              *(_WORD *)((char *)v8 + j * 2 + 314) = Ogre::CSVParser::TableItem::Int(&v15);
          }
        }
      }
    }
  }
  Ogre::CSVParser::~CSVParser((Ogre::CSVParser *)v17);
  return v3;
}


//======================================================================
// DefManager::loadFoodCSV(char const*)
// address: 0x002AE600   size: 0x21A (538 bytes)
//======================================================================
int __fastcall DefManager::loadFoodCSV(DefManager *this, char *a2)
{
  int v3; // r2
  int i; // r3
  int v5; // r4
  int v6; // r0
  int v7; // r2
  int v8; // r2
  int v9; // r2
  int v10; // r5
  int v11; // r2
  int *v12; // r6
  int v13; // r2
  int v14; // r2
  int v15; // r2
  int v16; // r2
  char *v19; // [sp+4h] [bp-4Ch]
  _DWORD *v20; // [sp+8h] [bp-48h]
  int v21; // [sp+Ch] [bp-44h]
  int v22; // [sp+10h] [bp-40h]
  const char *v23; // [sp+1Ch] [bp-34h] BYREF
  const char *v24; // [sp+20h] [bp-30h] BYREF
  const char *v25; // [sp+24h] [bp-2Ch] BYREF
  const char *v26; // [sp+28h] [bp-28h] BYREF
  const char *v27; // [sp+2Ch] [bp-24h] BYREF
  const char *v28; // [sp+30h] [bp-20h] BYREF
  const char *v29; // [sp+34h] [bp-1Ch] BYREF
  const char *v30; // [sp+38h] [bp-18h] BYREF
  const char *v31; // [sp+3Ch] [bp-14h] BYREF
  const char *v32; // [sp+40h] [bp-10h] BYREF
  const char *v33; // [sp+44h] [bp-Ch] BYREF
  const char *v34; // [sp+48h] [bp-8h] BYREF
  const char *v35; // [sp+4Ch] [bp-4h] BYREF
  _BYTE v36[20]; // [sp+50h] [bp+0h] BYREF
  int v37; // [sp+64h] [bp+14h]
  int v38; // [sp+70h] [bp+20h]
  int v39; // [sp+78h] [bp+28h]
  int v40[19]; // [sp+80h] [bp+30h] BYREF
  char s[64]; // [sp+CCh] [bp+7Ch] BYREF

  Ogre::CSVParser::CSVParser((Ogre::CSVParser *)v36);
  sub_3BF0BC((int)&v23, a2);
  v21 = Ogre::CSVParser::Load((Ogre::CSVParser *)v36, &v23);
  sub_3BDF80(&v23);
  if ( v21 != 0 )
  {
    v20 = (_DWORD *)((char *)this + 544);
    std::_Rb_tree<int,std::pair<int const,FoodDef>,std::_Select1st<std::pair<int const,FoodDef>>,std::less<int>,std::allocator<std::pair<int const,FoodDef>>>::_M_erase(
      (int)this + 544,
      *((_DWORD **)this + 138));
    *((_DWORD *)this + 139) = (char *)this + 548;
    *((_DWORD *)this + 138) = 0;
    *((_DWORD *)this + 140) = (char *)this + 548;
    v3 = v38;
    *((_DWORD *)this + 141) = 0;
    v39 = 1;
    v22 = v3;
    for ( i = 2; ; i = (int)(v19 + 1) )
    {
      v19 = (char *)i;
      if ( i >= v22 )
        break;
      v5 = 8 * i;
      v40[0] = Ogre::CSVParser::TableLine::operator[](v37 + 8 * i, "ID", v37);
      v6 = Ogre::CSVParser::TableItem::Int((const char **)v40);
      if ( v6 != 0 )
      {
        v40[0] = v6;
        v24 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, "UseTime", v7);
        v40[1] = Ogre::CSVParser::TableItem::Int(&v24);
        v25 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, "AddFood", v8);
        v40[2] = Ogre::CSVParser::TableItem::Float(&v25);
        v26 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, "AddFoodSat", v37);
        v40[3] = Ogre::CSVParser::TableItem::Float(&v26);
        v27 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, "HealAmount", v9);
        v10 = 0;
        v40[4] = Ogre::CSVParser::TableItem::Int(&v27);
        do
        {
          j_sprintf(s, "BuffID%d", ++v10);
          v28 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, s, v11);
          v12 = &v40[v10];
          v12[4] = Ogre::CSVParser::TableItem::Int(&v28);
          j_sprintf(s, "BuffLevel%d", v10);
          v29 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, s, v37);
          v12[7] = Ogre::CSVParser::TableItem::Int(&v29);
          j_sprintf(s, "BuffTime%d", v10);
          v30 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, s, v13);
          v12[10] = Ogre::CSVParser::TableItem::Int(&v30);
        }
        while ( v10 != 3 );
        v31 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, "Container", v14);
        v40[14] = Ogre::CSVParser::TableItem::Int(&v31);
        v32 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, "UseMethod", v37);
        v40[15] = Ogre::CSVParser::TableItem::Int(&v32);
        v33 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, "EffectRadius", v15);
        v40[16] = Ogre::CSVParser::TableItem::Int(&v33);
        v34 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, "RandomBuff", v16);
        v40[17] = Ogre::CSVParser::TableItem::Int(&v34);
        v35 = (const char *)Ogre::CSVParser::TableLine::operator[](v37 + v5, "ClearBuff", v37);
        v40[18] = Ogre::CSVParser::TableItem::Int(&v35);
        DefDataTable<FoodDef>::AddRecord(v20, v40[0], v40);
      }
    }
  }
  Ogre::CSVParser::~CSVParser((Ogre::CSVParser *)v36);
  return v21;
}


//======================================================================
// DefManager::loadBuffCSV(char const*)
// address: 0x002AE854   size: 0x2BC (700 bytes)
//======================================================================
int __fastcall DefManager::loadBuffCSV(DefManager *this, char *a2)
{
  int v3; // r2
  int v4; // r4
  int v5; // r0
  int v6; // r2
  const char *v7; // r0
  int v8; // r2
  const char *v9; // r0
  const char *v10; // r0
  int v11; // r2
  int v12; // r2
  double v13; // r0
  double v14; // r0
  int v15; // r5
  int v16; // r2
  int v17; // r2
  const char *v18; // r7
  int v19; // r6
  unsigned int v20; // r3
  int v21; // r7
  float v22; // r0
  const char *v23; // r0
  int v24; // r2
  const char *v25; // r0
  int v26; // r2
  int v27; // r2
  const char *v28; // r0
  int v30; // [sp+0h] [bp-38h]
  int i; // [sp+4h] [bp-34h]
  _DWORD *v33; // [sp+8h] [bp-30h]
  int v34; // [sp+Ch] [bp-2Ch]
  int v35; // [sp+10h] [bp-28h]
  const char *v36; // [sp+18h] [bp-20h] BYREF
  const char *v37; // [sp+1Ch] [bp-1Ch] BYREF
  const char *v38; // [sp+20h] [bp-18h] BYREF
  const char *v39; // [sp+24h] [bp-14h] BYREF
  const char *v40; // [sp+28h] [bp-10h] BYREF
  const char *v41; // [sp+2Ch] [bp-Ch] BYREF
  const char *v42; // [sp+30h] [bp-8h] BYREF
  const char *v43; // [sp+34h] [bp-4h] BYREF
  _BYTE v44[20]; // [sp+38h] [bp+0h] BYREF
  int v45; // [sp+4Ch] [bp+14h]
  int v46; // [sp+58h] [bp+20h]
  int v47; // [sp+60h] [bp+28h]
  char s[64]; // [sp+68h] [bp+30h] BYREF
  int v49; // [sp+A8h] [bp+70h] BYREF
  char v50[32]; // [sp+ACh] [bp+74h] BYREF
  char v51[216]; // [sp+CCh] [bp+94h] BYREF
  char v52[32]; // [sp+1CCh] [bp+194h] BYREF
  int v53; // [sp+1ECh] [bp+1B4h]
  int v54; // [sp+1F0h] [bp+1B8h]
  int v55; // [sp+1F4h] [bp+1BCh]
  int v56; // [sp+1F8h] [bp+1C0h]
  int v57; // [sp+1FCh] [bp+1C4h]
  int v58; // [sp+200h] [bp+1C8h]
  char v59[32]; // [sp+22Ch] [bp+1F4h] BYREF
  char v60[32]; // [sp+24Ch] [bp+214h] BYREF
  char v61[32]; // [sp+26Ch] [bp+234h] BYREF

  Ogre::CSVParser::CSVParser((Ogre::CSVParser *)v44);
  sub_3BF0BC((int)&v36, a2);
  v34 = Ogre::CSVParser::Load((Ogre::CSVParser *)v44, &v36);
  sub_3BDF80(&v36);
  if ( v34 != 0 )
  {
    v33 = (_DWORD *)((char *)this + 568);
    std::_Rb_tree<int,std::pair<int const,BuffDef>,std::_Select1st<std::pair<int const,BuffDef>>,std::less<int>,std::allocator<std::pair<int const,BuffDef>>>::_M_erase(
      (int)this + 568,
      *((_DWORD **)this + 144));
    *((_DWORD *)this + 145) = (char *)this + 572;
    *((_DWORD *)this + 144) = 0;
    *((_DWORD *)this + 146) = (char *)this + 572;
    v3 = v46;
    *((_DWORD *)this + 147) = 0;
    v47 = 1;
    v35 = v3;
    for ( i = 2; i < v35; ++i )
    {
      v4 = 8 * i;
      v37 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + 8 * i, "ID", v45);
      v5 = Ogre::CSVParser::TableItem::Int(&v37);
      if ( v5 != 0 )
      {
        v49 = v5;
        v7 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "Name", v6);
        MyStringCpy(v50, 0x20u, v7);
        v9 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "Desc", v8);
        MyStringCpy(v51, 0x100u, v9);
        v10 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "ScriptName", v45);
        MyStringCpy(v52, 0x20u, v10);
        v38 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "Level", v11);
        v53 = Ogre::CSVParser::TableItem::Int(&v38);
        v39 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "EffectTime", v12);
        v13 = (float)(Ogre::CSVParser::TableItem::Float(&v39) / 0.05);
        v54 = (int)j_ceil(v13);
        v40 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "UpdatePeriod", v45);
        v14 = (float)(Ogre::CSVParser::TableItem::Float(&v40) / 0.05);
        v15 = 0;
        v55 = (int)j_ceil(v14);
        v58 = 0;
        do
        {
          j_sprintf(s, "AttrType%d", ++v15);
          v18 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, s, v16);
          if ( *v18 != 0 )
          {
            v19 = 0;
            v30 = v58;
            while ( j_strcasecmp(off_453734[v19], v18) != 0 )
            {
              if ( ++v19 == 32 )
              {
                if ( j_strcasecmp(v18, "SCRIPT_VAR") != 0 )
                {
                  Ogre::LogSetCurParam(
                    (int)"D:/work/oworldsrc/client/iworld/defmanager.cpp",
                    (const char *)&stru_438.st_size,
                    8,
                    v20);
                  Ogre::LogMessage((Ogre *)"loadBuffCSV failed: %s", v18);
                  v19 = -1;
                }
                break;
              }
            }
            *(_DWORD *)(v50 + 16 * v30 + 1376) = v19;
            j_sprintf(s, "AttrValue%d", v15);
            v21 = v58;
            v41 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, s, v45);
            v22 = Ogre::CSVParser::TableItem::Float(&v41);
            v17 = v58 + 1;
            *((float *)v50 + v21 + 91) = v22;
            v58 = v17;
          }
        }
        while ( v15 != 5 );
        v23 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "IconName", v17);
        MyStringCpy(v59, 0x20u, v23);
        v42 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "Type", v24);
        v56 = Ogre::CSVParser::TableItem::Int(&v42);
        v25 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "EffectName", v45);
        MyStringCpy(v60, 0x20u, v25);
        v43 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "SoundType", v26);
        v57 = Ogre::CSVParser::TableItem::Int(&v43);
        v28 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "SoundName", v27);
        MyStringCpy(v61, 0x20u, v28);
        DefDataTable<BuffDef>::AddRecord(v33, 1000 * v49 + v53, &v49);
      }
    }
  }
  Ogre::CSVParser::~CSVParser((Ogre::CSVParser *)v44);
  return v34;
}


//======================================================================
// DefManager::loadFurnaceCSV(char const*)
// address: 0x002AEB64   size: 0x10E (270 bytes)
//======================================================================
int __fastcall DefManager::loadFurnaceCSV(DefManager *this, char *a2)
{
  int v3; // r6
  _DWORD *v4; // r5
  char *v5; // r2
  char *v6; // r1
  int i; // r4
  int v8; // r7
  int v9; // r0
  const char *v10; // r0
  int v11; // r2
  int v12; // r2
  char *v15; // [sp+0h] [bp-84h]
  const char *v16; // [sp+8h] [bp-7Ch] BYREF
  const char *v17; // [sp+Ch] [bp-78h] BYREF
  const char *v18; // [sp+10h] [bp-74h] BYREF
  const char *v19; // [sp+14h] [bp-70h] BYREF
  _BYTE v20[20]; // [sp+18h] [bp-6Ch] BYREF
  int v21; // [sp+2Ch] [bp-58h]
  char *v22; // [sp+38h] [bp-4Ch]
  int v23; // [sp+40h] [bp-44h]
  int v24; // [sp+48h] [bp-3Ch] BYREF
  char v25[32]; // [sp+4Ch] [bp-38h] BYREF
  int v26; // [sp+6Ch] [bp-18h]
  int v27; // [sp+70h] [bp-14h]

  Ogre::CSVParser::CSVParser((Ogre::CSVParser *)v20);
  sub_3BF0BC((int)&v16, a2);
  v3 = Ogre::CSVParser::Load((Ogre::CSVParser *)v20, &v16);
  sub_3BDF80(&v16);
  if ( v3 != 0 )
  {
    v4 = (_DWORD *)((char *)this + 592);
    std::_Rb_tree<int,std::pair<int const,FurnaceDef>,std::_Select1st<std::pair<int const,FurnaceDef>>,std::less<int>,std::allocator<std::pair<int const,FurnaceDef>>>::_M_erase(
      (int)this + 592,
      *((_DWORD **)this + 150));
    v5 = (char *)this + 596;
    *((_DWORD *)this + 151) = (char *)this + 596;
    *((_DWORD *)this + 150) = 0;
    *((_DWORD *)this + 152) = (char *)this + 596;
    v6 = v22;
    *((_DWORD *)this + 153) = 0;
    v23 = 1;
    v15 = v6;
    for ( i = 2; i < (int)v15; ++i )
    {
      v8 = 8 * i;
      v17 = (const char *)Ogre::CSVParser::TableLine::operator[](v21 + 8 * i, "ID", (int)v5);
      v9 = Ogre::CSVParser::TableItem::Int(&v17);
      if ( v9 != 0 )
      {
        v24 = v9;
        v10 = (const char *)Ogre::CSVParser::TableLine::operator[](v21 + v8, "Name", (int)v5);
        MyStringCpy(v25, 0x20u, v10);
        v18 = (const char *)Ogre::CSVParser::TableLine::operator[](v21 + v8, "Heat", v11);
        v26 = Ogre::CSVParser::TableItem::Int(&v18);
        v19 = (const char *)Ogre::CSVParser::TableLine::operator[](v21 + v8, "Result", v12);
        v27 = Ogre::CSVParser::TableItem::Int(&v19);
        DefDataTable<FurnaceDef>::AddRecord(v4, v24, &v24);
      }
    }
  }
  Ogre::CSVParser::~CSVParser((Ogre::CSVParser *)v20);
  return v3;
}


//======================================================================
// DefManager::loadAchievementCSV(char const*)
// address: 0x002AEC88   size: 0x2D2 (722 bytes)
//======================================================================
int __fastcall DefManager::loadAchievementCSV(DefManager *this, char *a2)
{
  int v3; // r1
  int v4; // r4
  int v5; // r0
  int i; // r5
  int v7; // r2
  int v8; // r2
  int v9; // r2
  const char *v10; // r0
  int v11; // r2
  const char *v12; // r0
  int v13; // r2
  const char *v14; // r0
  int v15; // r2
  int v16; // r0
  int v17; // r2
  int v18; // r2
  int v19; // r5
  int *v20; // r6
  int v21; // r2
  char *v24; // [sp+4h] [bp-54h]
  _DWORD *v25; // [sp+8h] [bp-50h]
  int v26; // [sp+Ch] [bp-4Ch]
  int v27; // [sp+10h] [bp-48h]
  const char *v28; // [sp+18h] [bp-40h] BYREF
  const char *v29; // [sp+1Ch] [bp-3Ch] BYREF
  const char *v30; // [sp+20h] [bp-38h] BYREF
  const char *v31; // [sp+24h] [bp-34h] BYREF
  const char *v32; // [sp+28h] [bp-30h] BYREF
  const char *v33; // [sp+2Ch] [bp-2Ch] BYREF
  const char *v34; // [sp+30h] [bp-28h] BYREF
  const char *v35; // [sp+34h] [bp-24h] BYREF
  const char *v36; // [sp+38h] [bp-20h] BYREF
  const char *v37; // [sp+3Ch] [bp-1Ch] BYREF
  const char *v38; // [sp+40h] [bp-18h] BYREF
  const char *v39; // [sp+44h] [bp-14h] BYREF
  const char *v40; // [sp+48h] [bp-10h] BYREF
  const char *v41; // [sp+4Ch] [bp-Ch] BYREF
  const char *v42; // [sp+50h] [bp-8h] BYREF
  const char *v43; // [sp+54h] [bp-4h] BYREF
  _BYTE v44[20]; // [sp+58h] [bp+0h] BYREF
  int v45; // [sp+6Ch] [bp+14h]
  int v46; // [sp+78h] [bp+20h]
  int v47; // [sp+80h] [bp+28h]
  char s[64]; // [sp+88h] [bp+30h] BYREF
  int v49[8]; // [sp+C8h] [bp+70h] BYREF
  char v50[32]; // [sp+E8h] [bp+90h] BYREF
  char v51[256]; // [sp+108h] [bp+B0h] BYREF
  char v52[256]; // [sp+208h] [bp+1B0h] BYREF
  int v53; // [sp+308h] [bp+2B0h]
  bool v54; // [sp+30Ch] [bp+2B4h]
  int v55; // [sp+310h] [bp+2B8h]
  int v56; // [sp+314h] [bp+2BCh]
  int v57; // [sp+318h] [bp+2C0h]
  int v58; // [sp+31Ch] [bp+2C4h]
  int v59; // [sp+338h] [bp+2E0h]

  Ogre::CSVParser::CSVParser((Ogre::CSVParser *)v44);
  sub_3BF0BC((int)&v28, a2);
  v26 = Ogre::CSVParser::Load((Ogre::CSVParser *)v44, &v28);
  sub_3BDF80(&v28);
  if ( v26 != 0 )
  {
    v25 = (_DWORD *)((char *)this + 616);
    std::_Rb_tree<int,std::pair<int const,AchievementDef>,std::_Select1st<std::pair<int const,AchievementDef>>,std::less<int>,std::allocator<std::pair<int const,AchievementDef>>>::_M_erase(
      (int)this + 616,
      *((_DWORD **)this + 156));
    *((_DWORD *)this + 157) = (char *)this + 620;
    *((_DWORD *)this + 156) = 0;
    *((_DWORD *)this + 158) = (char *)this + 620;
    v3 = 2;
    *((_DWORD *)this + 159) = 0;
    v47 = 1;
    v27 = v46;
    while ( 1 )
    {
      v24 = (char *)v3;
      if ( v3 >= v27 )
        break;
      v4 = 8 * v3;
      v29 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + 8 * v3, "ID", v3);
      v5 = Ogre::CSVParser::TableItem::Int(&v29);
      if ( v5 != 0 )
      {
        v49[0] = v5;
        for ( i = 0; i != 4; v49[i] = Ogre::CSVParser::TableItem::Int(&v30) )
        {
          j_sprintf(s, "FrontID%d", ++i);
          v30 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, s, v7);
        }
        v31 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "IconID", v45);
        v49[5] = Ogre::CSVParser::TableItem::Int(&v31);
        v32 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "GridX", v8);
        v49[6] = Ogre::CSVParser::TableItem::Int(&v32);
        v33 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "GridY", v9);
        v49[7] = Ogre::CSVParser::TableItem::Int(&v33);
        v10 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "Name", v45);
        MyStringCpy(v50, 0x20u, v10);
        v12 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "Desc", v11);
        MyStringCpy(v51, 0x100u, v12);
        v14 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "TrackDesc", v13);
        MyStringCpy(v52, 0x100u, v14);
        v34 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "Group", v45);
        v53 = Ogre::CSVParser::TableItem::Int(&v34);
        v35 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "IsGroup", v15);
        v16 = Ogre::CSVParser::TableItem::Int(&v35);
        v54 = (v16 >> 31) - v16 < 0;
        v36 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "Type", (int)v49);
        v55 = Ogre::CSVParser::TableItem::Int(&v36);
        v37 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "Goal", v45);
        v56 = Ogre::CSVParser::TableItem::Int(&v37);
        v38 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "GoalId", v17);
        v57 = Ogre::CSVParser::TableItem::Int(&v38);
        v39 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "GoalNum", v18);
        v19 = 0;
        v58 = Ogre::CSVParser::TableItem::Int(&v39);
        do
        {
          j_sprintf(s, "RewardType%d", ++v19);
          v40 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, s, v45);
          v20 = &v49[v19];
          v20[149] = Ogre::CSVParser::TableItem::Int(&v40);
          j_sprintf(s, "RewardID%d", v19);
          v41 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, s, v45);
          v20[151] = Ogre::CSVParser::TableItem::Int(&v41);
          j_sprintf(s, "RewardNum%d", v19);
          v42 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, s, v45);
          v20[153] = Ogre::CSVParser::TableItem::Int(&v42);
        }
        while ( v19 != 2 );
        v43 = (const char *)Ogre::CSVParser::TableLine::operator[](v45 + v4, "Point", v21);
        v59 = Ogre::CSVParser::TableItem::Int(&v43);
        DefDataTable<AchievementDef>::AddRecord(v25, v49[0], v49);
      }
      v3 = (int)(v24 + 1);
    }
  }
  Ogre::CSVParser::~CSVParser((Ogre::CSVParser *)v44);
  return v26;
}


//======================================================================
// DefManager::loadEnchantCSV(char const*)
// address: 0x002AEFB0   size: 0x22A (554 bytes)
//======================================================================
int __fastcall DefManager::loadEnchantCSV(DefManager *this, char *a2)
{
  _DWORD *v3; // r6
  int v4; // r1
  int v5; // r4
  int v6; // r0
  const char *v7; // r0
  int v8; // r2
  const char *v9; // r7
  int v10; // r5
  int v11; // r2
  unsigned int v12; // r3
  int v13; // r2
  int v14; // r2
  int v15; // r2
  int v16; // r2
  const char *v17; // r0
  int v18; // r5
  int v19; // r2
  int i; // [sp+0h] [bp-38h]
  int v23; // [sp+4h] [bp-34h]
  int v24; // [sp+8h] [bp-30h]
  const char *v25; // [sp+10h] [bp-28h] BYREF
  const char *v26; // [sp+14h] [bp-24h] BYREF
  const char *v27; // [sp+18h] [bp-20h] BYREF
  const char *v28; // [sp+1Ch] [bp-1Ch] BYREF
  const char *v29; // [sp+20h] [bp-18h] BYREF
  const char *v30; // [sp+24h] [bp-14h] BYREF
  const char *v31; // [sp+28h] [bp-10h] BYREF
  const char *v32; // [sp+2Ch] [bp-Ch] BYREF
  const char *v33; // [sp+30h] [bp-8h] BYREF
  const char *v34; // [sp+34h] [bp-4h] BYREF
  _BYTE v35[20]; // [sp+38h] [bp+0h] BYREF
  int v36; // [sp+4Ch] [bp+14h]
  int v37; // [sp+58h] [bp+20h]
  int v38; // [sp+60h] [bp+28h]
  char v39[64]; // [sp+68h] [bp+30h] BYREF
  int v40; // [sp+A8h] [bp+70h] BYREF
  char v41[32]; // [sp+ACh] [bp+74h] BYREF
  int v42; // [sp+CCh] [bp+94h]
  int v43; // [sp+D0h] [bp+98h]
  float v44; // [sp+D4h] [bp+9Ch]
  float v45; // [sp+D8h] [bp+A0h]
  int v46; // [sp+DCh] [bp+A4h]
  int v47; // [sp+E0h] [bp+A8h]
  int v48; // [sp+E4h] [bp+ACh]
  char v49[256]; // [sp+E8h] [bp+B0h] BYREF
  _DWORD v50[13]; // [sp+1E8h] [bp+1B0h]

  Ogre::CSVParser::CSVParser((Ogre::CSVParser *)v35);
  sub_3BF0BC((int)&v25, a2);
  v23 = Ogre::CSVParser::Load((Ogre::CSVParser *)v35, &v25);
  sub_3BDF80(&v25);
  if ( v23 != 0 )
  {
    v3 = (_DWORD *)((char *)this + 640);
    std::_Rb_tree<int,std::pair<int const,EnchantDef>,std::_Select1st<std::pair<int const,EnchantDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantDef>>>::_M_erase(
      (int)this + 640,
      *((_DWORD **)this + 162));
    *((_DWORD *)this + 163) = (char *)this + 644;
    *((_DWORD *)this + 162) = 0;
    *((_DWORD *)this + 164) = (char *)this + 644;
    v4 = v37;
    *((_DWORD *)this + 165) = 0;
    v38 = 1;
    v24 = v4;
    for ( i = 2; i < v24; ++i )
    {
      v5 = 8 * i;
      v26 = (const char *)Ogre::CSVParser::TableLine::operator[](v36 + 8 * i, "ID", i);
      v6 = Ogre::CSVParser::TableItem::Int(&v26);
      if ( v6 != 0 )
      {
        v40 = v6;
        v7 = (const char *)Ogre::CSVParser::TableLine::operator[](v36 + v5, "Name", v36);
        MyStringCpy(v41, 0x20u, v7);
        v9 = (const char *)Ogre::CSVParser::TableLine::operator[](v36 + v5, "EnchantType", v8);
        v10 = 1;
        while ( j_strcasecmp(v9, off_4537B4[v10]) != 0 )
        {
          if ( ++v10 == 20 )
          {
            Ogre::LogSetCurParam(
              (int)"D:/work/oworldsrc/client/iworld/defmanager.cpp",
              (_BYTE *)&stru_4E8.st_value + 1,
              8,
              v12);
            Ogre::LogMessage((Ogre *)"load enchants.csv failed: type=%s", v9);
            v10 = 0;
            break;
          }
        }
        v42 = v10;
        v27 = (const char *)Ogre::CSVParser::TableLine::operator[](v36 + v5, "EnchantLevel", v11);
        v43 = Ogre::CSVParser::TableItem::Int(&v27);
        v28 = (const char *)Ogre::CSVParser::TableLine::operator[](v36 + v5, "EnchantValue1", v36);
        v44 = Ogre::CSVParser::TableItem::Float(&v28);
        v29 = (const char *)Ogre::CSVParser::TableLine::operator[](v36 + v5, "EnchantValue2", v13);
        v45 = Ogre::CSVParser::TableItem::Float(&v29);
        v30 = (const char *)Ogre::CSVParser::TableLine::operator[](v36 + v5, "AttackType", v14);
        v46 = Ogre::CSVParser::TableItem::Int(&v30);
        v31 = (const char *)Ogre::CSVParser::TableLine::operator[](v36 + v5, "TargetType", v36);
        v47 = Ogre::CSVParser::TableItem::Int(&v31);
        v32 = (const char *)Ogre::CSVParser::TableLine::operator[](v36 + v5, "ConflictID", v15);
        v48 = Ogre::CSVParser::TableItem::Int(&v32);
        v17 = (const char *)Ogre::CSVParser::TableLine::operator[](v36 + v5, "AttrDesc", v16);
        MyStringCpy(v49, 0x100u, v17);
        v33 = (const char *)Ogre::CSVParser::TableLine::operator[](v36 + v5, "Weight", v36);
        v18 = 0;
        v50[0] = Ogre::CSVParser::TableItem::Int(&v33);
        do
        {
          j_sprintf(v39, "ToolType%d", ++v18);
          v34 = (const char *)Ogre::CSVParser::TableLine::operator[](v36 + v5, v39, v19);
          v50[v18] = Ogre::CSVParser::TableItem::Int(&v34);
        }
        while ( v18 != 12 );
        DefDataTable<EnchantDef>::AddRecord(v3, 100 * v40 + v43, &v40);
      }
    }
  }
  Ogre::CSVParser::~CSVParser((Ogre::CSVParser *)v35);
  return v23;
}


//======================================================================
// DefManager::loadEnchantMentCSV(char const*)
// address: 0x002AF224   size: 0x1C0 (448 bytes)
//======================================================================
int __fastcall DefManager::loadEnchantMentCSV(DefManager *this, char *a2)
{
  int v3; // r2
  int i; // r3
  int v5; // r4
  char *v6; // r0
  int v7; // r6
  int v8; // r2
  int v9; // r0
  int v10; // r2
  int v11; // r6
  const char *v12; // r0
  int v13; // r5
  int v14; // r2
  int j; // r5
  int v16; // r2
  int k; // r5
  char *v20; // [sp+4h] [bp-34h]
  _DWORD *v21; // [sp+8h] [bp-30h]
  int v22; // [sp+Ch] [bp-2Ch]
  int v23; // [sp+10h] [bp-28h]
  const char *v24; // [sp+1Ch] [bp-1Ch] BYREF
  int v25; // [sp+20h] [bp-18h] BYREF
  const char *v26; // [sp+24h] [bp-14h] BYREF
  const char *v27; // [sp+28h] [bp-10h] BYREF
  const char *v28; // [sp+2Ch] [bp-Ch] BYREF
  const char *v29; // [sp+30h] [bp-8h] BYREF
  const char *v30; // [sp+34h] [bp-4h] BYREF
  _BYTE v31[20]; // [sp+38h] [bp+0h] BYREF
  int v32; // [sp+4Ch] [bp+14h]
  int v33; // [sp+58h] [bp+20h]
  int v34; // [sp+60h] [bp+28h]
  char v35[64]; // [sp+68h] [bp+30h] BYREF
  int v36; // [sp+A8h] [bp+70h] BYREF
  char v37[32]; // [sp+ACh] [bp+74h] BYREF
  _DWORD v38[16]; // [sp+CCh] [bp+94h]

  Ogre::CSVParser::CSVParser((Ogre::CSVParser *)v31);
  sub_3BF0BC((int)&v24, a2);
  v22 = Ogre::CSVParser::Load((Ogre::CSVParser *)v31, &v24);
  sub_3BDF80(&v24);
  if ( v22 != 0 )
  {
    v21 = (_DWORD *)((char *)this + 664);
    std::_Rb_tree<int,std::pair<int const,EnchantMentDef>,std::_Select1st<std::pair<int const,EnchantMentDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantMentDef>>>::_M_erase(
      (int)this + 664,
      *((_DWORD **)this + 168));
    *((_DWORD *)this + 169) = (char *)this + 668;
    *((_DWORD *)this + 168) = 0;
    *((_DWORD *)this + 170) = (char *)this + 668;
    v3 = v33;
    *((_DWORD *)this + 171) = 0;
    v34 = 1;
    v23 = v3;
    for ( i = 2; ; i = (int)(v20 + 1) )
    {
      v20 = (char *)i;
      if ( i >= v23 )
        break;
      v5 = 8 * i;
      v6 = (char *)Ogre::CSVParser::TableLine::operator[](v32 + 8 * i, "StuffType", v32);
      sub_3BF0BC((int)&v25, v6);
      v7 = *(_DWORD *)(v25 - 12);
      sub_3BDF80(&v25);
      if ( v7 != 0 )
      {
        v26 = (const char *)Ogre::CSVParser::TableLine::operator[](v32 + v5, "StuffType", v8);
        v9 = Ogre::CSVParser::TableItem::Int(&v26);
        v11 = v9;
        if ( v9 >= 0 )
        {
          v36 = v9;
          v12 = (const char *)Ogre::CSVParser::TableLine::operator[](v32 + v5, "CurrencyType", v10);
          MyStringCpy(v37, 0x20u, v12);
          v27 = (const char *)Ogre::CSVParser::TableLine::operator[](v32 + v5, "Cost", v32);
          v13 = 0;
          v38[0] = Ogre::CSVParser::TableItem::Int(&v27);
          do
          {
            j_sprintf(v35, "MergeCost%d", ++v13);
            v28 = (const char *)Ogre::CSVParser::TableLine::operator[](v32 + v5, v35, v14);
            v38[v13] = Ogre::CSVParser::TableItem::Int(&v28);
          }
          while ( v13 != 5 );
          for ( j = 0; j != 5; v38[j + 5] = Ogre::CSVParser::TableItem::Int(&v29) )
          {
            j_sprintf(v35, "AttrWeight%d", ++j);
            v29 = (const char *)Ogre::CSVParser::TableLine::operator[](v32 + v5, v35, v16);
          }
          for ( k = 0; k != 5; v38[k + 10] = Ogre::CSVParser::TableItem::Int(&v30) )
          {
            j_sprintf(v35, "LevelWeight%d", ++k);
            v30 = (const char *)Ogre::CSVParser::TableLine::operator[](v32 + v5, v35, v32);
          }
          DefDataTable<EnchantMentDef>::AddRecord(v21, v11, &v36);
        }
      }
    }
  }
  Ogre::CSVParser::~CSVParser((Ogre::CSVParser *)v31);
  return v22;
}


//======================================================================
// DefManager::loadStringDef(char const*)
// address: 0x002AF404   size: 0xE2 (226 bytes)
//======================================================================
int __fastcall DefManager::loadStringDef(DefManager *this, char *a2)
{
  int v4; // r2
  int i; // r7
  const char *v6; // r0
  const char *v7; // r0
  const char *v8; // r0
  int v10; // [sp+0h] [bp-54h]
  int v11; // [sp+4h] [bp-50h]
  int v12; // [sp+8h] [bp-4Ch]
  int v13; // [sp+Ch] [bp-48h]
  const char *v14; // [sp+10h] [bp-44h] BYREF
  const char *v15[3]; // [sp+14h] [bp-40h] BYREF
  _BYTE v16[20]; // [sp+20h] [bp-34h] BYREF
  int v17; // [sp+34h] [bp-20h]
  int v18; // [sp+40h] [bp-14h]
  int v19; // [sp+48h] [bp-Ch]

  Ogre::CSVParser::CSVParser((Ogre::CSVParser *)v16);
  sub_3BF0BC((int)&v14, a2);
  v12 = Ogre::CSVParser::Load((Ogre::CSVParser *)v16, &v14);
  sub_3BDF80(&v14);
  if ( v12 != 0 )
  {
    std::_Rb_tree<int,std::pair<int const,StringDef>,std::_Select1st<std::pair<int const,StringDef>>,std::less<int>,std::allocator<std::pair<int const,StringDef>>>::_M_erase(
      (int)this + 748,
      *((_DWORD **)this + 189));
    *((_DWORD *)this + 190) = (char *)this + 752;
    *((_DWORD *)this + 189) = 0;
    *((_DWORD *)this + 191) = (char *)this + 752;
    v4 = v18;
    *((_DWORD *)this + 192) = 0;
    v19 = 1;
    v13 = v4;
    for ( i = 2; i < v13; ++i )
    {
      v11 = 8 * i;
      v15[0] = (const char *)Ogre::CSVParser::TableLine::operator[](v17 + 8 * i, "ID", v17);
      v6 = (const char *)Ogre::CSVParser::TableItem::Int(v15);
      v10 = (int)v6;
      if ( v6 != nullptr )
      {
        v15[0] = v6;
        v7 = (const char *)Ogre::CSVParser::TableLine::operator[](v17 + v11, "zh", v11);
        v15[1] = MyCopyString(v7);
        v8 = (const char *)Ogre::CSVParser::TableLine::operator[](v17 + v11, "en", v11);
        v15[2] = MyCopyString(v8);
        DefDataTable<StringDef>::AddRecord((_DWORD *)this + 187, v10, v15);
      }
    }
  }
  Ogre::CSVParser::~CSVParser((Ogre::CSVParser *)v16);
  return v12;
}


//======================================================================
// DefManager::loadChestDef(char const*)
// address: 0x002AF4F4   size: 0x1B0 (432 bytes)
//======================================================================
int __fastcall DefManager::loadChestDef(DefManager *this, char *a2)
{
  int v3; // r2
  int v4; // r4
  int v5; // r0
  int v6; // r2
  int v7; // r5
  int v8; // r2
  int v9; // r2
  int v10; // r5
  int v11; // r2
  int *v12; // r6
  int v13; // r2
  int i; // [sp+4h] [bp-38h]
  _DWORD *v17; // [sp+8h] [bp-34h]
  int v18; // [sp+Ch] [bp-30h]
  int v19; // [sp+10h] [bp-2Ch]
  const char *v20; // [sp+1Ch] [bp-20h] BYREF
  const char *v21; // [sp+20h] [bp-1Ch] BYREF
  const char *v22; // [sp+24h] [bp-18h] BYREF
  const char *v23; // [sp+28h] [bp-14h] BYREF
  const char *v24; // [sp+2Ch] [bp-10h] BYREF
  const char *v25; // [sp+30h] [bp-Ch] BYREF
  const char *v26; // [sp+34h] [bp-8h] BYREF
  const char *v27; // [sp+38h] [bp-4h] BYREF
  _BYTE v28[20]; // [sp+3Ch] [bp+0h] BYREF
  int v29; // [sp+50h] [bp+14h]
  int v30; // [sp+5Ch] [bp+20h]
  int v31; // [sp+64h] [bp+28h]
  int v32[34]; // [sp+6Ch] [bp+30h] BYREF
  char s[64]; // [sp+F4h] [bp+B8h] BYREF

  Ogre::CSVParser::CSVParser((Ogre::CSVParser *)v28);
  sub_3BF0BC((int)&v20, a2);
  v18 = Ogre::CSVParser::Load((Ogre::CSVParser *)v28, &v20);
  sub_3BDF80(&v20);
  if ( v18 != 0 )
  {
    v17 = (_DWORD *)((char *)this + 772);
    std::_Rb_tree<int,std::pair<int const,ChestDef>,std::_Select1st<std::pair<int const,ChestDef>>,std::less<int>,std::allocator<std::pair<int const,ChestDef>>>::_M_erase(
      (int)this + 772,
      *((_DWORD **)this + 195));
    *((_DWORD *)this + 196) = (char *)this + 776;
    *((_DWORD *)this + 195) = 0;
    *((_DWORD *)this + 197) = (char *)this + 776;
    v3 = v30;
    *((_DWORD *)this + 198) = 0;
    v31 = 1;
    v19 = v3;
    for ( i = 2; i < v19; ++i )
    {
      v4 = 8 * i;
      v32[0] = Ogre::CSVParser::TableLine::operator[](v29 + 8 * i, "ID", v29);
      v5 = Ogre::CSVParser::TableItem::Int((const char **)v32);
      if ( v5 != 0 )
      {
        v7 = 100 * v5;
        v21 = (const char *)Ogre::CSVParser::TableLine::operator[](v29 + v4, "GroupID", v6);
        v32[0] = v7 + Ogre::CSVParser::TableItem::Int(&v21);
        v22 = (const char *)Ogre::CSVParser::TableLine::operator[](v29 + v4, "Key", v8);
        v32[1] = Ogre::CSVParser::TableItem::Int(&v22);
        v23 = (const char *)Ogre::CSVParser::TableLine::operator[](v29 + v4, "GroupOdds", v29);
        v32[2] = Ogre::CSVParser::TableItem::Int(&v23);
        v24 = (const char *)Ogre::CSVParser::TableLine::operator[](v29 + v4, "OddsMethod", v9);
        v10 = 0;
        v32[3] = Ogre::CSVParser::TableItem::Int(&v24);
        do
        {
          j_sprintf(s, "ItemID%d", ++v10);
          v25 = (const char *)Ogre::CSVParser::TableLine::operator[](v29 + v4, s, v11);
          v12 = &v32[v10];
          v12[3] = Ogre::CSVParser::TableItem::Int(&v25);
          j_sprintf(s, "ItemNum%d", v10);
          v26 = (const char *)Ogre::CSVParser::TableLine::operator[](v29 + v4, s, v29);
          v12[13] = Ogre::CSVParser::TableItem::Int(&v26);
          j_sprintf(s, "ItemOdds%d", v10);
          v27 = (const char *)Ogre::CSVParser::TableLine::operator[](v29 + v4, s, v13);
          v12[23] = Ogre::CSVParser::TableItem::Int(&v27);
        }
        while ( v10 != 10 );
        DefDataTable<ChestDef>::AddRecord(v17, v32[0], v32);
      }
    }
  }
  Ogre::CSVParser::~CSVParser((Ogre::CSVParser *)v28);
  return v18;
}


//======================================================================
// DefManager::loadVoxelPalette(char const*)
// address: 0x002AF6C8   size: 0xDC (220 bytes)
//======================================================================
int __fastcall DefManager::loadVoxelPalette(DefManager *this, char *a2)
{
  int v3; // r6
  int i; // r5
  int j; // r4
  const char *String; // r0
  __int16 v7; // r0
  int v8; // r3
  _DWORD *v9; // r3
  int v11; // [sp+8h] [bp-54h]
  char *v12; // [sp+Ch] [bp-50h]
  const char *v14; // [sp+1Ch] [bp-40h] BYREF
  char *v15; // [sp+20h] [bp-3Ch] BYREF
  const char *v16; // [sp+24h] [bp-38h] BYREF
  _BYTE v17[20]; // [sp+28h] [bp-34h] BYREF
  int v18; // [sp+3Ch] [bp-20h]
  int v19; // [sp+48h] [bp-14h]

  Ogre::CSVParser::CSVParser((Ogre::CSVParser *)v17);
  sub_3BF0BC((int)&v14, a2);
  v11 = Ogre::CSVParser::Load((Ogre::CSVParser *)v17, &v14);
  sub_3BDF80(&v14);
  if ( v11 != 0 )
  {
    v3 = v19;
    if ( v19 > 32 )
      v3 = 32;
    v15 = (char *)operator new(0x200u);
    j_memset(v15, 0, 0x200u);
    for ( i = 0; i < v3; ++i )
    {
      for ( j = 0; j != 8; ++j )
      {
        v12 = v15;
        String = (const char *)Ogre::CSVParser::GetString(
                                 *(Ogre::CSVParser **)(v18 + 8 * i),
                                 *(_DWORD *)(v18 + 8 * i + 4),
                                 j);
        Ogre::CSVParser::TableItem::TableItem(&v16, String);
        v7 = Ogre::CSVParser::TableItem::Short(&v16);
        v8 = 2 * (j + -8 * i + 248);
        *(_WORD *)&v12[v8] = v7;
      }
    }
    v9 = *((_DWORD **)this + 182);
    if ( v9 == *((_DWORD **)this + 183) )
    {
      std::vector<VoxelPalette *>::_M_emplace_back_aux<VoxelPalette * const&>((int)this + 724, &v15);
    }
    else
    {
      if ( v9 != nullptr )
        *v9 = v15;
      *((_DWORD *)this + 182) += 4;
    }
  }
  Ogre::CSVParser::~CSVParser((Ogre::CSVParser *)v17);
  return v11;
}


//======================================================================
// DefManager::load(void)
// address: 0x002AF7A4   size: 0x28A (650 bytes)
//======================================================================
int __fastcall DefManager::load(DefManager *this)
{
  unsigned int v2; // r3
  const char *v3; // r1
  unsigned int v4; // r3
  int BlockDefCSV; // r4
  const char *v6; // r1
  char *v7; // r0
  unsigned int v8; // r3
  unsigned int v9; // r3
  unsigned int v10; // r3
  unsigned int v11; // r3
  unsigned int v12; // r3
  unsigned int v13; // r3
  unsigned int v14; // r3
  unsigned int v15; // r3
  unsigned int v16; // r3
  unsigned int v17; // r3
  unsigned int v18; // r3
  unsigned int v19; // r3
  int v20; // r6
  unsigned int v21; // r3
  unsigned int v22; // r3
  unsigned int v23; // r3
  char s[256]; // [sp+4h] [bp-108h] BYREF

  DefManager::clear(this);
  if ( DefManager::loadRandomNames(this, "csvdef/random_names.csv") == 0 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/defmanager.cpp", (const char *)&dword_E4 + 2, 8, v2);
    Ogre::LogMessage((Ogre *)"load random_names.csv failed", v3);
  }
  BlockDefCSV = DefManager::loadBlockDefCSV(this, "csvdef/blockdef.csv");
  if ( BlockDefCSV == 0 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/defmanager.cpp", (const char *)&dword_E8 + 2, 8, v4);
    v7 = "load blockdef.csv failed";
LABEL_37:
    Ogre::LogMessage((Ogre *)v7, v6);
    return BlockDefCSV;
  }
  BlockDefCSV = DefManager::loadOreCSV(this, "csvdef/oredef.csv");
  if ( BlockDefCSV == 0 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/defmanager.cpp", (const char *)&dword_F0, 8, v8);
    v7 = "load oredef.csv failed";
    goto LABEL_37;
  }
  BlockDefCSV = DefManager::loadBiomeCSV(this, "csvdef/biomedef.csv");
  if ( BlockDefCSV == 0 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/defmanager.cpp", (const char *)&off_FC + 1, 8, v9);
    v7 = "load biomedef.csv failed";
    goto LABEL_37;
  }
  BlockDefCSV = DefManager::loadItemCSV(this, "csvdef/itemdef.csv");
  if ( BlockDefCSV == 0 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/defmanager.cpp", (const char *)&dword_100 + 3, 8, v10);
    v7 = "load itemdef.csv failed";
    goto LABEL_37;
  }
  BlockDefCSV = DefManager::loadToolCSV(this, "csvdef/tooldef.csv");
  if ( BlockDefCSV == 0 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/defmanager.cpp", (const char *)&dword_108 + 1, 8, v11);
    v7 = "load tooldef.csv failed";
    goto LABEL_37;
  }
  BlockDefCSV = DefManager::loadCraftingCSV(this, "csvdef/crafting.csv");
  if ( BlockDefCSV == 0 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/defmanager.cpp", (const char *)&dword_10C + 3, 8, v12);
    v7 = "load crafting.csv failed";
    goto LABEL_37;
  }
  BlockDefCSV = DefManager::loadMonsterCSV(this, "csvdef/monster.csv");
  if ( BlockDefCSV == 0 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/defmanager.cpp", (const char *)&dword_114 + 1, 8, v13);
    v7 = "load monster.csv failed";
    goto LABEL_37;
  }
  BlockDefCSV = DefManager::loadMonsterBiomeCSV(this, "csvdef/monsterbiomedef.csv");
  if ( BlockDefCSV == 0 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/defmanager.cpp", (const char *)&dword_118 + 3, 8, v14);
    v7 = "load monsterbiomedef.csv failed";
    goto LABEL_37;
  }
  BlockDefCSV = DefManager::loadFoodCSV(this, "csvdef/fooddef.csv");
  if ( BlockDefCSV == 0 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/defmanager.cpp", (const char *)&dword_120 + 1, 8, v15);
    v7 = "load food.csv failed";
    goto LABEL_37;
  }
  BlockDefCSV = DefManager::loadBuffCSV(this, "csvdef/buffdef.csv");
  if ( BlockDefCSV == 0 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/defmanager.cpp", (const char *)&dword_124 + 3, 8, v16);
    v7 = "load buff.csv failed";
    goto LABEL_37;
  }
  BlockDefCSV = DefManager::loadEnchantCSV(this, "csvdef/enchant.csv");
  if ( BlockDefCSV == 0 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/defmanager.cpp", (const char *)&dword_12C + 1, 8, v17);
    v7 = "load enchant.csv failed";
    goto LABEL_37;
  }
  BlockDefCSV = DefManager::loadEnchantMentCSV(this, "csvdef/enchantment.csv");
  if ( BlockDefCSV == 0 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/defmanager.cpp", (const char *)&dword_130 + 3, 8, v18);
    v7 = "load enchantment.csv failed";
    goto LABEL_37;
  }
  BlockDefCSV = DefManager::loadFurnaceCSV(this, "csvdef/furnace.csv");
  if ( BlockDefCSV == 0 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/defmanager.cpp", "em/bin/linker", 8, v19);
    v7 = "load furnace.csv failed";
    goto LABEL_37;
  }
  v20 = 0;
  BlockDefCSV = DefManager::loadAchievementCSV(this, "csvdef/achievement.csv");
  if ( BlockDefCSV == 0 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/defmanager.cpp", "n/linker", 8, v21);
    v7 = "load achievement.csv failed";
    goto LABEL_37;
  }
  do
  {
    j_sprintf(s, "csvdef/voxpal_%d.csv", v20);
    if ( DefManager::loadVoxelPalette(this, s) == 0 )
      break;
    ++v20;
  }
  while ( v20 != 100 );
  BlockDefCSV = DefManager::loadStringDef(this, "csvdef/stringdef.csv");
  if ( BlockDefCSV == 0 )
  {
    Ogre::LogSetCurParam(
      (int)"D:/work/oworldsrc/client/iworld/defmanager.cpp",
      (const char *)&stru_148.st_name + 3,
      8,
      v22);
    v7 = "load stringdef.csv failed";
    goto LABEL_37;
  }
  BlockDefCSV = DefManager::loadChestDef(this, "csvdef/chestdef.csv");
  if ( BlockDefCSV == 0 )
  {
    Ogre::LogSetCurParam(
      (int)"D:/work/oworldsrc/client/iworld/defmanager.cpp",
      (const char *)&stru_148.st_size + 1,
      8,
      v23);
    v7 = "load chestdef.csv failed";
    goto LABEL_37;
  }
  return BlockDefCSV;
}

