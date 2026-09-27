// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLRenderSystem

//======================================================================
// Ogre::OGLRenderSystem::shutdown(void)
// address: 0x00264308   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLRenderSystem::shutdown(Ogre::OGLRenderSystem *this)
{
  ;
}


//======================================================================
// Ogre::OGLRenderSystem::endFrame(void)
// address: 0x0026430A   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Ogre::OGLRenderSystem::endFrame(Ogre::OGLRenderSystem *this)
{
  int result; // r0

  result = *((_DWORD *)this + 12);
  if ( result != 0 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 36))(result);
  *((_DWORD *)this + 3) = *((_DWORD *)this + 7);
  *((_DWORD *)this + 5) = *((_DWORD *)this + 9);
  *((_DWORD *)this + 4) = *((_DWORD *)this + 8);
  *((_DWORD *)this + 6) = *((_DWORD *)this + 10);
  return result;
}


//======================================================================
// Ogre::OGLRenderSystem::present(void)
// address: 0x0026432C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall Ogre::OGLRenderSystem::present(Ogre::OGLRenderSystem *this)
{
  _DWORD *v1; // r6
  int v2; // r4
  int v3; // r5
  int v4; // r7
  int v5; // r0

  v1 = (_DWORD *)((char *)this + 240);
  v2 = 0;
  v3 = 0;
  v4 = (*((_DWORD *)this + 61) - *((_DWORD *)this + 60)) >> 2;
  while ( v3 != v4 )
  {
    v5 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(4 * v3 + *v1) + 52))(*(_DWORD *)(4 * v3 + *v1));
    if ( v2 < v5 )
      v2 = v5;
    ++v3;
  }
  return v2;
}


//======================================================================
// Ogre::OGLRenderSystem::getMainWindow(void)
// address: 0x0026435C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::OGLRenderSystem::getMainWindow(Ogre::OGLRenderSystem *this)
{
  return **((_DWORD **)this + 60);
}


//======================================================================
// Ogre::OGLRenderSystem::resetDevice(void)
// address: 0x00264364   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::OGLRenderSystem::resetDevice(Ogre::OGLRenderSystem *this)
{
  return 0;
}


//======================================================================
// Ogre::OGLRenderSystem::testDeviceReset(void)
// address: 0x00264368   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::OGLRenderSystem::testDeviceReset(Ogre::OGLRenderSystem *this)
{
  return 0;
}


//======================================================================
// Ogre::OGLRenderSystem::restoreLostDevice(void)
// address: 0x0026436C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::OGLRenderSystem::restoreLostDevice(Ogre::OGLRenderSystem *this)
{
  return 1;
}


//======================================================================
// Ogre::OGLRenderSystem::setContextQueDesc(Ogre::ContextQueDesc const&)
// address: 0x00264370   size: 0x26 (38 bytes)
//======================================================================
__int64 __fastcall Ogre::OGLRenderSystem::setContextQueDesc(__int64 this)
{
  _DWORD *v1; // r4
  int v2; // r5
  int v3; // r1
  __int64 v5; // [sp+0h] [bp-Ch]

  v5 = this;
  v1 = (_DWORD *)HIDWORD(this);
  v2 = this;
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)this + 16))(this, HIDWORD(this) + 20);
  v3 = v1[1];
  if ( v3 != 0 )
  {
    LODWORD(v5) = v1[4];
    (*(void (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v2 + 12))(v2, v3, v1[2], v1[3]);
  }
  return v5;
}


//======================================================================
// Ogre::OGLRenderSystem::setCursorProperty(Ogre::TextureData *,int,int,int,int,int,int)
// address: 0x00264396   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLRenderSystem::setCursorProperty(
        Ogre::OGLRenderSystem *this,
        Ogre::TextureData *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  ;
}


//======================================================================
// Ogre::OGLRenderSystem::setCursorPosition(int,int)
// address: 0x00264398   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLRenderSystem::setCursorPosition(Ogre::OGLRenderSystem *this, int a2, int a3)
{
  ;
}


//======================================================================
// Ogre::OGLRenderSystem::showCursor(bool)
// address: 0x0026439A   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLRenderSystem::showCursor(Ogre::OGLRenderSystem *this, bool a2)
{
  ;
}


//======================================================================
// Ogre::OGLRenderSystem::isCursorShow(void)
// address: 0x0026439C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::OGLRenderSystem::isCursorShow(Ogre::OGLRenderSystem *this)
{
  return 1;
}


//======================================================================
// Ogre::OGLRenderSystem::snapShotAll(char const*)
// address: 0x002643A0   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLRenderSystem::snapShotAll(Ogre::OGLRenderSystem *this, const char *a2)
{
  ;
}


//======================================================================
// Ogre::OGLRenderSystem::snapShot(void)
// address: 0x002643A2   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLRenderSystem::snapShot(Ogre::OGLRenderSystem *this)
{
  ;
}


//======================================================================
// Ogre::OGLRenderSystem::setVertexShader(Ogre::CompiledShader *)
// address: 0x002643A4   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLRenderSystem::setVertexShader(Ogre::OGLRenderSystem *this, Ogre::CompiledShader *a2)
{
  ;
}


//======================================================================
// Ogre::OGLRenderSystem::setPixelShader(Ogre::CompiledShader *)
// address: 0x002643A6   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLRenderSystem::setPixelShader(Ogre::OGLRenderSystem *this, Ogre::CompiledShader *a2)
{
  ;
}


//======================================================================
// Ogre::OGLRenderSystem::clear(unsigned int,unsigned int,float,unsigned int)
// address: 0x002643EA   size: 0x60 (96 bytes)
//======================================================================
void __fastcall Ogre::OGLRenderSystem::clear(Ogre::OGLRenderSystem *this, char a2, unsigned int a3, float a4, GLint s)
{
  GLbitfield v6; // r5
  GLclampf red; // [sp+8h] [bp-14h] BYREF
  GLclampf v9; // [sp+Ch] [bp-10h]
  GLclampf v10; // [sp+10h] [bp-Ch]
  GLclampf v11; // [sp+14h] [bp-8h]

  v6 = 0;
  if ( (a2 & 1) != 0 )
  {
    j_glClearStencil(s);
    v6 = 1024;
  }
  if ( (a2 & 2) != 0 )
  {
    v6 |= 0x4000u;
    red = 1.0;
    v9 = 1.0;
    v10 = 1.0;
    v11 = 1.0;
    Ogre::ColourValue::setColorQuad((Ogre::ColourValue *)&red, a3);
    j_glClearColor(red, v9, v10, v11);
  }
  if ( (a2 & 4) != 0 )
  {
    v6 |= 0x100u;
    j_glClearDepthf();
  }
  j_glClear(v6);
}


//======================================================================
// Ogre::OGLRenderSystem::setViewport(Ogre::Viewport const&)
// address: 0x0026444A   size: 0xAE (174 bytes)
//======================================================================
__int64 __fastcall Ogre::OGLRenderSystem::setViewport(int a1, float *a2)
{
  float v2; // r6
  float v3; // r5
  GLint v4; // r4
  GLsizei v5; // r6
  GLsizei v6; // r3
  GLint v7; // r0
  __int64 x; // [sp+0h] [bp-Ch]

  HIDWORD(x) = a2;
  v2 = a2[2];
  v3 = a2[3];
  if ( v2 > 1.0 )
  {
    LODWORD(x) = (int)*a2;
    v4 = (int)(float)((float)((float)*(unsigned int *)(a1 + 88) - a2[1]) - v3);
    v5 = (int)v2;
    v6 = (int)v3;
    v7 = x;
  }
  else
  {
    *(float *)&x = (float)*(unsigned int *)(a1 + 84);
    HIDWORD(x) = (int)(float)(*(float *)&x * *a2);
    v4 = (int)(float)((float)((float)(1.0 - a2[1]) - v3) * (float)*(unsigned int *)(a1 + 88));
    v5 = (int)(float)(v2 * *(float *)&x);
    v6 = (int)(float)(v3 * (float)*(unsigned int *)(a1 + 88));
    v7 = HIDWORD(x);
  }
  j_glViewport(v7, v4, v5, v6);
  return x;
}


//======================================================================
// Ogre::OGLRenderSystem::setVertexBuffer(unsigned int,Ogre::HardwareBuffer *)
// address: 0x002644F8   size: 0x5E (94 bytes)
//======================================================================
__int64 __fastcall Ogre::OGLRenderSystem::setVertexBuffer(__int64 this, Ogre::HardwareBuffer *a2)
{
  int v2; // r6
  int v4; // r7
  unsigned int v5; // r5
  int v6; // r3
  int v7; // r4
  __int64 v9; // [sp+0h] [bp-Ch]

  v9 = this;
  v2 = HIDWORD(this);
  if ( *((_BYTE *)a2 + 28) != 0 )
  {
    j_glBindBuffer();
    v4 = 0;
  }
  else
  {
    j_glBindBuffer();
    v4 = *((_DWORD *)a2 + 10);
  }
  v5 = 0;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v2 + 12);
    if ( v5 >= -1431655765 * ((*(_DWORD *)(v2 + 16) - v6) >> 3) )
      break;
    v7 = v6 + 24 * v5;
    j_glEnableVertexAttribArray();
    ++v5;
    LODWORD(v9) = *(_DWORD *)(v7 + 16);
    HIDWORD(v9) = v4 + *(_DWORD *)(v7 + 20);
    j_glVertexAttribPointer();
  }
  return v9;
}


//======================================================================
// Ogre::OGLRenderSystem::draw(Ogre::PrimitiveType,unsigned int,unsigned int)
// address: 0x00264560   size: 0x1C (28 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::OGLRenderSystem::draw(int a1, int a2, GLint a3, int a4)
{
  GLenum mode; // [sp+0h] [bp-Ch] BYREF
  GLsizei count[2]; // [sp+4h] [bp-8h] BYREF

  count[1] = a3;
  sub_2643A8((int *)&mode, count, a2, a4);
  j_glDrawArrays(mode, a3, count[0]);
}


//======================================================================
// Ogre::OGLRenderSystem::draw(Ogre::PrimitiveType,unsigned int,unsigned int,Ogre::HardwareBuffer *,unsigned int,unsigned int)
// address: 0x0026457C   size: 0x3C (60 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::OGLRenderSystem::draw(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // r3
  GLenum mode; // [sp+0h] [bp-8h] BYREF
  GLsizei count; // [sp+4h] [bp-4h] BYREF

  sub_2643A8((int *)&mode, &count, a2, a4);
  if ( *(_BYTE *)(a5 + 28) != 0 )
  {
    j_glBindBuffer();
    v6 = 0;
  }
  else
  {
    j_glBindBuffer();
    v6 = *(_DWORD *)(a5 + 40);
  }
  j_glDrawElements(mode, count, 0x1403u, (const GLvoid *)(v6 + 2 * a3));
}


//======================================================================
// Ogre::OGLRenderSystem::OGLRenderSystem(void)
// address: 0x002645C0   size: 0x34 (52 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15OGLRenderSystemC2Ev'
Ogre::OGLRenderSystem *__fastcall Ogre::OGLRenderSystem::OGLRenderSystem(Ogre::OGLRenderSystem *this)
{
  Ogre::RenderSystem::RenderSystem(this);
  *(_DWORD *)this = &off_45B200;
  *((_DWORD *)this + 19) = &byte_55FB88;
  *((_DWORD *)this + 57) = 0;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 61) = 0;
  *((_DWORD *)this + 62) = 0;
  *((_DWORD *)this + 63) = 0;
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 65) = 0;
  return this;
}


//======================================================================
// Ogre::OGLRenderSystem::~OGLRenderSystem()
// address: 0x002645FC   size: 0x3C (60 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15OGLRenderSystemD2Ev'
void __fastcall Ogre::OGLRenderSystem::~OGLRenderSystem(Ogre::OGLRenderSystem *this)
{
  void *v2; // r0
  void *v3; // r0

  *(_DWORD *)this = &off_45B200;
  v2 = *((void **)this + 63);
  if ( v2 != nullptr )
    operator delete(v2);
  v3 = *((void **)this + 60);
  if ( v3 != nullptr )
    operator delete(v3);
  sub_3BDF80((char *)this + 76);
  Ogre::RenderSystem::~RenderSystem(this);
}


//======================================================================
// Ogre::OGLRenderSystem::beginFrame(void)
// address: 0x0026470C   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::OGLRenderSystem::beginFrame(Ogre::OGLRenderSystem *this)
{
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 10) = 0;
  Ogre::OGL_SetDefaultState(this);
  *((_DWORD *)this + 12) = 0;
  return 1;
}


//======================================================================
// Ogre::OGLRenderSystem::findRenderWindowByHWnd(ANativeWindow *)
// address: 0x00264724   size: 0x36 (54 bytes)
//======================================================================
int __fastcall Ogre::OGLRenderSystem::findRenderWindowByHWnd(Ogre::OGLRenderSystem *this, ANativeWindow *a2)
{
  unsigned int i; // r4
  int v4; // r3

  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 60);
    if ( i >= (*((_DWORD *)this + 61) - v4) >> 2 )
      break;
    if ( (ANativeWindow *)(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v4 + 4 * i) + 56))(*(_DWORD *)(v4 + 4 * i)) == a2 )
      return *(_DWORD *)(*((_DWORD *)this + 60) + 4 * i);
  }
  return 0;
}


//======================================================================
// Ogre::OGLRenderSystem::findRenderWindow(void *)
// address: 0x0026475A   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::OGLRenderSystem::findRenderWindow(Ogre::OGLRenderSystem *this, ANativeWindow *a2)
{
  return Ogre::OGLRenderSystem::findRenderWindowByHWnd(this, a2);
}


//======================================================================
// Ogre::OGLRenderSystem::InitOpenGLDevice(void)
// address: 0x00264762   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::OGLRenderSystem::InitOpenGLDevice(Ogre::OGLRenderSystem *this)
{
  return 1;
}


//======================================================================
// Ogre::OGLRenderSystem::DestroyOpenGLDevice(void)
// address: 0x00264766   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLRenderSystem::DestroyOpenGLDevice(Ogre::OGLRenderSystem *this)
{
  ;
}


//======================================================================
// Ogre::OGLRenderSystem::resetRenderDevice(int,int)
// address: 0x00264768   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall Ogre::OGLRenderSystem::resetRenderDevice(Ogre::OGLRenderSystem *this, int a2, int a3)
{
  char *v3; // r5
  _DWORD *v5; // r6
  unsigned int v6; // r4
  Ogre::LockSection *v8; // r1
  Ogre::LockSection *v9; // r2
  int v10; // [sp+4h] [bp-10h]

  v3 = (char *)this + 252;
  Ogre::OGLHardwarePixelBufferManager::onLostDevice(*((_DWORD *)this + 66));
  v5 = (_DWORD *)((char *)this + 240);
  (*(void (__fastcall **)(_DWORD))(**((_DWORD **)v3 + 4) + 24))(*((_DWORD *)v3 + 4));
  (*(void (__fastcall **)(_DWORD))(**((_DWORD **)v3 + 5) + 8))(*((_DWORD *)v3 + 5));
  v6 = (*((_DWORD *)this + 61) - *((_DWORD *)this + 60)) >> 2;
  v10 = 4 * (v6 + 0x3FFFFFFF);
  while ( v6 != 0 )
  {
    --v6;
    Ogre::OGLRenderWindow::onLostDevice(*(Ogre::OGLRenderWindow **)(*v5 + v10));
    v10 -= 4;
  }
  Ogre::OGLRenderSystem::DestroyOpenGLDevice(this);
  if ( Ogre::OGLRenderSystem::InitOpenGLDevice(this) == 0 )
    return 0;
  while ( v6 < (*((_DWORD *)this + 61) - *v5) >> 2 )
  {
    if ( Ogre::OGLRenderWindow::onResetDevice(*(Ogre::OGLRenderWindow **)(4 * v6 + *v5), a2, a3) == 0 )
      return 0;
    ++v6;
  }
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)v3 + 5) + 12))(*((_DWORD *)v3 + 5)) != 0
    && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)v3 + 4) + 28))(*((_DWORD *)v3 + 4)) != 0 )
  {
    return Ogre::OGLHardwarePixelBufferManager::onResetDevice(*((Ogre::OGLHardwarePixelBufferManager **)v3 + 3), v8, v9);
  }
  else
  {
    return 0;
  }
}


//======================================================================
// Ogre::OGLRenderSystem::fromPixelFormat(Ogre::PixelFormat,int &,unsigned int &,unsigned int &)
// address: 0x00264810   size: 0xAC (172 bytes)
//======================================================================
int __fastcall Ogre::OGLRenderSystem::fromPixelFormat(int a1, int a2, int *a3, int *a4, int *a5)
{
  int v5; // r1
  int v6; // r3
  int v7; // r0
  int result; // r0

  switch ( a2 )
  {
    case 1:
      v5 = 6409;
      goto LABEL_6;
    case 2:
      *a3 = 6409;
      *a4 = 6409;
      v6 = 5123;
      goto LABEL_4;
    case 3:
      v5 = 6406;
      goto LABEL_6;
    case 5:
      v5 = 6410;
      goto LABEL_6;
    case 6:
      *a3 = 6407;
      *a4 = 6407;
      v6 = 33635;
      goto LABEL_4;
    case 8:
      *a3 = 6408;
      *a4 = 6408;
      v6 = 32819;
      goto LABEL_4;
    case 9:
      *a3 = 6408;
      *a4 = 6408;
      v6 = 32820;
      goto LABEL_4;
    case 10:
      v5 = 6407;
      goto LABEL_6;
    case 12:
    case 13:
    case 28:
      v5 = 6408;
LABEL_6:
      *a3 = v5;
      *a4 = v5;
      goto LABEL_7;
    case 26:
    case 27:
      *a3 = 6407;
      *a4 = 6408;
LABEL_7:
      v6 = 5121;
LABEL_4:
      *a5 = v6;
      goto LABEL_21;
    case 40:
      v7 = 35840;
      goto LABEL_20;
    case 41:
      v7 = 35841;
      goto LABEL_20;
    case 42:
      v7 = 35842;
      goto LABEL_20;
    case 43:
      v7 = 35843;
      goto LABEL_20;
    case 44:
      v7 = 36196;
LABEL_20:
      *a4 = v7;
      *a3 = v7;
      *a5 = 0;
      result = 1;
      break;
    default:
LABEL_21:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// Ogre::OGLRenderSystem::removeOGLRenderWindow(Ogre::OGLRenderWindow *)
// address: 0x0026492A   size: 0x32 (50 bytes)
//======================================================================
int *__fastcall Ogre::OGLRenderSystem::removeOGLRenderWindow(int *this, Ogre::OGLRenderWindow *a2)
{
  _DWORD *v2; // r4
  int v4; // r1
  int *v5; // r3
  int *v6; // r2

  v2 = this + 60;
  v4 = *(this + 61);
  v5 = (int *)*(this + 60);
  while ( 1 )
  {
    v6 = v5;
    if ( v5 == (int *)v4 )
      break;
    this = (int *)*v5++;
    if ( this == (int *)a2 )
    {
      this = v6 + 1;
      if ( v6 + 1 != (int *)v4 )
        this = (int *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::OGLRenderWindow *>(
                        this,
                        v4,
                        v6);
      v2[1] -= 4;
      return this;
    }
  }
  return this;
}


//======================================================================
// Ogre::OGLRenderSystem::initialise(Ogre::RenderSystem::InitDesc const&)
// address: 0x00264A2C   size: 0x104 (260 bytes)
//======================================================================
Ogre::DataStream *__fastcall Ogre::OGLRenderSystem::initialise(int a1, int a2)
{
  unsigned int v4; // r3
  Ogre::OGLRenderWindow *v5; // r6
  Ogre::DataStream *Templates; // r5
  __int64 v7; // r0
  Ogre::OGLHardwarePixelBufferManager *v8; // r5
  Ogre::OGLHardwareBufferManager *v9; // r5
  Ogre::OGLMaterialManager *v10; // r5
  unsigned int v11; // r3
  unsigned int v12; // r3
  const char *v13; // r1
  Ogre::OGLRenderWindow *v15; // [sp+10h] [bp-Ch] BYREF
  char *v16[2]; // [sp+14h] [bp-8h] BYREF

  *(_BYTE *)(a1 + 80) = *(_BYTE *)(a2 + 7);
  *(_BYTE *)(a1 + 81) = *(_BYTE *)(a2 + 8);
  *(_BYTE *)(a1 + 82) = *(_BYTE *)(a2 + 9);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 12);
  v4 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 88) = v4;
  Ogre::LogSetCurParam(
    (int)"D:/work/oworldsrc/client/RenderSystem_OGL/OgreOGLRenderSystem.cpp",
    (const char *)&dword_B8 + 1,
    2,
    v4);
  Ogre::LogMessage((Ogre *)"OGLRenderSystem::initialize: %d, %d", *(const char **)(a2 + 12), *(_DWORD *)(a2 + 16));
  v5 = (Ogre::OGLRenderWindow *)operator new(0x24u);
  Ogre::OGLRenderWindow::OGLRenderWindow((int)v5, a1, (_DWORD *)a2, 1);
  v15 = v5;
  Templates = (Ogre::DataStream *)Ogre::OGLRenderWindow::onInitialise(v5);
  if ( Templates != nullptr )
  {
    HIDWORD(v7) = &v15;
    LODWORD(v7) = a1 + 240;
    std::vector<Ogre::OGLRenderWindow *>::push_back(v7);
    *(_DWORD *)(a1 + 60) = 1;
    v8 = (Ogre::OGLHardwarePixelBufferManager *)operator new(0x3Cu);
    Ogre::OGLHardwarePixelBufferManager::OGLHardwarePixelBufferManager(v8, (Ogre::OGLRenderSystem *)a1);
    *(_DWORD *)(a1 + 264) = v8;
    v9 = (Ogre::OGLHardwareBufferManager *)operator new(0x2Cu);
    Ogre::OGLHardwareBufferManager::OGLHardwareBufferManager(v9, (Ogre::OGLRenderSystem *)a1);
    *(_DWORD *)(a1 + 268) = v9;
    sub_3BF0BC((int)v16, "shaders/materials.xml");
    v10 = (Ogre::OGLMaterialManager *)operator new(0x5Cu);
    Ogre::OGLMaterialManager::OGLMaterialManager(v10, (Ogre::OGLRenderSystem *)a1);
    *(_DWORD *)(a1 + 272) = v10;
    Templates = Ogre::MaterialManager::loadTemplates(v10, (const char **)v16);
    if ( Templates != nullptr )
    {
      Templates = (Ogre::DataStream *)Ogre::MaterialManager::loadShaderCache(
                                        *(Ogre::CompiledShaderGroup ***)(a1 + 272),
                                        false);
      if ( Templates == nullptr )
      {
        Ogre::LogSetCurParam(
          (int)"D:/work/oworldsrc/client/RenderSystem_OGL/OgreOGLRenderSystem.cpp",
          (const char *)&dword_D0 + 3,
          8,
          v12);
        Ogre::LogMessage((Ogre *)"cannot find opengl shadercache", v13);
      }
    }
    else
    {
      Ogre::LogSetCurParam(
        (int)"D:/work/oworldsrc/client/RenderSystem_OGL/OgreOGLRenderSystem.cpp",
        (const char *)&dword_CC,
        8,
        v11);
      Ogre::LogMessage((Ogre *)"load material template file error: %s", v16[0]);
    }
    sub_3BDF80(v16);
  }
  else if ( v15 != nullptr )
  {
    (*(void (__fastcall **)(Ogre::OGLRenderWindow *))(*(_DWORD *)v15 + 20))(v15);
  }
  return Templates;
}


//======================================================================
// Ogre::OGLRenderSystem::createRenderWindow(Ogre::RenderSystem::InitDesc const&)
// address: 0x00264B44   size: 0x42 (66 bytes)
//======================================================================
Ogre::OGLRenderWindow *__fastcall Ogre::OGLRenderSystem::createRenderWindow(int a1, _DWORD *a2)
{
  Ogre::OGLRenderWindow *v4; // r4
  Ogre::OGLRenderWindow *result; // r0
  __int64 v6; // r0
  Ogre::OGLRenderWindow *v7; // [sp+4h] [bp-4h] BYREF

  v4 = (Ogre::OGLRenderWindow *)operator new(0x24u);
  Ogre::OGLRenderWindow::OGLRenderWindow((int)v4, a1, a2, 0);
  v7 = v4;
  if ( Ogre::OGLRenderWindow::onInitialise(v4) != 0 )
  {
    LODWORD(v6) = a1 + 240;
    HIDWORD(v6) = &v7;
    std::vector<Ogre::OGLRenderWindow *>::push_back(v6);
    return v7;
  }
  else
  {
    result = v7;
    if ( v7 != nullptr )
    {
      (*(void (__fastcall **)(Ogre::OGLRenderWindow *))(*(_DWORD *)v7 + 20))(v7);
      return nullptr;
    }
  }
  return result;
}


//======================================================================
// Ogre::OGLRenderSystem::getInputLayout(Ogre::VertexFormat const&)
// address: 0x00264DF4   size: 0x1A2 (418 bytes)
//======================================================================
int *__fastcall Ogre::OGLRenderSystem::getInputLayout(Ogre::OGLRenderSystem *this, const Ogre::VertexFormat *a2)
{
  unsigned int i; // r4
  int v4; // r3
  int *v5; // r5
  _DWORD *v7; // r4
  int v8; // r5
  char *v9; // r1
  int v10; // r3
  unsigned int v11; // r5
  unsigned int v12; // r2
  int Stride; // r0
  unsigned int v14; // r2
  unsigned __int16 *v15; // r5
  int v16; // r3
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  __int64 v22; // r0
  void *v23; // [sp+0h] [bp-44h]
  _DWORD v25[7]; // [sp+Ch] [bp-38h] BYREF
  _DWORD v26[7]; // [sp+28h] [bp-1Ch] BYREF

  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 63);
    if ( i >= (*((_DWORD *)this + 64) - v4) >> 2 )
      break;
    v5 = *(int **)(4 * i + v4);
    if ( Ogre::VertexFormat::operator==(v5, a2) != 0 )
      return v5;
  }
  v7 = (_DWORD *)operator new(0x18u);
  Ogre::VertexFormat::VertexFormat(v7);
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v25[0] = v7;
  Ogre::VertexFormat::operator=((int)v7, (int)a2);
  v8 = *((_DWORD *)a2 + 1) - *(_DWORD *)a2;
  j_memset(&v25[1], 0, 0x18u);
  j_memcpy(v26, &v25[1], 0x18u);
  v9 = (char *)v7[4];
  v10 = v7[3];
  v11 = v8 >> 2;
  v12 = -1431655765 * ((int)&v9[-v10] >> 3);
  if ( v11 <= v12 )
  {
    if ( v11 < v12 )
      v7[4] = v10 + 24 * v11;
  }
  else
  {
    std::vector<Ogre::VertexDeclElement>::_M_fill_insert((int)(v7 + 3), v9, v11 - v12, v26);
  }
  Stride = Ogre::VertexFormat::getStride(a2);
  v14 = 0;
  v23 = (void *)Stride;
  while ( v14 < (*((_DWORD *)a2 + 1) - *(_DWORD *)a2) >> 2 )
  {
    v15 = (unsigned __int16 *)(*(_DWORD *)a2 + 4 * v14);
    v16 = *(_DWORD *)(v25[0] + 12) + 24 * v14;
    *(_DWORD *)(v16 + 8) = 5126;
    *(_BYTE *)(v16 + 12) = 0;
    *(_DWORD *)(v16 + 20) = (unsigned int)(*v15 << 20) >> 24;
    *(_DWORD *)(v16 + 16) = v23;
    switch ( *(_DWORD *)v15 << 12 >> 24 )
    {
      case 0:
        v17 = 1;
        goto LABEL_15;
      case 1:
        v17 = 2;
        goto LABEL_15;
      case 2:
        v17 = 3;
LABEL_15:
        *(_DWORD *)(v16 + 4) = v17;
        break;
      case 3:
        *(_DWORD *)(v16 + 4) = 4;
        break;
      case 4:
        *(_DWORD *)(v16 + 4) = 4;
        *(_BYTE *)(v16 + 12) = 1;
        goto LABEL_26;
      case 5:
        v18 = 1;
        goto LABEL_22;
      case 6:
        v18 = 2;
        goto LABEL_22;
      case 7:
        v18 = 3;
LABEL_22:
        *(_DWORD *)(v16 + 4) = v18;
        goto LABEL_24;
      case 8:
        *(_DWORD *)(v16 + 4) = 4;
LABEL_24:
        v19 = 5122;
        goto LABEL_27;
      case 9:
        *(_DWORD *)(v16 + 4) = 4;
LABEL_26:
        v19 = 5121;
LABEL_27:
        *(_DWORD *)(v16 + 8) = v19;
        break;
      default:
        break;
    }
    switch ( (unsigned int)(v15[1] << 20) >> 24 )
    {
      case 1u:
      case 0xAu:
        *(_DWORD *)v16 = 0;
        goto LABEL_41;
      case 2u:
        v20 = 5;
        goto LABEL_39;
      case 3u:
        v20 = 6;
        goto LABEL_39;
      case 4u:
        v20 = 1;
        goto LABEL_39;
      case 5u:
        v20 = 2;
        goto LABEL_39;
      case 7u:
        v21 = *((unsigned __int8 *)v15 + 3) >> 4;
        if ( v21 != 0 )
        {
          if ( v21 == 1 )
            *(_DWORD *)v16 = 4;
        }
        else
        {
          v20 = 3;
LABEL_39:
          *(_DWORD *)v16 = v20;
        }
LABEL_41:
        if ( *(_DWORD *)v16 == 6 )
          *(_BYTE *)(v16 + 12) = 0;
        ++v14;
        break;
      case 8u:
        v20 = 7;
        goto LABEL_39;
      case 9u:
        v20 = 8;
        goto LABEL_39;
      default:
        goto LABEL_41;
    }
  }
  LODWORD(v22) = (char *)this + 252;
  HIDWORD(v22) = *((_DWORD *)this + 64);
  if ( HIDWORD(v22) == *((_DWORD *)this + 65) )
  {
    std::vector<Ogre::OGLVertexDecl *>::_M_insert_aux(v22, v25);
  }
  else
  {
    if ( HIDWORD(v22) != 0 )
      *(_DWORD *)HIDWORD(v22) = v25[0];
    *((_DWORD *)this + 64) += 4;
  }
  return (int *)v25[0];
}

