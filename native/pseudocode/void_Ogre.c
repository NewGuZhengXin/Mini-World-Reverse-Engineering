// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_Ogre

//======================================================================
// void Ogre::_stripify<short>(short *,short *)
// address: 0x00180384   size: 0x66 (102 bytes)
//======================================================================
_WORD *__fastcall Ogre::_stripify<short>(int a1, _WORD *a2, int a3)
{
  int i; // r5
  int v6; // r0
  _WORD *v7; // r2
  int j; // r3
  __int16 v9; // r1
  _WORD *v11; // [sp+0h] [bp-Ch]

  for ( i = 0; ; ++i )
  {
    v11 = (_WORD *)(a1 + 2 * (_DWORD)Ogre::_indexMapBuf(nullptr, 2 * i, a3));
    v6 = a1 + 2 * (_DWORD)Ogre::_indexMapBuf(nullptr, 2 * i + 2, i + 1);
    if ( i != 0 )
      *a2++ = *v11;
    v7 = a2;
    for ( j = 0; j != 9; ++j )
    {
      *v7 = v11[j];
      v9 = *(_WORD *)(v6 + j * 2);
      v7[1] = v9;
      v7 += 2;
    }
    if ( i == 7 )
      break;
    a3 = *(unsigned __int16 *)(v6 + 16);
    a2[18] = a3;
    a2 += 19;
  }
  return v11;
}


//======================================================================
// void Ogre::DeletePointerArray<BiomeDef>(std::vector<BiomeDef *,std::allocator<BiomeDef *>> &)
// address: 0x002A9D40   size: 0x22 (34 bytes)
//======================================================================
void __fastcall Ogre::DeletePointerArray<BiomeDef>(int *a1)
{
  unsigned int i; // r4
  int v3; // r3

  for ( i = 0; ; ++i )
  {
    v3 = *a1;
    if ( i >= (a1[1] - *a1) >> 2 )
      break;
    operator delete(*(void **)(4 * i + v3));
  }
  a1[1] = v3;
}


//======================================================================
// void Ogre::DeletePointerArray<ItemDef>(std::vector<ItemDef *,std::allocator<ItemDef *>> &)
// address: 0x002A9D62   size: 0x22 (34 bytes)
//======================================================================
void __fastcall Ogre::DeletePointerArray<ItemDef>(int *a1)
{
  unsigned int i; // r4
  int v3; // r3

  for ( i = 0; ; ++i )
  {
    v3 = *a1;
    if ( i >= (a1[1] - *a1) >> 2 )
      break;
    operator delete(*(void **)(4 * i + v3));
  }
  a1[1] = v3;
}

