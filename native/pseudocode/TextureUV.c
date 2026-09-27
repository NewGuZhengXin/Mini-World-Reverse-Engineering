// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TextureUV

//======================================================================
// TextureUV::TextureUV(void)
// address: 0x001CADAE   size: 0xE (14 bytes)
//======================================================================
// Alternative name is '_ZN9TextureUVC1Ev'
void __fastcall TextureUV::TextureUV(TextureUV *this)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
}


//======================================================================
// TextureUV::set(TextureUV&)
// address: 0x001CADBC   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall TextureUV::set(_DWORD *this, TextureUV *a2)
{
  *this = *(_DWORD *)a2;
  *(this + 1) = *((_DWORD *)a2 + 1);
  *(this + 2) = *((_DWORD *)a2 + 2);
  *(this + 3) = *((_DWORD *)a2 + 3);
  *(this + 4) = *((_DWORD *)a2 + 4);
  return this;
}

