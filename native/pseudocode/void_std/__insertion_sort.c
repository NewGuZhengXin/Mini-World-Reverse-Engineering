// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::__insertion_sort

//======================================================================
// void std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>>>>(__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>>>,__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>>>)
// address: 0x0015B0A8   size: 0x48 (72 bytes)
//======================================================================
__int64 __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo>>>(
        __int64 a1)
{
  float *v2; // r4
  float v3; // r7
  __int64 v5; // [sp+0h] [bp-Ch]

  v5 = a1;
  v2 = (float *)(a1 + 8);
  if ( (_DWORD)a1 != HIDWORD(a1) )
  {
    while ( v2 != (float *)HIDWORD(a1) )
    {
      v3 = v2[1];
      LODWORD(v5) = v2 + 2;
      if ( v3 <= *(float *)(a1 + 4) )
      {
        std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo>>>(v2);
      }
      else
      {
        *((float *)&v5 + 1) = *v2;
        std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Ogre::RenderableEffectInfo>(
          (void *)a1,
          (int)v2,
          v5);
        *(float *)(a1 + 4) = v3;
        *(_DWORD *)a1 = HIDWORD(v5);
      }
      v2 += 2;
    }
  }
  return v5;
}


//======================================================================
// void std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*))
// address: 0x0015CE46   size: 0x5C (92 bytes)
//======================================================================
int __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
        int result,
        _DWORD *a2,
        int (__fastcall *a3)(int, _DWORD))
{
  _DWORD *v3; // r5
  _DWORD *v4; // r4
  _DWORD *v5; // r7
  int v6; // r0
  _DWORD *i; // r6
  int v8; // [sp+4h] [bp-10h]

  v3 = (_DWORD *)result;
  v4 = (_DWORD *)(result + 4);
  if ( (_DWORD *)result != a2 )
  {
    while ( 1 )
    {
      v5 = v4;
      if ( v4 == a2 )
        break;
      v6 = a3(*v4, *v3);
      v8 = *v4;
      if ( v6 != 0 )
      {
        result = std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Ogre::ShaderContext *>(
                   v3,
                   (int)v4,
                   (int)(v4 + 1));
        *v3 = v8;
      }
      else
      {
        for ( i = v4 - 1; ; --i )
        {
          result = a3(v8, *i);
          if ( result == 0 )
            break;
          *v5 = *i;
          v5 = i;
        }
        *v5 = v8;
      }
      ++v4;
    }
  }
  return result;
}


//======================================================================
// void std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *,std::allocator<Ogre::FilePkgBase *>>>,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *,std::allocator<Ogre::FilePkgBase *>>>,__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *,std::allocator<Ogre::FilePkgBase *>>>,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *))
// address: 0x0016EBC8   size: 0x42 (66 bytes)
//======================================================================
__int64 __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *>>,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(
        __int64 a1,
        int (__fastcall *a2)(int, _DWORD))
{
  _DWORD *v2; // r5
  int *v4; // r4
  __int64 v6; // [sp+0h] [bp-Ch]

  v6 = a1;
  v2 = (_DWORD *)a1;
  v4 = (int *)(a1 + 4);
  if ( (_DWORD)a1 != HIDWORD(a1) )
  {
    while ( v4 != (int *)HIDWORD(v6) )
    {
      if ( a2(*v4, *v2) != 0 )
      {
        LODWORD(v6) = *v4;
        std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Ogre::FilePkgBase *>(
          v2,
          (int)v4,
          (int)(v4 + 1));
        *v2 = v6;
      }
      else
      {
        std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *>>,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(
          v4,
          a2);
      }
      ++v4;
    }
  }
  return v6;
}


//======================================================================
// void std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>>,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>>,__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>>,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*))
// address: 0x0018D308   size: 0x42 (66 bytes)
//======================================================================
__int64 __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *>>,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(
        __int64 a1,
        int (__fastcall *a2)(int, _DWORD))
{
  _DWORD *v2; // r5
  int *v4; // r4
  __int64 v6; // [sp+0h] [bp-Ch]

  v6 = a1;
  v2 = (_DWORD *)a1;
  v4 = (int *)(a1 + 4);
  if ( (_DWORD)a1 != HIDWORD(a1) )
  {
    while ( v4 != (int *)HIDWORD(v6) )
    {
      if ( a2(*v4, *v2) != 0 )
      {
        LODWORD(v6) = *v4;
        std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Ogre::Entity::BindObj *>(
          v2,
          (int)v4,
          (int)(v4 + 1));
        *v2 = v6;
      }
      else
      {
        std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *>>,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(
          v4,
          a2);
      }
      ++v4;
    }
  }
  return v6;
}


//======================================================================
// void std::__insertion_sort<Ogre::AnimPlayTrack **,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *)>(Ogre::AnimPlayTrack **,Ogre::AnimPlayTrack **,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *))
// address: 0x001928FE   size: 0x42 (66 bytes)
//======================================================================
__int64 __fastcall std::__insertion_sort<Ogre::AnimPlayTrack **,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *)>(
        __int64 a1,
        int (__fastcall *a2)(int, _DWORD))
{
  _DWORD *v2; // r5
  int *v4; // r4
  __int64 v6; // [sp+0h] [bp-Ch]

  v6 = a1;
  v2 = (_DWORD *)a1;
  v4 = (int *)(a1 + 4);
  if ( (_DWORD)a1 != HIDWORD(a1) )
  {
    while ( v4 != (int *)HIDWORD(v6) )
    {
      if ( a2(*v4, *v2) != 0 )
      {
        LODWORD(v6) = *v4;
        std::copy_backward<Ogre::AnimPlayTrack **,Ogre::AnimPlayTrack **>(v2, (int)v4, (int)(v4 + 1));
        *v2 = v6;
      }
      else
      {
        std::__unguarded_linear_insert<Ogre::AnimPlayTrack **,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *)>(
          v4,
          a2);
      }
      ++v4;
    }
  }
  return v6;
}


//======================================================================
// void std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *,std::allocator<Ogre::MaterialParam *>>>,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *)>(__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *,std::allocator<Ogre::MaterialParam *>>>,__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *,std::allocator<Ogre::MaterialParam *>>>,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *))
// address: 0x00196420   size: 0x42 (66 bytes)
//======================================================================
__int64 __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *>>,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *)>(
        __int64 a1,
        int (__fastcall *a2)(int, _DWORD))
{
  _DWORD *v2; // r5
  int *v4; // r4
  __int64 v6; // [sp+0h] [bp-Ch]

  v6 = a1;
  v2 = (_DWORD *)a1;
  v4 = (int *)(a1 + 4);
  if ( (_DWORD)a1 != HIDWORD(a1) )
  {
    while ( v4 != (int *)HIDWORD(v6) )
    {
      if ( a2(*v4, *v2) != 0 )
      {
        LODWORD(v6) = *v4;
        std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Ogre::MaterialParam *>(
          v2,
          (int)v4,
          (int)(v4 + 1));
        *v2 = v6;
      }
      else
      {
        std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *>>,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *)>(
          v4,
          a2);
      }
      ++v4;
    }
  }
  return v6;
}


//======================================================================
// void std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *,std::allocator<Ogre::TileModel *>>>,bool (*)(Ogre::TileModel *,Ogre::TileModel *)>(__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *,std::allocator<Ogre::TileModel *>>>,__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *,std::allocator<Ogre::TileModel *>>>,bool (*)(Ogre::TileModel *,Ogre::TileModel *))
// address: 0x0019EE6C   size: 0x48 (72 bytes)
//======================================================================
__int64 __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *>>,bool (*)(Ogre::TileModel *,Ogre::TileModel *)>(
        __int64 a1,
        int (__fastcall *a2)(int, _DWORD))
{
  _DWORD *v2; // r5
  int *v4; // r4
  __int64 v6; // [sp+0h] [bp-Ch]

  v6 = a1;
  v2 = (_DWORD *)a1;
  v4 = (int *)(a1 + 4);
  if ( (_DWORD)a1 != HIDWORD(a1) )
  {
    while ( v4 != (int *)HIDWORD(v6) )
    {
      if ( a2(*v4, *v2) != 0 )
      {
        LODWORD(v6) = *v4;
        if ( v4 - v2 != 0 )
          j_memmove(&v4[-(v4 - v2) + 1], v2, 4 * (v4 - v2));
        *v2 = v6;
      }
      else
      {
        std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *>>,bool (*)(Ogre::TileModel *,Ogre::TileModel *)>(
          v4,
          a2);
      }
      ++v4;
    }
  }
  return v6;
}


//======================================================================
// void std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>>>>(__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>>>,__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>>>)
// address: 0x0019F82C   size: 0x52 (82 bytes)
//======================================================================
int __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData>>>(
        int result,
        int a2)
{
  int v2; // r5
  int v4; // r4
  _BYTE v5[68]; // [sp+8h] [bp-44h] BYREF

  v2 = result;
  v4 = result + 64;
  if ( result != a2 )
  {
    while ( v4 != a2 )
    {
      if ( Ogre::operator<(v4, v2) )
      {
        Ogre::ModelInstanceData::ModelInstanceData((int)v5, v4);
        std::__copy_move_backward<false,false,std::random_access_iterator_tag>::__copy_move_b<Ogre::ModelInstanceData *,Ogre::ModelInstanceData *>(
          v2,
          v4,
          v4 + 64);
        result = Ogre::ModelInstanceData::operator=(v2, (int)v5);
      }
      else
      {
        result = std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData>>>(v4);
      }
      v4 += 64;
    }
  }
  return result;
}


//======================================================================
// void std::__insertion_sort<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,bool (*)(LayoutFrame const*,LayoutFrame const*))
// address: 0x001B8AD2   size: 0x5C (92 bytes)
//======================================================================
int __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        int result,
        _DWORD *a2,
        int (__fastcall *a3)(int, _DWORD))
{
  _DWORD *v3; // r5
  _DWORD *v4; // r4
  _DWORD *v5; // r7
  int v6; // r0
  _DWORD *i; // r6
  int v8; // [sp+4h] [bp-10h]

  v3 = (_DWORD *)result;
  v4 = (_DWORD *)(result + 4);
  if ( (_DWORD *)result != a2 )
  {
    while ( 1 )
    {
      v5 = v4;
      if ( v4 == a2 )
        break;
      v6 = a3(*v4, *v3);
      v8 = *v4;
      if ( v6 != 0 )
      {
        result = std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Frame *>(
                   v3,
                   (int)v4,
                   (int)(v4 + 1));
        *v3 = v8;
      }
      else
      {
        for ( i = v4 - 1; ; --i )
        {
          result = a3(v8, *i);
          if ( result == 0 )
            break;
          *v5 = *i;
          v5 = i;
        }
        *v5 = v8;
      }
      ++v4;
    }
  }
  return result;
}


//======================================================================
// void std::__insertion_sort<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,bool (*)(LayoutFrame const*,LayoutFrame const*))
// address: 0x001B93CA   size: 0x5C (92 bytes)
//======================================================================
int __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        int result,
        _DWORD *a2,
        int (__fastcall *a3)(int, _DWORD))
{
  _DWORD *v3; // r5
  _DWORD *v4; // r4
  _DWORD *v5; // r7
  int v6; // r0
  _DWORD *i; // r6
  int v8; // [sp+4h] [bp-10h]

  v3 = (_DWORD *)result;
  v4 = (_DWORD *)(result + 4);
  if ( (_DWORD *)result != a2 )
  {
    while ( 1 )
    {
      v5 = v4;
      if ( v4 == a2 )
        break;
      v6 = a3(*v4, *v3);
      v8 = *v4;
      if ( v6 != 0 )
      {
        result = std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<LayoutFrame *>(
                   v3,
                   (int)v4,
                   (int)(v4 + 1));
        *v3 = v8;
      }
      else
      {
        for ( i = v4 - 1; ; --i )
        {
          result = a3(v8, *i);
          if ( result == 0 )
            break;
          *v5 = *i;
          v5 = i;
        }
        *v5 = v8;
      }
      ++v4;
    }
  }
  return result;
}


//======================================================================
// void std::__insertion_sort<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex))
// address: 0x002B093E   size: 0x154 (340 bytes)
//======================================================================
_DWORD *__fastcall std::__insertion_sort<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(
        _DWORD **a1,
        _DWORD *a2,
        int (__fastcall *a3)(int, int, _DWORD, _DWORD),
        int a4)
{
  _DWORD *result; // r0
  int v7; // r3
  int v8; // r7
  int v9; // r4
  int i; // r7
  int *v11; // r3
  int *v12; // r2
  int v13; // r1
  int v14; // r4
  int j; // r1
  _DWORD *v16; // r3
  int *v17; // [sp+4h] [bp-98h]
  int v18; // [sp+4h] [bp-98h]
  int v20; // [sp+10h] [bp-8Ch]
  int v21; // [sp+14h] [bp-88h]
  int v22; // [sp+18h] [bp-84h]
  int v23; // [sp+1Ch] [bp-80h]
  int v24; // [sp+20h] [bp-7Ch]
  int v25; // [sp+24h] [bp-78h]
  int v26[4]; // [sp+28h] [bp-74h] BYREF
  _DWORD v27[4]; // [sp+38h] [bp-64h] BYREF
  _DWORD v28[4]; // [sp+48h] [bp-54h] BYREF
  _DWORD v29[4]; // [sp+58h] [bp-44h] BYREF
  int v30[4]; // [sp+68h] [bp-34h] BYREF
  int *v31[4]; // [sp+78h] [bp-24h] BYREF
  int *v32; // [sp+88h] [bp-14h] BYREF
  int v33; // [sp+8Ch] [bp-10h]
  int v34; // [sp+90h] [bp-Ch]
  int v35; // [sp+94h] [bp-8h]

  result = *a1;
  if ( result != (_DWORD *)*a2 )
  {
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+(v26, a1, 1, a4);
    while ( 1 )
    {
      result = (_DWORD *)*a2;
      if ( v26[0] == *a2 )
        break;
      if ( a3(*(_DWORD *)v26[0], *(_DWORD *)(v26[0] + 4), **a1, (*a1)[1]) != 0 )
      {
        v21 = *(_DWORD *)v26[0];
        v20 = *(_DWORD *)(v26[0] + 4);
        std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v28, a1);
        std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v29, v26);
        std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+(v27, v26, 1, v7);
        v23 = v28[2];
        v17 = (int *)v29[0];
        v22 = v28[0];
        v24 = v28[3];
        v25 = v29[2];
        v8 = v29[1];
        v9 = v29[3];
        std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v31, v27);
        v35 = v9;
        v33 = v8;
        v34 = v25;
        v32 = v17;
        for ( i = ((((v9 - v24) >> 2) - 1) << 6) + (((int)v17 - v8) >> 3) + ((v23 - v22) >> 3); i > 0; i -= v14 )
        {
          v11 = v32;
          v12 = v31[0];
          v18 = ((int)v32 - v33) >> 3;
          v13 = ((char *)v31[0] - (char *)v31[1]) >> 3;
          if ( v18 == 0 )
          {
            v18 = 64;
            v11 = (int *)(*(_DWORD *)(v35 - 4) + 512);
          }
          if ( v13 == 0 )
          {
            v13 = 64;
            v12 = (int *)(*(v31[3] - 1) + 512);
          }
          v14 = v18;
          if ( v18 > i )
            v14 = i;
          if ( v14 > v13 )
            v14 = v13;
          for ( j = (8 * v14) >> 3; j > 0; --j )
          {
            v11 -= 2;
            v12 -= 2;
            *v12 = *v11;
            v12[1] = v11[1];
          }
          std::_Deque_iterator<ChunkIndex,ChunkIndex const&,ChunkIndex const*>::operator-=(&v32, v14);
          std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+=(v31, -v14);
        }
        std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v30, v31);
        v16 = *a1;
        *v16 = v21;
        v16[1] = v20;
      }
      else
      {
        std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v31, v26);
        std::__unguarded_linear_insert<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(
          v31,
          a3);
      }
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator++(v26);
    }
  }
  return result;
}


//======================================================================
// void std::__insertion_sort<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex,std::allocator<ChunkIndex>>>,bool (*)(ChunkIndex,ChunkIndex)>(__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex,std::allocator<ChunkIndex>>>,__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex,std::allocator<ChunkIndex>>>,bool (*)(ChunkIndex,ChunkIndex))
// address: 0x002BBBB8   size: 0x60 (96 bytes)
//======================================================================
__int64 __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex>>,bool (*)(ChunkIndex,ChunkIndex)>(
        __int64 a1,
        int (__fastcall *a2)(_DWORD, _DWORD, _DWORD, _DWORD))
{
  _DWORD *v4; // r4
  int v5; // r12
  _DWORD *v6; // r3
  int i; // r2
  __int64 v9; // [sp+0h] [bp-Ch]

  v9 = a1;
  v4 = (_DWORD *)(a1 + 8);
  if ( (_DWORD)a1 != HIDWORD(a1) )
  {
    while ( v4 != (_DWORD *)HIDWORD(a1) )
    {
      if ( a2(*v4, v4[1], *(_DWORD *)a1, *(_DWORD *)(a1 + 4)) != 0 )
      {
        v5 = *v4;
        HIDWORD(v9) = v4[1];
        v6 = v4 + 2;
        for ( i = (int)((int)v4 - a1) >> 3; i > 0; --i )
        {
          v6 -= 2;
          *v6 = *(v6 - 2);
          v6[1] = *(v6 - 1);
        }
        *(_DWORD *)a1 = v5;
        *(_DWORD *)(a1 + 4) = HIDWORD(v9);
      }
      else
      {
        std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex>>,bool (*)(ChunkIndex,ChunkIndex)>(
          v4,
          a2);
      }
      v4 += 2;
    }
  }
  return v9;
}


//======================================================================
// void std::__insertion_sort<__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo,std::allocator<SubMeshInfo>>>>(__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo,std::allocator<SubMeshInfo>>>,__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo,std::allocator<SubMeshInfo>>>)
// address: 0x002CF438   size: 0x54 (84 bytes)
//======================================================================
__int64 __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo>>>(
        __int64 a1)
{
  _DWORD *v2; // r4
  unsigned int v3; // r7
  __int64 v5; // [sp+0h] [bp-Ch]

  v5 = a1;
  v2 = (_DWORD *)(a1 + 12);
  if ( (_DWORD)a1 != HIDWORD(a1) )
  {
    while ( v2 != (_DWORD *)HIDWORD(a1) )
    {
      v3 = v2[1];
      if ( v3 >= *(_DWORD *)(a1 + 4) )
      {
        std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo>>>(v2);
      }
      else
      {
        HIDWORD(v5) = *v2;
        LODWORD(v5) = v2[2];
        if ( -1431655765 * ((int)((int)v2 - a1) >> 2) != 0 )
          j_memmove(&v2[-((int)((int)v2 - a1) >> 2) + 3], (const void *)a1, 4 * ((int)((int)v2 - a1) >> 2));
        *(_DWORD *)(a1 + 4) = v3;
        *(_DWORD *)a1 = HIDWORD(v5);
        *(_DWORD *)(a1 + 8) = v5;
      }
      v2 += 3;
    }
  }
  return v5;
}


//======================================================================
// void std::__insertion_sort<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid,std::allocator<BackPackGrid>>>,bool (*)(BackPackGrid const&,BackPackGrid const&)>(__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid,std::allocator<BackPackGrid>>>,__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid,std::allocator<BackPackGrid>>>,bool (*)(BackPackGrid const&,BackPackGrid const&))
// address: 0x002DE834   size: 0x6A (106 bytes)
//======================================================================
char *__fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid>>,bool (*)(BackPackGrid const&,BackPackGrid const&)>(
        char *result,
        char *a2,
        int (__fastcall *a3)(char *, char *))
{
  _BYTE *v3; // r5
  char *v5; // r4
  _BYTE v7[52]; // [sp+Ch] [bp-38h] BYREF

  v3 = result;
  v5 = result + 52;
  if ( result != a2 )
  {
    while ( v5 != a2 )
    {
      if ( a3(v5, v3) != 0 )
      {
        j_memcpy(v7, v5, sizeof(v7));
        if ( -991146299 * ((v5 - v3) >> 2) != 0 )
          j_memmove(&v5[-4 * ((v5 - v3) >> 2) + 52], v3, 4 * ((v5 - v3) >> 2));
        result = (char *)j_memcpy(v3, v7, 0x34u);
      }
      else
      {
        result = (char *)std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid>>,bool (*)(BackPackGrid const&,BackPackGrid const&)>(
                           v5,
                           a3);
      }
      v5 += 52;
    }
  }
  return result;
}

