// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WCoord

//======================================================================
// WCoord::operator+=(WCoord const&)
// address: 0x0026B14E   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall WCoord::operator+=(_DWORD *result, _DWORD *a2)
{
  *result += *a2;
  result[1] += a2[1];
  result[2] += a2[2];
  return result;
}


//======================================================================
// WCoord::length(void)
// address: 0x0029DEB8   size: 0x70 (112 bytes)
//======================================================================
float __fastcall WCoord::length(WCoord *this)
{
  return j_sqrt(
           (double)*(int *)this * (double)*(int *)this
         + (double)*((int *)this + 1) * (double)*((int *)this + 1)
         + (double)*((int *)this + 2) * (double)*((int *)this + 2));
}


//======================================================================
// WCoord::squareDistanceTo(WCoord const&)
// address: 0x002D5A38   size: 0x26 (38 bytes)
//======================================================================
int __fastcall WCoord::squareDistanceTo(_DWORD *a1, _DWORD *a2)
{
  int v2; // r4
  int v3; // r3
  int v4; // r1

  v2 = *a1 - *a2;
  v3 = a2[2];
  v4 = a1[1] - a2[1];
  return v2 * v2 + v4 * v4 + (a1[2] - v3) * (a1[2] - v3);
}

