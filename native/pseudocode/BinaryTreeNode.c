// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BinaryTreeNode

//======================================================================
// BinaryTreeNode::BinaryTreeNode(LooseBinaryTree *,BinaryTreeNode*,int,WCoord const&,WCoord const&)
// address: 0x002FE6DE   size: 0xE2 (226 bytes)
//======================================================================
// Alternative name is '_ZN14BinaryTreeNodeC1EP15LooseBinaryTreePS_iRK6WCoordS5_'
int *__fastcall BinaryTreeNode::BinaryTreeNode(int *a1, int a2, int a3, int a4, int *a5, int *a6)
{
  int v8; // r7
  int v9; // kr00_4
  int v10; // r0
  int v11; // r2
  int v12; // r0
  int v13; // r3
  int v14; // r0
  int v15; // r3
  int v16; // r2
  int v17; // r3
  int v19; // [sp+Ch] [bp-24h]
  int v20; // [sp+10h] [bp-20h]
  _DWORD v21[4]; // [sp+20h] [bp-10h] BYREF
  int v22; // [sp+30h] [bp+0h] BYREF
  int v23[4]; // [sp+3Ch] [bp+Ch] BYREF

  *a1 = *a5;
  a1[1] = a5[1];
  a1[2] = a5[2];
  a1[3] = *a6;
  a1[4] = a6[1];
  v8 = a6[2];
  a1[16] = a3;
  a1[5] = v8;
  a1[12] = a4;
  a1[18] = 0;
  a1[19] = 0;
  a1[20] = 0;
  a1[17] = a2;
  operator-(&v22, a1, a1 + 3);
  v9 = a1[3];
  v19 = a1[4];
  v20 = a1[5];
  v23[2] = v20 / 2;
  v23[0] = v9 / 2;
  v23[1] = v19 / 2;
  operator-(v21, &v22, v23);
  a1[6] = v21[0];
  v10 = a1[1];
  a1[7] = v21[1];
  a1[8] = v21[2];
  v11 = v19 + v10;
  v12 = a1[2];
  a1[10] = v11 + v19 / 2;
  v13 = v20 + v12;
  v14 = *a1;
  a1[11] = v13 + v20 / 2;
  a1[9] = v9 + v14 + v9 / 2;
  ++*(_DWORD *)(a2 + 8);
  a1[14] = 0;
  a1[15] = 0;
  v15 = a6[1] / 2;
  v16 = a6[2];
  if ( *a6 < v15 )
  {
    if ( v15 > v16 )
    {
      v17 = 1;
      goto LABEL_7;
    }
LABEL_4:
    v17 = 2;
LABEL_7:
    a1[13] = v17;
    return a1;
  }
  if ( *a6 < v16 )
    goto LABEL_4;
  a1[13] = 0;
  return a1;
}


//======================================================================
// BinaryTreeNode::~BinaryTreeNode()
// address: 0x002FE7C0   size: 0x3A (58 bytes)
//======================================================================
// Alternative name is '_ZN14BinaryTreeNodeD1Ev'
void __fastcall BinaryTreeNode::~BinaryTreeNode(BinaryTreeNode *this)
{
  void *v2; // r5
  void *v3; // r5

  --*(_DWORD *)(*((_DWORD *)this + 17) + 8);
  v2 = *((void **)this + 14);
  if ( v2 != nullptr )
  {
    BinaryTreeNode::~BinaryTreeNode(*((BinaryTreeNode **)this + 14));
    operator delete(v2);
  }
  v3 = *((void **)this + 15);
  if ( v3 != nullptr )
  {
    BinaryTreeNode::~BinaryTreeNode(*((BinaryTreeNode **)this + 15));
    operator delete(v3);
  }
  sub_2FE6D2(*((void **)this + 18));
}


//======================================================================
// BinaryTreeNode::getContainNode(WCoord const&,WCoord const&)
// address: 0x002FE7FC   size: 0x156 (342 bytes)
//======================================================================
_DWORD *__fastcall BinaryTreeNode::getContainNode(_DWORD *this, const WCoord *a2, const WCoord *a3)
{
  _DWORD *v3; // r4
  int v6; // r12
  int v7; // r2
  int v8; // r1
  int v9; // r3
  int v10; // r0
  int v11; // r7
  int *v12; // r3
  int v13; // r7
  int *v14; // r3
  int v15; // r2
  int v16; // r1
  _BOOL4 v17; // [sp+8h] [bp-3Ch]
  int *v18; // [sp+14h] [bp-30h]
  int v19; // [sp+18h] [bp-2Ch]
  _DWORD *v20; // [sp+1Ch] [bp-28h]
  int v21; // [sp+20h] [bp-24h]
  int v22[3]; // [sp+28h] [bp-1Ch] BYREF
  int v23[4]; // [sp+34h] [bp-10h] BYREF

  v3 = this;
  if ( *(this + 12) < *(_DWORD *)(*(this + 17) + 4) )
  {
    v6 = *(this + 3);
    if ( *(_DWORD *)a3 <= v6 / 4 )
    {
      v7 = *(this + 4);
      if ( *((_DWORD *)a3 + 1) <= v7 / 4 )
      {
        v8 = *(this + 5);
        if ( *((_DWORD *)a3 + 2) <= v8 / 4 )
        {
          v9 = *(this + 13);
          if ( v9 != 0 )
          {
            v17 = true;
            if ( v9 == 1 )
            {
              v10 = *((_DWORD *)a2 + 1);
              v11 = v3[1];
            }
            else
            {
              v10 = *((_DWORD *)a2 + 2);
              v11 = v3[2];
            }
            if ( v10 <= v11 )
              v17 = false;
          }
          else
          {
            v17 = *(_DWORD *)a2 > *this;
          }
          v20 = &v3[v17];
          if ( v20[14] == 0 )
          {
            v19 = 6 * v9;
            v12 = &dword_5175EC[6 * v9];
            v13 = v12[2];
            v21 = v7 + v12[1] * v7 / 2;
            v22[0] = v6 * *v12 / 2 + v6;
            v22[1] = v21;
            v22[2] = v8 + v13 * v8 / 2;
            v14 = &dword_5175EC[3 * v17 + v19];
            v15 = v7 * v14[1] / 2 + v3[1];
            v16 = v8 * v14[2] / 2 + v3[2];
            v23[0] = *v3 + v6 * *v14 / 2;
            v23[1] = v15;
            v23[2] = v16;
            v18 = (int *)operator new(0x54u);
            BinaryTreeNode::BinaryTreeNode(v18, v3[17], (int)v3, v3[12] + 1, v23, v22);
            v20[14] = v18;
          }
          return (_DWORD *)BinaryTreeNode::getContainNode((BinaryTreeNode *)v20[14], a2, a3);
        }
      }
    }
  }
  return this;
}


//======================================================================
// BinaryTreeNode::isInNode(WCoord const&,WCoord const&)
// address: 0x002FE958   size: 0x40 (64 bytes)
//======================================================================
int __fastcall BinaryTreeNode::isInNode(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v4; // r5
  int result; // r0

  v4 = a1[6];
  result = 0;
  if ( *a2 >= v4 && *a3 <= a1[9] && a2[1] >= a1[7] && a3[1] <= a1[10] && a2[2] >= a1[8] )
    return (unsigned __int8)(((int)a1[11] >> 31) + (a1[11] >= a3[2]) + ((int)a3[2] < 0));
  return result;
}


//======================================================================
// BinaryTreeNode::isOutNode(WCoord const&,WCoord const&)
// address: 0x002FE998   size: 0x3E (62 bytes)
//======================================================================
bool __fastcall BinaryTreeNode::isOutNode(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v4; // r5
  _BOOL4 result; // r0

  v4 = a1[9];
  result = true;
  if ( *a2 <= v4 && *a3 >= a1[6] && a2[1] <= a1[10] && a3[1] >= a1[7] && a2[2] <= a1[11] )
    return a3[2] < a1[8];
  return result;
}


//======================================================================
// BinaryTreeNode::removeObject(void *)
// address: 0x002FEAAC   size: 0xBC (188 bytes)
//======================================================================
void __fastcall BinaryTreeNode::removeObject(BinaryTreeNode *this, void *a2)
{
  _DWORD *v3; // r3
  int v4; // r0
  int v5; // r2
  int v6; // r5
  _DWORD *v7; // r6
  int v8; // r1
  int v9; // r0
  unsigned int v10; // r2
  int i; // r3
  int v12; // r2
  unsigned int v13; // r0
  unsigned int v14; // r5
  char *v15; // r6
  int v16; // r0
  int v17; // r3
  int v18; // r7
  int v19; // r2

  v3 = *((_DWORD **)this + 18);
  v4 = *((_DWORD *)this + 19);
  v5 = 0;
  v6 = (v4 - (int)v3) >> 2;
  while ( v5 != v6 )
  {
    v7 = v3++;
    if ( (void *)*(v3 - 1) == a2 )
    {
      *v7 = *(_DWORD *)(v4 - 4);
      v8 = *((_DWORD *)this + 19);
      v9 = *((_DWORD *)this + 18);
      v10 = (v8 - v9) >> 2;
      if ( v10 - 1 < v10 )
      {
        *((_DWORD *)this + 19) = v9 + 4 * (v10 - 1);
      }
      else if ( (*((_DWORD *)this + 20) - v8) >> 2 == -1 )
      {
        for ( i = 0; i != -1; ++i )
        {
          v12 = 4 * i;
          *(_DWORD *)(v8 + v12) = 0;
        }
        *((_DWORD *)this + 19) -= 4;
      }
      else
      {
        v13 = std::vector<void *>::_M_check_len((_DWORD *)this + 18, 0xFFFFFFFF, (int)"vector::_M_default_append");
        v14 = v13;
        if ( v13 != 0 )
        {
          if ( v13 > 0x3FFFFFFF )
            sub_3BCEB4(v13);
          v15 = (char *)operator new(4 * v13);
        }
        else
        {
          v15 = nullptr;
        }
        v16 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<void *>(
                *((void **)this + 18),
                *((_DWORD *)this + 19),
                v15);
        v17 = 0;
        v18 = v16;
        do
        {
          v19 = 4 * v17++;
          *(_DWORD *)(v16 + v19) = 0;
        }
        while ( v17 != -1 );
        sub_2FE6D2(*((void **)this + 18));
        *((_DWORD *)this + 18) = v15;
        *((_DWORD *)this + 19) = v18 - 4;
        *((_DWORD *)this + 20) = &v15[4 * v14];
      }
      return;
    }
    ++v5;
  }
}


//======================================================================
// BinaryTreeNode::pickObjects(std::vector<void *,std::allocator<void *>> &,Ogre::Ray const&)
// address: 0x002FEC70   size: 0x8E (142 bytes)
//======================================================================
int __fastcall BinaryTreeNode::pickObjects(int a1, void **a2, Ogre::Ray *a3)
{
  int v6; // r0
  int result; // r0
  int v8; // r0
  float v9; // [sp+8h] [bp-24h]
  float v10; // [sp+Ch] [bp-20h]
  float v11; // [sp+Ch] [bp-20h]
  float v12[3]; // [sp+10h] [bp-1Ch] BYREF
  float v13[4]; // [sp+1Ch] [bp-10h] BYREF

  v9 = (float)*(int *)(a1 + 28);
  v10 = (float)*(int *)(a1 + 32);
  v12[0] = (float)*(int *)(a1 + 24);
  v6 = *(_DWORD *)(a1 + 40);
  v12[1] = v9;
  v12[2] = v10;
  v11 = (float)*(int *)(a1 + 44);
  v13[0] = (float)*(int *)(a1 + 36);
  v13[1] = (float)v6;
  v13[2] = v11;
  result = Ogre::Ray::intersectBox(a3, (const Ogre::Vector3 *)v12, (const Ogre::Vector3 *)v13, nullptr);
  if ( result >= 0 )
  {
    std::vector<void *>::_M_range_insert<__gnu_cxx::__normal_iterator<void **,std::vector<void *>>>(
      a2,
      a2[1],
      *(char **)(a1 + 72),
      *(_DWORD *)(a1 + 76));
    v8 = *(_DWORD *)(a1 + 56);
    if ( v8 != 0 )
      BinaryTreeNode::pickObjects(v8, a2, a3);
    result = *(_DWORD *)(a1 + 60);
    if ( result != 0 )
      return BinaryTreeNode::pickObjects(result, a2, a3);
  }
  return result;
}


//======================================================================
// BinaryTreeNode::getObjectsInBox(std::vector<void *,std::allocator<void *>> &,WCoord const&,WCoord const&)
// address: 0x002FED44   size: 0x40 (64 bytes)
//======================================================================
int __fastcall BinaryTreeNode::getObjectsInBox(int a1, void **a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // r4
  int v8; // r0
  int v10; // [sp+0h] [bp-Ch]

  v10 = a1;
  v4 = a1;
  do
  {
    if ( BinaryTreeNode::isOutNode((_DWORD *)v4, a3, a4) )
      break;
    LOBYTE(v10) = 0;
    std::vector<void *>::_M_range_insert<__gnu_cxx::__normal_iterator<void **,std::vector<void *>>>(
      a2,
      a2[1],
      *(char **)(v4 + 72),
      *(_DWORD *)(v4 + 76));
    v8 = *(_DWORD *)(v4 + 56);
    if ( v8 != 0 )
      BinaryTreeNode::getObjectsInBox(v8, a2, a3, a4);
    v4 = *(_DWORD *)(v4 + 60);
  }
  while ( v4 != 0 );
  return v10;
}


//======================================================================
// BinaryTreeNode::addObject(void *)
// address: 0x002FEDBC   size: 0x70 (112 bytes)
//======================================================================
void __fastcall BinaryTreeNode::addObject(BinaryTreeNode *this, void *a2)
{
  _DWORD *v3; // r3
  unsigned int v5; // r0
  int v6; // r6
  unsigned int v7; // r5
  _DWORD *v8; // r3
  int v9; // r7

  v3 = *((_DWORD **)this + 19);
  if ( v3 == *((_DWORD **)this + 20) )
  {
    v5 = std::vector<void *>::_M_check_len((_DWORD *)this + 18, 1u, (int)"vector::_M_emplace_back_aux");
    v6 = 4 * v5;
    if ( v5 != 0 )
    {
      if ( v5 > 0x3FFFFFFF )
        sub_3BCEB4(v5);
      v5 = operator new(4 * v5);
    }
    v7 = v5;
    v8 = (_DWORD *)(v5 + 4 * ((*((_DWORD *)this + 19) - *((_DWORD *)this + 18)) >> 2));
    if ( v8 != nullptr )
      *v8 = a2;
    v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<void *>(
           *((void **)this + 18),
           *((_DWORD *)this + 19),
           (void *)v5);
    sub_2FE6D2(*((void **)this + 18));
    *((_DWORD *)this + 18) = v7;
    *((_DWORD *)this + 19) = v9 + 4;
    *((_DWORD *)this + 20) = v7 + v6;
  }
  else
  {
    if ( v3 != nullptr )
      *v3 = a2;
    *((_DWORD *)this + 19) += 4;
  }
}

