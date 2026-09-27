// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: tagRect_ToLua

//======================================================================
// tagRect_ToLua::empty(void)
// address: 0x001C1098   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall tagRect_ToLua::empty(_DWORD *this)
{
  *(this + 3) = 0;
  *(this + 2) = 0;
  *(this + 1) = 0;
  *this = 0;
  return this;
}


//======================================================================
// tagRect_ToLua::getWidth(void)
// address: 0x001C10A4   size: 0xE (14 bytes)
//======================================================================
float __fastcall tagRect_ToLua::getWidth(tagRect_ToLua *this)
{
  return *((float *)this + 1) - *(float *)this;
}


//======================================================================
// tagRect_ToLua::getHeight(void)
// address: 0x001C10B2   size: 0xE (14 bytes)
//======================================================================
float __fastcall tagRect_ToLua::getHeight(tagRect_ToLua *this)
{
  return *((float *)this + 3) - *((float *)this + 2);
}

