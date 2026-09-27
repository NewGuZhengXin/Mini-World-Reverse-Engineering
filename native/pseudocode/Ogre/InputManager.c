// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::InputManager

//======================================================================
// Ogre::InputManager::InputManager(void *)
// address: 0x00166A48   size: 0xA4 (164 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12InputManagerC1EPv'
Ogre::InputManager *__fastcall Ogre::InputManager::InputManager(Ogre::InputManager *this, void *a2)
{
  int v4; // r0
  int v5; // r6
  int *v6; // r6
  int v7; // r2
  int v8; // r3
  int v9; // r3

  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  Ogre::Singleton<Ogre::InputManager>::ms_Singleton = (int)this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 1) = 8;
  v4 = operator new(0x20u);
  v5 = *((_DWORD *)this + 1);
  *(_DWORD *)this = v4;
  v6 = (int *)(v4 + 4 * ((unsigned int)(v5 - 1) >> 1));
  *v6 = operator new(0x200u);
  *((_DWORD *)this + 5) = v6;
  v7 = *v6;
  v8 = *v6 + 512;
  *((_DWORD *)this + 3) = *v6;
  *((_DWORD *)this + 9) = v6;
  *((_DWORD *)this + 4) = v8;
  v9 = *v6;
  *((_DWORD *)this + 2) = v7;
  *((_DWORD *)this + 7) = v9;
  *((_DWORD *)this + 6) = v9;
  *((_DWORD *)this + 8) = v9 + 512;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_BYTE *)this + 52) = 0;
  *((_BYTE *)this + 53) = 1;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = a2;
  j_memset((char *)this + 72, 0, 0x10u);
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 20) = (char *)this + 72;
  *((_DWORD *)this + 21) = (char *)this + 72;
  *((_DWORD *)this + 23) = &byte_55FB88;
  *((_BYTE *)this + 55) = 0;
  *((_BYTE *)this + 54) = 0;
  *((_BYTE *)this + 56) = 0;
  *((_BYTE *)this + 96) = 0;
  return this;
}


//======================================================================
// Ogre::InputManager::setCursorPos(int,int)
// address: 0x00166AF4   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::InputManager::setCursorPos(Ogre::InputManager *this, int a2, int a3)
{
  ;
}


//======================================================================
// Ogre::InputManager::getCursorPos(int &,int &)
// address: 0x00166AF6   size: 0xA (10 bytes)
//======================================================================
void __fastcall Ogre::InputManager::getCursorPos(Ogre::InputManager *this, int *a2, int *a3)
{
  *a2 = -100;
  *a3 = -100;
}


//======================================================================
// Ogre::InputManager::setHWnd(void *)
// address: 0x00166B00   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::InputManager::setHWnd(int this, void *a2)
{
  *(_DWORD *)(this + 64) = a2;
  return this;
}


//======================================================================
// Ogre::InputManager::lockFPSMouse(bool)
// address: 0x00166B04   size: 0x6 (6 bytes)
//======================================================================
_BYTE *__fastcall Ogre::InputManager::lockFPSMouse(Ogre::InputManager *this, bool a2)
{
  _BYTE *result; // r0

  result = (char *)this + 56;
  *result = a2;
  return result;
}


//======================================================================
// Ogre::InputManager::findTouchObjById(int)
// address: 0x00166B0A   size: 0x34 (52 bytes)
//======================================================================
int __fastcall Ogre::InputManager::findTouchObjById(Ogre::InputManager *this, int a2)
{
  char *v2; // r0
  char *v3; // r3
  char *v4; // r2
  char *v5; // r4
  int result; // r0

  v2 = (char *)this + 72;
  v3 = *((char **)v2 + 1);
  v4 = v2;
  while ( v3 != nullptr )
  {
    if ( *((_DWORD *)v3 + 4) < a2 )
    {
      v5 = *((char **)v3 + 3);
      v3 = v4;
    }
    else
    {
      v5 = *((char **)v3 + 2);
    }
    v4 = v3;
    v3 = v5;
  }
  if ( v4 == v2 )
    return 0;
  result = 0;
  if ( a2 >= *((_DWORD *)v4 + 4) )
    return *((_DWORD *)v4 + 5);
  return result;
}


//======================================================================
// Ogre::InputManager::enableIME(bool)
// address: 0x00166B3E   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::InputManager::enableIME(Ogre::InputManager *this, bool a2)
{
  return SetKeyboardStateJNI(a2);
}


//======================================================================
// Ogre::InputManager::handleEvent(Ogre::InputEvent const&)
// address: 0x00166B48   size: 0x34 (52 bytes)
//======================================================================
int (__fastcall ***__fastcall Ogre::InputManager::handleEvent(Ogre::InputManager *this, const InputEvent *a2))(_DWORD)
{
  int (__fastcall ***result)(_DWORD); // r0
  unsigned int v5; // r4
  int v6; // r3

  result = *((int (__fastcall ****)(_DWORD))this + 15);
  v5 = (unsigned int)result;
  if ( result != nullptr )
    return (int (__fastcall ***)(_DWORD))(**result)(result);
  while ( 1 )
  {
    v6 = *((_DWORD *)this + 10);
    if ( v5 >= (*((_DWORD *)this + 11) - v6) >> 2 )
      break;
    result = (int (__fastcall ***)(_DWORD))(***(int (__fastcall ****)(_DWORD, const InputEvent *))(4 * v5 + v6))(
                                             *(_DWORD *)(4 * v5 + v6),
                                             a2);
    if ( result == nullptr )
      break;
    ++v5;
  }
  return result;
}


//======================================================================
// Ogre::InputManager::Dispatch(void)
// address: 0x00166B7C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::InputManager::Dispatch(Ogre::InputManager *this)
{
  ;
}


//======================================================================
// Ogre::InputManager::IsPointIn(int,int)
// address: 0x00166B80   size: 0x2A (42 bytes)
//======================================================================
bool __fastcall Ogre::InputManager::IsPointIn(Ogre::InputManager *this, int a2, int a3)
{
  _BOOL4 result; // r0

  result = false;
  if ( a2 >= 0 && a2 < *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 88) && a3 >= 0 )
    return a3 < *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 92);
  return result;
}


//======================================================================
// Ogre::InputManager::isFocus(void)
// address: 0x00166BB0   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::InputManager::isFocus(Ogre::InputManager *this)
{
  return *((unsigned __int8 *)this + 53);
}


//======================================================================
// Ogre::InputManager::setInitialInput(char const*)
// address: 0x00166BB6   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::InputManager::setInitialInput(Ogre::InputManager *this, char *a2)
{
  return sub_3BE508((int)this + 92, a2);
}


//======================================================================
// Ogre::InputManager::getInitialInput(void)
// address: 0x00166BC0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::InputManager::getInitialInput(Ogre::InputManager *this)
{
  return *((_DWORD *)this + 23);
}


//======================================================================
// Ogre::InputManager::onGainFocus(void)
// address: 0x00166BF8   size: 0x3E (62 bytes)
//======================================================================
void **__fastcall Ogre::InputManager::onGainFocus(Ogre::InputManager *this)
{
  InputEvent v2; // [sp+4h] [bp-24h] BYREF
  int v3; // [sp+20h] [bp-8h]

  v2.ie_source = 0;
  v2.ie_condition = 0;
  v3 = 0;
  *((_BYTE *)this + 53) = 1;
  v2.ie_proc = (XtInputCallbackProc)(byte_9 + 5);
  Ogre::InputManager::handleEvent(this, &v2);
  return std::_Vector_base<char>::~_Vector_base((void **)&v2.ie_source);
}


//======================================================================
// Ogre::InputManager::onLostFocus(void)
// address: 0x00166C3C   size: 0x50 (80 bytes)
//======================================================================
void **__fastcall Ogre::InputManager::onLostFocus(Ogre::InputManager *this)
{
  InputEvent v3; // [sp+4h] [bp-24h] BYREF
  int v4; // [sp+20h] [bp-8h]

  *((_BYTE *)this + 53) = 0;
  v3.ie_source = 0;
  *((_BYTE *)this + 52) = 0;
  v3.ie_condition = 0;
  v4 = 0;
  v3.ie_proc = (XtInputCallbackProc)(byte_9 + 6);
  Ogre::InputManager::handleEvent(this, &v3);
  v3.ie_proc = (XtInputCallbackProc)(byte_9 + 2);
  Ogre::InputManager::handleEvent(this, &v3);
  return std::_Vector_base<char>::~_Vector_base((void **)&v3.ie_source);
}


//======================================================================
// Ogre::InputManager::UnregisterInputHandler(Ogre::InputHandler *)
// address: 0x00166D62   size: 0x2C (44 bytes)
//======================================================================
void *__fastcall Ogre::InputManager::UnregisterInputHandler(int a1, void *a2)
{
  void **v3; // r3
  void *result; // r0
  int v5; // r1
  void **v6; // r2

  v3 = *(void ***)(a1 + 40);
  result = a2;
  v5 = *(_DWORD *)(a1 + 44);
  while ( 1 )
  {
    v6 = v3;
    if ( v3 == (void **)v5 )
      break;
    if ( *v3++ == result )
    {
      result = v6 + 1;
      if ( v6 + 1 != (void **)v5 )
        result = (void *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::InputHandler *>(
                           result,
                           v5,
                           v6);
      *(_DWORD *)(a1 + 44) -= 4;
      return result;
    }
  }
  return result;
}


//======================================================================
// Ogre::InputManager::RegisterInputHandler(Ogre::InputHandler *)
// address: 0x00166E3C   size: 0x26 (38 bytes)
//======================================================================
__int64 __fastcall Ogre::InputManager::RegisterInputHandler(__int64 a1, int a2)
{
  __int64 v3; // [sp+0h] [bp-Ch] BYREF
  int v4; // [sp+8h] [bp-4h]

  v3 = a1;
  v4 = a2;
  HIDWORD(a1) = *(_DWORD *)(a1 + 44);
  if ( HIDWORD(a1) == *(_DWORD *)(a1 + 48) )
  {
    LODWORD(a1) = a1 + 40;
    std::vector<Ogre::InputHandler *>::_M_insert_aux(a1, (_DWORD *)&v3 + 1);
  }
  else
  {
    if ( HIDWORD(a1) != 0 )
      *(_DWORD *)HIDWORD(a1) = HIDWORD(v3);
    *(_DWORD *)(a1 + 44) += 4;
  }
  return v3;
}


//======================================================================
// Ogre::InputManager::touchEventDeal(int,int,int *,float *,float *)
// address: 0x00166EBC   size: 0x3D0 (976 bytes)
//======================================================================
void **__fastcall Ogre::InputManager::touchEventDeal(
        void **this,
        unsigned int a2,
        int a3,
        int *a4,
        float *a5,
        float *a6)
{
  float *v6; // r7
  float *v7; // r6
  int *v8; // r0
  int *v9; // r4
  int v10; // r3
  int *v11; // r5
  int v12; // r0
  int v13; // r5
  int v14; // r0
  int v15; // r1
  int v16; // r3
  int v17; // r5
  Ogre::Timer *v18; // r0
  int v19; // r0
  struct _InputEvent *v20; // r4
  float v21; // r0
  void *v22; // r6
  float v23; // r0
  struct _InputEvent **TouchObjById; // r0
  struct _XtAppStruct *v25; // r7
  struct _InputEvent *v26; // r3
  float v27; // r0
  Ogre::Timer *v28; // r0
  int *v29; // r0
  int v30; // r2
  struct _XtAppStruct *v31; // r5
  int v32; // r0
  int v33; // r0
  Ogre::Timer *v34; // r0
  SignalEventRec *SystemTick; // r0
  _DWORD *v36; // r7
  _DWORD *v37; // r4
  _DWORD *v38; // r3
  int v39; // r3
  struct _InputEvent *next; // r2
  _DWORD *v41; // r6
  int v42; // r0
  int v43; // r0
  _BOOL4 v44; // r7
  _DWORD *v45; // r0
  int v46; // r3
  int i; // [sp+18h] [bp-8Ch]
  int v48; // [sp+18h] [bp-8Ch]
  Ogre::InputManager *v50; // [sp+20h] [bp-84h]
  int v51; // [sp+24h] [bp-80h]
  float *v53; // [sp+30h] [bp-74h]
  _DWORD *v54; // [sp+34h] [bp-70h]
  float *v55; // [sp+38h] [bp-6Ch]
  int v56; // [sp+3Ch] [bp-68h]
  int v58; // [sp+4Ch] [bp-58h] BYREF
  int v59; // [sp+50h] [bp-54h]
  _DWORD *v60; // [sp+54h] [bp-50h] BYREF
  _DWORD *v61; // [sp+58h] [bp-4Ch]
  InputEvent v62; // [sp+5Ch] [bp-48h] BYREF
  int v63; // [sp+78h] [bp-2Ch]
  InputEvent v64; // [sp+7Ch] [bp-28h] BYREF
  int v65; // [sp+98h] [bp-Ch]

  v50 = (Ogre::InputManager *)this;
  v6 = a5;
  v7 = a6;
  if ( a2 != 18 )
  {
    v53 = a5;
    v55 = a6;
    v56 = 0;
    while ( 1 )
    {
      if ( v56 >= a3 )
        return this;
      v22 = (void *)*a4;
      v23 = *v53;
      v62.ie_source = 0;
      v62.ie_condition = 0;
      v63 = 0;
      v62.ie_closure = v22;
      v62.ie_next = (struct _InputEvent *)(int)v23;
      v62.ie_oq = (struct _InputEvent *)(int)*v55;
      if ( (a2 & 0xFFFFFFFD) != 0x11 )
        break;
      TouchObjById = (struct _InputEvent **)Ogre::InputManager::findTouchObjById(v50, (int)v22);
      v25 = (struct _XtAppStruct *)TouchObjById;
      if ( TouchObjById == nullptr )
        goto LABEL_17;
      v64.ie_source = 0;
      v64.ie_condition = 0;
      v65 = 0;
      v64.ie_proc = (XtInputCallbackProc)&byte_4;
      v26 = *TouchObjById;
      v27 = *v53;
      v64.ie_next = nullptr;
      v64.ie_oq = v26;
      LOWORD(v64.ie_closure) = (int)v27;
      HIWORD(v64.ie_closure) = (int)*v55;
      Ogre::InputManager::handleEvent(v50, &v64);
      v62.ie_proc = (XtInputCallbackProc)a2;
      v62.app = v25;
      v28 = (Ogre::Timer *)Ogre::InputManager::handleEvent(v50, &v62);
      if ( Ogre::Timer::getSystemTick(v28) - (unsigned int)v25->signalQueue <= 0x18F )
      {
        v62.ie_proc = (XtInputCallbackProc)&dword_14;
        Ogre::InputManager::handleEvent(v50, &v62);
      }
      operator delete(v25);
      std::_Rb_tree<int,std::pair<int const,Ogre::TouchObject *>,std::_Select1st<std::pair<int const,Ogre::TouchObject *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TouchObject *>>>::erase(
        (_DWORD *)v50 + 17,
        a4);
LABEL_35:
      std::_Vector_base<char>::~_Vector_base((void **)&v64.ie_source);
LABEL_17:
      this = std::_Vector_base<char>::~_Vector_base((void **)&v62.ie_source);
      ++v56;
      ++a4;
      ++v53;
      ++v55;
    }
    v29 = (int *)operator new(0x5Cu);
    v30 = *a4;
    v29[1] = a2;
    v31 = (struct _XtAppStruct *)v29;
    *v29 = v30;
    v32 = (int)*v53;
    v31->input_list = (InputEvent **)v32;
    v31->destroy_callbacks = (InternalCallbackList)v32;
    v33 = (int)*v55;
    v31->outstandingQueue = (InputEvent *)v33;
    v31->list = (Display **)v33;
    j_memset(&v31->errorDB, 0, 0x10u);
    j_memset(&v31->warningHandler, 0, 0x10u);
    v34 = (Ogre::Timer *)j_memset(&v31->fds, 0, 0x10u);
    v31->fds.rmask.__fds_bits[4] = 0;
    v31->timerQueue = nullptr;
    v31->workQueue = nullptr;
    SystemTick = (SignalEventRec *)Ogre::Timer::getSystemTick(v34);
    v31->signalQueue = SystemTick;
    v31->fds.rmask.__fds_bits[5] = (__fd_mask)SystemTick;
    v36 = *((_DWORD **)v50 + 19);
    v54 = (_DWORD *)((char *)v50 + 72);
    v37 = (_DWORD *)((char *)v50 + 72);
    while ( 1 )
    {
      v48 = *a4;
      if ( v36 == nullptr )
        break;
      if ( v36[4] < v48 )
      {
        v38 = (_DWORD *)v36[3];
        v36 = v37;
      }
      else
      {
        v38 = (_DWORD *)v36[2];
      }
      v37 = v36;
      v36 = v38;
    }
    if ( v37 != v54 && *a4 >= v37[4] )
    {
LABEL_34:
      v37[5] = v31;
      v64.ie_source = 0;
      v64.ie_condition = 0;
      v65 = 0;
      v64.ie_proc = (XtInputCallbackProc)(&dword_0 + 3);
      next = (struct _InputEvent *)v31->next;
      v64.ie_next = nullptr;
      v64.ie_oq = next;
      LOWORD(v64.ie_closure) = v31->input_list;
      HIWORD(v64.ie_closure) = v31->outstandingQueue;
      Ogre::InputManager::handleEvent(v50, &v64);
      v62.ie_proc = (XtInputCallbackProc)a2;
      v62.app = v31;
      Ogre::InputManager::handleEvent(v50, &v62);
      goto LABEL_35;
    }
    v59 = 0;
    v58 = v48;
    v51 = (int)v50 + 68;
    if ( v37 == v54 )
    {
      if ( *((_DWORD *)v50 + 22) != 0 )
      {
        v41 = *((_DWORD **)v50 + 21);
        if ( v41[4] < v48 )
          goto LABEL_52;
      }
    }
    else
    {
      v39 = v37[4];
      if ( v48 >= v39 )
      {
        if ( v39 >= v48 )
          goto LABEL_34;
        if ( v37 != *((_DWORD **)v50 + 21) )
        {
          v43 = sub_391DDC(v37);
          if ( v48 >= *(_DWORD *)(v43 + 16) )
          {
            std::_Rb_tree<int,std::pair<int const,Ogre::TouchObject *>,std::_Select1st<std::pair<int const,Ogre::TouchObject *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TouchObject *>>>::_M_get_insert_unique_pos(
              (int *)&v60,
              v51,
              &v58);
            v36 = v60;
            v37 = v61;
          }
          else if ( v37[3] != 0 )
          {
            v37 = (_DWORD *)v43;
            v36 = (_DWORD *)v43;
          }
        }
        v41 = v37;
        v37 = v36;
LABEL_50:
        if ( v41 == nullptr )
          goto LABEL_34;
        v44 = true;
        if ( v37 != nullptr )
        {
LABEL_55:
          v45 = (_DWORD *)operator new(0x18u);
          v37 = v45;
          if ( v45 != (_DWORD *)-16 )
          {
            v46 = v59;
            v45[4] = v58;
            v45[5] = v46;
          }
          sub_391E64(v44, v45, v41, v54);
          ++*((_DWORD *)v50 + 22);
          goto LABEL_34;
        }
LABEL_52:
        v44 = v41 == v54 || v48 < v41[4];
        goto LABEL_55;
      }
      if ( v37 == *((_DWORD **)v50 + 20) )
      {
        v41 = v37;
        goto LABEL_50;
      }
      v42 = sub_391E44(v37);
      v41 = (_DWORD *)v42;
      if ( *(_DWORD *)(v42 + 16) < v48 )
      {
        if ( *(_DWORD *)(v42 + 12) != 0 )
          v41 = v37;
        else
          v37 = nullptr;
        goto LABEL_50;
      }
    }
    std::_Rb_tree<int,std::pair<int const,Ogre::TouchObject *>,std::_Select1st<std::pair<int const,Ogre::TouchObject *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TouchObject *>>>::_M_get_insert_unique_pos(
      (int *)&v60,
      v51,
      &v58);
    v37 = v60;
    v41 = v61;
    goto LABEL_50;
  }
  v62.ie_source = 0;
  v62.ie_condition = 0;
  v63 = 0;
  v62.ie_proc = (XtInputCallbackProc)&word_12;
  for ( i = 0; i < a3; ++i )
  {
    v8 = (int *)Ogre::InputManager::findTouchObjById(v50, a4[i]);
    v9 = v8;
    if ( v8 != nullptr )
    {
      v10 = v8[21] + 1;
      if ( v8[21] == 3 )
        v10 = 0;
      v8[21] = v10;
      v11 = &v8[v8[21]];
      v11[9] = (int)(float)(*v6 - (float)v8[6]);
      v11[13] = (int)(float)(*v7 - (float)v8[7]);
      v12 = (int)*v6;
      v9[6] = v12;
      v13 = v12;
      v14 = (int)*v7;
      v15 = v9[2];
      v16 = v9[4];
      v9[7] = v14;
      v17 = (v13 - v15 + ((v13 - v15) >> 31)) ^ ((v13 - v15) >> 31);
      if ( v16 < v17 )
        v9[4] = v17;
      v18 = (Ogre::Timer *)((v14 - v9[3] + ((v14 - v9[3]) >> 31)) ^ ((v14 - v9[3]) >> 31));
      if ( v9[5] < (int)v18 )
        v9[5] = (int)v18;
      v19 = Ogre::Timer::getSystemTick(v18);
      v9[v9[21] + 17] = v19 - v9[22];
      v9[22] = v19;
      v62.ie_closure = v9;
      Ogre::InputManager::handleEvent(v50, &v62);
      v64.ie_source = 0;
      v64.ie_condition = 0;
      v65 = 0;
      v64.ie_proc = (XtInputCallbackProc)byte_9;
      v20 = (struct _InputEvent *)*v9;
      v21 = *v6;
      v64.ie_next = (struct _InputEvent *)(&dword_0 + 1);
      v64.ie_oq = v20;
      LOWORD(v64.ie_closure) = (int)v21;
      HIWORD(v64.ie_closure) = (int)*v7;
      Ogre::InputManager::handleEvent(v50, &v64);
      std::_Vector_base<char>::~_Vector_base((void **)&v64.ie_source);
    }
    ++v6;
    ++v7;
  }
  return std::_Vector_base<char>::~_Vector_base((void **)&v62.ie_source);
}


//======================================================================
// Ogre::InputManager::onTouchPressed(int,int *,float *,float *)
// address: 0x0016728C   size: 0x18 (24 bytes)
//======================================================================
__int64 __fastcall Ogre::InputManager::onTouchPressed(void **this, int a2, int *a3, float *a4, float *a5)
{
  __int64 v6; // [sp+0h] [bp-Ch]

  Ogre::InputManager::touchEventDeal(this, 0x10u, a2, a3, a4, a5);
  return v6;
}


//======================================================================
// Ogre::InputManager::onTouchReleased(int,int *,float *,float *)
// address: 0x001672A4   size: 0x18 (24 bytes)
//======================================================================
__int64 __fastcall Ogre::InputManager::onTouchReleased(void **this, int a2, int *a3, float *a4, float *a5)
{
  __int64 v6; // [sp+0h] [bp-Ch]

  Ogre::InputManager::touchEventDeal(this, 0x11u, a2, a3, a4, a5);
  return v6;
}


//======================================================================
// Ogre::InputManager::onTouchMoved(int,int *,float *,float *)
// address: 0x001672BC   size: 0x18 (24 bytes)
//======================================================================
__int64 __fastcall Ogre::InputManager::onTouchMoved(void **this, int a2, int *a3, float *a4, float *a5)
{
  __int64 v6; // [sp+0h] [bp-Ch]

  Ogre::InputManager::touchEventDeal(this, 0x12u, a2, a3, a4, a5);
  return v6;
}


//======================================================================
// Ogre::InputManager::onTouchCancelled(int,int *,float *,float *)
// address: 0x001672D4   size: 0x18 (24 bytes)
//======================================================================
__int64 __fastcall Ogre::InputManager::onTouchCancelled(void **this, int a2, int *a3, float *a4, float *a5)
{
  __int64 v6; // [sp+0h] [bp-Ch]

  Ogre::InputManager::touchEventDeal(this, 0x13u, a2, a3, a4, a5);
  return v6;
}


//======================================================================
// Ogre::InputManager::~InputManager()
// address: 0x0016736C   size: 0x5A (90 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12InputManagerD1Ev'
void __fastcall Ogre::InputManager::~InputManager(Ogre::InputManager *this)
{
  Ogre::InputManager *i; // r5
  void *v3; // r0
  void *v4; // r0

  for ( i = *((Ogre::InputManager **)this + 20);
        i != (Ogre::InputManager *)((char *)this + 72);
        i = (Ogre::InputManager *)sub_391DDC(i) )
  {
    v3 = (void *)sub_391F50(i, (char *)this + 72);
    operator delete(v3);
    --*((_DWORD *)this + 22);
  }
  sub_3BDF80((char *)this + 92);
  std::_Rb_tree<int,std::pair<int const,Ogre::TouchObject *>,std::_Select1st<std::pair<int const,Ogre::TouchObject *>>,std::less<int>,std::allocator<std::pair<int const,Ogre::TouchObject *>>>::_M_erase(
    (int)this + 68,
    *((_DWORD **)this + 19));
  v4 = *((void **)this + 10);
  if ( v4 != nullptr )
    operator delete(v4);
  std::deque<Ogre::InputEvent>::~deque((int)this);
  Ogre::Singleton<Ogre::InputManager>::ms_Singleton = 0;
}


//======================================================================
// Ogre::InputManager::onChar(char const*,int)
// address: 0x001673CC   size: 0x7C (124 bytes)
//======================================================================
void **__fastcall Ogre::InputManager::onChar(Ogre::InputManager *this, const char *a2, int a3)
{
  int v3; // r5
  unsigned __int8 v7; // [sp+Bh] [bp-29h] BYREF
  InputEvent v8; // [sp+Ch] [bp-28h] BYREF
  int v9; // [sp+28h] [bp-Ch]

  v3 = a3;
  if ( a3 < 0 )
    v3 = j_strlen(a2);
  v8.ie_source = 0;
  v8.ie_condition = 0;
  v9 = 0;
  v8.ie_proc = nullptr;
  if ( v3 > 7 )
  {
    v7 = 0;
    std::vector<char>::_M_fill_insert((int)&v8.ie_source, nullptr, v3 + 1, &v7);
    v8.ie_closure = (XtPointer)v8.ie_source;
  }
  else
  {
    v8.ie_closure = &v8.ie_next;
  }
  j_memcpy(v8.ie_closure, a2, v3);
  *((_BYTE *)v8.ie_closure + v3) = 0;
  Ogre::InputManager::handleEvent(this, &v8);
  return std::_Vector_base<char>::~_Vector_base((void **)&v8.ie_source);
}

