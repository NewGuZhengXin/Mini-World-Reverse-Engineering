// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AIBase

//======================================================================
// AIBase::isInterruptible(void)
// address: 0x0030189E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall AIBase::isInterruptible(AIBase *this)
{
  return 1;
}


//======================================================================
// AIBase::updateTask(void)
// address: 0x00301A48   size: 0x2 (2 bytes)
//======================================================================
void __fastcall AIBase::updateTask(AIBase *this)
{
  ;
}


//======================================================================
// AIBase::continueExecuting(void)
// address: 0x00301F14   size: 0xA (10 bytes)
//======================================================================
int __fastcall AIBase::continueExecuting(AIBase *this)
{
  return (*(int (__fastcall **)(AIBase *))(*(_DWORD *)this + 8))(this);
}


//======================================================================
// AIBase::resetTask(void)
// address: 0x0030222E   size: 0x2 (2 bytes)
//======================================================================
void __fastcall AIBase::resetTask(AIBase *this)
{
  ;
}


//======================================================================
// AIBase::startExecuting(void)
// address: 0x0030327A   size: 0x2 (2 bytes)
//======================================================================
void __fastcall AIBase::startExecuting(AIBase *this)
{
  ;
}


//======================================================================
// AIBase::~AIBase()
// address: 0x0030327C   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN6AIBaseD1Ev'
void __fastcall AIBase::~AIBase(AIBase *this)
{
  _DWORD *v1; // r0

  *(_DWORD *)this = &off_4631F0;
  v1 = *((_DWORD **)this + 1);
  if ( v1 != nullptr )
    ClientActor::release(v1);
}


//======================================================================
// AIBase::~AIBase()
// address: 0x0030329C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AIBase::~AIBase(AIBase *this)
{
  AIBase::~AIBase(this);
  operator delete(this);
}


//======================================================================
// AIBase::setTarget(ClientActor *)
// address: 0x003032AE   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall AIBase::setTarget(AIBase *this, ClientActor *a2)
{
  _DWORD *result; // r0

  result = *((_DWORD **)this + 1);
  if ( result != nullptr )
  {
    result = ClientActor::release(result);
    *((_DWORD *)this + 1) = 0;
  }
  if ( a2 != nullptr )
  {
    result = (_DWORD *)ClientActor::addRef((int)a2);
    *((_DWORD *)this + 1) = a2;
  }
  return result;
}

