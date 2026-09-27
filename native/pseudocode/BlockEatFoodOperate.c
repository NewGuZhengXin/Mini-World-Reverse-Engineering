// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockEatFoodOperate

//======================================================================
// BlockEatFoodOperate::~BlockEatFoodOperate()
// address: 0x002D70D0   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN19BlockEatFoodOperateD1Ev'
void __fastcall BlockEatFoodOperate::~BlockEatFoodOperate(BlockEatFoodOperate *this)
{
  *(_DWORD *)this = &off_462258;
}


//======================================================================
// BlockEatFoodOperate::~BlockEatFoodOperate()
// address: 0x002D7128   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockEatFoodOperate::~BlockEatFoodOperate(BlockEatFoodOperate *this)
{
  BlockEatFoodOperate::~BlockEatFoodOperate(this);
  operator delete(this);
}


//======================================================================
// BlockEatFoodOperate::begin(OperateTarget *,OperateTool *)
// address: 0x002D71A4   size: 0x1E (30 bytes)
//======================================================================
int __fastcall BlockEatFoodOperate::begin(int a1)
{
  BlockOperate::begin();
  *(_DWORD *)(a1 + 16) = 0;
  ClientActor::sendEvent(g_pPlayerCtrl, 17);
  return 5;
}


//======================================================================
// BlockEatFoodOperate::end(void)
// address: 0x002D71C8   size: 0x12 (18 bytes)
//======================================================================
int __fastcall BlockEatFoodOperate::end(BlockEatFoodOperate *this)
{
  return ClientActor::sendEvent(g_pPlayerCtrl, 18);
}


//======================================================================
// BlockEatFoodOperate::update(int,IntersectResult &)
// address: 0x002D71E0   size: 0x8A (138 bytes)
//======================================================================
int __fastcall BlockEatFoodOperate::update(int a1)
{
  int v1; // r2
  unsigned int v2; // r3
  int *v3; // r2
  int v4; // r5
  EffectManager *v5; // r6
  EffectManager *v6; // r7
  _DWORD v8[4]; // [sp+Ch] [bp-10h] BYREF

  v1 = *(_DWORD *)(a1 + 12);
  v2 = *(_DWORD *)(a1 + 16) + 1;
  *(_DWORD *)(a1 + 16) = v2;
  v3 = *(int **)(v1 + 12);
  if ( v2 < v3[1] )
  {
    v4 = 0;
    if ( v2 % 0xA == 1 )
    {
      v6 = (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton;
      PlayerControl::getPosition(v8, g_pPlayerCtrl);
      EffectManager::playSound(v6, (const WCoord *)v8, "random.eat", 1.0, 1.0, true);
    }
  }
  else
  {
    PlayerAttrib::eatFood(*(_DWORD *)(g_pPlayerCtrl + 76), *v3, 1);
    v4 = 1;
    v5 = (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton;
    PlayerControl::getPosition(v8, g_pPlayerCtrl);
    EffectManager::playSound(v5, (const WCoord *)v8, "random.burp", 1.0, 1.0, true);
  }
  return v4;
}


//======================================================================
// BlockEatFoodOperate::BlockEatFoodOperate(void)
// address: 0x002D7B44   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN19BlockEatFoodOperateC1Ev'
void __fastcall BlockEatFoodOperate::BlockEatFoodOperate(BlockEatFoodOperate *this)
{
  *(_DWORD *)this = &off_460C18;
}

