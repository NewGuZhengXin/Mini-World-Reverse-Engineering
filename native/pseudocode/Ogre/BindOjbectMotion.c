// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BindOjbectMotion

//======================================================================
// Ogre::BindOjbectMotion::StopObject(Ogre::Entity *)
// address: 0x0015FA62   size: 0x2 (2 bytes)
//======================================================================
void Ogre::BindOjbectMotion::StopObject()
{
  ;
}


//======================================================================
// Ogre::BindOjbectMotion::DelayStopObject(Ogre::Entity *,float)
// address: 0x0015FA64   size: 0x2 (2 bytes)
//======================================================================
void Ogre::BindOjbectMotion::DelayStopObject()
{
  ;
}


//======================================================================
// Ogre::BindOjbectMotion::UpdateData(float,Ogre::Entity *)
// address: 0x0015FA66   size: 0x2 (2 bytes)
//======================================================================
void Ogre::BindOjbectMotion::UpdateData()
{
  ;
}


//======================================================================
// Ogre::BindOjbectMotion::EndObject(Ogre::Entity *)
// address: 0x00160016   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall Ogre::BindOjbectMotion::EndObject(_DWORD *this, Ogre::Entity *a2)
{
  _DWORD *v2; // r4
  Ogre::MovableObject *v3; // r3

  v2 = this;
  if ( *(this + 1) == 1 )
  {
    v3 = *(Ogre::MovableObject **)(*(this + 23) + 8);
    if ( v3 != nullptr )
    {
      Ogre::Entity::unbindObject(a2, v3);
      this = Ogre::BaseObject::release(*(_DWORD **)(v2[23] + 8));
      *(_DWORD *)(v2[23] + 8) = 0;
    }
    v2[1] = 2;
  }
  return this;
}


//======================================================================
// Ogre::BindOjbectMotion::~BindOjbectMotion()
// address: 0x00160044   size: 0x40 (64 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16BindOjbectMotionD1Ev'
void __fastcall Ogre::BindOjbectMotion::~BindOjbectMotion(Ogre::BindOjbectMotion *this)
{
  _DWORD **v2; // r3
  _DWORD *v3; // r0

  *(_DWORD *)this = &off_456B08;
  v2 = *((_DWORD ***)this + 23);
  if ( v2 != nullptr )
  {
    if ( *v2 != nullptr )
      Ogre::BaseObject::release(*v2);
    v3 = *(_DWORD **)(*((_DWORD *)this + 23) + 8);
    if ( v3 != nullptr )
    {
      Ogre::BaseObject::release(v3);
      *(_DWORD *)(*((_DWORD *)this + 23) + 8) = 0;
    }
    operator delete(*((void **)this + 23));
  }
  Ogre::ObjectMotion::~ObjectMotion(this);
}


//======================================================================
// Ogre::BindOjbectMotion::~BindOjbectMotion()
// address: 0x00160088   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::BindOjbectMotion::~BindOjbectMotion(Ogre::BindOjbectMotion *this)
{
  Ogre::BindOjbectMotion::~BindOjbectMotion(this);
  operator delete(this);
}


//======================================================================
// Ogre::BindOjbectMotion::StartObject(Ogre::Entity *)
// address: 0x00160300   size: 0x94 (148 bytes)
//======================================================================
int __fastcall Ogre::BindOjbectMotion::StartObject(int this, Ogre::Entity *a2)
{
  int v2; // r5
  int *v3; // r4
  int v4; // r7
  int v5; // [sp+8h] [bp-Ch]

  v2 = this;
  if ( *(_DWORD *)(this + 4) == 0 )
  {
    this = Ogre::createObjectFromResource(**(Ogre ***)(this + 92), a2);
    v3 = (int *)this;
    if ( this != 0 )
    {
      v4 = (int)(float)(*(float *)(v2 + 68) * 10.0);
      v5 = (int)(float)(*(float *)(v2 + 72) * 10.0);
      *(_DWORD *)(this + 8) = (int)(float)(*(float *)(v2 + 64) * 10.0);
      *(_DWORD *)(this + 12) = v4;
      *(_DWORD *)(this + 16) = v5;
      (*(void (__fastcall **)(int))(*(_DWORD *)this + 64))(this);
      Ogre::MovableObject::setRotation(v3, (int *)(v2 + 76));
      Ogre::Entity::bindObject(a2, *(_DWORD *)(v2 + 60), (Ogre::MovableObject *)v3, 1, 0);
      *(_DWORD *)(*(_DWORD *)(v2 + 92) + 8) = v3;
      this = Ogre::BaseObject::isKindOf((Ogre::BaseObject *)v3, (const Ogre::RuntimeClass *)&Ogre::Model::m_RTTI);
      if ( this != 0 )
        this = Ogre::Model::playAnim((Ogre::Model *)v3, *(_DWORD *)(v2 + 96), 1.0, 1.0);
    }
    *(_DWORD *)(v2 + 4) = 1;
  }
  return this;
}


//======================================================================
// Ogre::BindOjbectMotion::InitObject(Ogre::Entity *)
// address: 0x00160CF2   size: 0x2C (44 bytes)
//======================================================================
int __fastcall Ogre::BindOjbectMotion::InitObject(int this, Ogre::Entity *a2)
{
  int v2; // r4
  int v3; // r3
  __int64 v4; // r0

  v2 = this;
  if ( *(_DWORD *)(this + 4) == 1 )
  {
    v3 = *(_DWORD *)(this + 92);
    if ( *(_DWORD *)(v3 + 8) != 0 )
    {
      LODWORD(v4) = (char *)a2 + 328;
      HIDWORD(v4) = v3 + 8;
      this = std::vector<Ogre::MovableObject *>::push_back(v4);
      *(_DWORD *)(*(_DWORD *)(v2 + 92) + 8) = 0;
    }
  }
  *(_DWORD *)(v2 + 4) = 0;
  return this;
}

