// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AIFleeSun

//======================================================================
// AIFleeSun::resetTask(void)
// address: 0x00302744   size: 0x2 (2 bytes)
//======================================================================
void __fastcall AIFleeSun::resetTask(AIFleeSun *this)
{
  ;
}


//======================================================================
// AIFleeSun::~AIFleeSun()
// address: 0x00302748   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN9AIFleeSunD1Ev'
void __fastcall AIFleeSun::~AIFleeSun(AIFleeSun *this)
{
  *(_DWORD *)this = &off_463070;
  AIBase::~AIBase(this);
}


//======================================================================
// AIFleeSun::~AIFleeSun()
// address: 0x00302764   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AIFleeSun::~AIFleeSun(AIFleeSun *this)
{
  AIFleeSun::~AIFleeSun(this);
  operator delete(this);
}


//======================================================================
// AIFleeSun::continueExecuting(void)
// address: 0x00302776   size: 0x16 (22 bytes)
//======================================================================
int __fastcall AIFleeSun::continueExecuting(AIFleeSun *this)
{
  return (unsigned __int8)NavigationPath::noPath(*(NavigationPath **)(*((_DWORD *)this + 3) + 136)) ^ 1;
}


//======================================================================
// AIFleeSun::startExecuting(void)
// address: 0x0030278C   size: 0x1A (26 bytes)
//======================================================================
int __fastcall AIFleeSun::startExecuting(AIFleeSun *this)
{
  int v2; // [sp+0h] [bp-8h]

  NavigationPath::tryMoveToXYZ(
    *(ClientActor ***)(*((_DWORD *)this + 3) + 136),
    *((_DWORD *)this + 4),
    *((_DWORD *)this + 5),
    *((_DWORD *)this + 6),
    *((float *)this + 7));
  return v2;
}


//======================================================================
// AIFleeSun::AIFleeSun(ClientActor *,float)
// address: 0x003027A8   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN9AIFleeSunC2EP11ClientActorf'
void __fastcall AIFleeSun::AIFleeSun(AIFleeSun *this, ClientActor *lpsrc, float a3)
{
  ClientActor *v4; // r0

  *((float *)this + 7) = a3;
  v4 = lpsrc;
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = &off_463070;
  *((_DWORD *)this + 3) = lpsrc;
  *((_DWORD *)this + 2) = 1;
  if ( lpsrc != nullptr )
    v4 = (ClientActor *)_dynamic_cast(
                          lpsrc,
                          (const struct __class_type_info *)&`typeinfo for'ClientActor,
                          (const struct __class_type_info *)&`typeinfo for'ClientMob,
                          0);
  *((_DWORD *)this + 8) = v4;
}


//======================================================================
// AIFleeSun::findPossibleShelter(void)
// address: 0x003027EC   size: 0xC4 (196 bytes)
//======================================================================
bool __fastcall AIFleeSun::findPossibleShelter(AIFleeSun *this)
{
  int v2; // r7
  _BOOL4 MonsterValidPos; // r6
  World **ActorMgr; // r0
  ClientMob *v5; // r1
  _DWORD *v6; // r3
  int v8; // [sp+14h] [bp-20h]
  World **v9; // [sp+14h] [bp-20h]
  World *v10; // [sp+18h] [bp-1Ch]
  unsigned int v11; // [sp+1Ch] [bp-18h]
  _DWORD v12[4]; // [sp+24h] [bp-10h] BYREF

  v2 = 20;
  if ( *((_DWORD *)this + 8) == 0 )
    return false;
  while ( 1 )
  {
    ActorMgr = (World **)ClientActor::getActorMgr(*((ClientActor **)this + 3));
    v5 = *((ClientMob **)this + 8);
    v6 = *(_DWORD **)(*((_DWORD *)this + 3) + 68);
    v12[0] = v6[8];
    v12[1] = v6[9];
    v12[2] = v6[10];
    MonsterValidPos = ClientActorMgr::getMonsterValidPos(
                        ActorMgr,
                        v5,
                        (const WCoord *)v12,
                        10,
                        1,
                        3,
                        1,
                        (AIFleeSun *)((char *)this + 16));
    if ( MonsterValidPos )
    {
      v8 = *((_DWORD *)this + 5) / 100;
      if ( v8 < (int)World::getTopHeight(
                       *(World **)(*((_DWORD *)this + 3) + 52),
                       *((_DWORD *)this + 4) / 100,
                       *((_DWORD *)this + 6) / 100) )
      {
        v9 = *((World ***)this + 8);
        v10 = (World *)CoordDivBlock(*((_DWORD *)this + 4));
        v11 = CoordDivBlock(*((_DWORD *)this + 5));
        v12[2] = CoordDivBlock(*((_DWORD *)this + 6));
        v12[0] = v10;
        v12[1] = v11;
        if ( ClientMob::getBlockPathWeight(v9, (const WCoord *)v12, v11, (int)v10) < 0.0 )
          break;
      }
    }
    if ( --v2 == 0 )
      return false;
  }
  return MonsterValidPos;
}


//======================================================================
// AIFleeSun::shouldExecute(void)
// address: 0x003028B0   size: 0x5C (92 bytes)
//======================================================================
bool __fastcall AIFleeSun::shouldExecute(ClientActor **this)
{
  int v3; // r6
  _DWORD *v4; // r5
  int v5; // [sp+4h] [bp-8h]

  if ( *(_DWORD *)(g_WorldMgr + 56) <= 0x2EE0u
    && ClientActor::isBurning(*(this + 3)) != 0
    && (v3 = (int)*(this + 3),
        v4 = *(_DWORD **)(v3 + 68),
        (v5 = v4[9] / 100) >= (int)World::getTopHeight(*(World **)(v3 + 52), v4[8] / 100, v4[10] / 100)) )
  {
    return AIFleeSun::findPossibleShelter((AIFleeSun *)this);
  }
  else
  {
    return false;
  }
}

