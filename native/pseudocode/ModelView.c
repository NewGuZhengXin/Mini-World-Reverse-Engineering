// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ModelView

//======================================================================
// ModelView::GetTypeName(void)
// address: 0x001BFE2C   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall ModelView::GetTypeName(ModelView *this)
{
  return "ModelView";
}


//======================================================================
// ModelView::~ModelView()
// address: 0x001BFE38   size: 0x9E (158 bytes)
//======================================================================
// Alternative name is '_ZN9ModelViewD1Ev'
void __fastcall ModelView::~ModelView(ModelView *this)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  int i; // r5
  _DWORD **v7; // r6
  unsigned int j; // r5
  _DWORD *v9; // r0
  _DWORD *v10; // r0

  v1 = (_DWORD *)((char *)this + 236);
  *(_DWORD *)this = &off_459120;
  v3 = *((_DWORD **)this + 59);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *v1 = 0;
  }
  v4 = *((_DWORD **)this + 57);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)this + 57) = 0;
  }
  v5 = *((_DWORD **)this + 58);
  if ( v5 != nullptr )
  {
    Ogre::BaseObject::release(v5);
    *((_DWORD *)this + 58) = 0;
  }
  for ( i = 0; i != 160; i += 32 )
  {
    v7 = (_DWORD **)((char *)this + i + 240);
    if ( *v7 != nullptr )
    {
      Ogre::BaseObject::release(*v7);
      *v7 = nullptr;
    }
  }
  for ( j = 0; ; ++j )
  {
    v9 = *((_DWORD **)this + 102);
    if ( j >= (*((_DWORD *)this + 103) - (int)v9) >> 2 )
      break;
    v10 = (_DWORD *)v9[j];
    if ( v10 != nullptr )
    {
      Ogre::BaseObject::release(v10);
      *(_DWORD *)(*((_DWORD *)this + 102) + 4 * j) = 0;
    }
  }
  if ( v9 != nullptr )
    operator delete(v9);
  LayoutFrame::~LayoutFrame(this);
}


//======================================================================
// ModelView::~ModelView()
// address: 0x001BFEDC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ModelView::~ModelView(ModelView *this)
{
  ModelView::~ModelView(this);
  operator delete(this);
}


//======================================================================
// ModelView::ModelView(void)
// address: 0x001BFEFC   size: 0x14E (334 bytes)
//======================================================================
// Alternative name is '_ZN9ModelViewC2Ev'
void __fastcall ModelView::ModelView(ModelView *this)
{
  Ogre::Camera *v2; // r6
  Ogre::Camera *v3; // r4
  Ogre::SimpleGameScene *v4; // r4
  int v5; // r4
  ModelView *v6; // r3
  int i; // r1
  _DWORD v8[3]; // [sp+14h] [bp-40h] BYREF
  _DWORD v9[3]; // [sp+20h] [bp-34h] BYREF
  _DWORD v10[3]; // [sp+2Ch] [bp-28h] BYREF
  _DWORD v11[3]; // [sp+38h] [bp-1Ch] BYREF
  int v12; // [sp+44h] [bp-10h] BYREF
  int v13; // [sp+48h] [bp-Ch]
  int v14; // [sp+4Ch] [bp-8h]

  LayoutFrame::LayoutFrame(this);
  *(_DWORD *)this = &off_459120;
  *((_DWORD *)this + 57) = 0;
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 59) = 0;
  *((_DWORD *)this + 100) = -1;
  *((_DWORD *)this + 101) = -1;
  *((_DWORD *)this + 102) = 0;
  *((_DWORD *)this + 103) = 0;
  *((_DWORD *)this + 104) = 0;
  v2 = (Ogre::Camera *)operator new(0x268u);
  Ogre::Camera::Camera(v2);
  *((_DWORD *)this + 57) = v2;
  *((_DWORD *)v2 + 60) = 1114636288;
  v3 = *((Ogre::Camera **)this + 57);
  v9[0] = 0;
  v9[2] = -1017380864;
  v9[1] = 1120403456;
  Ogre::WorldPos::WorldPos(v8, (const Ogre::Vector3 *)v9);
  v11[1] = 1120403456;
  v11[2] = 0;
  v11[0] = 0;
  Ogre::WorldPos::WorldPos(v10, (const Ogre::Vector3 *)v11);
  v12 = 0;
  v14 = 0;
  v13 = 1065353216;
  Ogre::Camera::setLookAt(v3, (const Ogre::WorldPos *)v8, (const Ogre::WorldPos *)v10, (const Ogre::Vector3 *)&v12);
  v4 = (Ogre::SimpleGameScene *)operator new(0x5Cu);
  Ogre::SimpleGameScene::SimpleGameScene(v4);
  *((_DWORD *)this + 58) = v4;
  v5 = operator new(0x120u);
  Ogre::Light::Light(v5, 2);
  v12 = 1058262330;
  v13 = 1058262330;
  v14 = 1058262330;
  Ogre::Light::setDirection((Ogre::Light *)v5, (const Ogre::Vector3 *)&v12);
  *(_DWORD *)(v5 + 240) = 1065353216;
  *(_DWORD *)(v5 + 244) = 1065353216;
  *(_DWORD *)(v5 + 248) = 1065353216;
  *(_DWORD *)(v5 + 252) = 1065353216;
  *(_DWORD *)(v5 + 224) = 1065353216;
  *(_DWORD *)(v5 + 228) = 1065353216;
  *(_DWORD *)(v5 + 232) = 1065353216;
  *(_DWORD *)(v5 + 236) = 1065353216;
  *(_BYTE *)(v5 + 218) = 1;
  Ogre::Light::enableShadow((Ogre::Light *)v5);
  (*(void (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v5 + 48))(v5, *((_DWORD *)this + 58), 0);
  Ogre::BaseObject::release((_DWORD *)v5);
  v6 = this;
  for ( i = 5; i != 0; --i )
  {
    *((_DWORD *)v6 + 60) = 0;
    *((_BYTE *)v6 + 244) = 1;
    *((_DWORD *)v6 + 62) = -1;
    *((_DWORD *)v6 + 64) = 0;
    *((_DWORD *)v6 + 63) = 0;
    *((_DWORD *)v6 + 65) = 0;
    *((_DWORD *)v6 + 66) = 0;
    *((_DWORD *)v6 + 67) = 0;
    v6 = (ModelView *)((char *)v6 + 32);
  }
}


//======================================================================
// ModelView::CopyMembers(ModelView*)
// address: 0x001C0060   size: 0xC (12 bytes)
//======================================================================
LayoutFrame *__fastcall ModelView::CopyMembers(LayoutFrame *this, ModelView *a2)
{
  if ( a2 != nullptr )
    return (LayoutFrame *)LayoutFrame::CopyMembers(this, a2);
  return this;
}


//======================================================================
// ModelView::CreateClone(void)
// address: 0x001C006C   size: 0x1E (30 bytes)
//======================================================================
ModelView *__fastcall ModelView::CreateClone(ModelView *this)
{
  ModelView *v2; // r4

  v2 = (ModelView *)operator new(0x1A8u);
  ModelView::ModelView(v2);
  ModelView::CopyMembers(this, v2);
  return v2;
}


//======================================================================
// ModelView::calActorPos(int)
// address: 0x001C008A   size: 0x4A (74 bytes)
//======================================================================
ModelView *__fastcall ModelView::calActorPos(ModelView *this, int a2, int a3)
{
  int v3; // r3
  int v5; // r3
  int v6; // r5
  _DWORD v8[16]; // [sp+0h] [bp-40h] BYREF

  v3 = *(_DWORD *)(a2 + 32 * a3 + 248);
  if ( v3 < 0 )
  {
    *(_DWORD *)this = *(_DWORD *)(a2 + 32 * (a3 + 8) + 4);
    *((_DWORD *)this + 1) = *(_DWORD *)(a2 + 32 * (a3 + 8) + 8);
    *((_DWORD *)this + 2) = *(_DWORD *)(a2 + 32 * (a3 + 8) + 12);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *, _DWORD, int))(**(_DWORD **)(a2 + 236) + 60))(v8, *(_DWORD *)(a2 + 236), v3);
    v5 = v8[14];
    v6 = v8[12];
    *((_DWORD *)this + 1) = v8[13];
    *((_DWORD *)this + 2) = v5;
    *(_DWORD *)this = v6;
  }
  return this;
}


//======================================================================
// ModelView::UpdateSelf(float)
// address: 0x001C00D4   size: 0x108 (264 bytes)
//======================================================================
_BYTE *__fastcall ModelView::UpdateSelf(_BYTE *this, float a2)
{
  _DWORD *v2; // r4
  float *v3; // r7
  float *v4; // r6
  float v5; // r5
  float v6; // r0
  int v7; // r5
  int *v8; // r5
  int v9; // r3
  unsigned int j; // r5
  int v11; // r3
  int v12; // r0
  int i; // [sp+8h] [bp-24h]
  _DWORD v15[3]; // [sp+10h] [bp-1Ch] BYREF
  _BYTE v16[16]; // [sp+1Ch] [bp-10h] BYREF

  v2 = this;
  if ( *(this + 57) == 0 )
    return this;
  v3 = (float *)(this + 256);
  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)this + 52))(this);
  for ( i = 0; i != 5; ++i )
  {
    v4 = v3 - 4;
    if ( *((_DWORD *)v3 - 4) == 0 )
      goto LABEL_11;
    v5 = (float)(a2 * *(v3 - 1)) + *v3;
    if ( v5 < 0.0 )
    {
      v6 = v5 + 360.0;
LABEL_9:
      *v3 = v6;
      goto LABEL_10;
    }
    if ( v5 >= 360.0 )
    {
      v6 = v5 - 360.0;
      goto LABEL_9;
    }
    *v3 = v5;
LABEL_10:
    v7 = *(_DWORD *)v4;
    Ogre::Quaternion::setEulerAngle((Ogre::Quaternion *)(*(_DWORD *)v4 + 20), *v3, 0.0, 0.0);
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 64))(v7);
    v8 = *(int **)v4;
    ModelView::calActorPos((ModelView *)v16, (int)v2, i);
    Ogre::WorldPos::WorldPos(v15, (const Ogre::Vector3 *)v16);
    v8[2] = v15[0];
    v9 = *v8;
    v8[3] = v15[1];
    v8[4] = v15[2];
    (*(void (__fastcall **)(int *))(v9 + 64))(v8);
LABEL_11:
    v3 += 8;
  }
  this = (_BYTE *)v2[59];
  if ( this != nullptr )
    this = (_BYTE *)(*(int (__fastcall **)(_BYTE *, unsigned int))(*(_DWORD *)this + 40))(
                      this,
                      (unsigned int)(float)(a2 * 1000.0));
  for ( j = 0; ; ++j )
  {
    v11 = v2[102];
    if ( j >= (v2[103] - v11) >> 2 )
      break;
    v12 = *(_DWORD *)(4 * j + v11);
    this = (_BYTE *)(*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)v12 + 40))(
                      v12,
                      (unsigned int)(float)(a2 * 1000.0));
  }
  return this;
}


//======================================================================
// ModelView::getScene(void)
// address: 0x001C01E4   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ModelView::getScene(ModelView *this)
{
  return *((_DWORD *)this + 58);
}


//======================================================================
// ModelView::NormalDraw(void)
// address: 0x001C01EC   size: 0x98 (152 bytes)
//======================================================================
void __fastcall ModelView::NormalDraw(ModelView *this)
{
  int v1; // r7
  int v2; // r3
  int v4; // r5
  int v5; // r0
  int v6; // r5
  float v7; // r6
  int v8; // [sp+1Ch] [bp-8h]

  v1 = *((_DWORD *)this + 15);
  v8 = *((_DWORD *)this + 16);
  v2 = *((_DWORD *)this + 17);
  v4 = *((_DWORD *)this + 18);
  v5 = v2 - v1;
  if ( v2 != v1 )
  {
    v6 = v4 - v8;
    if ( v6 != 0 )
    {
      v7 = (float)v5;
      Ogre::Camera::setRatio(*((Ogre::Camera **)this + 57), (float)v5 / (float)v6);
      Ogre::Camera::setViewport(*((Ogre::Camera **)this + 57), (float)v1, (float)v8, v7, (float)v6, 0.0, 1.0);
      (*(void (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 57) + 40))(*((_DWORD *)this + 57), 0);
      (*(void (__fastcall **)(int))(*(_DWORD *)g_pDisplay + 104))(g_pDisplay);
      Ogre::UIRenderer::renderSceneToUI((int *)g_pDisplay, *((_DWORD *)this + 58), *((_DWORD *)this + 57));
    }
  }
}


//======================================================================
// ModelView::Draw(void)
// address: 0x001C0288   size: 0x14 (20 bytes)
//======================================================================
void __fastcall ModelView::Draw(ModelView *this)
{
  if ( *((int *)this + 17) > 0 && *((int *)this + 18) > 0 )
    ModelView::NormalDraw(this);
}


//======================================================================
// ModelView::setRootNode(Ogre::MovableObject *,int)
// address: 0x001C029C   size: 0x3E (62 bytes)
//======================================================================
unsigned __int64 __fastcall ModelView::setRootNode(ModelView *this, Ogre::MovableObject *a2, unsigned int a3)
{
  int v3; // r5
  _DWORD **v4; // r7
  unsigned __int64 v8; // [sp+0h] [bp-Ch]

  v8 = __PAIR64__(a3, (unsigned int)this);
  v3 = 32 * a3;
  v4 = (_DWORD **)((char *)this + 32 * a3 + 240);
  if ( *v4 != nullptr )
  {
    Ogre::BaseObject::release(*v4);
    *v4 = nullptr;
  }
  if ( a2 != nullptr )
  {
    (*(void (__fastcall **)(Ogre::MovableObject *))(*(_DWORD *)a2 + 4))(a2);
    *(_DWORD *)((char *)this + v3 + 240) = a2;
    (*(void (__fastcall **)(Ogre::MovableObject *, int))(*(_DWORD *)a2 + 40))(a2, 123 * HIDWORD(v8));
  }
  return v8;
}


//======================================================================
// ModelView::setRotateSpeed(float,int)
// address: 0x001C02DA   size: 0xA (10 bytes)
//======================================================================
float *__fastcall ModelView::setRotateSpeed(ModelView *this, float a2, int a3)
{
  float *result; // r0

  result = (float *)((char *)this + 32 * a3 + 248);
  result[1] = a2;
  return result;
}


//======================================================================
// ModelView::setActorCollide(bool,int)
// address: 0x001C02E4   size: 0xA (10 bytes)
//======================================================================
char *__fastcall ModelView::setActorCollide(ModelView *this, char a2, int a3)
{
  char *result; // r0

  result = (char *)this + 32 * a3 + 240;
  result[4] = a2;
  return result;
}


//======================================================================
// ModelView::setActorPosition(float,float,float,int)
// address: 0x001C02EE   size: 0x12 (18 bytes)
//======================================================================
float *__fastcall ModelView::setActorPosition(ModelView *this, float a2, float a3, float a4, int a5)
{
  float *result; // r0

  result = (float *)((char *)this + 32 * a5 + 256);
  result[1] = a2;
  result[2] = a3;
  result[3] = a4;
  return result;
}


//======================================================================
// ModelView::bindActorToAnchor(int,int)
// address: 0x001C0300   size: 0xA (10 bytes)
//======================================================================
_DWORD *__fastcall ModelView::bindActorToAnchor(ModelView *this, int a2, int a3)
{
  _DWORD *result; // r0

  result = (_DWORD *)((char *)this + 32 * a3 + 248);
  *result = a2;
  return result;
}


//======================================================================
// ModelView::setCameraLookAt(float,float,float,float,float,float)
// address: 0x001C030A   size: 0x4A (74 bytes)
//======================================================================
int __fastcall ModelView::setCameraLookAt(ModelView *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  Ogre::Camera *v7; // r6
  float v9[3]; // [sp+4h] [bp-3Ch] BYREF
  float v10[3]; // [sp+10h] [bp-30h] BYREF
  _DWORD v11[3]; // [sp+1Ch] [bp-24h] BYREF
  _DWORD v12[3]; // [sp+28h] [bp-18h] BYREF
  _DWORD v13[3]; // [sp+34h] [bp-Ch] BYREF

  v9[0] = a2;
  v7 = *((Ogre::Camera **)this + 57);
  v9[1] = a3;
  v9[2] = a4;
  Ogre::WorldPos::WorldPos(v12, (const Ogre::Vector3 *)v9);
  v10[0] = a5;
  v10[1] = a6;
  v10[2] = a7;
  Ogre::WorldPos::WorldPos(v13, (const Ogre::Vector3 *)v10);
  v11[0] = 0;
  v11[1] = 1065353216;
  v11[2] = 0;
  return Ogre::Camera::setLookAt(
           v7,
           (const Ogre::WorldPos *)v12,
           (const Ogre::WorldPos *)v13,
           (const Ogre::Vector3 *)v11);
}


//======================================================================
// ModelView::setCameraFov(float)
// address: 0x001C0354   size: 0xA (10 bytes)
//======================================================================
char *__fastcall ModelView::setCameraFov(ModelView *this, float a2)
{
  char *result; // r0

  result = (char *)this + 228;
  *(float *)(*(_DWORD *)result + 240) = a2;
  return result;
}


//======================================================================
// ModelView::setCameraWidthFov(float)
// address: 0x001C0360   size: 0x7C (124 bytes)
//======================================================================
float __fastcall ModelView::setCameraWidthFov(ModelView *this, float a2)
{
  float v3; // r0
  float v4; // r0
  float result; // r0

  v3 = j_tan((float)((float)(a2 * 0.5) * 0.017453));
  v4 = j_atan((float)(1.0 / (float)((float)((float)(1.0 / v3) * (float)DEFAULT_UI_HEIGHT) / (float)DEFAULT_UI_WIDTH)));
  result = v4 * 57.296;
  *(float *)(*((_DWORD *)this + 57) + 240) = result;
  return result;
}


//======================================================================
// ModelView::setBackground(char const*)
// address: 0x001C03EC   size: 0x78 (120 bytes)
//======================================================================
__int64 __fastcall ModelView::setBackground(__int64 this, int a2)
{
  Ogre::Model **v2; // r4
  int v3; // r6
  Ogre::FixedString *v4; // r5
  Ogre::ResourceManager *v5; // r7
  Ogre::ModelData *v6; // r5
  void *v7; // r1
  Ogre::Model *v8; // r7
  __int64 v10; // [sp+0h] [bp-Ch] BYREF
  int v11; // [sp+8h] [bp-4h]

  v10 = this;
  v11 = a2;
  v2 = (Ogre::Model **)(this + 236);
  v3 = this;
  LODWORD(this) = *(_DWORD *)(this + 236);
  v4 = (Ogre::FixedString *)HIDWORD(this);
  if ( (_DWORD)this != 0 )
  {
    Ogre::BaseObject::release((_DWORD *)this);
    *v2 = nullptr;
  }
  v5 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  HIDWORD(v10) = Ogre::FixedString::insert(
                   v4,
                   (const char *)0xFFFFFFFF,
                   a2,
                   (int)&Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton);
  v6 = (Ogre::ModelData *)Ogre::ResourceManager::blockLoad(v5, (Ogre::FixedString **)&v10 + 1, 0);
  Ogre::FixedString::release(SHIDWORD(v10), v7);
  if ( v6 != nullptr )
  {
    v8 = (Ogre::Model *)operator new(0x1C8u);
    Ogre::Model::Model(v8, v6);
    *v2 = v8;
    Ogre::Model::playAnim(v8, 0, 1.0, 1.0);
    (*(void (__fastcall **)(Ogre::Model *, _DWORD, _DWORD))(*(_DWORD *)*v2 + 48))(*v2, *(_DWORD *)(v3 + 232), 0);
    Ogre::BaseObject::release(v6);
  }
  return v10;
}


//======================================================================
// ModelView::getActorOnScreenPoint(int,int)
// address: 0x001C0468   size: 0x100 (256 bytes)
//======================================================================
int __fastcall ModelView::getActorOnScreenPoint(Ogre::Camera **this, int a2, int a3)
{
  Ogre::Camera **v7; // r5
  int v8; // r4
  float v9[3]; // [sp+14h] [bp-70h] BYREF
  float v10[3]; // [sp+20h] [bp-64h] BYREF
  float v11; // [sp+2Ch] [bp-58h] BYREF
  float v12; // [sp+30h] [bp-54h]
  float v13; // [sp+34h] [bp-50h]
  _DWORD v14[4]; // [sp+38h] [bp-4Ch] BYREF
  _BYTE v15[24]; // [sp+48h] [bp-3Ch] BYREF
  int v16; // [sp+60h] [bp-24h]
  _DWORD v17[8]; // [sp+64h] [bp-20h] BYREF

  LayoutFrame::GetAbsRect(this, v14);
  if ( a2 < v14[0] || a2 >= v14[2] || a3 < v14[1] || a3 >= v14[3] )
    return -1;
  v16 = 2139095039;
  Ogre::Camera::getViewRayByScreenPt(*(this + 57), (Ogre::WorldRay *)v15, (float)(a2 - v14[0]), (float)(a3 - v14[1]));
  v17[6] = 2139095039;
  v11 = 0.0;
  v12 = 0.0;
  v13 = 0.0;
  Ogre::WorldRay::getRelativeRay((Ogre::WorldRay *)v15, (Ogre::Ray *)v17, (const Ogre::WorldPos *)&v11);
  v7 = this;
  v8 = 0;
  while ( 1 )
  {
    if ( v7[60] != nullptr && *((_BYTE *)v7 + 244) != 0 )
    {
      ModelView::calActorPos((ModelView *)v9, (int)this, v8);
      v10[0] = v9[0] - 40.0;
      v10[1] = v9[1];
      v10[2] = v9[2] - 40.0;
      v11 = v9[0] + 40.0;
      v12 = v9[1] + 200.0;
      v13 = v9[2] + 40.0;
      if ( Ogre::Ray::intersectBox((Ogre::Ray *)v17, (const Ogre::Vector3 *)v10, (const Ogre::Vector3 *)&v11, nullptr) >= 0 )
        break;
    }
    ++v8;
    v7 += 8;
    if ( v8 == 5 )
      return -1;
  }
  return v8;
}


//======================================================================
// ModelView::playActorAnim(int,int)
// address: 0x001C0574   size: 0x52 (82 bytes)
//======================================================================
const void **__fastcall ModelView::playActorAnim(ModelView *this, int a2, int a3)
{
  const void **result; // r0
  const void *v4; // r5
  Ogre::Model *v6; // r0

  result = (const void **)((char *)this + 32 * a3 + 240);
  v4 = *result;
  if ( *result != nullptr )
  {
    v6 = (Ogre::Model *)_dynamic_cast(
                          *result,
                          (const struct __class_type_info *)&`typeinfo for'Ogre::MovableObject,
                          (const struct __class_type_info *)&`typeinfo for'Ogre::Model,
                          0);
    if ( v6 != nullptr )
    {
      return (const void **)Ogre::Model::playAnim(v6, a2, 1.0, 1.0);
    }
    else
    {
      result = (const void **)_dynamic_cast(
                                v4,
                                (const struct __class_type_info *)&`typeinfo for'Ogre::MovableObject,
                                (const struct __class_type_info *)&`typeinfo for'Ogre::Entity,
                                0);
      if ( result != nullptr )
        return (const void **)Ogre::Entity::playAnim((Ogre::Entity *)result, a2);
    }
  }
  return result;
}


//======================================================================
// ModelView::addBackgroundEffect(char const*,float,float,float)
// address: 0x001C06A0   size: 0xB6 (182 bytes)
//======================================================================
int __fastcall ModelView::addBackgroundEffect(ModelView *this, Ogre::FixedString *a2, int a3, float a4, float a5)
{
  Ogre::ResourceManager *v6; // r5
  Ogre::ModelData **v7; // r5
  void *v8; // r1
  __int64 v9; // r0
  Ogre::FixedString **v10; // r6
  Ogre::FixedString *v11; // r3
  Ogre::FixedString **v15; // [sp+Ch] [bp-20h] BYREF
  float v16[3]; // [sp+10h] [bp-1Ch] BYREF
  Ogre::FixedString *v17[4]; // [sp+1Ch] [bp-10h] BYREF

  v6 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  v17[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                  a2,
                                  (const char *)0xFFFFFFFF,
                                  a3,
                                  (int)&Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton);
  v7 = (Ogre::ModelData **)Ogre::ResourceManager::blockLoad(v6, v17, 0);
  LODWORD(v9) = Ogre::FixedString::release((int)v17[0], v8);
  if ( v7 != nullptr )
  {
    v10 = (Ogre::FixedString **)operator new(0x210u);
    Ogre::Entity::Entity((Ogre::Entity *)v10);
    v15 = v10;
    Ogre::Entity::load((Ogre::Entity *)v10, v7);
    Ogre::BaseObject::release(v7);
    LODWORD(v16[0]) = a3;
    v16[1] = a4;
    v16[2] = a5;
    Ogre::WorldPos::WorldPos(v17, (const Ogre::Vector3 *)v16);
    v10[2] = v17[0];
    v10[3] = v17[1];
    v11 = *v10;
    v10[4] = v17[2];
    (*((void (__fastcall **)(Ogre::FixedString **))v11 + 16))(v10);
    (*((void (__fastcall **)(Ogre::FixedString **, _DWORD, _DWORD))*v15 + 12))(v15, *((_DWORD *)this + 58), 0);
    LODWORD(v9) = (char *)this + 408;
    HIDWORD(v9) = *((_DWORD *)this + 103);
    if ( HIDWORD(v9) == *((_DWORD *)this + 104) )
    {
      LODWORD(v9) = std::vector<Ogre::Entity *>::_M_insert_aux(v9, &v15);
    }
    else
    {
      if ( HIDWORD(v9) != 0 )
        *(_DWORD *)HIDWORD(v9) = v15;
      *((_DWORD *)this + 103) += 4;
    }
  }
  return v9;
}

