// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::GroundGrid

//======================================================================
// Ogre::GroundGrid::getRTTI(void)const
// address: 0x0014408C   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::GroundGrid::getRTTI(Ogre::GroundGrid *this)
{
  return &Ogre::GroundGrid::m_RTTI;
}


//======================================================================
// Ogre::GroundGrid::BuildDecalMesh(Ogre::BoxBound const&,Ogre::Vector3 *,unsigned short *,int,int,int &,int &)
// address: 0x00144098   size: 0xD8 (216 bytes)
//======================================================================
__int64 __fastcall Ogre::GroundGrid::BuildDecalMesh(
        __int64 a1,
        int a2,
        _WORD *a3,
        __int16 a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v8; // [sp+0h] [bp-Ch]
  float v9; // [sp+4h] [bp-8h]
  float v10; // [sp+4h] [bp-8h]
  float v11; // [sp+4h] [bp-8h]

  v8 = a1;
  *a6 = 0;
  if ( a5 > 1 )
  {
    *a7 = 2;
    *a6 = 4;
    v9 = *(float *)(a1 + 344) * 0.5;
    *(float *)a2 = COERCE_FLOAT(*(_DWORD *)(a1 + 340) + 0x80000000) * 0.5;
    *(_DWORD *)(a2 + 4) = -1110651699;
    *(float *)(a2 + 8) = v9;
    v10 = COERCE_FLOAT(*(_DWORD *)(a1 + 344) + 0x80000000) * 0.5;
    *(float *)(a2 + 12) = COERCE_FLOAT(*(_DWORD *)(a1 + 340) + 0x80000000) * 0.5;
    *(_DWORD *)(a2 + 16) = -1110651699;
    *(float *)(a2 + 20) = v10;
    v11 = *(float *)(a1 + 344) * 0.5;
    *(float *)(a2 + 24) = *(float *)(a1 + 340) * 0.5;
    *(_DWORD *)(a2 + 28) = -1110651699;
    *(float *)(a2 + 32) = v11;
    *((float *)&v8 + 1) = COERCE_FLOAT(*(_DWORD *)(a1 + 344) + 0x80000000) * 0.5;
    *(float *)(a2 + 36) = *(float *)(a1 + 340) * 0.5;
    *(_DWORD *)(a2 + 40) = -1110651699;
    *(_DWORD *)(a2 + 44) = HIDWORD(v8);
    *a3 = a4;
    a3[1] = a4 + 1;
    a3[2] = a4 + 2;
    a3[3] = a4 + 1;
    a3[4] = a4 + 2;
    a3[5] = a4 + 3;
  }
  else
  {
    *a7 = 0;
  }
  return v8;
}


//======================================================================
// Ogre::GroundGrid::~GroundGrid()
// address: 0x00144174   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10GroundGridD1Ev'
void __fastcall Ogre::GroundGrid::~GroundGrid(Ogre::GroundGrid *this)
{
  *(_DWORD *)this = &off_455BD0;
  Ogre::RenderLines::~RenderLines(this);
}


//======================================================================
// Ogre::GroundGrid::~GroundGrid()
// address: 0x00144190   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::GroundGrid::~GroundGrid(Ogre::GroundGrid *this)
{
  Ogre::GroundGrid::~GroundGrid(this);
  operator delete(this);
}


//======================================================================
// Ogre::GroundGrid::GroundGrid(bool)
// address: 0x001441A4   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10GroundGridC1Eb'
Ogre::GroundGrid *__fastcall Ogre::GroundGrid::GroundGrid(Ogre::GroundGrid *this, bool a2)
{
  Ogre::RenderLines::RenderLines(this, a2);
  *(_DWORD *)this = &off_455BD0;
  *((_DWORD *)this + 81) = -1;
  *((_DWORD *)this + 82) = -7566196;
  *((_DWORD *)this + 84) = 0;
  *((_DWORD *)this + 83) = -7566196;
  return this;
}


//======================================================================
// Ogre::GroundGrid::newObject(void)
// address: 0x001441D8   size: 0x16 (22 bytes)
//======================================================================
Ogre::GroundGrid *__fastcall Ogre::GroundGrid::newObject(Ogre::GroundGrid *this)
{
  Ogre::GroundGrid *v1; // r4

  v1 = (Ogre::GroundGrid *)operator new(0x164u);
  Ogre::GroundGrid::GroundGrid(v1, false);
  return v1;
}


//======================================================================
// Ogre::GroundGrid::createGridGround(float,float,int,int)
// address: 0x001441EE   size: 0x178 (376 bytes)
//======================================================================
int __fastcall Ogre::GroundGrid::createGridGround(int this, float a2, float a3, int a4, int a5)
{
  _DWORD *v5; // r5
  int i; // r4
  int v7; // r3
  int v8; // r1
  _DWORD *v9; // r0
  int j; // r3
  int v11; // r3
  _DWORD *v12; // r0
  int v13; // r1
  int v14; // [sp+0h] [bp-34h]
  int v18; // [sp+10h] [bp-24h]
  float v19; // [sp+18h] [bp-1Ch] BYREF
  int v20; // [sp+1Ch] [bp-18h]
  float v21; // [sp+20h] [bp-14h]
  float v22[4]; // [sp+24h] [bp-10h] BYREF

  v5 = (_DWORD *)this;
  v18 = a4 / 2;
  for ( i = 0; a4 >= i; ++i )
  {
    v19 = a3 * -0.5;
    v20 = 0;
    v21 = (float)(a2 * -0.5) + (float)((float)((float)i * a2) / (float)a4);
    v22[2] = v21;
    v22[0] = a3 * 0.5;
    v22[1] = 0.0;
    if ( i == 0 || i == a4 || i == v18 )
    {
      v7 = v5[81];
    }
    else
    {
      v8 = v5[84];
      if ( v8 > 0 && i % v8 == 0 )
      {
        v7 = v5[83];
        v9 = v5;
        goto LABEL_12;
      }
      v7 = v5[82];
    }
    v9 = v5;
LABEL_12:
    this = Ogre::RenderLines::addLine(v9, &v19, v22, v7);
  }
  for ( j = 0; ; j = v14 + 1 )
  {
    v14 = j;
    if ( a5 < j )
      break;
    v19 = (float)(a3 * -0.5) + (float)((float)((float)j * a3) / (float)a5);
    v20 = 0;
    v21 = a2 * -0.5;
    v22[1] = 0.0;
    v22[0] = v19;
    v22[2] = a2 * 0.5;
    if ( j == 0 || j == a4 || j == v18 )
    {
      v11 = v5[81];
      v12 = v5;
    }
    else
    {
      v13 = v5[84];
      if ( v13 <= 0 || j % v13 != 0 )
      {
        v11 = v5[82];
        v12 = v5;
      }
      else
      {
        v11 = v5[83];
        v12 = v5;
      }
    }
    this = Ogre::RenderLines::addLine(v12, &v19, v22, v11);
  }
  return this;
}


//======================================================================
// Ogre::GroundGrid::setGridGround(float,float,int,int)
// address: 0x00144366   size: 0xE (14 bytes)
//======================================================================
char *__fastcall Ogre::GroundGrid::setGridGround(Ogre::GroundGrid *this, float a2, float a3, int a4, int a5)
{
  char *result; // r0

  result = (char *)this + 252;
  *((_DWORD *)result + 24) = a4;
  *((float *)result + 22) = a2;
  *((float *)result + 23) = a3;
  *((_DWORD *)result + 25) = a5;
  return result;
}


//======================================================================
// Ogre::GroundGrid::setLineColor(unsigned int)
// address: 0x00144374   size: 0x6 (6 bytes)
//======================================================================
char *__fastcall Ogre::GroundGrid::setLineColor(Ogre::GroundGrid *this, unsigned int a2)
{
  char *result; // r0

  result = (char *)this + 252;
  *((_DWORD *)result + 19) = a2;
  return result;
}


//======================================================================
// Ogre::GroundGrid::setBorderColor(unsigned int)
// address: 0x0014437A   size: 0x6 (6 bytes)
//======================================================================
char *__fastcall Ogre::GroundGrid::setBorderColor(Ogre::GroundGrid *this, unsigned int a2)
{
  char *result; // r0

  result = (char *)this + 252;
  *((_DWORD *)result + 18) = a2;
  return result;
}


//======================================================================
// Ogre::GroundGrid::setStepColor(unsigned int,int)
// address: 0x00144380   size: 0x8 (8 bytes)
//======================================================================
char *__fastcall Ogre::GroundGrid::setStepColor(Ogre::GroundGrid *this, unsigned int a2, int a3)
{
  char *result; // r0

  result = (char *)this + 252;
  *((_DWORD *)result + 20) = a2;
  *((_DWORD *)result + 21) = a3;
  return result;
}


//======================================================================
// Ogre::GroundGrid::update(unsigned int)
// address: 0x00144388   size: 0x28 (40 bytes)
//======================================================================
int __fastcall Ogre::GroundGrid::update(Ogre::GroundGrid *this, unsigned int a2)
{
  int v5; // [sp+0h] [bp-Ch]

  Ogre::RenderLines::reset(this);
  Ogre::GroundGrid::createGridGround(
    (int)this,
    *((float *)this + 85),
    *((float *)this + 86),
    *((_DWORD *)this + 87),
    *((_DWORD *)this + 88));
  Ogre::RenderLines::update(this, a2);
  return v5;
}

