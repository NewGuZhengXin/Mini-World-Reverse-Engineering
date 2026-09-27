// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ActorBehavior

//======================================================================
// ActorBehavior::ActorBehavior(void)
// address: 0x002D3924   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN13ActorBehaviorC2Ev'
void __fastcall ActorBehavior::ActorBehavior(ActorBehavior *this)
{
  char *v1; // r5

  v1 = (char *)this + 4;
  j_memset((char *)this + 4, 0, 0x10u);
  *((_DWORD *)this + 3) = v1;
  *((_DWORD *)this + 4) = v1;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
}


//======================================================================
// ActorBehavior::onEvent(ActorEvent const&)
// address: 0x002D3946   size: 0x30 (48 bytes)
//======================================================================
int __fastcall ActorBehavior::onEvent(int a1, int a2)
{
  int v4; // r4
  int v5; // r5
  int v6; // r0
  int result; // r0

  v4 = ((*(_DWORD *)(a1 + 28) - *(_DWORD *)(a1 + 24)) >> 2) - 1;
  v5 = 4 * v4;
  while ( v4 >= 0 )
  {
    v6 = *(_DWORD *)(*(_DWORD *)(a1 + 24) + v5);
    v5 -= 4;
    result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v6 + 32))(v6, a2);
    if ( result > 0 )
      return result;
    --v4;
  }
  return 0;
}


//======================================================================
// ActorBehavior::getRunActionByName(char const*)
// address: 0x002D3976   size: 0x34 (52 bytes)
//======================================================================
int __fastcall ActorBehavior::getRunActionByName(ActorBehavior *this, const char *a2)
{
  unsigned int i; // r4
  int v5; // r3
  const char *v6; // r0

  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)this + 6);
    if ( i >= (*((_DWORD *)this + 7) - v5) >> 2 )
      return 0;
    v6 = (const char *)(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(4 * i + v5) + 8))(*(_DWORD *)(4 * i + v5));
    if ( j_strcmp(v6, a2) == 0 )
      break;
  }
  return 1;
}


//======================================================================
// ActorBehavior::getRunAction(char const*)
// address: 0x002D39AA   size: 0x36 (54 bytes)
//======================================================================
int __fastcall ActorBehavior::getRunAction(ActorBehavior *this, const char *a2)
{
  unsigned int i; // r4
  int v5; // r3
  const char *v6; // r0

  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)this + 6);
    if ( i >= (*((_DWORD *)this + 7) - v5) >> 2 )
      break;
    v6 = (const char *)(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v5 + 4 * i) + 8))(*(_DWORD *)(v5 + 4 * i));
    if ( j_strcmp(v6, a2) == 0 )
      return *(_DWORD *)(*((_DWORD *)this + 6) + 4 * i);
  }
  return 0;
}


//======================================================================
// ActorBehavior::~ActorBehavior()
// address: 0x002D3A08   size: 0x38 (56 bytes)
//======================================================================
// Alternative name is '_ZN13ActorBehaviorD2Ev'
void __fastcall ActorBehavior::~ActorBehavior(ActorBehavior *this)
{
  _DWORD *i; // r5
  int v3; // r0
  void *v4; // r0

  for ( i = *((_DWORD **)this + 3); i != (_DWORD *)((char *)this + 4); i = (_DWORD *)sub_391DDC(i) )
  {
    v3 = i[5];
    if ( v3 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  }
  v4 = *((void **)this + 6);
  if ( v4 != nullptr )
    operator delete(v4);
  std::_Rb_tree<std::string,std::pair<std::string const,ActorAction *>,std::_Select1st<std::pair<std::string const,ActorAction *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ActorAction *>>>::_M_erase(
    (int)this,
    *((_DWORD **)this + 2));
}


//======================================================================
// ActorBehavior::getActionByName(char const*)
// address: 0x002D3A70   size: 0x52 (82 bytes)
//======================================================================
char *__fastcall ActorBehavior::getActionByName(ActorBehavior *this, char *a2, int a3)
{
  char *v4; // r7
  char *v5; // r4
  char *v6; // r5
  char *v7; // r3
  _DWORD v9[2]; // [sp+4h] [bp-8h] BYREF

  v9[0] = a2;
  v9[1] = a3;
  sub_3BF0BC((int)v9, a2);
  v4 = (char *)this + 4;
  v5 = *((char **)v4 + 1);
  v6 = v4;
  while ( v5 != nullptr )
  {
    if ( std::operator<<char>() != 0 )
    {
      v7 = *((char **)v5 + 3);
      v5 = v6;
    }
    else
    {
      v7 = *((char **)v5 + 2);
    }
    v6 = v5;
    v5 = v7;
  }
  if ( v6 != v4 && std::operator<<char>() == 0 )
    v5 = *((char **)v6 + 5);
  sub_3BDF80(v9);
  return v5;
}


//======================================================================
// ActorBehavior::addAction(ActorAction *)
// address: 0x002D3C78   size: 0x86 (134 bytes)
//======================================================================
int __fastcall ActorBehavior::addAction(ActorBehavior *this, ActorAction *a2)
{
  char *v3; // r0
  _DWORD *v4; // r4
  _DWORD *v5; // r7
  _DWORD *v6; // r3
  _DWORD *v7; // r4
  char v10[4]; // [sp+20h] [bp-Ch] BYREF
  char *v11; // [sp+24h] [bp-8h] BYREF

  v3 = (char *)(*(int (__fastcall **)(ActorAction *))(*(_DWORD *)a2 + 8))(a2);
  sub_3BF0BC((int)v10, v3);
  *((_DWORD *)a2 + 2) = this;
  v4 = *((_DWORD **)this + 2);
  v5 = (_DWORD *)((char *)this + 4);
  while ( v4 != nullptr )
  {
    if ( std::operator<<char>() != 0 )
    {
      v6 = (_DWORD *)v4[3];
      v4 = v5;
    }
    else
    {
      v6 = (_DWORD *)v4[2];
    }
    v5 = v4;
    v4 = v6;
  }
  v7 = v5;
  if ( v5 == (_DWORD *)((char *)this + 4) || std::operator<<char>() != 0 )
  {
    v11 = v10;
    v7 = std::_Rb_tree<std::string,std::pair<std::string const,ActorAction *>,std::_Select1st<std::pair<std::string const,ActorAction *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ActorAction *>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(
           this,
           v5,
           (int)&unk_4468DC,
           &v11);
  }
  v7[5] = a2;
  return sub_3BDF80(v10);
}


//======================================================================
// ActorBehavior::quitToIndex(int)
// address: 0x002D3DB4   size: 0x4C (76 bytes)
//======================================================================
void __fastcall ActorBehavior::quitToIndex(ActorBehavior *this, int a2)
{
  int v4; // r6
  int v5; // r5
  int i; // r6
  int v7; // r2
  unsigned int v8; // r1
  unsigned int v9; // r3

  v4 = (*((_DWORD *)this + 7) - *((_DWORD *)this + 6)) >> 2;
  v5 = v4 - 1;
  for ( i = 4 * v4;
        ;
        (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)this + 6) + i) + 16))(*(_DWORD *)(*((_DWORD *)this + 6) + i)) )
  {
    i -= 4;
    if ( v5 <= a2 )
      break;
    --v5;
  }
  v7 = *((_DWORD *)this + 6);
  v8 = a2 + 1;
  v9 = (*((_DWORD *)this + 7) - v7) >> 2;
  if ( a2 + 1 <= v9 )
  {
    if ( v8 < v9 )
      *((_DWORD *)this + 7) = v7 + 4 * v8;
  }
  else
  {
    std::vector<ActorAction *>::_M_default_append((void **)this + 6, v8 - v9);
  }
}


//======================================================================
// ActorBehavior::handleTransition(ActorTransition const&,int)
// address: 0x002D3E7C   size: 0x82 (130 bytes)
//======================================================================
void __fastcall ActorBehavior::handleTransition(void **this, int *a2, int a3)
{
  int v5; // r5
  char *v6; // r7
  int v7; // r2
  int v8; // r0
  char *ActionByName; // [sp+0h] [bp-14h] BYREF
  _DWORD v10[4]; // [sp+4h] [bp-10h] BYREF

  v5 = *a2;
  v6 = (char *)a2[1];
  while ( v5 != 0 )
  {
    switch ( v5 )
    {
      case 1:
        ActorBehavior::quitToIndex((ActorBehavior *)this, a3 - 1);
LABEL_7:
        ActionByName = ActorBehavior::getActionByName((ActorBehavior *)this, v6, v7);
        std::vector<ActorAction *>::push_back(this + 6, &ActionByName);
        (*(void (__fastcall **)(_DWORD *))(*(_DWORD *)ActionByName + 12))(v10);
        goto LABEL_11;
      case 2:
        ActorBehavior::quitToIndex((ActorBehavior *)this, a3);
        v8 = *((_DWORD *)*(this + 6) + a3);
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 20))(v8);
        goto LABEL_7;
      case 3:
        ActorBehavior::quitToIndex((ActorBehavior *)this, a3 - 1);
        if ( a3 <= 0 )
          break;
        (*(void (__fastcall **)(_DWORD *))(**((_DWORD **)*(this + 7) - 1) + 24))(v10);
LABEL_11:
        v5 = v10[0];
        v6 = (char *)v10[1];
        break;
      default:
        break;
    }
    a3 = (((_BYTE *)*(this + 7) - (_BYTE *)*(this + 6)) >> 2) - 1;
    if ( a3 < 0 )
      return;
  }
}


//======================================================================
// ActorBehavior::tick(void)
// address: 0x002D3F00   size: 0x3A (58 bytes)
//======================================================================
void __fastcall ActorBehavior::tick(ActorBehavior *this)
{
  int v2; // r6
  int v3; // r4
  int v4; // r6
  int v5[4]; // [sp+4h] [bp-10h] BYREF

  v2 = (*((_DWORD *)this + 7) - *((_DWORD *)this + 6)) >> 2;
  v3 = v2 - 1;
  v4 = 4 * v2;
  while ( 1 )
  {
    v4 -= 4;
    if ( v3 < 0 )
      break;
    (*(void (__fastcall **)(int *))(**(_DWORD **)(*((_DWORD *)this + 6) + v4) + 28))(v5);
    ActorBehavior::handleTransition((void **)this, v5, v3--);
  }
}


//======================================================================
// ActorBehavior::start(char const*)
// address: 0x002D3F40   size: 0x34 (52 bytes)
//======================================================================
void __fastcall ActorBehavior::start(void **this, char *a2, int a3)
{
  char *ActionByName; // [sp+0h] [bp-14h] BYREF
  int v5[4]; // [sp+4h] [bp-10h] BYREF

  ActionByName = ActorBehavior::getActionByName((ActorBehavior *)this, a2, a3);
  if ( ActionByName != nullptr )
  {
    std::vector<ActorAction *>::push_back(this + 6, &ActionByName);
    (*(void (__fastcall **)(int *))(*(_DWORD *)ActionByName + 12))(v5);
    ActorBehavior::handleTransition(this, v5, 0);
  }
}

