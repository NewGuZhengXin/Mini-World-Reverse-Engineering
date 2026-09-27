// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ActorIntention

//======================================================================
// ActorIntention::ActorIntention(ClientActor *)
// address: 0x002A5A5C   size: 0xA (10 bytes)
//======================================================================
// Alternative name is '_ZN14ActorIntentionC1EP11ClientActor'
void __fastcall ActorIntention::ActorIntention(ActorIntention *this, ClientActor *a2)
{
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
}


//======================================================================
// ActorIntention::~ActorIntention()
// address: 0x002A5A66   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN14ActorIntentionD1Ev'
void __fastcall ActorIntention::~ActorIntention(ActorIntention *this)
{
  void *v1; // r4

  v1 = *((void **)this + 1);
  if ( v1 != nullptr )
  {
    ActorBehavior::~ActorBehavior(*((ActorBehavior **)this + 1));
    operator delete(v1);
  }
}


//======================================================================
// ActorIntention::setBehavior(ACTOR_BEHAVIOR)
// address: 0x002A5A80   size: 0x1FC (508 bytes)
//======================================================================
ActorBehavior *__fastcall ActorIntention::setBehavior(ClientActor **a1, int a2)
{
  ActorBehavior *v4; // r5
  ActorBehavior *result; // r0
  _DWORD **v6; // r0
  _DWORD **v7; // r5
  ActorBehavior *v8; // r6
  MobPassiveAction *v9; // r5
  ActorBehavior *v10; // r6
  ActorAction *v11; // r5
  ActorBehavior *v12; // r6
  MobRootAction *v13; // r5
  ActorBehavior *v14; // r6
  MobPassiveAction *v15; // r5
  ActorBehavior *v16; // r6
  MobIdleAction *v17; // r5
  ActorBehavior *v18; // r6
  ActorAction *v19; // r5
  ActorBehavior *v20; // r6
  MobPathMoveAction *v21; // r5
  ActorBehavior *v22; // r6
  ActorAction *v23; // r5
  ActorBehavior *v24; // r6
  ActorAction *v25; // r5
  ActorBehavior *v26; // r6
  ActorAction *v27; // r5
  ActorBehavior *v28; // r6
  ActorAction *v29; // r5
  char s[256]; // [sp+14h] [bp-108h] BYREF

  v4 = (ActorBehavior *)operator new(0x24u);
  result = ActorBehavior::ActorBehavior(v4);
  a1[1] = v4;
  if ( a2 == 0 )
  {
    if ( *a1 != nullptr
      && (v6 = (_DWORD **)_dynamic_cast(
                            *a1,
                            (const struct __class_type_info *)&`typeinfo for'ClientActor,
                            (const struct __class_type_info *)&`typeinfo for'ClientMob,
                            0),
          v7 = v6,
          v6 != nullptr)
      && (j_snprintf(s, 0x100u, "F%d_SetAi", *v6[48]),
          Ogre::ScriptVM::callFunction(
            *(Ogre::ScriptVM **)(Ogre::Singleton<ClientManager>::ms_Singleton + 24),
            s,
            "u[ClientMob]",
            v7,
            &`typeinfo for'ClientActor) != 0) )
    {
      v8 = a1[1];
      v9 = (MobPassiveAction *)operator new(0x18u);
      MobPassiveAction::MobPassiveAction(v9, *a1);
      ActorBehavior::addAction(v8, v9);
      v10 = a1[1];
      v11 = (ActorAction *)operator new(0x18u);
      ActorAction::ActorAction(v11, *a1);
      *(_DWORD *)v11 = &off_45FD78;
      return (ActorBehavior *)ActorBehavior::addAction(v10, v11);
    }
    else
    {
      v12 = a1[1];
      v13 = (MobRootAction *)operator new(0x10u);
      MobRootAction::MobRootAction(v13, *a1);
      ActorBehavior::addAction(v12, v13);
      v14 = a1[1];
      v15 = (MobPassiveAction *)operator new(0x18u);
      MobPassiveAction::MobPassiveAction(v15, *a1);
      ActorBehavior::addAction(v14, v15);
      v16 = a1[1];
      v17 = (MobIdleAction *)operator new(0x10u);
      MobIdleAction::MobIdleAction(v17, *a1);
      ActorBehavior::addAction(v16, v17);
      v18 = a1[1];
      v19 = (ActorAction *)operator new(0x18u);
      ActorAction::ActorAction(v19, *a1);
      *(_DWORD *)v19 = &off_45FCE8;
      ActorBehavior::addAction(v18, v19);
      v20 = a1[1];
      v21 = (MobPathMoveAction *)operator new(0x18u);
      MobPathMoveAction::MobPathMoveAction(v21, *a1);
      ActorBehavior::addAction(v20, v21);
      v22 = a1[1];
      v23 = (ActorAction *)operator new(0x10u);
      ActorAction::ActorAction(v23, *a1);
      *(_DWORD *)v23 = &off_45FD48;
      ActorBehavior::addAction(v22, v23);
      v24 = a1[1];
      v25 = (ActorAction *)operator new(0x18u);
      ActorAction::ActorAction(v25, *a1);
      *(_DWORD *)v25 = &off_45FD78;
      ActorBehavior::addAction(v24, v25);
      v26 = a1[1];
      v27 = (ActorAction *)operator new(0x28u);
      ActorAction::ActorAction(v27, *a1);
      *(_DWORD *)v27 = &off_45FDA8;
      ActorBehavior::addAction(v26, v27);
      v28 = a1[1];
      v29 = (ActorAction *)operator new(0x14u);
      ActorAction::ActorAction(v29, *a1);
      *(_DWORD *)v29 = &off_45FDD8;
      ActorBehavior::addAction(v28, v29);
      return (ActorBehavior *)ActorBehavior::start(a1[1], "MobRoot");
    }
  }
  return result;
}


//======================================================================
// ActorIntention::tick(void)
// address: 0x002A5CB0   size: 0xE (14 bytes)
//======================================================================
ActorBehavior *__fastcall ActorIntention::tick(ActorIntention *this)
{
  ActorBehavior *result; // r0

  result = *((ActorBehavior **)this + 1);
  if ( result != nullptr )
    return (ActorBehavior *)ActorBehavior::tick(result);
  return result;
}


//======================================================================
// ActorIntention::onEvent(ActorEvent const&)
// address: 0x002A5CBE   size: 0xE (14 bytes)
//======================================================================
int __fastcall ActorIntention::onEvent(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  if ( result != 0 )
    return ActorBehavior::onEvent();
  return result;
}


//======================================================================
// ActorIntention::haveRunningBehavior(void)
// address: 0x002A5CCC   size: 0x10 (16 bytes)
//======================================================================
bool __fastcall ActorIntention::haveRunningBehavior(ActorIntention *this)
{
  return (*(_DWORD *)(*((_DWORD *)this + 1) + 28) - *(_DWORD *)(*((_DWORD *)this + 1) + 24)) >> 2 != 0;
}

