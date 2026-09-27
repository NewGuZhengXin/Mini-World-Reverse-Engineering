// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: RandomPermutation

//======================================================================
// RandomPermutation::popNumber(ChunkRandGen &)
// address: 0x002F986C   size: 0x42 (66 bytes)
//======================================================================
int __fastcall RandomPermutation::popNumber(RandomPermutation *this, ChunkRandGen *a2)
{
  int v2; // r6
  int v3; // r7
  int *v6; // r1
  int result; // r0

  v2 = *(_DWORD *)this;
  v3 = *((_DWORD *)this + 1);
  if ( *(_DWORD *)this == v3 )
    return -1;
  ChunkRandGen::_dorand48((unsigned __int16 *)a2);
  v6 = (int *)(*(_DWORD *)this
             + 4
             * (((*((unsigned __int16 *)a2 + 2) << 16) | (unsigned int)*((unsigned __int16 *)a2 + 1)) % ((v3 - v2) >> 2)));
  result = *v6;
  *v6 = *(_DWORD *)(*((_DWORD *)this + 1) - 4);
  *((_DWORD *)this + 1) -= 4;
  return result;
}


//======================================================================
// RandomPermutation::RandomPermutation(int)
// address: 0x002FA726   size: 0x48 (72 bytes)
//======================================================================
// Alternative name is '_ZN17RandomPermutationC1Ei'
void __fastcall RandomPermutation::RandomPermutation(RandomPermutation *this, int a2, int a3)
{
  int v3; // r3
  int v6; // r2
  int *v7; // r3
  _DWORD v8[2]; // [sp+4h] [bp-8h] BYREF

  v3 = 0;
  v8[0] = a2;
  v8[1] = a3;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  while ( 1 )
  {
    v8[0] = v3;
    v6 = v3;
    if ( v3 >= a2 )
      break;
    v7 = *((int **)this + 1);
    if ( v7 == *((int **)this + 2) )
    {
      std::vector<int>::_M_emplace_back_aux<int const&>((int)this, v8);
    }
    else
    {
      if ( v7 != nullptr )
        *v7 = v6;
      *((_DWORD *)this + 1) += 4;
    }
    v3 = v8[0] + 1;
  }
}

