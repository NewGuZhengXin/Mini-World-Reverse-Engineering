// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: EffectParticle

//======================================================================
// EffectParticle::~EffectParticle()
// address: 0x00296E98   size: 0x3A (58 bytes)
//======================================================================
// Alternative name is '_ZN14EffectParticleD1Ev'
void __fastcall EffectParticle::~EffectParticle(EffectParticle *this)
{
  int v2; // r0
  _DWORD *v3; // r0
  int v4; // r3

  *(_DWORD *)this = &off_45C198;
  v2 = *((_DWORD *)this + 2);
  if ( v2 != 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 52))(v2);
    v3 = *((_DWORD **)this + 2);
    v4 = v3[1] - 1;
    v3[1] = v4;
    if ( v4 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v3 + 24))(v3);
  }
  *(_DWORD *)this = &off_45BF48;
}


//======================================================================
// EffectParticle::tick(void)
// address: 0x00296EDC   size: 0x18 (24 bytes)
//======================================================================
int __fastcall EffectParticle::tick(int this)
{
  int v1; // r3
  int v2; // r2

  v1 = *(_DWORD *)(this + 12);
  if ( v1 > 0 )
  {
    v2 = *(_DWORD *)(this + 16) + 1;
    *(_DWORD *)(this + 16) = v2;
    if ( v2 >= v1 )
      *(_BYTE *)(this + 4) = 1;
  }
  return this;
}


//======================================================================
// EffectParticle::update(float)
// address: 0x00296EF4   size: 0x20 (32 bytes)
//======================================================================
int __fastcall EffectParticle::update(int this, float a2)
{
  int v2; // r4

  v2 = *(_DWORD *)(this + 8);
  if ( v2 != 0 )
    return (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)v2 + 40))(v2, (unsigned int)(float)(a2 * 1000.0));
  return this;
}


//======================================================================
// EffectParticle::~EffectParticle()
// address: 0x00296F18   size: 0x12 (18 bytes)
//======================================================================
void __fastcall EffectParticle::~EffectParticle(EffectParticle *this)
{
  EffectParticle::~EffectParticle(this);
  operator delete(this);
}


//======================================================================
// EffectParticle::EffectParticle(World *,char const*,WCoord const&,int)
// address: 0x00296F2C   size: 0xC0 (192 bytes)
//======================================================================
// Alternative name is '_ZN14EffectParticleC2EP5WorldPKcRK6WCoordi'
void __fastcall EffectParticle::EffectParticle(
        EffectParticle *this,
        World *lpsrc,
        Ogre::FixedString *a3,
        const WCoord *a4,
        int a5)
{
  _DWORD *v7; // r7
  Ogre::Entity *v8; // r5
  int v9; // r2
  int v10; // r3
  void *v11; // r1
  _DWORD *v12; // r0
  int v13; // r2
  int v14; // r5
  Ogre::FixedString *v16; // [sp+Ch] [bp-8h] BYREF

  *((_BYTE *)this + 4) = 0;
  *(_DWORD *)this = &off_45C198;
  *((_DWORD *)this + 2) = 0;
  if ( lpsrc != nullptr )
  {
    v7 = _dynamic_cast(
           lpsrc,
           (const struct __class_type_info *)&`typeinfo for'World,
           (const struct __class_type_info *)&`typeinfo for'ClientWorld,
           0);
    if ( v7 != nullptr )
    {
      v8 = (Ogre::Entity *)operator new(0x210u);
      Ogre::Entity::Entity(v8);
      *((_DWORD *)this + 2) = v8;
      v16 = (Ogre::FixedString *)Ogre::FixedString::insert(a3, (const char *)0xFFFFFFFF, v9, v10);
      Ogre::Entity::load(v8, &v16, 1);
      Ogre::FixedString::release((int)v16, v11);
      v12 = *((_DWORD **)this + 2);
      v13 = 10 * *((_DWORD *)a4 + 2);
      v14 = *(_DWORD *)a4;
      v12[3] = 10 * *((_DWORD *)a4 + 1);
      v12[4] = v13;
      v12[2] = 10 * v14;
      (*(void (__fastcall **)(_DWORD *))(*v12 + 64))(v12);
      (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 2) + 48))(*((_DWORD *)this + 2), v7[60], 0);
    }
  }
  *((_DWORD *)this + 3) = a5;
  *((_DWORD *)this + 4) = 0;
}


//======================================================================
// EffectParticle::setRotation(float,float,float)
// address: 0x00296FFC   size: 0x1A (26 bytes)
//======================================================================
int __fastcall EffectParticle::setRotation(int this, float a2, float a3, float a4)
{
  int v4; // r4

  v4 = *(_DWORD *)(this + 8);
  if ( v4 != 0 )
  {
    Ogre::Quaternion::setEulerAngle((Ogre::Quaternion *)(v4 + 20), a2, a3, a4);
    return (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 64))(v4);
  }
  return this;
}

