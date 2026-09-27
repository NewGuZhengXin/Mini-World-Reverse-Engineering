// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BaseItemMesh

//======================================================================
// BaseItemMesh::setOverlay(int)
// address: 0x002A07B6   size: 0x2 (2 bytes)
//======================================================================
void __fastcall BaseItemMesh::setOverlay(BaseItemMesh *this, int a2)
{
  ;
}


//======================================================================
// BaseItemMesh::~BaseItemMesh()
// address: 0x002A07C8   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN12BaseItemMeshD1Ev'
void __fastcall BaseItemMesh::~BaseItemMesh(BaseItemMesh *this)
{
  *(_DWORD *)this = &off_45C9C0;
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// BaseItemMesh::~BaseItemMesh()
// address: 0x002A07E4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BaseItemMesh::~BaseItemMesh(BaseItemMesh *this)
{
  BaseItemMesh::~BaseItemMesh(this);
  operator delete(this);
}

