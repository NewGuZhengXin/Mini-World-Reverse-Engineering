// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: CubeBlockMaterial

//======================================================================
// CubeBlockMaterial::getFaceMtl(DirectionType,int)
// address: 0x002BE17A   size: 0xA (10 bytes)
//======================================================================
int __fastcall CubeBlockMaterial::getFaceMtl(int a1, int a2)
{
  return *(_DWORD *)(a1 + 4 * (a2 + 20) + 4);
}


//======================================================================
// CubeBlockMaterial::getFaceUVTile(DirectionType)
// address: 0x002BE184   size: 0xA (10 bytes)
//======================================================================
int __fastcall CubeBlockMaterial::getFaceUVTile(int a1, int a2)
{
  return *(_DWORD *)(a1 + 4 * (a2 + 14) + 4);
}


//======================================================================
// CubeBlockMaterial::getFaceTexture(DirectionType,BlockTexDesc &)
// address: 0x002BE270   size: 0x18 (24 bytes)
//======================================================================
int __fastcall CubeBlockMaterial::getFaceTexture(int a1, int a2, int a3)
{
  *(_BYTE *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 0;
  return BlockTexElement::getTexture(*(BlockTexElement **)(a1 + 4 * (a2 + 14) + 4), 0);
}


//======================================================================
// CubeBlockMaterial::getDestroyTexture(Block *,BlockTexDesc &)
// address: 0x002BE288   size: 0x10 (16 bytes)
//======================================================================
int __fastcall CubeBlockMaterial::getDestroyTexture(int a1, int a2, int a3)
{
  *(_BYTE *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 0;
  return BlockTexElement::getTexture(*(BlockTexElement **)(a1 + 60), 0);
}


//======================================================================
// CubeBlockMaterial::~CubeBlockMaterial()
// address: 0x002BE654   size: 0x30 (48 bytes)
//======================================================================
// Alternative name is '_ZN17CubeBlockMaterialD1Ev'
void __fastcall CubeBlockMaterial::~CubeBlockMaterial(CubeBlockMaterial *this)
{
  int v2; // r5
  _DWORD *v3; // r0

  v2 = 0;
  *(_DWORD *)this = &off_45EF38;
  do
  {
    v3 = *(_DWORD **)((char *)this + v2 + 84);
    if ( v3 != nullptr )
    {
      Ogre::BaseObject::release(v3);
      *(_DWORD *)((char *)this + v2 + 84) = 0;
    }
    v2 += 4;
  }
  while ( v2 != 24 );
  SolidBlockMaterial::~SolidBlockMaterial(this);
}


//======================================================================
// CubeBlockMaterial::~CubeBlockMaterial()
// address: 0x002BE688   size: 0x12 (18 bytes)
//======================================================================
void __fastcall CubeBlockMaterial::~CubeBlockMaterial(CubeBlockMaterial *this)
{
  CubeBlockMaterial::~CubeBlockMaterial(this);
  operator delete(this);
}


//======================================================================
// CubeBlockMaterial::CubeBlockMaterial(void)
// address: 0x002BED30   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN17CubeBlockMaterialC1Ev'
void __fastcall CubeBlockMaterial::CubeBlockMaterial(CubeBlockMaterial *this)
{
  int i; // r3
  char *v3; // r2

  SolidBlockMaterial::SolidBlockMaterial(this);
  *(_DWORD *)this = &off_45EF38;
  for ( i = 0; i != 24; i += 4 )
  {
    v3 = (char *)this + i;
    *((_DWORD *)v3 + 15) = 0;
    *((_DWORD *)v3 + 21) = 0;
  }
}


//======================================================================
// CubeBlockMaterial::setFaceMtl(DirectionType,Ogre::Material *,BlockTexElement *)
// address: 0x002BED5C   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall CubeBlockMaterial::setFaceMtl(int a1, int a2, int a3, int a4)
{
  int v5; // r5
  _DWORD *result; // r0

  if ( a4 != 0 )
    *(_DWORD *)(a1 + 4 * (a2 + 14) + 4) = a4;
  v5 = a1 + 4 * a2;
  result = *(_DWORD **)(v5 + 84);
  if ( result != nullptr )
  {
    result = Ogre::BaseObject::release(result);
    *(_DWORD *)(v5 + 84) = 0;
  }
  if ( a3 != 0 )
  {
    result = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a3 + 4))(a3);
    *(_DWORD *)(v5 + 84) = a3;
  }
  return result;
}

