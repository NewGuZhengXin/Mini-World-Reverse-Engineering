// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ChunkRandGen

//======================================================================
// ChunkRandGen::ChunkRandGen(void)
// address: 0x00266DBC   size: 0xE (14 bytes)
//======================================================================
// Alternative name is '_ZN12ChunkRandGenC2Ev'
void __fastcall ChunkRandGen::ChunkRandGen(ChunkRandGen *this)
{
  *(_WORD *)this = 13070;
  *((_WORD *)this + 1) = -21555;
  *((_WORD *)this + 2) = 4660;
}


//======================================================================
// ChunkRandGen::_dorand48(void)
// address: 0x00266DD8   size: 0x44 (68 bytes)
//======================================================================
unsigned __int16 *__fastcall ChunkRandGen::_dorand48(unsigned __int16 *this)
{
  int v1; // r3
  int v2; // r5
  unsigned int v3; // r4
  int v4; // r1

  v1 = *this;
  v2 = *(this + 1);
  v3 = 58989 * v1 + 11;
  v4 = 58989 * v2 + 57068 * v1 + HIWORD(v3);
  LOWORD(v1) = -6547 * *(this + 2) - 8468 * v2 + 5 * v1;
  *this = v3;
  *(this + 1) = v4;
  *(this + 2) = HIWORD(v4) + v1;
  return this;
}


//======================================================================
// ChunkRandGen::getFloat(void)
// address: 0x00266E24   size: 0x42 (66 bytes)
//======================================================================
float __fastcall ChunkRandGen::getFloat(ChunkRandGen *this)
{
  double v2; // r0

  ChunkRandGen::_dorand48((unsigned __int16 *)this);
  v2 = j_ldexp((float)*((unsigned __int16 *)this + 1), -32);
  return v2 + j_ldexp((float)*((unsigned __int16 *)this + 2), -16);
}


//======================================================================
// ChunkRandGen::getDouble(void)
// address: 0x00266E66   size: 0x56 (86 bytes)
//======================================================================
double __fastcall ChunkRandGen::getDouble(ChunkRandGen *this)
{
  double v2; // r4
  double v3; // r0

  ChunkRandGen::_dorand48((unsigned __int16 *)this);
  v2 = j_ldexp((double)*(unsigned __int16 *)this, -48);
  v3 = j_ldexp((double)*((unsigned __int16 *)this + 1), -32);
  return v2 + v3 + j_ldexp((double)*((unsigned __int16 *)this + 2), -16);
}


//======================================================================
// ChunkRandGen::setSeed(unsigned int)
// address: 0x00266EBC   size: 0xC (12 bytes)
//======================================================================
_WORD *__fastcall ChunkRandGen::setSeed(_WORD *this, unsigned int a2)
{
  *(this + 1) = a2;
  *this = 13070;
  *(this + 2) = HIWORD(a2);
  return this;
}


//======================================================================
// ChunkRandGen::setSeed64(long long)
// address: 0x00266ECC   size: 0xA (10 bytes)
//======================================================================
int __fastcall ChunkRandGen::setSeed64(int this, __int64 a2)
{
  *(_DWORD *)this = a2;
  *(_WORD *)(this + 4) = WORD2(a2);
  return this;
}


//======================================================================
// ChunkRandGen::ChunkRandGen(long long)
// address: 0x00266ED6   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN12ChunkRandGenC1Ex'
void __fastcall ChunkRandGen::ChunkRandGen(ChunkRandGen *this, __int64 a2)
{
  ChunkRandGen::setSeed64((int)this, a2);
}


//======================================================================
// ChunkRandGen::get(void)
// address: 0x00266F40   size: 0x12 (18 bytes)
//======================================================================
int __fastcall ChunkRandGen::get(ChunkRandGen *this)
{
  ChunkRandGen::_dorand48((unsigned __int16 *)this);
  return (*((unsigned __int16 *)this + 2) << 16) | *((unsigned __int16 *)this + 1);
}


//======================================================================
// ChunkRandGen::get64(void)
// address: 0x002D9D58   size: 0x14 (20 bytes)
//======================================================================
int __fastcall ChunkRandGen::get64(ChunkRandGen *this)
{
  ChunkRandGen::_dorand48((unsigned __int16 *)this);
  return (*((unsigned __int16 *)this + 1) << 16) | *(unsigned __int16 *)this;
}

