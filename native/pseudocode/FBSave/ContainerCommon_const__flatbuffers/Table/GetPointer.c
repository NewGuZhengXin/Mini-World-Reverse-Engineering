// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: FBSave::ContainerCommon_const__flatbuffers::Table::GetPointer

//======================================================================
// FBSave::ContainerCommon const* flatbuffers::Table::GetPointer<FBSave::ContainerCommon const*>(unsigned short)
// address: 0x002FA33C   size: 0x14 (20 bytes)
//======================================================================
int __fastcall flatbuffers::Table::GetPointer<FBSave::ContainerCommon const*>(flatbuffers::Table *a1, unsigned int a2)
{
  int result; // r0
  _DWORD *v4; // r4

  result = flatbuffers::Table::GetOptionalFieldOffset(a1, a2);
  v4 = (_DWORD *)((char *)a1 + result);
  if ( result != 0 )
    return (int)v4 + *v4;
  return result;
}

