// Declare globally as "_StrLib StrLib", then simply use #include "StrLib.h" to use the functions where needed
// ----------
// All the functions can be accessed via 'StrLib', or whatever you choose to rename "extern _StrLib <rename>" to

#pragma once
#include <System.hpp>

class _StrLib {
public:
	AnsiString ConvertStringToAnsi(std::string str);
	AnsiString ConvertUnicodeToAnsi(UnicodeString str);
	AnsiString ConvertWCharToAnsi(wchar_t *wChar);
	char *ConvertAnsiToChar(AnsiString str);
	char *ConvertStringToChar(std::string str);
	std::string ConvertAnsiToString(AnsiString str);
	std::string ConvertUnicodeToString(UnicodeString str);
    std::wstring ConvertWCharToWString(wchar_t *wChar);
	UnicodeString ConvertCharToUnicode(char *charBuf);
	UnicodeString ConvertStringToUnicode(std::string str);
    UnicodeString ConvertWCharToUnicode(wchar_t *wChar);
	wchar_t *ConvertAnsiToWChar(AnsiString str);
	wchar_t *ConvertCharToWChar(char *charBuf);
	wchar_t *ConvertStringToWChar(std::string str);
	wchar_t *ConvertUnicodeToWChar(UnicodeString str);
	char *ConvertUnicodeToChar(UnicodeString str);
};

extern _StrLib StrLib;


