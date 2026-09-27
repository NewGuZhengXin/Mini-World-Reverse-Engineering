// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TiXmlParsingData

//======================================================================
// TiXmlParsingData::Stamp(char const*,TiXmlEncoding)
// address: 0x001D9364   size: 0xAC (172 bytes)
//======================================================================
__int64 __fastcall TiXmlParsingData::Stamp(int *a1, unsigned int a2, int a3)
{
  int v5; // r6
  unsigned __int8 *v6; // r4
  int v7; // r0
  unsigned int v8; // r3
  int v9; // r2
  int v10; // r3
  int v11; // r3
  __int64 v13; // [sp+0h] [bp-Ch]

  HIDWORD(v13) = a2;
  LODWORD(v13) = a1[3];
  if ( (int)v13 > 0 )
  {
    v5 = *a1;
    v6 = (unsigned __int8 *)a1[2];
    v7 = a1[1];
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (unsigned int)v6 >= a2 )
        {
          *a1 = v5;
          a1[1] = v7;
          a1[2] = (int)v6;
          return v13;
        }
        v8 = *v6;
        if ( v8 != 10 )
          break;
        ++v5;
        if ( v6[1] == 13 )
        {
LABEL_15:
          v6 += 2;
          goto LABEL_16;
        }
LABEL_17:
        ++v6;
LABEL_16:
        v7 = 0;
      }
      if ( v8 > 0xA )
      {
        if ( v8 == 13 )
        {
          ++v5;
          if ( v6[1] == 10 )
            goto LABEL_15;
          goto LABEL_17;
        }
        if ( v8 == 239 )
        {
          if ( a3 != 1 )
            goto LABEL_30;
          v9 = v6[1];
          if ( v6[1] != 0 )
          {
            v10 = v6[2];
            if ( v6[2] != 0 )
            {
              v6 += 3;
              if ( v9 == 187 )
                goto LABEL_24;
              if ( v9 != 191 )
                goto LABEL_31;
              if ( v10 != 190 )
              {
LABEL_24:
                if ( v10 != 191 )
                  goto LABEL_31;
              }
            }
          }
        }
        else
        {
LABEL_26:
          if ( a3 != 1 )
          {
LABEL_30:
            ++v6;
            goto LABEL_31;
          }
          v11 = TiXmlBase::utf8ByteTable[v8];
          if ( v11 == 0 )
            v11 = 1;
          v6 += v11;
LABEL_31:
          ++v7;
        }
      }
      else
      {
        if ( *v6 == 0 )
          return v13;
        if ( v8 != 9 )
          goto LABEL_26;
        ++v6;
        v7 = (v7 / (int)v13 + 1) * v13;
      }
    }
  }
  return v13;
}

