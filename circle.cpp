#define _USE_MATH_DEFINES
#include "circle.h"
#include <cmath>

//default constructor
Circle::Circle() {
	radius = 0;
}

//constructor with float as input parameter
Circle::Circle(float r) {
	radius = r;
}

//copy constructor
Circle::Circle(const Circle& c) {
	radius = c.radius;
}

//assignment operator
Circle& Circle::operator=(const Circle& obj) {
	radius = obj.radius;
	return *this;
}

//add operator
Circle& Circle::operator+(const Circle& obj) {
	radius += obj.radius;
	return *this;
}

//output stream operator
std::ostream& operator<<(std::ostream& os, const Circle& obj) {
	os << obj.radius;
	return os;
}

//accessor
float Circle::getRadius() {
	return radius;
}

//mutator
void Circle::setRadius(float r) {
	radius = r;
}

//compute area of a circle
float Circle::computeArea() {
	return M_PI * radius *radius;
}


