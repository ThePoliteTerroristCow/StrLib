#include <system.hpp>
#include "StrLib.h"

//---------------------------------------------------------------------------
AnsiString _StrLib::ConvertStringToAnsi(std::string str) {
	//Convert std::string into UnicodeString
	std::wstring wStr;
	wStr.assign(str.begin(), str.end());
	String strBuf = wStr.c_str();

	//Convert to Ansi
	AnsiString ansiStr = strBuf.c_str();
	return ansiStr;
}
//---------------------------------------------------------------------------
AnsiString _StrLib::ConvertUnicodeToAnsi(UnicodeString str) {
	AnsiString ansiStr = str.c_str();
	return ansiStr;
}
//---------------------------------------------------------------------------
AnsiString _StrLib::ConvertWCharToAnsi(wchar_t *wChar) {
	std::wstring wStr(wChar);
	String strBuf = wStr.c_str();
	AnsiString ansiStr = strBuf.c_str();
    return ansiStr;
}
//---------------------------------------------------------------------------
char *_StrLib::ConvertAnsiToChar(AnsiString str) {
	char *charBuf = str.c_str();
	return charBuf;
}
//---------------------------------------------------------------------------
char *_StrLib::ConvertStringToChar(std::string str) {
	AnsiString ansiStr = str.c_str();
	char *charBuf = ansiStr.c_str();
	return charBuf;
}
//---------------------------------------------------------------------------
std::string _StrLib::ConvertAnsiToString(AnsiString str) {
	std::string strBuf = str.c_str();
	return strBuf;
}
//---------------------------------------------------------------------------
std::string _StrLib::ConvertUnicodeToString(UnicodeString str) {
	AnsiString ansiStr = str.c_str();
	std::string strBuf = ansiStr.c_str();
	return strBuf;
}
//---------------------------------------------------------------------------
std::wstring _StrLib::ConvertWCharToWString(wchar_t *wChar) {
	std::wstring wStr(wChar);
    return wStr;
}
//---------------------------------------------------------------------------
UnicodeString _StrLib::ConvertCharToUnicode(char *charBuf) {
	AnsiString ansiStr = charBuf;
	String strBuf = ansiStr.c_str();
	return strBuf;
}
//---------------------------------------------------------------------------
UnicodeString _StrLib::ConvertStringToUnicode(std::string str) {
	std::wstring wStr;
	wStr.assign(str.begin(), str.end());
	String strBuf = wStr.c_str();
    return strBuf;
}
//---------------------------------------------------------------------------
UnicodeString _StrLib::ConvertWCharToUnicode(wchar_t *wChar) {
	std::wstring wStr(wChar);
	String strBuf = wStr.c_str();
	return strBuf;
}
//---------------------------------------------------------------------------
wchar_t *_StrLib::ConvertAnsiToWChar(AnsiString str) {
	wchar_t *wChar = new wchar_t[str.WideCharBufSize()];
	return str.WideChar(wChar, str.WideCharBufSize());
}
//---------------------------------------------------------------------------
wchar_t *_StrLib::ConvertCharToWChar(char *charBuf) {
	const size_t cSize = strlen(charBuf) + 1;
	wchar_t *wChar = new wchar_t[cSize];
	mbstowcs(wChar, charBuf, cSize);
    return wChar;
}
//---------------------------------------------------------------------------
wchar_t *_StrLib::ConvertStringToWChar(std::string str) {
	//Convert std::string into UnicodeString
	std::wstring wStr;
	wStr.assign(str.begin(), str.end());
	String strBuf = wStr.c_str();

	//Convert UnicodeString to Ansi
	AnsiString ansiStr = strBuf.c_str();

	//Convert Ansi to wchar_t
	wchar_t *wChar = new wchar_t[ansiStr.WideCharBufSize()];
    return ansiStr.WideChar(wChar, ansiStr.WideCharBufSize());
}
//---------------------------------------------------------------------------
wchar_t *_StrLib::ConvertUnicodeToWChar(UnicodeString str) {
	AnsiString ansiStr = str.c_str();
	wchar_t *wChar = new wchar_t[ansiStr.WideCharBufSize()];
	return ansiStr.WideChar(wChar, ansiStr.WideCharBufSize());
}
//---------------------------------------------------------------------------
char *_StrLib::ConvertUnicodeToChar(UnicodeString str) {
	static char* charBuf;
	// first convert to AnsiString instead of Unicode.
	AnsiString ansiBuf(str);
	// allocate enough memory for your char array (and the null terminator)
	charBuf = new char[ansiBuf.Length()+1];
	// copy the contents of the AnsiString into your char array
	strcpy(charBuf, ansiBuf.c_str());
	ansiBuf = "";
    str = "";
	return charBuf;
}
//---------------------------------------------------------------------------
