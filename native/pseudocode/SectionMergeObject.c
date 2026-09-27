// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: SectionMergeObject

//======================================================================
// SectionMergeObject::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x002CE730   size: 0x9A (154 bytes)
//======================================================================
int __fastcall SectionMergeObject::render(int this, Ogre::SceneRenderer *a2, const Ogre::ShaderEnvData *a3)
{
  int *v3; // r7
  unsigned int v4; // r6
  int v5; // r3
  Ogre::Material **v6; // r2
  float *v7; // r0
  float v8; // [sp+18h] [bp-14h]
  float v11; // [sp+24h] [bp-8h]

  v3 = (int *)this;
  v4 = 0;
  while ( 1 )
  {
    v5 = v3[66];
    if ( v4 >= -1431655765 * ((v3[67] - v5) >> 2) )
      break;
    v6 = (Ogre::Material **)(v5 + 12 * v4++);
    v7 = (float *)Ogre::SceneRenderer::newContext(
                    (int)a2,
                    2,
                    a3,
                    *v6,
                    v3[72],
                    v6[1],
                    v6[2],
                    4,
                    ((*((_DWORD *)v6[2] + 7) - *((_DWORD *)v6[2] + 6)) >> 1) / 3u,
                    0);
    v8 = (float)v3[64];
    v11 = (float)v3[65];
    v7[26] = (float)v3[63];
    v7[27] = v8;
    v7[28] = v11;
    this = Ogre::ShaderContext::setInstanceEnvData((Ogre::ShaderContext *)v7, a2, nullptr, a3, nullptr);
  }
  return this;
}


//======================================================================
// SectionMergeObject::~SectionMergeObject()
// address: 0x002CE844   size: 0x64 (100 bytes)
//======================================================================
// Alternative name is '_ZN18SectionMergeObjectD1Ev'
void __fastcall SectionMergeObject::~SectionMergeObject(SectionMergeObject *this)
{
  unsigned int v2; // r5
  int v3; // r3
  _DWORD **v4; // r6
  void *v5; // r0

  v2 = 0;
  *(_DWORD *)this = &off_460020;
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 66);
    if ( v2 >= -1431655765 * ((*((_DWORD *)this + 67) - v3) >> 2) )
      break;
    v4 = (_DWORD **)(v3 + 12 * v2);
    Ogre::BaseObject::release(v4[2]);
    Ogre::BaseObject::release(v4[1]);
    Ogre::BaseObject::release(*v4);
    ++v2;
  }
  Ogre::VertexFormat::~VertexFormat((void **)this + 69);
  v5 = *((void **)this + 66);
  if ( v5 != nullptr )
    operator delete(v5);
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// SectionMergeObject::~SectionMergeObject()
// address: 0x002CE8B0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall SectionMergeObject::~SectionMergeObject(SectionMergeObject *this)
{
  SectionMergeObject::~SectionMergeObject(this);
  operator delete(this);
}


//======================================================================
// SectionMergeObject::SectionMergeObject(void)
// address: 0x002CECAC   size: 0xB0 (176 bytes)
//======================================================================
// Alternative name is '_ZN18SectionMergeObjectC1Ev'
void __fastcall SectionMergeObject::SectionMergeObject(SectionMergeObject *this)
{
  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_DWORD *)this + 53) = 0;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_460020;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 0;
  *((_DWORD *)this + 68) = 0;
  Ogre::VertexFormat::VertexFormat((_DWORD *)this + 69);
  Ogre::VertexFormat::addElement((int *)this + 69, 8u, 1u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)this + 69, 9u, 4u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)this + 69, 9u, 5u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)this + 69, 9u, 7u, 0, 0, -1);
  *((_DWORD *)this + 72) = (*(int (__fastcall **)(int, char *))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton
                                                              + 36))(
                             Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
                             (char *)this + 276);
}


//======================================================================
// SectionMergeObject::mergeSections(ClientSection **,unsigned int)
// address: 0x002CF7B4   size: 0x138 (312 bytes)
//======================================================================
void **__fastcall SectionMergeObject::mergeSections(SectionMergeObject *this, ClientSection **a2, unsigned int a3)
{
  int v3; // r6
  unsigned int v4; // r4
  ClientSection *v5; // r5
  int *v6; // r2
  int v7; // r3
  int v8; // r3
  __int64 v9; // r4
  int v10; // r6
  int v11; // r0
  int v12; // r0
  _DWORD *v13; // r6
  __int64 v14; // r0
  unsigned int v15; // r4
  _DWORD *v16; // r1
  unsigned int v17; // r3
  unsigned int v18; // r5
  int v19; // r5
  __int64 v24; // [sp+18h] [bp+0h] BYREF
  int v25; // [sp+20h] [bp+8h]
  ClientSection *v26; // [sp+24h] [bp+Ch] BYREF
  int v27; // [sp+28h] [bp+10h]
  int v28; // [sp+2Ch] [bp+14h]

  v3 = 0;
  v24 = 0;
  v25 = 0;
  while ( v3 != a3 )
  {
    v4 = 0;
    v5 = a2[v3];
    while ( 1 )
    {
      v6 = (int *)(*((_DWORD *)v5 + 14) + 252);
      v7 = *v6;
      if ( v4 >= (*(_DWORD *)(*((_DWORD *)v5 + 14) + 256) - *v6) >> 2 )
        break;
      v26 = v5;
      v28 = *(_DWORD *)(4 * v4 + v7);
      v27 = *(_DWORD *)(v28 + 32);
      v8 = HIDWORD(v24);
      if ( HIDWORD(v24) == v25 )
      {
        std::vector<SubMeshInfo>::_M_emplace_back_aux<SubMeshInfo const&>((int)&v24, &v26);
      }
      else
      {
        if ( HIDWORD(v24) != 0 )
        {
          *(_DWORD *)HIDWORD(v24) = v5;
          *(_DWORD *)(v8 + 4) = v27;
          *(_DWORD *)(v8 + 8) = v28;
        }
        HIDWORD(v24) += 12;
      }
      ++v4;
    }
    ++v3;
  }
  v9 = v24;
  if ( (_DWORD)v24 != HIDWORD(v24) )
  {
    v10 = HIDWORD(v24) - v24;
    v11 = 100 * *((_DWORD *)*a2 + 4);
    *((_DWORD *)this + 63) = 100 * *((_DWORD *)*a2 + 2);
    *((_DWORD *)this + 64) = 0;
    *((_DWORD *)this + 65) = v11;
    v12 = j___clzsi2(-1431655765 * ((HIDWORD(v9) - (int)v9) >> 2));
    std::__introsort_loop<__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo>>,int>(
      v9,
      (int *)HIDWORD(v9),
      2 * (31 - v12));
    if ( v10 <= 203 )
    {
      std::__insertion_sort<__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo>>>(v9);
    }
    else
    {
      v13 = (_DWORD *)(v9 + 192);
      LODWORD(v14) = v9;
      HIDWORD(v14) = v9 + 192;
      std::__insertion_sort<__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo>>>(v14);
      while ( v13 != (_DWORD *)HIDWORD(v9) )
      {
        std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo>>>(v13);
        v13 += 3;
      }
    }
    v15 = 1;
    v16 = *(_DWORD **)(v24 + 4);
    v17 = 0;
    while ( 1 )
    {
      v18 = -1431655765 * ((HIDWORD(v24) - (int)v24) >> 2);
      if ( v15 >= v18 )
        break;
      v19 = v24 + 12 * v15;
      if ( v16 != *(_DWORD **)(v19 + 4) )
      {
        sub_2CF1A0(
          (int)this + 264,
          v16,
          (_DWORD *)(v24 + 12 * v17),
          v15 - v17,
          (SectionMergeObject *)((char *)this + 276));
        v16 = *(_DWORD **)(v19 + 4);
        v17 = v15;
      }
      ++v15;
    }
    sub_2CF1A0((int)this + 264, v16, (_DWORD *)(v24 + 12 * v17), v18 - v17, (SectionMergeObject *)((char *)this + 276));
  }
  return std::_Vector_base<SubMeshInfo>::~_Vector_base((void **)&v24);
}

