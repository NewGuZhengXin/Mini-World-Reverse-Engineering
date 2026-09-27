// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockScene

//======================================================================
// BlockScene::update(unsigned int)
// address: 0x002CE6D8   size: 0x2 (2 bytes)
//======================================================================
void __fastcall BlockScene::update(BlockScene *this, unsigned int a2)
{
  ;
}


//======================================================================
// BlockScene::onObjectPosChange(Ogre::MovableObject *)
// address: 0x002CE6DA   size: 0x2 (2 bytes)
//======================================================================
void __fastcall BlockScene::onObjectPosChange(BlockScene *this, Ogre::MovableObject *a2)
{
  ;
}


//======================================================================
// BlockScene::onRender(Ogre::SceneRenderer *)
// address: 0x002CE6DC   size: 0x2 (2 bytes)
//======================================================================
void __fastcall BlockScene::onRender(BlockScene *this, Ogre::SceneRenderer *a2)
{
  ;
}


//======================================================================
// BlockScene::getTerrainTile(void)
// address: 0x002CE6DE   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockScene::getTerrainTile(BlockScene *this)
{
  return 0;
}


//======================================================================
// BlockScene::pickObject(Ogre::IntersectType,Ogre::WorldRay const&,float *,unsigned int)
// address: 0x002CE6E2   size: 0x4 (4 bytes)
//======================================================================
int BlockScene::pickObject()
{
  return 0;
}


//======================================================================
// BlockScene::pickGround(Ogre::WorldRay const&,float *)
// address: 0x002CE6E6   size: 0x4 (4 bytes)
//======================================================================
int BlockScene::pickGround()
{
  return 0;
}


//======================================================================
// BlockScene::pickGround(int,int,int *,Ogre::Vector3 *,float *)
// address: 0x002CE6EA   size: 0x4 (4 bytes)
//======================================================================
int BlockScene::pickGround()
{
  return 0;
}


//======================================================================
// BlockScene::updateFocusArea(Ogre::WorldPos,float)
// address: 0x002CE6EE   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall BlockScene::updateFocusArea(_DWORD *result, int a2, int a3, int a4)
{
  result[11] = a2;
  result[12] = a3;
  result[13] = a4;
  return result;
}


//======================================================================
// BlockScene::getShaderEnvData(Ogre::ShaderEnvData &)
// address: 0x002CE6FA   size: 0x34 (52 bytes)
//======================================================================
int __fastcall BlockScene::getShaderEnvData(BlockScene *this, Ogre::ShaderEnvData *a2)
{
  int v2; // r5
  int v3; // r4
  int v4; // r2
  int v5; // r5
  int v6; // r4
  int v7; // r2
  int v8; // r3
  _DWORD *v10; // r1

  v2 = *((_DWORD *)this + 23);
  v3 = *((_DWORD *)this + 24);
  v4 = *((_DWORD *)this + 25);
  *((_DWORD *)a2 + 316) = *((_DWORD *)this + 22);
  *((_DWORD *)a2 + 317) = v2;
  *((_DWORD *)a2 + 318) = v3;
  *((_DWORD *)a2 + 319) = v4;
  v5 = *((_DWORD *)this + 26);
  v6 = *((_DWORD *)this + 27);
  v7 = *((_DWORD *)this + 28);
  v8 = *((_DWORD *)this + 29);
  *((_DWORD *)a2 + 320) = v5;
  v10 = (_DWORD *)((char *)a2 + 1280);
  v10[1] = v6;
  v10[2] = v7;
  v10[3] = v8;
  return 1280;
}


//======================================================================
// BlockScene::~BlockScene()
// address: 0x002CE7D0   size: 0x5C (92 bytes)
//======================================================================
// Alternative name is '_ZN10BlockSceneD1Ev'
void __fastcall BlockScene::~BlockScene(BlockScene *this)
{
  _DWORD **v1; // r5
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  void *v7; // r0

  v1 = *((_DWORD ***)this + 30);
  *(_DWORD *)this = &off_45FFC0;
  while ( v1 != *((_DWORD ***)this + 31) )
  {
    v3 = *v1++;
    Ogre::BaseObject::release(v3);
  }
  v4 = *((_DWORD **)this + 21);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)this + 21) = 0;
  }
  v5 = *((_DWORD **)this + 19);
  if ( v5 != nullptr )
  {
    Ogre::BaseObject::release(v5);
    *((_DWORD *)this + 19) = 0;
  }
  v6 = *((_DWORD **)this + 20);
  if ( v6 != nullptr )
  {
    Ogre::BaseObject::release(v6);
    *((_DWORD *)this + 20) = 0;
  }
  v7 = *((void **)this + 30);
  if ( v7 != nullptr )
    operator delete(v7);
  Ogre::GameScene::~GameScene(this);
}


//======================================================================
// BlockScene::~BlockScene()
// address: 0x002CE830   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockScene::~BlockScene(BlockScene *this)
{
  BlockScene::~BlockScene(this);
  operator delete(this);
}


//======================================================================
// BlockScene::setBackground(Ogre::RenderableObject *)
// address: 0x002CE984   size: 0x20 (32 bytes)
//======================================================================
int __fastcall BlockScene::setBackground(BlockScene *this, Ogre::RenderableObject *a2)
{
  _DWORD *v3; // r0
  int result; // r0

  v3 = *((_DWORD **)this + 21);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 21) = 0;
  }
  result = (*(int (__fastcall **)(Ogre::RenderableObject *))(*(_DWORD *)a2 + 4))(a2);
  *((_DWORD *)this + 21) = a2;
  return result;
}


//======================================================================
// BlockScene::setFogColor(Ogre::ColourValue const&)
// address: 0x002CE9A4   size: 0x12 (18 bytes)
//======================================================================
int __fastcall BlockScene::setFogColor(int a1, int *a2)
{
  int *v2; // r3
  int result; // r0
  int v4; // r4
  int v5; // r5

  v2 = (int *)(*(_DWORD *)(a1 + 80) + 216);
  result = *a2;
  v4 = a2[1];
  v5 = a2[2];
  *v2 = *a2;
  v2[1] = v4;
  v2[2] = v5;
  v2[3] = a2[3];
  return result;
}


//======================================================================
// BlockScene::setFogRange(int,int)
// address: 0x002CE9B8   size: 0x2C (44 bytes)
//======================================================================
float __fastcall BlockScene::setFogRange(BlockScene *this, int a2, int a3)
{
  float result; // r0

  *(float *)(*((_DWORD *)this + 20) + 236) = (float)a2 * 100.0;
  result = (float)a3 * 100.0;
  *(float *)(*((_DWORD *)this + 20) + 240) = result;
  return result;
}


//======================================================================
// BlockScene::BlockScene(World *)
// address: 0x002CE9E8   size: 0x114 (276 bytes)
//======================================================================
// Alternative name is '_ZN10BlockSceneC2EP5World'
void __fastcall BlockScene::BlockScene(BlockScene *this, World *a2)
{
  int v4; // r5
  int v5; // r1
  int v6; // r2
  int v7; // r12
  int v8; // r1
  int v9; // r2
  int v10; // r5

  Ogre::GameScene::GameScene(this);
  *(_DWORD *)this = &off_45FFC0;
  *((_DWORD *)this + 18) = a2;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 1065353216;
  *((_DWORD *)this + 23) = 1065353216;
  *((_DWORD *)this + 24) = 1065353216;
  *((_DWORD *)this + 25) = 1065353216;
  *((_DWORD *)this + 26) = 1065353216;
  *((_DWORD *)this + 27) = 1065353216;
  *((_DWORD *)this + 28) = 1065353216;
  *((_DWORD *)this + 29) = 1065353216;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  v4 = operator new(0x120u);
  Ogre::Light::Light(v4, 2);
  Ogre::Light::enableShadow((Ogre::Light *)v4);
  Ogre::Quaternion::setEulerAngle((Ogre::Quaternion *)(v4 + 20), 45.0, 45.0, 0.0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 64))(v4);
  *(_DWORD *)(v4 + 268) = 1065353216;
  *(_DWORD *)(v4 + 256) = 1056964608;
  *(_DWORD *)(v4 + 260) = 1056964608;
  *(_DWORD *)(v4 + 264) = 1056964608;
  v5 = *(_DWORD *)(v4 + 260);
  v6 = *(_DWORD *)(v4 + 264);
  *(_DWORD *)(v4 + 240) = *(_DWORD *)(v4 + 256);
  *(_DWORD *)(v4 + 244) = v5;
  *(_DWORD *)(v4 + 248) = v6;
  v7 = *(_DWORD *)(v4 + 268);
  v8 = *(_DWORD *)(v4 + 244);
  v9 = *(_DWORD *)(v4 + 248);
  *(_DWORD *)(v4 + 224) = *(_DWORD *)(v4 + 240);
  *(_DWORD *)(v4 + 228) = v8;
  *(_DWORD *)(v4 + 232) = v9;
  *(_DWORD *)(v4 + 236) = v7;
  *(_BYTE *)(v4 + 218) = 1;
  *(_DWORD *)(v4 + 240) = 1056964608;
  *(_DWORD *)(v4 + 244) = 1056964608;
  *(_DWORD *)(v4 + 248) = 1056964608;
  *(_DWORD *)(v4 + 252) = 1065353216;
  *(_BYTE *)(v4 + 217) = 1;
  *(_DWORD *)(v4 + 256) = 1065353216;
  *(_DWORD *)(v4 + 260) = 1065353216;
  *(_DWORD *)(v4 + 264) = 1065353216;
  *(_DWORD *)(v4 + 272) = 1082130432;
  *(_BYTE *)(v4 + 209) = 1;
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v4 + 40))(v4, 0);
  *((_DWORD *)this + 19) = v4;
  v10 = operator new(0xF4u);
  Ogre::FogEffect::FogEffect(v10, 0);
  *(_BYTE *)(v10 + 209) = 1;
  *((_DWORD *)this + 20) = v10;
  BlockScene::setFogRange(this, 48, 128);
  *((_DWORD *)this + 26) = 1065353216;
  *((_DWORD *)this + 27) = 1056964608;
  *((_DWORD *)this + 28) = 1045220557;
  *((_DWORD *)this + 29) = 1065353216;
}


//======================================================================
// BlockScene::setSkyLightColor(Ogre::ColourValue const&)
// address: 0x002CEB28   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall BlockScene::setSkyLightColor(int a1, _DWORD *a2)
{
  _DWORD *v2; // r0
  int v3; // r3
  int v4; // r4
  _DWORD *result; // r0

  v2 = (_DWORD *)(a1 + 88);
  v3 = a2[1];
  v4 = a2[2];
  *v2 = *a2;
  v2[1] = v3;
  v2[2] = v4;
  result = v2 + 3;
  *result = a2[3];
  return result;
}


//======================================================================
// BlockScene::setSkyLightDir(Ogre::Vector3 const&)
// address: 0x002CEB38   size: 0x32 (50 bytes)
//======================================================================
int __fastcall BlockScene::setSkyLightDir(Ogre::Light **this, const Ogre::Vector3 *a2)
{
  int result; // r0
  int v4; // r3
  int v5; // r5
  unsigned int v6; // r1

  result = Ogre::Light::setDirection(*(this + 19), a2);
  v4 = Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton;
  if ( Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton != 0 )
  {
    v5 = *((_DWORD *)a2 + 2);
    v6 = *((_DWORD *)a2 + 1) + 0x80000000;
    result = *(_DWORD *)a2 + 0x80000000;
    *(_DWORD *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 72) = result;
    *(_DWORD *)(v4 + 76) = v6;
    *(_DWORD *)(v4 + 80) = v5 + 0x80000000;
  }
  return result;
}


//======================================================================
// BlockScene::setTorchLightColor(Ogre::ColourValue const&)
// address: 0x002CEB70   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall BlockScene::setTorchLightColor(int a1, _DWORD *a2)
{
  _DWORD *v2; // r0
  int v3; // r3
  int v4; // r4
  _DWORD *result; // r0

  v2 = (_DWORD *)(a1 + 104);
  v3 = a2[1];
  v4 = a2[2];
  *v2 = *a2;
  v2[1] = v3;
  v2[2] = v4;
  result = v2 + 3;
  *result = a2[3];
  return result;
}


//======================================================================
// BlockScene::setAmbientColor(Ogre::ColourValue const&)
// address: 0x002CEB7E   size: 0x12 (18 bytes)
//======================================================================
int __fastcall BlockScene::setAmbientColor(int a1, int *a2)
{
  int *v2; // r3
  int result; // r0
  int v4; // r4
  int v5; // r5

  v2 = (int *)(*(_DWORD *)(a1 + 76) + 240);
  result = *a2;
  v4 = a2[1];
  v5 = a2[2];
  *v2 = *a2;
  v2[1] = v4;
  v2[2] = v5;
  v2[3] = a2[3];
  return result;
}


//======================================================================
// BlockScene::beginOneFrame(void)
// address: 0x002CEB90   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall BlockScene::beginOneFrame(_DWORD *this)
{
  *(this + 14) = 0;
  *(this + 15) = 0;
  *(this + 16) = 0;
  *(this + 17) = 0;
  return this;
}


//======================================================================
// BlockScene::onCullForMinimap(Ogre::Camera *,WCoord const&,int)
// address: 0x002CEB9C   size: 0x10A (266 bytes)
//======================================================================
void __fastcall BlockScene::onCullForMinimap(BlockScene *this, Ogre::Camera *a2, const WCoord *a3, int a4)
{
  int v4; // r5
  int v5; // r6
  int i; // r6
  Chunk *Chunk; // r0
  int v10; // r5
  int v11; // r4
  Ogre::MovableObject **v12; // r2
  int v13; // [sp+8h] [bp-2Ch]
  signed int v14; // [sp+8h] [bp-2Ch]
  int v16; // [sp+Ch] [bp-28h]
  Chunk *v17; // [sp+10h] [bp-24h]
  int v18; // [sp+14h] [bp-20h]
  Ogre::CullResult *v19; // [sp+18h] [bp-1Ch]
  unsigned int v20; // [sp+1Ch] [bp-18h]
  signed int v21; // [sp+20h] [bp-14h]
  signed int v22; // [sp+24h] [bp-10h]

  v4 = *(_DWORD *)a3;
  v5 = *((_DWORD *)a3 + 2);
  v13 = v5 - a4;
  v20 = BlockDivSection(*(_DWORD *)a3 - a4);
  v14 = BlockDivSection(v13);
  v21 = BlockDivSection(v4 + a4);
  v22 = BlockDivSection(v5 + a4);
  v18 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)this + 18) + 124) + 32))(*(_DWORD *)(*((_DWORD *)this + 18) + 124))
      / 16;
  v19 = *((Ogre::CullResult **)a2 + 53);
  v16 = 0;
  while ( v14 <= v22 )
  {
    for ( i = v20; i <= v21; ++i )
    {
      Chunk = (Chunk *)World::getChunk(*((_DWORD *)this + 18), i, v14);
      v17 = Chunk;
      if ( Chunk != nullptr )
      {
        v10 = Chunk::getTopFilledSegment(Chunk) / 16;
        if ( v10 > v18 )
          v10 = v18;
        while ( v10 >= 0 )
        {
          v11 = *((_DWORD *)v17 + v10 + 342);
          if ( *(_WORD *)(v11 + 34) != 0 )
          {
            if ( *(_BYTE *)(v11 + 42) != 0 )
              Section::genConnectGraph(*((Section **)v17 + v10 + 342));
            if ( *(_BYTE *)(v11 + 41) != 0 && v16 <= 1 )
            {
              ClientSection::createMinimapMesh((ClientSection *)v11);
              ++v16;
            }
            v12 = *(Ogre::MovableObject ***)(v11 + 60);
            if ( v12 != nullptr )
              Ogre::CullResult::addRenderable(v19, this, v12, 0, nullptr);
            if ( (((int)*(unsigned __int16 *)(v11 + 32) >> dword_468A34) & 1) == 0 )
              break;
          }
          --v10;
        }
      }
    }
    ++v14;
  }
}


//======================================================================
// BlockScene::getEffectObjects(std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>> &,Ogre::RenderableObject *)
// address: 0x002CF0D0   size: 0x2A (42 bytes)
//======================================================================
__int64 __fastcall BlockScene::getEffectObjects(__int64 a1, int a2)
{
  int v2; // r5
  int v3; // r7
  __int64 v5; // [sp+0h] [bp-Ch] BYREF
  int v6; // [sp+8h] [bp-4h]

  v5 = a1;
  v6 = a2;
  v2 = HIDWORD(a1);
  v3 = a1;
  LODWORD(v5) = *(_DWORD *)(a1 + 76);
  HIDWORD(v5) = 1065353216;
  std::vector<Ogre::RenderableEffectInfo>::push_back(SHIDWORD(a1), &v5);
  LODWORD(v5) = *(_DWORD *)(v3 + 80);
  HIDWORD(v5) = 1065353216;
  std::vector<Ogre::RenderableEffectInfo>::push_back(v2, &v5);
  return v5;
}


//======================================================================
// BlockScene::onDetachObject(Ogre::MovableObject *)
// address: 0x002CF4AE   size: 0x34 (52 bytes)
//======================================================================
Ogre::MovableObject *__fastcall BlockScene::onDetachObject(Ogre::MovableObject *this, Ogre::MovableObject *a2)
{
  _DWORD *v2; // r2
  _DWORD *v3; // r3
  Ogre::MovableObject *v4; // r4
  _DWORD *v5; // r5
  int v6; // r1

  v2 = *((_DWORD **)this + 31);
  v3 = *((_DWORD **)this + 30);
  v4 = this;
  while ( 1 )
  {
    v5 = v3;
    if ( v3 == v2 )
      break;
    this = (Ogre::MovableObject *)*v3++;
    if ( this == a2 )
    {
      Ogre::BaseObject::release(a2);
      v6 = *((_DWORD *)v4 + 31);
      this = (Ogre::MovableObject *)(v5 + 1);
      if ( v5 + 1 != (_DWORD *)v6 )
        this = (Ogre::MovableObject *)std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<Ogre::RenderableObject *>(
                                        this,
                                        v6,
                                        v5);
      *((_DWORD *)v4 + 31) -= 4;
      return this;
    }
  }
  return this;
}


//======================================================================
// BlockScene::onAttachObject(Ogre::MovableObject *)
// address: 0x002CF4E2   size: 0x34 (52 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> BlockScene::onAttachObject(BlockScene *this, Ogre::MovableObject *a2, int a3)
{
  _DWORD *v5; // r3
  _DWORD *v6; // r2
  _DWORD v7[2]; // [sp+4h] [bp-8h] BYREF

  v7[1] = a3;
  (*(void (__fastcall **)(Ogre::MovableObject *))(*(_DWORD *)a2 + 4))(a2);
  v5 = *((_DWORD **)this + 31);
  v6 = *((_DWORD **)this + 32);
  v7[0] = a2;
  if ( v5 == v6 )
  {
    std::vector<Ogre::RenderableObject *>::_M_emplace_back_aux<Ogre::RenderableObject *>((int)this + 120, v7);
  }
  else
  {
    if ( v5 != nullptr )
      *v5 = a2;
    *((_DWORD *)this + 31) += 4;
  }
}


//======================================================================
// BlockScene::onCull(Ogre::Camera *,Ogre::RenderUsage)
// address: 0x002D035C   size: 0x110 (272 bytes)
//======================================================================
void __fastcall BlockScene::onCull(Ogre::Timer *a1, Ogre::CullResult **a2)
{
  int v4; // r2
  const Ogre::Vector3 *v5; // r2
  _BYTE *v6; // r7
  int i; // [sp+Ch] [bp-230h]
  _BYTE v8[548]; // [sp+18h] [bp-224h] BYREF

  Ogre::Timer::getSystemTick(a1, (__suseconds_t)a2);
  Ogre::CullFrustum::CullFrustum((int)v8);
  (*((void (__fastcall **)(Ogre::CullResult **, _DWORD))*a2 + 10))(a2, 0);
  Ogre::CullResult::startCull(a2[53], (Ogre::Camera *)a2);
  Ogre::Camera::getCullFrustum((Ogre::Camera *)a2, (Ogre::CullFrustum *)v8);
  v4 = *((_DWORD *)a1 + 21);
  if ( v4 != 0 && *(_BYTE *)(v4 + 183) != 0 )
    Ogre::CullResult::addRenderable(a2[53], a1, (Ogre::MovableObject **)v4, 0, nullptr);
  *((_DWORD *)a1 + 15) = (*((_DWORD *)a1 + 31) - *((_DWORD *)a1 + 30)) >> 2;
  for ( i = 0; i < *((_DWORD *)a1 + 15); ++i )
  {
    v5 = *((const Ogre::Vector3 **)a1 + 30);
    v6 = *((_BYTE **)v5 + i);
    if ( v6[183] != 0 )
    {
      if ( v6[180] != 0 )
        (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v6 + 68))(v6);
      if ( Ogre::CullFrustum::cull((Ogre::CullFrustum *)v8, (const Ogre::BoxSphereBound *)(v6 + 140), v5) != 1 )
      {
        Ogre::CullResult::addRenderable(
          a2[53],
          a1,
          *(Ogre::MovableObject ***)(*((_DWORD *)a1 + 30) + 4 * i),
          2,
          nullptr);
        ++*((_DWORD *)a1 + 17);
      }
    }
  }
  *((_DWORD *)a1 + 14) = 16 * ((*(_DWORD *)(*((_DWORD *)a1 + 18) + 36) - *(_DWORD *)(*((_DWORD *)a1 + 18) + 32)) >> 2);
  *((_DWORD *)a1 + 16) += SectionCuller::doCull((unsigned int)&unk_517078, (int)a2, a1);
  GenRandomInt(0x14u);
  Ogre::CullFrustum::~CullFrustum((Ogre::CullFrustum *)v8);
}

