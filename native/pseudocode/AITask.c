// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AITask

//======================================================================
// AITask::AITask(void)
// address: 0x00303F06   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN6AITaskC2Ev'
void __fastcall AITask::AITask(AITask *this)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 3;
}


//======================================================================
// AITask::~AITask()
// address: 0x00303F22   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN6AITaskD2Ev'
void __fastcall AITask::~AITask(AITask *this)
{
  _DWORD *i; // r5

  for ( i = *(_DWORD **)this; i != *((_DWORD **)this + 1); i += 2 )
  {
    if ( *i != 0 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*i + 4))(*i);
  }
  sub_303EE0(*((void **)this + 6));
  sub_303EE0(*((void **)this + 3));
  sub_303EE0(*(void **)this);
}


//======================================================================
// AITask::canContinue(AITaskEntry &)
// address: 0x00303F54   size: 0xC (12 bytes)
//======================================================================
int __fastcall AITask::canContinue(int a1, _DWORD *a2)
{
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*a2 + 12))(*a2);
}


//======================================================================
// AITask::areTasksCompatible(AIBase *,AIBase *)
// address: 0x00303F60   size: 0xC (12 bytes)
//======================================================================
bool __fastcall AITask::areTasksCompatible(AITask *this, AIBase *a2, AIBase *a3)
{
  return (*((_DWORD *)a3 + 2) & *((_DWORD *)a2 + 2)) == 0;
}


//======================================================================
// AITask::clearAllRunningTasks(void)
// address: 0x00303FA0   size: 0x24 (36 bytes)
//======================================================================
int __fastcall AITask::clearAllRunningTasks(int this)
{
  _DWORD *v1; // r4
  int v2; // r5

  v1 = *(_DWORD **)(this + 12);
  v2 = this;
  while ( v1 != *(_DWORD **)(v2 + 16) )
  {
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v1 + 24))(*v1);
    this = std::vector<AITaskEntry>::erase(v2 + 12, (int)v1);
    v1 = (_DWORD *)this;
  }
  return this;
}


//======================================================================
// AITask::addTask(int,AIBase *)
// address: 0x00304074   size: 0x10 (16 bytes)
//======================================================================
__int64 __fastcall AITask::addTask(AITask *this, int a2, AIBase *a3)
{
  __int64 v4; // [sp+0h] [bp-Ch] BYREF
  AIBase *v5; // [sp+8h] [bp-4h]

  HIDWORD(v4) = a2;
  v5 = a3;
  BYTE4(v4) = a2;
  LODWORD(v4) = a3;
  std::vector<AITaskEntry>::push_back((int *)this, &v4);
  return v4;
}


//======================================================================
// AITask::canUse(AITaskEntry &)
// address: 0x00304128   size: 0x5A (90 bytes)
//======================================================================
int __fastcall AITask::canUse(int a1, int a2)
{
  _DWORD *i; // r4
  int v5; // r6
  int *v6; // r0
  int *v7; // r3
  int v8; // r0

  for ( i = *(_DWORD **)a1; i != *(_DWORD **)(a1 + 4); i += 2 )
  {
    v5 = AITaskEntry::operator==((int *)a2, (int)i);
    if ( v5 != 0 )
      continue;
    v6 = std::__find<__gnu_cxx::__normal_iterator<AITaskEntry *,std::vector<AITaskEntry>>,AITaskEntry>(
           *(int **)(a1 + 12),
           *(_DWORD *)(a1 + 16),
           (int)i);
    v7 = *(int **)(a1 + 16);
    if ( *(unsigned __int8 *)(a2 + 4) < (unsigned int)*((unsigned __int8 *)i + 4) )
    {
      if ( v7 == v6 )
        continue;
      v8 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*i + 16))(*i);
    }
    else
    {
      if ( v7 == v6 )
        continue;
      v8 = AITask::areTasksCompatible((AITask *)a1, *(AIBase **)a2, (AIBase *)*i);
    }
    if ( v8 == 0 )
      return v5;
  }
  return 1;
}


//======================================================================
// AITask::onUpdateTasks(void)
// address: 0x00304182   size: 0xEC (236 bytes)
//======================================================================
void __fastcall AITask::onUpdateTasks(AITask *this)
{
  int v2; // r3
  int v3; // r1
  int v4; // r0
  int v5; // r7
  int *v6; // r6
  _DWORD *v7; // r5
  int *i; // r5
  int v9; // r0
  int *j; // r5
  int v11; // r0

  v2 = *((_DWORD *)this + 6);
  v3 = *((_DWORD *)this + 10);
  v4 = *((_DWORD *)this + 9) + 1;
  *((_DWORD *)this + 9) = v4;
  *((_DWORD *)this + 7) = v2;
  if ( v4 % v3 == 0 )
  {
    v5 = *(_DWORD *)this;
    while ( 1 )
    {
      while ( 1 )
      {
        v5 += 8;
        if ( v5 - 8 == *((_DWORD *)this + 1) )
          goto LABEL_13;
        v6 = std::__find<__gnu_cxx::__normal_iterator<AITaskEntry *,std::vector<AITaskEntry>>,AITaskEntry>(
               *((int **)this + 3),
               *((_DWORD *)this + 4),
               v5 - 8);
        if ( v6 != *((int **)this + 4) )
          break;
LABEL_8:
        if ( AITask::canUse((int)this, v5 - 8) != 0
          && (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v5 - 8) + 8))(*(_DWORD *)(v5 - 8)) != 0 )
        {
          std::vector<AITaskEntry>::push_back((int *)this + 3, (_DWORD *)(v5 - 8));
          std::vector<AITaskEntry>::push_back((int *)this + 6, (_DWORD *)(v5 - 8));
        }
      }
      if ( AITask::canUse((int)this, (int)v6) == 0 || AITask::canContinue((int)this, v6) == 0 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)*v6 + 24))(*v6);
        std::vector<AITaskEntry>::erase((int)this + 12, (int)v6);
        goto LABEL_8;
      }
    }
  }
  v7 = *((_DWORD **)this + 3);
  while ( v7 != *((_DWORD **)this + 4) )
  {
    if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v7 + 12))(*v7) != 0 )
    {
      v7 += 2;
    }
    else
    {
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v7 + 24))(*v7);
      v7 = (_DWORD *)std::vector<AITaskEntry>::erase((int)this + 12, (int)v7);
    }
  }
LABEL_13:
  for ( i = *((int **)this + 6); i != *((int **)this + 7); i += 2 )
  {
    v9 = *i;
    (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 20))(v9);
  }
  for ( j = *((int **)this + 3); j != *((int **)this + 4); j += 2 )
  {
    v11 = *j;
    (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 28))(v11);
  }
}


//======================================================================
// AITask::removeTask(AIBase *)
// address: 0x0030426E   size: 0x4C (76 bytes)
//======================================================================
AIBase ***__fastcall AITask::removeTask(AIBase ***this, AIBase *a2)
{
  AIBase **v2; // r4
  int v3; // r5
  int *v5; // r0
  int v6; // r6

  v2 = *this;
  v3 = (int)this;
  while ( v2 != *(AIBase ***)(v3 + 4) )
  {
    if ( *v2 == a2 )
    {
      v5 = std::__find<__gnu_cxx::__normal_iterator<AITaskEntry *,std::vector<AITaskEntry>>,AITaskEntry>(
             *(int **)(v3 + 12),
             *(_DWORD *)(v3 + 16),
             (int)v2);
      v6 = (int)v5;
      if ( v5 != *(int **)(v3 + 16) )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)*v5 + 24))(*v5);
        std::vector<AITaskEntry>::erase(v3 + 12, v6);
      }
      this = (AIBase ***)std::vector<AITaskEntry>::erase(v3, (int)v2);
      v2 = (AIBase **)this;
    }
    else
    {
      v2 += 2;
    }
  }
  return this;
}

