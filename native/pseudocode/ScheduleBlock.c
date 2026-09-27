// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ScheduleBlock

//======================================================================
// ScheduleBlock::ScheduleBlock(WCoord const&,int)
// address: 0x002ED834   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN13ScheduleBlockC1ERK6WCoordi'
_DWORD *__fastcall ScheduleBlock::ScheduleBlock(_DWORD *result, _DWORD *a2, int a3)
{
  int v3; // r1
  int v4; // r2

  *result = *a2;
  result[1] = a2[1];
  v3 = a2[2];
  result[3] = a3;
  result[2] = v3;
  v4 = ScheduleBlock::m_NextID++;
  result[6] = v4;
  result[4] = 0;
  result[5] = 0;
  return result;
}


//======================================================================
// ScheduleBlock::isEqual(ScheduleBlock const&)const
// address: 0x002ED85C   size: 0x1C (28 bytes)
//======================================================================
int __fastcall ScheduleBlock::isEqual(int a1, int a2)
{
  int v4; // r2
  int v5; // r3
  int result; // r0

  v5 = operator==((int *)a1, (_DWORD *)a2);
  result = 0;
  if ( v5 != 0 )
    return BlockMaterial::isAssociatedBlockID(*(BlockMaterial **)(a1 + 12), *(BlockMaterial **)(a2 + 12), v4);
  return result;
}


//======================================================================
// ScheduleBlock::lessThan(ScheduleBlock const&)const
// address: 0x002ED878   size: 0x36 (54 bytes)
//======================================================================
bool __fastcall ScheduleBlock::lessThan(_DWORD *a1, _DWORD *a2)
{
  int v2; // r4
  int v3; // r2
  int v4; // r3
  int v5; // r4
  int v6; // r2

  v2 = a1[4];
  v3 = a2[4];
  v4 = 1;
  if ( v2 >= v3 )
  {
    v4 = 0;
    if ( v2 <= v3 )
    {
      v5 = a1[5];
      v6 = a2[5];
      v4 = 1;
      if ( v5 >= v6 )
      {
        v4 = 0;
        if ( v5 <= v6 )
          return a1[6] < a2[6];
      }
    }
  }
  return v4;
}

