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

float Circle::getter() {
	return radius;
}

void Circle::setter(float r) {
	radius = r;
}

float Circle::computeArea() {
	return M_PI * radius *radius;
}

// your code here

