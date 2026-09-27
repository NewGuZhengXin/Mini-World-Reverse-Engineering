// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: flatbuffers::Table

//======================================================================
// flatbuffers::Table::GetOptionalFieldOffset(unsigned short)const
// address: 0x00298AA6   size: 0x12 (18 bytes)
//======================================================================
int __fastcall flatbuffers::Table::GetOptionalFieldOffset(flatbuffers::Table *this, unsigned int a2)
{
  unsigned __int16 *v2; // r3
  int result; // r0

  v2 = (unsigned __int16 *)((char *)this - *(_DWORD *)this);
  result = 0;
  if ( *v2 > a2 )
    return *(unsigned __int16 *)((char *)v2 + a2);
  return result;
}

