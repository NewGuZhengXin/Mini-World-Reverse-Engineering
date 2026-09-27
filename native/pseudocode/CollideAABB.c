// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: CollideAABB

//======================================================================
// CollideAABB::expand(int,int,int)
// address: 0x0029DF28   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall CollideAABB::expand(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // r5
  int v5; // r4
  int v6; // r5
  int v7; // r5
  int v8; // r1

  v4 = *(this + 1);
  *this -= a2;
  v5 = v4 - a3;
  v6 = *(this + 2);
  *(this + 1) = v5;
  *(this + 2) = v6 - a4;
  v7 = *(this + 4);
  *(this + 3) += 2 * a2;
  v8 = *(this + 5);
  *(this + 4) = v7 + 2 * a3;
  *(this + 5) = v8 + 2 * a4;
  return this;
}

