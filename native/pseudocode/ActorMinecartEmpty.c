// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ActorMinecartEmpty

//======================================================================
// ActorMinecartEmpty::~ActorMinecartEmpty()
// address: 0x002DFB00   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN18ActorMinecartEmptyD1Ev'
void __fastcall ActorMinecartEmpty::~ActorMinecartEmpty(ActorMinecartEmpty *this)
{
  *(_DWORD *)this = &off_461310;
  ActorMinecart::~ActorMinecart(this);
}


//======================================================================
// ActorMinecartEmpty::~ActorMinecartEmpty()
// address: 0x002DFB1C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ActorMinecartEmpty::~ActorMinecartEmpty(ActorMinecartEmpty *this)
{
  ActorMinecartEmpty::~ActorMinecartEmpty(this);
  operator delete(this);
}


//======================================================================
// ActorMinecartEmpty::interact(ClientPlayer *)
// address: 0x002DFB30   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall ActorMinecartEmpty::interact(ActorMinecartEmpty *this, ClientPlayer *a2)
{
  ClientPlayer *v2; // r5
  _BOOL4 result; // r0

  v2 = *((ClientPlayer **)this + 21);
  if ( v2 == nullptr
    || (result = _dynamic_cast(
                   *((const void **)this + 21),
                   (const struct __class_type_info *)&`typeinfo for'ClientActor,
                   (const struct __class_type_info *)&`typeinfo for'ClientPlayer,
                   0) != nullptr,
        v2 == a2) )
  {
    (*(void (__fastcall **)(ClientPlayer *, ActorMinecartEmpty *))(*(_DWORD *)a2 + 148))(a2, this);
    return true;
  }
  return result;
}


//======================================================================
// ActorMinecartEmpty::load(void const*)
// address: 0x002DFB74   size: 0x42 (66 bytes)
//======================================================================
int __fastcall ActorMinecartEmpty::load(ActorMinecartEmpty *this, char *a2)
{
  char *v4; // r3
  int v5; // r3
  char *v6; // r1
  flatbuffers::Table *v7; // r1
  char *v8; // r2
  int v9; // r3
  int v10; // r2

  v4 = &a2[-*(_DWORD *)a2];
  if ( *(unsigned __int16 *)v4 > 4u && (v5 = *((unsigned __int16 *)v4 + 2), v6 = &a2[v5], v5 != 0) )
    v7 = (flatbuffers::Table *)&v6[*(_DWORD *)v6];
  else
    v7 = nullptr;
  ClientActor::loadActorCommon((int)this, v7);
  v8 = &a2[-*(_DWORD *)a2];
  v9 = 0;
  if ( *(unsigned __int16 *)v8 > 6u )
  {
    v10 = *((unsigned __int16 *)v8 + 3);
    if ( v10 != 0 )
      v9 = *(_DWORD *)&a2[v10];
  }
  *((_DWORD *)this + 43) = v9;
  return 1;
}


//======================================================================
// ActorMinecartEmpty::ActorMinecartEmpty(int)
// address: 0x002DFBB8   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN18ActorMinecartEmptyC2Ei'
void __fastcall ActorMinecartEmpty::ActorMinecartEmpty(ActorMinecartEmpty *this, int a2)
{
  ActorMinecart::ActorMinecart(this, a2);
  *(_DWORD *)this = &off_461310;
}


//======================================================================
// ActorMinecartEmpty::save(flatbuffers::FlatBufferBuilder &)
// address: 0x002DFC32   size: 0x22 (34 bytes)
//======================================================================
int __fastcall ActorMinecartEmpty::save(ActorMinecartEmpty *this, flatbuffers::FlatBufferBuilder *a2)
{
  int v4; // r0
  int ActorMinecartEmpty; // r0

  v4 = ClientActor::saveActorCommon(this, a2);
  ActorMinecartEmpty = FBSave::CreateActorMinecartEmpty(a2, v4, *((_DWORD *)this + 43));
  return FBSave::CreateSectionActor(a2, 8u, ActorMinecartEmpty);
}

