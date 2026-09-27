// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::sort

//======================================================================
// void std::sort<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *,std::allocator<Ogre::FilePkgBase *>>>,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *,std::allocator<Ogre::FilePkgBase *>>>,__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *,std::allocator<Ogre::FilePkgBase *>>>,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *))
// address: 0x0016ED6A   size: 0x54 (84 bytes)
//======================================================================
int __fastcall std::sort<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *>>,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(
        __int64 a1,
        int (__fastcall *a2)(int, int))
{
  __int64 v2; // r4
  int v4; // r7
  int v5; // r0
  __int64 v6; // r0

  v2 = a1;
  if ( (_DWORD)a1 != HIDWORD(a1) )
  {
    v4 = HIDWORD(a1) - a1;
    v5 = j___clzsi2((HIDWORD(a1) - (int)a1) >> 2);
    std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *>>,int,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(
      v2,
      (int *)HIDWORD(v2),
      2 * (31 - v5),
      a2);
    if ( v4 <= 67 )
    {
      LODWORD(a1) = std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *>>,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(
                      v2,
                      a2);
    }
    else
    {
      LODWORD(v6) = v2;
      HIDWORD(v6) = v2 + 64;
      LODWORD(a1) = std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *>>,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(
                      v6,
                      a2);
      LODWORD(v2) = v2 + 64;
      while ( (_DWORD)v2 != HIDWORD(v2) )
      {
        LODWORD(a1) = std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *>>,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(
                        (_DWORD *)v2,
                        a2);
        LODWORD(v2) = v2 + 4;
      }
    }
  }
  return a1;
}


//======================================================================
// void std::sort<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>>,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>>,__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>>,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*))
// address: 0x0018D4AA   size: 0x54 (84 bytes)
//======================================================================
int __fastcall std::sort<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *>>,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(
        __int64 a1,
        int (__fastcall *a2)(int, int))
{
  __int64 v2; // r4
  int v4; // r7
  int v5; // r0
  __int64 v6; // r0

  v2 = a1;
  if ( (_DWORD)a1 != HIDWORD(a1) )
  {
    v4 = HIDWORD(a1) - a1;
    v5 = j___clzsi2((HIDWORD(a1) - (int)a1) >> 2);
    std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *>>,int,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(
      v2,
      (int *)HIDWORD(v2),
      2 * (31 - v5),
      a2);
    if ( v4 <= 67 )
    {
      LODWORD(a1) = std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *>>,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(
                      v2,
                      a2);
    }
    else
    {
      LODWORD(v6) = v2;
      HIDWORD(v6) = v2 + 64;
      LODWORD(a1) = std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *>>,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(
                      v6,
                      a2);
      LODWORD(v2) = v2 + 64;
      while ( (_DWORD)v2 != HIDWORD(v2) )
      {
        LODWORD(a1) = std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *>>,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(
                        (_DWORD *)v2,
                        a2);
        LODWORD(v2) = v2 + 4;
      }
    }
  }
  return a1;
}


//======================================================================
// void std::sort<Ogre::AnimPlayTrack **,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *)>(Ogre::AnimPlayTrack **,Ogre::AnimPlayTrack **,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *))
// address: 0x00192B02   size: 0x52 (82 bytes)
//======================================================================
int __fastcall std::sort<Ogre::AnimPlayTrack **,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *)>(
        __int64 a1,
        int (__fastcall *a2)(int, int))
{
  __int64 v2; // r4
  int v4; // r6
  int v5; // r0
  _DWORD *v6; // r6
  __int64 v7; // r0

  v2 = a1;
  if ( (_DWORD)a1 != HIDWORD(a1) )
  {
    v4 = HIDWORD(a1) - a1;
    v5 = j___clzsi2((HIDWORD(a1) - (int)a1) >> 2);
    std::__introsort_loop<Ogre::AnimPlayTrack **,int,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *)>(
      v2,
      (int *)HIDWORD(v2),
      2 * (31 - v5),
      a2);
    if ( v4 <= 67 )
    {
      LODWORD(a1) = std::__insertion_sort<Ogre::AnimPlayTrack **,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *)>(
                      v2,
                      a2);
    }
    else
    {
      v6 = (_DWORD *)(v2 + 64);
      LODWORD(v7) = v2;
      HIDWORD(v7) = v2 + 64;
      LODWORD(a1) = std::__insertion_sort<Ogre::AnimPlayTrack **,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *)>(
                      v7,
                      a2);
      while ( v6 != (_DWORD *)HIDWORD(v2) )
        LODWORD(a1) = std::__unguarded_linear_insert<Ogre::AnimPlayTrack **,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *)>(
                        v6++,
                        a2);
    }
  }
  return a1;
}


//======================================================================
// void std::sort<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid,std::allocator<BackPackGrid>>>,bool (*)(BackPackGrid const&,BackPackGrid const&)>(__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid,std::allocator<BackPackGrid>>>,__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid,std::allocator<BackPackGrid>>>,bool (*)(BackPackGrid const&,BackPackGrid const&))
// address: 0x002DEB48   size: 0x5C (92 bytes)
//======================================================================
char *__fastcall std::sort<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid>>,bool (*)(BackPackGrid const&,BackPackGrid const&)>(
        char *result,
        char *a2,
        int (__fastcall *a3)(int, int))
{
  char *v3; // r4
  int v6; // r7
  int v7; // r0
  char *i; // r4

  v3 = result;
  if ( result != a2 )
  {
    v6 = a2 - result;
    v7 = j___clzsi2(-991146299 * ((a2 - result) >> 2));
    std::__introsort_loop<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid>>,int,bool (*)(BackPackGrid const&,BackPackGrid const&)>(
      v3,
      a2,
      2 * (31 - v7),
      a3);
    if ( v6 <= 883 )
    {
      return std::__insertion_sort<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid>>,bool (*)(BackPackGrid const&,BackPackGrid const&)>(
               v3,
               a2,
               (int (__fastcall *)(char *, char *))a3);
    }
    else
    {
      result = std::__insertion_sort<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid>>,bool (*)(BackPackGrid const&,BackPackGrid const&)>(
                 v3,
                 v3 + 832,
                 (int (__fastcall *)(char *, char *))a3);
      for ( i = v3 + 832; i != a2; i += 52 )
        result = (char *)std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid>>,bool (*)(BackPackGrid const&,BackPackGrid const&)>(
                           i,
                           (int (__fastcall *)(_BYTE *, char *))a3);
    }
  }
  return result;
}

