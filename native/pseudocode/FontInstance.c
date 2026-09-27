// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: FontInstance

//======================================================================
// FontInstance::FontInstance(void)
// address: 0x001C7384   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN12FontInstanceC1Ev'
void __fastcall FontInstance::FontInstance(FontInstance *this)
{
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 1) = &byte_55FB88;
  *((_DWORD *)this + 4) = &byte_55FB88;
  *((_BYTE *)this + 8) = -1;
  *((_BYTE *)this + 9) = -1;
  *((_BYTE *)this + 10) = -1;
  *((_BYTE *)this + 11) = -1;
  *(_DWORD *)this = 0;
  sub_3BE508((int)this + 4, (char *)&unk_3FB8EA);
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 12) = 0;
}


//======================================================================
// FontInstance::~FontInstance()
// address: 0x001C73C0   size: 0x14 (20 bytes)
//======================================================================
// Alternative name is '_ZN12FontInstanceD1Ev'
void __fastcall FontInstance::~FontInstance(FontInstance *this)
{
  sub_3BDF80((char *)this + 16);
  sub_3BDF80((char *)this + 4);
}


//======================================================================
// FontInstance::SetFont(void *)
// address: 0x001C740A   size: 0x2 (2 bytes)
//======================================================================
void __fastcall FontInstance::SetFont(FontInstance *this, void *a2)
{
  ;
}


//======================================================================
// FontInstance::SetJustifyV(JUSTIFYV_T)
// address: 0x001C740C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FontInstance::SetJustifyV(int result, int a2)
{
  *(_DWORD *)(result + 32) = a2;
  return result;
}


//======================================================================
// FontInstance::SetJustifyH(JUSTIFYH_T)
// address: 0x001C7410   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FontInstance::SetJustifyH(int result, int a2)
{
  *(_DWORD *)(result + 36) = a2;
  return result;
}


//======================================================================
// FontInstance::SetShadowColor(Ogre::ColorQuad)
// address: 0x001C7414   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FontInstance::SetShadowColor(int result, int a2)
{
  *(_DWORD *)(result + 12) = a2;
  return result;
}


//======================================================================
// FontInstance::SetSpacing(float)
// address: 0x001C7418   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FontInstance::SetSpacing(int this, float a2)
{
  *(float *)(this + 20) = a2;
  return this;
}

