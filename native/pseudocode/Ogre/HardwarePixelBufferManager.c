// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::HardwarePixelBufferManager

//======================================================================
// Ogre::HardwarePixelBufferManager::HardwarePixelBufferManager(void)
// address: 0x00171EBC   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre26HardwarePixelBufferManagerC1Ev'
Ogre::HardwarePixelBufferManager *__fastcall Ogre::HardwarePixelBufferManager::HardwarePixelBufferManager(
        Ogre::HardwarePixelBufferManager *this)
{
  Ogre::Timer *v2; // r0

  Ogre::Singleton<Ogre::HardwarePixelBufferManager>::ms_Singleton = (int)this;
  *(_DWORD *)this = &off_457698;
  v2 = (Ogre::Timer *)j_memset((char *)this + 8, 0, 0x10u);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 4) = (char *)this + 8;
  *((_DWORD *)this + 5) = (char *)this + 8;
  *((_DWORD *)this + 7) = Ogre::Timer::getSystemTick(v2);
  return this;
}


//======================================================================
// Ogre::HardwarePixelBufferManager::~HardwarePixelBufferManager()
// address: 0x00171F1C   size: 0x44 (68 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre26HardwarePixelBufferManagerD1Ev'
void __fastcall Ogre::HardwarePixelBufferManager::~HardwarePixelBufferManager(Ogre::HardwarePixelBufferManager *this)
{
  int v1; // r5
  char *v2; // r6
  char *v4; // r7
  int v5; // r0

  v1 = *((_DWORD *)this + 4);
  v2 = (char *)this + 4;
  v4 = (char *)this + 8;
  *(_DWORD *)this = &off_457698;
  while ( (char *)v1 != v4 )
  {
    v5 = *(_DWORD *)(v1 + 20);
    if ( v5 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
    v1 = sub_391DDC(v1);
  }
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>,std::_Select1st<std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>>>::_M_erase(
    (int)v2,
    *((_DWORD **)this + 3));
  Ogre::Singleton<Ogre::HardwarePixelBufferManager>::ms_Singleton = 0;
}


//======================================================================
// Ogre::HardwarePixelBufferManager::~HardwarePixelBufferManager()
// address: 0x00171F68   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::HardwarePixelBufferManager::~HardwarePixelBufferManager(Ogre::HardwarePixelBufferManager *this)
{
  Ogre::HardwarePixelBufferManager::~HardwarePixelBufferManager(this);
  operator delete(this);
}


//======================================================================
// Ogre::HardwarePixelBufferManager::garbageCollect(void)
// address: 0x00172210   size: 0x38 (56 bytes)
//======================================================================
int __fastcall Ogre::HardwarePixelBufferManager::garbageCollect(Ogre::HardwarePixelBufferManager *this)
{
  int SystemTick; // r0
  int v3; // r3
  unsigned int v4; // r0
  Ogre::HardwarePixelBufferPool **v5; // r5
  int result; // r0

  SystemTick = Ogre::Timer::getSystemTick(this);
  v3 = *((_DWORD *)this + 7);
  v4 = SystemTick - v3;
  if ( v4 > 0x1F4 )
    v4 = 500;
  v5 = *((Ogre::HardwarePixelBufferPool ***)this + 4);
  result = v4 + v3;
  *((_DWORD *)this + 7) = result;
  while ( v5 != (Ogre::HardwarePixelBufferPool **)((char *)this + 8) )
  {
    Ogre::HardwarePixelBufferPool::garbageCollect(v5[5], *((_DWORD *)this + 7));
    result = sub_391DDC(v5);
    v5 = (Ogre::HardwarePixelBufferPool **)result;
  }
  return result;
}


//======================================================================
// Ogre::HardwarePixelBufferManager::createPixelBuffer(Ogre::HardwareBufferUsage,Ogre::TextureDesc const&)
// address: 0x001722A4   size: 0x1E8 (488 bytes)
//======================================================================
int __fastcall Ogre::HardwarePixelBufferManager::createPixelBuffer(_DWORD *a1, Ogre::LockSection *a2, int *a3)
{
  int *v4; // r2
  int v5; // r4
  int v6; // r5
  int v7; // r7
  int v8; // r5
  int v9; // r7
  int v10; // r5
  _DWORD *v11; // r3
  _DWORD *v12; // r2
  _DWORD *v13; // r0
  int v14; // r0
  Ogre::LockSection *v15; // r2
  _DWORD *v16; // r7
  _DWORD *v17; // r4
  _DWORD *v18; // r3
  unsigned int v19; // r3
  int v21; // r5
  int v22; // r0
  _BOOL4 v23; // r7
  _DWORD *v24; // r0
  unsigned int v25; // [sp+4h] [bp-48h]
  int v26; // [sp+Ch] [bp-40h]
  _DWORD *v27; // [sp+10h] [bp-3Ch]
  Ogre::HardwarePixelBufferPool *v28; // [sp+14h] [bp-38h]
  unsigned int v29; // [sp+1Ch] [bp-30h] BYREF
  int v30; // [sp+20h] [bp-2Ch]
  _DWORD *v31; // [sp+24h] [bp-28h] BYREF
  _DWORD *v32; // [sp+28h] [bp-24h]
  int v33; // [sp+2Ch] [bp-20h]
  int v34; // [sp+30h] [bp-1Ch]
  int v35; // [sp+34h] [bp-18h]
  int v36; // [sp+38h] [bp-14h]
  int v37; // [sp+3Ch] [bp-10h]
  int v38; // [sp+40h] [bp-Ch]
  int v39; // [sp+44h] [bp-8h]

  v5 = *a3;
  v6 = a3[1];
  v7 = a3[2];
  v4 = a3 + 3;
  v33 = v5;
  v34 = v6;
  v35 = v7;
  v8 = v4[1];
  v9 = v4[2];
  v36 = *v4;
  v37 = v8;
  v38 = v9;
  v39 = v4[3];
  if ( v5 == 2 || (v39 = 0, v5 != 1) )
    v36 = 1;
  v10 = 2146271213 * (_DWORD)a2
      - 286331154 * v39
      - 286331154 * v38
      + 2146271213 * (2146271213 * (_DWORD)a2 - 286331154 * v39 + v36);
  v11 = (_DWORD *)a1[3];
  v26 = (int)(a1 + 1);
  v25 = v10
      - 286331154 * v37
      + 2146271213 * (v10 + v35)
      - 286331154 * v34
      + 2146271213 * (v10 - 286331154 * v37 + 2146271213 * (v10 + v35) + v5);
  v27 = a1 + 2;
  v12 = a1 + 2;
  while ( v11 != nullptr )
  {
    if ( v11[4] < v25 )
    {
      v13 = (_DWORD *)v11[3];
      v11 = v12;
    }
    else
    {
      v13 = (_DWORD *)v11[2];
    }
    v12 = v11;
    v11 = v13;
  }
  if ( v12 != v27 && v25 >= v12[4] )
  {
    v15 = (Ogre::LockSection *)v12[5];
    v28 = v15;
    return Ogre::HardwarePixelBufferPool::allocBuffer(v28, a2, v15);
  }
  v14 = (*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1);
  v16 = (_DWORD *)a1[3];
  v17 = v27;
  v28 = (Ogre::HardwarePixelBufferPool *)v14;
  while ( v16 != nullptr )
  {
    if ( v16[4] < v25 )
    {
      v18 = (_DWORD *)v16[3];
      v16 = v17;
    }
    else
    {
      v18 = (_DWORD *)v16[2];
    }
    v17 = v16;
    v16 = v18;
  }
  if ( v17 == v27 || v25 < v17[4] )
  {
    v30 = 0;
    v29 = v25;
    if ( v17 == v27 )
    {
      if ( a1[6] != 0 )
      {
        v21 = a1[5];
        if ( *(_DWORD *)(v21 + 16) < v25 )
          goto LABEL_42;
      }
    }
    else
    {
      v19 = v17[4];
      if ( v25 >= v19 )
      {
        if ( v19 >= v25 )
          goto LABEL_23;
        if ( v17 != (_DWORD *)a1[5] )
        {
          v22 = sub_391DDC(v17);
          v15 = *(Ogre::LockSection **)(v22 + 16);
          if ( v25 >= (unsigned int)v15 )
          {
            std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>,std::_Select1st<std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>>>::_M_get_insert_unique_pos(
              (int *)&v31,
              v26,
              &v29);
            v16 = v31;
            v17 = v32;
          }
          else if ( v17[3] != 0 )
          {
            v17 = (_DWORD *)v22;
            v16 = (_DWORD *)v22;
          }
        }
        v21 = (int)v17;
        v17 = v16;
LABEL_40:
        if ( v21 == 0 )
          goto LABEL_23;
        v23 = true;
        if ( v17 != nullptr )
        {
LABEL_45:
          v24 = (_DWORD *)operator new(0x18u);
          v17 = v24;
          if ( v24 != (_DWORD *)-16 )
          {
            v24[4] = v29;
            v24[5] = v30;
          }
          sub_391E64(v23, v24, v21, v27);
          ++a1[6];
          goto LABEL_23;
        }
LABEL_42:
        v23 = (_DWORD *)v21 == v27 || v25 < *(_DWORD *)(v21 + 16);
        goto LABEL_45;
      }
      if ( v17 == (_DWORD *)a1[4] )
      {
        v21 = (int)v17;
        goto LABEL_40;
      }
      v21 = sub_391E44(v17);
      if ( *(_DWORD *)(v21 + 16) < v25 )
      {
        if ( *(_DWORD *)(v21 + 12) != 0 )
          v21 = (int)v17;
        else
          v17 = nullptr;
        goto LABEL_40;
      }
    }
    std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>,std::_Select1st<std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::HardwarePixelBufferPool *>>>::_M_get_insert_unique_pos(
      (int *)&v31,
      v26,
      &v29);
    v17 = v31;
    v21 = (int)v32;
    goto LABEL_40;
  }
LABEL_23:
  v17[5] = v28;
  return Ogre::HardwarePixelBufferPool::allocBuffer(v28, a2, v15);
}

