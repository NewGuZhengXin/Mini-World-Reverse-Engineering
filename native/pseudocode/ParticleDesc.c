// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ParticleDesc

//======================================================================
// ParticleDesc::ParticleDesc(void)
// address: 0x002E7AD0   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN12ParticleDescC1Ev'
void __fastcall ParticleDesc::ParticleDesc(ParticleDesc *this)
{
  _DWORD *v1; // r3

  v1 = (_DWORD *)((char *)this + 112);
  do
  {
    *v1 = 1065353216;
    v1[1] = 1065353216;
    v1[2] = 1065353216;
    v1[3] = 1065353216;
    v1 += 4;
  }
  while ( v1 != (_DWORD *)((char *)this + 160) );
}

