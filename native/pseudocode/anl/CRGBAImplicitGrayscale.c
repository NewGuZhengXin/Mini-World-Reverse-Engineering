// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CRGBAImplicitGrayscale

//======================================================================
// anl::CRGBAImplicitGrayscale::~CRGBAImplicitGrayscale()
// address: 0x00332CA0   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl22CRGBAImplicitGrayscaleD1Ev'
void __fastcall anl::CRGBAImplicitGrayscale::~CRGBAImplicitGrayscale(anl::CRGBAImplicitGrayscale *this)
{
  *(_DWORD *)this = &off_4634C8;
}


//======================================================================
// anl::CRGBAImplicitGrayscale::get(double,double)
// address: 0x00332CB0   size: 0x36 (54 bytes)
//======================================================================
anl::CRGBAImplicitGrayscale *__fastcall anl::CRGBAImplicitGrayscale::get(
        anl::CRGBAImplicitGrayscale *this,
        int a2,
        double a3,
        double a4)
{
  int v5; // r0
  int v6; // r3
  float v7; // r0

  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 != 0 )
  {
    v7 = ((double (__fastcall *)(int, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v5 + 12))(
           v5,
           *(_DWORD *)(*(_DWORD *)v5 + 12),
           LODWORD(a3),
           HIDWORD(a3));
    *(float *)this = v7;
    *((float *)this + 1) = v7;
    *((float *)this + 2) = v7;
    v6 = 1065353216;
  }
  else
  {
    v6 = 0;
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
  }
  *((_DWORD *)this + 3) = v6;
  return this;
}


//======================================================================
// anl::CRGBAImplicitGrayscale::get(double,double,double)
// address: 0x00332CE6   size: 0x40 (64 bytes)
//======================================================================
anl::CRGBAImplicitGrayscale *__fastcall anl::CRGBAImplicitGrayscale::get(
        anl::CRGBAImplicitGrayscale *this,
        int a2,
        double a3,
        double a4,
        double a5)
{
  int v6; // r0
  int v7; // r3
  float v8; // r0

  v6 = *(_DWORD *)(a2 + 4);
  if ( v6 != 0 )
  {
    v8 = ((double (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 16))(v6);
    *(float *)this = v8;
    *((float *)this + 1) = v8;
    *((float *)this + 2) = v8;
    v7 = 1065353216;
  }
  else
  {
    v7 = 0;
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
  }
  *((_DWORD *)this + 3) = v7;
  return this;
}


//======================================================================
// anl::CRGBAImplicitGrayscale::get(double,double,double,double)
// address: 0x00332D26   size: 0x4A (74 bytes)
//======================================================================
anl::CRGBAImplicitGrayscale *__fastcall anl::CRGBAImplicitGrayscale::get(
        anl::CRGBAImplicitGrayscale *this,
        int a2,
        double a3,
        double a4,
        double a5,
        double a6)
{
  int v7; // r0
  int v8; // r3
  float v9; // r0

  v7 = *(_DWORD *)(a2 + 4);
  if ( v7 != 0 )
  {
    v9 = ((double (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v7 + 20))(
           v7,
           *(_DWORD *)(*(_DWORD *)v7 + 20),
           LODWORD(a3),
           HIDWORD(a3),
           LODWORD(a4),
           HIDWORD(a4),
           LODWORD(a5),
           HIDWORD(a5),
           LODWORD(a6),
           HIDWORD(a6));
    *(float *)this = v9;
    *((float *)this + 1) = v9;
    *((float *)this + 2) = v9;
    v8 = 1065353216;
  }
  else
  {
    v8 = 0;
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
  }
  *((_DWORD *)this + 3) = v8;
  return this;
}


//======================================================================
// anl::CRGBAImplicitGrayscale::get(double,double,double,double,double,double)
// address: 0x00332D70   size: 0x5A (90 bytes)
//======================================================================
anl::CRGBAImplicitGrayscale *__fastcall anl::CRGBAImplicitGrayscale::get(
        anl::CRGBAImplicitGrayscale *this,
        int a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  int v9; // r0
  int v10; // r3
  float v11; // r0

  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 != 0 )
  {
    v11 = ((double (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v9 + 24))(
            v9,
            *(_DWORD *)(*(_DWORD *)v9 + 24),
            LODWORD(a3),
            HIDWORD(a3),
            LODWORD(a4),
            HIDWORD(a4),
            LODWORD(a5),
            HIDWORD(a5),
            LODWORD(a6),
            HIDWORD(a6),
            LODWORD(a7),
            HIDWORD(a7),
            LODWORD(a8),
            HIDWORD(a8));
    *(float *)this = v11;
    *((float *)this + 1) = v11;
    *((float *)this + 2) = v11;
    v10 = 1065353216;
  }
  else
  {
    v10 = 0;
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
  }
  *((_DWORD *)this + 3) = v10;
  return this;
}


//======================================================================
// anl::CRGBAImplicitGrayscale::~CRGBAImplicitGrayscale()
// address: 0x00332DCA   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CRGBAImplicitGrayscale::~CRGBAImplicitGrayscale(anl::CRGBAImplicitGrayscale *this)
{
  anl::CRGBAImplicitGrayscale::~CRGBAImplicitGrayscale(this);
  operator delete(this);
}


//======================================================================
// anl::CRGBAImplicitGrayscale::CRGBAImplicitGrayscale(void)
// address: 0x00332DDC   size: 0x10 (16 bytes)
//======================================================================
// Alternative name is '_ZN3anl22CRGBAImplicitGrayscaleC1Ev'
_DWORD *__fastcall anl::CRGBAImplicitGrayscale::CRGBAImplicitGrayscale(_DWORD *this)
{
  *this = &off_463DD0;
  *(this + 1) = 0;
  return this;
}


//======================================================================
// anl::CRGBAImplicitGrayscale::setSource(anl::CImplicitModuleBase *)
// address: 0x00332DF0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBAImplicitGrayscale::setSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 4) = a2;
  return this;
}

