// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::LuaStackBackup

//======================================================================
// Ogre::LuaStackBackup::~LuaStackBackup()
// address: 0x001726DC   size: 0x10 (16 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14LuaStackBackupD1Ev'
void __fastcall Ogre::LuaStackBackup::~LuaStackBackup(Ogre::LuaStackBackup *this)
{
  lua_settop(*(_DWORD *)this, *((_DWORD *)this + 1));
}

