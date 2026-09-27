// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_190000

//======================================================================
// sub_19127C
// address: 0x0019127C   size: 0x24 (36 bytes)
//======================================================================
_BYTE *__fastcall sub_19127C(_BYTE *result, int a2, int a3, int *a4)
{
  int v4; // r1
  _BYTE *i; // r4
  int v6; // r5

  v4 = a2 * a3;
  for ( i = result; i - result < v4; ++i )
  {
    v6 = 214013 * *a4 + 2531011;
    *a4 = v6;
    *i = BYTE2(v6);
  }
  return result;
}


//======================================================================
// sub_1923D0
// address: 0x001923D0   size: 0x2C (44 bytes)
//======================================================================
char *__fastcall sub_1923D0(const char *a1, int *a2)
{
  char *v4; // r0
  char *v5; // r4

  v4 = j_strchr(a1, 44);
  v5 = v4;
  if ( v4 != nullptr )
  {
    *v4 = 0;
    *a2 = j_atoi(a1);
    return v5 + 1;
  }
  else
  {
    *a2 = j_atoi(a1);
    return nullptr;
  }
}


//======================================================================
// sub_192FA0
// address: 0x00192FA0   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_192FA0(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_192FAA
// address: 0x00192FAA   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_192FAA(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_192FB4
// address: 0x00192FB4   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_192FB4(unsigned int a1)
{
  if ( a1 > 0xFFFFFFF )
    sub_3BCEB4(a1);
  return operator new(16 * a1);
}


//======================================================================
// sub_19413C
// address: 0x0019413C   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_19413C(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_194146
// address: 0x00194146   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_194146(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_194150
// address: 0x00194150   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_194150(unsigned int a1)
{
  if ( a1 > 0x15555555 )
    sub_3BCEB4(a1);
  return operator new(12 * a1);
}


//======================================================================
// sub_19416C
// address: 0x0019416C   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_19416C(unsigned int a1)
{
  if ( a1 > 0x3FFFFFFF )
    sub_3BCEB4(a1);
  return operator new(4 * a1);
}


//======================================================================
// sub_194184
// address: 0x00194184   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_194184(unsigned int a1)
{
  if ( a1 > 0x3FFFFFFF )
    sub_3BCEB4(a1);
  return operator new(4 * a1);
}


//======================================================================
// sub_19419C
// address: 0x0019419C   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall sub_19419C(char *a1, char *a2, _DWORD *a3)
{
  char *v3; // r3
  _DWORD *v4; // r4

  v3 = a1;
  v4 = a3;
  while ( v3 != a2 )
  {
    if ( v4 != nullptr )
    {
      *v4 = *(_DWORD *)v3;
      v4[1] = *((_DWORD *)v3 + 1);
      v4[2] = *((_DWORD *)v3 + 2);
    }
    v4 += 3;
    v3 += 12;
  }
  return &a3[3 * ((-1431655764 * ((unsigned int)(v3 - a1) >> 2)) >> 2)];
}


//======================================================================
// sub_197510
// address: 0x00197510   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_197510(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_19751A
// address: 0x0019751A   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_19751A(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_19852C
// address: 0x0019852C   size: 0x72 (114 bytes)
//======================================================================
void *__fastcall sub_19852C(int a1, Ogre::SceneRenderer *a2, int a3)
{
  char *ViewMatrix; // r0
  char *ProjectMatrix; // r0
  float v7[16]; // [sp+8h] [bp-144h] BYREF
  float v8[16]; // [sp+48h] [bp-104h] BYREF
  float v9[16]; // [sp+88h] [bp-C4h] BYREF
  float v10[16]; // [sp+C8h] [bp-84h] BYREF
  _BYTE v11[68]; // [sp+108h] [bp-44h] BYREF

  *(_DWORD *)(a1 + 100) = a3;
  Ogre::Shadowmap::caculateShadowCamera((Ogre::Shadowmap *)a1, a2, *(Ogre::Camera **)(a1 + 104));
  ViewMatrix = Ogre::Camera::getViewMatrix(*(Ogre::Camera **)(a1 + 104));
  Ogre::Matrix4::Matrix4((int)v7, (const Ogre::Matrix4 *)ViewMatrix);
  ProjectMatrix = Ogre::Camera::getProjectMatrix(*(Ogre::Camera **)(a1 + 104));
  Ogre::Matrix4::Matrix4((int)v8, (const Ogre::Matrix4 *)ProjectMatrix);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v9);
  Ogre::Matrix4::identity((Ogre::Matrix4 *)v9);
  v9[5] = -0.5;
  v9[0] = 0.5;
  v9[12] = 0.5;
  v9[13] = 0.5;
  Ogre::operator*((Ogre::Matrix4 *)v10, v7, v8);
  Ogre::operator*((Ogre::Matrix4 *)v11, v10, v9);
  return Ogre::Matrix4::operator=((void *)(a1 + 4), v11);
}


//======================================================================
// sub_1988A0
// address: 0x001988A0   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_1988A0(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_1988AA
// address: 0x001988AA   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_1988AA(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_19AA7C
// address: 0x0019AA7C   size: 0x2C (44 bytes)
//======================================================================
int sub_19AA7C()
{
  int result; // r0

  if ( dword_4C6F1C == 0 )
  {
    ilInit();
    ilEnable(1568);
    result = ilEnable(1584);
  }
  ++dword_4C6F1C;
  return result;
}


//======================================================================
// sub_19AB54
// address: 0x0019AB54   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_19AB54(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_19AB5E
// address: 0x0019AB5E   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_19AB5E(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_19D3E0
// address: 0x0019D3E0   size: 0x14 (20 bytes)
//======================================================================
bool __fastcall sub_19D3E0(int a1, int a2)
{
  return *(_DWORD *)(a1 + 80) < *(_DWORD *)(a2 + 80);
}

