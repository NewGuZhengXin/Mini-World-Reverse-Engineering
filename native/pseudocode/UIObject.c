// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: UIObject

//======================================================================
// UIObject::release(void)
// address: 0x001A0E38   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall UIObject::release(_DWORD *this)
{
  int v1; // r3

  v1 = *(this + 10) - 1;
  *(this + 10) = v1;
  if ( v1 == 0 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*this + 12))(this);
  return this;
}


//======================================================================
// UIObject::GetTypeName(void)
// address: 0x001A7ABC   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall UIObject::GetTypeName(UIObject *this)
{
  return "UIObject";
}


//======================================================================
// UIObject::GetName(void)
// address: 0x001A7AD8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall UIObject::GetName(UIObject *this)
{
  return *((_DWORD *)this + 2);
}


//======================================================================
// UIObject::SetName(char const*)
// address: 0x001A7ADC   size: 0xE (14 bytes)
//======================================================================
int __fastcall UIObject::SetName(int this, char *a2)
{
  if ( a2 != nullptr )
    return sub_3BE508(this + 8, a2);
  return this;
}


//======================================================================
// UIObject::AssignHUIRes(void *)
// address: 0x001A7AEC   size: 0x16 (22 bytes)
//======================================================================
void *__fastcall UIObject::AssignHUIRes(UIObject *this, void *a2)
{
  (*(void (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 88))(g_pDisplay);
  return a2;
}


//======================================================================
// UIObject::CallScript(char const*,char const*,...)
// address: 0x001A7B08   size: 0xC8 (200 bytes)
//======================================================================
int UIObject::CallScript(UIObject *this, char *a2, const char *a3, ...)
{
  int v3; // r4
  double v4; // r0
  int i; // r6
  int v6; // r5
  int v7; // kr00_4
  double v8; // r2
  double *v9; // r3
  char *v10; // kr04_4
  double *v14; // [sp+Ch] [bp-8h]
  va_list varg_r3; // [sp+2Ch] [bp+18h] BYREF

  va_start(varg_r3, a3);
  v3 = *(_DWORD *)g_pUIScriptVM;
  lua_getfield(*(_DWORD *)g_pUIScriptVM, -10002, "this");
  lua_getfield(v3, -10002, *((_DWORD *)this + 2));
  lua_setfield(v3, -10002, "this");
  va_copy(v14, varg_r3);
  for ( i = 0; ; lua_setfield(v3, -10002, off_451DC0[i + 19]) )
  {
    v6 = (unsigned __int8)a3[i];
    if ( a3[i] == 0 )
      break;
    switch ( v6 )
    {
      case 'i':
        v7 = va_arg(v14, _DWORD);
        v4 = (double)v7;
        v8 = (double)v7;
LABEL_7:
        lua_pushnumber(v3, HIDWORD(v4), LODWORD(v8), HIDWORD(v8));
        break;
      case 'f':
        v9 = (double *)(((unsigned int)v14 + 7) & 0xFFFFFFF8);
        v14 = v9 + 1;
        v8 = *v9;
        goto LABEL_7;
      case 's':
        v10 = va_arg(v14, char *);
        lua_pushstring(v3, v10);
        break;
      default:
        break;
    }
    ++i;
  }
  Ogre::ScriptVM::callString((Ogre::ScriptVM *)g_pUIScriptVM, a2, (unsigned __int8)a3[i]);
  lua_setfield(v3, -10002, "this");
  return v6;
}


//======================================================================
// UIObject::ReLoadLuaFile(char const*)
// address: 0x001A7BE4   size: 0x94 (148 bytes)
//======================================================================
int __fastcall UIObject::ReLoadLuaFile(UIObject *this, const char *a2)
{
  unsigned int i; // r6
  int v3; // r5
  const char *v4; // r2
  _BYTE v6[4]; // [sp+10h] [bp-Ch] BYREF
  Ogre *v7[2]; // [sp+14h] [bp-8h] BYREF

  if ( a2 == nullptr )
    return 0;
  for ( i = 0; i < (*(_DWORD *)(g_pFrameMgr + 176) - *(_DWORD *)(g_pFrameMgr + 172)) >> 2; ++i )
  {
    sub_3BEB1C(v6, *(_DWORD *)(g_pFrameMgr + 172) + 4 * i);
    v3 = Ogre::ScriptVM::callFile((Ogre::ScriptVM *)g_pUIScriptVM, *(char **)(*(_DWORD *)(g_pFrameMgr + 172) + 4 * i));
    if ( v3 == 0 )
    {
      sub_3BF0BC((int)v7, "\tReload lua file error!\n\nFileName:");
      sub_3BE7F0(v7, *(_DWORD *)(g_pFrameMgr + 172) + 4 * i);
      Ogre::PopMessageBox(v7[0], "Error", v4);
      sub_3BDF80(v7);
      sub_3BDF80(v6);
      return v3;
    }
    sub_3BDF80(v6);
  }
  return 1;
}


//======================================================================
// UIObject::hasScriptsEvent(int)
// address: 0x001A7C88   size: 0x34 (52 bytes)
//======================================================================
bool __fastcall UIObject::hasScriptsEvent(UIObject *this, int a2)
{
  char *v2; // r0
  char *v3; // r3
  char *v4; // r2
  char *v5; // r4

  v2 = (char *)this + 20;
  v3 = *((char **)v2 + 1);
  v4 = v2;
  while ( v3 != nullptr )
  {
    if ( *((_DWORD *)v3 + 4) < a2 )
    {
      v5 = *((char **)v3 + 3);
      v3 = v4;
    }
    else
    {
      v5 = *((char **)v3 + 2);
    }
    v4 = v3;
    v3 = v5;
  }
  if ( v4 != v2 && a2 < *((_DWORD *)v4 + 4) )
    v4 = v2;
  return v4 != v2;
}


//======================================================================
// UIObject::~UIObject()
// address: 0x001A7D98   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN8UIObjectD1Ev'
void __fastcall UIObject::~UIObject(UIObject *this)
{
  *(_DWORD *)this = &off_458E50;
  std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_erase(
    (int)this + 16,
    *((_DWORD **)this + 6));
  sub_3BDF80((char *)this + 12);
  sub_3BDF80((char *)this + 8);
}


//======================================================================
// UIObject::~UIObject()
// address: 0x001A7DC8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall UIObject::~UIObject(UIObject *this)
{
  UIObject::~UIObject(this);
  operator delete(this);
}


//======================================================================
// UIObject::CopyMembers(UIObject*)
// address: 0x001A7E66   size: 0x64 (100 bytes)
//======================================================================
void __fastcall UIObject::CopyMembers(UIObject *this, UIObject *a2)
{
  int *v4; // r1
  _DWORD *v5; // r0
  _DWORD *i; // r2

  if ( a2 != nullptr )
  {
    sub_3BEBBC((char *)a2 + 8);
    if ( (char *)a2 + 16 != (char *)this + 16 )
    {
      std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_erase(
        (int)a2 + 16,
        *((_DWORD **)a2 + 6));
      *((_DWORD *)a2 + 7) = (char *)a2 + 20;
      *((_DWORD *)a2 + 6) = 0;
      *((_DWORD *)a2 + 8) = (char *)a2 + 20;
      *((_DWORD *)a2 + 9) = 0;
      v4 = *((int **)this + 6);
      if ( v4 != nullptr )
      {
        v5 = std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_copy(
               (int)a2 + 16,
               v4,
               (int)a2 + 20);
        *((_DWORD *)a2 + 6) = v5;
        for ( i = v5; i[2] != 0; i = (_DWORD *)i[2] )
          ;
        *((_DWORD *)a2 + 7) = i;
        while ( v5[3] != 0 )
          v5 = (_DWORD *)v5[3];
        *((_DWORD *)a2 + 8) = v5;
        *((_DWORD *)a2 + 9) = *((_DWORD *)this + 9);
      }
    }
  }
}


//======================================================================
// UIObject::CreateClone(void)
// address: 0x001A7ECC   size: 0x4A (74 bytes)
//======================================================================
UIObject *__fastcall UIObject::CreateClone(UIObject *this)
{
  int v2; // r0
  int v3; // r7
  UIObject *v4; // r4

  v2 = operator new(0x2Cu);
  v3 = v2 + 20;
  v4 = (UIObject *)v2;
  *(_DWORD *)v2 = &off_458E50;
  *(_BYTE *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = &byte_55FB88;
  *(_DWORD *)(v2 + 12) = &byte_55FB88;
  j_memset((void *)(v2 + 20), 0, 0x10u);
  *((_DWORD *)v4 + 9) = 0;
  *((_DWORD *)v4 + 7) = v3;
  *((_DWORD *)v4 + 8) = v3;
  *((_DWORD *)v4 + 10) = 1;
  UIObject::CopyMembers(this, v4);
  return v4;
}


//======================================================================
// UIObject::CallFunction(int,char const*,...)
// address: 0x001A7F20   size: 0x1A2 (418 bytes)
//======================================================================
int UIObject::CallFunction(UIObject *this, int a2, const char *a3, ...)
{
  int v5; // r4
  double v6; // r0
  int v7; // r3
  int v8; // r0
  double v9; // r2
  _QWORD *v10; // r3
  char *v11; // r1
  char *v12; // r7
  const char *v13; // r6
  unsigned int v14; // r3
  char *v15; // r3
  const char *v16; // r0
  _DWORD *v17; // r3
  char *v18; // r3
  float v19; // r0
  bool *v20; // r3
  char *v22; // [sp+4h] [bp-18h]
  char *v23; // [sp+4h] [bp-18h]
  char *v24; // [sp+4h] [bp-18h]
  int i; // [sp+8h] [bp-14h]
  int v26; // [sp+8h] [bp-14h]
  int v27; // [sp+Ch] [bp-10h] BYREF
  char **v28; // [sp+14h] [bp-8h]
  va_list varg_r3; // [sp+34h] [bp+18h] BYREF

  va_start(varg_r3, a3);
  v27 = a2;
  if ( UIObject::hasScriptsEvent(this, a2) )
  {
    v5 = *(_DWORD *)g_pUIScriptVM;
    lua_getfield(*(_DWORD *)g_pUIScriptVM, -10002, "this");
    lua_getfield(v5, -10002, *((_DWORD *)this + 2));
    lua_setfield(v5, -10002, "this");
    HIDWORD(v6) = 0;
    va_copy(v28, varg_r3);
    for ( i = 0; ; ++i )
    {
      v7 = *(unsigned __int8 *)a3;
      if ( *a3 == 0 )
        goto LABEL_14;
      if ( v7 == 105 )
        break;
      switch ( v7 )
      {
        case 'f':
          v10 = (_QWORD *)(((unsigned int)v28 + 7) & 0xFFFFFFF8);
          v28 = (char **)(v10 + 1);
          v9 = *(double *)v10;
          goto LABEL_8;
        case 's':
          v11 = *v28++;
          lua_pushstring(v5, v11);
          break;
        case '>':
          ++a3;
LABEL_14:
          v22 = (char *)j_strlen(a3);
          v12 = *(char **)std::map<int,std::string>::operator[]((_DWORD *)this + 4, &v27);
          v26 = lua_gettop(v5);
          Ogre::ScriptVM::callStringNoBack((Ogre::ScriptVM *)g_pUIScriptVM, v12, (int)v22);
          v13 = a3;
          while ( 2 )
          {
            v14 = *(unsigned __int8 *)v13;
            if ( *v13 == 0 )
            {
              lua_settop(v5, v26);
              lua_setfield(v5, -10002, "this");
              return 0;
            }
            if ( v14 == 102 )
            {
              v18 = *v28++;
              v24 = v18;
              v19 = lua_tonumber(v5, v13 - a3);
              *(float *)v24 = v19;
            }
            else if ( v14 > 0x66 )
            {
              if ( v14 == 105 )
              {
                v17 = *v28++;
                *v17 = (int)lua_tonumber(v5, v13 - a3);
              }
              else if ( v14 == 115 )
              {
                v15 = *v28++;
                v23 = v15;
                v16 = (const char *)lua_tolstring(v5, v13 - a3, 0);
                j_strcpy(v23, v16);
                goto LABEL_25;
              }
            }
            else
            {
              if ( v14 != 98 )
                goto LABEL_26;
LABEL_25:
              v20 = (bool *)*v28++;
              *v20 = lua_toboolean(v5, v13 - a3) != 0;
            }
LABEL_26:
            ++v13;
            continue;
          }
        default:
          break;
      }
LABEL_13:
      lua_setfield(v5, -10002, off_451E20[i]);
      luaL_checkstack(v5, 1, "too many\targuments");
      ++a3;
    }
    v8 = (int)*v28++;
    v6 = (double)v8;
    v9 = v6;
LABEL_8:
    lua_pushnumber(v5, HIDWORD(v6), LODWORD(v9), HIDWORD(v9));
    goto LABEL_13;
  }
  return 0;
}


//======================================================================
// UIObject::CallScript(int,char const*,...)
// address: 0x001A80DC   size: 0xDC (220 bytes)
//======================================================================
int UIObject::CallScript(UIObject *this, int a2, const char *a3, ...)
{
  int v4; // r4
  double v5; // r0
  int i; // r6
  int v7; // r3
  int v8; // r0
  double v9; // r2
  _QWORD *v10; // r3
  char *v11; // r1
  char *v13; // [sp+0h] [bp-14h]
  int v14; // [sp+4h] [bp-10h] BYREF
  char **v15; // [sp+Ch] [bp-8h]
  const char *varg_r2; // [sp+28h] [bp+14h]
  va_list varg_r3; // [sp+2Ch] [bp+18h] BYREF

  va_start(varg_r3, a3);
  varg_r2 = a3;
  v14 = a2;
  if ( UIObject::hasScriptsEvent(this, a2) )
  {
    v13 = *(char **)std::map<int,std::string>::operator[]((_DWORD *)this + 4, &v14);
    v4 = *(_DWORD *)g_pUIScriptVM;
    lua_getfield(*(_DWORD *)g_pUIScriptVM, -10002, "this");
    lua_getfield(v4, -10002, *((_DWORD *)this + 2));
    lua_setfield(v4, -10002, "this");
    va_copy(v15, varg_r3);
    for ( i = 0; ; lua_setfield(v4, -10002, off_451DC0[i + 27]) )
    {
      v7 = (unsigned __int8)varg_r2[i];
      if ( varg_r2[i] == 0 || i == 4 )
      {
        Ogre::ScriptVM::callString((Ogre::ScriptVM *)g_pUIScriptVM, v13, 0);
        lua_setfield(v4, -10002, "this");
        return 0;
      }
      if ( v7 == 105 )
        break;
      if ( v7 == 102 )
      {
        v10 = (_QWORD *)(((unsigned int)v15 + 7) & 0xFFFFFFF8);
        v15 = (char **)(v10 + 1);
        v9 = *(double *)v10;
        goto LABEL_9;
      }
      if ( v7 == 115 )
      {
        v11 = *v15++;
        lua_pushstring(v4, v11);
      }
LABEL_12:
      ++i;
    }
    v8 = (int)*v15++;
    v5 = (double)v8;
    v9 = v5;
LABEL_9:
    lua_pushnumber(v4, HIDWORD(v5), LODWORD(v9), HIDWORD(v9));
    goto LABEL_12;
  }
  return 0;
}

