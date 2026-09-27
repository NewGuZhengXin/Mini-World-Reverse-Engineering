// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: SectionCuller

//======================================================================
// SectionCuller::cullSectionActors(Section *)
// address: 0x002CE8C4   size: 0xBC (188 bytes)
//======================================================================
int __fastcall SectionCuller::cullSectionActors(SectionCuller *this, Section *a2)
{
  int v3; // r3
  int result; // r0
  int v5; // r4
  const Ogre::Vector3 *v6; // r2
  unsigned int i; // [sp+4h] [bp-68h]
  float v9[3]; // [sp+1Ch] [bp-50h] BYREF
  float v10[3]; // [sp+28h] [bp-44h] BYREF
  int v11; // [sp+34h] [bp-38h] BYREF
  int v12; // [sp+38h] [bp-34h]
  int v13; // [sp+3Ch] [bp-30h]
  int v14; // [sp+40h] [bp-2Ch]
  int v15; // [sp+44h] [bp-28h]
  int v16; // [sp+48h] [bp-24h]
  _BYTE v17[32]; // [sp+4Ch] [bp-20h] BYREF

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)a2 + 11);
    result = *((_DWORD *)a2 + 12);
    if ( i >= (result - v3) >> 2 )
      break;
    v5 = *(_DWORD *)(4 * i + v3);
    ActorLocoMotion::getCollideBox(*(ActorLocoMotion **)(v5 + 68), (CollideAABB *)&v11);
    v9[0] = (float)v11;
    v9[1] = (float)v12;
    v9[2] = (float)v13;
    v10[2] = (float)(v13 + v16);
    v10[0] = (float)(v11 + v14);
    v10[1] = (float)(v12 + v15);
    Ogre::BoxSphereBound::fromBox((Ogre::BoxSphereBound *)v17, (const Ogre::Vector3 *)v9, (const Ogre::Vector3 *)v10);
    if ( Ogre::CullFrustum::cull((SectionCuller *)((char *)this + 64), (const Ogre::BoxSphereBound *)v17, v6) != 1 )
    {
      *(_DWORD *)(v5 + 28) = ClientActor::m_CurActorFrame;
      (*(void (__fastcall **)(int, _DWORD, char *))(*(_DWORD *)v5 + 76))(v5, *((_DWORD *)this + 153), (char *)this + 64);
    }
  }
  return result;
}


//======================================================================
// SectionCuller::SectionCuller(void)
// address: 0x002CEEB4   size: 0x68 (104 bytes)
//======================================================================
// Alternative name is '_ZN13SectionCullerC1Ev'
void __fastcall SectionCuller::SectionCuller(SectionCuller *this)
{
  int v2; // r0
  int v3; // r5
  int *v4; // r5
  int v5; // r2
  int v6; // r3
  int v7; // r3

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 1) = 8;
  v2 = operator new(0x20u);
  v3 = *((_DWORD *)this + 1);
  *(_DWORD *)this = v2;
  v4 = (int *)(v2 + 4 * ((unsigned int)(v3 - 1) >> 1));
  *v4 = operator new(0x200u);
  *((_DWORD *)this + 5) = v4;
  v5 = *v4;
  v6 = *v4 + 512;
  *((_DWORD *)this + 3) = *v4;
  *((_DWORD *)this + 4) = v6;
  *((_DWORD *)this + 9) = v4;
  v7 = *v4;
  *((_DWORD *)this + 2) = v5;
  *((_DWORD *)this + 7) = v7;
  *((_DWORD *)this + 8) = v7 + 512;
  *((_DWORD *)this + 6) = v7;
  Ogre::CullFrustum::CullFrustum((int)this + 64);
  *((_DWORD *)this + 154) = 0;
}


//======================================================================
// SectionCuller::~SectionCuller()
// address: 0x002CEF50   size: 0x14 (20 bytes)
//======================================================================
// Alternative name is '_ZN13SectionCullerD1Ev'
void __fastcall SectionCuller::~SectionCuller(SectionCuller *this)
{
  Ogre::CullFrustum::~CullFrustum((SectionCuller *)((char *)this + 64));
  std::deque<CullStep>::~deque((int)this);
}


//======================================================================
// SectionCuller::prepareOrtho(Ogre::Camera *)
// address: 0x002CFCB4   size: 0xF0 (240 bytes)
//======================================================================
int __fastcall SectionCuller::prepareOrtho(int this, Ogre::Camera *a2)
{
  _DWORD *v2; // r6
  unsigned int i; // r5
  int v4; // r2
  int v5; // r3
  Chunk *v6; // r4
  int *v7; // r4
  const Ogre::Vector3 *v8; // r2
  __int16 v9; // r0
  int v10; // r3
  int v11; // [sp+4h] [bp-58h]
  int v12; // [sp+8h] [bp-54h]
  int v13; // [sp+Ch] [bp-50h]
  float v14[3]; // [sp+14h] [bp-48h] BYREF
  float v15[3]; // [sp+20h] [bp-3Ch] BYREF
  _WORD v16[4]; // [sp+2Ch] [bp-30h] BYREF
  int v17; // [sp+34h] [bp-28h]
  int *v18; // [sp+38h] [bp-24h]
  _BYTE v19[32]; // [sp+3Ch] [bp-20h] BYREF

  v2 = (_DWORD *)this;
  for ( i = 0; ; ++i )
  {
    v4 = v2[152];
    v5 = *(_DWORD *)(v4 + 32);
    if ( i >= (*(_DWORD *)(v4 + 36) - v5) >> 2 )
      break;
    v6 = *(Chunk **)(4 * i + v5);
    this = Chunk::getTopFilledSegment(v6) / 16;
    if ( this >= 0 )
    {
      v7 = *((int **)v6 + this + 342);
      v11 = 100 * v7[2];
      v12 = 100 * v7[3];
      v13 = 100 * v7[4];
      v14[0] = (float)v11;
      v14[1] = (float)v12;
      v14[2] = (float)v13;
      v15[0] = (float)(v11 + 1600);
      v15[1] = (float)(v12 + 1600);
      v15[2] = (float)(v13 + 1600);
      Ogre::BoxSphereBound::fromBox((Ogre::BoxSphereBound *)v19, (const Ogre::Vector3 *)v14, (const Ogre::Vector3 *)v15);
      this = Ogre::CullFrustum::cull((Ogre::CullFrustum *)(v2 + 16), (const Ogre::BoxSphereBound *)v19, v8);
      if ( this != 1 )
      {
        v16[0] = BlockDivSection(v7[2]);
        v16[1] = BlockDivSection(v7[3]);
        v9 = BlockDivSection(v7[4]);
        v16[3] = 32;
        v17 = 5;
        v10 = v2[154];
        v16[2] = v9;
        v7[7] = v10;
        v18 = v7;
        this = std::deque<CullStep>::push_back(__SPAIR64__(v16, (unsigned int)v2));
      }
    }
  }
  return this;
}


//======================================================================
// SectionCuller::preparePerspective(Ogre::Camera *)
// address: 0x002CFDA4   size: 0x90 (144 bytes)
//======================================================================
int __fastcall SectionCuller::preparePerspective(World **this, Ogre::Camera *a2)
{
  int v3; // r7
  _DWORD *SectionBySCoord; // r0
  int v6; // [sp+4h] [bp-18h]
  __int16 v7; // [sp+8h] [bp-14h] BYREF
  __int16 v8; // [sp+Ah] [bp-12h]
  __int16 v9; // [sp+Ch] [bp-10h]
  __int16 v10; // [sp+Eh] [bp-Eh]
  int v11; // [sp+10h] [bp-Ch]
  _DWORD *v12; // [sp+14h] [bp-8h]

  v3 = *((_DWORD *)a2 + 3) / 10;
  v6 = *((_DWORD *)a2 + 4) / 10;
  dword_517020 = *((_DWORD *)a2 + 2) / 10;
  dword_517024 = v3;
  dword_517028 = v6;
  v7 = CoordDivSection(dword_517020);
  v8 = CoordDivSection(v3);
  v10 = 0;
  v11 = -1;
  v9 = CoordDivSection(v6);
  SectionBySCoord = World::getSectionBySCoord(*(this + 152), v7, v8, v9);
  v12 = SectionBySCoord;
  if ( SectionBySCoord != nullptr )
    SectionBySCoord[7] = *(this + 154);
  return std::deque<CullStep>::push_back(__SPAIR64__(&v7, (unsigned int)this));
}


//======================================================================
// SectionCuller::checkNeighbor(CullStep const&,DirectionType)
// address: 0x002CFE38   size: 0x264 (612 bytes)
//======================================================================
int __fastcall SectionCuller::checkNeighbor(unsigned int a1, __int16 *a2, int a3)
{
  int v5; // r3
  int result; // r0
  float *v7; // r3
  float *v8; // r5
  float v9; // r6
  int v10; // r3
  int v11; // r2
  float v12; // r5
  int v13; // r6
  const Ogre::Vector3 *v14; // r2
  float v15; // r3
  __int16 v16; // [sp+8h] [bp-64h]
  int v17; // [sp+Ch] [bp-60h]
  __int16 v18; // [sp+Ch] [bp-60h]
  __int16 v19; // [sp+10h] [bp-5Ch]
  __int16 v20; // [sp+10h] [bp-5Ch]
  int v21; // [sp+14h] [bp-58h]
  __int16 v22; // [sp+14h] [bp-58h]
  int v23; // [sp+18h] [bp-54h]
  int v24; // [sp+18h] [bp-54h]
  __int16 v25; // [sp+1Ch] [bp-50h]
  int v26; // [sp+1Ch] [bp-50h]
  int v28; // [sp+24h] [bp-48h]
  int v29; // [sp+2Ch] [bp-40h]
  float v30[3]; // [sp+30h] [bp-3Ch] BYREF
  float v31[4]; // [sp+3Ch] [bp-30h] BYREF
  _BYTE v32[32]; // [sp+4Ch] [bp-20h] BYREF

  if ( (dword_51702C & 1) == 0 && _cxa_guard_acquire(&dword_51702C) != 0 )
  {
    dword_517030[0] = -1082130432;
    dword_517034 = 0;
    dword_517038 = 0;
    dword_51703C = 1065353216;
    dword_517040 = 0;
    dword_517044 = 0;
    dword_517048 = 0;
    dword_51704C = 0;
    dword_517050 = -1082130432;
    dword_517054 = 0;
    dword_517058 = 0;
    dword_51705C = 1065353216;
    dword_517060 = 0;
    dword_517064 = -1082130432;
    dword_517068 = 0;
    dword_51706C = 0;
    dword_517070 = 1065353216;
    dword_517074 = 0;
    _cxa_guard_release(&dword_51702C);
  }
  v5 = a2[3] >> a3;
  result = v5 << 31;
  if ( (v5 & 1) == 0 )
  {
    v19 = *a2;
    v7 = &flt_446734[3 * a3];
    v21 = *(_DWORD *)v7;
    v16 = a2[1];
    v23 = *((_DWORD *)v7 + 1);
    v28 = *((_DWORD *)v7 + 2);
    v25 = a2[2];
    v29 = *(_DWORD *)(a1 + 60);
    v17 = *((_DWORD *)a2 + 2);
    if ( v17 == -1
      || (v8 = (float *)&dword_517030[3 * a3],
          v9 = (float)((float)(1600 * v19 + 800 + 800 * v21 - *(_DWORD *)(a1 + 52)) * *v8)
             + (float)((float)(1600 * v16 + 800 + 800 * v23 - *(_DWORD *)(a1 + 56)) * v8[1]),
          result = (float)(v9 + (float)((float)(1600 * v25 + 800 + 800 * v28 - v29) * v8[2])) <= 0.0,
          (float)(v9 + (float)((float)(1600 * v25 + 800 + 800 * v28 - v29) * v8[2])) > 0.0) )
    {
      v10 = *((_DWORD *)a2 + 3);
      if ( v17 == -1
        || v10 == 0
        || (v11 = (int)*(unsigned __int16 *)(v10 + 32) >> Section::m_FaceConnMoveBits[6 * v17 + a3],
            result = v11 << 31,
            (v11 & 1) != 0) )
      {
        v18 = v21 + v19;
        v20 = v23 + v16;
        v22 = v28 + v25;
        result = (int)World::getSectionBySCoord(*(World **)(a1 + 608), v18, (__int16)(v23 + v16), (__int16)(v28 + v25));
        v12 = *(float *)&result;
        if ( result != 0 && *(_DWORD *)(result + 28) != *(_DWORD *)(a1 + 616) )
        {
          v13 = 100 * *(_DWORD *)(result + 12);
          v24 = 100 * *(_DWORD *)(result + 8);
          v26 = 100 * *(_DWORD *)(result + 16);
          v30[0] = (float)v24;
          v30[1] = (float)v13;
          v30[2] = (float)v26;
          v31[0] = (float)(v24 + 1600);
          v31[1] = (float)(v13 + 1600);
          v31[2] = (float)(v26 + 1600);
          Ogre::BoxSphereBound::fromBox(
            (Ogre::BoxSphereBound *)v32,
            (const Ogre::Vector3 *)v30,
            (const Ogre::Vector3 *)v31);
          result = Ogre::CullFrustum::cull((Ogre::CullFrustum *)(a1 + 64), (const Ogre::BoxSphereBound *)v32, v14);
          if ( result != 1 )
          {
            *(_DWORD *)(LODWORD(v12) + 28) = *(_DWORD *)(a1 + 616);
            LOWORD(v31[0]) = v18;
            HIWORD(v31[0]) = v20;
            v31[3] = v12;
            LOWORD(v31[1]) = v22;
            v15 = flt_446734[a3 + 18];
            HIWORD(v31[1]) = 1 << SLOBYTE(v15);
            v31[2] = v15;
            return std::deque<CullStep>::push_back(__SPAIR64__(v31, a1));
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// SectionCuller::doCull(Ogre::Camera *,BlockScene *,Ogre::RenderUsage)
// address: 0x002D00B4   size: 0x2A0 (672 bytes)
//======================================================================
int __fastcall SectionCuller::doCull(unsigned int a1, int a2, Ogre::GameScene *a3)
{
  int v5; // r2
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r1
  int *v10; // r2
  int v11; // r6
  int v12; // r3
  int v13; // r3
  int v14; // r5
  int *v15; // r2
  int v16; // r2
  unsigned int v17; // r1
  _DWORD **v18; // r2
  _DWORD *v19; // r3
  _DWORD *v20; // r6
  _DWORD **v21; // r3
  unsigned int v22; // r3
  unsigned int v23; // r5
  _DWORD *v24; // r6
  Ogre::MovableObject **v25; // r2
  int v27; // [sp+14h] [bp-18h]
  int v28; // [sp+14h] [bp-18h]
  int v29; // [sp+18h] [bp-14h]
  unsigned int v31; // [sp+20h] [bp-Ch] BYREF
  char v32[8]; // [sp+24h] [bp-8h] BYREF
  void *v33; // [sp+2Ch] [bp+0h] BYREF
  char *v34; // [sp+30h] [bp+4h]
  char *v35; // [sp+34h] [bp+8h]
  _DWORD *v36; // [sp+38h] [bp+Ch] BYREF
  int v37; // [sp+3Ch] [bp+10h]
  int v38; // [sp+40h] [bp+14h]
  int v39; // [sp+44h] [bp+18h]
  int v40; // [sp+48h] [bp+1Ch] BYREF
  _DWORD *v41[6]; // [sp+4Ch] [bp+20h] BYREF

  ++*(_DWORD *)(a1 + 616);
  v34 = nullptr;
  v35 = nullptr;
  v33 = nullptr;
  memset(v41, 0, 20);
  v5 = *((_DWORD *)a3 + 18);
  v41[2] = v41;
  v41[3] = v41;
  *(_DWORD *)(a1 + 608) = v5;
  Ogre::Camera::getViewDir((Ogre::Camera *)&v36, (Ogre::MovableObject *)a2);
  v6 = v37;
  v7 = v38;
  *(_DWORD *)(a1 + 40) = v36;
  *(_DWORD *)(a1 + 44) = v6;
  *(_DWORD *)(a1 + 48) = v7;
  v27 = *(_DWORD *)(a2 + 12) / 10;
  v8 = *(_DWORD *)(a2 + 16) / 10;
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 8) / 10;
  *(_DWORD *)(a1 + 56) = v27;
  *(_DWORD *)(a1 + 60) = v8;
  *(_DWORD *)(a1 + 612) = *(_DWORD *)(a2 + 212);
  Ogre::Camera::getCullFrustum((Ogre::Camera *)a2, (Ogre::CullFrustum *)(a1 + 64));
  *(_DWORD *)(*(_DWORD *)(a1 + 612) + 548) = a3;
  std::deque<CullStep>::resize((_DWORD *)a1, 0);
  if ( *(float *)(a2 + 240) == 0.0 )
    SectionCuller::prepareOrtho(a1, (Ogre::Camera *)a2);
  else
    SectionCuller::preparePerspective((World **)a1, (Ogre::Camera *)a2);
  v29 = 0;
  while ( *(_DWORD *)(a1 + 24) != *(_DWORD *)(a1 + 8) )
  {
    std::_Deque_iterator<CullStep,CullStep&,CullStep*>::_Deque_iterator(&v36, (_DWORD *)(a1 + 8));
    v9 = v36[1];
    v11 = v36[2];
    v10 = v36 + 3;
    v36 = (_DWORD *)*v36;
    v37 = v9;
    v38 = v11;
    v39 = *v10;
    v12 = *(_DWORD *)(a1 + 8);
    if ( v12 == *(_DWORD *)(a1 + 16) - 16 )
    {
      operator delete(*(void **)(a1 + 12));
      v15 = (int *)(*(_DWORD *)(a1 + 20) + 4);
      *(_DWORD *)(a1 + 20) = v15;
      v13 = *v15;
      v16 = *v15 + 512;
      *(_DWORD *)(a1 + 12) = v13;
      *(_DWORD *)(a1 + 16) = v16;
    }
    else
    {
      v13 = v12 + 16;
    }
    v14 = v39;
    *(_DWORD *)(a1 + 8) = v13;
    if ( v14 != 0 )
    {
      if ( *(_BYTE *)(v14 + 42) != 0 )
        Section::genConnectGraph((Section *)v14);
      if ( *(_WORD *)(v14 + 34) != 0 )
      {
        v17 = *(_DWORD *)(v14 + 4);
        v18 = v41;
        v19 = v41[1];
        v31 = v17;
        while ( v19 != nullptr )
        {
          if ( v19[4] < v17 )
          {
            v20 = (_DWORD *)v19[3];
            v19 = v18;
          }
          else
          {
            v20 = (_DWORD *)v19[2];
          }
          v18 = (_DWORD **)v19;
          v19 = v20;
        }
        v21 = v41;
        if ( v18 != v41 && v17 >= (unsigned int)v18[4] )
          v21 = v18;
        if ( v21 == v41 )
        {
          *(_DWORD *)(v17 + 1340) = 0;
          std::set<Chunk *>::insert((int)v32, &v40, &v31);
          if ( v34 == v35 )
          {
            std::vector<Chunk *>::_M_emplace_back_aux<Chunk * const&>((int)&v33, &v31);
          }
          else
          {
            if ( v34 != nullptr )
              *(_DWORD *)v34 = v31;
            v34 += 4;
          }
        }
        v22 = v31;
        if ( *(_BYTE *)(v14 + 40) != 0 )
          *(_DWORD *)(v31 + 1344) = 0;
        *(_DWORD *)(v22 + 1340) |= 1 << (*(_DWORD *)(v14 + 12) / 16);
        ++v29;
      }
      SectionCuller::cullSectionActors((SectionCuller *)a1, (Section *)v14);
    }
    SectionCuller::checkNeighbor(a1, (__int16 *)&v36, 0);
    SectionCuller::checkNeighbor(a1, (__int16 *)&v36, 1);
    SectionCuller::checkNeighbor(a1, (__int16 *)&v36, 4);
    SectionCuller::checkNeighbor(a1, (__int16 *)&v36, 5);
    SectionCuller::checkNeighbor(a1, (__int16 *)&v36, 2);
    SectionCuller::checkNeighbor(a1, (__int16 *)&v36, 3);
  }
  v23 = 0;
  v28 = 0;
  while ( v23 < (v34 - (_BYTE *)v33) >> 2 )
  {
    v24 = *((_DWORD **)v33 + v23);
    if ( v28 != 0 )
      goto LABEL_37;
    if ( v24[335] != v24[336] )
    {
      Chunk::genMesh(*((Chunk **)v33 + v23), (const WCoord *)(a1 + 52));
LABEL_37:
      v28 = 1;
    }
    v25 = (Ogre::MovableObject **)v24[337];
    if ( v25 != nullptr )
      Ogre::CullResult::addRenderable(*(Ogre::CullResult **)(a1 + 612), a3, v25, 2, nullptr);
    ++v23;
  }
  std::_Rb_tree<Chunk *,Chunk *,std::_Identity<Chunk *>,std::less<Chunk *>,std::allocator<Chunk *>>::_M_erase(
    (int)&v40,
    v41[1]);
  if ( v33 != nullptr )
    operator delete(v33);
  return v29;
}

