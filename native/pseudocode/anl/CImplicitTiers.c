// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitTiers

//======================================================================
// anl::CImplicitTiers::~CImplicitTiers()
// address: 0x0032779C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl14CImplicitTiersD1Ev'
void __fastcall anl::CImplicitTiers::~CImplicitTiers(anl::CImplicitTiers *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitTiers::~CImplicitTiers()
// address: 0x003277AC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitTiers::~CImplicitTiers(anl::CImplicitTiers *this)
{
  anl::CImplicitTiers::~CImplicitTiers(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitTiers::get(double,double,double,double,double,double)
// address: 0x003277C0   size: 0x132 (306 bytes)
//======================================================================
double __fastcall anl::CImplicitTiers::get(
        anl::CImplicitTiers *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  int v9; // r7
  int v10; // r0
  double v11; // r4
  double v12; // r6
  double v13; // r4
  double v14; // r4
  double v16; // [sp+28h] [bp-24h]
  double v17; // [sp+30h] [bp-1Ch]
  char *v18; // [sp+3Ch] [bp-10h]
  double v19; // [sp+40h] [bp-Ch]

  v18 = (char *)this + 5;
  v9 = *((_DWORD *)this + 8) - (*((_BYTE *)this + 36) != 0);
  v10 = *((_DWORD *)this + 6);
  if ( v10 != 0 )
    v11 = COERCE_DOUBLE(
            ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v10 + 24))(
              v10,
              *(_DWORD *)(*(_DWORD *)v10 + 24),
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
              HIDWORD(a7)));
  else
    v11 = *((double *)this + 2);
  v12 = (double)v9;
  v19 = v11 * v12;
  v13 = j_floor(v11 * v12);
  v16 = v13 / v12;
  v17 = (v13 + 1.0) / v12;
  if ( v18[31] != 0 )
    v14 = (v19 - v13) * (v19 - v13) * (v19 - v13) * ((v19 - v13) * ((v19 - v13) * 6.0 - 15.0) + 10.0);
  else
    v14 = 0.0;
  return v16 + v14 * (v17 - v16);
}


//======================================================================
// anl::CImplicitTiers::get(double,double)
// address: 0x00327920   size: 0x112 (274 bytes)
//======================================================================
double __fastcall anl::CImplicitTiers::get(anl::CImplicitTiers *this, double a2, double a3)
{
  int v5; // r7
  int v6; // r0
  double v7; // r4
  double v8; // r6
  double v9; // r4
  double v10; // r4
  double v12; // [sp+8h] [bp-24h]
  double v13; // [sp+10h] [bp-1Ch]
  char *v14; // [sp+1Ch] [bp-10h]
  double v15; // [sp+20h] [bp-Ch]

  v14 = (char *)this + 5;
  v5 = *((_DWORD *)this + 8) - (*((_BYTE *)this + 36) != 0);
  v6 = *((_DWORD *)this + 6);
  if ( v6 != 0 )
    v7 = COERCE_DOUBLE(
           ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v6 + 12))(
             v6,
             *(_DWORD *)(*(_DWORD *)v6 + 12),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3)));
  else
    v7 = *((double *)this + 2);
  v8 = (double)v5;
  v15 = v7 * v8;
  v9 = j_floor(v7 * v8);
  v12 = v9 / v8;
  v13 = (v9 + 1.0) / v8;
  if ( v14[31] != 0 )
    v10 = (v15 - v9) * (v15 - v9) * (v15 - v9) * ((v15 - v9) * ((v15 - v9) * 6.0 - 15.0) + 10.0);
  else
    v10 = 0.0;
  return v12 + v10 * (v13 - v12);
}


//======================================================================
// anl::CImplicitTiers::get(double,double,double)
// address: 0x00327A60   size: 0x11A (282 bytes)
//======================================================================
double __fastcall anl::CImplicitTiers::get(anl::CImplicitTiers *this, double a2, double a3, double a4)
{
  int v6; // r7
  int v7; // r0
  double v8; // r4
  double v9; // r6
  double v10; // r4
  double v11; // r4
  double v13; // [sp+10h] [bp-24h]
  double v14; // [sp+18h] [bp-1Ch]
  char *v15; // [sp+24h] [bp-10h]
  double v16; // [sp+28h] [bp-Ch]

  v15 = (char *)this + 5;
  v6 = *((_DWORD *)this + 8) - (*((_BYTE *)this + 36) != 0);
  v7 = *((_DWORD *)this + 6);
  if ( v7 != 0 )
    v8 = COERCE_DOUBLE(
           ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v7 + 16))(
             v7,
             *(_DWORD *)(*(_DWORD *)v7 + 16),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4)));
  else
    v8 = *((double *)this + 2);
  v9 = (double)v6;
  v16 = v8 * v9;
  v10 = j_floor(v8 * v9);
  v13 = v10 / v9;
  v14 = (v10 + 1.0) / v9;
  if ( v15[31] != 0 )
    v11 = (v16 - v10) * (v16 - v10) * (v16 - v10) * ((v16 - v10) * ((v16 - v10) * 6.0 - 15.0) + 10.0);
  else
    v11 = 0.0;
  return v13 + v11 * (v14 - v13);
}


//======================================================================
// anl::CImplicitTiers::get(double,double,double,double)
// address: 0x00327BA8   size: 0x122 (290 bytes)
//======================================================================
double __fastcall anl::CImplicitTiers::get(anl::CImplicitTiers *this, double a2, double a3, double a4, double a5)
{
  int v7; // r7
  int v8; // r0
  double v9; // r4
  double v10; // r6
  double v11; // r4
  double v12; // r4
  double v14; // [sp+18h] [bp-24h]
  double v15; // [sp+20h] [bp-1Ch]
  char *v16; // [sp+2Ch] [bp-10h]
  double v17; // [sp+30h] [bp-Ch]

  v16 = (char *)this + 5;
  v7 = *((_DWORD *)this + 8) - (*((_BYTE *)this + 36) != 0);
  v8 = *((_DWORD *)this + 6);
  if ( v8 != 0 )
    v9 = COERCE_DOUBLE(
           ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v8 + 20))(
             v8,
             *(_DWORD *)(*(_DWORD *)v8 + 20),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4),
             LODWORD(a5),
             HIDWORD(a5)));
  else
    v9 = *((double *)this + 2);
  v10 = (double)v7;
  v17 = v9 * v10;
  v11 = j_floor(v9 * v10);
  v14 = v11 / v10;
  v15 = (v11 + 1.0) / v10;
  if ( v16[31] != 0 )
    v12 = (v17 - v11) * (v17 - v11) * (v17 - v11) * ((v17 - v11) * ((v17 - v11) * 6.0 - 15.0) + 10.0);
  else
    v12 = 0.0;
  return v14 + v12 * (v15 - v14);
}


//======================================================================
// anl::CImplicitTiers::CImplicitTiers(void)
// address: 0x00327CF8   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN3anl14CImplicitTiersC1Ev'
int __fastcall anl::CImplicitTiers::CImplicitTiers(int this)
{
  *(_DWORD *)(this + 8) = -350469331;
  *(_DWORD *)(this + 12) = 1058682594;
  *(_DWORD *)this = &off_4638F8;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_BYTE *)(this + 36) = 1;
  return this;
}


//======================================================================
// anl::CImplicitTiers::CImplicitTiers(int,bool)
// address: 0x00327D38   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN3anl14CImplicitTiersC1Eib'
int __fastcall anl::CImplicitTiers::CImplicitTiers(int this, int a2, bool a3)
{
  *(_DWORD *)(this + 8) = -350469331;
  *(_DWORD *)(this + 12) = 1058682594;
  *(_DWORD *)this = &off_4638F8;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 32) = a2;
  *(_BYTE *)(this + 36) = a3;
  return this;
}


//======================================================================
// anl::CImplicitTiers::setSource(double)
// address: 0x00327D78   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitTiers::setSource(int this, double a2)
{
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CImplicitTiers::setSource(anl::CImplicitModuleBase *)
// address: 0x00327D82   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitTiers::setSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CImplicitTiers::setNumTiers(int)
// address: 0x00327D86   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitTiers::setNumTiers(int this, int a2)
{
  *(_DWORD *)(this + 32) = a2;
  return this;
}


//======================================================================
// anl::CImplicitTiers::setSmooth(bool)
// address: 0x00327D8A   size: 0x6 (6 bytes)
//======================================================================
char *__fastcall anl::CImplicitTiers::setSmooth(anl::CImplicitTiers *this, char a2)
{
  char *result; // r0

  result = (char *)this + 5;
  result[31] = a2;
  return result;
}

