// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Downloader

//======================================================================
// Ogre::Downloader::Downloader(void)
// address: 0x0016DEA0   size: 0xC6 (198 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10DownloaderC1Ev'
pthread_mutex_t *__fastcall Ogre::Downloader::Downloader(pthread_mutex_t *this)
{
  pthread_mutex_t *v1; // r4
  pthread_mutex_t *v3; // r0
  int v4; // r2

  v1 = (pthread_mutex_t *)((char *)this + 252);
  *((_DWORD *)this + 65) = 0;
  v3 = Ogre::LockSection::LockSection(this + 11);
  v1->__nusers = 0;
  v1->__spins = 0;
  v1[1].__lock = 0;
  v1[1].__count = 0;
  *((_DWORD *)this + 71) = &byte_55FB88;
  v1[1].__kind = 0;
  v1[1].__nusers = 0;
  v1[1].__spins = 0;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 78) = 0;
  *((_DWORD *)this + 79) = 0;
  v4 = Ogre::Downloader::msNumInsts++;
  if ( v4 == 0 )
    v3 = (pthread_mutex_t *)curl_global_init(3);
  this->__lock = curl_easy_init(v3);
  ((void (*)(void))curl_easy_setopt)();
  curl_easy_setopt(this->__lock, 10001, this);
  curl_easy_setopt(this->__lock, 20056, Ogre::Downloader::ProgressFunction);
  curl_easy_setopt(this->__lock, 10057, this);
  curl_easy_setopt(this->__lock, 43, 0);
  curl_easy_setopt(this->__lock, 10010, &this->__align + 1);
  curl_easy_setopt(this->__lock, 52, 1);
  curl_easy_setopt(this->__lock, 41, 1);
  j_memset(&this->__align + 1, 0, 0x100u);
  return this;
}


//======================================================================
// Ogre::Downloader::~Downloader()
// address: 0x0016DF8C   size: 0x5C (92 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10DownloaderD1Ev'
void __fastcall Ogre::Downloader::~Downloader(pthread_mutex_t *this)
{
  char *v1; // r5
  FILE *v3; // r0
  void *v4; // r0
  void *v5; // r0
  int lock; // r0

  v1 = (char *)this + 252;
  v3 = *((FILE **)this + 67);
  if ( v3 != nullptr )
    j_fclose(v3);
  v4 = *((void **)v1 + 6);
  if ( v4 != nullptr )
    j_free(v4);
  v5 = *((void **)v1 + 2);
  if ( v5 != nullptr )
    j_free(v5);
  lock = this->__lock;
  if ( this->__lock != 0 )
    lock = curl_easy_cleanup();
  if ( --Ogre::Downloader::msNumInsts == 0 )
    curl_global_cleanup(lock);
  sub_3BDF80((char *)this + 284);
  Ogre::LockSection::~LockSection(this + 11);
}


//======================================================================
// Ogre::Downloader::StopDownload(void)
// address: 0x0016DFEC   size: 0x24 (36 bytes)
//======================================================================
__int64 __fastcall Ogre::Downloader::StopDownload(Ogre::Downloader *this)
{
  pthread_mutex_t *v2; // r0
  __int64 v4; // [sp+0h] [bp-8h] BYREF

  LODWORD(v4) = this;
  v2 = (pthread_mutex_t *)((char *)this + 264);
  HIDWORD(v4) = v2;
  if ( v2 != nullptr )
    Ogre::LockSection::Lock(v2);
  curl_easy_pause(*(_DWORD *)this, 1);
  Ogre::LockFunctor::~LockFunctor((Ogre::LockSection **)&v4 + 1);
  return v4;
}


//======================================================================
// Ogre::Downloader::ContinueDownload(void)
// address: 0x0016E010   size: 0x24 (36 bytes)
//======================================================================
__int64 __fastcall Ogre::Downloader::ContinueDownload(Ogre::Downloader *this)
{
  pthread_mutex_t *v2; // r0
  __int64 v4; // [sp+0h] [bp-8h] BYREF

  LODWORD(v4) = this;
  v2 = (pthread_mutex_t *)((char *)this + 264);
  HIDWORD(v4) = v2;
  if ( v2 != nullptr )
    Ogre::LockSection::Lock(v2);
  curl_easy_pause(*(_DWORD *)this, 0);
  Ogre::LockFunctor::~LockFunctor((Ogre::LockSection **)&v4 + 1);
  return v4;
}


//======================================================================
// Ogre::Downloader::_BlockDownload(char const*,int,int)
// address: 0x0016E034   size: 0x146 (326 bytes)
//======================================================================
bool __fastcall Ogre::Downloader::_BlockDownload(Ogre::Downloader *this, const char *a2, int a3, int a4)
{
  void *v6; // r0
  size_t v7; // r7
  char *v8; // r0
  size_t v9; // r7
  char *v10; // r0
  unsigned int v11; // r3
  int v12; // r6
  FILE *v13; // r0
  FILE *v14; // r0
  _BOOL4 v15; // r4
  const char *v16; // r1
  char *v19; // [sp+8h] [bp-14h]
  Ogre::LockSection *v21; // [sp+10h] [bp-Ch] BYREF
  const char *v22; // [sp+14h] [bp-8h] BYREF

  *((_BYTE *)this + 320) = 0;
  *((_DWORD *)this + 75) = Ogre::Timer::getSystemTick(this);
  *((_DWORD *)this + 74) = 0;
  v21 = (Ogre::Downloader *)((char *)this + 264);
  Ogre::LockSection::Lock((pthread_mutex_t *)this + 11);
  curl_easy_setopt(*(_DWORD *)this, 10002, a2);
  v6 = *((void **)this + 65);
  if ( v6 != nullptr )
    j_free(v6);
  if ( a4 <= 0 )
  {
    v9 = j_snprintf(nullptr, 0, "%d-", a3) + 1;
    v10 = (char *)j_malloc(v9);
    *((_DWORD *)this + 65) = v10;
    j_snprintf(v10, v9, "%d-", a3);
  }
  else
  {
    v19 = (char *)(a3 + a4 - 1);
    v7 = j_snprintf(nullptr, 0, "%d-%d", a3, v19) + 1;
    v8 = (char *)j_malloc(v7);
    *((_DWORD *)this + 65) = v8;
    j_snprintf(v8, v7, "%d-%d", a3, v19);
  }
  curl_easy_setopt(*(_DWORD *)this, 10007, *((_DWORD *)this + 65));
  v12 = curl_easy_perform(*(_DWORD *)this);
  v13 = *((FILE **)this + 68);
  if ( v13 != nullptr )
  {
    j_fclose(v13);
    v14 = j_fopen(*((const char **)this + 71), "rb+");
    *((_DWORD *)this + 67) = v14;
    *((_DWORD *)this + 68) = v14;
  }
  if ( v12 == 0 || v12 == 42 )
  {
    curl_easy_getinfo(*(_DWORD *)this, 2097154, &v22);
    if ( (int)v22 <= 299 )
    {
      v15 = v12 == 0;
      goto LABEL_17;
    }
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreDownloader.cpp",
      (const char *)&dword_F4,
      4,
      0x12Bu);
    Ogre::LogMessage((Ogre *)"HTTP CODE:%d", v22);
  }
  else if ( *((_BYTE *)this + 4) != 0 )
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreDownloader.cpp",
      (const char *)&dword_E4 + 3,
      4,
      v11);
    Ogre::LogMessage((Ogre *)"Connect to failed, error : %s", (const char *)this + 4);
  }
  else
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreDownloader.cpp",
      (const char *)&dword_E8 + 3,
      4,
      v11);
    Ogre::LogMessage((Ogre *)"Connect to failed", v16);
  }
  v15 = false;
LABEL_17:
  Ogre::LockFunctor::~LockFunctor(&v21);
  return v15;
}


//======================================================================
// Ogre::Downloader::BlockDownload(char const*,char const*,int,int)
// address: 0x0016E1AC   size: 0xC0 (192 bytes)
//======================================================================
bool __fastcall Ogre::Downloader::BlockDownload(Ogre::Downloader *this, char *a2, const char *a3, int a4, int a5)
{
  FILE *v8; // r0
  FILE *v9; // r0
  FILE *v10; // r0
  void *v12; // r0
  void *v13; // r0

  if ( j_strcmp(*((const char **)this + 71), a2) != 0 )
  {
    v8 = *((FILE **)this + 67);
    if ( v8 != nullptr )
    {
      j_fclose(v8);
      *((_DWORD *)this + 67) = 0;
    }
    sub_3BE508((int)this + 284, a2);
  }
  if ( *((_DWORD *)this + 67) == 0 )
  {
    v10 = j_fopen(*((const char **)this + 71), "rb+");
    *((_DWORD *)this + 67) = v10;
    if ( v10 == nullptr )
      *((_DWORD *)this + 67) = j_fopen(*((const char **)this + 71), "wb");
    if ( *((_DWORD *)this + 67) == 0 )
      return false;
  }
  v9 = *((FILE **)this + 67);
  *((_DWORD *)this + 68) = v9;
  if ( v9 != nullptr )
    j_fseek(v9, a4, 0);
  if ( *((_DWORD *)this + 72) < a5 )
  {
    v12 = *((void **)this + 69);
    if ( v12 != nullptr )
    {
      j_free(v12);
      *((_DWORD *)this + 69) = 0;
    }
    *((_DWORD *)this + 72) = a5;
  }
  if ( *((_DWORD *)this + 69) == 0 )
  {
    v13 = j_malloc(*((_DWORD *)this + 72));
    *((_DWORD *)this + 69) = v13;
    if ( v13 == nullptr )
      return false;
  }
  *((_DWORD *)this + 70) = *((_DWORD *)this + 69);
  *((_DWORD *)this + 73) = a5;
  return Ogre::Downloader::_BlockDownload(this, a3, a4, a5);
}


//======================================================================
// Ogre::Downloader::BlockDownload(char const*,char const*,int)
// address: 0x0016E274   size: 0x8C (140 bytes)
//======================================================================
int __fastcall Ogre::Downloader::BlockDownload(Ogre::Downloader *this, char *a2, const char *a3, int a4)
{
  FILE *v7; // r0
  FILE *v8; // r0
  FILE *v9; // r0
  int result; // r0

  if ( j_strcmp(*((const char **)this + 71), a2) != 0 )
  {
    v7 = *((FILE **)this + 67);
    if ( v7 != nullptr )
    {
      j_fclose(v7);
      *((_DWORD *)this + 67) = 0;
    }
    sub_3BE508((int)this + 284, a2);
  }
  if ( *((_DWORD *)this + 67) != 0 )
    goto LABEL_6;
  v9 = j_fopen(*((const char **)this + 71), "rb+");
  *((_DWORD *)this + 67) = v9;
  if ( v9 == nullptr )
    *((_DWORD *)this + 67) = j_fopen(*((const char **)this + 71), "wb");
  result = *((_DWORD *)this + 67);
  if ( result != 0 )
  {
LABEL_6:
    v8 = *((FILE **)this + 67);
    *((_DWORD *)this + 68) = v8;
    if ( v8 != nullptr )
      j_fseek(v8, a4, 0);
    *((_DWORD *)this + 70) = 0;
    *((_DWORD *)this + 73) = 0;
    return Ogre::Downloader::_BlockDownload(this, a3, a4, 0);
  }
  return result;
}


//======================================================================
// Ogre::Downloader::BlockDownload(char const*,char const*)
// address: 0x0016E308   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::Downloader::BlockDownload(Ogre::Downloader *this, char *a2, const char *a3)
{
  return Ogre::Downloader::BlockDownload(this, a2, a3, 0);
}


//======================================================================
// Ogre::Downloader::BlockDownload(char const*,int,int)
// address: 0x0016E312   size: 0x50 (80 bytes)
//======================================================================
void *__fastcall Ogre::Downloader::BlockDownload(Ogre::Downloader *this, const char *a2, int a3, int a4)
{
  _DWORD *v4; // r4
  void *v8; // r0
  int v9; // r3
  void *result; // r0

  v4 = (_DWORD *)((char *)this + 252);
  if ( *((_DWORD *)this + 72) < a4 )
  {
    v8 = *((void **)this + 69);
    if ( v8 != nullptr )
    {
      j_free(v8);
      v4[6] = 0;
    }
    v4[9] = a4;
  }
  if ( v4[6] != 0 || (result = j_malloc(v4[9]), v4[6] = result, result != nullptr) )
  {
    v9 = v4[6];
    v4[10] = a4;
    v4[7] = v9;
    v4[5] = 0;
    return (void *)Ogre::Downloader::_BlockDownload(this, a2, a3, a4);
  }
  return result;
}


//======================================================================
// Ogre::Downloader::OnWrite(void *,unsigned int)
// address: 0x0016E362   size: 0x4E (78 bytes)
//======================================================================
size_t __fastcall Ogre::Downloader::OnWrite(Ogre::Downloader *this, void *a2, size_t a3)
{
  _DWORD *v3; // r4
  size_t v4; // r3
  size_t v7; // r5
  int v8; // r2
  FILE *v9; // r3
  Ogre::Timer *v10; // r0

  v3 = (_DWORD *)((char *)this + 252);
  v4 = *((_DWORD *)this + 73);
  v7 = a3;
  if ( v4 != 0 )
  {
    v8 = *((_DWORD *)this + 74);
    if ( a3 + v8 > v4 )
      v7 = v4 - v8;
  }
  v9 = *((FILE **)this + 68);
  if ( v9 != nullptr )
    j_fwrite(a2, v7, 1u, v9);
  v10 = (Ogre::Timer *)v3[7];
  if ( v10 != nullptr )
    v10 = (Ogre::Timer *)j_memcpy((char *)v10 + v3[11], a2, v7);
  v3[11] += v7;
  v3[12] = Ogre::Timer::getSystemTick(v10);
  return a3;
}


//======================================================================
// Ogre::Downloader::WriteFunction(void *,unsigned int,unsigned int,void *)
// address: 0x0016E3B0   size: 0x10 (16 bytes)
//======================================================================
size_t __fastcall Ogre::Downloader::WriteFunction(
        Ogre::Downloader *this,
        void *a2,
        unsigned int a3,
        Ogre::Downloader *a4,
        void *a5)
{
  return Ogre::Downloader::OnWrite(a4, this, a3 * (_DWORD)a2);
}


//======================================================================
// Ogre::Downloader::GetDownloadMemory(void)
// address: 0x0016E3C0   size: 0x76 (118 bytes)
//======================================================================
int __fastcall Ogre::Downloader::GetDownloadMemory(Ogre::Downloader *this)
{
  char *v1; // r4
  int v2; // r3
  int result; // r0
  int v4; // r5
  void *v5; // r0
  int v6; // r5
  void *v7; // r0

  v1 = (char *)this + 252;
  v2 = *((_DWORD *)this + 74);
  if ( v2 == 0 )
    return 0;
  v4 = *((_DWORD *)this + 70);
  result = v4;
  if ( *((_DWORD *)v1 + 7) == 0 )
  {
    if ( *((_DWORD *)v1 + 9) < v2 )
    {
      v5 = *((void **)v1 + 6);
      if ( v5 != nullptr )
      {
        j_free(v5);
        *((_DWORD *)v1 + 6) = v4;
      }
      *((_DWORD *)v1 + 9) = *((_DWORD *)v1 + 11);
    }
    if ( *((_DWORD *)v1 + 6) == 0 )
    {
      v7 = j_malloc(*((_DWORD *)v1 + 9));
      *((_DWORD *)v1 + 6) = v7;
      if ( v7 == nullptr )
        return 0;
    }
    if ( *((_DWORD *)v1 + 6) != 0 )
    {
      v6 = j_ftell(*((FILE **)v1 + 5));
      j_fseek(*((FILE **)v1 + 5), -*((_DWORD *)v1 + 11), 1);
      j_fread(*((void **)v1 + 6), *((_DWORD *)v1 + 11), 1u, *((FILE **)v1 + 5));
      j_fseek(*((FILE **)v1 + 5), v6, 0);
    }
    return *((_DWORD *)v1 + 6);
  }
  return result;
}


//======================================================================
// Ogre::Downloader::OnProgress(double,double,double,double)
// address: 0x0016E438   size: 0x2E (46 bytes)
//======================================================================
int __fastcall Ogre::Downloader::OnProgress(Ogre::Downloader *this, double a2, double a3, double a4, double a5)
{
  int v7; // r2
  int v8; // r3

  v7 = *((_DWORD *)this + 76);
  v8 = *((_DWORD *)this + 77);
  if ( *((_DWORD *)this + 78) != v7 || *((_DWORD *)this + 79) != v8 )
  {
    *((_DWORD *)this + 78) = v7;
    *((_DWORD *)this + 79) = v8;
    curl_easy_setopt(*(_DWORD *)this, 30146, v7);
  }
  return -*((unsigned __int8 *)this + 320);
}


//======================================================================
// Ogre::Downloader::ProgressFunction(void *,double,double,double,double)
// address: 0x0016E46C   size: 0x24 (36 bytes)
//======================================================================
int __fastcall Ogre::Downloader::ProgressFunction(Ogre::Downloader *this, double a2, double a3, double a4, double a5)
{
  return Ogre::Downloader::OnProgress(this, a2, a3, a4, a5);
}


//======================================================================
// Ogre::Downloader::GetDownloadSize(void)
// address: 0x0016E490   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::Downloader::GetDownloadSize(Ogre::Downloader *this)
{
  return *((_DWORD *)this + 74);
}


//======================================================================
// Ogre::Downloader::Close(void)
// address: 0x0016E496   size: 0x2E (46 bytes)
//======================================================================
void __fastcall Ogre::Downloader::Close(Ogre::Downloader *this)
{
  _DWORD *v1; // r4
  FILE *v2; // r0
  void *v3; // r0

  v1 = (_DWORD *)((char *)this + 252);
  v2 = *((FILE **)this + 67);
  if ( v2 != nullptr )
  {
    j_fclose(v2);
    v1[5] = 0;
    v1[4] = 0;
  }
  v3 = (void *)v1[6];
  if ( v3 != nullptr )
  {
    j_free(v3);
    v1[7] = 0;
    v1[6] = 0;
    v1[9] = 0;
  }
  v1[11] = 0;
}


//======================================================================
// Ogre::Downloader::GetCurrentSize(void)
// address: 0x0016E4C4   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::Downloader::GetCurrentSize(Ogre::Downloader *this)
{
  return *((_DWORD *)this + 74);
}


//======================================================================
// Ogre::Downloader::GetTotalSize(void)
// address: 0x0016E4CA   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::Downloader::GetTotalSize(Ogre::Downloader *this)
{
  return *((_DWORD *)this + 73);
}


//======================================================================
// Ogre::Downloader::AbortDownload(void)
// address: 0x0016E4D0   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::Downloader::AbortDownload(int this)
{
  *(_BYTE *)(this + 320) = 1;
  return this;
}


//======================================================================
// Ogre::Downloader::SetDownloadMaxSpeed(long long)
// address: 0x0016E4DA   size: 0x8 (8 bytes)
//======================================================================
char *__fastcall Ogre::Downloader::SetDownloadMaxSpeed(Ogre::Downloader *this, __int64 a2)
{
  char *result; // r0

  result = (char *)this + 248;
  *((_QWORD *)result + 7) = a2;
  return result;
}


//======================================================================
// Ogre::Downloader::GetDownloadSpeed(void)
// address: 0x0016E4E4   size: 0x14 (20 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::Downloader::GetDownloadSpeed(Ogre::Downloader *this, int a2, int a3)
{
  _DWORD v3[3]; // [sp+0h] [bp-Ch] BYREF

  v3[2] = a3;
  curl_easy_getinfo(*(_DWORD *)this, 3145737, v3);
}

