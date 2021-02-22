#define _USE_MATH_DEFINES
#include "circle.h"
#include <cmath>
Circle::Circle() {
	radius = 0;
}

Circle::Circle(float r) {
	radius = r;
}

Circle::Circle(const Circle& c) {
	radius = c.radius;
}

Circle& Circle::operator=(const Circle& obj) {
	radius = obj.radius;
	return *this;
}

Circle& Circle::operator+(const Circle& obj) {
	radius += obj.radius;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Circle& obj) {
	os << obj.radius;
	return os;
}


float Circle::getRadius() {
	return radius;
}

void Circle::setRadius(float r) {
	radius = r;
}

float Circle::computeArea() {
	return M_PI * radius *radius;
}

// your code here

