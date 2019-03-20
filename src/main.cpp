#include "string"
#include "iostream"
#include "LaborkaConfig.h"

#ifdef USE_TRIGONOMETRY_DEGREE
	#include "trygonometria.h"
#else
	#include "cmath"
#endif

int main() {

	double result;
	#ifdef USE_TRIGONOMETRY_DEGREE
		result = degreemath::sin(45.0);
	#else
		result = cos(3.14/4.0);
	#endif

	std::cout << "result: " << result << std::endl;
	return 0; 
}
