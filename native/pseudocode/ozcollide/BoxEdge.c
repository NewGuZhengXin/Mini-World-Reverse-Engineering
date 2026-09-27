// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ozcollide::BoxEdge

//======================================================================
// ozcollide::BoxEdge::BoxEdge(ozcollide::Vec3f const&,ozcollide::Vec3f const&)
// address: 0x001D5B72   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide7BoxEdgeC1ERKNS_5Vec3fES3_'
_DWORD *__fastcall ozcollide::BoxEdge::BoxEdge(_DWORD *result, _DWORD *a2, _DWORD *a3)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = *a3;
  result[4] = a3[1];
  result[5] = a3[2];
  return result;
}

