// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: PlayerLocoMotion

//======================================================================
// PlayerLocoMotion::isPlayerFlyMode(void)
// address: 0x002A443C   size: 0x6 (6 bytes)
//======================================================================
int __fastcall PlayerLocoMotion::isPlayerFlyMode(PlayerLocoMotion *this)
{
  return *((unsigned __int8 *)this + 184);
}


//======================================================================
// PlayerLocoMotion::~PlayerLocoMotion()
// address: 0x002A4444   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16PlayerLocoMotionD1Ev'
void __fastcall PlayerLocoMotion::~PlayerLocoMotion(PlayerLocoMotion *this)
{
  *(_DWORD *)this = &off_45CC60;
  LivingLocoMotion::~LivingLocoMotion(this);
}


//======================================================================
// PlayerLocoMotion::~PlayerLocoMotion()
// address: 0x002A4460   size: 0x12 (18 bytes)
//======================================================================
void __fastcall PlayerLocoMotion::~PlayerLocoMotion(PlayerLocoMotion *this)
{
  PlayerLocoMotion::~PlayerLocoMotion(this);
  operator delete(this);
}


//======================================================================
// PlayerLocoMotion::PlayerLocoMotion(ClientActor *)
// address: 0x002A4474   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN16PlayerLocoMotionC1EP11ClientActor'
void __fastcall PlayerLocoMotion::PlayerLocoMotion(PlayerLocoMotion *this, ClientActor *a2)
{
  LivingLocoMotion::LivingLocoMotion(this, a2);
  *(_DWORD *)this = &off_45CC60;
  *((_BYTE *)this + 184) = 0;
}


//======================================================================
// PlayerLocoMotion::tick(void)
// address: 0x002A4498   size: 0x246 (582 bytes)
//======================================================================
int __fastcall PlayerLocoMotion::tick(PlayerLocoMotion *this)
{
  int v2; // r4
  float v3; // r0
  ClientActor *v4; // r5
  float v5; // r0
  int result; // r0
  float v7; // r6
  double v8; // r4
  float v9; // r0
  float v10; // r0
  float v11; // r0
  unsigned int v12; // r0
  float v13; // r6
  int v14; // r4
  _BYTE *v15; // r4
  int v16; // r5
  float v17; // [sp+4h] [bp-40h]
  World *v18; // [sp+4h] [bp-40h]
  float v19; // [sp+8h] [bp-3Ch]
  float v20; // [sp+Ch] [bp-38h]
  unsigned int v21; // [sp+10h] [bp-34h]
  int v22; // [sp+14h] [bp-30h]
  float v23; // [sp+18h] [bp-2Ch]
  __int64 v24; // [sp+1Ch] [bp-28h]
  int v25; // [sp+28h] [bp-1Ch] BYREF
  unsigned int v26; // [sp+2Ch] [bp-18h]
  int v27; // [sp+30h] [bp-14h]
  _DWORD v28[4]; // [sp+34h] [bp-10h] BYREF

  LivingLocoMotion::tick(this);
  v2 = *(_DWORD *)(*((_DWORD *)this + 28) + 76);
  v3 = COERCE_FLOAT((*(int (__fastcall **)(int))(*(_DWORD *)v2 + 28))(v2));
  *((float *)this + 33) = v3;
  if ( *((_BYTE *)this + 128) != 0 )
    *((float *)this + 33) = v3 * 1.3;
  v4 = *((ClientActor **)this + 28);
  v5 = (*(float (__fastcall **)(int))(*(_DWORD *)v2 + 24))(v2);
  result = ClientActor::setAIMoveSpeed(v4, v5);
  if ( *((_BYTE *)this + 124) != 0 && *((_BYTE *)this + 184) == 0 )
  {
    v7 = *((float *)this + 37);
    if ( v7 != 0.0 || (result = *((float *)this + 38) == 0.0, *((float *)this + 38) != 0.0) )
    {
      v8 = (float)(*((float *)this + 1) * 0.017453);
      v9 = j_sin(v8);
      v20 = v9;
      v10 = j_cos(v8);
      LODWORD(v19) = LODWORD(v10) + 0x80000000;
      v17 = (float)*((int *)this + 5) + (float)*((int *)this + 5);
      v11 = j_sqrt((float)((float)(v7 * v7) + (float)(*((float *)this + 38) * *((float *)this + 38))));
      HIDWORD(v8) = *((_DWORD *)this + 37);
      v23 = v17 / v11;
      v22 = *((_DWORD *)this + 8);
      v18 = *(World **)(*((_DWORD *)this + 28) + 52);
      LODWORD(v24) = CoordDivBlock(v22);
      v12 = CoordDivBlock(*((_DWORD *)this + 9));
      v13 = *((float *)this + 38);
      LODWORD(v8) = *((_DWORD *)this + 10);
      v21 = v12;
      HIDWORD(v24) = CoordDivBlock(SLODWORD(v8));
      LODWORD(v8) += (int)(float)((float)((float)(*((float *)&v8 + 1) * v19) + (float)(v13 * v20)) * v23);
      HIDWORD(v8) = CoordDivBlock(
                      v22
                    + (int)(float)((float)((float)(*((float *)&v8 + 1) * COERCE_FLOAT(LODWORD(v20) + 0x80000000))
                                         + (float)(v13 * v19))
                                 * v23));
      result = CoordDivBlock(SLODWORD(v8));
      v25 = HIDWORD(v8);
      v26 = v21;
      v27 = result;
      if ( __PAIR64__(result, HIDWORD(v8)) != v24 )
      {
        result = World::getBlockID(v18, (const WCoord *)&v25);
        if ( result != 0 )
        {
          result = BlockMaterialMgr::getMaterial(
                     (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                     result);
          v14 = *(_DWORD *)(*(_DWORD *)(result + 36) + 12);
          if ( v14 == 1 )
          {
            result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 60))(result);
            v16 = result;
            if ( result != 0 )
            {
              while ( 1 )
              {
                v28[0] = v25;
                v28[1] = v14 + v26;
                v28[2] = v27;
                result = World::getBlockID(v18, (const WCoord *)v28);
                if ( result > 0 )
                {
                  result = DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, result);
                  if ( *(_DWORD *)(result + 12) == 1 )
                    break;
                }
                if ( ++v14 == 3 )
                {
                  if ( v16 != 0 )
                    result = LivingLocoMotion::doJump(this);
                  break;
                }
              }
            }
          }
        }
      }
    }
  }
  v15 = (char *)this + 184;
  if ( *((_BYTE *)this + 124) != 0 )
  {
    result = *((float *)this + 19) <= 0.0;
    if ( *((float *)this + 19) <= 0.0 && *v15 != 0 )
    {
      *v15 = 0;
      if ( *((_DWORD *)this + 28) == g_pPlayerCtrl )
        result = GameEventQue::postSimpleEvent((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, 27);
    }
  }
  if ( *v15 != 0 )
    *((_DWORD *)this + 30) = 0;
  return result;
}


//======================================================================
// PlayerLocoMotion::moveEntityWithHeading(float,float)
// address: 0x002A46F8   size: 0x4A (74 bytes)
//======================================================================
__int64 __fastcall PlayerLocoMotion::moveEntityWithHeading(__int64 this, float a2)
{
  int v4; // r5
  __int64 v6; // [sp+0h] [bp-Ch]

  v6 = this;
  if ( *(_BYTE *)(this + 184) != 0 )
  {
    v4 = this + 8;
    LODWORD(v6) = *(_DWORD *)(this + 76);
    HIDWORD(v6) = *(_DWORD *)(this + 132);
    *(_DWORD *)(this + 132) = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 112) + 76) + 32))(*(_DWORD *)(*(_DWORD *)(this + 112) + 76));
    LivingLocoMotion::moveEntityWithHeading((LivingLocoMotion *)this, *((float *)&this + 1), a2);
    *(float *)(this + 76) = *(float *)&v6 * 0.6;
    *(_DWORD *)(v4 + 124) = HIDWORD(v6);
  }
  else
  {
    LivingLocoMotion::moveEntityWithHeading((LivingLocoMotion *)this, *((float *)&this + 1), a2);
  }
  return v6;
}

