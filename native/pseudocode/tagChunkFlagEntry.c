// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: tagChunkFlagEntry

//======================================================================
// tagChunkFlagEntry::operator<(tagChunkFlagEntry const&)const
// address: 0x002EECDE   size: 0x36 (54 bytes)
//======================================================================
bool __fastcall tagChunkFlagEntry::operator<(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v2; // r4
  unsigned int v3; // r2
  int v4; // r3
  int v5; // r4
  int v6; // r2

  v2 = *a1;
  v3 = *a2;
  v4 = 1;
  if ( v2 >= v3 )
  {
    v4 = 0;
    if ( v2 <= v3 )
    {
      v5 = *((_DWORD *)a1 + 1);
      v6 = *((_DWORD *)a2 + 1);
      v4 = 1;
      if ( v5 >= v6 )
      {
        v4 = 0;
        if ( v5 <= v6 )
          return *((_DWORD *)a1 + 2) < *((_DWORD *)a2 + 2);
      }
    }
  }
  return v4;
}

