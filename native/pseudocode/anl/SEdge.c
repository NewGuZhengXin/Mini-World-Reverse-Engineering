// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::SEdge

//======================================================================
// anl::SEdge::SEdge(int,int,TVec3D<float>,int,int,TVec3D<float>)
// address: 0x0032ECA6   size: 0x5E (94 bytes)
//======================================================================
// Alternative name is '_ZN3anl5SEdgeC1Eii6TVec3DIfEiiS2_'
_DWORD *__fastcall anl::SEdge::SEdge(_DWORD *result, int a2, int a3, _DWORD *a4, int a5, int a6, _DWORD *a7)
{
  int v7; // r3
  int v8; // r4

  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  result[8] = 0;
  result[9] = 0;
  if ( a3 >= a6 )
  {
    result[4] = *a7;
    result[5] = a7[1];
    v8 = a7[2];
    *result = a5;
    result[1] = a6;
    result[6] = v8;
    result[2] = a2;
    result[3] = a3;
    result[7] = *a4;
    result[8] = a4[1];
    result[9] = a4[2];
  }
  else
  {
    result[4] = *a4;
    result[5] = a4[1];
    v7 = a4[2];
    *result = a2;
    result[1] = a3;
    result[6] = v7;
    result[2] = a5;
    result[3] = a6;
    result[7] = *a7;
    result[8] = a7[1];
    result[9] = a7[2];
  }
  return result;
}


//======================================================================
// anl::SEdge::SEdge(anl::SEdge const&)
// address: 0x0032F258   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN3anl5SEdgeC1ERKS0_'
_DWORD *__fastcall anl::SEdge::SEdge(_DWORD *result, _DWORD *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  result[7] = a2[7];
  result[8] = a2[8];
  result[9] = a2[9];
  return result;
}

