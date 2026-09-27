// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitCache

//======================================================================
// anl::CImplicitCache::~CImplicitCache()
// address: 0x0032E958   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl14CImplicitCacheD1Ev'
void __fastcall anl::CImplicitCache::~CImplicitCache(anl::CImplicitCache *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitCache::get(double,double)
// address: 0x0032E968   size: 0x66 (102 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitCache::get(anl::CImplicitCache *this, double a2, double a3)
{
  int v5; // r0
  int v6; // r0
  int v7; // r1

  if ( *((_BYTE *)this + 88) == 0 || *((double *)this + 4) != a2 || *((double *)this + 5) != a3 )
  {
    *((double *)this + 4) = a2;
    *((double *)this + 5) = a3;
    *((_BYTE *)this + 88) = 1;
    v5 = *((_DWORD *)this + 6);
    if ( v5 != 0 )
    {
      v6 = (*(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 12))(
             v5,
             *(_DWORD *)(*(_DWORD *)v5 + 12),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a2));
    }
    else
    {
      v6 = *((_DWORD *)this + 4);
      v7 = *((_DWORD *)this + 5);
    }
    *((_DWORD *)this + 20) = v6;
    *((_DWORD *)this + 21) = v7;
  }
  return *((_QWORD *)this + 10);
}


//======================================================================
// anl::CImplicitCache::get(double,double,double)
// address: 0x0032E9CE   size: 0x94 (148 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitCache::get(anl::CImplicitCache *this, double a2, double a3, double a4)
{
  int v6; // r0
  int v7; // r0
  int v8; // r1

  if ( *((_BYTE *)this + 152) == 0
    || *((double *)this + 12) != a2
    || *((double *)this + 13) != a3
    || *((double *)this + 14) != a4 )
  {
    *((double *)this + 13) = a3;
    *((double *)this + 14) = a4;
    *((double *)this + 12) = a2;
    *((_BYTE *)this + 152) = 1;
    v6 = *((_DWORD *)this + 6);
    if ( v6 != 0 )
    {
      v7 = (*(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v6 + 16))(
             v6,
             *(_DWORD *)(*(_DWORD *)v6 + 16),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4));
    }
    else
    {
      v7 = *((_DWORD *)this + 4);
      v8 = *((_DWORD *)this + 5);
    }
    *((_DWORD *)this + 36) = v7;
    *((_DWORD *)this + 37) = v8;
  }
  return *((_QWORD *)this + 18);
}


//======================================================================
// anl::CImplicitCache::get(double,double,double,double)
// address: 0x0032EA62   size: 0xC8 (200 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitCache::get(anl::CImplicitCache *this, double a2, double a3, double a4, double a5)
{
  int v7; // r0
  int v8; // r0
  int v9; // r1

  if ( *((_BYTE *)this + 216) == 0
    || *((double *)this + 20) != a2
    || *((double *)this + 21) != a3
    || *((double *)this + 22) != a4
    || *((double *)this + 23) != a5 )
  {
    *((double *)this + 20) = a2;
    *((double *)this + 21) = a3;
    *((double *)this + 22) = a4;
    *((double *)this + 23) = a5;
    *((_BYTE *)this + 216) = 1;
    v7 = *((_DWORD *)this + 6);
    if ( v7 != 0 )
    {
      v8 = (*(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 20))(
             v7,
             *(_DWORD *)(*(_DWORD *)v7 + 20),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4),
             LODWORD(a5),
             HIDWORD(a5));
    }
    else
    {
      v8 = *((_DWORD *)this + 4);
      v9 = *((_DWORD *)this + 5);
    }
    *((_DWORD *)this + 52) = v8;
    *((_DWORD *)this + 53) = v9;
  }
  return *((_QWORD *)this + 26);
}


//======================================================================
// anl::CImplicitCache::get(double,double,double,double,double,double)
// address: 0x0032EB2A   size: 0x10A (266 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitCache::get(
        anl::CImplicitCache *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  int v9; // r0
  int v10; // r0
  int v11; // r1

  if ( *((_BYTE *)this + 280) == 0
    || *((double *)this + 28) != a2
    || *((double *)this + 29) != a3
    || *((double *)this + 30) != a4
    || *((double *)this + 31) != a5
    || *((double *)this + 32) != a6
    || *((double *)this + 33) != a7 )
  {
    *((double *)this + 28) = a2;
    *((double *)this + 29) = a3;
    *((double *)this + 30) = a4;
    *((double *)this + 31) = a5;
    *((double *)this + 32) = a6;
    *((double *)this + 33) = a7;
    *((_BYTE *)this + 280) = 1;
    v9 = *((_DWORD *)this + 6);
    if ( v9 != 0 )
    {
      v10 = (*(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 24))(
              v9,
              *(_DWORD *)(*(_DWORD *)v9 + 24),
              LODWORD(a2),
              HIDWORD(a2),
              LODWORD(a3),
              HIDWORD(a3),
              LODWORD(a4),
              HIDWORD(a4),
              LODWORD(a5),
              HIDWORD(a5),
              LODWORD(a6),
              HIDWORD(a6),
              LODWORD(a7),
              HIDWORD(a7));
    }
    else
    {
      v10 = *((_DWORD *)this + 4);
      v11 = *((_DWORD *)this + 5);
    }
    *((_DWORD *)this + 68) = v10;
    *((_DWORD *)this + 69) = v11;
  }
  return *((_QWORD *)this + 34);
}


//======================================================================
// anl::CImplicitCache::~CImplicitCache()
// address: 0x0032EC34   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitCache::~CImplicitCache(anl::CImplicitCache *this)
{
  anl::CImplicitCache::~CImplicitCache(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitCache::CImplicitCache(void)
// address: 0x0032EC48   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN3anl14CImplicitCacheC2Ev'
int __fastcall anl::CImplicitCache::CImplicitCache(int this)
{
  *(_DWORD *)(this + 8) = -350469331;
  *(_DWORD *)(this + 12) = 1058682594;
  *(_DWORD *)this = &off_463B88;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_BYTE *)(this + 88) = 0;
  *(_BYTE *)(this + 152) = 0;
  *(_BYTE *)(this + 216) = 0;
  *(_BYTE *)(this + 280) = 0;
  return this;
}


//======================================================================
// anl::CImplicitCache::setSource(anl::CImplicitModuleBase *)
// address: 0x0032EC98   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitCache::setSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CImplicitCache::setSource(double)
// address: 0x0032EC9C   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitCache::setSource(int this, double a2)
{
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 16) = a2;
  return this;
}

