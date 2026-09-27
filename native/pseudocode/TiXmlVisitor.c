// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TiXmlVisitor

//======================================================================
// TiXmlVisitor::~TiXmlVisitor()
// address: 0x001DA33C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN12TiXmlVisitorD1Ev'
void __fastcall TiXmlVisitor::~TiXmlVisitor(TiXmlVisitor *this)
{
  *(_DWORD *)this = &off_459828;
}


//======================================================================
// TiXmlVisitor::VisitEnter(TiXmlDocument const&)
// address: 0x001DA34C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall TiXmlVisitor::VisitEnter(TiXmlVisitor *this, const TiXmlDocument *a2)
{
  return 1;
}


//======================================================================
// TiXmlVisitor::VisitExit(TiXmlDocument const&)
// address: 0x001DA350   size: 0x4 (4 bytes)
//======================================================================
int __fastcall TiXmlVisitor::VisitExit(TiXmlVisitor *this, const TiXmlDocument *a2)
{
  return 1;
}


//======================================================================
// TiXmlVisitor::VisitEnter(TiXmlElement const&,TiXmlAttribute const*)
// address: 0x001DA354   size: 0x4 (4 bytes)
//======================================================================
int TiXmlVisitor::VisitEnter()
{
  return 1;
}


//======================================================================
// TiXmlVisitor::VisitExit(TiXmlElement const&)
// address: 0x001DA358   size: 0x4 (4 bytes)
//======================================================================
int TiXmlVisitor::VisitExit()
{
  return 1;
}


//======================================================================
// TiXmlVisitor::Visit(TiXmlDeclaration const&)
// address: 0x001DA35C   size: 0x4 (4 bytes)
//======================================================================
int TiXmlVisitor::Visit()
{
  return 1;
}


//======================================================================
// TiXmlVisitor::Visit(TiXmlText const&)
// address: 0x001DA360   size: 0x4 (4 bytes)
//======================================================================
int __fastcall TiXmlVisitor::Visit(TiXmlVisitor *this, const TiXmlText *a2)
{
  return 1;
}


//======================================================================
// TiXmlVisitor::Visit(TiXmlComment const&)
// address: 0x001DA364   size: 0x4 (4 bytes)
//======================================================================
int TiXmlVisitor::Visit()
{
  return 1;
}


//======================================================================
// TiXmlVisitor::Visit(TiXmlUnknown const&)
// address: 0x001DA368   size: 0x4 (4 bytes)
//======================================================================
int TiXmlVisitor::Visit()
{
  return 1;
}


//======================================================================
// TiXmlVisitor::~TiXmlVisitor()
// address: 0x001DA45C   size: 0x16 (22 bytes)
//======================================================================
void __fastcall TiXmlVisitor::~TiXmlVisitor(TiXmlVisitor *this)
{
  *(_DWORD *)this = &off_459828;
  operator delete(this);
}

