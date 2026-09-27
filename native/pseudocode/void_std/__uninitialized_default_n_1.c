// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::__uninitialized_default_n_1

//======================================================================
// void std::__uninitialized_default_n_1<true>::__uninit_default_n<ActorBuff *,unsigned int>(ActorBuff *,unsigned int)
// address: 0x0026AA78   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall std::__uninitialized_default_n_1<true>::__uninit_default_n<ActorBuff *,unsigned int>(
        _DWORD *result,
        int a2)
{
  while ( a2 != 0 )
  {
    *result = 0;
    result[1] = 0;
    result[2] = 0;
    result[3] = 0;
    --a2;
    result += 4;
  }
  return result;
}


//======================================================================
// void std::__uninitialized_default_n_1<true>::__uninit_default_n<BackPackGrid *,unsigned int>(BackPackGrid *,unsigned int)
// address: 0x002B5994   size: 0x2C (44 bytes)
//======================================================================
void *__fastcall std::__uninitialized_default_n_1<true>::__uninit_default_n<BackPackGrid *,unsigned int>(
        char *a1,
        int a2)
{
  void *result; // r0
  _BYTE v5[52]; // [sp+4h] [bp-34h] BYREF

  result = j_memset(v5, 0, sizeof(v5));
  while ( a2 != 0 )
  {
    result = j_memcpy(a1, v5, 0x34u);
    --a2;
    a1 += 52;
  }
  return result;
}


//======================================================================
// void std::__uninitialized_default_n_1<true>::__uninit_default_n<AutoCorrectCache *,unsigned int>(AutoCorrectCache *,unsigned int)
// address: 0x002E25A4   size: 0x2A (42 bytes)
//======================================================================
void *__fastcall std::__uninitialized_default_n_1<true>::__uninit_default_n<AutoCorrectCache *,unsigned int>(
        char *a1,
        int a2)
{
  void *result; // r0
  _BYTE v5[96]; // [sp+0h] [bp-60h] BYREF

  result = j_memset(v5, 0, sizeof(v5));
  while ( a2 != 0 )
  {
    result = j_memcpy(a1, v5, 0x60u);
    --a2;
    a1 += 96;
  }
  return result;
}

