// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::MovableObject

//======================================================================
// Ogre::MovableObject::enableUVMask(bool,bool)
// address: 0x001431C6   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::MovableObject::enableUVMask(Ogre::MovableObject *this, bool a2, bool a3)
{
  ;
}


//======================================================================
// Ogre::MovableObject::setLiuGuangTexture(Ogre::TextureData *)
// address: 0x001431C8   size: 0x2 (2 bytes)
//======================================================================
void Ogre::MovableObject::setLiuGuangTexture()
{
  ;
}


//======================================================================
// Ogre::MovableObject::setLiuGuangTexture(char const*)
// address: 0x001431CA   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::MovableObject::setLiuGuangTexture(Ogre::MovableObject *this, const char *a2)
{
  ;
}


//======================================================================
// Ogre::MovableObject::resetUpdate(bool,unsigned int)
// address: 0x001431CC   size: 0x6 (6 bytes)
//======================================================================
_BYTE *__fastcall Ogre::MovableObject::resetUpdate(Ogre::MovableObject *this, bool a2, unsigned int a3)
{
  _BYTE *result; // r0

  result = (char *)this + 184;
  *result = a2;
  return result;
}


//======================================================================
// Ogre::MovableObject::getWorldMatrix(void)
// address: 0x00143340   size: 0x1A (26 bytes)
//======================================================================
char *__fastcall Ogre::MovableObject::getWorldMatrix(Ogre::MovableObject *this)
{
  if ( *((_BYTE *)this + 180) != 0 )
    (*(void (__fastcall **)(Ogre::MovableObject *))(*(_DWORD *)this + 68))(this);
  return (char *)this + 48;
}


//======================================================================
// Ogre::MovableObject::getAnchorWorldMatrix(int)
// address: 0x0014335A   size: 0x16 (22 bytes)
//======================================================================
Ogre::MovableObject *__fastcall Ogre::MovableObject::getAnchorWorldMatrix(
        Ogre::MovableObject *this,
        Ogre::MovableObject *a2)
{
  char *WorldMatrix; // r0

  WorldMatrix = Ogre::MovableObject::getWorldMatrix(a2);
  Ogre::Matrix4::Matrix4(this, (const Ogre::Matrix4 *)WorldMatrix);
  return this;
}


//======================================================================
// Ogre::MovableObject::setPosition(Ogre::WorldPos const&)
// address: 0x00146CF0   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Ogre::MovableObject::setPosition(int *a1, int *a2)
{
  int v2; // r3

  a1[2] = *a2;
  a1[3] = a2[1];
  v2 = *a1;
  a1[4] = a2[2];
  return (*(int (**)(void))(v2 + 64))();
}


//======================================================================
// Ogre::MovableObject::getTransparent(void)
// address: 0x0014C5C2   size: 0x22 (34 bytes)
//======================================================================
float __fastcall Ogre::MovableObject::getTransparent(Ogre::MovableObject **this)
{
  float *v1; // r4

  v1 = (float *)(this + 47);
  if ( *(this + 44) != nullptr )
    return COERCE_FLOAT(Ogre::MovableObject::getTransparent(*(this + 44))) * *v1;
  else
    return *v1;
}


//======================================================================
// Ogre::MovableObject::setRotation(Ogre::Quaternion const&)
// address: 0x001602E4   size: 0x1A (26 bytes)
//======================================================================
int __fastcall Ogre::MovableObject::setRotation(int *a1, int *a2)
{
  int v2; // r3

  a1[5] = *a2;
  a1[6] = a2[1];
  a1[7] = a2[2];
  v2 = *a1;
  a1[8] = a2[3];
  return (*(int (**)(void))(v2 + 64))();
}


//======================================================================
// Ogre::MovableObject::getWorldBounds(void)
// address: 0x001820E2   size: 0x1A (26 bytes)
//======================================================================
char *__fastcall Ogre::MovableObject::getWorldBounds(Ogre::MovableObject *this)
{
  if ( *((_BYTE *)this + 180) != 0 )
    (*(void (__fastcall **)(Ogre::MovableObject *))(*(_DWORD *)this + 68))(this);
  return (char *)this + 140;
}


//======================================================================
// Ogre::MovableObject::getRTTI(void)const
// address: 0x00186618   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::MovableObject::getRTTI(Ogre::MovableObject *this)
{
  return &Ogre::MovableObject::m_RTTI;
}


//======================================================================
// Ogre::MovableObject::~MovableObject()
// address: 0x00186624   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13MovableObjectD1Ev'
void __fastcall Ogre::MovableObject::~MovableObject(Ogre::MovableObject *this)
{
  *(_DWORD *)this = &off_4559C0;
}


//======================================================================
// Ogre::MovableObject::invalidWorldCache(void)
// address: 0x00186634   size: 0xE (14 bytes)
//======================================================================
_BYTE *__fastcall Ogre::MovableObject::invalidWorldCache(Ogre::MovableObject *this)
{
  _BYTE *v1; // r2
  _BYTE *result; // r0

  v1 = (char *)this + 180;
  result = (char *)this + 181;
  *v1 = 1;
  *result = 1;
  return result;
}


//======================================================================
// Ogre::MovableObject::detachFromScene(void)
// address: 0x00186642   size: 0x28 (40 bytes)
//======================================================================
int __fastcall Ogre::MovableObject::detachFromScene(Ogre::MovableObject *this)
{
  _DWORD *v1; // r4
  int result; // r0
  _BYTE *v4; // r5

  v1 = (_DWORD *)((char *)this + 192);
  result = *((_DWORD *)this + 48);
  if ( result != 0 )
  {
    v4 = (char *)this + 182;
    if ( *((_BYTE *)this + 182) != 0 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 36))(result);
      *v4 = 0;
    }
    *v1 = 0;
  }
  return result;
}


//======================================================================
// Ogre::MovableObject::~MovableObject()
// address: 0x0018666A   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::MovableObject::~MovableObject(Ogre::MovableObject *this)
{
  Ogre::MovableObject::~MovableObject(this);
  operator delete(this);
}


//======================================================================
// Ogre::MovableObject::update(unsigned int)
// address: 0x0018667C   size: 0x2A (42 bytes)
//======================================================================
int __fastcall Ogre::MovableObject::update(int this, unsigned int a2)
{
  _BYTE *v2; // r4

  if ( *(_BYTE *)(this + 182) != 0 )
  {
    v2 = (_BYTE *)(this + 181);
    if ( *(_BYTE *)(this + 181) != 0 )
    {
      this = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(this + 192) + 40))(*(_DWORD *)(this + 192), this);
      *v2 = 0;
    }
  }
  return this;
}


//======================================================================
// Ogre::MovableObject::attachToScene(Ogre::GameScene *,bool)
// address: 0x001866A6   size: 0x24 (36 bytes)
//======================================================================
int __fastcall Ogre::MovableObject::attachToScene(int this, Ogre::GameScene *a2, int a3)
{
  int v3; // r4

  v3 = this;
  if ( a2 != nullptr )
  {
    *(_DWORD *)(this + 192) = a2;
    if ( a3 == 0 )
    {
      this = (*(int (__fastcall **)(Ogre::GameScene *, int))(*(_DWORD *)a2 + 32))(a2, this);
      *(_BYTE *)(v3 + 182) = 1;
    }
  }
  return this;
}


//======================================================================
// Ogre::MovableObject::intersectRay(Ogre::IntersectType,Ogre::Ray const&,float *)
// address: 0x001866CA   size: 0x2C (44 bytes)
//======================================================================
bool __fastcall Ogre::MovableObject::intersectRay(int a1, int a2, Ogre::Ray *a3)
{
  _BOOL4 result; // r0

  result = false;
  if ( a2 == 0 )
  {
    if ( *(_BYTE *)(a1 + 180) != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
    return Ogre::Ray::intersectBoxSphere(a3, (float *)(a1 + 140));
  }
  return result;
}


//======================================================================
// Ogre::MovableObject::updateWorldCache(void)
// address: 0x001866F8   size: 0xD2 (210 bytes)
//======================================================================
float __fastcall Ogre::MovableObject::updateWorldCache(Ogre::MovableObject *this)
{
  _BYTE *v2; // r0
  float v3; // r0
  float v4; // r0
  float v5; // r0
  float result; // r0
  float *v7; // r5
  float *v8; // r1
  Ogre::Matrix4 *v9; // r0
  float v10; // [sp+0h] [bp-4Ch]
  float v11; // [sp+4h] [bp-48h]
  float v12[17]; // [sp+8h] [bp-44h] BYREF

  v2 = *((_BYTE **)this + 42);
  if ( v2 != nullptr && v2[180] != 0 )
    (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v2 + 68))(v2);
  v3 = (double)(*((_DWORD *)this + 3) - dword_4C6B7C) / 10.0;
  v11 = v3;
  v4 = (double)(*((_DWORD *)this + 4) - dword_4C6B80) / 10.0;
  v10 = v4;
  v5 = (double)(*((_DWORD *)this + 2) - Ogre::WorldPos::m_Origin) / 10.0;
  v12[2] = v10;
  v12[0] = v5;
  v12[1] = v11;
  result = Ogre::Matrix4::makeSRTMatrix(
             (Ogre::MovableObject *)((char *)this + 48),
             (Ogre::MovableObject *)((char *)this + 36),
             (Ogre::MovableObject *)((char *)this + 20),
             (const Ogre::Vector3 *)v12);
  v7 = *((float **)this + 42);
  if ( v7 != nullptr )
  {
    if ( *((_DWORD *)this + 43) != 0 )
    {
      (*(void (__fastcall **)(float *, _DWORD))(*(_DWORD *)v7 + 60))(v12, *((_DWORD *)this + 42));
      v9 = (Ogre::MovableObject *)((char *)this + 48);
      v8 = v12;
    }
    else
    {
      if ( *((_BYTE *)v7 + 180) != 0 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 68))(*((_DWORD *)this + 42));
      v8 = v7 + 12;
      v9 = (Ogre::MovableObject *)((char *)this + 48);
    }
    result = Ogre::Matrix4::operator*=(v9, (int)v8);
  }
  *((_BYTE *)this + 180) = 0;
  return result;
}


//======================================================================
// Ogre::MovableObject::prepareFrame(void)
// address: 0x001867E0   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::MovableObject::prepareFrame(Ogre::MovableObject *this)
{
  ;
}


//======================================================================
// Ogre::MovableObject::MovableObject(void)
// address: 0x001867E4   size: 0x82 (130 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13MovableObjectC1Ev'
Ogre::MovableObject *__fastcall Ogre::MovableObject::MovableObject(Ogre::MovableObject *this)
{
  Ogre::Matrix4 *v3; // [sp+4h] [bp-8h]

  *(_DWORD *)this = &off_457DA8;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 1065353216;
  *((_DWORD *)this + 9) = 1065353216;
  *((_DWORD *)this + 10) = 1065353216;
  *((_DWORD *)this + 11) = 1065353216;
  *((_DWORD *)this + 1) = 1;
  v3 = (Ogre::MovableObject *)((char *)this + 48);
  Ogre::Matrix4::Matrix4((Ogre::MovableObject *)((char *)this + 48));
  *((_BYTE *)this + 136) = 0;
  *((_BYTE *)this + 184) = 0;
  *((_BYTE *)this + 182) = 0;
  *((_BYTE *)this + 180) = 1;
  *((_BYTE *)this + 181) = 1;
  *((_BYTE *)this + 183) = 1;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  Ogre::Matrix4::identity(v3);
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 47) = 1065353216;
  *((_BYTE *)this + 208) = 0;
  return this;
}


//======================================================================
// Ogre::MovableObject::setSRTFather(Ogre::MovableObject*,int)
// address: 0x0018686C   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::MovableObject::setSRTFather(Ogre::MovableObject *this, Ogre::MovableObject *a2, int a3)
{
  *((_DWORD *)this + 42) = a2;
  *((_DWORD *)this + 43) = a3;
  return (*(int (__fastcall **)(Ogre::MovableObject *))(*(_DWORD *)this + 64))(this);
}


//======================================================================
// Ogre::MovableObject::setRotation(float,float,float)
// address: 0x0019D54E   size: 0x14 (20 bytes)
//======================================================================
int __fastcall Ogre::MovableObject::setRotation(Ogre::MovableObject *this, float a2, float a3, float a4)
{
  Ogre::Quaternion::setEulerAngle((Ogre::MovableObject *)((char *)this + 20), a2, a3, a4);
  return (*(int (__fastcall **)(Ogre::MovableObject *))(*(_DWORD *)this + 64))(this);
}


//======================================================================
// Ogre::MovableObject::setScale(Ogre::Vector3 const&)
// address: 0x002BFBB4   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Ogre::MovableObject::setScale(int *a1, int *a2)
{
  int v2; // r3

  a1[9] = *a2;
  a1[10] = a2[1];
  v2 = *a1;
  a1[11] = a2[2];
  return (*(int (**)(void))(v2 + 64))();
}

