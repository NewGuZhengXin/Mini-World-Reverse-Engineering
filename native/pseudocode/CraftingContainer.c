// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: CraftingContainer

//======================================================================
// CraftingContainer::canPutItem(int)
// address: 0x002DEFF0   size: 0xE (14 bytes)
//======================================================================
bool __fastcall CraftingContainer::canPutItem(CraftingContainer *this, int a2)
{
  return a2 != *((_DWORD *)this + 1) + *((_DWORD *)this + 6);
}


//======================================================================
// CraftingContainer::~CraftingContainer()
// address: 0x002DF0D0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN17CraftingContainerD1Ev'
void __fastcall CraftingContainer::~CraftingContainer(CraftingContainer *this)
{
  *(_DWORD *)this = &off_4611E0;
  PackContainer::~PackContainer(this);
}


//======================================================================
// CraftingContainer::~CraftingContainer()
// address: 0x002DF0EC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall CraftingContainer::~CraftingContainer(CraftingContainer *this)
{
  CraftingContainer::~CraftingContainer(this);
  operator delete(this);
}


//======================================================================
// CraftingContainer::CraftingContainer(int,int)
// address: 0x002DF100   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN17CraftingContainerC2Eii'
void __fastcall CraftingContainer::CraftingContainer(CraftingContainer *this, int a2, int a3)
{
  PackContainer::PackContainer(this, a2, a3);
  *((_DWORD *)this + 6) = a2 - 1;
  *(_DWORD *)this = &off_4611E0;
  *((_DWORD *)this + 7) = (int)j_sqrt((double)(a2 - 1));
}


//======================================================================
// CraftingContainer::checkCrafting(void)
// address: 0x002DF130   size: 0x114 (276 bytes)
//======================================================================
int __fastcall CraftingContainer::checkCrafting(CraftingContainer *this)
{
  BackPackGrid *v2; // r6
  int Crafting; // r0
  int v4; // r3
  int *v5; // r1
  int v6; // r2
  int *v7; // r0
  int v8; // r12
  int *v9; // r7
  int v11; // [sp+10h] [bp-8Ch]
  int v12; // [sp+14h] [bp-88h]
  int v13; // [sp+18h] [bp-84h]
  int v14; // [sp+1Ch] [bp-80h]
  int v15; // [sp+20h] [bp-7Ch]
  int v16; // [sp+24h] [bp-78h]
  int v17; // [sp+28h] [bp-74h]
  int v18; // [sp+2Ch] [bp-70h]
  int v19; // [sp+3Ch] [bp-60h] BYREF
  int v20; // [sp+40h] [bp-5Ch] BYREF
  int v21; // [sp+44h] [bp-58h] BYREF
  int v22; // [sp+48h] [bp-54h] BYREF
  int v23; // [sp+4Ch] [bp-50h] BYREF
  int v24[9]; // [sp+50h] [bp-4Ch] BYREF
  int v25[10]; // [sp+74h] [bp-28h] BYREF

  v2 = (BackPackGrid *)(*((_DWORD *)this + 3) + 52 * *((_DWORD *)this + 6));
  v11 = *((_DWORD *)this + 7);
  Crafting = sub_2DEFFE((_DWORD *)this + 3, v11, v11, &v20, &v21, &v22, &v23);
  if ( Crafting == 0 )
    goto LABEL_13;
  v4 = v21;
  v13 = v22;
  v16 = v23;
  v12 = v20;
  v17 = v22 - v20;
  v15 = v21 * v11;
  v14 = 0;
  v18 = v21;
  while ( v4 < v16 )
  {
    v5 = &v24[v14];
    v6 = v12;
    v7 = &v25[v14];
    while ( v6 < v13 )
    {
      v8 = *((_DWORD *)this + 3) + 52 * (v6 + v15);
      v9 = *(int **)(v8 + 4);
      if ( v9 != nullptr )
      {
        *v5 = *v9;
        *v7 = *(_DWORD *)(v8 + 8);
      }
      else
      {
        *v5 = 0;
        *v7 = 0;
      }
      ++v6;
      ++v5;
      ++v7;
    }
    ++v4;
    v14 += v17;
    v15 += v11;
  }
  Crafting = DefManager::findCrafting(
               (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton,
               v13 - v12,
               v16 - v18,
               v24,
               v25,
               &v19);
  if ( Crafting != 0 )
    SetBackPackGrid(v2, *(_DWORD *)(Crafting + 8), *(_DWORD *)(Crafting + 12), -1, (void *)Crafting, 1, 0);
  else
LABEL_13:
    SetBackPackGrid(v2, 0, 0, -1, (void *)Crafting, 1, Crafting);
  return GameEventQue::postBackpackChange((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, *(_DWORD *)v2);
}


//======================================================================
// CraftingContainer::doCrafting(int)
// address: 0x002DF24C   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall CraftingContainer::doCrafting(CraftingContainer *this, int a2)
{
  int result; // r0
  _DWORD *v4; // r5
  int v5; // r7
  int i; // r6
  int v7; // r3
  int *v8; // r2
  int v9; // r3
  int v10; // [sp+10h] [bp-14h] BYREF
  int v11; // [sp+14h] [bp-10h] BYREF
  int v12; // [sp+18h] [bp-Ch] BYREF
  int v13; // [sp+1Ch] [bp-8h] BYREF

  result = (*(int (__fastcall **)(CraftingContainer *, int))(*(_DWORD *)this + 8))(this, a2);
  v4 = *(_DWORD **)(result + 16);
  if ( v4 != nullptr )
  {
    result = sub_2DEFFE((_DWORD *)this + 3, *((_DWORD *)this + 7), *((_DWORD *)this + 7), &v10, &v11, &v12, &v13);
    v5 = 0;
    if ( result != 0 )
    {
      while ( v5 < v4[8] )
      {
        for ( i = 0; ; ++i )
        {
          v7 = v4[7];
          if ( i >= v7 )
            break;
          v8 = (int *)(*((_DWORD *)this + 3) + 52 * ((v5 + v11) * *((_DWORD *)this + 7) + i + v10));
          v9 = v8[2] - v4[i + 19 + v7 * v5];
          v8[2] = v9;
          if ( v9 == 0 )
            v8[1] = 0;
          GameEventQue::postBackpackChange((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, *v8);
        }
        ++v5;
      }
      (*(void (__fastcall **)(int, int, int, _DWORD, _DWORD))(*(_DWORD *)g_pPlayerCtrl + 208))(
        g_pPlayerCtrl,
        1,
        2,
        v4[2],
        v4[3]);
      return CraftingContainer::checkCrafting(this);
    }
  }
  return result;
}


//======================================================================
// CraftingContainer::afterChangeGrid(int)
// address: 0x002DF2FC   size: 0x24 (36 bytes)
//======================================================================
int __fastcall CraftingContainer::afterChangeGrid(CraftingContainer *this, int a2)
{
  PackContainer::afterChangeGrid(this, a2);
  if ( a2 == *((_DWORD *)this + 1) + *((_DWORD *)this + 6) )
    return CraftingContainer::doCrafting(this, a2);
  else
    return CraftingContainer::checkCrafting(this);
}

