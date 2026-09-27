// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: SnowCubeMaterial

//======================================================================
// SnowCubeMaterial::~SnowCubeMaterial()
// address: 0x002A7988   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16SnowCubeMaterialD1Ev'
void __fastcall SnowCubeMaterial::~SnowCubeMaterial(SnowCubeMaterial *this)
{
  *(_DWORD *)this = &off_45D288;
  BasicBlockMaterial::~BasicBlockMaterial(this);
}


//======================================================================
// SnowCubeMaterial::~SnowCubeMaterial()
// address: 0x002A79A4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall SnowCubeMaterial::~SnowCubeMaterial(SnowCubeMaterial *this)
{
  SnowCubeMaterial::~SnowCubeMaterial(this);
  operator delete(this);
}


//======================================================================
// SnowCubeMaterial::blockTick(World *,WCoord const&)
// address: 0x002A7A9C   size: 0x56 (86 bytes)
//======================================================================
__int64 __fastcall SnowCubeMaterial::blockTick(__int64 this, const WCoord *a2)
{
  __int64 v5; // [sp+0h] [bp-Ch]

  v5 = this;
  if ( (int)World::getBlockTorchIllum(
              (World *)HIDWORD(this),
              *(_DWORD *)a2 + dword_516664,
              *((_DWORD *)a2 + 1) + dword_516668,
              *((_DWORD *)a2 + 2) + dword_51666C) > 11 )
  {
    HIDWORD(v5) = 1065353216;
    (*(void (__fastcall **)(_DWORD, _DWORD, const WCoord *, _DWORD, int))(*(_DWORD *)this + 180))(
      this,
      HIDWORD(this),
      a2,
      0,
      1);
    World::setBlockAll((World *)HIDWORD(this), a2, 0, 0, 3);
  }
  return v5;
}

