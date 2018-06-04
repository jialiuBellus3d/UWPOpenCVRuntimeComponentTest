#include "JiaClass.h"
#include <string>

int JiaClass::addJia(int a, int b)
{
	return(a + b);
}

std::string JiaClass::getOpenCVVersion()
{
	return CV_VERSION;
}

double JiaClass::add(double a, double b)
{
	return MathFuncs::MyMathFuncs::Add(a, b);
}

void JiaClass::createEmptyMat()
{
	cv::Mat Scribble = cv::Mat::zeros(250, 250, CV_8UC3);
}
