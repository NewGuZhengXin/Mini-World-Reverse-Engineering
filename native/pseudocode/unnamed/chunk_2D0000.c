// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_2D0000

//======================================================================
// sub_2D5A2C
// address: 0x002D5A2C   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_2D5A2C(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}


//======================================================================
// sub_2D8800
// address: 0x002D8800   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_2D8800(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}


//======================================================================
// sub_2DC824
// address: 0x002DC824   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall sub_2DC824(char *a1, char *a2, _DWORD *a3)
{
  char *v3; // r3
  _DWORD *v4; // r4

  v3 = a1;
  v4 = a3;
  while ( v3 != a2 )
  {
    if ( v4 != nullptr )
    {
      *v4 = *(_DWORD *)v3;
      v4[1] = *((_DWORD *)v3 + 1);
      v4[2] = *((_DWORD *)v3 + 2);
    }
    v3 += 12;
    v4 += 3;
  }
  return &a3[3 * ((-1431655764 * ((unsigned int)(v3 - a1) >> 2)) >> 2)];
}


//======================================================================
// sub_2DD7EC
// address: 0x002DD7EC   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall sub_2DD7EC(_DWORD *result, _DWORD *a2, int a3)
{
  int v3; // r3
  int v4; // r3
  int v5; // r4
  _DWORD *v6; // r2

  v3 = a2[1];
  result[2] = a3;
  result[1] = v3;
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  v4 = 0;
  result[7] = a2[7];
  while ( v4 < a2[7] )
  {
    v5 = a2[v4 + 8];
    v6 = &result[v4++];
    v6[8] = v5;
  }
  return result;
}


//======================================================================
// sub_2DEFFE
// address: 0x002DEFFE   size: 0xD2 (210 bytes)
//======================================================================
bool __fastcall sub_2DEFFE(_DWORD *a1, int a2, int a3, int *a4, int *a5, int *a6, int *a7)
{
  int v7; // r2
  int v8; // r2
  int v9; // r6
  int i; // r5
  int j; // r5
  int v13; // [sp+4h] [bp-10h]
  int v15; // [sp+Ch] [bp-8h]

  *a4 = -1;
  *a5 = -1;
  *a6 = a2;
  *a7 = a3;
  v7 = 0;
  while ( 2 )
  {
    if ( v7 < a2 )
    {
      v9 = 52 * v7;
      for ( i = 0; i < a3; ++i )
      {
        v13 = *(_DWORD *)(*a1 + v9 + 4);
        v9 += 52 * a2;
        if ( v13 != 0 )
        {
          if ( *a4 < 0 )
            *a4 = v7;
          goto LABEL_25;
        }
      }
      if ( i != a3 || *a4 < 0 )
      {
LABEL_25:
        ++v7;
        continue;
      }
      *a6 = v7;
    }
    break;
  }
  v15 = 0;
  v8 = 0;
LABEL_11:
  if ( v8 < a3 )
  {
    for ( j = 0; j < a2; ++j )
    {
      if ( *(_DWORD *)(52 * (v15 + j) + *a1 + 4) != 0 )
      {
        if ( *a5 < 0 )
          *a5 = v8;
LABEL_10:
        ++v8;
        v15 += a2;
        goto LABEL_11;
      }
    }
    if ( j != a2 || *a5 < 0 )
      goto LABEL_10;
    *a7 = v8;
  }
  return *a4 >= 0 && *a5 >= 0;
}

