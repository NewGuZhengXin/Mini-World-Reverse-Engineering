// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GameUI

//======================================================================
// GameUI::onInputEvent(Ogre::InputEvent const&)
// address: 0x001B8438   size: 0x22 (34 bytes)
//======================================================================
int __fastcall GameUI::onInputEvent(GameUI *this, InputEvent *a2)
{
  int v2; // r2
  int result; // r0

  if ( g_pFrameMgr == 0 )
    return 1;
  v2 = *((unsigned __int8 *)this + 8);
  result = 1;
  if ( v2 != 0 )
    return FrameManager::OnInputMessage((FrameManager *)g_pFrameMgr, a2);
  return result;
}


//======================================================================
// GameUI::GameUI(void)
// address: 0x001B8460   size: 0x30 (48 bytes)
//======================================================================
// Alternative name is '_ZN6GameUIC1Ev'
void __fastcall GameUI::GameUI(GameUI *this)
{
  FrameManager *v2; // r5

  *(_DWORD *)this = &off_458F78;
  *((_DWORD *)this + 1) = 0;
  v2 = (FrameManager *)operator new(0x16Cu);
  FrameManager::FrameManager(v2);
  g_pFrameMgr = (int)v2;
  *((_BYTE *)this + 8) = 1;
}


//======================================================================
// GameUI::~GameUI()
// address: 0x001B8498   size: 0x3C (60 bytes)
//======================================================================
// Alternative name is '_ZN6GameUID1Ev'
void __fastcall GameUI::~GameUI(GameUI *this)
{
  XMLManager *v1; // r5
  void *v2; // r5

  v1 = *((XMLManager **)this + 1);
  *(_DWORD *)this = &off_458F78;
  if ( v1 != nullptr )
  {
    XMLManager::~XMLManager(v1);
    operator delete(v1);
  }
  v2 = (void *)g_pFrameMgr;
  if ( g_pFrameMgr != 0 )
  {
    FrameManager::~FrameManager((FrameManager *)g_pFrameMgr);
    operator delete(v2);
  }
}


//======================================================================
// GameUI::resetScreenSize(int,int)
// address: 0x001B84DC   size: 0x1C (28 bytes)
//======================================================================
bool __fastcall GameUI::resetScreenSize(GameUI *this, int a2, int a3)
{
  FrameManager *v3; // r0
  _BOOL4 result; // r0

  v3 = (FrameManager *)g_pFrameMgr;
  *(_DWORD *)(g_pFrameMgr + 12) = a3;
  *((_DWORD *)v3 + 2) = a2;
  result = FrameManager::setScaleXYByWinSize(v3, a2, a3);
  *(_BYTE *)(g_pFrameMgr + 188) = 1;
  return result;
}


//======================================================================
// GameUI::Update(float)
// address: 0x001B84FC   size: 0x10 (16 bytes)
//======================================================================
int __fastcall GameUI::Update(GameUI *this, float a2)
{
  return FrameManager::Update((UICursor **)g_pFrameMgr, a2);
}


//======================================================================
// GameUI::Render(void)
// address: 0x001B8510   size: 0x10 (16 bytes)
//======================================================================
int __fastcall GameUI::Render(GameUI *this)
{
  return FrameManager::Render((FrameManager *)g_pFrameMgr);
}


//======================================================================
// GameUI::SendEvent(char const*)
// address: 0x001B8524   size: 0x14 (20 bytes)
//======================================================================
void __fastcall GameUI::SendEvent(GameUI *this, char *a2)
{
  if ( a2 != nullptr )
    FrameManager::SendEvent((FrameManager *)g_pFrameMgr, a2);
}


//======================================================================
// GameUI::SetCurrentCursor(char const*)
// address: 0x001B853C   size: 0x10 (16 bytes)
//======================================================================
int __fastcall GameUI::SetCurrentCursor(GameUI *this, const char *a2)
{
  return FrameManager::setCursor((FrameManager *)g_pFrameMgr, a2);
}


//======================================================================
// GameUI::ShowCursor(bool)
// address: 0x001B8550   size: 0x16 (22 bytes)
//======================================================================
void __fastcall GameUI::ShowCursor(GameUI *this, int a2)
{
  UICursor::m_bShow = a2 != 0;
}


//======================================================================
// GameUI::isCursorDrag(void)
// address: 0x001B856C   size: 0x14 (20 bytes)
//======================================================================
int __fastcall GameUI::isCursorDrag(GameUI *this)
{
  return UICursor::IsInDragState(*(UICursor **)(g_pFrameMgr + 140));
}


//======================================================================
// GameUI::getCurrentCursor(void)
// address: 0x001B8584   size: 0x14 (20 bytes)
//======================================================================
int __fastcall GameUI::getCurrentCursor(GameUI *this)
{
  return UICursor::getCursor(*(UICursor **)(g_pFrameMgr + 140));
}


//======================================================================
// GameUI::ShowUIPanel(char const*)
// address: 0x001B859C   size: 0xE (14 bytes)
//======================================================================
char *__fastcall GameUI::ShowUIPanel(GameUI *this, char *a2, int a3)
{
  char *result; // r0

  if ( a2 != nullptr )
    return ShowUIPanel(a2, (int)a2, a3);
  return result;
}


//======================================================================
// GameUI::HideUIPanel(char const*)
// address: 0x001B85AA   size: 0xE (14 bytes)
//======================================================================
char *__fastcall GameUI::HideUIPanel(GameUI *this, char *a2)
{
  char *result; // r0

  if ( a2 != nullptr )
    return HideUIPanel(a2);
  return result;
}


//======================================================================
// GameUI::UIReceiveMessage(bool)
// address: 0x001B85B8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall GameUI::UIReceiveMessage(int this, bool a2)
{
  *(_BYTE *)(this + 8) = a2;
  return this;
}


//======================================================================
// GameUI::SetEditMode(int)
// address: 0x001B85BC   size: 0xE (14 bytes)
//======================================================================
void __fastcall GameUI::SetEditMode(GameUI *this, int a2)
{
  *(_DWORD *)(g_pFrameMgr + 304) = a2;
}


//======================================================================
// GameUI::GetEditMode(void)
// address: 0x001B85D0   size: 0xE (14 bytes)
//======================================================================
int __fastcall GameUI::GetEditMode(GameUI *this)
{
  return *(_DWORD *)(g_pFrameMgr + 304);
}


//======================================================================
// GameUI::LoadXMLFile(char const*)
// address: 0x001B85E4   size: 0x24 (36 bytes)
//======================================================================
int __fastcall GameUI::LoadXMLFile(XMLManager **this, const char *a2)
{
  int UIFromXml; // r4

  if ( a2 == nullptr )
    return 0;
  UIFromXml = XMLManager::LoadUIFromXml(*(this + 1), a2);
  if ( UIFromXml == 0 )
    return 0;
  FrameManager::InitRootFrames((LayoutFrame **)g_pFrameMgr);
  return UIFromXml;
}


//======================================================================
// GameUI::SaveXMLFile(char const*)
// address: 0x001B860C   size: 0x12 (18 bytes)
//======================================================================
int __fastcall GameUI::SaveXMLFile(XMLManager **this, const char *a2)
{
  if ( a2 != nullptr )
    return XMLManager::SaveUIToXml(*(this + 1), a2);
  else
    return 0;
}


//======================================================================
// GameUI::NewXMLFile(char const*)
// address: 0x001B8620   size: 0x88 (136 bytes)
//======================================================================
int __fastcall GameUI::NewXMLFile(GameUI *this, char *a2)
{
  _DWORD *v3; // r5
  _DWORD *v4; // r5
  int v5; // r3
  XMLManager *v6; // r5
  int TOCFile; // r5
  void *v8; // r4

  v3 = (_DWORD *)g_pFrameMgr;
  std::_Rb_tree<std::string,std::pair<std::string const,UIObject *>,std::_Select1st<std::pair<std::string const,UIObject *>>,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::_M_erase(
    g_pFrameMgr + 28,
    *(_DWORD **)(g_pFrameMgr + 36));
  v3[10] = v3 + 8;
  v3[11] = v3 + 8;
  v3[9] = 0;
  v3[12] = 0;
  v4 = (_DWORD *)g_pFrameMgr;
  std::_Rb_tree<std::string,std::pair<std::string const,UIObject *>,std::_Select1st<std::pair<std::string const,UIObject *>>,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::_M_erase(
    g_pFrameMgr + 52,
    *(_DWORD **)(g_pFrameMgr + 60));
  v4[16] = v4 + 14;
  v4[17] = v4 + 14;
  v5 = g_pFrameMgr;
  v4[15] = 0;
  v4[18] = 0;
  *(_DWORD *)(v5 + 80) = *(_DWORD *)(v5 + 76);
  v6 = (XMLManager *)operator new(1u);
  XMLManager::XMLManager(v6);
  *((_DWORD *)this + 1) = v6;
  TOCFile = XMLManager::LoadTOCFile(v6, a2);
  if ( TOCFile != 0 )
  {
    sub_3BE508(g_pFrameMgr + 184, a2);
    FrameManager::InitRootFrames((LayoutFrame **)g_pFrameMgr);
  }
  else
  {
    v8 = *((void **)this + 1);
    if ( v8 != nullptr )
    {
      XMLManager::~XMLManager(*((XMLManager **)this + 1));
      operator delete(v8);
    }
  }
  return TOCFile;
}


//======================================================================
// GameUI::Create(char const*,int,int,Ogre::UIRenderer *,Ogre::ScriptVM *)
// address: 0x001B86AC   size: 0x5E (94 bytes)
//======================================================================
int __fastcall GameUI::Create(GameUI *this, char *a2, int a3, int a4, Ogre::UIRenderer *a5, Ogre::ScriptVM *a6)
{
  DEFAULT_UI_WIDTH = a3;
  DEFAULT_UI_HEIGHT = a4;
  if ( a2 == nullptr )
    return 0;
  g_pDisplay = (int)a5;
  g_pUIScriptVM = (int)a6;
  GameUI::resetScreenSize(this, a3, a4);
  tolua_UITolua_open(*(_DWORD *)g_pUIScriptVM);
  Ogre::ScriptVM::setUserTypePointer(a6, "UIFrameMgr", "FrameManager", (void *)g_pFrameMgr);
  return GameUI::NewXMLFile(this, a2);
}

