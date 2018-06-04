#include "pch.h"
#include "Class1.h"

using namespace WindowsRuntimeComponent1;
using namespace Platform;

Class1::Class1()
{
}

void Class1::Init() {
	_jiaClass = new JiaClass();
}

int Class1::AddTwoInts(int a, int b)
{
	return _jiaClass->addJia(a, b);
}

Platform::String ^ WindowsRuntimeComponent1::Class1::GetOpenCVString()
{
	return StringFromStd(_jiaClass->getOpenCVVersion());
}

double WindowsRuntimeComponent1::Class1::Add(double a, double b)
{
	return _jiaClass->add(a, b);
}

Platform::String ^ Class1::StringFromStd(std::string s_str)
{
	std::wstring wid_str = std::wstring(s_str.begin(), s_str.end());
	const wchar_t* w_char = wid_str.c_str();
	Platform::String^ p_string = ref new Platform::String(w_char);
	return p_string;
}
