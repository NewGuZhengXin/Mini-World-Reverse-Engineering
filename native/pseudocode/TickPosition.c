// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TickPosition

//======================================================================
// TickPosition::getPos(WCoord const&)
// address: 0x002D4380   size: 0x88 (136 bytes)
//======================================================================
TickPosition *__fastcall TickPosition::getPos(TickPosition *this, const WCoord *a2, int *a3)
{
  float v4; // r5
  float v5; // r0
  float v7; // [sp+0h] [bp-Ch]

  v4 = *((float *)a2 + 3) / 0.05;
  v5 = (float)*((int *)a2 + 1) + (float)((float)((float)a3[1] - (float)*((int *)a2 + 1)) * v4);
  v7 = (float)*((int *)a2 + 2) + (float)((float)((float)a3[2] - (float)*((int *)a2 + 2)) * v4);
  *(float *)this = (float)*(int *)a2 + (float)((float)((float)*a3 - (float)*(int *)a2) * v4);
  *((float *)this + 1) = v5;
  *((float *)this + 2) = v7;
  return this;
}

