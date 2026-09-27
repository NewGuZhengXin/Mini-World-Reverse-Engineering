// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CCellularGenerator

//======================================================================
// anl::CCellularGenerator::~CCellularGenerator()
// address: 0x0032917A   size: 0x2 (2 bytes)
//======================================================================
// Alternative name is '_ZN3anl18CCellularGeneratorD1Ev'
void __fastcall anl::CCellularGenerator::~CCellularGenerator(anl::CCellularGenerator *this)
{
  ;
}


//======================================================================
// anl::CCellularGenerator::get(double,double)
// address: 0x0032917C   size: 0x68 (104 bytes)
//======================================================================
char *__fastcall anl::CCellularGenerator::get(anl::CCellularGenerator *this, double a2, double a3)
{
  double v7; // [sp+0h] [bp-10h]
  double *savedregs; // [sp+10h] [bp+0h]

  if ( *((_BYTE *)this + 120) == 0 || a2 != *((double *)this + 9) || a3 != *((double *)this + 10) )
  {
    HIDWORD(v7) = (char *)this + 8;
    LODWORD(v7) = *(_DWORD *)this;
    anl::cellular_function2D(a2, a3, v7, (double *)this + 5, (double *)HIDWORD(a2), savedregs);
    *((double *)this + 9) = a2;
    *((double *)this + 10) = a3;
    *((_BYTE *)this + 120) = 1;
  }
  return (char *)this + 8;
}


//======================================================================
// anl::CCellularGenerator::get(double,double,double)
// address: 0x003291E4   size: 0x98 (152 bytes)
//======================================================================
char *__fastcall anl::CCellularGenerator::get(anl::CCellularGenerator *this, double a2, double a3, double a4)
{
  double v8; // [sp+8h] [bp-10h]
  double *v9; // [sp+14h] [bp-4h]
  double *savedregs; // [sp+18h] [bp+0h]

  if ( *((_BYTE *)this + 240) == 0
    || a2 != *((double *)this + 24)
    || a3 != *((double *)this + 25)
    || a4 != *((double *)this + 26) )
  {
    HIDWORD(v8) = (char *)this + 128;
    LODWORD(v8) = *(_DWORD *)this;
    anl::cellular_function3D(a2, a3, a4, v8, (double *)this + 20, v9, savedregs);
    *((double *)this + 24) = a2;
    *((double *)this + 25) = a3;
    *((double *)this + 26) = a4;
    *((_BYTE *)this + 240) = 1;
  }
  return (char *)this + 128;
}


//======================================================================
// anl::CCellularGenerator::get(double,double,double,double)
// address: 0x0032927C   size: 0xB2 (178 bytes)
//======================================================================
char *__fastcall anl::CCellularGenerator::get(
        anl::CCellularGenerator *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  double v9; // [sp+10h] [bp-14h]
  double *v10; // [sp+1Ch] [bp-8h]
  double *v11; // [sp+20h] [bp-4h]

  if ( *((_BYTE *)this + 360) == 0
    || a2 != *((double *)this + 39)
    || a3 != *((double *)this + 40)
    || a4 != *((double *)this + 41)
    || a5 != *((double *)this + 42) )
  {
    LODWORD(v9) = *(_DWORD *)this;
    HIDWORD(v9) = (char *)this + 248;
    anl::cellular_function4D(a2, a3, a4, a5, v9, (double *)this + 35, v10, v11);
    *((double *)this + 40) = a3;
    *((double *)this + 41) = a4;
    *((double *)this + 42) = a5;
    *((double *)this + 39) = a2;
    *((_BYTE *)this + 360) = 1;
  }
  return (char *)this + 248;
}


//======================================================================
// anl::CCellularGenerator::get(double,double,double,double,double,double)
// address: 0x0032932E   size: 0x136 (310 bytes)
//======================================================================
char *__fastcall anl::CCellularGenerator::get(
        anl::CCellularGenerator *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double v11; // [sp+20h] [bp-14h]
  double *v12; // [sp+2Ch] [bp-8h]
  double *v13; // [sp+30h] [bp-4h]

  if ( *((_BYTE *)this + 480) == 0
    || a2 != *((double *)this + 54)
    || a3 != *((double *)this + 55)
    || a4 != *((double *)this + 56)
    || a5 != *((double *)this + 57)
    || a6 != *((double *)this + 58)
    || a7 != *((double *)this + 59) )
  {
    LODWORD(v11) = *(_DWORD *)this;
    HIDWORD(v11) = (char *)this + 368;
    anl::cellular_function6D(a2, a3, a4, a5, a6, a7, v11, (double *)this + 50, v12, v13);
    *((double *)this + 54) = a2;
    *((double *)this + 55) = a3;
    *((double *)this + 56) = a4;
    *((double *)this + 57) = a5;
    *((double *)this + 58) = a6;
    *((double *)this + 59) = a7;
    *((_BYTE *)this + 480) = 1;
  }
  return (char *)this + 368;
}


//======================================================================
// anl::CCellularGenerator::setSeed(unsigned int)
// address: 0x00329464   size: 0x1C (28 bytes)
//======================================================================
int __fastcall anl::CCellularGenerator::setSeed(int this, unsigned int a2)
{
  *(_DWORD *)this = a2;
  *(_BYTE *)(this + 120) = 0;
  *(_BYTE *)(this + 240) = 0;
  *(_BYTE *)(this + 360) = 0;
  *(_BYTE *)(this + 480) = 0;
  return this;
}


//======================================================================
// anl::CCellularGenerator::CCellularGenerator(void)
// address: 0x00329480   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN3anl18CCellularGeneratorC1Ev'
anl::CCellularGenerator *__fastcall anl::CCellularGenerator::CCellularGenerator(anl::CCellularGenerator *this)
{
  *((_BYTE *)this + 120) = 0;
  *((_BYTE *)this + 240) = 0;
  *((_BYTE *)this + 360) = 0;
  *((_BYTE *)this + 480) = 0;
  anl::CCellularGenerator::setSeed((int)this, 0x3E8u);
  return this;
}

