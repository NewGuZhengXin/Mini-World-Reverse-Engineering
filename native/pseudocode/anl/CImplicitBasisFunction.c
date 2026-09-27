// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitBasisFunction

//======================================================================
// anl::CImplicitBasisFunction::get(double,double)
// address: 0x00332252   size: 0x86 (134 bytes)
//======================================================================
int __fastcall anl::CImplicitBasisFunction::get(anl::CImplicitBasisFunction *this, double a2, double a3)
{
  double v4; // r4

  v4 = *((double *)this + 22);
  return (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this + 21))(
           COERCE_UNSIGNED_INT64(a2 * v4 - a3 * *((double *)this + 23)),
           HIDWORD(COERCE_UNSIGNED_INT64(a2 * v4 - a3 * *((double *)this + 23))),
           COERCE_UNSIGNED_INT64(a3 * v4 + a2 * *((double *)this + 23)),
           HIDWORD(COERCE_UNSIGNED_INT64(a3 * v4 + a2 * *((double *)this + 23))),
           *((_DWORD *)this + 25),
           *((_DWORD *)this + 20));
}


//======================================================================
// anl::CImplicitBasisFunction::get(double,double,double)
// address: 0x003322D8   size: 0x112 (274 bytes)
//======================================================================
int __fastcall anl::CImplicitBasisFunction::get(anl::CImplicitBasisFunction *this, double a2, double a3, double a4)
{
  double v6; // r0
  double v8; // [sp+18h] [bp-10h]
  double v9; // [sp+20h] [bp-8h]

  v8 = a2 * *((double *)this + 13) + a3 * *((double *)this + 16) + a4 * *((double *)this + 19);
  v9 = a2 * *((double *)this + 14) + a3 * *((double *)this + 17) + a4 * *((double *)this + 20);
  v6 = a2 * *((double *)this + 15) + a3 * *((double *)this + 18) + a4 * *((double *)this + 21);
  return (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this + 22))(
           LODWORD(v8),
           HIDWORD(v8),
           LODWORD(v9),
           HIDWORD(v9),
           LODWORD(v6),
           HIDWORD(v6),
           *((_DWORD *)this + 25),
           *((_DWORD *)this + 20));
}


//======================================================================
// anl::CImplicitBasisFunction::get(double,double,double,double)
// address: 0x003323EA   size: 0x11A (282 bytes)
//======================================================================
int __fastcall anl::CImplicitBasisFunction::get(
        anl::CImplicitBasisFunction *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  double v7; // r0
  double v9; // [sp+20h] [bp-10h]
  double v10; // [sp+28h] [bp-8h]

  v9 = a2 * *((double *)this + 13) + a3 * *((double *)this + 16) + a4 * *((double *)this + 19);
  v10 = a2 * *((double *)this + 14) + a3 * *((double *)this + 17) + a4 * *((double *)this + 20);
  v7 = a2 * *((double *)this + 15) + a3 * *((double *)this + 18) + a4 * *((double *)this + 21);
  return (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this
          + 23))(
           LODWORD(v9),
           HIDWORD(v9),
           LODWORD(v10),
           HIDWORD(v10),
           LODWORD(v7),
           HIDWORD(v7),
           LODWORD(a5),
           HIDWORD(a5),
           *((_DWORD *)this + 25),
           *((_DWORD *)this + 20));
}


//======================================================================
// anl::CImplicitBasisFunction::get(double,double,double,double,double,double)
// address: 0x00332504   size: 0x12A (298 bytes)
//======================================================================
int __fastcall anl::CImplicitBasisFunction::get(
        anl::CImplicitBasisFunction *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double v9; // r0
  double v11; // [sp+30h] [bp-10h]
  double v12; // [sp+38h] [bp-8h]

  v11 = a2 * *((double *)this + 13) + a3 * *((double *)this + 16) + a4 * *((double *)this + 19);
  v12 = a2 * *((double *)this + 14) + a3 * *((double *)this + 17) + a4 * *((double *)this + 20);
  v9 = a2 * *((double *)this + 15) + a3 * *((double *)this + 18) + a4 * *((double *)this + 21);
  return (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this
          + 24))(
           LODWORD(v11),
           HIDWORD(v11),
           LODWORD(v12),
           HIDWORD(v12),
           LODWORD(v9),
           HIDWORD(v9),
           LODWORD(a5),
           HIDWORD(a5),
           LODWORD(a6),
           HIDWORD(a6),
           LODWORD(a7),
           HIDWORD(a7),
           *((_DWORD *)this + 25),
           *((_DWORD *)this + 20));
}


//======================================================================
// anl::CImplicitBasisFunction::~CImplicitBasisFunction()
// address: 0x00332630   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl22CImplicitBasisFunctionD1Ev'
void __fastcall anl::CImplicitBasisFunction::~CImplicitBasisFunction(anl::CImplicitBasisFunction *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitBasisFunction::~CImplicitBasisFunction()
// address: 0x00332640   size: 0x16 (22 bytes)
//======================================================================
void __fastcall anl::CImplicitBasisFunction::~CImplicitBasisFunction(anl::CImplicitBasisFunction *this)
{
  *(_DWORD *)this = &off_462280;
  operator delete(this);
}


//======================================================================
// anl::CImplicitBasisFunction::setInterp(int)
// address: 0x0033265C   size: 0x2A (42 bytes)
//======================================================================
int __fastcall anl::CImplicitBasisFunction::setInterp(int this, int a2)
{
  _DWORD *v2; // r3

  if ( a2 == 1 )
  {
    v2 = &anl::linearInterp;
  }
  else if ( a2 == 2 )
  {
    v2 = &anl::hermiteInterp;
  }
  else if ( a2 != 0 )
  {
    v2 = &anl::quinticInterp;
  }
  else
  {
    v2 = &anl::noInterp;
  }
  *(_DWORD *)(this + 80) = *v2;
  return this;
}


//======================================================================
// anl::CImplicitBasisFunction::setRotationAngle(double,double,double,double)
// address: 0x00332698   size: 0x1C8 (456 bytes)
//======================================================================
double __fastcall anl::CImplicitBasisFunction::setRotationAngle(
        anl::CImplicitBasisFunction *this,
        double a2,
        double a3,
        double a4,
        double x)
{
  double v7; // r0
  double result; // r0
  double v9; // [sp+0h] [bp-34h]
  double v10; // [sp+8h] [bp-2Ch]
  double v11; // [sp+8h] [bp-2Ch]
  double v12; // [sp+10h] [bp-24h]
  unsigned int v13; // [sp+1Ch] [bp-18h]
  double v14; // [sp+20h] [bp-14h]
  unsigned int v15; // [sp+28h] [bp-Ch]

  v13 = LODWORD(a2);
  v15 = HIDWORD(a2);
  v12 = 1.0 - j_cos(x);
  *((double *)this + 13) = v12 * (COERCE_DOUBLE(__PAIR64__(v15, v13)) * COERCE_DOUBLE(__PAIR64__(v15, v13)) - 1.0) + 1.0;
  v9 = j_sin(x);
  v10 = v12 * COERCE_DOUBLE(__PAIR64__(v15, v13)) * a3;
  *((double *)this + 16) = COERCE_DOUBLE(*(_QWORD *)&a4 + 0x8000000000000000LL) * v9 + v10;
  v14 = v12 * COERCE_DOUBLE(__PAIR64__(v15, v13)) * a4;
  *((double *)this + 19) = a3 * v9 + v14;
  *((double *)this + 14) = a4 * v9 + v10;
  *((double *)this + 17) = v12 * (a3 * a3 - 1.0) + 1.0;
  v11 = v12 * a3 * a4;
  LODWORD(v7) = v13;
  HIDWORD(v7) = v15 + 0x80000000;
  *((double *)this + 20) = v7 * v9 + v11;
  *((double *)this + 15) = COERCE_DOUBLE(*(_QWORD *)&a3 + 0x8000000000000000LL) * v9 + v14;
  *((double *)this + 18) = COERCE_DOUBLE(__PAIR64__(v15, v13)) * v9 + v11;
  result = v12 * (a4 * a4 - 1.0) + 1.0;
  *((double *)this + 21) = result;
  return result;
}


//======================================================================
// anl::CImplicitBasisFunction::setSeed(unsigned int)
// address: 0x00332868   size: 0x118 (280 bytes)
//======================================================================
double __fastcall anl::CImplicitBasisFunction::setSeed(anl::CImplicitBasisFunction *this, unsigned int a2)
{
  double v3; // r0
  double v4; // r4
  double v5; // r0
  double v6; // r0
  double v7; // r4
  double result; // r0
  double v9; // [sp+18h] [bp-24h]
  double v10; // [sp+18h] [bp-24h]
  double v11; // [sp+20h] [bp-1Ch]
  double v12; // [sp+20h] [bp-1Ch]
  double v13; // [sp+28h] [bp-14h]
  _DWORD v14[3]; // [sp+30h] [bp-Ch] BYREF

  *((_DWORD *)this + 25) = a2;
  v14[0] = &off_45DC48;
  v14[1] = a2;
  v9 = anl::CBasePRNG::get01((anl::CBasePRNG *)v14);
  v11 = anl::CBasePRNG::get01((anl::CBasePRNG *)v14);
  v13 = anl::CBasePRNG::get01((anl::CBasePRNG *)v14);
  v3 = j_sqrt(v9 * v9 + v11 * v11 + v13 * v13);
  v10 = v9 / v3;
  v12 = v11 / v3;
  v4 = v13 / v3;
  v5 = anl::CBasePRNG::get01((anl::CBasePRNG *)v14);
  anl::CImplicitBasisFunction::setRotationAngle(this, v10, v12, v4, v5 * 3.141592 + v5 * 3.141592);
  v6 = anl::CBasePRNG::get01((anl::CBasePRNG *)v14);
  v7 = v6 * 3.14159265 + v6 * 3.14159265;
  *((double *)this + 22) = j_cos(v7);
  result = j_sin(v7);
  *((double *)this + 23) = result;
  return result;
}


//======================================================================
// anl::CImplicitBasisFunction::setMagicNumbers(int)
// address: 0x00332998   size: 0xE0 (224 bytes)
//======================================================================
anl::CImplicitBasisFunction *__fastcall anl::CImplicitBasisFunction::setMagicNumbers(
        anl::CImplicitBasisFunction *this,
        anl::CImplicitBasisFunction *a2)
{
  anl::CImplicitBasisFunction *result; // r0
  int v6; // r2
  int v7; // r3

  result = a2;
  switch ( (unsigned int)a2 )
  {
    case 0u:
    case 4u:
      result = nullptr;
      v6 = 0;
      v7 = 0;
      *((_DWORD *)this + 4) = 0;
      *((_DWORD *)this + 5) = 1072693248;
      *((_DWORD *)this + 12) = 0;
      *((_DWORD *)this + 13) = 0;
      *((_DWORD *)this + 6) = 0;
      *((_DWORD *)this + 7) = 1072693248;
      *((_DWORD *)this + 14) = 0;
      *((_DWORD *)this + 15) = 0;
      *((_DWORD *)this + 8) = 0;
      *((_DWORD *)this + 9) = 1072693248;
      *((_DWORD *)this + 16) = 0;
      *((_DWORD *)this + 17) = 0;
      *((_DWORD *)this + 10) = 0;
      *((_DWORD *)this + 11) = 1072693248;
      break;
    case 1u:
      *((_DWORD *)this + 4) = 1221832296;
      *((_DWORD *)this + 5) = 1073603915;
      *((_DWORD *)this + 12) = -1873842692;
      *((_DWORD *)this + 13) = -1088491816;
      *((_DWORD *)this + 6) = 2115185494;
      *((_DWORD *)this + 7) = 1073586089;
      *((_DWORD *)this + 14) = 197637215;
      *((_DWORD *)this + 15) = -1082068759;
      *((_DWORD *)this + 8) = 1423867558;
      *((_DWORD *)this + 9) = 1073365668;
      *((_DWORD *)this + 16) = -1260315203;
      *((_DWORD *)this + 17) = -1081129504;
      *((_DWORD *)this + 10) = 248764506;
      *((_DWORD *)this + 11) = 1073663359;
      v6 = -525016802;
      v7 = 1067540293;
      break;
    case 2u:
      *((_DWORD *)this + 4) = 810889825;
      *((_DWORD *)this + 5) = 1072015658;
      *((_DWORD *)this + 12) = 662455756;
      *((_DWORD *)this + 13) = -1084703386;
      *((_DWORD *)this + 6) = -1518700436;
      *((_DWORD *)this + 7) = 1072055084;
      *((_DWORD *)this + 14) = -584115552;
      *((_DWORD *)this + 15) = -1077869020;
      *((_DWORD *)this + 8) = -1007427529;
      *((_DWORD *)this + 9) = 1072161032;
      *((_DWORD *)this + 16) = -711933779;
      *((_DWORD *)this + 17) = 1066639021;
      *((_DWORD *)this + 10) = -1257566424;
      *((_DWORD *)this + 11) = 1072265638;
      v6 = 27487791;
      v7 = -1079900740;
      break;
    case 3u:
      result = this;
      goto LABEL_6;
    default:
      result = this;
LABEL_6:
      v6 = 0;
      v7 = 0;
      *((_DWORD *)this + 4) = 0;
      *((_DWORD *)this + 5) = 1072693248;
      *((_DWORD *)this + 12) = 0;
      *((_DWORD *)this + 13) = 0;
      *((_DWORD *)this + 6) = 0;
      *((_DWORD *)this + 7) = 1072693248;
      *((_DWORD *)this + 14) = 0;
      *((_DWORD *)this + 15) = 0;
      *((_DWORD *)this + 8) = 0;
      *((_DWORD *)this + 9) = 1072693248;
      *((_DWORD *)this + 16) = 0;
      *((_DWORD *)this + 17) = 0;
      *((_DWORD *)this + 10) = 0;
      *((_DWORD *)this + 11) = 1072693248;
      break;
  }
  *((_DWORD *)this + 18) = v6;
  *((_DWORD *)this + 19) = v7;
  return result;
}


//======================================================================
// anl::CImplicitBasisFunction::setType(int)
// address: 0x00332B08   size: 0x90 (144 bytes)
//======================================================================
anl::CImplicitBasisFunction *__fastcall anl::CImplicitBasisFunction::setType(
        anl::CImplicitBasisFunction *this,
        anl::CImplicitBasisFunction *a2)
{
  _DWORD *v3; // r0

  switch ( (unsigned int)a2 )
  {
    case 0u:
      *((_DWORD *)this + 21) = anl::value_noise2D;
      *((_DWORD *)this + 22) = anl::value_noise3D;
      *((_DWORD *)this + 23) = anl::value_noise4D;
      v3 = &anl::value_noise6D;
      break;
    case 2u:
      *((_DWORD *)this + 21) = anl::gradval_noise2D;
      *((_DWORD *)this + 22) = anl::gradval_noise3D;
      *((_DWORD *)this + 23) = anl::gradval_noise4D;
      v3 = &anl::gradval_noise6D;
      break;
    case 3u:
      *((_DWORD *)this + 21) = anl::simplex_noise2D;
      *((_DWORD *)this + 22) = anl::simplex_noise3D;
      *((_DWORD *)this + 23) = anl::simplex_noise4D;
      v3 = &anl::simplex_noise6D;
      break;
    case 4u:
      *((_DWORD *)this + 21) = anl::white_noise2D;
      *((_DWORD *)this + 22) = anl::white_noise3D;
      *((_DWORD *)this + 23) = anl::white_noise4D;
      v3 = &anl::white_noise6D;
      break;
    default:
      *((_DWORD *)this + 21) = anl::gradient_noise2D;
      *((_DWORD *)this + 22) = anl::gradient_noise3D;
      *((_DWORD *)this + 23) = anl::gradient_noise4D;
      v3 = &anl::gradient_noise6D;
      break;
  }
  *((_DWORD *)this + 24) = *v3;
  anl::CImplicitBasisFunction::setMagicNumbers(this, a2);
  return this;
}


//======================================================================
// anl::CImplicitBasisFunction::CImplicitBasisFunction(void)
// address: 0x00332BF0   size: 0x3A (58 bytes)
//======================================================================
// Alternative name is '_ZN3anl22CImplicitBasisFunctionC2Ev'
anl::CImplicitBasisFunction *__fastcall anl::CImplicitBasisFunction::CImplicitBasisFunction(
        anl::CImplicitBasisFunction *this)
{
  *((_DWORD *)this + 2) = -350469331;
  *((_DWORD *)this + 3) = 1058682594;
  *(_DWORD *)this = &off_463D98;
  anl::CImplicitBasisFunction::setType(this, (anl::CImplicitBasisFunction *)((char *)&dword_0 + 1));
  anl::CImplicitBasisFunction::setInterp((int)this, 3);
  anl::CImplicitBasisFunction::setSeed(this, 0x3E8u);
  return this;
}


//======================================================================
// anl::CImplicitBasisFunction::CImplicitBasisFunction(int,int)
// address: 0x00332C48   size: 0x3A (58 bytes)
//======================================================================
// Alternative name is '_ZN3anl22CImplicitBasisFunctionC1Eii'
anl::CImplicitBasisFunction *__fastcall anl::CImplicitBasisFunction::CImplicitBasisFunction(
        anl::CImplicitBasisFunction *this,
        anl::CImplicitBasisFunction *a2,
        int a3)
{
  *((_DWORD *)this + 2) = -350469331;
  *((_DWORD *)this + 3) = 1058682594;
  *(_DWORD *)this = &off_463D98;
  anl::CImplicitBasisFunction::setType(this, a2);
  anl::CImplicitBasisFunction::setInterp((int)this, a3);
  anl::CImplicitBasisFunction::setSeed(this, 0x3E8u);
  return this;
}

