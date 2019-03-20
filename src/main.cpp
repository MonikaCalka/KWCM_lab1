#include "string"
#include "iostream"
#include "LaborkaConfig.h"

#ifdef USE_TRIGONOMETRY_DEGREE
	#include "trygonometria.h"
#else
	#include "cmath"
#endif

int main( int argc, char* argv[]) {

	if(argc == 3){
		double result = 0;
		std::string option = argv[1];

		if(!option.compare("--sin")){
			#ifdef USE_TRIGONOMETRY_DEGREE
				result = degreemath::sin(atof(argv[2]));
			#else
				result = sin(atof(argv[2]));
			#endif

			std::cout << "result: " << result << std::endl;

		} else if(!option.compare("--cos")){
			#ifdef USE_TRIGONOMETRY_DEGREE
				result = degreemath::cos(atof(argv[2]));
			#else
				result = cos(atof(argv[2]));
			#endif

			std::cout << "result: " << result << std::endl;

		} 	else if(!option.compare("--tg")){
			#ifdef USE_TRIGONOMETRY_DEGREE
				result = degreemath::tg(atof(argv[2]));
			#else
				result = cos(tan(argv[2]));
			#endif

			std::cout << "result: " << result << std::endl;

		} 	else if(!option.compare("--ctg")){
			#ifdef USE_TRIGONOMETRY_DEGREE
				result = degreemath::ctg(atof(argv[2]));
			#else
				result = 1/std::tan(atof(argv[2]));
			#endif

			std::cout << "result: " << result << std::endl;
		} 
		return 0; 
	}
}
