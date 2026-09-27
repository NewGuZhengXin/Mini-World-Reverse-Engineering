// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: stRichChar

//======================================================================
// stRichChar::stRichChar(void)
// address: 0x001C4482   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZN10stRichCharC1Ev'
void __fastcall stRichChar::stRichChar(stRichChar *this)
{
  *(_DWORD *)this = -1;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_BYTE *)this + 16) = 0;
  j_memset((char *)this + 17, 0, 5u);
}

