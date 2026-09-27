// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: NoiseGeneratorOctaves

//======================================================================
// NoiseGeneratorOctaves::~NoiseGeneratorOctaves()
// address: 0x002B8CB2   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN21NoiseGeneratorOctavesD1Ev'
void __fastcall NoiseGeneratorOctaves::~NoiseGeneratorOctaves(NoiseGeneratorOctaves *this)
{
  unsigned int i; // r4
  void **v3; // r0

  for ( i = 0; ; ++i )
  {
    v3 = *((void ***)this + 1);
    if ( i >= (*((_DWORD *)this + 2) - (int)v3) >> 2 )
      break;
    operator delete(v3[i]);
  }
  if ( v3 != nullptr )
    operator delete(v3);
}


//======================================================================
// NoiseGeneratorOctaves::NoiseGeneratorOctaves(ChunkRandGen &,int)
// address: 0x002B8D90   size: 0x5A (90 bytes)
//======================================================================
// Alternative name is '_ZN21NoiseGeneratorOctavesC1ER12ChunkRandGeni'
void __fastcall NoiseGeneratorOctaves::NoiseGeneratorOctaves(NoiseGeneratorOctaves *this, ChunkRandGen *a2, int a3)
{
  int i; // r5
  __int64 v6; // r0
  NoiseGeneratorPerlin *v7; // r6
  int v8; // r3

  *(_DWORD *)this = a3;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  if ( a3 != 0 )
  {
    LODWORD(v6) = (char *)this + 4;
    HIDWORD(v6) = a3;
    std::vector<NoiseGeneratorPerlin *>::_M_default_append(v6);
  }
  for ( i = 0; i < *(_DWORD *)this; ++i )
  {
    v7 = (NoiseGeneratorPerlin *)operator new(0x818u);
    NoiseGeneratorPerlin::NoiseGeneratorPerlin(v7, a2);
    v8 = 4 * i;
    *(_DWORD *)(v8 + *((_DWORD *)this + 1)) = v7;
  }
}


//======================================================================
// NoiseGeneratorOctaves::generateNoiseOctaves(std::vector<double,std::allocator<double>> &,int,int,int,int,int,int,double,double,double)
// address: 0x002B8EB0   size: 0x112 (274 bytes)
//======================================================================
void *__fastcall NoiseGeneratorOctaves::generateNoiseOctaves(
        _DWORD *a1,
        void **a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        double a9,
        double a10,
        double a11)
{
  unsigned int v13; // r3
  char *v14; // r2
  size_t v15; // r5
  unsigned int v16; // r1
  __int64 v17; // r0
  void *result; // r0
  double v19; // kr00_8
  int v20; // [sp+1Ch] [bp-40h]
  int v21; // [sp+40h] [bp-1Ch]

  v13 = a7 * a6 * a8;
  v14 = (char *)*a2;
  v15 = 8 * v13;
  v16 = ((_BYTE *)a2[1] - (_BYTE *)*a2) >> 3;
  if ( v13 <= v16 )
  {
    if ( v13 < v16 )
      a2[1] = &v14[v15];
  }
  else
  {
    HIDWORD(v17) = v13 - v16;
    LODWORD(v17) = a2;
    std::vector<double>::_M_default_append(v17);
  }
  result = j_memset(*a2, 0, v15);
  v21 = 0;
  v19 = 1.0;
  while ( v21 < *a1 )
  {
    NoiseGeneratorPerlin::populateNoiseArray(
      *(_DWORD *)(4 * v21 + a1[1]),
      a2,
      COERCE_UNSIGNED_INT64((double)a3 * v19 * a9),
      HIDWORD(COERCE_UNSIGNED_INT64((double)a3 * v19 * a9)),
      COERCE_UNSIGNED_INT64((double)a4 * v19 * a10),
      HIDWORD(COERCE_UNSIGNED_INT64((double)a4 * v19 * a10)),
      COERCE_UNSIGNED_INT64((double)a5 * v19 * a11),
      HIDWORD(COERCE_UNSIGNED_INT64((double)a5 * v19 * a11)),
      a6,
      a7,
      a8,
      v20,
      COERCE_UNSIGNED_INT64(a9 * v19),
      HIDWORD(COERCE_UNSIGNED_INT64(a9 * v19)),
      COERCE_UNSIGNED_INT64(a10 * v19),
      HIDWORD(COERCE_UNSIGNED_INT64(a10 * v19)),
      COERCE_UNSIGNED_INT64(a11 * v19),
      HIDWORD(COERCE_UNSIGNED_INT64(a11 * v19)),
      LODWORD(v19),
      HIDWORD(v19));
    v19 = v19 * 0.5;
    result = (void *)++v21;
  }
  return result;
}


//======================================================================
// NoiseGeneratorOctaves::generateNoiseOctaves(std::vector<double,std::allocator<double>> &,int,int,int,int,double,double,double)
// address: 0x002B8FD8   size: 0x34 (52 bytes)
//======================================================================
void *__fastcall NoiseGeneratorOctaves::generateNoiseOctaves(
        _DWORD *a1,
        void **a2,
        int a3,
        int a4,
        int a5,
        int a6,
        double a7,
        double a8)
{
  return NoiseGeneratorOctaves::generateNoiseOctaves(a1, a2, a3, 10, a4, a5, 1, a6, a7, 1.0, a8);
}

