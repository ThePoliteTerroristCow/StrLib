# StrLib

*// Declare globally as "_StrLib StrLib", then simply use #include "StrLib.h" to use the functions where needed*<br/>
*// All the functions can be accessed via 'StrLib.'*<br/>

**// EXAMPLE USAGE**<br/>
	#include "StrLib.h"<br/>
	_StrLib StrLib;

	int main() {
	  UnicodeString uStringBuf = "This is a test";
	  AnsiString ansiBuf = StrLib.ConvertUnicodeToAnsi(uStringBuf);
	  std::string stdStr1 = StrLib.ConvertAnsiToString(ansiBuf);
	  std::string stdStr2 = StrLib.ConvertUnicodeToString(uStringBuf);
  
	  //You can convert the data you have to the data type you desire by utilizing multiple convertion steps in a single line; for example:
	  std::string stdStr3 = "1";
	  int iBuf = System::Sysutils::StrToInt(StrLib.ConvertStringToUnicode(stdStr1)); //Converts from 'std::string' to 'UnicodeString' to 'Int'
	  wchar_t *wcharBuf;
	  wcharBuf = StrLib.ConvertStringToWChar(StrLib.ConvertUnicodeToString(IntToStr(iBuf))); //Converts from 'Int' to 'UnicodeString' to 'std::string' to 'wchar_t*'
	  return 0;
	}
