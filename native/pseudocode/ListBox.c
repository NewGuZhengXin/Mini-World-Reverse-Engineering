// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ListBox

//======================================================================
// ListBox::GetTypeName(void)
// address: 0x001B7D70   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall ListBox::GetTypeName(ListBox *this)
{
  return "ListBox";
}


//======================================================================
// ListBox::Save(TiXmlElement *)
// address: 0x001B7D7C   size: 0x4 (4 bytes)
//======================================================================
int ListBox::Save()
{
  return 0;
}


//======================================================================
// ListBox::ListBox(void)
// address: 0x001B7D98   size: 0x4E (78 bytes)
//======================================================================
// Alternative name is '_ZN7ListBoxC2Ev'
void __fastcall ListBox::ListBox(ListBox *this)
{
  Frame::Frame(this);
  *(_DWORD *)this = &off_458EE8;
  *((_DWORD *)this + 103) = 0;
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 105) = &byte_55FB88;
  *((_DWORD *)this + 106) = 0;
  *((_DWORD *)this + 107) = 0;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 109) = 0;
  *((_DWORD *)this + 110) = &byte_55FB88;
}


//======================================================================
// ListBox::CopyMembers(ListBox*)
// address: 0x001B7DF0   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ListBox::CopyMembers(ListBox *this, ListBox *a2)
{
  ;
}


//======================================================================
// ListBox::CreateClone(void)
// address: 0x001B7DF2   size: 0x1E (30 bytes)
//======================================================================
ListBox *__fastcall ListBox::CreateClone(ListBox *this)
{
  ListBox *v2; // r4

  v2 = (ListBox *)operator new(0x1C0u);
  ListBox::ListBox(v2);
  ListBox::CopyMembers(this, v2);
  return v2;
}


//======================================================================
// ListBox::SetGroupHeaderHeight(int)
// address: 0x001B7E10   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ListBox::SetGroupHeaderHeight(int this, int a2)
{
  *(_DWORD *)(this + 436) = a2;
  return this;
}


//======================================================================
// ListBox::SetItemTemplate(char const*)
// address: 0x001B7E18   size: 0xC (12 bytes)
//======================================================================
int __fastcall ListBox::SetItemTemplate(ListBox *this, char *a2)
{
  return sub_3BE508((int)this + 420, a2);
}


//======================================================================
// ListBox::SetItemHeight(int)
// address: 0x001B7E24   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ListBox::SetItemHeight(int this, int a2)
{
  *(_DWORD *)(this + 416) = a2;
  return this;
}


//======================================================================
// ListBox::updatePos(void)
// address: 0x001B7E2C   size: 0x12C (300 bytes)
//======================================================================
int __fastcall ListBox::updatePos(const char **this)
{
  int result; // r0
  int v3; // r3
  int v4; // r6
  LayoutFrame *v5; // r5
  int v6; // r7
  int i; // r2
  LayoutFrame *v8; // r5
  const char *v9; // r1
  int v10; // r7
  char *v11; // r0
  char *Name; // r0
  int v13; // [sp+Ch] [bp-28h]
  unsigned int v14; // [sp+10h] [bp-24h]
  int v15; // [sp+14h] [bp-20h]
  char v16; // [sp+1Fh] [bp-15h] BYREF
  _BYTE v17[4]; // [sp+20h] [bp-14h] BYREF
  int v18; // [sp+24h] [bp-10h]
  int v19; // [sp+2Ch] [bp-8h]

  result = LayoutFrame::GetAbsRect(this, v17);
  v14 = 0;
  v13 = -(int)*(this + 103);
  while ( 1 )
  {
    v3 = (int)*(this + 106);
    if ( v14 >= -1431655765 * ((int)&(*(this + 107))[-v3] >> 3) )
      break;
    v4 = v3 + 24 * v14;
    v5 = *(LayoutFrame **)v4;
    v6 = (int)&(*(this + 109))[v13];
    if ( v6 > 0 && v13 < v19 - v18 )
    {
      LayoutFrame::Show(*(LayoutFrame **)v4);
      Name = (char *)UIObject::GetName((UIObject *)this);
      result = LayoutFrame::SetPoint((int)v5, 0, Name, 0, 0, v13);
    }
    else
    {
      result = LayoutFrame::Hide(*(LayoutFrame **)v4);
    }
    v13 = v6;
    for ( i = 0; ; i = v15 + 1 )
    {
      v15 = i;
      if ( i >= *(_DWORD *)(v4 + 4) )
        break;
      v8 = *(LayoutFrame **)(4 * i + *(_DWORD *)(v4 + 12));
      if ( *(_BYTE *)(v4 + 8) != 0
        || *((_DWORD *)(v9 = *(this + 110)) - 3) != 0
        && (v16 = 1, Ogre::ScriptVM::callFunction((Ogre::ScriptVM *)g_pUIScriptVM, v9, "ii>b", v14, i, &v16), v16 == 0) )
      {
        result = LayoutFrame::Hide(v8);
      }
      else
      {
        v10 = (int)&(*(this + 104))[v13];
        if ( v10 <= 0 || v13 >= v19 - v18 )
        {
          result = LayoutFrame::Hide(v8);
        }
        else
        {
          LayoutFrame::Show(v8);
          v11 = (char *)UIObject::GetName((UIObject *)this);
          result = LayoutFrame::SetPoint((int)v8, 0, v11, 0, 0, v13);
        }
        v13 = v10;
      }
    }
    ++v14;
  }
  return result;
}


//======================================================================
// ListBox::SetViewPos(int)
// address: 0x001B7F64   size: 0xE (14 bytes)
//======================================================================
int __fastcall ListBox::SetViewPos(ListBox *this, int a2)
{
  *((_DWORD *)this + 103) = a2;
  return ListBox::updatePos((const char **)this);
}


//======================================================================
// ListBox::GetItemFrame(int,int)
// address: 0x001B7F72   size: 0x14 (20 bytes)
//======================================================================
int __fastcall ListBox::GetItemFrame(ListBox *this, int a2, int a3)
{
  return *(_DWORD *)(4 * a3 + *(_DWORD *)(*((_DWORD *)this + 106) + 24 * a2 + 12));
}


//======================================================================
// ListBox::ToggleGroupOpen(int)
// address: 0x001B7F86   size: 0x1C (28 bytes)
//======================================================================
int __fastcall ListBox::ToggleGroupOpen(ListBox *this, int a2)
{
  *(_BYTE *)(*((_DWORD *)this + 106) + 24 * a2 + 8) ^= 1u;
  return ListBox::updatePos((const char **)this);
}


//======================================================================
// ListBox::IsGroupOpen(int)
// address: 0x001B7FA2   size: 0x14 (20 bytes)
//======================================================================
int __fastcall ListBox::IsGroupOpen(ListBox *this, int a2)
{
  return *(unsigned __int8 *)(*((_DWORD *)this + 106) + 24 * a2 + 8) ^ 1;
}


//======================================================================
// ListBox::GetTotalHeight(void)
// address: 0x001B7FB8   size: 0x96 (150 bytes)
//======================================================================
int __fastcall ListBox::GetTotalHeight(ListBox *this)
{
  unsigned int v1; // r4
  int v3; // r5
  int v4; // r3
  int v5; // r7
  int i; // [sp+Ch] [bp-10h]
  char v8[5]; // [sp+17h] [bp-5h] BYREF

  v1 = 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = *((_DWORD *)this + 106);
    if ( v1 >= -1431655765 * ((*((_DWORD *)this + 107) - v4) >> 3) )
      break;
    v5 = v4 + 24 * v1;
    v3 += *((_DWORD *)this + 109);
    if ( *(_BYTE *)(v5 + 8) == 0 )
    {
      for ( i = *(unsigned __int8 *)(v5 + 8); i < *(_DWORD *)(v5 + 4); ++i )
      {
        v8[0] = 1;
        if ( *(_DWORD *)(*((_DWORD *)this + 110) - 12) != 0 )
          Ogre::ScriptVM::callFunction((Ogre::ScriptVM *)g_pUIScriptVM, *((const char **)this + 110), "ii>b", v1, i, v8);
        if ( v8[0] != 0 )
          v3 += *((_DWORD *)this + 104);
      }
    }
    ++v1;
  }
  return v3;
}


//======================================================================
// ListBox::SetFilterFunc(char const*)
// address: 0x001B805C   size: 0xC (12 bytes)
//======================================================================
int __fastcall ListBox::SetFilterFunc(ListBox *this, char *a2)
{
  return sub_3BE508((int)this + 440, a2);
}


//======================================================================
// ListBox::~ListBox()
// address: 0x001B8068   size: 0x56 (86 bytes)
//======================================================================
// Alternative name is '_ZN7ListBoxD1Ev'
void __fastcall ListBox::~ListBox(ListBox *this)
{
  int v2; // r5
  int v3; // r6
  void *v4; // r0

  *(_DWORD *)this = &off_458EE8;
  sub_3BDF80((char *)this + 440);
  v2 = *((_DWORD *)this + 106);
  v3 = *((_DWORD *)this + 107);
  while ( v2 != v3 )
  {
    std::_Vector_base<Frame *>::~_Vector_base((void **)(v2 + 12));
    v2 += 24;
  }
  v4 = *((void **)this + 106);
  if ( v4 != nullptr )
    operator delete(v4);
  sub_3BDF80((char *)this + 420);
  Frame::~Frame(this);
}


//======================================================================
// ListBox::~ListBox()
// address: 0x001B80C4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ListBox::~ListBox(ListBox *this)
{
  ListBox::~ListBox(this);
  operator delete(this);
}


//======================================================================
// ListBox::Resize(int,int)
// address: 0x001B8114   size: 0x108 (264 bytes)
//======================================================================
void **__fastcall ListBox::Resize(ListBox *this, int a2, unsigned int a3)
{
  int v4; // r5
  int ClientID; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r7
  UIObject *Object; // r6
  int v10; // r3
  unsigned int v11; // r5
  int v12; // r6
  Frame *v13; // r0
  Frame *v16; // [sp+14h] [bp-118h] BYREF
  _DWORD *v17; // [sp+18h] [bp-114h] BYREF
  int v18; // [sp+1Ch] [bp-110h]
  int v19; // [sp+20h] [bp-10Ch]
  char s[256]; // [sp+24h] [bp-108h] BYREF

  v4 = *((_DWORD *)this + 106) + 24 * a2;
  ClientID = LayoutFrame::GetClientID(*(LayoutFrame **)v4);
  v6 = *(_DWORD *)(v4 + 16);
  v7 = *(_DWORD *)(v4 + 12);
  v17 = nullptr;
  v18 = 0;
  v19 = 0;
  v8 = ((v6 - v7) >> 2) + 1 + ClientID;
  while ( (*(_DWORD *)(v4 + 16) - *(_DWORD *)(v4 + 12)) >> 2 < a3 )
  {
    j_sprintf(s, "%s_%d", *((const char **)this + 2), v8);
    Object = FrameManager::CreateObject((FrameManager *)g_pFrameMgr, nullptr, s, *((char **)this + 105));
    v16 = Object;
    std::vector<Frame *>::push_back(v4 + 12, (int *)&v16);
    Frame::AddChildFrame(this, v16);
    v10 = *((_DWORD *)Object + 10) - 1;
    *((_DWORD *)Object + 10) = v10;
    if ( v10 == 0 )
      (*(void (__fastcall **)(UIObject *))(*(_DWORD *)Object + 12))(Object);
    std::vector<Frame *>::push_back((unsigned int)&v17, (int *)&v16);
    ++v8;
  }
  *(_DWORD *)(v4 + 4) = a3;
  v11 = 0;
  (*(void (__fastcall **)(ListBox *))(*(_DWORD *)this + 20))(this);
  while ( v11 < (v18 - (int)v17) >> 2 )
  {
    v12 = v11;
    v13 = (Frame *)v17[v11++];
    Frame::RegisterToFrameMgr(v13, (FrameManager *)g_pFrameMgr);
    FrameManager::CreateLuaTable((FrameManager *)g_pFrameMgr, (Frame *)v17[v12]);
    Frame::InitFrameStrata((Frame *)v17[v12]);
  }
  ListBox::updatePos((const char **)this);
  return std::_Vector_base<Frame *>::~_Vector_base((void **)&v17);
}


//======================================================================
// ListBox::AddGroup(Frame *)
// address: 0x001B83DC   size: 0x54 (84 bytes)
//======================================================================
void **__fastcall ListBox::AddGroup(ListBox *this, Frame *a2)
{
  char *v2; // r4
  int v4; // r1
  _DWORD v7[2]; // [sp+0h] [bp-18h] BYREF
  char v8; // [sp+8h] [bp-10h]
  void *v9[3]; // [sp+Ch] [bp-Ch] BYREF

  memset(v9, 0, sizeof(v9));
  v7[1] = 0;
  v8 = 0;
  v2 = (char *)this + 424;
  v7[0] = a2;
  v4 = *((_DWORD *)this + 107);
  if ( v4 == *((_DWORD *)this + 108) )
  {
    std::vector<ListBox::ListGroup>::_M_insert_aux((int)this + 424, v4, (int)v7);
  }
  else
  {
    if ( v4 != 0 )
      ListBox::ListGroup::ListGroup(*((_DWORD *)this + 107), (int)v7);
    *((_DWORD *)v2 + 1) += 24;
  }
  Frame::AddChildFrame(this, a2);
  return std::_Vector_base<Frame *>::~_Vector_base(v9);
}


//======================================================================
// ListBox::OnInputMessage(Ogre::InputEvent const&)
// address: 0x001B8430   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ListBox::OnInputMessage(ListBox *this, const InputEvent *a2)
{
  return Frame::OnInputMessage(this, a2);
}

