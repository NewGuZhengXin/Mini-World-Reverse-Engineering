// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ScriptVM

//======================================================================
// Ogre::ScriptVM::LuaStateAlloc(void *,void *,unsigned int,unsigned int)
// address: 0x0017268E   size: 0x18 (24 bytes)
//======================================================================
void *__fastcall Ogre::ScriptVM::LuaStateAlloc(
        Ogre::ScriptVM *this,
        Ogre *a2,
        unsigned int a3,
        size_t a4,
        unsigned int a5)
{
  if ( a4 != 0 )
    return Ogre::resize(a2, a4, a3);
  Ogre::release(a2, a2);
  return nullptr;
}


//======================================================================
// Ogre::ScriptVM::ScriptVM(void)
// address: 0x001726EC   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre8ScriptVMC1Ev'
Ogre::ScriptVM *__fastcall Ogre::ScriptVM::ScriptVM(Ogre::ScriptVM *this)
{
  *(_DWORD *)this = 0;
  *(_DWORD *)this = lua_newstate(Ogre::ScriptVM::LuaStateAlloc, 0);
  luaL_openlibs();
  lua_pushcclosure(*(_DWORD *)this, sub_1726A8, 0);
  lua_setfield(*(_DWORD *)this, -10002, "getglobal");
  return this;
}


//======================================================================
// Ogre::ScriptVM::~ScriptVM()
// address: 0x00172734   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre8ScriptVMD1Ev'
void __fastcall Ogre::ScriptVM::~ScriptVM(Ogre::ScriptVM *this)
{
  if ( *(_DWORD *)this != 0 )
    lua_close();
}


//======================================================================
// Ogre::ScriptVM::callStringNoBack(char const*,int)
// address: 0x00172748   size: 0x128 (296 bytes)
//======================================================================
int __fastcall Ogre::ScriptVM::callStringNoBack(Ogre::ScriptVM *this, char *a2, int a3)
{
  int v5; // r6
  int v6; // r3
  int v7; // r0
  const char *v8; // r4
  unsigned int v9; // r3
  const char *v10; // r4
  unsigned int v11; // r3

  lua_pushlightuserdata(*(_DWORD *)this, &unk_4B935C);
  lua_gettable(*(_DWORD *)this, -10000);
  if ( lua_type(*(_DWORD *)this, -1) == 0 )
  {
    lua_settop(*(_DWORD *)this, -2);
    lua_createtable(*(_DWORD *)this, 0, 1);
    lua_pushlightuserdata(*(_DWORD *)this, &unk_4B935C);
    lua_pushvalue(*(_DWORD *)this, -2);
    lua_settable(*(_DWORD *)this, -10000);
    lua_createtable(*(_DWORD *)this, 0, 1);
    lua_pushlstring(*(_DWORD *)this, "v", 1);
    lua_setfield(*(_DWORD *)this, -2, "__mode");
    lua_setmetatable(*(_DWORD *)this, -2);
  }
  lua_getfield(*(_DWORD *)this, -1, a2);
  v5 = lua_type(*(_DWORD *)this, -1);
  if ( v5 == 0 )
  {
    lua_settop(*(_DWORD *)this, -2);
    v6 = luaL_loadstring(*(_DWORD *)this, a2);
    v7 = *(_DWORD *)this;
    if ( v6 != 0 )
    {
      v8 = (const char *)lua_tolstring(v7, -1, 0);
      Ogre::LogSetCurParam(
        (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreScriptLuaVM.cpp",
        (const char *)&dword_6C,
        4,
        v9);
      Ogre::LogMessage((Ogre *)"[script error]%s", v8);
      return v5;
    }
    lua_pushvalue(v7, -1);
    lua_setfield(*(_DWORD *)this, -3, a2);
  }
  v5 = 1;
  if ( lua_pcall(*(_DWORD *)this, 0, a3, 0) != 0 )
  {
    v10 = (const char *)lua_tolstring(*(_DWORD *)this, -1, 0);
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreScriptLuaVM.cpp",
      (const char *)&dword_78,
      4,
      v11);
    v5 = 0;
    Ogre::LogMessage((Ogre *)"[script error]%s", v10);
  }
  return v5;
}


//======================================================================
// Ogre::ScriptVM::callString(char const*,int)
// address: 0x00172890   size: 0x142 (322 bytes)
//======================================================================
int __fastcall Ogre::ScriptVM::callString(Ogre::ScriptVM *this, char *a2, int a3)
{
  int v5; // r6
  int v6; // r3
  int v7; // r0
  const char *v8; // r4
  unsigned int v9; // r3
  const char *v10; // r4
  unsigned int v11; // r3
  _DWORD v14[3]; // [sp+8h] [bp-Ch] BYREF

  v14[0] = *(_DWORD *)this;
  v14[1] = lua_gettop();
  lua_pushlightuserdata(*(_DWORD *)this, &unk_4B935D);
  lua_gettable(*(_DWORD *)this, -10000);
  if ( lua_type(*(_DWORD *)this, -1) == 0 )
  {
    lua_settop(*(_DWORD *)this, -2);
    lua_createtable(*(_DWORD *)this, 0, 1);
    lua_pushlightuserdata(*(_DWORD *)this, &unk_4B935D);
    lua_pushvalue(*(_DWORD *)this, -2);
    lua_settable(*(_DWORD *)this, -10000);
    lua_createtable(*(_DWORD *)this, 0, 1);
    lua_pushlstring(*(_DWORD *)this, "v", 1);
    lua_setfield(*(_DWORD *)this, -2, "__mode");
    lua_setmetatable(*(_DWORD *)this, -2);
  }
  lua_getfield(*(_DWORD *)this, -1, a2);
  v5 = lua_type(*(_DWORD *)this, -1);
  if ( v5 == 0 )
  {
    lua_settop(*(_DWORD *)this, -2);
    v6 = luaL_loadstring(*(_DWORD *)this, a2);
    v7 = *(_DWORD *)this;
    if ( v6 != 0 )
    {
      v8 = (const char *)lua_tolstring(v7, -1, 0);
      Ogre::LogSetCurParam(
        (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreScriptLuaVM.cpp",
        (const char *)&dword_98 + 2,
        4,
        v9);
      Ogre::LogMessage((Ogre *)"[script error]%s", v8);
      goto LABEL_9;
    }
    lua_pushvalue(v7, -1);
    lua_setfield(*(_DWORD *)this, -3, a2);
  }
  v5 = 1;
  if ( lua_pcall(*(_DWORD *)this, 0, a3, 0) != 0 )
  {
    v10 = (const char *)lua_tolstring(*(_DWORD *)this, -1, 0);
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreScriptLuaVM.cpp",
      (const char *)&dword_A4 + 2,
      4,
      v11);
    v5 = 0;
    Ogre::LogMessage((Ogre *)"[script error]%s", v10);
  }
LABEL_9:
  Ogre::LuaStackBackup::~LuaStackBackup((Ogre::LuaStackBackup *)v14);
  return v5;
}


//======================================================================
// Ogre::ScriptVM::callFile(char const*)
// address: 0x001729F4   size: 0xFA (250 bytes)
//======================================================================
int __fastcall Ogre::ScriptVM::callFile(Ogre::ScriptVM *this, char *a2)
{
  unsigned int v4; // r3
  int v5; // r7
  int v6; // r4
  int v7; // r0
  int v8; // r4
  unsigned int v9; // r3
  int v10; // r6
  unsigned int v11; // r3
  _DWORD v13[2]; // [sp+8h] [bp-414h] BYREF
  int v14[251]; // [sp+10h] [bp-40Ch] BYREF

  v13[0] = *(_DWORD *)this;
  v13[1] = lua_gettop(v13[0]);
  v5 = Ogre::FileManager::openFile((Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, a2, 1);
  v14[0] = v5;
  if ( v5 != 0 )
  {
    v6 = lua_load(*(_DWORD *)this, sub_17266E, v14, a2);
    v7 = *(_DWORD *)this;
    if ( v6 != 0 )
    {
      v8 = lua_tolstring(v7, -1, 0);
      Ogre::LogSetCurParam(
        (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreScriptLuaVM.cpp",
        (const char *)&dword_D4 + 1,
        4,
        v9);
      Ogre::LogMessage((Ogre *)"script load failed: %s, error: %s", a2, v8);
      v5 = 0;
    }
    else
    {
      v5 = 1;
      if ( lua_pcall(v7, 0, 0, 0) != 0 )
      {
        v10 = lua_tolstring(*(_DWORD *)this, -1, 0);
        Ogre::LogSetCurParam(
          (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreScriptLuaVM.cpp",
          (const char *)&dword_E4 + 2,
          4,
          v11);
        Ogre::LogMessage((Ogre *)"script call failed: %s, error: %s", a2, v10);
        v5 = 0;
      }
    }
  }
  else
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreScriptLuaVM.cpp",
      (const char *)&dword_CC + 2,
      4,
      v4);
    Ogre::LogMessage((Ogre *)"script open failed: %s", a2);
  }
  if ( v14[0] != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v14[0] + 4))(v14[0]);
  Ogre::LuaStackBackup::~LuaStackBackup((Ogre::LuaStackBackup *)v13);
  return v5;
}


//======================================================================
// Ogre::ScriptVM::callFunction(char const*,char const*,...)
// address: 0x00172B1C   size: 0x222 (546 bytes)
//======================================================================
int Ogre::ScriptVM::callFunction(Ogre::ScriptVM *this, const char *a2, const char *a3, ...)
{
  double v6; // r0
  int v7; // r6
  int i; // r6
  unsigned int v9; // r3
  int v10; // kr00_4
  double v11; // r2
  double *v12; // r3
  char *v13; // kr04_4
  char *v14; // r0
  int v15; // kr08_4
  size_t v16; // r7
  unsigned int v17; // r3
  const char *v18; // r0
  int v19; // r6
  unsigned int v20; // r3
  double *v21; // kr0C_4
  int *v22; // kr10_4
  int *v23; // r7
  int v24; // r0
  float *v25; // kr14_4
  float v26; // r0
  char *v27; // kr18_4
  const char *v28; // r0
  bool *v29; // kr1C_4
  int *v30; // kr20_4
  int v32; // [sp+4h] [bp-120h]
  const char *v33; // [sp+8h] [bp-11Ch]
  int v34; // [sp+8h] [bp-11Ch]
  double *v35; // [sp+10h] [bp-114h]
  _DWORD v36[2]; // [sp+14h] [bp-110h] BYREF
  _BYTE v37[256]; // [sp+1Ch] [bp-108h] BYREF
  va_list varg_r3; // [sp+13Ch] [bp+18h] BYREF

  va_start(varg_r3, a3);
  v36[0] = *(_DWORD *)this;
  v36[1] = lua_gettop(v36[0]);
  lua_getfield(*(_DWORD *)this, -10002, a2);
  v7 = 0;
  if ( lua_type(*(_DWORD *)this, -1) == 6 )
  {
    va_copy(v35, varg_r3);
    if ( a3 == nullptr )
      a3 = (const char *)&unk_3FB8EA;
    for ( i = 0; ; ++i )
    {
      v9 = *(unsigned __int8 *)a3;
      if ( *a3 == 0 )
        goto LABEL_22;
      if ( v9 == 102 )
        goto LABEL_19;
      if ( v9 <= 0x66 )
        break;
      switch ( v9 )
      {
        case 's':
          v13 = va_arg(v35, char *);
          lua_pushstring(*(_DWORD *)this, v13);
          break;
        case 'u':
          v14 = j_strchr(a3 + 1, 93);
          v32 = v14 - (a3 + 1) - 1;
          v33 = v14;
          j_memcpy(v37, a3 + 2, v32);
          v37[v32] = 0;
          v15 = va_arg(v35, _DWORD);
          tolua_pushusertype(*(_DWORD *)this, v15, v37);
          a3 = v33;
          break;
        case 'i':
          v10 = va_arg(v35, _DWORD);
          v6 = (double)v10;
          v11 = (double)v10;
          LODWORD(v6) = *(_DWORD *)this;
LABEL_17:
          lua_pushnumber(LODWORD(v6), HIDWORD(v6), LODWORD(v11), HIDWORD(v11));
          break;
        default:
          goto LABEL_42;
      }
      ++a3;
      luaL_checkstack(*(_DWORD *)this, 1, "too many\targuments");
    }
    if ( v9 == 98 )
LABEL_19:
      j_abort();
    if ( v9 != 100 )
    {
      if ( v9 != 62 )
      {
LABEL_42:
        v7 = 0;
        goto LABEL_43;
      }
      ++a3;
LABEL_22:
      v16 = j_strlen(a3);
      if ( lua_pcall(*(_DWORD *)this, i, v16, 0) != 0 )
      {
        Ogre::LogSetCurParam(
          (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreScriptLuaVM.cpp",
          (const char *)&dword_130,
          8,
          v17);
        v18 = (const char *)lua_tolstring(*(_DWORD *)this, -1, 0);
        Ogre::LogMessage((Ogre *)"lua_pcall error: %s", v18);
        goto LABEL_42;
      }
      v34 = -v16;
      v19 = -v16;
      while ( 2 )
      {
        v20 = (unsigned __int8)a3[v19 - v34];
        if ( a3[v19 - v34] == 0 )
        {
          v7 = 1;
          goto LABEL_43;
        }
        if ( v20 == 102 )
        {
          v25 = va_arg(v35, float *);
          v26 = lua_tonumber(*(_DWORD *)this, v19);
          *v25 = v26;
        }
        else
        {
          if ( v20 <= 0x66 )
          {
            if ( v20 == 98 )
            {
              v29 = va_arg(v35, bool *);
              *v29 = lua_toboolean(*(_DWORD *)this, v19) != 0;
            }
            else if ( v20 == 100 )
            {
              v21 = va_arg(v35, double *);
              *v21 = lua_tonumber(*(_DWORD *)this, v19);
            }
            goto LABEL_40;
          }
          switch ( v20 )
          {
            case 's':
              v27 = va_arg(v35, char *);
              v28 = (const char *)lua_tolstring(*(_DWORD *)this, v19, 0);
              j_strcpy(v27, v28);
              break;
            case 'u':
              v30 = va_arg(v35, int *);
              v23 = v30;
              v24 = tolua_tousertype(*(_DWORD *)this, v19, 0);
LABEL_39:
              *v23 = v24;
              break;
            case 'i':
              v22 = va_arg(v35, int *);
              v23 = v22;
              v24 = (int)lua_tonumber(*(_DWORD *)this, v19);
              goto LABEL_39;
            default:
              break;
          }
        }
LABEL_40:
        ++v19;
        continue;
      }
    }
    LODWORD(v6) = *(_DWORD *)this;
    v12 = (double *)(((unsigned int)v35 + 7) & 0xFFFFFFF8);
    v35 = v12 + 1;
    v11 = *v12;
    goto LABEL_17;
  }
LABEL_43:
  Ogre::LuaStackBackup::~LuaStackBackup((Ogre::LuaStackBackup *)v36);
  return v7;
}


//======================================================================
// Ogre::ScriptVM::setUserTypePointer(char const*,char const*,void *)
// address: 0x00172D58   size: 0x36 (54 bytes)
//======================================================================
void __fastcall Ogre::ScriptVM::setUserTypePointer(Ogre::ScriptVM *this, const char *a2, const char *a3, void *a4)
{
  _DWORD v8[3]; // [sp+8h] [bp-Ch] BYREF

  v8[0] = *(_DWORD *)this;
  v8[1] = lua_gettop(v8[0]);
  tolua_pushusertype(*(_DWORD *)this, a4, a3);
  lua_setfield(*(_DWORD *)this, -10002, a2);
  Ogre::LuaStackBackup::~LuaStackBackup((Ogre::LuaStackBackup *)v8);
}

