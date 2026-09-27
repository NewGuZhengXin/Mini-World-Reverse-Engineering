// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: PathFinderPath

//======================================================================
// PathFinderPath::sortBack(int)
// address: 0x002D5AA0   size: 0x30 (48 bytes)
//======================================================================
int __fastcall PathFinderPath::sortBack(PathFinderPath *this, int a2)
{
  int v2; // r3
  int v3; // r6
  int v4; // r2
  int v5; // r4

  v2 = *(_DWORD *)(4 * a2 + *(_DWORD *)this);
  v3 = *(_DWORD *)(v2 + 28);
  while ( 1 )
  {
    v4 = *(_DWORD *)this;
    if ( a2 <= 0 )
      break;
    v5 = *(_DWORD *)(v4 + 4 * ((a2 - 1) >> 1));
    if ( v3 >= *(_DWORD *)(v5 + 28) )
      break;
    *(_DWORD *)(v4 + 4 * a2) = v5;
    *(_DWORD *)(v5 + 16) = a2;
    a2 = (a2 - 1) >> 1;
  }
  *(_DWORD *)(v4 + 4 * a2) = v2;
  *(_DWORD *)(v2 + 16) = a2;
  return 4 * a2;
}


//======================================================================
// PathFinderPath::sortForward(int)
// address: 0x002D5AD0   size: 0x78 (120 bytes)
//======================================================================
int *__fastcall PathFinderPath::sortForward(int *this, unsigned int a2)
{
  int v2; // r4
  unsigned int v3; // r2
  int v4; // r3
  unsigned int v5; // r12
  int v6; // r6
  int v7; // r7
  int v8; // r12
  int v9; // [sp+0h] [bp-14h]
  int v10; // [sp+8h] [bp-Ch]

  v2 = *(_DWORD *)(4 * a2 + *this);
  v10 = *(_DWORD *)(v2 + 28);
  while ( 1 )
  {
    v3 = 2 * a2 + 1;
    v4 = *this;
    v5 = (*(this + 1) - *this) >> 2;
    if ( v3 >= v5 )
      break;
    v6 = *(_DWORD *)(v4 + 4 * v3);
    v9 = *(_DWORD *)(v6 + 28);
    if ( 2 * a2 + 2 >= v5 )
    {
      if ( v9 == 0x7FFFFFFF )
        break;
LABEL_5:
      if ( v9 >= v10 )
        break;
      *(_DWORD *)(v4 + 4 * a2) = v6;
      *(_DWORD *)(v6 + 16) = a2;
      goto LABEL_7;
    }
    v7 = *(_DWORD *)(v4 + 4 * v3 + 4);
    v8 = *(_DWORD *)(v7 + 28);
    if ( v9 < v8 )
      goto LABEL_5;
    if ( v8 >= v10 )
      break;
    v3 = 2 * a2 + 2;
    *(_DWORD *)(4 * a2 + v4) = v7;
    *(_DWORD *)(v7 + 16) = a2;
LABEL_7:
    a2 = v3;
  }
  *(_DWORD *)(v4 + 4 * a2) = v2;
  *(_DWORD *)(v2 + 16) = a2;
  return this;
}


//======================================================================
// PathFinderPath::addPoint(PathFinderNode *)
// address: 0x002D6B44   size: 0x86 (134 bytes)
//======================================================================
int __fastcall PathFinderPath::addPoint(PathFinderPath *this, int a2)
{
  _DWORD *v3; // r3
  unsigned int v5; // r0
  unsigned int v6; // r5
  _DWORD *v7; // r3
  int v8; // r7
  int byte_count; // [sp+0h] [bp-Ch]
  int v11; // [sp+4h] [bp-8h]

  v3 = *((_DWORD **)this + 1);
  v11 = ((int)v3 - *(_DWORD *)this) >> 2;
  if ( v3 == *((_DWORD **)this + 2) )
  {
    v5 = std::vector<PathFinderNode *>::_M_check_len(this, 1u, (int)"vector::_M_emplace_back_aux");
    byte_count = 4 * v5;
    if ( v5 != 0 )
    {
      if ( v5 > 0x3FFFFFFF )
        sub_3BCEB4(v5);
      v5 = operator new(byte_count);
    }
    v6 = v5;
    v7 = (_DWORD *)(v5 + 4 * ((*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2));
    if ( v7 != nullptr )
      *v7 = a2;
    v8 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<PathFinderNode *>(
           *(void **)this,
           *((_DWORD *)this + 1),
           (void *)v5);
    sub_2D5A2C(*(void **)this);
    *(_DWORD *)this = v6;
    *((_DWORD *)this + 1) = v8 + 4;
    *((_DWORD *)this + 2) = v6 + byte_count;
  }
  else
  {
    if ( v3 != nullptr )
      *v3 = a2;
    *((_DWORD *)this + 1) += 4;
  }
  *(_DWORD *)(a2 + 16) = v11;
  PathFinderPath::sortBack(this, v11);
  return a2;
}

