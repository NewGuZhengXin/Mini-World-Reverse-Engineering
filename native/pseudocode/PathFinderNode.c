// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: PathFinderNode

//======================================================================
// PathFinderNode::makeHash(WCoord const&)
// address: 0x002D5A7E   size: 0x22 (34 bytes)
//======================================================================
int __fastcall PathFinderNode::makeHash(int a1)
{
  return (*(_DWORD *)(a1 + 8) << 24)
       | *(unsigned __int8 *)(a1 + 4)
       | (*(_DWORD *)a1 >> 31 << 31)
       | (*(_DWORD *)a1 << 8) & 0x7FFFFF
       | (*(_DWORD *)(a1 + 8) >> 31 << 15);
}

