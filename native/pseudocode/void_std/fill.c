// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::fill

//======================================================================
// void std::fill<std::_Deque_iterator<CullStep,CullStep&,CullStep*>,CullStep>(std::_Deque_iterator<CullStep,CullStep&,CullStep*>,std::_Deque_iterator<CullStep,CullStep&,CullStep*>,CullStep const&)
// address: 0x002CF516   size: 0x7C (124 bytes)
//======================================================================
_DWORD *__fastcall std::fill<std::_Deque_iterator<CullStep,CullStep&,CullStep*>,CullStep>(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3)
{
  _DWORD *result; // r0
  _DWORD *v5; // r3
  int v6; // r5
  int v7; // r6
  int v8; // r2
  _DWORD v10[4]; // [sp+8h] [bp-54h] BYREF
  _DWORD *v11; // [sp+18h] [bp-44h] BYREF
  _DWORD *v12; // [sp+1Ch] [bp-40h]
  _DWORD *v13; // [sp+20h] [bp-3Ch]
  _DWORD *v14; // [sp+24h] [bp-38h]
  _DWORD v15[4]; // [sp+28h] [bp-34h] BYREF
  _DWORD *v16; // [sp+38h] [bp-24h] BYREF
  _DWORD v17[5]; // [sp+48h] [bp-14h] BYREF

  std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(v10, a1);
  std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(v17, v10);
  std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(&v11, v17);
  std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(v15, a2);
  std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(v17, v15);
  result = std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(&v16, v17);
  while ( 1 )
  {
    v5 = v11;
    if ( v11 == v16 )
      break;
    v6 = a3[1];
    v7 = a3[2];
    *v11 = *a3;
    v5[1] = v6;
    v5[2] = v7;
    v5[3] = a3[3];
    result = v13;
    v11 += 4;
    if ( v11 == v13 )
    {
      v8 = *++v14 + 512;
      v12 = (_DWORD *)*v14;
      v13 = (_DWORD *)v8;
      v11 = v12;
    }
  }
  return result;
}

