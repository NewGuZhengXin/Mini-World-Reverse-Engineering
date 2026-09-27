// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ParticleManager

//======================================================================
// ParticleManager::~ParticleManager()
// address: 0x002E932C   size: 0x54 (84 bytes)
//======================================================================
// Alternative name is '_ZN15ParticleManagerD1Ev'
void __fastcall ParticleManager::~ParticleManager(ParticleManager *this)
{
  void *v1; // r5
  ParticleTemplate **i; // r5
  ParticleTemplate *v4; // r6

  v1 = *((void **)this + 1);
  if ( v1 != nullptr )
  {
    Ogre::VertexFormat::~VertexFormat(*((void ***)this + 1));
    operator delete(v1);
  }
  for ( i = *((ParticleTemplate ***)this + 5);
        i != (ParticleTemplate **)((char *)this + 12);
        i = (ParticleTemplate **)sub_391DDC(i) )
  {
    v4 = i[5];
    if ( v4 != nullptr )
    {
      ParticleTemplate::~ParticleTemplate(i[5]);
      operator delete(v4);
    }
  }
  std::_Rb_tree<std::string,std::pair<std::string const,ParticleTemplate *>,std::_Select1st<std::pair<std::string const,ParticleTemplate *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ParticleTemplate *>>>::_M_erase(
    (int)this + 8,
    *((_DWORD **)this + 4));
  Ogre::Singleton<ParticleManager>::ms_Singleton = 0;
}


//======================================================================
// ParticleManager::getTemplate(char const*)
// address: 0x002E9384   size: 0x5A (90 bytes)
//======================================================================
int __fastcall ParticleManager::getTemplate(ParticleManager *this, char *a2, int a3)
{
  char *v4; // r6
  char *v5; // r5
  char *v6; // r4
  char *v7; // r3
  _DWORD v9[2]; // [sp+4h] [bp+0h] BYREF

  v9[0] = a2;
  v9[1] = a3;
  sub_3BF0BC((int)v9, a2);
  v4 = (char *)this + 12;
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
  if ( v6 != v4 && std::operator<<char>() != 0 )
    v6 = v4;
  sub_3BDF80(v9);
  if ( v6 == v4 )
    return 0;
  else
    return *((_DWORD *)v6 + 5);
}


//======================================================================
// ParticleManager::loadTemplateFromXML(char const*)
// address: 0x002E9638   size: 0x1A2 (418 bytes)
//======================================================================
int __fastcall ParticleManager::loadTemplateFromXML(ParticleManager *this, const char *a2)
{
  ParticleTemplate *v2; // r4
  int v3; // r1
  int v4; // r7
  int v5; // r6
  int v6; // r7
  Ogre::ResourceManager *v7; // r6
  void *v8; // r1
  ParticleTemplate *v9; // r4
  int v10; // r1
  int v11; // r7
  int v12; // r1
  int v13; // r6
  int v14; // r7
  Ogre::ResourceManager *v15; // r6
  void *v16; // r1
  Ogre::FixedString *v19[2]; // [sp+14h] [bp-8h] BYREF

  v2 = (ParticleTemplate *)operator new(0xBCu);
  ParticleTemplate::ParticleTemplate(v2);
  *(_DWORD *)v2 = 2;
  *((_DWORD *)v2 + 5) = 2;
  *((_DWORD *)v2 + 6) = 8;
  *((_DWORD *)v2 + 7) = 8;
  *((_DWORD *)v2 + 3) = 100;
  *((_DWORD *)v2 + 9) = 1133903872;
  *((_DWORD *)v2 + 18) = 1148846080;
  *((_DWORD *)v2 + 16) = -1082130432;
  *((_DWORD *)v2 + 20) = 1120403456;
  *((_DWORD *)v2 + 22) = 0x40000000;
  *((_DWORD *)v2 + 23) = 1140457472;
  *((_DWORD *)v2 + 12) = 1117782016;
  *((_DWORD *)v2 + 15) = 0;
  *((_DWORD *)v2 + 17) = 0;
  *((_DWORD *)v2 + 25) = 1101004800;
  *((_DWORD *)v2 + 24) = 1101004800;
  *((_DWORD *)v2 + 36) = 1065353216;
  *((_DWORD *)v2 + 37) = 1065353216;
  *((_DWORD *)v2 + 38) = 1065353216;
  *((_DWORD *)v2 + 39) = 1065353216;
  v3 = *((_DWORD *)v2 + 37);
  v4 = *((_DWORD *)v2 + 38);
  *((_DWORD *)v2 + 32) = *((_DWORD *)v2 + 36);
  *((_DWORD *)v2 + 33) = v3;
  *((_DWORD *)v2 + 34) = v4;
  *((_DWORD *)v2 + 35) = 1065353216;
  v5 = *((_DWORD *)v2 + 33);
  v6 = *((_DWORD *)v2 + 34);
  *((_DWORD *)v2 + 28) = *((_DWORD *)v2 + 32);
  *((_DWORD *)v2 + 29) = v5;
  *((_DWORD *)v2 + 30) = v6;
  *((_DWORD *)v2 + 31) = 1065353216;
  *((_DWORD *)v2 + 42) = 1084227584;
  *((_DWORD *)v2 + 41) = 1084227584;
  v7 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  *((_DWORD *)v2 + 40) = 1084227584;
  *((_DWORD *)v2 + 45) = 1065353216;
  *((_DWORD *)v2 + 44) = 1065353216;
  *((_DWORD *)v2 + 43) = 1065353216;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v19, (Ogre::FixedString *)"blocks/dirt.png", (int)v2 + 140);
  *((_DWORD *)v2 + 46) = Ogre::ResourceManager::blockLoad(v7, v19, 0);
  Ogre::FixedString::~FixedString(v19, v8);
  sub_3BF0BC((int)v19, "block_destroyed");
  *std::map<std::string,ParticleTemplate *>::operator[]((_DWORD *)this + 2, v19) = v2;
  sub_3BDF80(v19);
  v9 = (ParticleTemplate *)operator new(0xBCu);
  ParticleTemplate::ParticleTemplate(v9);
  *(_DWORD *)v9 = 2;
  *((_DWORD *)v9 + 5) = 2;
  *((_DWORD *)v9 + 6) = 8;
  *((_DWORD *)v9 + 7) = 8;
  *((_DWORD *)v9 + 3) = 50;
  *((_DWORD *)v9 + 9) = 1128792064;
  *((_DWORD *)v9 + 18) = 1148846080;
  *((_DWORD *)v9 + 22) = 1056964608;
  *((_DWORD *)v9 + 16) = -1082130432;
  *((_DWORD *)v9 + 25) = 1106247680;
  *((_DWORD *)v9 + 24) = 1106247680;
  *((_DWORD *)v9 + 12) = 1117782016;
  *((_DWORD *)v9 + 20) = 1065353216;
  *((_DWORD *)v9 + 23) = 1101004800;
  *((_DWORD *)v9 + 15) = 0;
  *((_DWORD *)v9 + 17) = 0;
  *((_DWORD *)v9 + 36) = 1065353216;
  *((_DWORD *)v9 + 37) = 1065353216;
  *((_DWORD *)v9 + 38) = 1065353216;
  *((_DWORD *)v9 + 39) = 1065353216;
  v10 = *((_DWORD *)v9 + 37);
  v11 = *((_DWORD *)v9 + 38);
  *((_DWORD *)v9 + 32) = *((_DWORD *)v9 + 36);
  *((_DWORD *)v9 + 33) = v10;
  *((_DWORD *)v9 + 34) = v11;
  v12 = *((_DWORD *)v9 + 39);
  *((_DWORD *)v9 + 35) = v12;
  v13 = *((_DWORD *)v9 + 33);
  v14 = *((_DWORD *)v9 + 34);
  *((_DWORD *)v9 + 28) = *((_DWORD *)v9 + 32);
  *((_DWORD *)v9 + 29) = v13;
  *((_DWORD *)v9 + 30) = v14;
  *((_DWORD *)v9 + 31) = v12;
  *((_DWORD *)v9 + 42) = 1084227584;
  *((_DWORD *)v9 + 41) = 1084227584;
  *((_DWORD *)v9 + 40) = 1084227584;
  *((_DWORD *)v9 + 45) = 1065353216;
  *((_DWORD *)v9 + 44) = 1065353216;
  v15 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  *((_DWORD *)v9 + 43) = 1065353216;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v19, (Ogre::FixedString *)"blocks/dirt.png", (int)v9 + 140);
  *((_DWORD *)v9 + 46) = Ogre::ResourceManager::blockLoad(v15, v19, 0);
  Ogre::FixedString::~FixedString(v19, v16);
  sub_3BF0BC((int)v19, "block_destroying");
  *std::map<std::string,ParticleTemplate *>::operator[]((_DWORD *)this + 2, v19) = v9;
  return sub_3BDF80(v19);
}


//======================================================================
// ParticleManager::ParticleManager(void)
// address: 0x002E983C   size: 0x8C (140 bytes)
//======================================================================
// Alternative name is '_ZN15ParticleManagerC1Ev'
void __fastcall ParticleManager::ParticleManager(ParticleManager *this)
{
  char *v1; // r6
  int *v3; // r5

  v1 = (char *)this + 12;
  Ogre::Singleton<ParticleManager>::ms_Singleton = (int)this;
  j_memset((char *)this + 12, 0, 0x10u);
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 5) = v1;
  *((_DWORD *)this + 6) = v1;
  v3 = (int *)operator new(0xCu);
  Ogre::VertexFormat::VertexFormat(v3);
  *((_DWORD *)this + 1) = v3;
  Ogre::VertexFormat::addElement(v3, 2u, 1u, 0, 0, -1);
  Ogre::VertexFormat::addElement(*((int **)this + 1), 4u, 5u, 0, 0, -1);
  Ogre::VertexFormat::addElement(*((int **)this + 1), 1u, 7u, 0, 0, -1);
  *(_DWORD *)this = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton
                                                       + 36))(
                      Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
                      *((_DWORD *)this + 1));
  ParticleManager::loadTemplateFromXML(this, (const char *)&unk_3FB8EA);
}

