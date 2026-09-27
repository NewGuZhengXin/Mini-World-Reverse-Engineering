// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RibbonSegBuffer

//======================================================================
// Ogre::RibbonSegBuffer::RibbonSegBuffer(void)
// address: 0x0014F288   size: 0x10 (16 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15RibbonSegBufferC1Ev'
_DWORD *__fastcall Ogre::RibbonSegBuffer::RibbonSegBuffer(_DWORD *this)
{
  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  return this;
}


//======================================================================
// Ogre::RibbonSegBuffer::~RibbonSegBuffer()
// address: 0x0014F298   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15RibbonSegBufferD1Ev'
void __fastcall Ogre::RibbonSegBuffer::~RibbonSegBuffer(Ogre::RibbonSegBuffer *this)
{
  void *v1; // r0

  v1 = *((void **)this + 3);
  if ( v1 != nullptr )
    operator delete[](v1);
}


//======================================================================
// Ogre::RibbonSegBuffer::Create(int)
// address: 0x0014F32E   size: 0x4C (76 bytes)
//======================================================================
int __fastcall Ogre::RibbonSegBuffer::Create(Ogre::RibbonSegBuffer *this, unsigned int a2)
{
  unsigned int v4; // r0
  int result; // r0
  _DWORD *v6; // r3
  unsigned int v7; // r1

  if ( a2 > 0x3C8000 )
    v4 = -1;
  else
    v4 = 540 * a2;
  result = operator new[](v4);
  v6 = (_DWORD *)(result + 32);
  v7 = a2 - 1;
  while ( --v7 != -2 )
  {
    *v6 = 1065353216;
    v6[1] = 1065353216;
    v6[2] = 1065353216;
    v6[3] = 1065353216;
    v6 += 135;
  }
  *((_DWORD *)this + 2) = a2;
  *((_DWORD *)this + 3) = result;
  *((_DWORD *)this + 5) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  return result;
}


//======================================================================
// Ogre::RibbonSegBuffer::PopTail(void)
// address: 0x0014F37A   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall Ogre::RibbonSegBuffer::PopTail(_DWORD *this)
{
  _DWORD *v1; // r4
  int v2; // r1
  int v3; // r0
  int v4; // r1
  int v5; // t0
  int v6; // r3

  v1 = this;
  if ( (int)*(this + 5) > 0 )
  {
    *(_DWORD *)(*(this + 3) + 540 * *(this + 1) + 536) = 2;
    v2 = *(this + 2);
    v3 = *(this + 1) + 1;
    v5 = v3 / v2;
    v4 = v3 % v2;
    v6 = v1[5];
    v1[1] = v4;
    v1[5] = v6 - 1;
    return (_DWORD *)v5;
  }
  return this;
}


//======================================================================
// Ogre::RibbonSegBuffer::GetTail(void)
// address: 0x0014F3AE   size: 0x1A (26 bytes)
//======================================================================
int __fastcall Ogre::RibbonSegBuffer::GetTail(Ogre::RibbonSegBuffer *this)
{
  if ( *((int *)this + 5) <= 0 )
    return 0;
  else
    return *((_DWORD *)this + 3) + 540 * *((_DWORD *)this + 1);
}


//======================================================================
// Ogre::RibbonSegBuffer::GetHead(void)
// address: 0x0014F3C8   size: 0x26 (38 bytes)
//======================================================================
int __fastcall Ogre::RibbonSegBuffer::GetHead(Ogre::RibbonSegBuffer *this)
{
  int v2; // r0

  v2 = *((_DWORD *)this + 5);
  if ( v2 <= 0 )
    return 0;
  else
    return *((_DWORD *)this + 3) + 540 * ((v2 + *((_DWORD *)this + 1) - 1) % *((_DWORD *)this + 2));
}


//======================================================================
// Ogre::RibbonSegBuffer::PushHead(Ogre::RIB_SEG_TYPE)
// address: 0x0014F3EE   size: 0x3E (62 bytes)
//======================================================================
int __fastcall Ogre::RibbonSegBuffer::PushHead(int *a1, int a2)
{
  int v4; // r5
  int v5; // r3
  int v6; // r0

  if ( a1[5] >= a1[2] )
    Ogre::RibbonSegBuffer::PopTail(a1);
  v4 = 540 * *a1;
  *(_DWORD *)(a1[3] + v4 + 536) = a2;
  v5 = a1[5];
  v6 = a1[3];
  *a1 = (*a1 + 1) % a1[2];
  a1[5] = v5 + 1;
  return v6 + v4;
}


//======================================================================
// Ogre::RibbonSegBuffer::GetCount(void)
// address: 0x0014F42C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::RibbonSegBuffer::GetCount(Ogre::RibbonSegBuffer *this)
{
  return *((_DWORD *)this + 5);
}


//======================================================================
// Ogre::RibbonSegBuffer::BeginIterate(void)
// address: 0x0014F430   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::RibbonSegBuffer::BeginIterate(int this)
{
  *(_DWORD *)(this + 16) = -1;
  return this;
}


//======================================================================
// Ogre::RibbonSegBuffer::GetCurrent(void)
// address: 0x0014F438   size: 0x26 (38 bytes)
//======================================================================
int __fastcall Ogre::RibbonSegBuffer::GetCurrent(Ogre::RibbonSegBuffer *this)
{
  int v2; // r3
  int v3; // r0

  v2 = *((_DWORD *)this + 5);
  v3 = *((_DWORD *)this + 4);
  if ( v3 >= v2 )
    return 0;
  else
    return *((_DWORD *)this + 3) + 540 * ((v3 + *((_DWORD *)this + 1)) % *((_DWORD *)this + 2));
}


//======================================================================
// Ogre::RibbonSegBuffer::Next(void)
// address: 0x0014F45E   size: 0x18 (24 bytes)
//======================================================================
bool __fastcall Ogre::RibbonSegBuffer::Next(Ogre::RibbonSegBuffer *this)
{
  int v1; // r1
  int v2; // r2

  v1 = *((_DWORD *)this + 5);
  v2 = *((_DWORD *)this + 4) + 1;
  *((_DWORD *)this + 4) = v2;
  return v2 < v1;
}


//======================================================================
// Ogre::RibbonSegBuffer::IsEndOfQueue(void)
// address: 0x0014F476   size: 0x14 (20 bytes)
//======================================================================
bool __fastcall Ogre::RibbonSegBuffer::IsEndOfQueue(Ogre::RibbonSegBuffer *this)
{
  return *((_DWORD *)this + 4) < *((_DWORD *)this + 5);
}


//======================================================================
// Ogre::RibbonSegBuffer::GetPrevRealSeg(int)
// address: 0x0014F48A   size: 0x3C (60 bytes)
//======================================================================
int __fastcall Ogre::RibbonSegBuffer::GetPrevRealSeg(Ogre::RibbonSegBuffer *this, int a2)
{
  int i; // r4
  int result; // r0

  for ( i = *((_DWORD *)this + 5) - 1; i >= 0; --i )
  {
    result = *((_DWORD *)this + 3) + 540 * ((i + *((_DWORD *)this + 1)) % *((_DWORD *)this + 2));
    if ( *(_DWORD *)(result + 536) == 0 && --a2 <= 0 )
      return result;
  }
  return 0;
}


//======================================================================
// Ogre::RibbonSegBuffer::GetPrevSeg(int)
// address: 0x0014F4C6   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Ogre::RibbonSegBuffer::GetPrevSeg(Ogre::RibbonSegBuffer *this, int a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r2

  v2 = *((_DWORD *)this + 5);
  v3 = v2 - 1;
  v4 = a2 - v2;
  while ( v3 >= 0 )
  {
    if ( v4 + v3 <= 0 )
      return *((_DWORD *)this + 3) + 540 * ((v3 + *((_DWORD *)this + 1)) % *((_DWORD *)this + 2));
    --v3;
  }
  return 0;
}

