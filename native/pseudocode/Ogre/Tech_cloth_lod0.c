// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Tech_cloth_lod0

//======================================================================
// Ogre::Tech_cloth_lod0::~Tech_cloth_lod0()
// address: 0x00260CD4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15Tech_cloth_lod0D1Ev'
void __fastcall Ogre::Tech_cloth_lod0::~Tech_cloth_lod0(Ogre::Tech_cloth_lod0 *this)
{
  *(_DWORD *)this = &off_45ACB0;
  Ogre::TechPassData::~TechPassData(this);
}


//======================================================================
// Ogre::Tech_cloth_lod0::~Tech_cloth_lod0()
// address: 0x00260CF0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Tech_cloth_lod0::~Tech_cloth_lod0(Ogre::Tech_cloth_lod0 *this)
{
  Ogre::Tech_cloth_lod0::~Tech_cloth_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::Tech_cloth_lod0::init(Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x00261F44   size: 0xDA (218 bytes)
//======================================================================
__int64 __fastcall Ogre::Tech_cloth_lod0::init(int a1, int a2, _BYTE *a3)
{
  int v5; // r3
  int v7; // r2
  char v8; // r2
  int v9; // r0
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  LODWORD(v12) = a1;
  v5 = 0;
  *(_BYTE *)(a1 + 322) = 0;
  *(_BYTE *)(a1 + 321) = 0;
  *(_BYTE *)(a1 + 320) = 0;
  do
  {
    v7 = (unsigned __int8)a3[v5];
    if ( a3[v5] == 0 )
      break;
    if ( v7 == 1 )
    {
      v8 = a3[v5 + 4];
      v9 = 160;
LABEL_12:
      v10 = 2 * v9;
      goto LABEL_9;
    }
    if ( v7 != 2 )
    {
      if ( v7 != 3 )
      {
        if ( v7 == 4 )
          *(_BYTE *)(a1 + 323) = a3[v5 + 4];
        goto LABEL_15;
      }
      v8 = a3[v5 + 4];
      v9 = 161;
      goto LABEL_12;
    }
    v8 = a3[v5 + 4];
    v10 = 321;
LABEL_9:
    *(_BYTE *)(a1 + v10) = v8;
LABEL_15:
    ++v5;
  }
  while ( v5 != 4 );
  *(_DWORD *)(a1 + 312) = 1;
  if ( *(unsigned __int8 *)(a2 + 2) >> 7 != 0 && *(unsigned __int8 *)(a1 + 320) <= 1u )
  {
    *(_BYTE *)(a1 + 320) = 2;
    *(_DWORD *)(a1 + 312) = 2;
  }
  HIDWORD(v12) = "cloth_Main";
  *(_DWORD *)(a1 + 8) = sub_2617DC(
                          (Ogre::FixedString *)((char *)&dword_0 + 1),
                          (Ogre::FixedString *)"cloth_Main",
                          (_QWORD *)a2,
                          a3);
  *(_DWORD *)(a1 + 12) = sub_2617DC(
                           (Ogre::FixedString *)((char *)&dword_0 + 2),
                           (Ogre::FixedString *)"cloth_Main",
                           (_QWORD *)a2,
                           a3);
  if ( *(_DWORD *)(a1 + 312) == 2 )
    j_memcpy((void *)(a1 + 84), (const void *)(a1 + 8), 0x4Cu);
  *(_DWORD *)(a1 + 316) = (*(unsigned __int8 *)(a1 + 322) << 16)
                        | (*(unsigned __int8 *)(a1 + 321) << 8)
                        | *(unsigned __int8 *)(a1 + 320);
  return v12;
}

