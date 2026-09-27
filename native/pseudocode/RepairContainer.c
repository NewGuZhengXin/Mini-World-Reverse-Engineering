// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: RepairContainer

//======================================================================
// RepairContainer::canPutItem(int)
// address: 0x002EC0E0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall RepairContainer::canPutItem(RepairContainer *this, int a2)
{
  return 1;
}


//======================================================================
// RepairContainer::~RepairContainer()
// address: 0x002EC0E4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN15RepairContainerD1Ev'
void __fastcall RepairContainer::~RepairContainer(RepairContainer *this)
{
  *(_DWORD *)this = &off_462010;
  PackContainer::~PackContainer(this);
}


//======================================================================
// RepairContainer::~RepairContainer()
// address: 0x002EC100   size: 0x12 (18 bytes)
//======================================================================
void __fastcall RepairContainer::~RepairContainer(RepairContainer *this)
{
  RepairContainer::~RepairContainer(this);
  operator delete(this);
}


//======================================================================
// RepairContainer::RepairContainer(int,int)
// address: 0x002EC114   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN15RepairContainerC2Eii'
void __fastcall RepairContainer::RepairContainer(RepairContainer *this, int a2, int a3)
{
  PackContainer::PackContainer(this, a2, a3);
  *(_DWORD *)this = &off_462010;
}


//======================================================================
// RepairContainer::doRepair(int)
// address: 0x002EC130   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall RepairContainer::doRepair(_DWORD *this, int a2)
{
  int v2; // r3
  int v3; // r2

  v2 = *(this + 3);
  v3 = *(_DWORD *)(v2 + 4);
  if ( v3 != 0 )
  {
    *(_DWORD *)(v2 + 108) = v3;
    *(_DWORD *)(*(this + 3) + 116) = *(_DWORD *)(*(this + 3) + 12) + a2;
    *(_DWORD *)(*(this + 3) + 112) = *(_DWORD *)(*(this + 3) + 8);
    *(_DWORD *)(*(this + 3) + 120) = *(_DWORD *)(*(this + 3) + 16);
    *(_DWORD *)(*(this + 3) + 128) = *(_DWORD *)(*(this + 3) + 24);
    *(_DWORD *)(*(this + 3) + 124) = *(_DWORD *)(*(this + 3) + 20);
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *, int))(*this + 12))(this, 15002);
  }
  return this;
}


//======================================================================
// RepairContainer::afterChangeGrid(int)
// address: 0x002EC16C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall RepairContainer::afterChangeGrid(RepairContainer *this, int a2)
{
  return PackContainer::afterChangeGrid(this, a2);
}

