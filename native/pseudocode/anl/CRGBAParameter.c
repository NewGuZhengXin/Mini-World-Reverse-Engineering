// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CRGBAParameter

//======================================================================
// anl::CRGBAParameter::get(double,double)
// address: 0x00320A46   size: 0x30 (48 bytes)
//======================================================================
anl::CRGBAParameter *__fastcall anl::CRGBAParameter::get(anl::CRGBAParameter *this, _DWORD *a2, double a3, double a4)
{
  if ( *a2 != 0 )
  {
    (*(void (**)(void))(*(_DWORD *)*a2 + 8))();
  }
  else
  {
    *(_DWORD *)this = a2[1];
    *((_DWORD *)this + 1) = a2[2];
    *((_DWORD *)this + 2) = a2[3];
    *((_DWORD *)this + 3) = a2[4];
  }
  return this;
}

