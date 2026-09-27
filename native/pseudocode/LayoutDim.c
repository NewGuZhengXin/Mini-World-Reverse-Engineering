// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: LayoutDim

//======================================================================
// LayoutDim::LayoutDim(void)
// address: 0x001C075C   size: 0xE (14 bytes)
//======================================================================
// Alternative name is '_ZN9LayoutDimC2Ev'
void __fastcall LayoutDim::LayoutDim(LayoutDim *this)
{
  *(_BYTE *)this = 0;
  *((_BYTE *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 1) = 0;
}


//======================================================================
// LayoutDim::LayoutDim(unsigned int,unsigned int)
// address: 0x001C076A   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZN9LayoutDimC2Ejj'
void __fastcall LayoutDim::LayoutDim(LayoutDim *this, unsigned int a2, unsigned int a3)
{
  *(_BYTE *)this = 0;
  *((_BYTE *)this + 1) = 0;
  *((float *)this + 1) = (float)a2;
  *((float *)this + 2) = (float)a3;
}


//======================================================================
// LayoutDim::~LayoutDim()
// address: 0x001C078A   size: 0x2 (2 bytes)
//======================================================================
// Alternative name is '_ZN9LayoutDimD2Ev'
void __fastcall LayoutDim::~LayoutDim(LayoutDim *this)
{
  ;
}


//======================================================================
// LayoutDim::SetAbsDim(int,int)
// address: 0x001C078C   size: 0x1E (30 bytes)
//======================================================================
float __fastcall LayoutDim::SetAbsDim(LayoutDim *this, int a2, int a3)
{
  *(_BYTE *)this = 0;
  *((_BYTE *)this + 1) = 0;
  *((float *)this + 1) = (float)a2;
  *((float *)this + 2) = (float)a3;
  return (float)a3;
}


//======================================================================
// LayoutDim::SetRelDim(float,float)
// address: 0x001C07AA   size: 0xC (12 bytes)
//======================================================================
int __fastcall LayoutDim::SetRelDim(int this, float a2, float a3)
{
  *(_BYTE *)this = 1;
  *(_BYTE *)(this + 1) = 1;
  *(float *)(this + 4) = a2;
  *(float *)(this + 8) = a3;
  return this;
}


//======================================================================
// LayoutDim::SetAbsX(int)
// address: 0x001C07B6   size: 0x12 (18 bytes)
//======================================================================
float __fastcall LayoutDim::SetAbsX(LayoutDim *this, int a2)
{
  *(_BYTE *)this = 0;
  *((float *)this + 1) = (float)a2;
  return (float)a2;
}


//======================================================================
// LayoutDim::SetAbsY(int)
// address: 0x001C07C8   size: 0x12 (18 bytes)
//======================================================================
float __fastcall LayoutDim::SetAbsY(LayoutDim *this, int a2)
{
  *((_BYTE *)this + 1) = 0;
  *((float *)this + 2) = (float)a2;
  return (float)a2;
}


//======================================================================
// LayoutDim::SetRelX(float)
// address: 0x001C07DA   size: 0x8 (8 bytes)
//======================================================================
int __fastcall LayoutDim::SetRelX(int this, float a2)
{
  *(_BYTE *)this = 1;
  *(float *)(this + 4) = a2;
  return this;
}


//======================================================================
// LayoutDim::SetRelY(float)
// address: 0x001C07E2   size: 0x8 (8 bytes)
//======================================================================
int __fastcall LayoutDim::SetRelY(int this, float a2)
{
  *(_BYTE *)(this + 1) = 1;
  *(float *)(this + 8) = a2;
  return this;
}


//======================================================================
// LayoutDim::GetX(void)const
// address: 0x001C07EA   size: 0x4 (4 bytes)
//======================================================================
int __fastcall LayoutDim::GetX(LayoutDim *this)
{
  return *((_DWORD *)this + 1);
}


//======================================================================
// LayoutDim::GetY(void)const
// address: 0x001C07EE   size: 0x4 (4 bytes)
//======================================================================
int __fastcall LayoutDim::GetY(LayoutDim *this)
{
  return *((_DWORD *)this + 2);
}

