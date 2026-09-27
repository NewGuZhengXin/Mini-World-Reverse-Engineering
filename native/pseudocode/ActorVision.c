// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ActorVision

//======================================================================
// ActorVision::ActorVision(ClientActor *)
// address: 0x002BDBB4   size: 0x18 (24 bytes)
//======================================================================
// Alternative name is '_ZN11ActorVisionC2EP11ClientActor'
void __fastcall ActorVision::ActorVision(ActorVision *this, ClientActor *a2)
{
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
}


//======================================================================
// ActorVision::~ActorVision()
// address: 0x002BDBCC   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN11ActorVisionD1Ev'
void __fastcall ActorVision::~ActorVision(ActorVision *this)
{
  void *v2; // r0
  void *v3; // r0

  v2 = *((void **)this + 7);
  if ( v2 != nullptr )
    operator delete(v2);
  v3 = *((void **)this + 4);
  if ( v3 != nullptr )
    operator delete(v3);
}


//======================================================================
// ActorVision::canSee(ClientActor *)
// address: 0x002BDBE8   size: 0x110 (272 bytes)
//======================================================================
int __fastcall ActorVision::canSee(ActorVision *this, ClientActor *a2)
{
  float v3; // r0
  int v4; // r3
  int v6; // [sp+0h] [bp-8Ch]
  _DWORD v7[3]; // [sp+8h] [bp-84h] BYREF
  _DWORD v8[3]; // [sp+14h] [bp-78h] BYREF
  _DWORD v9[3]; // [sp+20h] [bp-6Ch] BYREF
  float v10; // [sp+2Ch] [bp-60h]
  float v11; // [sp+30h] [bp-5Ch]
  float v12; // [sp+34h] [bp-58h]
  int v13; // [sp+38h] [bp-54h]
  _BYTE v14[64]; // [sp+3Ch] [bp-50h] BYREF
  void *v15; // [sp+7Ch] [bp-10h]
  int v16; // [sp+80h] [bp-Ch]
  int v17; // [sp+84h] [bp-8h]

  v13 = 2139095039;
  ClientActor::getEyePosition((ClientActor *)v7);
  ClientActor::getEyePosition((ClientActor *)v8);
  v9[0] = 10 * v7[0];
  v9[2] = 10 * v7[2];
  v9[1] = 10 * v7[1];
  v12 = (float)(v8[2] - v7[2]);
  v11 = (float)(v8[1] - v7[1]);
  v10 = (float)(v8[0] - v7[0]);
  v3 = j_sqrt((float)((float)((float)(v10 * v10) + (float)(v11 * v11)) + (float)(v12 * v12)));
  v13 = LODWORD(v3);
  v6 = 1;
  if ( v3 >= 100.0 )
  {
    v10 = v10 / v3;
    v11 = v11 / v3;
    v4 = *(_DWORD *)this;
    v15 = nullptr;
    v16 = 0;
    v17 = 0;
    v12 = v12 / v3;
    v6 = (unsigned __int8)World::pickGround(*(_DWORD *)(v4 + 52), v9, v14, 0) ^ 1;
    if ( v15 != nullptr )
      operator delete(v15);
  }
  return v6;
}


//======================================================================
// ActorVision::canSeeInAICache(ClientActor *)
// address: 0x002BDE14   size: 0x50 (80 bytes)
//======================================================================
int __fastcall ActorVision::canSeeInAICache(ActorVision *this, ClientActor *a2)
{
  int canSee; // r5
  char *v4; // r0
  ClientActor *v6; // [sp+4h] [bp-4h] BYREF

  v6 = a2;
  canSee = 1;
  if ( *((_DWORD **)this + 5) == std::__find<__gnu_cxx::__normal_iterator<ClientActor **,std::vector<ClientActor *>>,ClientActor *>(
                                   *((_DWORD **)this + 4),
                                   *((_DWORD *)this + 5),
                                   (int *)&v6) )
  {
    canSee = 0;
    if ( *((_DWORD **)this + 8) == std::__find<__gnu_cxx::__normal_iterator<ClientActor **,std::vector<ClientActor *>>,ClientActor *>(
                                     *((_DWORD **)this + 7),
                                     *((_DWORD *)this + 8),
                                     (int *)&v6) )
    {
      canSee = ActorVision::canSee(this, v6);
      if ( canSee != 0 )
        v4 = (char *)this + 16;
      else
        v4 = (char *)this + 28;
      std::vector<ClientActor *>::push_back((int)v4, &v6);
    }
  }
  return canSee;
}

