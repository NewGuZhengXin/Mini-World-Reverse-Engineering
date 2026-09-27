// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ListBox::ListGroup

//======================================================================
// ListBox::ListGroup::ListGroup(ListBox::ListGroup const&)
// address: 0x001B822C   size: 0x38 (56 bytes)
//======================================================================
// Alternative name is '_ZN7ListBox9ListGroupC1ERKS0_'
int __fastcall ListBox::ListGroup::ListGroup(int a1, int a2)
{
  int *v4; // r0
  int v5; // r1

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_BYTE *)(a1 + 8) = *(_BYTE *)(a2 + 8);
  v4 = (int *)(a1 + 12);
  v5 = *(_DWORD *)(a2 + 16) - *(_DWORD *)(a2 + 12);
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  std::_Vector_base<Frame *>::_M_create_storage(v4, v5 >> 2);
  *(_DWORD *)(a1 + 16) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(
                           *(void **)(a2 + 12),
                           *(_DWORD *)(a2 + 16),
                           *(void **)(a1 + 12));
  return a1;
}

