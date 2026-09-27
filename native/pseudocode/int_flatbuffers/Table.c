// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: int_flatbuffers::Table

//======================================================================
// int flatbuffers::Table::GetField<int>(unsigned short,int)const
// address: 0x002F98AE   size: 0x16 (22 bytes)
//======================================================================
int __fastcall flatbuffers::Table::GetField<int>(flatbuffers::Table *a1, unsigned int a2, int a3)
{
  int OptionalFieldOffset; // r0
  int v6; // r2

  OptionalFieldOffset = flatbuffers::Table::GetOptionalFieldOffset(a1, a2);
  v6 = a3;
  if ( OptionalFieldOffset != 0 )
    return *(_DWORD *)((char *)a1 + OptionalFieldOffset);
  return v6;
}

