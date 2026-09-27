// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: LayoutAnchor

//======================================================================
// LayoutAnchor::LayoutAnchor(void)
// address: 0x001C07F4   size: 0x38 (56 bytes)
//======================================================================
// Alternative name is '_ZN12LayoutAnchorC2Ev'
void __fastcall LayoutAnchor::LayoutAnchor(LayoutAnchor *this)
{
  LayoutDim *v1; // r6

  v1 = (LayoutAnchor *)((char *)this + 12);
  *((_DWORD *)this + 2) = &byte_55FB88;
  LayoutDim::LayoutDim((LayoutAnchor *)((char *)this + 12));
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = 0;
  sub_3BE508((int)this + 8, (char *)&unk_3FB8EA);
  LayoutDim::SetAbsDim(v1, 0, 0);
}


//======================================================================
// LayoutAnchor::~LayoutAnchor()
// address: 0x001C0834   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN12LayoutAnchorD2Ev'
void __fastcall LayoutAnchor::~LayoutAnchor(LayoutAnchor *this)
{
  LayoutDim::~LayoutDim((LayoutAnchor *)((char *)this + 12));
  sub_3BDF80((char *)this + 8);
}


//======================================================================
// LayoutAnchor::SetPoint(FRAMEPOINT_T,FRAMEPOINT_T,LayoutDim const&)
// address: 0x001C084A   size: 0x50 (80 bytes)
//======================================================================
int __fastcall LayoutAnchor::SetPoint(int a1, int a2, int a3, unsigned __int16 *a4)
{
  int result; // r0

  if ( *(unsigned __int16 *)(a1 + 12) != *a4
    || *(float *)(a1 + 16) != *((float *)a4 + 1)
    || *(float *)(a1 + 20) != *((float *)a4 + 2)
    || *(_DWORD *)a1 != a2
    || (result = 0, *(_DWORD *)(a1 + 4) != a3) )
  {
    *(_DWORD *)a1 = a2;
    *(_DWORD *)(a1 + 4) = a3;
    *(_BYTE *)(a1 + 12) = *(_BYTE *)a4;
    *(_BYTE *)(a1 + 13) = *((_BYTE *)a4 + 1);
    *(_DWORD *)(a1 + 16) = *((_DWORD *)a4 + 1);
    *(_DWORD *)(a1 + 20) = *((_DWORD *)a4 + 2);
    return 1;
  }
  return result;
}


//======================================================================
// LayoutAnchor::SetRelFrame(std::string)
// address: 0x001C089A   size: 0xA (10 bytes)
//======================================================================
int __fastcall LayoutAnchor::SetRelFrame(int a1)
{
  return sub_3BEBBC(a1 + 8);
}


//======================================================================
// LayoutAnchor::GetRelFrame(void)
// address: 0x001C08A4   size: 0xE (14 bytes)
//======================================================================
LayoutAnchor *__fastcall LayoutAnchor::GetRelFrame(LayoutAnchor *this, int a2)
{
  sub_3BEB1C(this, a2 + 8);
  return this;
}


//======================================================================
// LayoutAnchor::operator=(LayoutAnchor const&)
// address: 0x001C106E   size: 0x2A (42 bytes)
//======================================================================
int __fastcall LayoutAnchor::operator=(int a1, int a2)
{
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  sub_3BEBBC(a1 + 8);
  *(_BYTE *)(a1 + 12) = *(_BYTE *)(a2 + 12);
  *(_BYTE *)(a1 + 13) = *(_BYTE *)(a2 + 13);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  return a1;
}

