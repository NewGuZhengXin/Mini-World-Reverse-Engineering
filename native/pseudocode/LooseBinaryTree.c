// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: LooseBinaryTree

//======================================================================
// LooseBinaryTree::LooseBinaryTree(unsigned int,WCoord const&,WCoord const&)
// address: 0x002FE9D6   size: 0x60 (96 bytes)
//======================================================================
// Alternative name is '_ZN15LooseBinaryTreeC1EjRK6WCoordS2_'
void __fastcall LooseBinaryTree::LooseBinaryTree(
        LooseBinaryTree *this,
        unsigned int a2,
        const WCoord *a3,
        const WCoord *a4)
{
  int *v5; // r7
  int v6[3]; // [sp+8h] [bp-1Ch] BYREF
  _DWORD v7[4]; // [sp+14h] [bp-10h] BYREF

  *((_DWORD *)this + 1) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = *(_DWORD *)a3;
  *((_DWORD *)this + 4) = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 5) = *((_DWORD *)a3 + 2);
  operator-(v7, (int *)a4, (int *)a3);
  v6[1] = v7[1] / 2;
  v6[0] = v7[0] / 2;
  v6[2] = v7[2] / 2;
  v5 = (int *)operator new(0x54u);
  BinaryTreeNode::BinaryTreeNode(v5, (int)this, 0, 0, v6, v6);
  *(_DWORD *)this = v5;
}


//======================================================================
// LooseBinaryTree::~LooseBinaryTree()
// address: 0x002FEA40   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN15LooseBinaryTreeD1Ev'
void __fastcall LooseBinaryTree::~LooseBinaryTree(BinaryTreeNode **this)
{
  BinaryTreeNode *v1; // r4

  v1 = *this;
  if ( *this != nullptr )
  {
    BinaryTreeNode::~BinaryTreeNode(*this);
    operator delete(v1);
  }
}


//======================================================================
// LooseBinaryTree::detachObject(BinaryTreeNode *,void *)
// address: 0x002FEB70   size: 0xC (12 bytes)
//======================================================================
void __fastcall LooseBinaryTree::detachObject(LooseBinaryTree *this, BinaryTreeNode *a2, void *a3)
{
  BinaryTreeNode::removeObject(a2, a3);
}


//======================================================================
// LooseBinaryTree::pickObjects(std::vector<void *,std::allocator<void *>> &,Ogre::WorldRay const&)
// address: 0x002FED00   size: 0x3E (62 bytes)
//======================================================================
int __fastcall LooseBinaryTree::pickObjects(int *a1, void **a2, Ogre::WorldRay *this)
{
  int v4; // r7
  int v6; // r1
  int v7; // r0
  int v8; // r1
  int v9; // r7
  _DWORD v11[3]; // [sp+0h] [bp-2Ch] BYREF
  _BYTE v12[24]; // [sp+Ch] [bp-20h] BYREF
  int v13; // [sp+24h] [bp-8h]

  v4 = a1[5];
  v6 = a1[4];
  v13 = 2139095039;
  v7 = 10 * v6;
  v8 = 10 * v4;
  v9 = a1[3];
  v11[1] = v7;
  v11[2] = v8;
  v11[0] = 10 * v9;
  Ogre::WorldRay::getRelativeRay(this, (Ogre::Ray *)v12, (const Ogre::WorldPos *)v11);
  return BinaryTreeNode::pickObjects(*a1, a2, (Ogre::Ray *)v12);
}


//======================================================================
// LooseBinaryTree::getObjectsInBox(std::vector<void *,std::allocator<void *>> &,WCoord const&,WCoord const&)
// address: 0x002FED84   size: 0x36 (54 bytes)
//======================================================================
int __fastcall LooseBinaryTree::getObjectsInBox(int *a1, void **a2, int *a3, int *a4)
{
  int *v4; // r6
  _DWORD v9[3]; // [sp+8h] [bp-Ch] BYREF
  _DWORD v10[4]; // [sp+14h] [bp+0h] BYREF

  v4 = a1 + 3;
  operator-(v9, a3, a1 + 3);
  operator-(v10, a4, v4);
  return BinaryTreeNode::getObjectsInBox(*a1, a2, v9, v10);
}


//======================================================================
// LooseBinaryTree::attachObject(WCoord const&,WCoord const&,void *)
// address: 0x002FEE34   size: 0x8C (140 bytes)
//======================================================================
BinaryTreeNode *__fastcall LooseBinaryTree::attachObject(
        LooseBinaryTree *this,
        const WCoord *a2,
        const WCoord *a3,
        void *a4)
{
  int v7; // kr00_4
  int v8; // r12
  _DWORD *v9; // r0
  BinaryTreeNode *ContainNode; // r4
  _DWORD v13[3]; // [sp+Ch] [bp-28h] BYREF
  _DWORD v14[3]; // [sp+18h] [bp-1Ch] BYREF
  int v15; // [sp+24h] [bp-10h] BYREF
  int v16; // [sp+28h] [bp-Ch]
  int v17; // [sp+2Ch] [bp-8h]

  v7 = *((_DWORD *)a2 + 1) + *((_DWORD *)a3 + 1);
  v8 = (*((_DWORD *)a2 + 2) + *((_DWORD *)a3 + 2)) / 2;
  v15 = (*(_DWORD *)a2 + *(_DWORD *)a3) / 2;
  v16 = v7 / 2;
  v17 = v8;
  operator-(v13, &v15, (int *)this + 3);
  operator-(&v15, (int *)a3, (int *)a2);
  v14[1] = v16 / 2;
  v14[2] = v17 / 2;
  v9 = *(_DWORD **)this;
  v14[0] = v15 / 2;
  ContainNode = (BinaryTreeNode *)BinaryTreeNode::getContainNode(v9, (const WCoord *)v13, (const WCoord *)v14);
  BinaryTreeNode::addObject(ContainNode, a4);
  return ContainNode;
}


//======================================================================
// LooseBinaryTree::updateObject(BinaryTreeNode *,WCoord const&,WCoord const&,void *)
// address: 0x002FEEC0   size: 0x54 (84 bytes)
//======================================================================
BinaryTreeNode *__fastcall LooseBinaryTree::updateObject(
        LooseBinaryTree *this,
        BinaryTreeNode *a2,
        const WCoord *a3,
        const WCoord *a4,
        void *a5)
{
  int *v8; // [sp+0h] [bp-24h]
  _DWORD v10[3]; // [sp+8h] [bp-1Ch] BYREF
  _DWORD v11[4]; // [sp+14h] [bp-10h] BYREF

  v8 = (int *)((char *)this + 12);
  operator-(v10, (int *)a3, (int *)this + 3);
  operator-(v11, (int *)a4, v8);
  if ( BinaryTreeNode::isInNode(a2, v10, v11) == 0 )
  {
    LooseBinaryTree::detachObject(this, a2, a5);
    return LooseBinaryTree::attachObject(this, (const WCoord *)v10, (const WCoord *)v11, a5);
  }
  return a2;
}

