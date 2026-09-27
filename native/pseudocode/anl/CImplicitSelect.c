// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitSelect

//======================================================================
// anl::CImplicitSelect::~CImplicitSelect()
// address: 0x003294AC   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl15CImplicitSelectD1Ev'
void __fastcall anl::CImplicitSelect::~CImplicitSelect(anl::CImplicitSelect *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitSelect::~CImplicitSelect()
// address: 0x003294BC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitSelect::~CImplicitSelect(anl::CImplicitSelect *this)
{
  anl::CImplicitSelect::~CImplicitSelect(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitSelect::get(double,double)
// address: 0x003294D0   size: 0x1A4 (420 bytes)
//======================================================================
int __fastcall anl::CImplicitSelect::get(anl::CImplicitSelect *this, double a2, double a3)
{
  int v4; // r1
  double v5; // r4
  int v6; // r1
  double v7; // r6
  double v8; // r0
  double v9; // r0
  double v10; // r6
  double v11; // r6
  double v12; // r4
  int v13; // r1
  double v14; // r0
  double v18; // [sp+20h] [bp-Ch]

  LODWORD(v5) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 48), a2, a3);
  HIDWORD(v5) = v4;
  LODWORD(v7) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 80), a2, a3);
  HIDWORD(v7) = v6;
  LODWORD(v8) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 64), a2, a3);
  if ( v7 <= 0.0 )
  {
    if ( v5 < v8 )
      goto LABEL_3;
LABEL_5:
    LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 32), a2, a3);
    return LODWORD(v9);
  }
  v18 = v8 - v7;
  if ( v5 >= v8 - v7 )
  {
    v10 = v8 + v7;
    if ( v5 <= v10 )
    {
      v11 = (v5 - v18)
          / (v10 - v18)
          * ((v5 - v18)
           / (v10 - v18))
          * ((v5 - v18)
           / (v10 - v18))
          * ((v5 - v18) / (v10 - v18) * ((v5 - v18) / (v10 - v18) * 6.0 - 15.0) + 10.0);
      LODWORD(v12) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 16), a2, a3);
      HIDWORD(v12) = v13;
      LODWORD(v14) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 32), a2, a3);
      v9 = v12 + v11 * (v14 - v12);
      return LODWORD(v9);
    }
    goto LABEL_5;
  }
LABEL_3:
  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 16), a2, a3);
  return LODWORD(v9);
}


//======================================================================
// anl::CImplicitSelect::get(double,double,double)
// address: 0x00329698   size: 0x1CC (460 bytes)
//======================================================================
int __fastcall anl::CImplicitSelect::get(anl::CImplicitSelect *this, double a2, double a3, double a4)
{
  int v5; // r1
  double v6; // r4
  int v7; // r1
  double v8; // r6
  double v9; // r0
  anl::CScalarParameter *v10; // r0
  double v11; // r6
  double v12; // r0
  double v13; // r6
  double v14; // r4
  int v15; // r1
  double v16; // r0
  double v20; // [sp+28h] [bp-Ch]

  LODWORD(v6) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 48), a2, a3, a4);
  HIDWORD(v6) = v5;
  LODWORD(v8) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 80), a2, a3, a4);
  HIDWORD(v8) = v7;
  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 64), a2, a3, a4);
  if ( v8 <= 0.0 )
  {
    if ( v6 < v9 )
      goto LABEL_3;
LABEL_5:
    v10 = (anl::CImplicitSelect *)((char *)this + 32);
    goto LABEL_6;
  }
  v20 = v9 - v8;
  if ( v6 >= v9 - v8 )
  {
    v11 = v9 + v8;
    if ( v6 <= v11 )
    {
      v13 = (v6 - v20)
          / (v11 - v20)
          * ((v6 - v20)
           / (v11 - v20))
          * ((v6 - v20)
           / (v11 - v20))
          * ((v6 - v20) / (v11 - v20) * ((v6 - v20) / (v11 - v20) * 6.0 - 15.0) + 10.0);
      LODWORD(v14) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 16), a2, a3, a4);
      HIDWORD(v14) = v15;
      LODWORD(v16) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 32), a2, a3, a4);
      v12 = v14 + v13 * (v16 - v14);
      return LODWORD(v12);
    }
    goto LABEL_5;
  }
LABEL_3:
  v10 = (anl::CImplicitSelect *)((char *)this + 16);
LABEL_6:
  LODWORD(v12) = anl::CScalarParameter::get(v10, a2, a3, a4);
  return LODWORD(v12);
}


//======================================================================
// anl::CImplicitSelect::get(double,double,double,double)
// address: 0x00329888   size: 0x214 (532 bytes)
//======================================================================
int __fastcall anl::CImplicitSelect::get(anl::CImplicitSelect *this, double a2, double a3, double a4, double a5)
{
  int v6; // r1
  double v7; // r4
  int v8; // r1
  double v9; // r6
  double v10; // r0
  double v11; // r0
  double v12; // r6
  double v13; // r6
  double v14; // r4
  int v15; // r1
  double v16; // r0
  double v20; // [sp+30h] [bp-Ch]

  LODWORD(v7) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 48), a2, a3, a4, a5);
  HIDWORD(v7) = v6;
  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 80), a2, a3, a4, a5);
  HIDWORD(v9) = v8;
  LODWORD(v10) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 64), a2, a3, a4, a5);
  if ( v9 <= 0.0 )
  {
    if ( v7 < v10 )
      goto LABEL_3;
LABEL_5:
    LODWORD(v11) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 32), a2, a3, a4, a5);
    return LODWORD(v11);
  }
  v20 = v10 - v9;
  if ( v7 >= v10 - v9 )
  {
    v12 = v10 + v9;
    if ( v7 <= v12 )
    {
      v13 = (v7 - v20)
          / (v12 - v20)
          * ((v7 - v20)
           / (v12 - v20))
          * ((v7 - v20)
           / (v12 - v20))
          * ((v7 - v20) / (v12 - v20) * ((v7 - v20) / (v12 - v20) * 6.0 - 15.0) + 10.0);
      LODWORD(v14) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 16), a2, a3, a4, a5);
      HIDWORD(v14) = v15;
      LODWORD(v16) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 32), a2, a3, a4, a5);
      v11 = v14 + v13 * (v16 - v14);
      return LODWORD(v11);
    }
    goto LABEL_5;
  }
LABEL_3:
  LODWORD(v11) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 16), a2, a3, a4, a5);
  return LODWORD(v11);
}


//======================================================================
// anl::CImplicitSelect::get(double,double,double,double,double,double)
// address: 0x00329AC0   size: 0x284 (644 bytes)
//======================================================================
int __fastcall anl::CImplicitSelect::get(
        anl::CImplicitSelect *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  int v8; // r1
  double v9; // r4
  int v10; // r1
  double v11; // r6
  double v12; // r0
  double v13; // r0
  double v14; // r6
  double v15; // r6
  double v16; // r4
  int v17; // r1
  double v18; // r0
  double v22; // [sp+40h] [bp-Ch]

  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 48), a2, a3, a4, a5, a6, a7);
  HIDWORD(v9) = v8;
  LODWORD(v11) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 80), a2, a3, a4, a5, a6, a7);
  HIDWORD(v11) = v10;
  LODWORD(v12) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 64), a2, a3, a4, a5, a6, a7);
  if ( v11 <= 0.0 )
  {
    if ( v9 < v12 )
      goto LABEL_3;
LABEL_5:
    LODWORD(v13) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 32), a2, a3, a4, a5, a6, a7);
    return LODWORD(v13);
  }
  v22 = v12 - v11;
  if ( v9 >= v12 - v11 )
  {
    v14 = v12 + v11;
    if ( v9 <= v14 )
    {
      v15 = (v9 - v22)
          / (v14 - v22)
          * ((v9 - v22)
           / (v14 - v22))
          * ((v9 - v22)
           / (v14 - v22))
          * ((v9 - v22) / (v14 - v22) * ((v9 - v22) / (v14 - v22) * 6.0 - 15.0) + 10.0);
      LODWORD(v16) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 16), a2, a3, a4, a5, a6, a7);
      HIDWORD(v16) = v17;
      LODWORD(v18) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 32), a2, a3, a4, a5, a6, a7);
      v13 = v16 + v15 * (v18 - v16);
      return LODWORD(v13);
    }
    goto LABEL_5;
  }
LABEL_3:
  LODWORD(v13) = anl::CScalarParameter::get((anl::CImplicitSelect *)((char *)this + 16), a2, a3, a4, a5, a6, a7);
  return LODWORD(v13);
}


//======================================================================
// anl::CImplicitSelect::CImplicitSelect(void)
// address: 0x00329D68   size: 0x38 (56 bytes)
//======================================================================
// Alternative name is '_ZN3anl15CImplicitSelectC2Ev'
_DWORD *__fastcall anl::CImplicitSelect::CImplicitSelect(_DWORD *this)
{
  *(this + 2) = -350469331;
  *(this + 3) = 1058682594;
  *(this + 6) = 0;
  *(this + 10) = 0;
  *(this + 14) = 0;
  *this = &off_4639D8;
  *(this + 18) = 0;
  *(this + 22) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  *(this + 16) = 0;
  *(this + 17) = 0;
  *(this + 20) = 0;
  *(this + 21) = 0;
  return this;
}


//======================================================================
// anl::CImplicitSelect::setLowSource(anl::CImplicitModuleBase *)
// address: 0x00329DB8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitSelect::setLowSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSelect::setHighSource(anl::CImplicitModuleBase *)
// address: 0x00329DBC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitSelect::setHighSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 40) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSelect::setControlSource(anl::CImplicitModuleBase *)
// address: 0x00329DC0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitSelect::setControlSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 56) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSelect::setLowSource(double)
// address: 0x00329DC4   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitSelect::setLowSource(int this, double a2)
{
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSelect::setHighSource(double)
// address: 0x00329DCE   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitSelect::setHighSource(int this, double a2)
{
  *(_DWORD *)(this + 40) = 0;
  *(double *)(this + 32) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSelect::setControlSource(double)
// address: 0x00329DD8   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitSelect::setControlSource(int this, double a2)
{
  *(_DWORD *)(this + 56) = 0;
  *(double *)(this + 48) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSelect::setThreshold(double)
// address: 0x00329DE2   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitSelect::setThreshold(int this, double a2)
{
  *(_DWORD *)(this + 72) = 0;
  *(double *)(this + 64) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSelect::setFalloff(double)
// address: 0x00329DEC   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitSelect::setFalloff(int this, double a2)
{
  *(_DWORD *)(this + 88) = 0;
  *(double *)(this + 80) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSelect::setThreshold(anl::CImplicitModuleBase *)
// address: 0x00329DF6   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitSelect::setThreshold(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 72) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSelect::setFalloff(anl::CImplicitModuleBase *)
// address: 0x00329DFA   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitSelect::setFalloff(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 88) = a2;
  return this;
}

