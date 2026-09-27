// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ImgCalMeshData

//======================================================================
// ImgCalMeshData::~ImgCalMeshData()
// address: 0x002C2514   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN14ImgCalMeshDataD1Ev'
void __fastcall ImgCalMeshData::~ImgCalMeshData(ImgCalMeshData *this)
{
  void *v2; // r0
  void *v3; // r0

  v2 = *((void **)this + 9);
  if ( v2 != nullptr )
    operator delete(v2);
  v3 = *((void **)this + 6);
  if ( v3 != nullptr )
    operator delete(v3);
}

