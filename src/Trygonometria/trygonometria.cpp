#include "trygonometria.h"
#include <cmath>

double getRad(double degree) {
	return degree * 3.14 / 180;
}
double degreemath::sin(double degree) {
	return std::sin(getRad(degree));
}
double degreemath::cos(double degree) {
	return std::cos(getRad(degree));
}
double degreemath::tg(double degree) {
	return std::tan(getRad(degree));
}
double degreemath::ctg(double degree) {
	return 1/tg(degree);
}



