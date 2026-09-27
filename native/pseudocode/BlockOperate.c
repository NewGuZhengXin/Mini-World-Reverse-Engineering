// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockOperate

//======================================================================
// BlockOperate::getProgress(void)
// address: 0x002D708C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockOperate::getProgress(BlockOperate *this)
{
  return 0;
}


//======================================================================
// BlockOperate::~BlockOperate()
// address: 0x002EE62C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN12BlockOperateD1Ev'
void __fastcall BlockOperate::~BlockOperate(BlockOperate *this)
{
  *(_DWORD *)this = &off_462258;
}


//======================================================================
// BlockOperate::begin(OperateTarget *,OperateTool *)
// address: 0x002EE63C   size: 0x14 (20 bytes)
//======================================================================
int __fastcall BlockOperate::begin(_DWORD *a1, int a2, int a3)
{
  int v3; // r3

  v3 = *(_DWORD *)(g_pPlayerCtrl + 52);
  a1[2] = a2;
  a1[3] = a3;
  a1[1] = v3;
  return 5;
}


//======================================================================
// BlockOperate::end(void)
// address: 0x002EE654   size: 0x2 (2 bytes)
//======================================================================
void __fastcall BlockOperate::end(BlockOperate *this)
{
  ;
}


//======================================================================
// BlockOperate::~BlockOperate()
// address: 0x002EE658   size: 0x16 (22 bytes)
//======================================================================
void __fastcall BlockOperate::~BlockOperate(BlockOperate *this)
{
  *(_DWORD *)this = &off_462258;
  operator delete(this);
}

