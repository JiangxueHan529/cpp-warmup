// Name:Jiangxue Han
// Date:02/17/2021

#pragma once
#include <iostream>

#ifndef circle_H
#define circle_H

class Circle {
private:
	float radius;

public:
	Circle();
	Circle(float radius);
	Circle(const Circle& obj);
	Circle& operator=(const Circle& obj);
	Circle& operator+(const Circle& obj);
	friend std::ostream& operator<<(std::ostream& os, const Circle& obj);
	float getRadius();
	void setRadius(float radius);
	float computeArea();
};

#endif


