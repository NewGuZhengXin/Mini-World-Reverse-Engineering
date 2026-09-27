// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BaseEffect

//======================================================================
// BaseEffect::~BaseEffect()
// address: 0x0026B558   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN10BaseEffectD1Ev'
void __fastcall BaseEffect::~BaseEffect(BaseEffect *this)
{
  *(_DWORD *)this = &off_45BF48;
}


//======================================================================
// BaseEffect::tick(void)
// address: 0x0026B568   size: 0x2 (2 bytes)
//======================================================================
void __fastcall BaseEffect::tick(BaseEffect *this)
{
  ;
}


//======================================================================
// BaseEffect::update(float)
// address: 0x0026B56A   size: 0x2 (2 bytes)
//======================================================================
void __fastcall BaseEffect::update(BaseEffect *this, float a2)
{
  ;
}


//======================================================================
// BaseEffect::~BaseEffect()
// address: 0x0026B56C   size: 0x16 (22 bytes)
//======================================================================
void __fastcall BaseEffect::~BaseEffect(BaseEffect *this)
{
  *(_DWORD *)this = &off_45BF48;
  operator delete(this);
}

