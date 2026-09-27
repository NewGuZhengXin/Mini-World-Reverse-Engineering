// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: DebugDataMgr

//======================================================================
// DebugDataMgr::DebugDataMgr(Ogre::UIRenderer *)
// address: 0x002BC35C   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN12DebugDataMgrC1EPN4Ogre10UIRendererE'
void __fastcall DebugDataMgr::DebugDataMgr(DebugDataMgr *this, Ogre::UIRenderer *a2)
{
  *((_BYTE *)this + 20) = 0;
  Ogre::Singleton<DebugDataMgr>::ms_Singleton = (int)this;
  *((_BYTE *)this + 4) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = (*(int (__fastcall **)(Ogre::UIRenderer *, int, int, const char *))(*(_DWORD *)a2 + 20))(
                            a2,
                            16,
                            16,
                            "ui/fonts/heiti.ttf");
}


//======================================================================
// DebugDataMgr::~DebugDataMgr()
// address: 0x002BC3A0   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN12DebugDataMgrD1Ev'
void __fastcall DebugDataMgr::~DebugDataMgr(DebugDataMgr *this)
{
  _DWORD *v2; // r0
  int v3; // r2

  v2 = *(_DWORD **)this;
  if ( v2 != nullptr )
  {
    v3 = v2[1] - 1;
    v2[1] = v3;
    if ( v3 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v2 + 24))(v2);
    *(_DWORD *)this = 0;
  }
  Ogre::Singleton<DebugDataMgr>::ms_Singleton = 0;
}


//======================================================================
// DebugDataMgr::showTerrBisect(bool)
// address: 0x002BC3D0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall DebugDataMgr::showTerrBisect(int this, bool a2)
{
  *(_BYTE *)(this + 4) = a2;
  return this;
}


//======================================================================
// DebugDataMgr::updateTerrBisect(TerrainGen *)
// address: 0x002BC3D4   size: 0xB6 (182 bytes)
//======================================================================
int __fastcall DebugDataMgr::updateTerrBisect(DebugDataMgr *this, TerrainGen *a2)
{
  int v3; // r5
  int v4; // r0
  unsigned __int8 *v5; // r5
  int v6; // r0
  int i; // r2
  unsigned __int8 *v8; // r3
  int v9; // r1
  unsigned __int8 v10; // r4
  int v13[8]; // [sp+14h] [bp-20h] BYREF

  if ( *(_DWORD *)this == 0 )
  {
    v13[1] = 1024;
    v13[2] = 128;
    v13[5] = 12;
    v13[0] = 0;
    v13[4] = 1;
    v3 = operator new(0x48u);
    Ogre::TextureData::TextureData(v3, v13, 1);
    v4 = *((_DWORD *)this + 3);
    *(_DWORD *)this = v3;
    *((_DWORD *)this + 2) = (*(int (__fastcall **)(int, _DWORD, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 76))(
                              v4,
                              0,
                              v3,
                              0,
                              0,
                              0);
  }
  v5 = (unsigned __int8 *)operator new[](0x20000u);
  TerrainGen::dumpBisectImage(a2, v5, 1024, 128, 0.0);
  v6 = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, int *))(**(_DWORD **)this + 36))(
         *(_DWORD *)this,
         0,
         0,
         0,
         v13);
  for ( i = 0; i != 0x20000; i += 1024 )
  {
    v8 = (unsigned __int8 *)(v6 + 4 * i);
    v9 = 0;
    do
    {
      v10 = v5[i + v9++];
      *v8 = v10;
      v8[1] = v10;
      v8[2] = v10;
      v8[3] = -1;
      v8 += 4;
    }
    while ( v9 != 1024 );
  }
  return (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)this + 40))(*(_DWORD *)this, 0, 0);
}


//======================================================================
// DebugDataMgr::renderTerrBisect(void)
// address: 0x002BC494   size: 0x46 (70 bytes)
//======================================================================
int __fastcall DebugDataMgr::renderTerrBisect(DebugDataMgr *this)
{
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 3) + 96))(
    *((_DWORD *)this + 3),
    *((_DWORD *)this + 2),
    0,
    0,
    0);
  (*(void (__fastcall **)(_DWORD, _DWORD, int, int, int, int, _DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 3) + 108))(
    *((_DWORD *)this + 3),
    0,
    100,
    1024,
    128,
    -1,
    0,
    0,
    0);
  return (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 3) + 100))(*((_DWORD *)this + 3));
}


//======================================================================
// DebugDataMgr::renderUI(void)
// address: 0x002BC4DC   size: 0x124 (292 bytes)
//======================================================================
DebugDataMgr *__fastcall DebugDataMgr::renderUI(DebugDataMgr *this)
{
  DebugDataMgr *v1; // r6
  int v2; // r0
  void (__fastcall *v3)(int, _DWORD, _DWORD, char *, _DWORD, _DWORD, _BYTE *, int, _DWORD, _DWORD, char *); // r3
  int v4; // r0
  int v5; // r1
  int (__fastcall *v6)(int, int, _DWORD, char *, _DWORD, int, _BYTE *, int, _DWORD, _DWORD, char *); // r12
  _BYTE v7[4]; // [sp+40h] [bp-10Ch] BYREF
  char s[256]; // [sp+44h] [bp-108h] BYREF

  v1 = this;
  if ( *((_BYTE *)this + 20) != 0 )
  {
    if ( *((_BYTE *)this + 4) != 0 )
      DebugDataMgr::renderTerrBisect(this);
    j_sprintf(
      s,
      "FPS:%.1f, TEXMEM:%dM, NT:%d, NP:%d, ND:%d, NC:%d, NS:%d",
      *(float *)(Ogre::Singleton<Ogre::SceneManager>::ms_Singleton + 132),
      *(_DWORD *)(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 4) / 0xF4240u,
      *(_DWORD *)(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 8),
      *(_DWORD *)(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 12),
      *(_DWORD *)(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 16),
      *(_DWORD *)(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 20),
      *(_DWORD *)(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 24));
    v2 = *((_DWORD *)v1 + 3);
    v3 = *(void (__fastcall **)(int, _DWORD, _DWORD, char *, _DWORD, _DWORD, _BYTE *, int, _DWORD, _DWORD, char *))(*(_DWORD *)v2 + 36);
    v7[1] = -1;
    v7[0] = -1;
    v7[2] = -1;
    v7[3] = -1;
    v3(v2, *((_DWORD *)v1 + 4), 0, s, 0, 0, v7, 1065353216, 0, 0, &byte_513490);
    this = *(DebugDataMgr **)(Ogre::Singleton<ClientManager>::ms_Singleton + 76);
    if ( this != nullptr )
    {
      (*(void (__fastcall **)(DebugDataMgr *, char *, int))(*(_DWORD *)this + 16))(this, s, 256);
      v4 = *((_DWORD *)v1 + 3);
      v5 = *((_DWORD *)v1 + 4);
      v6 = *(int (__fastcall **)(int, int, _DWORD, char *, _DWORD, int, _BYTE *, int, _DWORD, _DWORD, char *))(*(_DWORD *)v4 + 36);
      v7[0] = -1;
      v7[1] = -1;
      v7[2] = -1;
      v7[3] = -1;
      return (DebugDataMgr *)v6(v4, v5, 0, s, 0, 1101004800, v7, 1065353216, 0, 0, &byte_513490);
    }
  }
  return this;
}

