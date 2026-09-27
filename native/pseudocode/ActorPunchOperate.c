// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ActorPunchOperate

//======================================================================
// ActorPunchOperate::~ActorPunchOperate()
// address: 0x002D70F0   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN17ActorPunchOperateD1Ev'
void __fastcall ActorPunchOperate::~ActorPunchOperate(ActorPunchOperate *this)
{
  *(_DWORD *)this = &off_462258;
}


//======================================================================
// ActorPunchOperate::update(int,IntersectResult &)
// address: 0x002D7100   size: 0x4 (4 bytes)
//======================================================================
int ActorPunchOperate::update()
{
  return 1;
}


//======================================================================
// ActorPunchOperate::~ActorPunchOperate()
// address: 0x002D714C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ActorPunchOperate::~ActorPunchOperate(ActorPunchOperate *this)
{
  ActorPunchOperate::~ActorPunchOperate(this);
  operator delete(this);
}


//======================================================================
// ActorPunchOperate::begin(OperateTarget *,OperateTool *)
// address: 0x002D7280   size: 0x42 (66 bytes)
//======================================================================
int __fastcall ActorPunchOperate::begin(int a1)
{
  BlockOperate::begin();
  CameraModel::playHandAnim(*(CameraModel **)(g_pPlayerCtrl + 324), 101105);
  ActorLiving::attackActor((ActorLiving *)g_pPlayerCtrl, *(ClientActor **)(*(_DWORD *)(a1 + 8) + 36), 2);
  PlayerAttrib::useStamina();
  PlayerControl::addCurToolDuration((PlayerControl *)g_pPlayerCtrl, -1);
  return 5;
}


//======================================================================
// ActorPunchOperate::ActorPunchOperate(void)
// address: 0x002D7D90   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN17ActorPunchOperateC1Ev'
void __fastcall ActorPunchOperate::ActorPunchOperate(ActorPunchOperate *this)
{
  *(_DWORD *)this = &off_460C58;
}

