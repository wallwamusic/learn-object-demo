#include <iostream>
#include "Circle.h"

Circle::Circle() {
	this->r = 5.0;
}

Circle::Circle(double R) {
	this->r = R;
}

Circle::~Circle()
{
	std::cout << "销毁了半径为" << this->r << "的对象" << std::endl;
}

double Circle::Area()
{
	return 3.14 * r * r;
}
