// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AIRestrictSun

//======================================================================
// AIRestrictSun::shouldExecute(void)
// address: 0x00302FE4   size: 0x14 (20 bytes)
//======================================================================
bool __fastcall AIRestrictSun::shouldExecute(AIRestrictSun *this)
{
  return *(_DWORD *)(g_WorldMgr + 56) <= 0x2EE0u;
}


//======================================================================
// AIRestrictSun::startExecuting(void)
// address: 0x00303000   size: 0xA (10 bytes)
//======================================================================
int __fastcall AIRestrictSun::startExecuting(int this)
{
  *(_BYTE *)(*(_DWORD *)(this + 12) + 123) = 1;
  return this;
}


//======================================================================
// AIRestrictSun::resetTask(void)
// address: 0x0030300A   size: 0xA (10 bytes)
//======================================================================
int __fastcall AIRestrictSun::resetTask(int this)
{
  *(_BYTE *)(*(_DWORD *)(this + 12) + 123) = 0;
  return this;
}


//======================================================================
// AIRestrictSun::~AIRestrictSun()
// address: 0x00303014   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN13AIRestrictSunD1Ev'
void __fastcall AIRestrictSun::~AIRestrictSun(AIRestrictSun *this)
{
  *(_DWORD *)this = &off_463188;
  AIBase::~AIBase(this);
}


//======================================================================
// AIRestrictSun::~AIRestrictSun()
// address: 0x00303030   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AIRestrictSun::~AIRestrictSun(AIRestrictSun *this)
{
  AIRestrictSun::~AIRestrictSun(this);
  operator delete(this);
}


//======================================================================
// AIRestrictSun::AIRestrictSun(ClientActor *)
// address: 0x00303044   size: 0x14 (20 bytes)
//======================================================================
// Alternative name is '_ZN13AIRestrictSunC2EP11ClientActor'
void __fastcall AIRestrictSun::AIRestrictSun(AIRestrictSun *this, ClientActor *a2)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = a2;
  *(_DWORD *)this = &off_463188;
}

