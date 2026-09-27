// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: EffectPickItem

//======================================================================
// EffectPickItem::~EffectPickItem()
// address: 0x0026B588   size: 0x30 (48 bytes)
//======================================================================
// Alternative name is '_ZN14EffectPickItemD1Ev'
void __fastcall EffectPickItem::~EffectPickItem(ClientActor **this)
{
  *this = (ClientActor *)&off_45BF70;
  ClientActor::release(*(this + 2));
  ClientActor::setNeedClear(*(this + 3), 0);
  ClientActor::release(*(this + 3));
  *this = (ClientActor *)&off_45BF48;
}


//======================================================================
// EffectPickItem::~EffectPickItem()
// address: 0x0026B5C0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall EffectPickItem::~EffectPickItem(ClientActor **this)
{
  EffectPickItem::~EffectPickItem(this);
  operator delete(this);
}


//======================================================================
// EffectPickItem::tick(void)
// address: 0x0026B5D4   size: 0x276 (630 bytes)
//======================================================================
int __fastcall EffectPickItem::tick(EffectPickItem *this)
{
  int v1; // r2
  int v2; // r3
  float v4; // r7
  float v5; // r5
  float v6; // r0
  float v7; // r7
  float v8; // r4
  float v9; // r5
  _DWORD *v10; // r3
  int v11; // r7
  float v12; // r4
  _DWORD *v13; // r5
  int result; // r0
  int v15; // [sp+0h] [bp-34h]
  float v16; // [sp+4h] [bp-30h]
  int v17; // [sp+4h] [bp-30h]
  int v18; // [sp+8h] [bp-2Ch]
  float v19; // [sp+Ch] [bp-28h]
  int v20; // [sp+Ch] [bp-28h]
  float v21; // [sp+10h] [bp-24h]
  int v22; // [sp+10h] [bp-24h]
  float v23; // [sp+14h] [bp-20h]
  float v24; // [sp+18h] [bp-1Ch] BYREF
  float v25; // [sp+1Ch] [bp-18h]
  float v26; // [sp+20h] [bp-14h]
  _DWORD v27[4]; // [sp+24h] [bp-10h] BYREF

  v1 = *((_DWORD *)this + 6);
  v2 = *((_DWORD *)this + 5) + 1;
  *((_DWORD *)this + 5) = v2;
  if ( v2 >= v1 )
    *((_BYTE *)this + 4) = 1;
  PitchYaw2Direction(
    (Ogre::Vector3 *)&v24,
    *(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 68) + 4),
    *(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 68) + 8));
  v4 = v26 - (float)(v25 * 0.0);
  v16 = (float)(v24 * 0.0) - (float)(v26 * 0.0);
  v5 = (float)(v25 * 0.0) - v24;
  v6 = j_sqrt((float)((float)((float)(v4 * v4) + (float)(v16 * v16)) + (float)(v5 * v5)));
  if ( v6 <= 0.00001 )
  {
    v8 = 0.0;
    v7 = 0.0;
    v19 = 0.0;
  }
  else
  {
    v19 = v4 * (float)(1.0 / v6);
    v7 = v16 * (float)(1.0 / v6);
    v8 = v5 * (float)(1.0 / v6);
  }
  v21 = (float)((float)((float)((float)(v25 * v8) - (float)(v26 * v7)) * -40.0) + (float)(v19 * 20.0))
      + (float)(v24 * -20.0);
  v23 = (float)((float)((float)((float)(v26 * v19) - (float)(v24 * v8)) * -40.0) + (float)(v7 * 20.0))
      + (float)(v25 * -20.0);
  v9 = (float)((float)((float)((float)(v24 * v7) - (float)(v25 * v19)) * -40.0) + (float)(v8 * 20.0))
     + (float)(v26 * -20.0);
  v10 = *(_DWORD **)(*((_DWORD *)this + 3) + 68);
  v17 = v10[8];
  v20 = v10[9];
  v15 = v10[10];
  ClientActor::getEyePosition((ClientActor *)v27);
  v11 = (int)v21 + v27[0] - v17;
  v18 = (int)v23 + v27[1] - v20;
  v22 = (int)v9 + v27[2] - v15;
  v12 = (float)*((int *)this + 5) / (float)*((int *)this + 6);
  if ( v12 > 1.0 )
    v12 = 1.0;
  v13 = *(_DWORD **)(*((_DWORD *)this + 3) + 68);
  v13[8] = (int)(float)((float)v11 * v12) + v17;
  v13[9] = (int)(float)((float)v18 * v12) + v20;
  result = (int)(float)((float)v22 * v12) + v15;
  v13[10] = result;
  return result;
}


//======================================================================
// EffectPickItem::EffectPickItem(ClientActor *,ClientActor *,int)
// address: 0x0026B85C   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZN14EffectPickItemC1EP11ClientActorS1_i'
void __fastcall EffectPickItem::EffectPickItem(EffectPickItem *this, ClientActor *a2, ClientActor *a3, int a4)
{
  *((_BYTE *)this + 4) = 0;
  *(_DWORD *)this = &off_45BF70;
  ClientActor::addRef(a2);
  *((_DWORD *)this + 2) = a2;
  ClientActor::addRef(a3);
  *((_DWORD *)this + 3) = a3;
  *((_DWORD *)this + 4) = a4;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 3;
}

