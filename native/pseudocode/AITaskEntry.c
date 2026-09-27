// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AITaskEntry

//======================================================================
// AITaskEntry::operator==(AITaskEntry const&)const
// address: 0x00303EEC   size: 0x1A (26 bytes)
//======================================================================
int __fastcall AITaskEntry::operator==(int *a1, int a2)
{
  int v3; // r4
  int result; // r0

  v3 = *a1;
  result = 0;
  if ( *(_DWORD *)a2 == v3 )
    return *((unsigned __int8 *)a1 + 4)
         - *(unsigned __int8 *)(a2 + 4)
         + (*(unsigned __int8 *)(a2 + 4) == *((unsigned __int8 *)a1 + 4))
         + *(unsigned __int8 *)(a2 + 4)
         - *((unsigned __int8 *)a1 + 4);
  return result;
}

