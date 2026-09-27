// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::SoundSystem

//======================================================================
// Ogre::SoundSystem::playSound(char const*,Ogre::Vector3 const&,float,float)
// address: 0x00142BF4   size: 0x3A (58 bytes)
//======================================================================
int __fastcall Ogre::SoundSystem::playSound(int a1, int a2, int *a3, int a4, int a5)
{
  int v5; // r3
  int v6; // r3
  int v7; // r4
  int v9; // [sp+0h] [bp-3Ch]
  int v10; // [sp+4h] [bp-38h]
  int v11; // [sp+8h] [bp-34h]
  int v12; // [sp+Ch] [bp-30h]
  int v13; // [sp+10h] [bp-2Ch]
  int v14; // [sp+14h] [bp-28h]
  int v15; // [sp+18h] [bp-24h]
  int v16; // [sp+1Ch] [bp-20h]
  int v17; // [sp+20h] [bp-1Ch]
  int v18; // [sp+24h] [bp-18h]
  char v19; // [sp+28h] [bp-14h]

  v11 = a4;
  v12 = a5;
  v5 = *a3;
  v9 = 1128792064;
  v13 = v5;
  v6 = a3[1];
  v7 = a3[2];
  v10 = 1184645120;
  v14 = v6;
  v17 = 0;
  v18 = 0;
  v15 = v7;
  v16 = 0;
  v19 = 0;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
}


//======================================================================
// Ogre::SoundSystem::~SoundSystem()
// address: 0x0016B254   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11SoundSystemD1Ev'
void __fastcall Ogre::SoundSystem::~SoundSystem(Ogre::SoundSystem *this)
{
  *(_DWORD *)this = &off_457168;
  Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton = 0;
}


//======================================================================
// Ogre::SoundSystem::~SoundSystem()
// address: 0x0016B2F0   size: 0x20 (32 bytes)
//======================================================================
void __fastcall Ogre::SoundSystem::~SoundSystem(Ogre::SoundSystem *this)
{
  *(_DWORD *)this = &off_457168;
  Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton = 0;
  operator delete(this);
}

