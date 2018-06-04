#include <string>
#include "opencv2/core/version.hpp"
//#include "opencv2/core/mat.hpp"
#include "MathFuncsLib.h"

class JiaClass{
public:
	JiaClass(){};

	int addJia(int a, int b);
	std::string getOpenCVVersion();
	//void createEmptyMat();
	double add(double a, double b);
};