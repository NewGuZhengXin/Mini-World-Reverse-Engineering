// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: CameraModel

//======================================================================
// CameraModel::CameraModel(int)
// address: 0x002DC420   size: 0x7C (124 bytes)
//======================================================================
// Alternative name is '_ZN11CameraModelC2Ei'
void __fastcall CameraModel::CameraModel(CameraModel *this, int a2)
{
  Ogre::Model *Model; // r0
  char s[256]; // [sp+4h] [bp-104h] BYREF

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 12) = 1;
  j_sprintf(s, "entity/player/player%.2d/hand.omod", a2);
  Model = BlockMaterialMgr::getModel(
            (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
            (Ogre::FixedString *)s,
            (Ogre::FixedString *)"entity/player/hand.oanim");
  *(_DWORD *)this = Model;
  *((_DWORD *)Model + 108) = 1065353216;
  Model = (Ogre::Model *)((char *)Model + 432);
  *((_DWORD *)Model + 2) = 0;
  *((_DWORD *)Model + 3) = 0;
  *((_DWORD *)Model + 1) = 1065353216;
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)this + 92))(*(_DWORD *)this, 3);
  Ogre::Model::playAnim(*(Ogre::Model **)this, 101100, 1.0, 1.0);
}


//======================================================================
// CameraModel::~CameraModel()
// address: 0x002DC4B0   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN11CameraModelD2Ev'
void __fastcall CameraModel::~CameraModel(CameraModel *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0

  v2 = *(_DWORD **)this;
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *(_DWORD *)this = 0;
  }
  v3 = *((_DWORD **)this + 1);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 1) = 0;
  }
}


//======================================================================
// CameraModel::onEnterWorld(World *)
// address: 0x002DC4D4   size: 0x2A (42 bytes)
//======================================================================
int __fastcall CameraModel::onEnterWorld(CameraModel *this, World *a2)
{
  int result; // r0

  *((_DWORD *)this + 2) = a2;
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)this + 48))(*(_DWORD *)this, *((_DWORD *)a2 + 60), 0);
  result = *((_DWORD *)this + 1);
  if ( result != 0 )
    return (*(int (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)result + 48))(
             result,
             *(_DWORD *)(*((_DWORD *)this + 2) + 240),
             0);
  return result;
}


//======================================================================
// CameraModel::onLeaveWorld(void)
// address: 0x002DC4FE   size: 0x1E (30 bytes)
//======================================================================
int __fastcall CameraModel::onLeaveWorld(CameraModel *this)
{
  int result; // r0

  *((_DWORD *)this + 2) = 0;
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)this + 52))(*(_DWORD *)this);
  result = *((_DWORD *)this + 1);
  if ( result != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 52))(result);
  return result;
}


//======================================================================
// CameraModel::playHandAnim(int)
// address: 0x002DC51C   size: 0x10 (16 bytes)
//======================================================================
int __fastcall CameraModel::playHandAnim(Ogre::Model **this, int a2)
{
  return Ogre::Model::playAnim(*this, a2, 1.0, 1.0);
}


//======================================================================
// CameraModel::onEvent(ActorEvent const&)
// address: 0x002DC52C   size: 0x5C (92 bytes)
//======================================================================
Ogre::AnimationPlayer *__fastcall CameraModel::onEvent(Ogre::AnimationPlayer *result, float *a2)
{
  float v2; // r3
  int v3; // r3
  Ogre::Model *v4; // r0
  int v5; // r1

  v2 = *a2;
  if ( *(_DWORD *)a2 == 4 )
  {
    v3 = *((unsigned __int8 *)a2 + 4);
    v4 = *(Ogre::Model **)result;
    v5 = 101105;
    if ( v3 == 0 )
      return Ogre::Model::stopAnim(v4, 101105);
    return (Ogre::AnimationPlayer *)Ogre::Model::playAnim(v4, v5, 1.0, 1.0);
  }
  if ( LODWORD(v2) != 7 )
  {
    if ( LODWORD(v2) == 17 )
    {
      v4 = *(Ogre::Model **)result;
      v5 = 101110;
      return (Ogre::AnimationPlayer *)Ogre::Model::playAnim(v4, v5, 1.0, 1.0);
    }
    if ( LODWORD(v2) != 18 )
      return result;
  }
  else if ( a2[2] != 0.0 || a2[3] != 0.0 )
  {
    v4 = *(Ogre::Model **)result;
    v5 = 101101;
    return (Ogre::AnimationPlayer *)Ogre::Model::playAnim(v4, v5, 1.0, 1.0);
  }
  v4 = *(Ogre::Model **)result;
  v5 = 101100;
  return (Ogre::AnimationPlayer *)Ogre::Model::playAnim(v4, v5, 1.0, 1.0);
}


//======================================================================
// CameraModel::show(bool)
// address: 0x002DC598   size: 0x38 (56 bytes)
//======================================================================
int __fastcall CameraModel::show(int this, int a2)
{
  int v2; // r2
  int v3; // r3

  *(_BYTE *)(this + 12) = a2;
  if ( a2 != 0 )
  {
    v2 = *(_DWORD *)(this + 4);
    if ( v2 != 0 )
    {
      *(_BYTE *)(v2 + 183) = 1;
      *(_BYTE *)(*(_DWORD *)this + 183) = 0;
    }
    else
    {
      *(_BYTE *)(*(_DWORD *)this + 183) = 1;
    }
  }
  else
  {
    *(_BYTE *)(*(_DWORD *)this + 183) = 0;
    v3 = *(_DWORD *)(this + 4);
    if ( v3 != 0 )
      *(_BYTE *)(v3 + 183) = 0;
  }
  return this;
}


//======================================================================
// CameraModel::setCurTool(int,char const*,int,int const*)
// address: 0x002DC5D0   size: 0xC4 (196 bytes)
//======================================================================
__int64 __fastcall CameraModel::setCurTool(
        CameraModel *this,
        ClientItem *a2,
        const char *a3,
        ClientItem *a4,
        const int *a5)
{
  _DWORD *v6; // r0
  BlockMesh *ItemModel; // r0
  int *v10; // r0
  int v11; // r3
  int v12; // r5
  int v13; // r3
  __int64 v15; // [sp+0h] [bp-Ch]

  v15 = __PAIR64__((unsigned int)a4, (unsigned int)this);
  v6 = *((_DWORD **)this + 1);
  if ( v6 != nullptr )
  {
    a4 = (ClientItem *)v6[63];
    if ( a2 != a4 || a3 != nullptr )
    {
      if ( *((_DWORD *)this + 2) != 0 )
        (*(void (__fastcall **)(_DWORD *))(*v6 + 52))(v6);
      Ogre::BaseObject::release(*((_DWORD **)this + 1));
      a4 = nullptr;
      *((_DWORD *)this + 1) = 0;
    }
  }
  if ( (int)a2 > 0 )
  {
    if ( *((_DWORD *)this + 1) == 0 )
    {
      ItemModel = ClientItem::createItemModel(a2, a3, (const char *)0x3FC00000, *(float *)&a4);
      *((_DWORD *)this + 1) = ItemModel;
      *((_DWORD *)ItemModel + 63) = a2;
      if ( a2 == (ClientItem *)((char *)&stru_7F8.st_size + 2) )
      {
        v10 = *((int **)this + 1);
        v10[2] = 200;
        v10[3] = -100;
        v11 = *v10;
        v10[4] = 0;
        (*(void (**)(void))(v11 + 64))();
        v12 = *((_DWORD *)this + 1);
        Ogre::Quaternion::setEulerAngle((Ogre::Quaternion *)(v12 + 20), 70.0, 0.0, 15.0);
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 64))(v12);
        (*(void (__fastcall **)(_DWORD, int))(**((_DWORD **)this + 1) + 92))(*((_DWORD *)this + 1), 3);
      }
      v13 = *((_DWORD *)this + 2);
      if ( v13 != 0 )
        (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 1) + 48))(
          *((_DWORD *)this + 1),
          *(_DWORD *)(v13 + 240),
          0);
      Ogre::MovableObject::setSRTFather(*((Ogre::MovableObject **)this + 1), *(Ogre::MovableObject **)this, 101);
    }
    if ( v15 > 0 )
      (*(void (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 1) + 100))(*((_DWORD *)this + 1), 0);
  }
  CameraModel::show((int)this, *((unsigned __int8 *)this + 12));
  return v15;
}


//======================================================================
// CameraModel::update(float,Ogre::Vector3 const&,Ogre::Quaternion const&)
// address: 0x002DC6A0   size: 0x170 (368 bytes)
//======================================================================
int __fastcall CameraModel::update(CameraModel *this, float a2, const Ogre::Vector3 *a3, const Ogre::Quaternion *a4)
{
  float v6; // r1
  float v7; // r5
  float *v8; // r3
  float v9; // r1
  float v10; // r7
  float v11; // r5
  int *v12; // r0
  int *v13; // r1
  float v14; // r5
  int *v15; // r4
  int v16; // r3
  int result; // r0
  int *v18; // [sp+4h] [bp-58h]
  float v20; // [sp+Ch] [bp-50h]
  float v21; // [sp+10h] [bp-4Ch]
  float v22; // [sp+14h] [bp-48h]
  float v23; // [sp+1Ch] [bp-40h] BYREF
  float v24; // [sp+20h] [bp-3Ch]
  float v25; // [sp+24h] [bp-38h]
  float v26; // [sp+28h] [bp-34h] BYREF
  float v27; // [sp+2Ch] [bp-30h]
  float v28; // [sp+30h] [bp-2Ch]
  float v29; // [sp+34h] [bp-28h]
  float v30[3]; // [sp+38h] [bp-24h] BYREF
  float v31; // [sp+44h] [bp-18h]
  _DWORD v32[5]; // [sp+48h] [bp-14h] BYREF

  v6 = *((float *)a4 + 1);
  v7 = *((float *)a4 + 2);
  v26 = *(float *)a4;
  v27 = v6;
  v28 = v7;
  v29 = *((float *)a4 + 3);
  v23 = 30.0;
  v24 = 0.0;
  v25 = 50.0;
  Ogre::Quaternion::rotate(&v26, &v23, &v23);
  v20 = *(float *)a3 + v23;
  v21 = *((float *)a3 + 1) + v24;
  v22 = *((float *)a3 + 2) + v25;
  v18 = *(int **)this;
  v8 = (float *)(*(_DWORD *)this + 20);
  v9 = *(float *)(*(_DWORD *)this + 24);
  v10 = *(float *)(*(_DWORD *)this + 28);
  v30[0] = *v8;
  v30[1] = v9;
  v30[2] = v10;
  v31 = v8[3];
  v11 = (float)((float)((float)(v30[0] * v26) + (float)(v9 * v27)) + (float)(v10 * v28)) + (float)(v31 * v29);
  if ( v11 <= 0.99 )
  {
    memset(v32, 0, 12);
    v32[3] = 1065353216;
    v14 = (float)((float)(1.5 - v11) * a2) * 10.0;
    if ( v14 < 0.0 )
    {
      v14 = 0.0;
    }
    else if ( v14 > 1.0 )
    {
      v14 = 1.0;
    }
    Ogre::Quaternion::slerp((Ogre::Quaternion *)v32, (const Ogre::Quaternion *)v30, (const Ogre::Quaternion *)&v26, v14);
    v12 = *(int **)this;
    v13 = v32;
  }
  else
  {
    v12 = v18;
    v13 = (int *)&v26;
  }
  Ogre::MovableObject::setRotation(v12, v13);
  v15 = *(int **)this;
  *(_DWORD *)(*(_DWORD *)this + 8) = (int)(float)(v20 * 10.0);
  v15[3] = (int)(float)(v21 * 10.0);
  v16 = *v15;
  v15[4] = (int)(float)(v22 * 10.0);
  (*(void (__fastcall **)(int *))(v16 + 64))(v15);
  (*(void (__fastcall **)(_DWORD, unsigned int))(**(_DWORD **)this + 40))(
    *(_DWORD *)this,
    (unsigned int)(float)(a2 * 1000.0));
  result = *((_DWORD *)this + 1);
  if ( result != 0 )
  {
    (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)result + 40))(result, (unsigned int)(float)(a2 * 1000.0));
    return (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 1) + 68))(*((_DWORD *)this + 1));
  }
  return result;
}

