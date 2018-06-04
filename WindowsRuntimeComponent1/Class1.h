#pragma once
#include "JiaClass.h"
namespace WindowsRuntimeComponent1
{
    public ref class Class1 sealed
    {
    public:
        Class1();
		void Init();
		int AddTwoInts(int a, int b);
		Platform::String^ GetOpenCVString();
		double Add(double a, double b);
	internal:
		Platform::String^ StringFromStd(std::string s);
	private:
		JiaClass* _jiaClass; 
    };
}
