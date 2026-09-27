// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ItemLocoMotion

//======================================================================
// ItemLocoMotion::~ItemLocoMotion()
// address: 0x002BF92C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN14ItemLocoMotionD1Ev'
void __fastcall ItemLocoMotion::~ItemLocoMotion(ItemLocoMotion *this)
{
  *(_DWORD *)this = &off_45F2C0;
  ActorLocoMotion::~ActorLocoMotion(this);
}


//======================================================================
// ItemLocoMotion::~ItemLocoMotion()
// address: 0x002BF948   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ItemLocoMotion::~ItemLocoMotion(ItemLocoMotion *this)
{
  ItemLocoMotion::~ItemLocoMotion(this);
  operator delete(this);
}


//======================================================================
// ItemLocoMotion::ItemLocoMotion(ClientItem *)
// address: 0x002BFBCC   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN14ItemLocoMotionC1EP10ClientItem'
void __fastcall ItemLocoMotion::ItemLocoMotion(ItemLocoMotion *this, ClientItem *a2)
{
  ActorLocoMotion::ActorLocoMotion(this, a2);
  *(_DWORD *)this = &off_45F2C0;
}


//======================================================================
// ItemLocoMotion::tick(void)
// address: 0x002C0470   size: 0x16E (366 bytes)
//======================================================================
float __fastcall ItemLocoMotion::tick(ClientItem **this)
{
  float result; // r0
  int v3; // r2
  int v4; // r3
  World *v5; // r7
  World *v6; // r0
  int BlockID; // r1
  float v8; // r5
  float v9; // [sp+0h] [bp-34h]
  float v10; // [sp+0h] [bp-34h]
  int *v11; // [sp+4h] [bp-30h]
  int v12[3]; // [sp+Ch] [bp-28h] BYREF
  _DWORD v13[3]; // [sp+18h] [bp-1Ch] BYREF
  int v14; // [sp+24h] [bp-10h] BYREF
  int v15; // [sp+28h] [bp-Ch]
  int v16; // [sp+2Ch] [bp-8h]

  result = COERCE_FLOAT(ActorLocoMotion::tick((ActorLocoMotion *)this));
  if ( *((int *)*(this + 28) + 6) < 0 )
  {
    *((float *)this + 19) = *((float *)this + 19) - 4.0;
    v11 = (int *)(this + 8);
    *((_BYTE *)this + 138) = ActorLocoMotion::pushOutOfBlocks((ActorLocoMotion *)this, (const WCoord *)(this + 8));
    v3 = (int)*(this + 8);
    v4 = (int)*(this + 9);
    v12[2] = (int)*(this + 10);
    v12[0] = v3;
    v12[1] = v4;
    ActorLocoMotion::doMoveStep((ActorLocoMotion *)this, (const Ogre::Vector3 *)(this + 18));
    if ( *((_DWORD *)*(this + 28) + 1) % 25 == 0
      || (CoordDivBlock((const WCoord *)v13, v11), CoordDivBlock((const WCoord *)&v14, v12), v13[0] != v14)
      || v13[1] != v15
      || v13[2] != v16 )
    {
      v5 = *(this + 27);
      CoordDivBlock((const WCoord *)&v14, v11);
      if ( (unsigned int)(World::getBlockID(v5, (const WCoord *)&v14) - 5) <= 1 )
      {
        *(this + 19) = (ClientItem *)1101004800;
        v9 = GenRandomFloat();
        *((float *)this + 18) = (float)(v9 - GenRandomFloat()) * 20.0;
        v10 = GenRandomFloat();
        *((float *)this + 20) = (float)(v10 - GenRandomFloat()) * 20.0;
      }
      ClientItem::searchForOtherItemsNearby(*(this + 28));
    }
    if ( *((_BYTE *)this + 124) != 0 )
    {
      CoordDivBlock((const WCoord *)v13, v11);
      v15 = v13[1] + dword_51665C;
      v16 = v13[2] + dword_516660;
      v6 = *(this + 27);
      v14 = v13[0] + dword_516658;
      BlockID = World::getBlockID(v6, (const WCoord *)&v14);
      if ( BlockID <= 0 )
        v8 = 0.588;
      else
        v8 = *(float *)(DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, BlockID) + 40)
           * 0.98;
    }
    else
    {
      v8 = 0.98;
    }
    *((float *)this + 18) = *((float *)this + 18) * v8;
    *((float *)this + 20) = *((float *)this + 20) * v8;
    result = *((float *)this + 19) * 0.98;
    *((float *)this + 19) = result;
    if ( *((_BYTE *)this + 124) != 0 )
    {
      result = result * -0.5;
      *((float *)this + 19) = result;
    }
  }
  return result;
}

