// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OSEvent

//======================================================================
// Ogre::OSEvent::OSEvent(bool,bool)
// address: 0x00156176   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre7OSEventC1Ebb'
Ogre::OSEvent *__fastcall Ogre::OSEvent::OSEvent(Ogre::OSEvent *this, bool a2, bool a3)
{
  *(_BYTE *)this = a3;
  *((_BYTE *)this + 1) = a2;
  j_pthread_mutex_init((pthread_mutex_t *)((char *)this + 4), nullptr);
  j_pthread_cond_init((pthread_cond_t *)((char *)this + 8), nullptr);
  return this;
}


//======================================================================
// Ogre::OSEvent::~OSEvent()
// address: 0x00156194   size: 0x14 (20 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre7OSEventD1Ev'
void __fastcall Ogre::OSEvent::~OSEvent(Ogre::OSEvent *this)
{
  j_pthread_cond_destroy((pthread_cond_t *)((char *)this + 8));
  j_pthread_mutex_destroy((pthread_mutex_t *)((char *)this + 4));
}


//======================================================================
// Ogre::OSEvent::wait(unsigned int)
// address: 0x001561A8   size: 0xEC (236 bytes)
//======================================================================
int __fastcall Ogre::OSEvent::wait(Ogre::OSEvent *this, unsigned int a2)
{
  int result; // r0
  signed int v5; // r1
  int v6; // r0
  struct timespec v7; // [sp+8h] [bp-14h] BYREF
  struct timeval tv; // [sp+10h] [bp-Ch] BYREF

  if ( (double)a2 <= 1.79769313e308 )
  {
    j_gettimeofday(&tv, nullptr);
    v7.tv_sec = a2 / 0x3E8 + tv.tv_sec;
    v5 = 1000000 * (a2 % 0x3E8) + 1000 * tv.tv_usec;
    if ( v5 > 999999999 )
    {
      v7.tv_nsec = v5 - 1000000000;
      v7.tv_sec = a2 / 0x3E8 + tv.tv_sec + 1;
    }
    else
    {
      v7.tv_nsec = 1000000 * (a2 % 0x3E8) + 1000 * tv.tv_usec;
    }
    if ( j_pthread_mutex_lock((pthread_mutex_t *)((char *)this + 4)) == 0 )
    {
      do
      {
        if ( *((_BYTE *)this + 1) != 0 )
        {
          if ( *(_BYTE *)this == 0 )
            *((_BYTE *)this + 1) = 0;
          goto LABEL_20;
        }
        v6 = j_pthread_cond_timedwait((pthread_cond_t *)((char *)this + 8), (pthread_mutex_t *)((char *)this + 4), &v7);
      }
      while ( v6 == 0 );
      if ( v6 != 110 )
      {
LABEL_17:
        j_pthread_mutex_unlock((pthread_mutex_t *)((char *)this + 4));
        return -1;
      }
LABEL_20:
      if ( j_pthread_mutex_unlock((pthread_mutex_t *)((char *)this + 4)) == 0 )
        return 1;
    }
    return -1;
  }
  if ( j_pthread_mutex_lock((pthread_mutex_t *)((char *)this + 4)) != 0 )
    return -1;
  while ( *((_BYTE *)this + 1) == 0 )
  {
    if ( j_pthread_cond_wait((pthread_cond_t *)((char *)this + 8), (pthread_mutex_t *)((char *)this + 4)) == 0 )
      goto LABEL_17;
  }
  if ( *(_BYTE *)this == 0 )
    *((_BYTE *)this + 1) = 0;
  result = j_pthread_mutex_unlock((pthread_mutex_t *)((char *)this + 4));
  if ( result != 0 )
    return -1;
  return result;
}


//======================================================================
// Ogre::OSEvent::trigger(void)
// address: 0x001562B0   size: 0x3E (62 bytes)
//======================================================================
int __fastcall Ogre::OSEvent::trigger(Ogre::OSEvent *this)
{
  pthread_mutex_t *v1; // r5
  int v3; // r0
  pthread_cond_t *v4; // r0
  int v5; // r0

  v1 = (pthread_mutex_t *)((char *)this + 4);
  v3 = j_pthread_mutex_lock((pthread_mutex_t *)((char *)this + 4)) != 0
    || ((*((_BYTE *)this + 1) = 1, v4 = (pthread_cond_t *)((char *)this + 8), *(_BYTE *)this == 0)
      ? (v5 = j_pthread_cond_signal(v4))
      : (v5 = j_pthread_cond_broadcast(v4)),
        v5 != 0)
    || j_pthread_mutex_unlock(v1) != 0;
  return -v3;
}


//======================================================================
// Ogre::OSEvent::reset(void)
// address: 0x001562EE   size: 0x24 (36 bytes)
//======================================================================
int __fastcall Ogre::OSEvent::reset(Ogre::OSEvent *this)
{
  pthread_mutex_t *v1; // r4
  int v3; // r0

  v1 = (pthread_mutex_t *)((char *)this + 4);
  if ( j_pthread_mutex_lock((pthread_mutex_t *)((char *)this + 4)) != 0 )
  {
    v3 = 1;
  }
  else
  {
    *((_BYTE *)this + 1) = 0;
    v3 = j_pthread_mutex_unlock(v1) != 0;
  }
  return -v3;
}

