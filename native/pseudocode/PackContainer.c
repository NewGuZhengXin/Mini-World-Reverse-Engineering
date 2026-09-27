// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: PackContainer

//======================================================================
// PackContainer::index2Grid(int)
// address: 0x002B5704   size: 0x22 (34 bytes)
//======================================================================
int __fastcall PackContainer::index2Grid(PackContainer *this, int a2)
{
  int v2; // r1
  int v3; // r3

  v2 = a2 - *((_DWORD *)this + 1);
  v3 = *((_DWORD *)this + 3);
  if ( v2 >= -991146299 * ((*((_DWORD *)this + 4) - v3) >> 2) )
    return 0;
  else
    return v3 + 52 * v2;
}


//======================================================================
// PackContainer::canPutItem(int)
// address: 0x002B572C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall PackContainer::canPutItem(PackContainer *this, int a2)
{
  return 1;
}


//======================================================================
// PackContainer::onAttachUI(void)
// address: 0x002B5730   size: 0x2 (2 bytes)
//======================================================================
void __fastcall PackContainer::onAttachUI(PackContainer *this)
{
  ;
}


//======================================================================
// PackContainer::onDetachUI(void)
// address: 0x002B5732   size: 0x2 (2 bytes)
//======================================================================
void __fastcall PackContainer::onDetachUI(PackContainer *this)
{
  ;
}


//======================================================================
// PackContainer::afterChangeGrid(int)
// address: 0x002B5734   size: 0x10 (16 bytes)
//======================================================================
int __fastcall PackContainer::afterChangeGrid(PackContainer *this, int a2)
{
  return GameEventQue::postBackpackChange((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, a2);
}


//======================================================================
// PackContainer::~PackContainer()
// address: 0x002B5748   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN13PackContainerD1Ev'
void __fastcall PackContainer::~PackContainer(PackContainer *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_45E4F0;
  v2 = *((void **)this + 3);
  if ( v2 != nullptr )
    operator delete(v2);
  *(_DWORD *)this = &off_45C248;
}


//======================================================================
// PackContainer::~PackContainer()
// address: 0x002B5778   size: 0x12 (18 bytes)
//======================================================================
void __fastcall PackContainer::~PackContainer(PackContainer *this)
{
  PackContainer::~PackContainer(this);
  operator delete(this);
}


//======================================================================
// PackContainer::initGrids(int)
// address: 0x002B578C   size: 0x40 (64 bytes)
//======================================================================
int __fastcall PackContainer::initGrids(int this, int a2)
{
  int v2; // r5
  unsigned int i; // r4
  int v5; // r3
  BackPackGrid *v6; // r6

  v2 = this;
  for ( i = 0; ; ++i )
  {
    v5 = *(_DWORD *)(v2 + 12);
    if ( i >= -991146299 * ((*(_DWORD *)(v2 + 16) - v5) >> 2) )
      break;
    v6 = (BackPackGrid *)(v5 + 52 * i);
    this = SetBackPackGrid(v6, 0, 0, -1, nullptr, 1, 0);
    *(_DWORD *)v6 = a2 + i;
  }
  return this;
}


//======================================================================
// PackContainer::clear(void)
// address: 0x002B57D0   size: 0x46 (70 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> PackContainer::clear(PackContainer *this)
{
  unsigned int i; // r4
  int v3; // r3
  BackPackGrid *v4; // r6

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 3);
    if ( i >= -991146299 * ((*((_DWORD *)this + 4) - v3) >> 2) )
      break;
    v4 = (BackPackGrid *)(v3 + 52 * i);
    if ( *((_DWORD *)v4 + 1) != 0 )
    {
      SetBackPackGrid(v4, 0, 0, -1, nullptr, 1, 0);
      (*(void (__fastcall **)(PackContainer *, _DWORD))(*(_DWORD *)this + 12))(this, *(_DWORD *)v4);
    }
  }
}


//======================================================================
// PackContainer::checkEmptyGrid(int)
// address: 0x002B581C   size: 0x34 (52 bytes)
//======================================================================
int __fastcall PackContainer::checkEmptyGrid(PackContainer *this, int a2)
{
  int v2; // r2
  int v3; // r4
  int i; // r3
  _DWORD *v5; // r0

  v2 = *((_DWORD *)this + 3);
  v3 = -991146299 * ((*((_DWORD *)this + 4) - v2) >> 2);
  for ( i = 0; ; ++i )
  {
    if ( i == v3 )
      return 0;
    v5 = *(_DWORD **)(v2 + 52 * i + 4);
    if ( v5 == nullptr || *v5 == a2 )
      break;
  }
  return 1;
}


//======================================================================
// PackContainer::findItem(int)
// address: 0x002B5854   size: 0x30 (48 bytes)
//======================================================================
int __fastcall PackContainer::findItem(PackContainer *this, int a2)
{
  _DWORD *v2; // r3
  int v3; // r4
  int i; // r2
  _DWORD *v5; // r0

  v2 = *((_DWORD **)this + 3);
  v3 = -991146299 * ((*((_DWORD *)this + 4) - (int)v2) >> 2);
  for ( i = 0; i != v3; ++i )
  {
    v5 = (_DWORD *)v2[1];
    if ( v5 != nullptr && *v5 == a2 )
      return *v2;
    v2 += 13;
  }
  return -1;
}


//======================================================================
// PackContainer::addItem(int,int,int,int,int *)
// address: 0x002B5888   size: 0x102 (258 bytes)
//======================================================================
int __fastcall PackContainer::addItem(PackContainer *this, int a2, int a3, int a4, int a5, int *a6)
{
  unsigned int v6; // r7
  int v8; // r2
  _DWORD *v9; // r5
  _DWORD *v10; // r3
  int v11; // r6
  int result; // r0
  unsigned int i; // r7
  int v14; // r3
  BackPackGrid *v15; // r5
  int v16; // r6
  int v17; // r0
  int v18; // r3
  int v20; // [sp+14h] [bp-10h]

  v6 = 0;
  v20 = 0;
  while ( 1 )
  {
    v8 = *((_DWORD *)this + 3);
    if ( v6 >= -991146299 * ((*((_DWORD *)this + 4) - v8) >> 2) )
      break;
    v9 = (_DWORD *)(v8 + 52 * v6);
    if ( (unsigned int)(*v9 - 30) > 0x3C9 )
    {
      v10 = (_DWORD *)v9[1];
      if ( v10 != nullptr && *v10 == a2 )
      {
        v11 = v10[110] - v9[2];
        if ( v11 > a3 )
        {
          v11 = a3;
        }
        else
        {
          result = PackContainer::checkEmptyGrid(this, a2);
          if ( result == 0 )
            return result;
        }
        if ( v11 > 0 )
        {
          v9[2] += v11;
          v20 += v11;
          a3 -= v11;
          (*(void (__fastcall **)(PackContainer *, _DWORD))(*(_DWORD *)this + 12))(this, *v9);
        }
        if ( a3 == 0 )
          return v20;
      }
    }
    ++v6;
  }
  for ( i = 0; ; ++i )
  {
    v14 = *((_DWORD *)this + 3);
    if ( i >= -991146299 * ((*((_DWORD *)this + 4) - v14) >> 2) )
      break;
    v15 = (BackPackGrid *)(v14 + 52 * i);
    if ( (unsigned int)(*(_DWORD *)v15 - 30) > 0x3C9 )
    {
      v16 = *((_DWORD *)v15 + 1);
      if ( v16 == 0 )
      {
        v17 = SetBackPackGrid(v15, a2, a3, a4, nullptr, 1, 0);
        a3 -= v17;
        v20 += v17;
        *((_DWORD *)v15 + 7) = a5;
        while ( v16 < a5 )
        {
          v18 = v16++;
          *(_DWORD *)((char *)v15 + v18 * 4 + 32) = a6[v18];
        }
        (*(void (__fastcall **)(PackContainer *, _DWORD))(*(_DWORD *)this + 12))(this, *(_DWORD *)v15);
        if ( a3 == 0 )
          break;
      }
    }
  }
  return v20;
}


//======================================================================
// PackContainer::PackContainer(int,int)
// address: 0x002B5A88   size: 0x84 (132 bytes)
//======================================================================
// Alternative name is '_ZN13PackContainerC2Eii'
// local variable allocation has failed, the output may be wrong!
void __fastcall PackContainer::PackContainer(PackContainer *this, int a2, int a3)
{
  int v5; // r1
  unsigned int i; // r5
  __int64 v7; // r0
  BackPackGrid *v8; // r7
  int v9; // r3

  *((_DWORD *)this + 1) = a3;
  *((_BYTE *)this + 8) = 0;
  *(_DWORD *)this = &off_45E4F0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  if ( v5 != 0 )
  {
    LODWORD(v7) = (char *)this + 12;
    std::vector<BackPackGrid>::_M_default_append(v7);
  }
  for ( i = 0; ; ++i )
  {
    v9 = *((_DWORD *)this + 3);
    if ( i >= -991146299 * ((*((_DWORD *)this + 4) - v9) >> 2) )
      break;
    v8 = (BackPackGrid *)(v9 + 52 * i);
    SetBackPackGrid(v8, 0, 0, -1, nullptr, 1, 0);
    *(_DWORD *)v8 = a3 + i;
  }
}

