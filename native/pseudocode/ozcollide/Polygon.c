// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ozcollide::Polygon

//======================================================================
// ozcollide::Polygon::Polygon(void)
// address: 0x001D1158   size: 0x6 (6 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide7PolygonC2Ev'
_DWORD *__fastcall ozcollide::Polygon::Polygon(_DWORD *this)
{
  *this = 0;
  return this;
}


//======================================================================
// ozcollide::Polygon::~Polygon()
// address: 0x001D115E   size: 0x2 (2 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide7PolygonD2Ev'
void __fastcall ozcollide::Polygon::~Polygon(ozcollide::Polygon *this)
{
  ;
}


//======================================================================
// ozcollide::Polygon::setNbIndices(int)
// address: 0x001D1160   size: 0x4 (4 bytes)
//======================================================================
_DWORD *__fastcall ozcollide::Polygon::setNbIndices(_DWORD *this, int a2)
{
  *this = a2;
  return this;
}


//======================================================================
// ozcollide::Polygon::isDegenerate(void)const
// address: 0x001D1164   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ozcollide::Polygon::isDegenerate(ozcollide::Polygon *this)
{
  return 0;
}


//======================================================================
// ozcollide::Polygon::copyTo(ozcollide::Polygon&)const
// address: 0x001D1168   size: 0x22 (34 bytes)
//======================================================================
void *__fastcall ozcollide::Polygon::copyTo(ozcollide::Polygon *this, ozcollide::Polygon *a2)
{
  *(_DWORD *)a2 = *(_DWORD *)this;
  *((_DWORD *)a2 + 5) = *((_DWORD *)this + 5);
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 6);
  *((_DWORD *)a2 + 7) = *((_DWORD *)this + 7);
  return j_memcpy((char *)a2 + 4, (char *)this + 4, 4 * *(_DWORD *)this);
}


//======================================================================
// ozcollide::Polygon::clone(void)const
// address: 0x001D118A   size: 0x1C (28 bytes)
//======================================================================
ozcollide::Polygon *__fastcall ozcollide::Polygon::clone(ozcollide::Polygon *this)
{
  ozcollide::Polygon *v2; // r4

  v2 = (ozcollide::Polygon *)operator new(0x20u);
  ozcollide::Polygon::Polygon(v2);
  ozcollide::Polygon::copyTo(this, v2);
  return v2;
}

