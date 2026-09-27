// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_2C0000

//======================================================================
// sub_2C070C
// address: 0x002C070C   size: 0x5E (94 bytes)
//======================================================================
double __fastcall sub_2C070C(
        char a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        unsigned int a8)
{
  double v8; // r4
  unsigned int v9; // r1
  unsigned int v10; // r6
  unsigned int v11; // r5
  unsigned int v12; // r3

  LODWORD(v8) = a5;
  v9 = a6;
  if ( (a1 & 0xFu) > 7 )
  {
    v10 = a5;
    v11 = a6;
  }
  else
  {
    v10 = a3;
    if ( (a1 & 0xFu) <= 3 )
    {
      v11 = a4;
      goto LABEL_9;
    }
    v11 = a4;
  }
  if ( (a1 & 0xD) == 0xC )
  {
    LODWORD(v8) = a3;
    v9 = a4;
  }
  else
  {
    LODWORD(v8) = a7;
    v9 = a8;
  }
LABEL_9:
  v12 = v11;
  if ( (a1 & 1) != 0 )
    v12 = v11 + 0x80000000;
  HIDWORD(v8) = v9;
  if ( (a1 & 2) != 0 )
    HIDWORD(v8) = v9 + 0x80000000;
  return COERCE_DOUBLE(__PAIR64__(v12, v10)) + v8;
}


//======================================================================
// sub_2C1116
// address: 0x002C1116   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_2C1116(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_2C2CFC
// address: 0x002C2CFC   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_2C2CFC(char *a1, int a2)
{
  _DWORD *v3; // r6
  int i; // r4
  int v5; // r3
  _DWORD *v6; // r4
  _BYTE v8[4]; // [sp+10h] [bp-Ch] BYREF
  _DWORD *v9; // [sp+14h] [bp-8h] BYREF

  sub_3BF0BC((int)v8, a1);
  v3 = &unk_51652C;
  for ( i = dword_516530; i != 0; i = v5 )
  {
    if ( std::operator<<char>() != 0 )
    {
      v5 = *(_DWORD *)(i + 12);
      i = (int)v3;
    }
    else
    {
      v5 = *(_DWORD *)(i + 8);
    }
    v3 = (_DWORD *)i;
  }
  v6 = v3;
  if ( v3 == (_DWORD *)&unk_51652C || std::operator<<char>() != 0 )
  {
    v9 = v8;
    v6 = std::_Rb_tree<std::string,std::pair<std::string const,BlockMaterial * (*)(void)>,std::_Select1st<std::pair<std::string const,BlockMaterial * (*)(void)>>,std::less<std::string>,std::allocator<std::pair<std::string const,BlockMaterial * (*)(void)>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string &&>,std::tuple<>>(
           &dword_516528,
           (int)v3,
           (int)&unk_446585,
           &v9);
  }
  v6[5] = a2;
  return sub_3BDF80(v8);
}


//======================================================================
// sub_2C3DB8
// address: 0x002C3DB8   size: 0x148 (328 bytes)
//======================================================================
unsigned int __fastcall sub_2C3DB8(int a1, unsigned int a2)
{
  int v3; // r2
  unsigned int v4; // r3
  int v5; // r7
  int v6; // r2
  unsigned int v7; // r5
  unsigned int v8; // r3
  int v9; // r3
  unsigned int i; // r2
  unsigned int result; // r0
  __int16 *v12; // r5
  _BYTE *v13; // r3
  _BYTE *v14; // r5
  unsigned int v15; // [sp+0h] [bp-24h]
  unsigned int v16; // [sp+4h] [bp-20h]
  int v17; // [sp+8h] [bp-1Ch]
  int v18; // [sp+Ch] [bp-18h]
  _DWORD v19[5]; // [sp+10h] [bp-14h] BYREF

  BlockGeomTemplate::getFaceVerts(*(_DWORD *)(a1 + 12), v19, a2);
  v3 = *(_DWORD *)(a1 + 24);
  v16 = -858993459 * ((*(_DWORD *)(a1 + 28) - v3) >> 2);
  v4 = v16 + v19[0];
  if ( v16 + v19[0] <= v16 )
  {
    if ( v4 < v16 )
      *(_DWORD *)(a1 + 28) = v3 + 20 * v4;
  }
  else
  {
    std::vector<BlockGeomVert>::_M_default_append((void **)(a1 + 24), v19[0]);
  }
  v5 = 20 * v16;
  j_memcpy((void *)(*(_DWORD *)(a1 + 24) + 20 * v16), (const void *)v19[2], 20 * v19[0]);
  v6 = *(_DWORD *)(a1 + 36);
  v7 = (*(_DWORD *)(a1 + 40) - v6) >> 1;
  v8 = v7 + v19[1];
  if ( v7 + v19[1] <= v7 )
  {
    if ( v8 < v7 )
      *(_DWORD *)(a1 + 40) = v6 + 2 * v8;
  }
  else
  {
    std::vector<unsigned short>::_M_default_append((void **)(a1 + 36), v19[1]);
  }
  v9 = 2 * v7;
  for ( i = v7; i < v19[1] + v7; ++i )
  {
    *(_WORD *)(*(_DWORD *)(a1 + 36) + v9) = *(_WORD *)(v19[3] - 2 * v7 + v9) + v16;
    v9 += 2;
  }
  v17 = *(_DWORD *)(a1 + 16) / 4;
  v15 = v16;
  v18 = *(_DWORD *)(a1 + 20) / 4;
  while ( 1 )
  {
    result = v16;
    if ( v15 >= v16 + v19[0] )
      break;
    v12 = (__int16 *)(*(_DWORD *)(a1 + 24) + v5);
    *v12 = 16 * (*v12 + 100 * (*(_DWORD *)a1 - v17)) / *(_DWORD *)(a1 + 16);
    v12[1] = 16 * (v12[1] + 100 * (*(_DWORD *)(a1 + 4) - v18)) / *(_DWORD *)(a1 + 20);
    v13 = (_BYTE *)(*(_DWORD *)(a1 + 24) + v5);
    v13[12] = *(_BYTE *)(a1 + 10);
    v13[13] = *(_BYTE *)(a1 + 9);
    v13[14] = *(_BYTE *)(a1 + 8);
    v13[15] = *(_BYTE *)(a1 + 11);
    v14 = (_BYTE *)(*(_DWORD *)(a1 + 24) + v5);
    v14[16] = 255 * *(_DWORD *)a1 / *(_DWORD *)(a1 + 16);
    v5 += 20;
    v14[17] = 255 * *(_DWORD *)(a1 + 4) / *(_DWORD *)(a1 + 20);
    v14[18] = -1;
    ++v15;
  }
  return result;
}


//======================================================================
// sub_2C4F68
// address: 0x002C4F68   size: 0x172 (370 bytes)
//======================================================================
int __fastcall sub_2C4F68(int a1, int a2, _DWORD *a3, float *a4, Ogre::Vector3 *a5, int a6)
{
  int v7; // r2
  int v8; // r1
  int v9; // r0
  float v10; // r5
  int v11; // r3
  float v12; // r6
  float v14; // [sp+0h] [bp-2Ch]
  _DWORD v18[3]; // [sp+10h] [bp-1Ch] BYREF
  float v19[4]; // [sp+1Ch] [bp-10h] BYREF

  if ( (dword_516544 & 1) == 0 && _cxa_guard_acquire(&dword_516544) != 0 )
  {
    CollisionDetect::CollisionDetect((CollisionDetect *)&unk_516548);
    _cxa_guard_release(&dword_516544);
    sub_390BFC(&unk_516548, (void (*)(void *))CollisionDetect::~CollisionDetect);
  }
  v7 = 100 * a3[1];
  v8 = a3[2];
  v18[0] = 100 * *a3;
  v18[1] = v7;
  LODWORD(v19[1]) = v7 + 100;
  v18[2] = 100 * v8;
  LODWORD(v19[0]) = v18[0] + 100;
  LODWORD(v19[2]) = 100 * v8 + 100;
  CollisionDetect::reset((CollisionDetect *)&unk_516548, (const WCoord *)v18, (const WCoord *)v19);
  (*(void (__fastcall **)(int, void *, int, _DWORD *))(*(_DWORD *)a1 + 36))(a1, &unk_516548, a2, a3);
  v9 = CollisionDetect::intersectRay((CollisionDetect *)&unk_516548, (const Ogre::Vector3 *)a4, a5, v19);
  if ( v9 < 0 )
    return 0;
  if ( a6 != 0 )
  {
    *(_DWORD *)(a6 + 40) = dword_516564;
    *(_DWORD *)(a6 + 44) = dword_516568;
    *(_DWORD *)(a6 + 48) = dword_51656C;
    *(_DWORD *)(a6 + 52) = dword_516570;
    *(_DWORD *)(a6 + 56) = dword_516574;
    *(_DWORD *)(a6 + 60) = dword_516578;
    v10 = v19[0];
    *(_DWORD *)(a6 + 4) = *a3;
    *(_DWORD *)(a6 + 8) = a3[1];
    v11 = a3[2];
    *(float *)(a6 + 24) = v10;
    *(_DWORD *)(a6 + 12) = v11;
    *(_DWORD *)(a6 + 16) = v9 != 7 ? v9 : 0;
    v14 = (float)((float)((float)(v10 * *((float *)a5 + 1)) + a4[1]) / 100.0) - (float)(int)a3[1];
    v12 = (float)((float)((float)(v10 * *((float *)a5 + 2)) + a4[2]) / 100.0) - (float)(int)a3[2];
    *(float *)(a6 + 28) = (float)((float)((float)(v10 * *(float *)a5) + *a4) / 100.0) - (float)(int)*a3;
    *(float *)(a6 + 36) = v12;
    *(float *)(a6 + 32) = v14;
  }
  return 1;
}


//======================================================================
// sub_2C6EA0
// address: 0x002C6EA0   size: 0x22 (34 bytes)
//======================================================================
bool __fastcall sub_2C6EA0(int *a1, int *a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r4
  int v5; // r1
  _BOOL4 result; // r0

  v2 = *a2;
  v3 = *a1;
  v4 = a1[1];
  v5 = a2[1];
  result = true;
  if ( v3 >= v2 )
  {
    result = false;
    if ( v3 <= v2 )
      return v4 < v5;
  }
  return result;
}


//======================================================================
// sub_2C6EC2
// address: 0x002C6EC2   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_2C6EC2(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}


//======================================================================
// sub_2C6ED0
// address: 0x002C6ED0   size: 0x100 (256 bytes)
//======================================================================
int __fastcall sub_2C6ED0(World *this, int a2, const WCoord *a3)
{
  int result; // r0
  int v6; // r2
  int v7; // r5
  int isBlockLiquid; // r0
  int v9; // r2
  int v10; // r2
  int v11; // r3
  int v12; // r3
  int v13; // r12
  int v14; // r2
  int v15; // r3
  int v16; // [sp+0h] [bp-1Ch] BYREF
  int v17; // [sp+4h] [bp-18h]
  int v18; // [sp+8h] [bp-14h]
  _DWORD v19[4]; // [sp+Ch] [bp-10h] BYREF

  if ( a2 == 3 )
  {
    result = World::isBlockLiquid(this, a3);
    if ( result != 0 )
    {
      v6 = *((_DWORD *)a3 + 2) + dword_516660;
      v7 = *(_DWORD *)a3;
      v17 = *((_DWORD *)a3 + 1) + dword_51665C;
      v16 = v7 + dword_516658;
      v18 = v6;
      isBlockLiquid = World::isBlockLiquid(this, (const WCoord *)&v16);
      v9 = 0;
      if ( isBlockLiquid != 0 )
      {
        v10 = *((_DWORD *)a3 + 1) + dword_516668;
        v11 = *((_DWORD *)a3 + 2) + dword_51666C;
        v19[0] = *(_DWORD *)a3 + dword_516664;
        v19[1] = v10;
        v19[2] = v11;
        return (unsigned __int8)World::isBlockNormalCube(this, (const WCoord *)v19) ^ 1;
      }
      return v9;
    }
  }
  else
  {
    v12 = *(_DWORD *)a3;
    v13 = *((_DWORD *)a3 + 2) + dword_516660;
    v17 = *((_DWORD *)a3 + 1) + dword_51665C;
    v16 = v12 + dword_516658;
    v18 = v13;
    if ( World::doesBlockHaveSolidTopSurface(this, (const WCoord *)&v16) == 0
      || World::getBlockID(this, (const WCoord *)&v16) == 1
      || World::isBlockNormalCube(this, a3) != 0
      || World::isBlockLiquid(this, a3) != 0 )
    {
      return 0;
    }
    else
    {
      v14 = *((_DWORD *)a3 + 1) + dword_516668;
      v15 = *((_DWORD *)a3 + 2) + dword_51666C;
      v19[0] = *(_DWORD *)a3 + dword_516664;
      v19[1] = v14;
      v19[2] = v15;
      return (unsigned __int8)World::isBlockNormalCube(this, (const WCoord *)v19) ^ 1;
    }
  }
  return result;
}


//======================================================================
// sub_2C9E34
// address: 0x002C9E34   size: 0x2C2 (706 bytes)
//======================================================================
int __fastcall sub_2C9E34(World *a1, int a2, const WCoord *a3)
{
  int BlockLightByType; // r5
  int v5; // r3
  int v6; // r0
  int i; // r6
  int *v8; // r3
  int v9; // r6
  int v10; // r1
  char *BlockLight; // r0
  int *v12; // r5
  DefManager *v13; // r6
  int v14; // r2
  int BlockID; // r0
  int v16; // r6
  int v17; // r2
  int v18; // r6
  int v19; // r3
  char *v20; // r6
  int v21; // r7
  int v22; // r0
  int result; // r0
  int *v24; // r5
  int v25; // [sp+0h] [bp-20054h]
  int v26; // [sp+4h] [bp-20050h]
  int v27; // [sp+4h] [bp-20050h]
  int v28; // [sp+8h] [bp-2004Ch]
  int v29; // [sp+8h] [bp-2004Ch]
  int v30; // [sp+10h] [bp-20044h]
  char v33; // [sp+1Ch] [bp-20038h]
  int v34; // [sp+2Ch] [bp-20028h] BYREF
  int v35; // [sp+30h] [bp-20024h]
  int v36; // [sp+34h] [bp-20020h]
  int v37[3]; // [sp+38h] [bp-2001Ch] BYREF
  _DWORD v38[3]; // [sp+44h] [bp-20010h] BYREF
  _DWORD v39[32769]; // [sp+50h] [bp-20004h] BYREF

  BlockLightByType = World::getBlockLightByType(a1, a2, a3);
  v6 = World::calBlockLightValue(a1, a2, a3, v5);
  if ( v6 <= BlockLightByType )
  {
    v30 = 0;
    if ( v6 < BlockLightByType )
    {
      v30 = 1;
      v39[0] = (BlockLightByType << 18) | 0x20820;
      v26 = 0;
      do
      {
        v8 = &v39[v26++];
        v9 = *v8;
        v10 = *((_DWORD *)a3 + 1);
        v34 = (*v8 & 0x3F) - 32 + *(_DWORD *)a3;
        v35 = ((v9 >> 6) & 0x3F) - 32 + v10;
        v36 = ((v9 >> 12) & 0x3F) - 32 + *((_DWORD *)a3 + 2);
        BlockLight = World::getBlockLight(a1, (const WCoord *)&v34);
        v28 = ((int)(unsigned __int8)*BlockLight >> (4 * a2)) & 0xF;
        if ( v28 == ((v9 >> 18) & 0xF) )
        {
          *BlockLight &= ~(15 << (4 * a2));
          World::markBlockForUpdate(a1, (const WCoord *)&v34);
          if ( v28 != 0
            && ((v34 - *(_DWORD *)a3 + ((v34 - *(_DWORD *)a3) >> 31)) ^ ((v34 - *(_DWORD *)a3) >> 31))
             + ((v35 - *((_DWORD *)a3 + 1) + ((v35 - *((_DWORD *)a3 + 1)) >> 31)) ^ ((v35 - *((_DWORD *)a3 + 1)) >> 31))
             + ((v36 - *((_DWORD *)a3 + 2) + ((v36 - *((_DWORD *)a3 + 2)) >> 31)) ^ ((v36 - *((_DWORD *)a3 + 2)) >> 31)) <= 15 )
          {
            v12 = g_DirectionCoord;
            do
            {
              operator+(v37, &v34, v12);
              v13 = (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton;
              BlockID = World::getBlockID(a1, (const WCoord *)v37, v14, (int)&Ogre::Singleton<DefManager>::ms_Singleton);
              v16 = *(_DWORD *)(DefManager::getBlockDef(v13, BlockID) + 64);
              if ( v16 <= 0 )
                v16 = 1;
              v25 = World::getBlockLightByType(a1, a2, (const WCoord *)v37);
              if ( v25 == v28 - v16 && v30 <= 0x7FFF )
              {
                operator-(v38, v37, (int *)a3);
                v39[v30++] = ((v38[2] + 32) << 12) | ((v38[1] + 32) << 6) | (v38[0] + 32) | (v25 << 18);
              }
              v12 += 3;
            }
            while ( v12 != (int *)&slotelements );
          }
        }
      }
      while ( v26 < v30 );
    }
  }
  else
  {
    v30 = 1;
    v39[0] = 133152;
  }
  v33 = 4 * a2;
  for ( i = 0; ; i = v29 + 1 )
  {
    v29 = i;
    result = v30;
    if ( i >= v30 )
      break;
    v17 = v39[i];
    v18 = *((_DWORD *)a3 + 1);
    v34 = (v17 & 0x3F) - 32 + *(_DWORD *)a3;
    v19 = ((v17 >> 12) & 0x3F) - 32 + *((_DWORD *)a3 + 2);
    v35 = ((v17 >> 6) & 0x3F) - 32 + v18;
    v36 = v19;
    v20 = World::getBlockLight(a1, (const WCoord *)&v34);
    v21 = ((int)(unsigned __int8)*v20 >> v33) & 0xF;
    v22 = World::calBlockLightValue(a1, a2, (const WCoord *)&v34, 15);
    v27 = v22;
    if ( v22 != v21 )
    {
      *v20 = *v20 & ~(15 << (4 * a2)) | ((_BYTE)v22 << v33);
      World::markBlockForUpdate(a1, (const WCoord *)&v34);
      if ( v27 > v21
        && v30 <= 32761
        && ((v34 - *(_DWORD *)a3 + ((v34 - *(_DWORD *)a3) >> 31)) ^ ((v34 - *(_DWORD *)a3) >> 31))
         + ((v35 - *((_DWORD *)a3 + 1) + ((v35 - *((_DWORD *)a3 + 1)) >> 31)) ^ ((v35 - *((_DWORD *)a3 + 1)) >> 31))
         + ((v36 - *((_DWORD *)a3 + 2) + ((v36 - *((_DWORD *)a3 + 2)) >> 31)) ^ ((v36 - *((_DWORD *)a3 + 2)) >> 31)) <= 15 )
      {
        v24 = g_DirectionCoord;
        do
        {
          operator+(v37, &v34, v24);
          if ( World::getBlockLightByType(a1, a2, (const WCoord *)v37) < v27 )
          {
            operator-(v38, v37, (int *)a3);
            v39[v30++] = ((v38[2] + 32) << 12) | ((v38[1] + 32) << 6) | (v38[0] + 32);
          }
          v24 += 3;
        }
        while ( v24 != (int *)&slotelements );
      }
    }
  }
  return result;
}


//======================================================================
// sub_2CC3AC
// address: 0x002CC3AC   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_2CC3AC(int a1)
{
  int BlockDef; // r4
  int v3; // r3

  BlockDef = DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, a1);
  v3 = 0;
  if ( *(float *)(BlockDef + 36) != -1.0 )
  {
    BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, a1);
    return *(_DWORD *)(BlockDef + 20) - 2 - (*(_DWORD *)(BlockDef + 20) - 3 + (*(_DWORD *)(BlockDef + 20) == 2));
  }
  return v3;
}


//======================================================================
// sub_2CF1A0
// address: 0x002CF1A0   size: 0x16C (364 bytes)
//======================================================================
void __fastcall sub_2CF1A0(int a1, _DWORD *a2, _DWORD *a3, int a4, Ogre::VertexFormat *a5)
{
  int v8; // r0
  unsigned int v9; // r0
  int v10; // r3
  _DWORD *v11; // r3
  _DWORD *v12; // r4
  _DWORD *v13; // r5
  _WORD *v14; // r7
  char *v15; // r0
  unsigned int v16; // r2
  char *j; // r3
  int v18; // r1
  Ogre::IndexData *v19; // [sp+4h] [bp-40h]
  int v20; // [sp+8h] [bp-3Ch]
  unsigned int i; // [sp+Ch] [bp-38h]
  Ogre::VertexData *v22; // [sp+10h] [bp-34h]
  char *v23; // [sp+14h] [bp-30h]
  int v25; // [sp+1Ch] [bp-28h]
  int v26; // [sp+20h] [bp-24h]
  _DWORD *v27; // [sp+24h] [bp-20h]
  unsigned int v28; // [sp+2Ch] [bp-18h] BYREF
  unsigned int v29; // [sp+30h] [bp-14h] BYREF
  _DWORD *v30; // [sp+34h] [bp-10h] BYREF
  Ogre::VertexData *v31; // [sp+38h] [bp-Ch]
  Ogre::IndexData *v32; // [sp+3Ch] [bp-8h]

  GetVertexIndexNum((int)a3, a4, &v28, &v29);
  if ( v28 != 0 && v29 != 0 )
  {
    v22 = (Ogre::VertexData *)operator new(0x50u);
    Ogre::VertexData::VertexData(v22, a5, v28);
    v19 = (Ogre::IndexData *)operator new(0x28u);
    Ogre::IndexData::IndexData(v19, v29);
    v25 = Ogre::VertexData::lock(v22);
    v8 = Ogre::IndexData::lock(v19);
    v23 = (char *)v8;
    if ( v25 != 0 && v8 != 0 )
    {
      v12 = a3;
      v27 = &a3[3 * a4];
      v20 = 0;
      while ( v12 != v27 )
      {
        v13 = (_DWORD *)v12[2];
        v26 = 100 * *(_DWORD *)(*v12 + 12);
        v14 = (_WORD *)(v25 + 20 * v20);
        for ( i = 0; i < -858993459 * ((v13[1] - *v13) >> 2); ++i )
        {
          j_memcpy(v14, (const void *)(*v13 + 20 * i), 0x14u);
          v14[1] += v26;
          v14 += 10;
        }
        v15 = v23;
        v16 = 0;
        for ( j = v23; ; j += 2 )
        {
          v18 = v13[3];
          v23 = j;
          if ( v16 >= (v13[4] - v18) >> 1 )
            break;
          ++v16;
          *(_WORD *)j = *(_WORD *)(v18 + j - v15) + v20;
        }
        v12 += 3;
        v20 -= 858993459 * ((v13[1] - *v13) >> 2);
      }
    }
    Ogre::VertexData::unlock((int)v22);
    Ogre::IndexData::unlock((int)v19);
    v9 = v28;
    *((_DWORD *)v19 + 4) = 0;
    *((_DWORD *)v19 + 5) = v9;
    v32 = v19;
    v31 = v22;
    v10 = *a2;
    v30 = a2;
    (*(void (__fastcall **)(_DWORD *))(v10 + 4))(a2);
    v11 = *(_DWORD **)(a1 + 4);
    if ( v11 == *(_DWORD **)(a1 + 8) )
    {
      std::vector<MergeSubMesh>::_M_emplace_back_aux<MergeSubMesh const&>(a1, &v30);
    }
    else
    {
      if ( v11 != nullptr )
      {
        *v11 = v30;
        v11[1] = v31;
        v11[2] = v32;
      }
      *(_DWORD *)(a1 + 4) += 12;
    }
  }
}

