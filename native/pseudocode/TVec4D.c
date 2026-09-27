// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TVec4D

//======================================================================
// TVec4D<float>::TVec4D(TVec4D<float> const&)
// address: 0x00316D0E   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZN6TVec4DIfEC1ERKS0_'
_DWORD *__fastcall TVec4D<float>::TVec4D(_DWORD *result, _DWORD *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  return result;
}

