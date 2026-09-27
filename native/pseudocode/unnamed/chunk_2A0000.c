// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_2A0000

//======================================================================
// sub_2A4920
// address: 0x002A4920   size: 0x76 (118 bytes)
//======================================================================
float __fastcall sub_2A4920(float *a1, int a2)
{
  float v4; // r7
  float v5; // r6
  float result; // r0

  v4 = (float)(1.0 / (float)*(int *)(a2 + 28)) * 0.99609;
  v5 = (float)(1.0 / (float)*(int *)(a2 + 32)) * 0.99609;
  Ogre::Matrix3::makeScaleVector2Matrix((Ogre::Matrix3 *)a1, v4, v5);
  a1[6] = (float)((float)(int)GenRandomInt(*(_DWORD *)(a2 + 28)) * v4) + 0.0039062;
  result = (float)((float)(int)GenRandomInt(*(_DWORD *)(a2 + 32)) * v5) + 0.0039062;
  a1[7] = result;
  return result;
}


//======================================================================
// sub_2A499C
// address: 0x002A499C   size: 0x48 (72 bytes)
//======================================================================
int __fastcall sub_2A499C(World *a1, const WCoord *a2)
{
  int result; // r0
  int i; // r5
  _DWORD v6[4]; // [sp+Ch] [bp-10h] BYREF

  result = World::isRaining(a1);
  if ( result != 0 )
  {
    result = World::canLightningStrikeAt(a1, a2);
    if ( result == 0 )
    {
      for ( i = 0; i != 12; i += 3 )
      {
        operator+(v6, (int *)a2, &g_DirectionCoord[i]);
        result = World::canLightningStrikeAt(a1, (const WCoord *)v6);
        if ( result != 0 )
          break;
      }
    }
  }
  return result;
}


//======================================================================
// sub_2A63AC
// address: 0x002A63AC   size: 0x10A (266 bytes)
//======================================================================
int __fastcall sub_2A63AC(int *a1, _DWORD *a2, int a3, int a4)
{
  _DWORD *v6; // r3
  int v7; // r7
  int v8; // r5
  int v9; // r7
  int v10; // r1
  int v11; // r5
  int v12; // r3
  int result; // r0
  int v14; // r7
  char *v15; // r6
  int v16; // r3
  int v17; // r6
  int v18; // [sp+4h] [bp-20h]
  int v19; // [sp+8h] [bp-1Ch]
  int v20; // [sp+Ch] [bp-18h]
  int v21; // [sp+10h] [bp-14h]
  int v22; // [sp+14h] [bp-10h]

  v19 = 100 * *a2 + 50;
  v6 = (_DWORD *)((char *)&unk_445FC8 + 24 * a3);
  v7 = 50 * *v6;
  v18 = 100 * a2[2] + 50;
  v8 = 50 * v6[2];
  v21 = v19 + v7;
  v20 = 50 * v6[3] - v7;
  v22 = v18 + v8;
  v9 = 50 * v6[5] - v8;
  if ( v20 != 0 )
  {
    v12 = *a1;
    if ( v9 != 0 )
    {
      v11 = ((v12 - v21) * v20 + (a1[2] - v22) * v9) / 50;
    }
    else
    {
      a1[2] = v18;
      v11 = -100 * *a2 + v12;
    }
  }
  else
  {
    v10 = a1[2];
    *a1 = v19;
    v11 = -100 * a2[2] + v10;
  }
  *a1 = v21 + v11 * v20 / 100;
  result = v22 + v11 * v9 / 100;
  a1[2] = result;
  if ( a4 != 0 )
  {
    v14 = a2[1];
    v15 = (char *)&unk_445FC8 + 24 * a3;
    v16 = 50 * *((_DWORD *)v15 + 1);
    v17 = 2 * (50 * *((_DWORD *)v15 + 4) - v16);
    result = 100 * v14 + 50 + v16 + v11 * v17 / 100;
    if ( v17 >= 0 )
    {
      if ( v17 != 0 )
        result += 50;
    }
    else
    {
      result += 100;
    }
    a1[1] = result;
  }
  return result;
}


//======================================================================
// sub_2A7B9C
// address: 0x002A7B9C   size: 0x2C (44 bytes)
//======================================================================
const void *__fastcall sub_2A7B9C(int a1, const WCoord *a2)
{
  const void *result; // r0
  _DWORD *v3; // r3

  result = (const void *)WorldContainerMgr::getContainer(*(WorldContainerMgr **)(a1 + 128), a2);
  if ( result != nullptr )
  {
    v3 = _dynamic_cast(
           result,
           (const struct __class_type_info *)&`typeinfo for'WorldContainer,
           (const struct __class_type_info *)&`typeinfo for'WorldValueContainer,
           0);
    result = nullptr;
    if ( v3 != nullptr )
      return (const void *)v3[12];
  }
  return result;
}


//======================================================================
// sub_2A96AC
// address: 0x002A96AC   size: 0x84 (132 bytes)
//======================================================================
void *__fastcall sub_2A96AC(char *a1, char *a2, int a3, int a4, _DWORD *a5, const char *a6)
{
  size_t v6; // r5
  void *result; // r0
  int v10; // r5
  int v11; // r2
  int v12; // r3
  const char *v16; // [sp+18h] [bp-10Ch] BYREF
  char s[256]; // [sp+1Ch] [bp-108h] BYREF

  v6 = 4 * a3;
  j_memset(a1, 0, 4 * a3);
  result = j_memset(a2, 0, v6);
  v10 = 0;
  while ( (int)*a5 > 0 )
  {
    j_sprintf(s, "%s%d", a6, *a5);
    v16 = (const char *)Ogre::CSVParser::TableLine::operator[](a4, s, v11);
    result = (void *)Ogre::CSVParser::TableItem::Int(&v16);
    if ( (int)result > 0 )
    {
      v12 = 4 * v10;
      *(_DWORD *)&a1[v12] = *a5;
      ++v10;
      *(_DWORD *)&a2[v12] = result;
      if ( v10 >= a3 )
        break;
    }
    ++a5;
  }
  return result;
}


//======================================================================
// sub_2A99A0
// address: 0x002A99A0   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_2A99A0(int result, int a2)
{
  int v2; // r5
  unsigned int v4; // r3

  v2 = result;
  if ( a2 > 0 )
  {
    result = DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, a2);
    if ( result == 0 )
    {
      Ogre::LogSetCurParam(
        (int)"D:/work/oworldsrc/client/iworld/defmanager.cpp",
        (const char *)&stru_188.st_size + 2,
        8,
        v4);
      return Ogre::LogMessage((Ogre *)"biome %s use not-exist block: %d", (const char *)(v2 + 4), a2);
    }
  }
  return result;
}


//======================================================================
// sub_2AA68C
// address: 0x002AA68C   size: 0x32 (50 bytes)
//======================================================================
__int64 __fastcall sub_2AA68C(__int64 a1)
{
  int v1; // r4
  char *v2; // r0
  char **v3; // r3
  char **v4; // r2
  __int64 v6; // [sp+0h] [bp-8h] BYREF

  v6 = a1;
  v1 = a1;
  if ( *(_BYTE *)HIDWORD(a1) != 0 )
  {
    v2 = j_strdup((const char *)HIDWORD(a1));
    v3 = *(char ***)(v1 + 4);
    v4 = *(char ***)(v1 + 8);
    HIDWORD(v6) = v2;
    if ( v3 == v4 )
    {
      std::vector<char *>::_M_emplace_back_aux<char *>(v1, (_DWORD *)&v6 + 1);
    }
    else
    {
      if ( v3 != nullptr )
        *v3 = v2;
      *(_DWORD *)(v1 + 4) += 4;
    }
  }
  return v6;
}

