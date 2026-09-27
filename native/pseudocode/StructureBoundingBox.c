// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: StructureBoundingBox

//======================================================================
// StructureBoundingBox::isVecInside(int,int,int)const
// address: 0x0029C454   size: 0x34 (52 bytes)
//======================================================================
int __fastcall StructureBoundingBox::isVecInside(StructureBoundingBox *this, int a2, int a3, int a4)
{
  int v5; // r5
  int result; // r0

  v5 = *(_DWORD *)this;
  result = 0;
  if ( a2 >= v5
    && a2 <= *((_DWORD *)this + 3)
    && a4 >= *((_DWORD *)this + 2)
    && a4 <= *((_DWORD *)this + 5)
    && a3 >= *((_DWORD *)this + 1) )
  {
    return (unsigned __int8)((*((int *)this + 4) >> 31) + (*((_DWORD *)this + 4) >= (unsigned int)a3) + (a3 < 0));
  }
  return result;
}


//======================================================================
// StructureBoundingBox::offset(int,int,int)
// address: 0x002D0964   size: 0x28 (40 bytes)
//======================================================================
_DWORD *__fastcall StructureBoundingBox::offset(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // r5
  int v5; // r4
  int v6; // r5
  int v7; // r5
  int v8; // r1

  v4 = *(this + 1);
  *this += a2;
  v5 = v4 + a3;
  v6 = *(this + 2);
  *(this + 1) = v5;
  *(this + 2) = v6 + a4;
  v7 = *(this + 4);
  *(this + 3) += a2;
  v8 = *(this + 5);
  *(this + 4) = v7 + a3;
  *(this + 5) = v8 + a4;
  return this;
}

