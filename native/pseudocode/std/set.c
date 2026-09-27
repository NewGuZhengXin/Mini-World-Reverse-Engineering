// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std::set

//======================================================================
// std::set<DirectionType,std::less<DirectionType>,std::allocator<DirectionType>>::insert(DirectionType&&)
// address: 0x0029BA64   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall std::set<DirectionType>::insert(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // r3
  _DWORD *v6; // r5
  int v7; // r2
  _DWORD *v8; // r1
  int v9; // r4
  char v10; // r3
  void *v11; // r0
  _BOOL4 v13; // [sp+4h] [bp-10h]
  _DWORD *v14; // [sp+8h] [bp-Ch]

  v4 = (_DWORD *)a2[2];
  v14 = a2 + 1;
  v6 = a2 + 1;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = v4;
    v4 = v8;
  }
  if ( v7 != 0 )
  {
    if ( v6 == (_DWORD *)a2[3] )
      goto LABEL_13;
    v9 = sub_391E44(v6);
  }
  else
  {
    v9 = (int)v6;
  }
  if ( *(_DWORD *)(v9 + 16) >= *a3 )
  {
    v10 = 0;
    goto LABEL_19;
  }
LABEL_13:
  v13 = v6 == v14 || *a3 < v6[4];
  v11 = (void *)operator new(0x14u);
  v9 = (int)v11;
  if ( v11 != nullptr )
  {
    j_memset(v11, 0, 0x10u);
    *(_DWORD *)(v9 + 16) = *a3;
  }
  sub_391E64(v13, v9, v6, v14);
  ++a2[5];
  v10 = 1;
LABEL_19:
  *(_DWORD *)a1 = v9;
  *(_BYTE *)(a1 + 4) = v10;
  return a1;
}


//======================================================================
// std::set<Chunk *,std::less<Chunk *>,std::allocator<Chunk *>>::insert(Chunk * const&)
// address: 0x002CEDC4   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall std::set<Chunk *>::insert(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // r3
  _DWORD *v6; // r5
  int v7; // r2
  _DWORD *v8; // r1
  int v9; // r4
  char v10; // r3
  void *v11; // r0
  _BOOL4 v13; // [sp+4h] [bp-10h]
  _DWORD *v14; // [sp+8h] [bp-Ch]

  v4 = (_DWORD *)a2[2];
  v14 = a2 + 1;
  v6 = a2 + 1;
  v7 = 1;
  while ( v4 != nullptr )
  {
    if ( *a3 >= v4[4] )
    {
      v8 = (_DWORD *)v4[3];
      v7 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4[2];
      v7 = 1;
    }
    v6 = v4;
    v4 = v8;
  }
  if ( v7 != 0 )
  {
    if ( v6 == (_DWORD *)a2[3] )
      goto LABEL_13;
    v9 = sub_391E44(v6);
  }
  else
  {
    v9 = (int)v6;
  }
  if ( *(_DWORD *)(v9 + 16) >= *a3 )
  {
    v10 = 0;
    goto LABEL_19;
  }
LABEL_13:
  v13 = v6 == v14 || *a3 < v6[4];
  v11 = (void *)operator new(0x14u);
  v9 = (int)v11;
  if ( v11 != nullptr )
  {
    j_memset(v11, 0, 0x10u);
    *(_DWORD *)(v9 + 16) = *a3;
  }
  sub_391E64(v13, v9, v6, v14);
  ++a2[5];
  v10 = 1;
LABEL_19:
  *(_DWORD *)a1 = v9;
  *(_BYTE *)(a1 + 4) = v10;
  return a1;
}

